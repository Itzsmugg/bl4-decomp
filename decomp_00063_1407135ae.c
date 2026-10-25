// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407135ae FUN_1407135ae body=727 status=ok
// SIG undefined FUN_1407135ae(void)

void FUN_1407135ae(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x50);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x50);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x4c) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 9) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_14071382e;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_14071382e:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140713886 FUN_140713886 body=1143 status=ok
// SIG undefined FUN_140713886(void)

longlong * FUN_140713886(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar18 = local_b0._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar6 = (ulonglong *)param_1[1];
    piVar3 = (int *)*puVar6 + 1;
    if ((int *)puVar6[1] < piVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar6;
      *puVar6 = (ulonglong)piVar3;
    }
    local_78 = param_2 + 2;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar8 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar16 = local_98._4_4_;
      local_98 = uVar8;
      do {
        lVar10 = *local_b0;
        FUN_14021219d(param_1,lVar10 + (longlong)iVar16 * 0x50);
        FUN_140713cfe(param_1,lVar10 + (longlong)iVar16 * 0x50 + 0x10);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar16 = local_98._4_4_;
        uVar8 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_b0 = (longlong *)((ulonglong)local_b0._4_4_ << 0x20);
    puVar6 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_b0,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_b0);
      }
    }
    else {
      local_b0 = (longlong *)CONCAT44(uVar18,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar1;
    }
    FUN_141525ade(param_2,(ulonglong)local_b0 & 0xffffffff);
    uVar8 = local_98;
    if (0 < (int)local_b0) {
      plVar2 = param_2 + 2;
      iVar16 = 0;
      do {
        if (*(int *)((longlong)param_2 + 0x34) == 0) {
          iVar20 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar20 + 1;
          if (*(int *)((longlong)param_2 + 0xc) == iVar20) {
            FUN_1406fba42(param_2,iVar20);
          }
          iVar17 = (int)param_2[5];
          if (iVar17 == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar9 = iVar17 + -1;
            }
            iVar9 = iVar9 >> 5;
          }
          iVar14 = iVar17 + 1;
          iVar19 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar19 = iVar17;
          }
          if (iVar19 >> 5 == iVar9) {
            *(int *)(param_2 + 5) = iVar14;
          }
          else {
            if (*(int *)((longlong)param_2 + 0x2c) <= iVar17) {
              if (iVar17 + 0x20U < 0xa0) {
                iVar14 = 0x80;
                iVar9 = iVar17;
              }
              else {
                uVar18 = iVar17 + 0x20U >> 5;
                if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
                  uVar13 = 4;
                  if (4 < uVar18) {
                    uVar13 = uVar18;
                  }
                }
                else {
                  uVar13 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
                }
                uVar11 = FUN_144a3809e(uVar13 << 2,0);
                iVar9 = (int)(uVar11 >> 2);
                iVar14 = iVar9 << 5;
                if (iVar9 < (int)uVar18) {
                  iVar14 = -0x20;
                }
                iVar9 = (int)param_2[5];
              }
              *(int *)((longlong)param_2 + 0x2c) = iVar14;
              FUN_1446efbd8(plVar2,iVar9);
              iVar14 = (int)param_2[5] + 1;
            }
            iVar9 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar9 = iVar14;
            }
            *(int *)(param_2 + 5) = iVar14;
            if (iVar14 % 0x20 != 0) {
              plVar15 = (longlong *)param_2[4];
              if ((longlong *)param_2[4] == (longlong *)0x0) {
                plVar15 = plVar2;
              }
              bVar12 = -(char)(iVar14 % 0x20);
              *(uint *)((longlong)plVar15 + (longlong)(iVar9 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar9 >> 5) * 4) <<
                         (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            }
          }
          lVar10 = (longlong)iVar20;
          plVar15 = (longlong *)param_2[4];
          if ((longlong *)param_2[4] == (longlong *)0x0) {
            plVar15 = plVar2;
          }
          bVar12 = (byte)iVar17 & 0x1f;
          puVar4 = (uint *)((longlong)plVar15 + (longlong)(iVar19 >> 5) * 4);
          *puVar4 = *puVar4 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
        }
        else {
          iVar20 = (int)param_2[6];
          lVar10 = (longlong)iVar20;
          iVar17 = *(int *)(*param_2 + 4 + lVar10 * 0x50);
          *(int *)(param_2 + 6) = iVar17;
          iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
          *(int *)((longlong)param_2 + 0x34) = iVar9;
          if (iVar9 != 0) {
            *(undefined4 *)(*param_2 + (longlong)iVar17 * 0x50) = 0xffffffff;
          }
        }
        plVar15 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar15 = plVar2;
        }
        iVar17 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar17 = iVar20;
        }
        puVar4 = (uint *)((longlong)plVar15 + (longlong)(iVar17 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << ((byte)iVar20 & 0x1f);
        lVar7 = *param_2;
        puVar5 = (undefined8 *)(lVar7 + lVar10 * 0x50);
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[8] = 0;
        *(undefined4 *)(puVar5 + 9) = 0xffffffff;
        FUN_14021219d(param_1,lVar7 + lVar10 * 0x50);
        FUN_140713cfe(param_1,puVar5 + 2);
        iVar16 = iVar16 + 1;
        uVar8 = local_98;
      } while (iVar16 < (int)local_b0);
    }
  }
  local_98 = uVar8;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140713cfe FUN_140713cfe body=536 status=ok
// SIG undefined FUN_140713cfe(void)

longlong * FUN_140713cfe(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14021219d();
  FUN_14021219d(param_1,param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x24),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x28),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x2c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x30),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x34);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140713f16 FUN_140713f16 body=292 status=ok
// SIG undefined FUN_140713f16(void)

undefined8 FUN_140713f16(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140714034;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140714034;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140714034:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140713fdd;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_140713fdd;
    }
  }
  uVar6 = 0;
LAB_140713fdd:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071403c FUN_14071403c body=1403 status=ok
// SIG undefined FUN_14071403c(void)

void FUN_14071403c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  code *pcVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined4 local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  PSRWLOCK local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    plVar13 = *(longlong **)(param_1 + 0x120);
    plVar11 = plVar13 + (longlong)*(int *)(param_1 + 0x128) * 2;
    pcVar16 = AcquireSRWLockExclusive_exref;
    do {
      plVar4 = (longlong *)plVar13[1];
      if (plVar4 != (longlong *)0x0) {
        plVar8 = (longlong *)*plVar13;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar12 = (int)plVar4[1];
        do {
          if (iVar12 == 0) goto LAB_140714178;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar19 = iVar12 == iVar6;
          if (bVar19) {
            *(int *)(plVar4 + 1) = iVar12 + 1;
            iVar6 = iVar12;
          }
          iVar12 = iVar6;
          UNLOCK();
        } while (!bVar19);
        if (plVar8 != (longlong *)0x0) {
          local_80 = (PSRWLOCK)(plVar8 + 0x2d);
          (*pcVar16)();
          *(int *)(plVar8 + 0x2c) = (int)plVar8[0x2c] + 1;
          plVar9 = *(longlong **)(param_1 + 0x118);
          local_98 = plVar8;
          if (plVar9 != (longlong *)0x0) {
            if (DAT_14cb56270 == 0) {
              local_78 = FUN_1449e2820;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_1427b09ee;
              local_c0 = &local_78;
              local_c8 = &LAB_148630fef;
              local_d0 = FUN_1464b6a91;
              local_d8 = L"Engine";
              local_e0 = 0;
              local_e8 = 0x10004001;
              local_f0 = 8;
              local_f8 = 0x28;
              FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee)
              ;
            }
            plVar8 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb56270);
            if (plVar8 != (longlong *)0x0) {
              if (DAT_14cb56270 == 0) {
                local_78 = FUN_1449e2820;
                local_b0 = FUN_14081d0ea;
                local_b8 = FUN_1427b09ee;
                local_c0 = &local_78;
                local_c8 = &LAB_148630fef;
                local_d0 = FUN_1464b6a91;
                local_d8 = L"Engine";
                local_e0 = 0;
                local_e8 = 0x10004001;
                local_f0 = 8;
                local_f8 = 0x28;
                FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                              &DAT_148630fee);
              }
              plVar9 = (longlong *)FUN_144718840(plVar8,DAT_14cb56270);
              if (((plVar9 != (longlong *)0x0 && plVar8 != plVar9) &&
                  (lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar10 != 0)) &&
                 (iVar12 = *(int *)(param_1 + 0x138), 0 < iVar12)) {
                lVar14 = 0x54;
                lVar18 = 0x30;
                lVar17 = 0;
                local_a4 = param_2;
                local_90 = lVar10;
                local_88 = plVar11;
                do {
                  if ((lVar17 < *(int *)(lVar10 + 0x40)) && (lVar17 < (int)local_98[1])) {
                    lVar10 = *(longlong *)(lVar10 + 0x38);
                    local_a0 = lVar18 + lVar10 + -0x30;
                    lVar5 = *local_98;
                    fVar20 = (float)FUN_14055830e();
                    pfVar2 = (float *)(lVar5 + -0x2c + lVar14);
                    iVar12 = *(int *)(lVar5 + -0x28 + lVar14);
                    if ((fVar20 != *pfVar2) || (NAN(fVar20) || NAN(*pfVar2))) {
LAB_1407141ea:
                      *(float *)(lVar5 + -0x2c + lVar14) = fVar20;
                      *(int *)(lVar5 + -0x28 + lVar14) = iVar12 + 1;
                    }
                    else if (iVar12 == 0) {
                      iVar12 = 0;
                      goto LAB_1407141ea;
                    }
                    plVar11 = *(longlong **)(lVar10 + 8 + lVar18);
                    if ((plVar11 == (longlong *)0x0) ||
                       (iVar12 = *(int *)(lVar10 + 4 + lVar18), iVar12 == 0)) {
LAB_1407142b8:
                      fVar20 = *(float *)(lVar5 + -0x14 + lVar14);
                      iVar12 = *(int *)(lVar5 + -0x10 + lVar14);
                      if ((fVar20 != 1.0) || (NAN(fVar20))) {
LAB_1407142d9:
                        *(undefined4 *)(lVar5 + -0x14 + lVar14) = 0x3f800000;
                        goto LAB_1407142e2;
                      }
                      if (iVar12 == 0) {
                        iVar12 = 0;
                        goto LAB_1407142d9;
                      }
                    }
                    else {
                      puVar15 = (uint *)(lVar10 + lVar18);
                      uVar3 = *puVar15;
                      if (((int)uVar3 < 0) ||
                         ((((DAT_14c9647dc <= (int)uVar3 ||
                            (lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8),
                            lVar10 == 0)) || (*(int *)(lVar10 + 0x10) != iVar12)) ||
                          ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))) goto LAB_1407142b8;
                      if (*(code **)(*plVar11 + 0x10) == (code *)&LAB_1447a1f2e) {
                        plVar11 = plVar11 + 0xd9;
                      }
                      else {
                        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x10))();
                      }
                      cVar7 = FUN_14486eb0e(plVar11,puVar15);
                      if (cVar7 == '\0') goto LAB_1407142b8;
                      lVar10 = FUN_140280ec4(puVar15);
                      fVar20 = *(float *)(lVar10 + 0x3c);
                      pfVar2 = (float *)(lVar5 + -0x14 + lVar14);
                      iVar12 = *(int *)(lVar5 + -0x10 + lVar14);
                      if ((fVar20 == *pfVar2) && (!NAN(fVar20) && !NAN(*pfVar2))) {
                        if (iVar12 == 0) {
                          iVar12 = 0;
                          goto LAB_1407142af;
                        }
                        goto LAB_1407142e9;
                      }
LAB_1407142af:
                      *(float *)(lVar5 + -0x14 + lVar14) = fVar20;
LAB_1407142e2:
                      *(int *)(lVar5 + -0x10 + lVar14) = iVar12 + 1;
                    }
LAB_1407142e9:
                    param_2 = local_a4;
                    local_78 = (code *)CONCAT71(local_78._1_7_,4);
                    cVar7 = FUN_14071466e(local_a0,&local_78);
                    if (cVar7 != '\0') {
                      iVar12 = *(int *)(lVar5 + lVar14);
                      if ((char)local_78 == *(char *)(lVar5 + -4 + lVar14)) {
                        if (iVar12 != 0) goto LAB_14071432d;
                        iVar12 = 0;
                      }
                      *(char *)(lVar5 + -4 + lVar14) = (char)local_78;
                      *(int *)(lVar5 + lVar14) = iVar12 + 1;
                    }
LAB_14071432d:
                    iVar12 = *(int *)(param_1 + 0x138);
                    lVar10 = local_90;
                    plVar11 = local_88;
                  }
                  lVar17 = lVar17 + 1;
                  lVar14 = lVar14 + 0x58;
                  lVar18 = lVar18 + 0x88;
                } while (lVar17 < iVar12);
              }
            }
          }
          ReleaseSRWLockExclusive(local_80);
          pcVar16 = AcquireSRWLockExclusive_exref;
        }
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
LAB_140714178:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar11);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1407145b8(param_1 + 0x100,param_2,param_3);
  return;
}



// FUNCTION 1407145b8 FUN_1407145b8 body=181 status=ok
// SIG undefined FUN_1407145b8(void)

void FUN_1407145b8(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140714653;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140714653:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14071466e FUN_14071466e body=276 status=ok
// SIG undefined FUN_14071466e(void)

undefined8 FUN_14071466e(char *param_1,undefined1 *param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint *puVar7;
  
  if (*param_1 == '\0') {
    fVar1 = *(float *)(param_1 + 0x74);
    if ((0.0001 <= ABS(fVar1)) || (*(float *)(param_1 + 0x54) <= fVar1)) {
      if (0.0001 <= ABS(fVar1 - *(float *)(param_1 + 0x54))) goto LAB_140714774;
      *param_2 = 2;
    }
    else {
      *param_2 = 0;
    }
    uVar5 = 1;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x38);
    if ((plVar6 != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0)) {
      puVar7 = (uint *)(param_1 + 0x30);
      uVar2 = *puVar7;
      if ((int)uVar2 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar2) {
        return 0;
      }
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x34))) &&
         ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar6 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar6 = plVar6 + 0xd9;
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))();
        }
        cVar3 = FUN_14486eb0e(plVar6,puVar7);
        if (cVar3 != '\0') {
          uVar5 = FUN_140280ec4(puVar7);
          uVar5 = FUN_140280f4a(uVar5,param_2);
          return uVar5;
        }
      }
    }
LAB_140714774:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 140714782 FUN_140714782 body=45 status=ok
// SIG undefined FUN_140714782(void)

void FUN_140714782(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14c844ed8;
  if (((DAT_14c844ed8 != (undefined8 *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     (*(int *)(lVar1 + 0x40) != param_2)) {
    *(int *)(lVar1 + 0x40) = param_2;
    FUN_1407147b0(*puVar2,*param_1);
    return;
  }
  return;
}



// FUNCTION 1407147b0 FUN_1407147b0 body=178 status=ok
// SIG undefined FUN_1407147b0(void)

void FUN_1407147b0(longlong param_1,longlong param_2)

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
  iVar3 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar3 + 1U) {
    FUN_1402e4352((longlong *)(param_1 + 0xb0),iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 8) = param_2;
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140714831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  return;
}



// FUNCTION 140714862 FUN_140714862 body=831 status=ok
// SIG undefined FUN_140714862(void)

void FUN_140714862(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ushort *puVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) goto LAB_140714a64;
  iVar2 = *(int *)(lVar5 + 0x198);
  plVar8 = (longlong *)FUN_140714ba2();
  lVar9 = *plVar8;
  pRVar1 = (PSRWLOCK)(lVar9 + 0xa0);
  AcquireSRWLockShared(pRVar1);
  iVar3 = *(int *)(lVar9 + 0x78);
  ReleaseSRWLockShared(pRVar1);
  if (iVar2 != iVar3) {
    plVar8 = (longlong *)FUN_140714ba2(param_1);
    lVar9 = *plVar8;
    AcquireSRWLockShared((PSRWLOCK)(lVar9 + 0xa0));
    *(undefined4 *)(lVar5 + 0x198) = *(undefined4 *)(lVar9 + 0x78);
    FUN_140bee9ec(lVar5 + 0x188,lVar9 + 0x68);
    ReleaseSRWLockShared((PSRWLOCK)(lVar9 + 0xa0));
    FUN_14573e14c(param_1);
  }
  plVar8 = (longlong *)FUN_140714ba2(param_1);
  lVar9 = *plVar8;
  pRVar1 = (PSRWLOCK)(lVar9 + 0xa0);
  AcquireSRWLockShared(pRVar1);
  if (*(int *)(param_1 + 0x344) == *(int *)(lVar9 + 0xc)) {
    ReleaseSRWLockShared(pRVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(lVar9 + 8);
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(lVar9 + 0xc);
    ReleaseSRWLockShared(pRVar1);
    if (*(char *)(param_1 + 0x340) == '\0') {
      plVar8 = (longlong *)FUN_140714ba2(param_1);
      lVar9 = *plVar8;
      pRVar1 = (PSRWLOCK)(lVar9 + 0xa0);
      AcquireSRWLockShared(pRVar1);
      iVar2 = *(int *)(lVar9 + 0x60);
      ReleaseSRWLockShared(pRVar1);
      if (iVar2 == -1) {
        FUN_14573e1b2(param_1);
      }
    }
  }
  cVar7 = FUN_140714c1e(lVar5 + 0x1c8,*(undefined4 *)(param_1 + 0x208));
  if ((cVar7 != '\0') && (puVar6 = *(ushort **)(lVar5 + 0x80), puVar6 != (ushort *)0x0)) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  if (((((*(int *)(param_1 + 0x34) == 0) || (uVar4 = *(uint *)(param_1 + 0x30), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0 ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x34))))) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_140714a64;
  FUN_1400021e4(&DAT_14cbe0110,&local_68);
  puVar10 = local_68;
  if (local_60 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_58,L"UI.State.%s",puVar10);
  iVar2 = local_50 + -1;
  if (local_50 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_48,iVar2,local_58,1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1400702d4(DAT_14caa8580,local_40,local_48,1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140714a88:
    lVar9 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x30);
    lVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_140714a88;
      lVar9 = *plVar8;
    }
  }
  cVar7 = FUN_140426394(lVar9 + 0x3c0,local_40);
  if (*(char *)(lVar5 + 0x231) != cVar7) {
    *(char *)(lVar5 + 0x231) = cVar7;
    puVar6 = *(ushort **)(lVar5 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
LAB_140714a64:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140714ba2 FUN_140714ba2 body=123 status=ok
// SIG undefined FUN_140714ba2(void)

longlong FUN_140714ba2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140714c1e FUN_140714c1e body=399 status=ok
// SIG undefined FUN_140714c1e(void)

bool FUN_140714c1e(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined4 local_6c;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = param_2;
  FUN_1448d5e3c(&local_80,&local_6c);
  iVar8 = *(int *)(*(longlong *)(local_80 + 0x640) + 0x20) +
          *(int *)(*(longlong *)(local_80 + 0x630) + 0x20);
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 != iVar8) {
    *(int *)(param_1 + 0x60) = iVar8;
    iVar4 = *(int *)(param_1 + 0x5c);
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((iVar4 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      FUN_1408be2c4(param_1 + 0x50,0);
    }
    local_98 = 0;
    uStack_90 = 0;
    FUN_140715a2c(param_1,&local_98);
    if ((longlong)(int)uStack_90 == 0) {
      uVar5 = 0;
    }
    else {
      lVar7 = (longlong)(int)uStack_90 << 4;
      lVar6 = local_98;
      do {
        FUN_14000bbd8(local_68,lVar6,0);
        FUN_140714dae(param_1,local_68);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      uVar5 = uStack_90 & 0xffffffff;
    }
    FUN_1447a1747(local_98,uVar5);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar3 != iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140714dae FUN_140714dae body=110 status=ok
// SIG undefined FUN_140714dae(void)

void FUN_140714dae(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1400b2348(param_2,local_38,1);
  FUN_140714e1e(param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140714e1e FUN_140714e1e body=1023 status=ok
// SIG undefined FUN_140714e1e(void)

/* WARNING: Removing unreachable block (ram,0x0001407151fe) */
/* WARNING: Removing unreachable block (ram,0x0001407150ed) */

void FUN_140714e1e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_8c = param_3;
  FUN_1448d5e3c(&local_a0);
  local_d8 = *(longlong *)(local_a0 + 0x630);
  SRWLock = (PSRWLOCK)(local_d8 + 0x28);
  AcquireSRWLockShared(SRWLock);
  local_e0 = *(longlong *)(local_a0 + 0x640);
  SRWLock_00 = (PSRWLOCK)(local_e0 + 0x28);
  AcquireSRWLockShared(SRWLock_00);
  iVar4 = *(int *)(param_2 + 1);
  uVar7 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar4 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    lVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = ((uint)(0x19 < (ushort)puVar5[lVar10] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar10]) -
              0x20;
      uVar11 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar9) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar9 >> 8 & 0xff) * 4));
      lVar10 = lVar10 + 1;
    } while (iVar6 != (int)lVar10);
  }
  iVar4 = FUN_140d080c0(param_1,uVar7,param_2);
  if (iVar4 != -1) {
    lVar10 = *param_1 + (longlong)iVar4 * 0x28;
    if (((lVar10 != 0) && (*param_1 + (longlong)iVar4 * 0x28 != -0x10)) &&
       ((longlong)*(int *)(lVar10 + 0x18) != 0)) {
      lVar13 = *(longlong *)(lVar10 + 0x10);
      lVar10 = (longlong)*(int *)(lVar10 + 0x18) << 4;
      local_f0 = param_1 + 10;
      do {
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_ac = 0;
        local_a4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        cVar3 = FUN_14071521e(lVar13,&local_ac,&local_b8,&local_88);
        if (cVar3 != '\0') {
          uStack_cc = 0;
          iStack_c8 = 0;
          FUN_14052b5e0(&local_d0,"character",0);
          if (((int)local_ac == local_d0) && (local_a4 == iStack_c8)) {
            cVar3 = FUN_1407153dc(local_d8,&local_b8,&local_88);
            if (cVar3 != '\0') {
              FUN_144a2b0a4(param_2,&local_d0);
              iVar4 = (int)param_1[0xb];
              *(uint *)(param_1 + 0xb) = iVar4 + 1U;
              if (*(uint *)((longlong)param_1 + 0x5c) < iVar4 + 1U) {
                FUN_1447a1bd6(local_f0,iVar4);
              }
              lVar8 = *local_f0;
              lVar12 = (longlong)iVar4 * 0x10;
              *(undefined8 *)(lVar8 + lVar12) = 0;
              *(ulonglong *)(lVar8 + lVar12) = CONCAT44(uStack_cc,local_d0);
              local_d0 = 0;
              uStack_cc = 0;
              *(int *)(lVar8 + 8 + lVar12) = iStack_c8;
              *(undefined4 *)(lVar8 + 0xc + lVar12) = uStack_c4;
              iStack_c8 = 0;
              uStack_c4 = 0;
            }
          }
          else {
            uStack_cc = 0;
            iStack_c8 = 0;
            FUN_14052b5e0(&local_d0,"profile",0);
            if (((int)local_ac == local_d0) &&
               ((local_a4 == iStack_c8 &&
                (cVar3 = FUN_1407153dc(local_e0,&local_b8,&local_88), cVar3 != '\0')))) {
              FUN_144a2b0a4(param_2,&local_d0);
              iVar4 = (int)param_1[0xb];
              *(uint *)(param_1 + 0xb) = iVar4 + 1U;
              lVar8 = (longlong)iVar4;
              if (*(uint *)((longlong)param_1 + 0x5c) < iVar4 + 1U) {
                local_e8 = (longlong)iVar4;
                FUN_1447a1bd6();
                lVar8 = local_e8;
              }
              lVar12 = *local_f0;
              lVar8 = lVar8 * 0x10;
              *(undefined8 *)(lVar12 + lVar8) = 0;
              *(ulonglong *)(lVar12 + lVar8) = CONCAT44(uStack_cc,local_d0);
              local_d0 = 0;
              uStack_cc = 0;
              *(int *)(lVar12 + 8 + lVar8) = iStack_c8;
              *(undefined4 *)(lVar12 + 0xc + lVar8) = uStack_c4;
              iStack_c8 = 0;
              uStack_c4 = 0;
            }
          }
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        lVar13 = lVar13 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
  }
  ReleaseSRWLockShared(SRWLock_00);
  ReleaseSRWLockShared(SRWLock);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071521e FUN_14071521e body=445 status=ok
// SIG undefined FUN_14071521e(void)

ulonglong FUN_14071521e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                       )

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (*(int *)(param_1 + 8) < 2) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    iVar1 = FUN_1403de9f2(0,&local_58,&DAT_149e0635c,1);
    uVar6 = 0;
    uVar3 = uStack_50 & 0xffffffff;
    if ((iVar1 != 0) && (1 < (int)uStack_50)) {
      uStack_60 = 0;
      uStack_5c = 0;
      puVar5 = &DAT_149dfb77a;
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(local_58 + 1) != 0) {
        puVar2 = (undefined2 *)*local_58;
      }
      FUN_1405f0d29(&local_64,puVar2,0);
      *(undefined4 *)(param_2 + 1) = uStack_5c;
      *param_2 = CONCAT44(uStack_60,local_64);
      uStack_60 = 0;
      uStack_5c = 0;
      if (*(int *)(local_58 + 3) != 0) {
        puVar5 = (undefined2 *)local_58[2];
      }
      FUN_1405f0d29(&local_64,puVar5,0);
      *param_3 = CONCAT44(uStack_60,local_64);
      *(undefined4 *)(param_3 + 1) = uStack_5c;
      *(undefined4 *)(param_4 + 4) = 0;
      *param_4 = 0;
      param_4[1] = 0;
      *(undefined4 *)(param_4 + 2) = 0;
      if (*(int *)((longlong)param_4 + 0x24) != 0) {
        FUN_1446dda88(param_4 + 3,0);
      }
      uVar3 = uStack_50 & 0xffffffff;
      uVar6 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
      if (uVar3 == 2) {
        uVar3 = 2;
      }
      else {
        lVar7 = 0x28;
        uVar4 = 0;
        do {
          uStack_60 = 0;
          uStack_5c = 0;
          puVar2 = &DAT_149dfb77a;
          if (*(int *)((longlong)local_58 + lVar7) != 0) {
            puVar2 = *(undefined2 **)((longlong)local_58 + lVar7 + -8);
          }
          FUN_1405f0d29(&local_64,puVar2,0);
          FUN_144928d62(param_4,uVar4 & 0xffffffff);
          uVar4 = uVar4 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar3 - 2 != uVar4);
        uVar3 = uStack_50 & 0xffffffff;
      }
    }
  }
  FUN_1447a1747(local_58,uVar3);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407153dc FUN_1407153dc body=295 status=ok
// SIG undefined FUN_1407153dc(void)

bool FUN_1407153dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined ***local_e8;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  code *local_b8;
  longlong *local_a8 [2];
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1407156ca(param_1,&local_78,param_2,param_3);
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_FUN_14b9a5420;
  local_d0 = (undefined4)local_78;
  uStack_cc = local_78._4_4_;
  uStack_c8 = uStack_70;
  uStack_c4 = uStack_6c;
  local_f8 = FUN_14071562e;
  local_b8 = FUN_14071562e;
  local_a8[0] = (longlong *)0x0;
  FUN_14071554c(&local_d8,local_a8);
  local_78 = local_b8;
  local_68[0] = 0;
  if (local_b8 != (code *)0x0) {
    plVar2 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar2 = local_98;
    }
    (**(code **)*plVar2)(plVar2,local_68);
  }
  lVar1 = FUN_1407155ac(param_1,&local_78);
  if (local_b8 != (code *)0x0) {
    plVar2 = local_a8[0];
    if (local_a8[0] == (longlong *)0x0) {
      plVar2 = local_98;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_f8 != (code *)0x0) {
    pppuVar3 = &local_d8;
    if (local_e8 != (undefined ***)0x0) {
      pppuVar3 = local_e8;
    }
    (*(code *)(*pppuVar3)[2])(pppuVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140715504 FUN_140715504 body=12 status=ok
// SIG undefined FUN_140715504(void)

void FUN_140715504(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014071550d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140715510 FUN_140715510 body=59 status=ok
// SIG undefined FUN_140715510(void)

undefined8 * FUN_140715510(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9a5420;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14071554c FUN_14071554c body=96 status=ok
// SIG undefined FUN_14071554c(void)

undefined8 * FUN_14071554c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9a5420;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 1407155ac FUN_1407155ac body=124 status=ok
// SIG undefined FUN_1407155ac(void)

longlong FUN_1407155ac(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = *param_1;
    lVar5 = (longlong)(int)param_1[1] << 4;
    do {
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar6);
      if (cVar2 != '\0') goto LAB_1407155fb;
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar6 = 0;
LAB_1407155fb:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar6;
}



// FUNCTION 14071562e FUN_14071562e body=156 status=ok
// SIG undefined FUN_14071562e(void)

undefined8 FUN_14071562e(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 1);
  uVar7 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar7 = 0;
  }
  if ((int)uVar7 < 1) {
    return 0;
  }
  puVar3 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar8 != 0) {
    puVar6 = (undefined2 *)*param_1;
  }
  uVar4 = (ulonglong)uVar7;
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar5 = 0;
  do {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar5);
    uVar2 = *(ushort *)((longlong)puVar6 + lVar5);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (uVar4 == 1)) goto LAB_1407156b5;
    }
    else {
      if (0x7f < (uVar2 | uVar1)) {
        iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_1407156b5:
        return CONCAT71((int7)((ulonglong)puVar3 >> 8),iVar8 == 0);
      }
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_1407156b5;
      }
      if (uVar4 == 1) {
        iVar8 = 0;
        goto LAB_1407156b5;
      }
    }
    uVar4 = uVar4 - 1;
    lVar5 = lVar5 + 2;
  } while( true );
}



// FUNCTION 1407156ca FUN_1407156ca body=865 status=ok
// SIG undefined FUN_1407156ca(void)

undefined8 FUN_1407156ca(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_1a8 [32];
  void *local_188;
  undefined8 uStack_180;
  undefined2 *local_170;
  undefined2 *local_168;
  ulonglong *local_160;
  char local_158;
  undefined2 local_150 [128];
  ulonglong local_50 [3];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_170 = local_150;
  local_158 = '\0';
  local_160 = local_50;
  pvVar3 = *(void **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar6 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar6 = 0;
  }
  lVar8 = (longlong)iVar6;
  local_168 = local_170;
  if (0x7f < iVar6) {
    FUN_140213274(&local_170,lVar8);
  }
  puVar4 = local_168;
  if (1 < uVar2) {
    memcpy(local_168,pvVar3,lVar8 * 2);
    local_168 = puVar4 + lVar8;
  }
  if (local_160 <= local_168 + 1) {
    FUN_140213274(&local_170,1);
  }
  *local_168 = 0x2e;
  local_168 = local_168 + 1;
  FUN_1408226d0(param_3,&local_188,1);
  uVar2 = (uint)uStack_180;
  pvVar3 = local_188;
  uVar5 = (ulonglong)((uint)uStack_180 - 1);
  if ((uint)uStack_180 == 0) {
    uVar5 = 0;
  }
  iVar6 = (int)uVar5;
  if (0 < (int)uVar5) {
    uVar7 = 0;
    do {
      uVar1 = *(ushort *)((longlong)local_188 + uVar7 * 2);
      *(ushort *)((longlong)local_188 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    iVar6 = (uint)uStack_180 - 1;
    if ((uint)uStack_180 == 0) {
      iVar6 = 0;
    }
  }
  local_188 = (void *)0x0;
  uStack_180 = 0;
  lVar8 = (longlong)iVar6;
  if (local_160 <= local_168 + lVar8) {
    FUN_140213274(&local_170,lVar8);
  }
  puVar4 = local_168;
  if (1 < uVar2) {
    memcpy(local_168,pvVar3,lVar8 * 2);
    local_168 = puVar4 + lVar8;
  }
  if (pvVar3 != (void *)0x0) {
    FUN_1400020a8(pvVar3);
  }
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (((*param_4 != 0) && (param_4[1] != 0)) && (*param_4 != DAT_14c948000)) {
    if (local_160 <= local_168 + 1) {
      FUN_140213274(&local_170,1);
    }
    *local_168 = 0x2e;
    local_188 = (void *)0x0;
    uStack_180 = 0;
    local_168 = local_168 + 1;
    FUN_1400b2348(param_4,&local_188,1);
    pvVar3 = local_188;
    uVar2 = (uint)uStack_180;
    uVar5 = (ulonglong)((uint)uStack_180 - 1);
    if ((uint)uStack_180 == 0) {
      uVar5 = 0;
    }
    iVar6 = (int)uVar5;
    if (0 < (int)uVar5) {
      uVar7 = 0;
      do {
        uVar1 = *(ushort *)((longlong)local_188 + uVar7 * 2);
        *(ushort *)((longlong)local_188 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      iVar6 = (uint)uStack_180 - 1;
      if ((uint)uStack_180 == 0) {
        iVar6 = 0;
      }
    }
    local_188 = (void *)0x0;
    uStack_180 = 0;
    lVar8 = (longlong)iVar6;
    if (local_160 <= local_168 + lVar8) {
      FUN_140213274(&local_170,lVar8);
    }
    puVar4 = local_168;
    if (1 < uVar2) {
      memcpy(local_168,pvVar3,lVar8 * 2);
      local_168 = puVar4 + lVar8;
    }
    if (pvVar3 != (void *)0x0) {
      FUN_1400020a8(pvVar3);
    }
    if (local_188 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *local_168 = 0;
  FUN_140056680(param_2,local_170);
  if (local_158 == '\x01') {
    FUN_1400020a8(local_170);
  }
  if ((local_50[0] ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140715a2c FUN_140715a2c body=1323 status=ok
// SIG undefined FUN_140715a2c(void)

undefined4 FUN_140715a2c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  void *_Src;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  uint *local_c0;
  ulonglong local_b8;
  uint local_b0;
  int local_ac;
  longlong *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 0) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar14);
    }
    FUN_140e83416(&local_98,uVar14);
    if (uVar14 < 4) {
      iVar7 = 1;
    }
    else {
      uVar14 = (uVar14 | 1) + 0xe;
      iVar7 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 1 << ((byte)iVar7 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar7)) {
      local_50 = iVar7;
      FUN_14482b9e8();
    }
  }
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
    FUN_1408be2c4();
  }
  iVar7 = (int)param_1[5];
  local_a8 = param_2;
  if (iVar7 == 0) {
    uVar20 = 1;
    uVar15 = 0;
    iVar16 = 0;
    iVar10 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar13;
    if (uVar14 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar15 = 0;
      uVar20 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar20 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar15) goto LAB_140715ed1;
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar13[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar20 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar10 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 < iVar7) {
    local_c8 = param_1;
    local_c0 = (uint *)(param_1 + 2);
    uVar14 = 0xffffffff;
    do {
      local_b0 = uVar14;
      plVar6 = local_a8;
      plVar1 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
      iVar11 = (int)plVar1[1];
      iVar12 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar12 = 0;
      }
      uVar14 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar11 != 0) {
          puVar17 = (undefined2 *)*plVar1;
        }
        lVar18 = 0;
        uVar14 = 0;
        do {
          uVar8 = ((uint)(ushort)puVar17[lVar18] +
                  (uint)(0x19 < (ushort)puVar17[lVar18] - 0x61) * 0x20) - 0x20;
          uVar14 = uVar14 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar14 ^ uVar8) & 0xff) * 4);
          uVar14 = uVar14 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
          lVar18 = lVar18 + 1;
        } while (iVar12 != (int)lVar18);
      }
      local_b8 = uVar15;
      local_ac = iVar16;
      if ((int)uStack_90 != local_64) {
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        iVar16 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & uVar14) * 4);
        if (iVar16 != -1) {
LAB_140715cb4:
          lVar18 = (longlong)iVar16;
          iVar16 = *(int *)(local_98 + 8 + lVar18 * 0x18);
          param_1 = local_c8;
          if (iVar16 == iVar11) {
            if (1 < iVar11) {
              lVar19 = 0;
              do {
                uVar4 = *(ushort *)(*(longlong *)(local_98 + lVar18 * 0x18) + lVar19);
                uVar5 = *(ushort *)(*plVar1 + lVar19);
                if (uVar4 == uVar5) {
                  if (uVar4 == 0) break;
                }
                else {
                  if (0x7f < (uVar5 | uVar4)) {
                    iVar16 = (uint)uVar4 - (uint)uVar5;
                    goto LAB_140715e96;
                  }
                  if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[(uint)uVar5]) goto LAB_140715e93;
                }
                lVar19 = lVar19 + 2;
              } while( true );
            }
          }
          else if (iVar16 + iVar11 != 1) goto LAB_140715cd3;
          goto LAB_140715dbc;
        }
      }
LAB_140715d30:
      iVar7 = (int)local_a8[1];
      *(uint *)(local_a8 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)local_a8 + 0xc) < iVar7 + 1U) {
        FUN_1447a1bd6(local_a8,iVar7);
      }
      lVar18 = *plVar6;
      lVar19 = (longlong)iVar7 * 0x10;
      puVar2 = (undefined8 *)(lVar18 + lVar19);
      *(undefined8 *)(lVar18 + lVar19) = 0;
      iVar7 = (int)plVar1[1];
      _Src = (void *)*plVar1;
      *(int *)(lVar18 + 8 + lVar19) = iVar7;
      if ((longlong)iVar7 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar7,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar7 * 2);
      }
      param_1 = local_c8;
      FUN_14482b35e(&local_98,local_9c,(longlong)iVar10 * 0x28 + *local_c8,0);
      iVar7 = (int)param_1[5];
LAB_140715dbc:
      uVar14 = local_b0 & ~(uint)uVar20;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = local_c0;
      }
      iVar10 = (int)local_b8;
      lVar18 = (longlong)iVar10;
      uVar8 = puVar13[lVar18] & uVar14;
      uVar15 = local_b8;
      iVar16 = local_ac;
      if (uVar8 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar10) {
          iVar12 = iVar10;
        }
        if (iVar11 <= iVar10) break;
        lVar19 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar8 = puVar13[lVar18 + lVar19 + 1];
          if (uVar8 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar12 - lVar18 == lVar19) goto LAB_140715ed1;
        }
        uVar15 = (ulonglong)(iVar10 + (int)lVar19 + 1);
        uVar14 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar20 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar10 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar7);
  }
LAB_140715ed1:
  lVar18 = local_a8[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return (int)lVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140715e93:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
LAB_140715e96:
  if (iVar16 == 0) goto LAB_140715dbc;
LAB_140715cd3:
  iVar16 = *(int *)(local_98 + 0x10 + lVar18 * 0x18);
  if (iVar16 == -1) goto LAB_140715d30;
  goto LAB_140715cb4;
}



// FUNCTION 140715f5a FUN_140715f5a body=611 status=ok
// SIG undefined FUN_140715f5a(void)

void FUN_140715f5a(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2d0) +
                        (longlong)(*(int *)(param_1 + 0x2d8) + -1) * 4);
      if ((int)uVar10 < 0) goto LAB_140716167;
    }
    if ((int)uVar10 < *(int *)(param_1 + 0x2b8)) {
      FUN_1407161be(lVar3 + 0xc0,*(longlong *)(param_1 + 0x2b0) + (ulonglong)uVar10 * 0x30 + 0x10);
      if ((longlong)*(int *)(lVar3 + 200) != 0) {
        lVar11 = *(longlong *)(lVar3 + 0xc0);
        lVar16 = (longlong)*(int *)(lVar3 + 200) * 0xb0 + lVar11;
        do {
          FUN_1400021e4(lVar11,&local_78);
          lVar5 = local_78;
          iVar6 = (int)uStack_70;
          uVar7 = (int)uStack_70 - 1;
          if ((int)uStack_70 == 0) {
            uVar7 = 0;
          }
          if (0 < (int)uVar7) {
            uVar8 = 0;
            do {
              uVar1 = *(ushort *)(local_78 + uVar8 * 2);
              *(ushort *)(local_78 + uVar8 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
              uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
          }
          local_78 = 0;
          uStack_70 = 0;
          if ((longlong)*(int *)(lVar3 + 400) != 0) {
            plVar12 = *(longlong **)(lVar3 + 0x188);
            plVar9 = plVar12 + (longlong)*(int *)(lVar3 + 400) * 2;
LAB_1407160bb:
            if ((int)plVar12[1] == iVar6) {
              uVar13 = 1;
              if (1 < iVar6) {
                lVar15 = 0;
                do {
                  uVar1 = *(ushort *)(*plVar12 + lVar15);
                  uVar2 = *(ushort *)(lVar5 + lVar15);
                  if (uVar1 == uVar2) {
                    if (uVar1 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar2 | uVar1)) {
                      iVar14 = (uint)uVar1 - (uint)uVar2;
                      goto LAB_140716197;
                    }
                    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                    goto LAB_140716194;
                  }
                  lVar15 = lVar15 + 2;
                } while( true );
              }
            }
            else {
              if ((int)plVar12[1] + iVar6 != 1) goto LAB_1407160cd;
              uVar13 = 1;
            }
            goto LAB_140716079;
          }
          uVar13 = 0;
LAB_140716079:
          *(undefined1 *)(lVar11 + 0x80) = uVar13;
          if ((lVar5 != 0) && (FUN_1400020a8(), local_78 != 0)) {
            FUN_1400020a8();
          }
          lVar11 = lVar11 + 0xb0;
        } while (lVar11 != lVar16);
      }
      *(uint *)(lVar3 + 0xd0) = uVar10;
      *(int *)(lVar3 + 0xd4) = *(int *)(lVar3 + 0xd4) + 1;
      puVar4 = *(ushort **)(lVar3 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
  }
LAB_140716167:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140716194:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_140716197:
  if (iVar14 == 0) goto LAB_140716079;
LAB_1407160cd:
  plVar12 = plVar12 + 2;
  uVar13 = 0;
  if (plVar12 == plVar9) goto LAB_140716079;
  goto LAB_1407160bb;
}



// FUNCTION 1407161be FUN_1407161be body=93 status=ok
// SIG undefined FUN_1407161be(void)

undefined8 * FUN_1407161be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14071621b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140716578(param_1,iVar1);
      FUN_140716304(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14071621b FUN_14071621b body=41 status=ok
// SIG undefined FUN_14071621b(void)

void FUN_14071621b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140716244(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 140716244 FUN_140716244 body=192 status=ok
// SIG undefined FUN_140716244(void)

void FUN_140716244(longlong param_1)

{
  FUN_1456d172d(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1407ccdd0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407162f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140716304 FUN_140716304 body=60 status=ok
// SIG undefined FUN_140716304(void)

void FUN_140716304(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140716340(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 140716340 FUN_140716340 body=567 status=ok
// SIG undefined FUN_140716340(void)

undefined4 * FUN_140716340(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  plVar2 = *(longlong **)(param_2 + 4);
  *(longlong **)(param_1 + 4) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[6] = param_2[6];
  plVar2 = *(longlong **)(param_2 + 8);
  *(longlong **)(param_1 + 8) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[10] = param_2[10];
  plVar2 = *(longlong **)(param_2 + 0xc);
  *(longlong **)(param_1 + 0xc) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar3 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar3 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1,0);
    memcpy(*(void **)(param_1 + 0x14),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  pvVar3 = *(void **)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  pvVar3 = *(void **)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1c,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1c),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar1 = param_2[0x24];
  uVar4 = *(undefined8 *)(param_2 + 0x22);
  param_1[0x24] = iVar1;
  if (iVar1 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_1415eee28(param_1 + 0x22,iVar1,0);
    FUN_1415eed97(*(undefined8 *)(param_1 + 0x22),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = param_2[0x2a];
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  param_1[0x2a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x2b] = 0;
  }
  else {
    FUN_141340a86(param_1 + 0x28,iVar1,0);
    FUN_145903fdb(*(undefined8 *)(param_1 + 0x28),uVar4,iVar1);
  }
  return param_1;
}



// FUNCTION 140716578 FUN_140716578 body=232 status=ok
// SIG undefined FUN_140716578(void)

void FUN_140716578(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    iVar2 = (int)(uVar1 / 0xb0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xb0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140716660 FUN_140716660 body=796 status=ok
// SIG undefined FUN_140716660(void)

void FUN_140716660(longlong param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  char *local_118;
  longlong local_110;
  int local_108;
  undefined4 local_104;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x40) == '\x01')) &&
      (local_140 = FUN_144a2383e(), local_140 != 0)) &&
     ((lVar4 = *(longlong *)(param_1 + 0x288), lVar4 != 0 &&
      (lVar10 = *(longlong *)(param_1 + 0x1a8), lVar10 != 0)))) {
    iVar2 = *param_2;
    if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar10 + 0x270))) {
      iVar3 = *param_3;
      if ((-1 < (longlong)iVar3) &&
         (lVar10 = *(longlong *)(lVar10 + 0x268) + (longlong)iVar2 * 0x28,
         iVar3 < *(int *)(lVar10 + 0x10))) {
        lVar10 = *(longlong *)(lVar10 + 8);
        lVar7 = (longlong)iVar3 * 0xa0;
        uVar9 = (ulonglong)*(uint *)(lVar10 + 0x98 + lVar7);
        if (uVar9 != 0) {
          local_130 = (longlong *)(lVar10 + lVar7 + 0x90);
          local_138 = lVar4 + 0x1c8;
          lVar10 = 0;
          uVar11 = 0;
          do {
            FUN_1415a78b6(&local_110);
            local_104 = (undefined4)uVar11;
            FUN_1407ccf14(param_1,*local_130 + lVar10,&local_110,1);
            if ((local_78[0] == 0) || (cVar6 = FUN_145cc8dbe(local_140,local_78), cVar6 != '\0')) {
              uStack_124 = 0;
              iStack_120 = 0;
              FUN_14052b5e0(&local_128,"sub_entries",0);
              local_118 = "sub_entries";
              FUN_1407cbb06(local_138,&local_110,*(undefined4 *)(param_1 + 0x208));
              iVar2 = *(int *)(param_1 + 0x310);
              *(uint *)(param_1 + 0x310) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0x314) < iVar2 + 1U) {
                FUN_1407cce00((longlong *)(param_1 + 0x308),iVar2);
              }
              FUN_14573e60c((longlong)iVar2 * 0xb0 + *(longlong *)(param_1 + 0x308),&local_110);
            }
            FUN_140716244(&local_110);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0x90;
          } while (uVar9 != uVar11);
        }
        if ((longlong)*(int *)(param_1 + 0x310) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x308);
          lVar7 = (longlong)*(int *)(param_1 + 0x310) * 0xb0 + lVar10;
          do {
            FUN_1400021e4(lVar10,&local_128);
            local_104 = uStack_11c;
            local_108 = iStack_120;
            uVar8 = iStack_120 - 1;
            if (iStack_120 == 0) {
              uVar8 = 0;
            }
            if (0 < (int)uVar8) {
              uVar9 = 0;
              do {
                uVar1 = *(ushort *)(CONCAT44(uStack_124,local_128) + uVar9 * 2);
                *(ushort *)(CONCAT44(uStack_124,local_128) + uVar9 * 2) =
                     (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                uVar9 = uVar9 + 1;
              } while (uVar8 != uVar9);
            }
            local_110 = CONCAT44(uStack_124,local_128);
            local_128 = 0;
            uStack_124 = 0;
            iStack_120 = 0;
            uStack_11c = 0;
            uVar5 = FUN_144a23846(lVar4 + 0x188,&local_110);
            *(undefined1 *)(lVar10 + 0x80) = uVar5;
            if (local_110 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_124,local_128) != 0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 0xb0;
          } while (lVar10 != lVar7);
        }
        FUN_1407161be(lVar4 + 0x1a8,param_1 + 0x308);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071697e FUN_14071697e body=101 status=ok
// SIG undefined FUN_14071697e(void)

void FUN_14071697e(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x18);
  iVar3 = ~*(uint *)(param_1 + 1) + iVar2;
  if (iVar3 != 0) {
    iVar5 = 1;
    if (iVar3 < 1) {
      iVar5 = iVar3;
    }
    lVar4 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar4 = lVar1;
    }
    memmove((void *)(lVar4 + (longlong)(int)*(uint *)(param_1 + 1) * 8),
            (void *)(lVar4 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
    iVar2 = *(int *)(lVar1 + 0x18);
  }
  *(int *)(lVar1 + 0x18) = iVar2 + -1;
  FUN_1407169e4(lVar1);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 1407169e4 FUN_1407169e4 body=143 status=ok
// SIG undefined FUN_1407169e4(void)

void FUN_1407169e4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((ulonglong)uVar4 < 3) {
    uVar4 = 2;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  FUN_14032eba2(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 140716a82 FUN_140716a82 body=143 status=ok
// SIG undefined FUN_140716a82(void)

undefined8 * FUN_140716a82(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140716b12 FUN_140716b12 body=297 status=ok
// SIG undefined FUN_140716b12(void)

undefined8 FUN_140716b12(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140716c34;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140716c34;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140716c34:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140716bdf;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140716bdf;
    }
  }
  uVar6 = 0;
LAB_140716bdf:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140716c3c FUN_140716c3c body=1760 status=ok
// SIG undefined FUN_140716c3c(void)

void FUN_140716c3c(longlong *param_1,code **param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code **ppcVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code **ppcVar11;
  uint uVar12;
  char cVar13;
  undefined7 uVar14;
  code **ppcVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = *(char *)((longlong)param_1 + 0x3291);
  *(undefined1 *)((longlong)param_1 + 0x3291) = 0;
  *(undefined4 *)(param_1 + 0x653) = 0;
  if ((*(int *)(param_3 + 0x138) == 0) ||
     (plVar4 = (longlong *)FUN_14071752e(param_1), plVar4 == (longlong *)0x0)) goto LAB_140716fb3;
  param_2 = (code **)*plVar4;
  lVar5 = (*param_2[6])(plVar4);
  ppcVar15 = (code **)0x0;
  if ((*(int *)(lVar5 + 0xc0) != 0) && (0 < *(int *)(lVar5 + 0x80))) {
    if ((**(int **)(lVar5 + 0x78) == 0x7fffffff) ||
       (uVar2 = *(ulonglong *)(*(int **)(lVar5 + 0x78) + 1), uVar2 >> 0x20 == 0)) {
LAB_140717081:
      ppcVar15 = (code **)0x0;
    }
    else {
      uVar12 = (uint)uVar2;
      ppcVar15 = (code **)0x0;
      if ((-1 < (int)uVar12) && (ppcVar15 = (code **)0x0, (int)uVar12 < DAT_14c9647dc)) {
        param_2 = (code **)((ulonglong)((uVar12 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8)));
        if (((param_2 == (code **)0x0) || (*(int *)(param_2 + 2) != (int)(uVar2 >> 0x20))) ||
           (((ulonglong)param_2[1] & 0x10200000) != 0)) goto LAB_140717081;
        ppcVar15 = (code **)*param_2;
      }
    }
  }
  if ((longlong)*(int *)(param_3 + 0x138) != 0) {
    lVar5 = *(longlong *)(param_3 + 0x130) + 0xb8;
    lVar16 = (longlong)*(int *)(param_3 + 0x138) << 8;
    do {
      ppcVar6 = (code **)FUN_14485cccc(lVar5);
      if (ppcVar6 == (code **)0x0) {
LAB_140716d7e:
        bVar17 = false;
      }
      else {
        lVar7 = FUN_14071731e();
        param_2 = (code **)(longlong)*(int *)(lVar7 + 0x38);
        if (((*(int *)(ppcVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
            (*(longlong *)(*(longlong *)(ppcVar6[2] + 0x30) + (longlong)param_2 * 8) != lVar7 + 0x30
            )) || (((byte)*(code *)((longlong)ppcVar6 + 0x62) & 4) == 0)) goto LAB_140716d7e;
        if ((ppcVar6[0x39] == (code *)0x0) ||
           (lVar7 = *(longlong *)(ppcVar6[0x39] + 0x120), lVar7 == 0)) {
          ppcVar11 = (code **)0x0;
        }
        else {
          ppcVar11 = *(code ***)(lVar7 + 0xa8);
        }
        bVar17 = ppcVar11 == ppcVar15;
      }
      if ((ppcVar15 != (code **)0x0) &&
         ((ppcVar6 == ppcVar15 ||
          (ppcVar6 = (code **)FUN_140717404(ppcVar6), !(bool)(~bVar17 & ppcVar6 != ppcVar15))))) {
        *(undefined1 *)((longlong)param_1 + 0x3291) = 1;
        dVar19 = *(double *)(lVar5 + -0x80) - *(double *)(param_3 + 0xe0);
        dVar21 = *(double *)(lVar5 + -0x88) - *(double *)(param_3 + 0xd8);
        dVar20 = *(double *)(lVar5 + -0x90) - *(double *)(param_3 + 0xd0);
        *(float *)(param_1 + 0x653) =
             (float)SQRT(dVar19 * dVar19 + dVar20 * dVar20 + dVar21 * dVar21);
        if (DAT_14cb56270 == (code **)0x0) {
          local_80 = local_68;
          local_68[0] = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_1427b09ee;
          local_88 = &LAB_148630fef;
          local_90 = FUN_1464b6a91;
          local_98 = L"Engine";
          local_a0 = 0;
          local_a8 = 0x10004001;
          local_b0 = 8;
          local_b8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        param_2 = DAT_14cb56270;
        puVar8 = (undefined8 *)(**(code **)(*ppcVar15 + 0x288))(ppcVar15,DAT_14cb56270);
        if (puVar8 == (undefined8 *)0x0) {
          lVar16 = 0;
        }
        else {
          if (DAT_14cb56270 == (code **)0x0) {
            local_80 = local_68;
            local_68[0] = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_1427b09ee;
            local_88 = &LAB_148630fef;
            local_90 = FUN_1464b6a91;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10004001;
            local_b0 = 8;
            local_b8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
          }
          param_2 = DAT_14cb56270;
          puVar9 = (undefined8 *)FUN_144718840(puVar8,DAT_14cb56270);
          lVar16 = 0;
          if ((puVar8 != puVar9) && (puVar9 != (undefined8 *)0x0)) {
            param_2 = (code **)*puVar9;
            lVar16 = (*param_2[4])(puVar9);
          }
        }
        plVar4 = (longlong *)param_1[0x7a];
        if (plVar4 == (longlong *)0x0) break;
        if (DAT_14cb223d8 == (code **)0x0) {
          local_80 = local_68;
          local_68[0] = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_1427b09ee;
          local_88 = &LAB_147f29feb;
          local_90 = FUN_1464384fe;
          local_98 = L"Engine";
          local_a0 = 0;
          local_a8 = 0x10004001;
          local_b0 = 8;
          local_b8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        param_2 = DAT_14cb223d8;
        puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb223d8);
        if (puVar8 == (undefined8 *)0x0) break;
        if (DAT_14cb223d8 == (code **)0x0) {
          local_80 = local_68;
          local_68[0] = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_1427b09ee;
          local_88 = &LAB_147f29feb;
          local_90 = FUN_1464384fe;
          local_98 = L"Engine";
          local_a0 = 0;
          local_a8 = 0x10004001;
          local_b0 = 8;
          local_b8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        param_2 = DAT_14cb223d8;
        puVar9 = (undefined8 *)FUN_144718840(puVar8,DAT_14cb223d8);
        if ((puVar8 == puVar9) || (puVar9 == (undefined8 *)0x0)) break;
        param_2 = (code **)*puVar9;
        lVar7 = (*param_2[2])(puVar9);
        if ((lVar7 == 0) ||
           ((param_2 = ppcVar15, iVar3 = FUN_14486116a(lVar7,ppcVar15), lVar16 == 0 || (iVar3 != 2))
           )) break;
        if (*(char *)(lVar16 + 0x90) == '\0') {
          if (*(int *)(lVar5 + 0x24) == 0) {
LAB_140717079:
            uVar10 = 0;
          }
          else {
            uVar12 = *(uint *)(lVar5 + 0x20);
            uVar10 = 0;
            if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
              if ((puVar8 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar8 + 2) != *(int *)(lVar5 + 0x24) ||
                  ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140717079;
              uVar10 = *puVar8;
            }
          }
          param_2 = local_68;
          FUN_1407176ee(lVar16 + 0x270,local_68,uVar10,*(undefined8 *)(lVar5 + 0x38));
          lVar5 = FUN_1402179b4(local_68);
          if (((lVar5 == 0) ||
              (plVar4 = (longlong *)FUN_1402179b4(local_68), plVar4 == (longlong *)0x0)) ||
             (fVar18 = (float)(**(code **)(*plVar4 + 0x18))(plVar4,ppcVar15), param_2 = ppcVar15,
             1e-08 <= fVar18)) break;
        }
        *(undefined1 *)((longlong)param_1 + 0x3291) = 0;
        break;
      }
      lVar5 = lVar5 + 0x100;
      lVar16 = lVar16 + -0x100;
    } while (lVar16 != 0);
  }
LAB_140716fb3:
  cVar13 = *(char *)((longlong)param_1 + 0x3291);
  uVar14 = (undefined7)((ulonglong)param_2 >> 8);
  if ((*(byte *)(param_1 + 0x2f) < 3) && (cVar13 != (char)param_1[0x652])) {
    *(char *)(param_1 + 0x652) = cVar13;
    local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,cVar13);
    uVar10 = FUN_14477b072(param_1,DAT_14cbadca8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar10,local_68);
    cVar13 = *(char *)((longlong)param_1 + 0x3291);
    uVar14 = (undefined7)((ulonglong)uVar10 >> 8);
  }
  if (cVar13 != cVar1) {
    FUN_140898514(param_1 + 0x65a,CONCAT71(uVar14,cVar13) & 0xffffffffffffff01);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071731e FUN_14071731e body=228 status=ok
// SIG undefined FUN_14071731e(void)

longlong FUN_14071731e(void)

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
  if (DAT_14cbae628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413594aa;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464ae302;
    local_38 = &LAB_148c3df05;
    local_40 = &LAB_140c4a870;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1870;
    FUN_14081cfa3(L"/Script/OakGame",L"OakProjectile",&DAT_14cbae628,FUN_1465eb7b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140717404 FUN_140717404 body=277 status=ok
// SIG undefined FUN_140717404(void)

undefined8 FUN_140717404(longlong param_1)

{
  longlong lVar1;
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
  if (param_1 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar1 = FUN_144718840(param_1,DAT_14cb56270);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071752e FUN_14071752e body=447 status=ok
// SIG undefined FUN_14071752e(void)

longlong FUN_14071752e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb22240 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464376fa;
      local_38 = &LAB_147f28935;
      local_40 = FUN_146437c39;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb22240);
    if (lVar2 != 0) {
      if (DAT_14cb22240 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464376fa;
        local_38 = &LAB_147f28935;
        local_40 = FUN_146437c39;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10004001;
        local_60 = 8;
        local_68 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb22240);
      if (lVar2 != lVar3) goto LAB_14071758e;
    }
  }
  lVar3 = 0;
LAB_14071758e:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407176ee FUN_1407176ee body=967 status=ok
// SIG undefined FUN_1407176ee(void)

undefined8 * FUN_1407176ee(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_3 != (longlong *)0x0) ||
     (param_3 = (longlong *)FUN_140717ab6(*param_1), param_3 != (longlong *)0x0)) {
    if ((longlong)(int)param_1[0xd] != 0) {
      plVar9 = (longlong *)param_1[0xc];
      lVar5 = (longlong)(int)param_1[0xd] * 0x68;
      do {
        if ((longlong *)*plVar9 == param_3) {
          plVar6 = param_3;
          if (plVar9 != (longlong *)0x0) goto LAB_140717784;
          break;
        }
        plVar9 = plVar9 + 0xd;
        lVar5 = lVar5 + -0x68;
      } while (lVar5 != 0);
    }
    if ((param_3[0x15] != *param_1) &&
       (plVar6 = (longlong *)param_3[0x24], plVar6 != (longlong *)0x0)) {
      lVar5 = FUN_140e1d66a();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && ((longlong)(int)param_1[0xd] != 0)))) {
        plVar9 = (longlong *)param_1[0xc];
        lVar5 = (longlong)(int)param_1[0xd] * 0x68;
        do {
          if ((longlong *)*plVar9 == plVar6) {
            if (plVar9 != (longlong *)0x0) goto LAB_140717784;
            break;
          }
          plVar9 = plVar9 + 0xd;
          lVar5 = lVar5 + -0x68;
        } while (lVar5 != 0);
      }
    }
  }
LAB_140717756:
  iVar4 = (int)param_1[0xb];
  if (iVar4 == -1) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0x3006;
    param_2[2] = 0;
    param_2[3] = 0;
    goto LAB_1407178c3;
  }
  goto LAB_14071785c;
LAB_140717784:
  if (DAT_14cb63950 == 0) {
    local_60 = &local_40;
    local_40 = FUN_144a7958c;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1464ec72a;
    local_68 = &LAB_1486f5f75;
    local_70 = &LAB_140945686;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
      (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8)
       == DAT_14cb63950 + 0x30)) && (lVar5 = (**(code **)(*plVar6 + 0xb98))(plVar6), lVar5 != 0)) {
    if (param_4 == 0) {
      plVar6 = (longlong *)FUN_140717ab6(*param_1);
      if (((plVar6 == (longlong *)0x0) ||
          (plVar2 = (longlong *)param_3[0x24], plVar2 == (longlong *)0x0)) ||
         ((plVar2 != plVar6 && (param_3 = plVar2, (longlong *)plVar2[0x24] != plVar6)))) {
        param_4 = 0;
      }
      else {
        param_4 = param_3[0x25];
      }
    }
    if ((int)plVar9[3] != *(int *)((longlong)plVar9 + 0x44)) {
      uVar3 = (uint)((ulonglong)param_4 >> 0x10);
      uVar7 = (uint)param_4 & 0xffff;
      plVar6 = plVar9 + 9;
      if ((longlong *)plVar9[10] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar9[10];
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)plVar9[0xb] - 1U &
                      (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar7) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar6 = (longlong *)(plVar9[2] + (longlong)iVar4 * 0x14);
          if (*plVar6 == param_4) {
            if (((plVar6 != (longlong *)0x0) && (plVar6 + 1 != (longlong *)0x0)) &&
               (iVar4 = (int)plVar6[1], iVar4 != -1)) goto LAB_14071785c;
            break;
          }
          iVar4 = *(int *)((longlong)plVar6 + 0xc);
        } while (iVar4 != -1);
      }
    }
  }
  iVar4 = (int)plVar9[1];
  if (iVar4 == -1) goto LAB_140717756;
LAB_14071785c:
  uVar1 = *(undefined8 *)(param_1[1] + 0x18 + (longlong)iVar4 * 0x80);
  lVar5 = FUN_1402179b4(param_1[1] + (longlong)iVar4 * 0x80);
  if (lVar5 == 0) {
    *param_2 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar8,1);
  }
  *(undefined4 *)(param_2 + 1) = 0x3006;
  param_2[2] = 0;
  param_2[3] = uVar1;
LAB_1407178c3:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140717ab6 FUN_140717ab6 body=304 status=ok
// SIG undefined FUN_140717ab6(void)

undefined8 FUN_140717ab6(longlong param_1)

{
  undefined8 uVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (DAT_14cacf818 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b216c;
      local_48 = &LAB_1479977e3;
      local_50 = &LAB_1463b2171;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) != DAT_14cacf818 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x428);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140717bfe FUN_140717bfe body=77 status=ok
// SIG undefined FUN_140717bfe(void)

void FUN_140717bfe(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140717c4c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x48) = param_2, param_3 == '\x01')) {
      FUN_1479fc548();
      return;
    }
  }
  return;
}



// FUNCTION 140717c4c FUN_140717c4c body=344 status=ok
// SIG undefined FUN_140717c4c(void)

void FUN_140717c4c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    iVar8 = 8;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (8 < *(uint *)(param_1 + 0x4c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140717ccd;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_140717ccd:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x4c) = iVar8;
  FUN_140717da4(param_1,param_2);
  return;
}



// FUNCTION 140717da4 FUN_140717da4 body=132 status=ok
// SIG undefined FUN_140717da4(void)

void FUN_140717da4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 140717e28 FUN_140717e28 body=851 status=ok
// SIG undefined FUN_140717e28(void)

undefined8 FUN_140717e28(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar2 < 0) {
    return 1;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return 1;
  }
  lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (lVar11 == 0) {
    return 1;
  }
  if (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0xe4)) {
    return 1;
  }
  if ((*(uint *)(lVar11 + 8) & 0x10200000) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0xec) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xe8);
  if ((int)uVar2 < 0) {
    return 1;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return 1;
  }
  puVar10 = (undefined8 *)
            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (puVar10 == (undefined8 *)0x0) {
    return 1;
  }
  if (*(int *)(puVar10 + 2) != *(int *)(param_1 + 0xec)) {
    return 1;
  }
  if ((*(uint *)(puVar10 + 1) & 0x10200000) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xf0);
  if ((int)uVar2 < 0) {
    return 1;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return 1;
  }
  plVar9 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (plVar9 == (longlong *)0x0) {
    return 1;
  }
  if ((int)plVar9[2] != *(int *)(param_1 + 0xf4)) {
    return 1;
  }
  if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
    return 1;
  }
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    lVar11 = *plVar9;
  }
  else {
    lVar11 = 0;
  }
  if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
    plVar9 = (longlong *)*puVar10;
  }
  else {
    plVar9 = (longlong *)0x0;
  }
  bVar4 = (**(code **)(*plVar9 + 0x480))(plVar9,DAT_14c9abbf0);
  bVar5 = FUN_14071817c(param_1);
  FUN_14025708c(plVar9,DAT_14c9abbf0);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xd8) + 0x5f8);
  lVar7 = plVar9[0x16];
  if ((lVar7 == 0) && (lVar7 = FUN_1448abda6(plVar9), lVar7 == 0)) {
    return 1;
  }
  fVar13 = (float)*(double *)(lVar7 + 0x6d0) - *(float *)(param_1 + 0x134);
  bVar12 = true;
  if (bVar5 != 0) {
    if (*(float *)(lVar7 + 0x6f4) * -5.0 + *(float *)(param_1 + 0x130) <= fVar13) {
      bVar12 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x98) == 2;
    }
    else {
      bVar12 = false;
    }
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 1) {
    if (bVar1 != 0) {
      if ((*(longlong *)(lVar11 + 0x11e8) == 0) ||
         ((&DAT_00001100)[*(longlong *)(lVar11 + 0x11e8)] != '\b')) {
        bVar12 = false;
      }
      else {
        bVar12 = *(char *)(lVar11 + 0x32c0) == '\0';
      }
      uVar8 = 2;
      if (((*(byte *)(lVar11 + 0x32c0) & 0xfe) == 2) || (bVar12)) goto LAB_140718055;
    }
    if (((bVar5 | bVar4 & bVar1) & 1) == 0) {
      if (bVar4 == 0) {
        return 1;
      }
      if (bVar1 != 0) {
        return 1;
      }
      if (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x98) != 2) {
        return 1;
      }
    }
  }
  else {
    if (iVar3 == 0) {
      if (!bVar12) {
        return 0;
      }
      FUN_1411e1e9a(param_1,*(float *)(param_1 + 0x130) - fVar13);
    }
    else {
      if (iVar3 != 2) {
        return 0;
      }
      plVar9 = *(longlong **)(lVar11 + 0x32b8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar9 + 0x480))(plVar9,DAT_14c9abbf0), cVar6 == '\0')) {
        if ((*(longlong *)(lVar11 + 0x11e8) == 0) ||
           ((&DAT_00001100)[*(longlong *)(lVar11 + 0x11e8)] != '\b')) {
          bVar12 = false;
        }
        else {
          bVar12 = *(char *)(lVar11 + 0x32c0) == '\0';
        }
        if ((*(byte *)(lVar11 + 0x32c0) & 0xfe) == 2) {
          return 0;
        }
        if (bVar12) {
          return 0;
        }
        return 1;
      }
    }
    uVar8 = 1;
LAB_140718055:
    *(undefined4 *)(param_1 + 0xd0) = uVar8;
  }
  return 0;
}



// FUNCTION 14071817c FUN_14071817c body=253 status=ok
// SIG undefined FUN_14071817c(void)

undefined8 FUN_14071817c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xf8);
    lVar5 = (longlong)*(int *)(param_1 + 0x100) * 0x18;
    do {
      if ((((*(int *)(lVar4 + 0x14) != 0) && (uVar1 = *(uint *)(lVar4 + 0x10), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar4 + 0x14))) &&
          (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
        if ((*(int *)(lVar4 + 0xc) == 0) || (uVar1 = *(uint *)(lVar4 + 8), (int)uVar1 < 0)) {
LAB_140718274:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 2) != *(int *)(lVar4 + 0xc)))
               || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)) goto LAB_140718274;
            uVar6 = *puVar3;
          }
        }
        cVar2 = FUN_14489e746(*plVar7,lVar4,uVar6,0);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 14071827a FUN_14071827a body=163 status=ok
// SIG undefined FUN_14071827a(void)

void FUN_14071827a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (-1 < *(char *)(param_1 + 0xc70)) {
    FUN_140156a6a(param_1);
    FUN_140156924(param_1);
    *(undefined4 *)(param_1 + 0xce0) = 0xffffffff;
    puVar2 = &DAT_14c846480;
    puVar3 = (undefined8 *)(param_1 + 0xcf0);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_140718404(param_1);
    local_28 = &local_38;
    local_30 = FUN_1436b9df0;
    local_38 = param_1;
    FUN_14071831e(param_1);
  }
  FUN_14015649c(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071831e FUN_14071831e body=95 status=ok
// SIG undefined FUN_14071831e(void)

undefined8 FUN_14071831e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  char local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14071837e(local_30,param_1,1);
  (*(code *)*param_2)(param_2[1]);
  if (local_30[0] == '\x01') {
    FUN_1447e63de(local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071837e FUN_14071837e body=133 status=ok
// SIG undefined FUN_14071837e(void)

undefined1 * FUN_14071837e(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  param_1[0x10] = param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0xd78) != 0)) {
    lVar2 = 0;
    do {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xd70) + lVar2) + 0x138);
      if ((((plVar3 != (longlong *)0x0) && (lVar1 = *plVar3, lVar1 != 0)) &&
          (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x260), lVar1 != 0)) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 0x38);
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_2 + 0xd78) * 8 != lVar2);
  }
  FUN_1447e649a(param_1);
  return param_1;
}



// FUNCTION 140718404 FUN_140718404 body=298 status=ok
// SIG undefined FUN_140718404(void)

void FUN_140718404(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xf0) != *(int *)(lVar6 + 0x11c))) {
    local_48 = 0;
    uStack_40 = 0;
    iVar1 = (int)param_1[0x1af];
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 != 0) {
      FUN_140718530(&local_48);
      lVar6 = param_1[0x1af];
      if ((longlong)(int)lVar6 != 0) {
        lVar2 = param_1[0x1ae];
        lVar8 = 0;
        do {
          uVar4 = uStack_40;
          if ((*(longlong *)(lVar2 + lVar8) != 0) &&
             (lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar8) + 0x138), lVar3 != 0)) {
            lVar7 = (longlong)(int)uStack_40;
            uVar5 = (int)uStack_40 + 1;
            uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
            if (uStack_40._4_4_ < uVar5) {
              FUN_140711e5c(&local_48,uVar4 & 0xffffffff);
            }
            *(longlong *)(local_48 + lVar7 * 8) = lVar3;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar8);
      }
    }
    local_60 = &local_48;
    local_50 = &local_60;
    local_58 = &LAB_1436b9cc0;
    FUN_14071831e(param_1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140718530 FUN_140718530 body=312 status=ok
// SIG undefined FUN_140718530(void)

void FUN_140718530(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14071859a;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14071859a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140718668 FUN_140718668 body=502 status=ok
// SIG undefined FUN_140718668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140718668(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  byte local_80;
  longlong *local_78;
  longlong local_70;
  undefined *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((DAT_14c761404 == 0) || ((*(byte *)(param_1 + 0x5d) & 2) == 0)) && (*DAT_14cb0b138 != 0)) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    (**(code **)(*param_1 + 0x790))(param_1,&local_58,0);
    if ((int)uStack_50 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cad1d18) && (FUN_144b3d300(&DAT_14cad1d18), DAT_14cad1d18 == -1))
      {
        _DAT_14cad1d04 = 1;
        _DAT_14cad1d08 = 0x3f800000;
        uRam000000014cad1d0c = 0x3f800000;
        uRam000000014cad1d10 = 0x3f800000;
        uRam000000014cad1d14 = 0x3f800000;
        _Init_thread_footer(&DAT_14cad1d18);
      }
      local_60 = 0xffff0000;
      local_68 = &DAT_14cad1d04;
      if ((int)uStack_50 != 0) {
        iVar2 = (int)uStack_50;
        do {
          lVar1 = *local_58;
          if (lVar1 != 0) {
            local_80 = (*(byte *)((longlong)param_1 + 0x2d2) & 4) >> 2;
            local_88 = param_3;
            local_78 = param_1;
            local_70 = lVar1;
            FUN_14478100e(param_2,param_1 + 0x2c,&local_70,(float)(double)param_1[0x32]);
            iVar2 = (int)uStack_50;
          }
          if (0 < iVar2) {
            uVar4 = 0;
            do {
              if (local_58[(int)uVar4] == lVar1) {
                iVar3 = ~uVar4 + iVar2;
                if (iVar3 != 0) {
                  if (0 < iVar3) {
                    iVar3 = 1;
                  }
                  memmove(local_58 + (int)uVar4,local_58 + (iVar2 - iVar3),(longlong)iVar3 << 3);
                  iVar2 = (int)uStack_50;
                }
                uVar4 = uVar4 - 1;
                iVar2 = iVar2 + -1;
                uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
              }
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < iVar2);
          }
        } while (iVar2 != 0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140718862 FUN_140718862 body=150 status=ok
// SIG undefined FUN_140718862(void)

ulonglong FUN_140718862(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_1407188f8();
  if (cVar2 != '\0') {
    if ((byte)(param_3 - 1U) < 2) {
      if (*(char *)(param_1 + 0x125) != '\x02') {
        *(undefined1 *)(param_1 + 0x125) = 2;
        *(undefined1 *)(param_1 + 0x36e) = 0;
        if (*(longlong *)(param_1 + 800) != 0) {
          FUN_140f6f7b0(*(longlong *)(param_1 + 800),2);
        }
      }
      *(undefined1 *)(param_1 + 0x41a) = 1;
    }
    if ((*(char *)(param_1 + 0x419) != '\0') || (*(char *)(param_1 + 0x41a) == '\x01')) {
      lVar1 = *(longlong *)(param_1 + 0x420);
      if (lVar1 == 0) {
        return 1;
      }
      if (*(char *)(lVar1 + 300) == '\b') {
        return 1;
      }
      if (*(char *)(lVar1 + 300) == '\x06') {
        return 1;
      }
      uVar3 = FUN_140ce3b60(lVar1,0);
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 1407188f8 FUN_1407188f8 body=429 status=ok
// SIG undefined FUN_1407188f8(void)

undefined8 FUN_1407188f8(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [192];
  longlong local_2c8;
  char local_2b8;
  longlong *local_278;
  longlong *local_108;
  char local_d8;
  char local_68;
  int local_58;
  char local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_3 == '\x03') {
    if (((*(int *)(param_1 + 0x100) != 0) && (uVar2 = *(uint *)(param_1 + 0xfc), -1 < (int)uVar2))
       && ((int)uVar2 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x100))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
        FUN_144a238e8(local_388,*plVar4 + 0x1730);
        if (local_30 == '\x01') {
          local_30 = '\0';
        }
        if (local_68 == '\x01') {
          local_68 = '\0';
        }
        if (local_d8 == '\x01') {
          local_d8 = '\0';
        }
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_108 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_108 + 0x10))(local_108);
            }
          }
        }
        if (local_278 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_278 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_278)(local_278);
            LOCK();
            piVar1 = (int *)((longlong)local_278 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_278 + 0x10))(local_278);
            }
          }
        }
        if ((local_2b8 == '\x01') && (local_2c8 != 0)) {
          FUN_1400020a8();
        }
        if (local_58 != -1) {
          uVar3 = 0;
          goto LAB_1407189fd;
        }
      }
    }
  }
  uVar3 = 1;
LAB_1407189fd:
  if ((local_18 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140718aa6 FUN_140718aa6 body=26 status=ok
// SIG undefined FUN_140718aa6(void)

undefined1 FUN_140718aa6(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140718ac0();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x2c);
  }
  return uVar1;
}



// FUNCTION 140718ac0 FUN_140718ac0 body=179 status=ok
// SIG undefined FUN_140718ac0(void)

longlong FUN_140718ac0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar2 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x428);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 1000) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar3 * 0x10) == param_2) {
          if (lVar2 == 0) {
            return 0;
          }
          if ((uint *)(lVar2 + 4) == (uint *)0x0) {
            return 0;
          }
          uVar1 = *(uint *)(lVar2 + 4);
          if ((int)uVar1 < 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x60) <= (int)uVar1) {
            return 0;
          }
          lVar2 = param_1 + 0x48;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            lVar2 = *(longlong *)(param_1 + 0x58);
          }
          if ((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
            return 0;
          }
          if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x2b0 + (ulonglong)uVar1 * 0x300) & 0x20)
              != 0) {
            return 0;
          }
          return *(longlong *)(param_1 + 0x38) + (ulonglong)uVar1 * 0x300;
        }
        iVar3 = *(int *)(lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 140718b74 FUN_140718b74 body=769 status=ok
// SIG undefined FUN_140718b74(void)

void FUN_140718b74(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  wchar_t **local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_2[9];
  if (*(int *)(lVar1 + 0x18) == *(int *)(lVar1 + 0x44)) {
LAB_140718cbb:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar3 = *(longlong *)(param_2[2] + 0x10);
    lVar7 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar1 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 == -1) goto LAB_140718cbb;
    do {
      plVar11 = (longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar6 * 0x48);
      if (*plVar11 == lVar3) break;
      iVar6 = (int)plVar11[8];
      plVar11 = (longlong *)0x0;
    } while (iVar6 != -1);
  }
  uVar9 = (int)param_2[10] + 0xfU & 0xfffffff0;
  FUN_140718e76();
  *(uint *)(param_2 + 10) = DAT_14cb3be8c + uVar9;
  lVar1 = param_2[7];
  lVar3 = *(longlong *)param_2[5];
  uVar5 = *(ulonglong *)(lVar3 + 0x20);
  if ((uVar5 & 1) != 0) {
    uVar5 = ((longlong)uVar5 >> 0x18) + lVar3 + 0x20;
  }
  puVar10 = (undefined4 *)(lVar1 + (ulonglong)uVar9);
  uVar8 = (ushort)uVar9 | 8;
  if ((longlong)*(int *)(lVar3 + 0x28) != 0) {
    lVar7 = 0;
    do {
      if (*(ushort *)(uVar5 + lVar7) == uVar8) goto LAB_140718d08;
      lVar7 = lVar7 + 6;
    } while ((longlong)*(int *)(lVar3 + 0x28) * 6 != lVar7);
  }
  uVar5 = *(ulonglong *)(lVar3 + 0x10);
  if ((uVar5 & 1) != 0) {
    uVar5 = ((longlong)uVar5 >> 0x18) + lVar3 + 0x10;
  }
  if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
    lVar7 = 0;
    do {
      if (*(ushort *)(uVar5 + lVar7) == uVar8) goto LAB_140718d08;
      lVar7 = lVar7 + 4;
    } while ((longlong)*(int *)(lVar3 + 0x18) * 4 != lVar7);
  }
  *puVar10 = 0;
  lVar3 = 0;
LAB_140718c8f:
  *(longlong *)((ulonglong)uVar9 + lVar1 + 8) = lVar3;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140718d08:
  if ((*(int *)((longlong)plVar11 + 0x14) == 0) && ((int)plVar11[3] == 0)) {
    *puVar10 = 0;
    lVar3 = FUN_14573eae0(param_2[1],*param_2,0x1c);
  }
  else {
    lVar3 = *param_2;
    if (plVar11[6] == 0) {
      if ((char)plVar11[1] == '\x01') {
        uVar4 = (uint)((float)*(int *)(*(longlong *)(param_2[3] + 200) + 0x274) *
                      *(float *)(plVar11 + 2));
        uVar2 = 0;
        if (0 < (int)uVar4) {
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        if ((0 < (int)DAT_14c762860) && (uVar4 = DAT_14c762860, uVar2 < DAT_14c762860)) {
          uVar4 = uVar2;
        }
      }
      else {
        uVar4 = *(uint *)((longlong)plVar11 + 0xc);
      }
      *(uint *)(plVar11 + 5) = uVar4;
      uVar2 = uVar4 + 0x7e;
      if (-1 < (int)(uVar4 + 0x3f)) {
        uVar2 = uVar4 + 0x3f;
      }
      uVar4 = (uVar2 >> 6) * 0x1c0 + 1;
      local_78 = (wchar_t **)&local_49;
      local_49 = 0;
      local_58 = L"FNDIExportProxy_WriteBuffer";
      uVar2 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar2 = DAT_14ca84e48;
      }
      local_70 = uVar2 + (uVar2 == 0);
      local_68 = CONCAT44(local_68._4_4_,0x4129);
      if (DAT_14ca84e48 <= uVar4) {
        uVar4 = DAT_14ca84e48;
      }
      local_60 = 0;
      local_6c = uVar4 + (uVar4 == 0);
      local_68 = FUN_144738de6(lVar3 + 0x188,lVar3 + 0x70,&local_58,&local_70);
      plVar11[6] = local_68;
      local_70 = CONCAT13(local_70._3_1_,0x1c);
      local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffffffff00);
      local_78 = &local_58;
      lVar7 = FUN_144a23c98(lVar3 + 0x198,lVar3 + 0x70,local_68 + 8,&local_70);
      plVar11[7] = lVar7;
    }
    else {
      lVar7 = plVar11[7];
    }
    FUN_1405bfba3(lVar3,lVar7,0,2);
    *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
    *puVar10 = (int)plVar11[5];
    lVar3 = plVar11[7];
  }
  goto LAB_140718c8f;
}



// FUNCTION 140718e76 FUN_140718e76 body=258 status=ok
// SIG undefined FUN_140718e76(void)

void FUN_140718e76(void)

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
              0x110) < DAT_14cb3bed0) {
    FUN_144b3d300(&DAT_14cb3bed0);
    if (DAT_14cb3bed0 == -1) {
      FUN_14573eaea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3be50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3e907);
      _Init_thread_footer(&DAT_14cb3bed0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140718f79 FUN_140718f79 body=56 status=ok
// SIG undefined FUN_140718f79(void)

void FUN_140718f79(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140718fb2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae853a0;
  puVar1[0x72] = &PTR_FUN_14ae85a20;
  *(undefined1 *)((longlong)puVar1 + 0x3b4) = 3;
  return;
}



// FUNCTION 140718fb2 FUN_140718fb2 body=1274 status=ok
// SIG undefined FUN_140718fb2(void)

undefined8 * FUN_140718fb2(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ae80b20;
  param_1[0x72] = &PTR_FUN_14ae811a0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  lVar2 = FUN_140719b1e();
  param_1[0x7c] = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  lVar2 = FUN_140719c04();
  param_1[0x7d] = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  lVar2 = FUN_140719dd0();
  param_1[0x7e] = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  lVar2 = FUN_140719cea();
  param_1[0x7f] = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    plVar5 = param_1 + 0x80;
    param_1[0x83] = &DAT_14cb46ee0;
    param_1[0x82] = param_1;
    lVar2 = DAT_14cb46ee0;
    while( true ) {
      param_1[0x80] = lVar2;
      LOCK();
      lVar3 = *(longlong *)param_1[0x83];
      bVar6 = lVar2 == lVar3;
      if (bVar6) {
        *(longlong *)param_1[0x83] = (longlong)plVar5;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[0x80] = lVar3;
      lVar2 = *(longlong *)param_1[0x83];
    }
    if (*plVar5 != 0) {
      *(longlong **)(*plVar5 + 8) = plVar5;
    }
  }
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 8;
  FUN_1446f470e(&local_28,L"WaterSpline",1);
  uVar4 = FUN_140719a38();
  local_60 = 0;
  local_68 = CONCAT71(local_68._1_7_,1);
  plVar5 = (longlong *)FUN_14048696c(param_1,local_28,uVar4,uVar4);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  param_1[0x73] = plVar5;
  (**(code **)(*plVar5 + 0x588))(plVar5,0);
  FUN_1446f470e(&local_30,L"WaterSplineMetadata",1);
  local_68 = FUN_140720906();
  local_58 = 0;
  local_60 = 1;
  plVar5 = (longlong *)FUN_140486aac(param_2,param_1,local_30,local_68);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  param_1[0x74] = plVar5;
  (**(code **)(*plVar5 + 0x2d0))(plVar5,3);
  (**(code **)(*(longlong *)param_1[0x74] + 0x2b0))((longlong *)param_1[0x74],0);
  (**(code **)(*(longlong *)param_1[0x74] + 0x2b0))((longlong *)param_1[0x74],0x3f800000);
  (**(code **)(*(longlong *)param_1[0x74] + 0x2b0))((longlong *)param_1[0x74],0x40000000);
  lVar2 = param_1[0x73];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x73];
    }
  }
  param_1[0x39] = lVar2;
  cVar1 = FUN_140719528();
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_40,L"WaterInfoMeshComponent",1);
    uVar4 = FUN_140719952();
    local_60 = 0;
    local_68 = CONCAT71(local_68._1_7_,1);
    plVar5 = (longlong *)FUN_14048696c(param_1,local_40,uVar4,uVar4);
  }
  else {
    FUN_1446f470e(&local_38,L"WaterInfoMeshComponent",1);
    uVar4 = FUN_140719952();
    plVar5 = (longlong *)FUN_1407194ae(param_1,local_38,uVar4,0);
  }
  if ((plVar5 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x78] = plVar5;
    if (plVar5 != (longlong *)0x0) goto LAB_14071941c;
  }
  else {
    FUN_1456cec3c(plVar5);
    param_1[0x78] = plVar5;
LAB_14071941c:
    (**(code **)(*plVar5 + 0x588))(plVar5,0);
    FUN_140486fc4(param_1[0x78],param_1[0x39],0);
    *(undefined1 *)(param_1[0x78] + 0x718) = 0;
  }
  cVar1 = FUN_140719528();
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_50,L"DilatedWaterInfoMeshComponent",1);
    uVar4 = FUN_140719952();
    local_60 = 0;
    local_68 = CONCAT71(local_68._1_7_,1);
    plVar5 = (longlong *)FUN_14048696c(param_1,local_50,uVar4,uVar4);
  }
  else {
    FUN_1446f470e(&local_48,L"DilatedWaterInfoMeshComponent",1);
    uVar4 = FUN_140719952();
    plVar5 = (longlong *)FUN_1407194ae(param_1,local_48,uVar4,0);
  }
  if ((plVar5 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x79] = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_140719301;
  }
  else {
    FUN_1456cec3c(plVar5);
    param_1[0x79] = plVar5;
  }
  (**(code **)(*plVar5 + 0x588))(plVar5,0);
  FUN_140486fc4(param_1[0x79],param_1[0x39],0);
  *(undefined1 *)(param_1[0x79] + 0x718) = 1;
LAB_140719301:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407194ae FUN_1407194ae body=122 status=ok
// SIG undefined FUN_1407194ae(void)

undefined8 FUN_1407194ae(void)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID pvVar3;
  bool bVar4;
  
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar4 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar4) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar4) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  pvVar3 = TlsGetValue(dwTlsIndex);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar3);
    FUN_140fddf04(pvVar3);
    TlsSetValue(dwTlsIndex,pvVar3);
  }
  return 0;
}



// FUNCTION 140719528 FUN_140719528 body=105 status=ok
// SIG undefined FUN_140719528(void)

undefined8 FUN_140719528(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb499b8;
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
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}



// FUNCTION 140719592 FUN_140719592 body=170 status=ok
// SIG undefined FUN_140719592(void)

void FUN_140719592(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(byte *)(param_1 + 0x1fb) != param_2) {
    FUN_140719760(local_40,param_1,0);
    *(char *)(param_1 + 0x1fb) = (char)param_2;
    if (((char)param_2 == '\x02') && (iVar1 = *(int *)(param_1 + 0x140), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x138);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x588))(plVar3,param_2);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    FUN_14071963e(local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071963e FUN_14071963e body=199 status=ok
// SIG undefined FUN_14071963e(void)

void FUN_14071963e(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1))
         && (((int)uVar1 < DAT_14c9647dc &&
             (((puVar3 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               puVar3 != (undefined8 *)0x0 && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x14))) &&
              ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
          uVar4 = *puVar3;
        }
        else {
          uVar4 = 0;
        }
        if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
          FUN_140719706(param_1,*puVar2,uVar4);
          return;
        }
        FUN_140719706(param_1,0,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140719706 FUN_140719706 body=89 status=ok
// SIG undefined FUN_140719706(void)

void FUN_140719706(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((((param_2 != 0) && (param_3 != 0)) && ((*(uint *)(param_2 + 8) & 0x40000000) == 0)) &&
     ((*(uint *)(param_3 + 8) >> 0x1e & 1) == 0)) {
    if ((*(byte *)(param_2 + 0x9c) & 1) != 0) {
      FUN_1400f88ca(param_2);
    }
    *(longlong *)(param_2 + 0xb0) = param_3;
    FUN_14342c1dc(param_2,0);
    return;
  }
  return;
}



// FUNCTION 140719760 FUN_140719760 body=396 status=ok
// SIG undefined FUN_140719760(void)

undefined8 * FUN_140719760(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  lVar3 = FUN_1407198ec();
  if (lVar3 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0xc);
    *(uint *)(param_1 + 2) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (iVar2 == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      if (iVar2 == 0) goto LAB_1407197fe;
    }
    else {
      *(int *)((longlong)param_1 + 0x14) = iVar2;
    }
    uVar1 = *(uint *)(param_1 + 2);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)) &&
       (((*(int *)(lVar3 + 0x10) == iVar2 && (param_2 != 0)) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_1 + 1) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar5 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar5) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar5 = iVar2 == 0;
        if (bVar5) {
          *(int *)(lVar3 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar5) {
          iVar2 = iVar4;
        }
      }
      goto LAB_140719807;
    }
  }
LAB_1407197fe:
  *(undefined4 *)(param_1 + 1) = 0;
  iVar2 = 0;
LAB_140719807:
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  return param_1;
}



// FUNCTION 1407198ec FUN_1407198ec body=101 status=ok
// SIG undefined FUN_1407198ec(void)

longlong FUN_1407198ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_2 + 0x9c) & 1) == 0) {
LAB_140719934:
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_2);
      if (lVar1 == 0) goto LAB_140719934;
      lVar1 = *(longlong *)(param_2 + 0xb0);
      if (lVar1 == 0) {
        lVar1 = FUN_1448abda6(param_2);
      }
    }
    FUN_1400f88ca(param_2);
    *(undefined8 *)(param_2 + 0xb0) = 0;
  }
  return lVar1;
}



// FUNCTION 140719952 FUN_140719952 body=228 status=ok
// SIG undefined FUN_140719952(void)

longlong FUN_140719952(void)

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
  if (DAT_14cb47108 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ed866;
    local_38 = &LAB_1483e6e19;
    local_40 = FUN_14648716e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyInfoMeshComponent",&DAT_14cb47108,&DAT_1483e6e18);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb47108;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140719a38 FUN_140719a38 body=228 status=ok
// SIG undefined FUN_140719a38(void)

longlong FUN_140719a38(void)

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
  if (DAT_14cb49588 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463bf012;
    local_38 = &LAB_148407e6b;
    local_40 = FUN_1418406b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6e0;
    FUN_14081cfa3(L"/Script/Water",L"WaterSplineComponent",&DAT_14cb49588,FUN_14648967a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb49588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140719b1e FUN_140719b1e body=228 status=ok
// SIG undefined FUN_140719b1e(void)

longlong FUN_140719b1e(void)

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
  if (DAT_14cb472e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146486f2a;
    local_38 = &LAB_1483f3f42;
    local_40 = FUN_14183e1db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x19f0;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyRiverComponent",&DAT_14cb472e8,FUN_146487a18);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb472e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140719c04 FUN_140719c04 body=228 status=ok
// SIG undefined FUN_140719c04(void)

longlong FUN_140719c04(void)

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
  if (DAT_14cb47198 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146486f2a;
    local_38 = &LAB_1483e7235;
    local_40 = FUN_14183d97f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x19c0;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyLakeComponent",&DAT_14cb47198,&DAT_1483e7234);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb47198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140719cea FUN_140719cea body=228 status=ok
// SIG undefined FUN_140719cea(void)

longlong FUN_140719cea(void)

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
  if (DAT_14cb47060 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146486f2a;
    local_38 = &LAB_1483e6513;
    local_40 = FUN_140cc2481;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x19d0;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyCustomComponent",&DAT_14cb47060,&DAT_1483e6512);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb47060;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140719dd0 FUN_140719dd0 body=228 status=ok
// SIG undefined FUN_140719dd0(void)

longlong FUN_140719dd0(void)

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
  if (DAT_14cb47268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146486f2a;
    local_38 = &LAB_1483f1cfd;
    local_40 = &LAB_145aa5a34;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1a20;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyOceanComponent",&DAT_14cb47268,&DAT_1483f1cfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb47268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140719eb6 FUN_140719eb6 body=2095 status=ok
// SIG undefined FUN_140719eb6(void)

void FUN_140719eb6(longlong param_1)

{
  float fVar1;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  longlong lVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  int iVar22;
  float *pfVar23;
  float fVar24;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  float *local_180;
  undefined8 local_178;
  undefined8 local_170;
  code *local_160 [2];
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  ulonglong local_c0;
  float fVar2;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14071a6e6();
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  if (lVar10 == 0) goto LAB_140719f91;
  if (DAT_14cbbd498 == 0) {
    local_1a0 = local_160;
    local_160[0] = FUN_140940982;
    local_190 = FUN_14081d0ea;
    local_198 = (code *)&LAB_146572ba2;
    local_1a8 = &LAB_148ca13ba;
    local_1b0 = &LAB_140e51436;
    local_1b8 = L"Engine";
    local_1c0 = 0;
    local_1c8 = 0x10000004;
    local_1d0 = CONCAT44(local_1d0._4_4_,8);
    local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x1068);
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  lVar10 = *(longlong *)(lVar10 + 0x10);
  if (((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
      (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) !=
       DAT_14cbbd498 + 0x30)) || (lVar10 = FUN_1447210f0(), lVar10 == 0)) goto LAB_140719f91;
  lVar14 = *(longlong *)(param_1 + 0x2f0);
  if (lVar14 == 0) {
    FUN_1405b1a32();
    lVar14 = FUN_14477b664();
    *(longlong *)(param_1 + 0x2f0) = lVar14;
  }
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    if ((*(longlong *)(param_1 + 0x2e8) != 0) && (lVar14 != 0)) {
      plVar4 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
        *(undefined8 *)(param_1 + 0x2f8) = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar14 = FUN_144aff482(uVar12,(longlong *)(param_1 + 0x2e8));
        *(longlong *)(param_1 + 0x2f8) = lVar14;
        if (lVar14 != 0) goto LAB_140719f85;
      }
    }
    FUN_14071ae44();
  }
LAB_140719f85:
  iVar3 = *(int *)(param_1 + 0x918);
  if ((longlong)iVar3 != 0) {
    fVar24 = (float)*(double *)(lVar10 + 0x6d0);
    lVar10 = *(longlong *)(param_1 + 0x910);
    pfVar23 = (float *)(param_1 + 0x660);
    lVar14 = 0;
    do {
      if (*(float *)(lVar10 + lVar14) <= fVar24 && fVar24 != *(float *)(lVar10 + lVar14)) {
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0x3ff00000;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0x3ff0000000000000;
        uStack_100 = 0x3ff0000000000000;
        local_f8 = 0x3ff0000000000000;
        uStack_f0 = 0;
        local_e8 = 0x3f800000;
        local_e0 = 0;
        local_dc = 0;
        uVar12 = *(undefined8 *)
                  (param_1 + 0x67c + (longlong)*(int *)(lVar10 + 0x28 + lVar14) * 0x50);
        local_180 = pfVar23;
        FUN_1400b22c2(local_160,"ShellEjectionEmitter");
        local_1d0 = 0;
        local_1d8 = &local_148;
        FUN_14071b0f2(param_1,&local_150,local_160,uVar12);
        if (local_160[0] != (code *)0x0) {
          FUN_1400020a8();
        }
        plVar4 = local_150;
        pfVar23 = local_180;
        if (local_150 != (longlong *)0x0) {
          plVar21 = (longlong *)(lVar10 + 8 + lVar14);
          lVar6 = *plVar21;
          lVar7 = plVar21[1];
          lVar16 = *(longlong *)(lVar10 + 0x18 + lVar14);
          plVar21 = local_150 + 0x28;
          uVar9 = *(uint *)((longlong)local_150 + 0x1d4);
          iVar18 = 0;
          *(undefined4 *)(local_150 + 0x3a) = 0;
          if ((int)uVar9 < 0) {
            FUN_147f80112(plVar21,0);
            iVar18 = (int)plVar4[0x3a];
            uVar9 = *(uint *)((longlong)plVar4 + 0x1d4);
          }
          *(undefined1 *)((longlong)plVar4 + 0x26c) = 0;
          *(uint *)(plVar4 + 0x3a) = iVar18 + 1U;
          if (uVar9 < iVar18 + 1U) {
            FUN_140089f7a(plVar21,iVar18);
          }
          if ((longlong *)plVar4[0x38] != (longlong *)0x0) {
            plVar21 = (longlong *)plVar4[0x38];
          }
          lVar11 = (longlong)iVar18;
          plVar21[lVar11 * 0x10] = 0;
          (plVar21 + lVar11 * 0x10)[1] = 0;
          plVar13 = plVar21 + lVar11 * 0x10 + 2;
          *(undefined4 *)plVar13 = 0;
          *(undefined4 *)((longlong)plVar13 + 4) = 0;
          *(undefined4 *)(plVar13 + 1) = 0;
          *(undefined4 *)((longlong)plVar13 + 0xc) = 0x3ff00000;
          plVar21[lVar11 * 0x10 + 4] = lVar6;
          (plVar21 + lVar11 * 0x10 + 4)[1] = lVar7;
          plVar21[lVar11 * 0x10 + 6] = lVar16;
          (plVar21 + lVar11 * 0x10 + 6)[1] = 0;
          plVar21[lVar11 * 0x10 + 8] = 0x3ff0000000000000;
          (plVar21 + lVar11 * 0x10 + 8)[1] = 0x3ff0000000000000;
          plVar21[lVar11 * 0x10 + 10] = 0x3ff0000000000000;
          (plVar21 + lVar11 * 0x10 + 10)[1] = 0;
          plVar21[lVar11 * 0x10 + 0xc] = 0x3f800000;
          *(undefined2 *)(plVar21 + lVar11 * 0x10 + 0xd) = 0;
          *(undefined8 *)((longlong)plVar21 + lVar11 * 0x80 + 0x6c) = 0;
          FUN_1447906c0(plVar4,0);
          if (DAT_14cb253f8 == 0) {
            local_160[0] = FUN_1449e2820;
            local_190 = FUN_14081d0ea;
            local_198 = FUN_14081d0ea;
            local_1a0 = local_160;
            local_1a8 = &LAB_147f6f09d;
            local_1b0 = &LAB_146201c25;
            local_1b8 = L"Game";
            local_1c0 = 0;
            local_1c8 = 0x10000006;
            local_1d0 = CONCAT44(local_1d0._4_4_,8);
            local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x480);
            FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
          }
          lVar6 = DAT_14cb253f8;
          lVar16 = *(longlong *)(DAT_14cb253f8 + 0x110);
          if (lVar16 == 0) {
            FUN_140aa6c08(DAT_14cb253f8);
            lVar16 = *(longlong *)(lVar6 + 0x110);
            if (lVar16 != 0) goto LAB_14071a2eb;
          }
          else {
LAB_14071a2eb:
            uVar12 = FUN_140849db6(lVar16,*(undefined4 *)(lVar10 + 0x20 + lVar14));
            FUN_140849a08(local_150,uVar12);
          }
          lVar16 = FUN_14030dc32();
          if (lVar16 != 0) {
            uVar12 = FUN_14071ad3e(lVar16,*(undefined1 *)(lVar10 + 0x24 + lVar14));
            FUN_140849a08(local_150,uVar12);
          }
          plVar21 = local_150;
          plVar4 = *(longlong **)(param_1 + 0x20);
          if (((plVar4 == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
             (uVar9 = *(uint *)(param_1 + 0x18), (int)uVar9 < 0)) {
LAB_14071a463:
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)0x0;
            if ((int)uVar9 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              if (((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0x1c))) ||
                 ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_14071a463;
              if (*(code **)(*plVar4 + 0x30) == (code *)&LAB_14479b63c) {
                plVar13 = plVar4 + -0xa4;
                if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
                  plVar13 = (longlong *)plVar4[-0x77];
                }
              }
              else {
                plVar13 = (longlong *)(**(code **)(*plVar4 + 0x30))();
              }
            }
          }
          local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
          FUN_14071ab80(plVar21,&local_178,
                        pfVar23 + (longlong)*(int *)(lVar10 + 0x28 + lVar14) * 0x14,plVar13);
          plVar4 = local_150;
          local_178 = 0;
          local_170 = 0xffffffffffffffff;
          if (((local_150 != (longlong *)0x0) &&
              (*(int *)(local_150 + 0x21) = (int)local_150[0x21] + -1, (int)local_150[0x26] < 1)) &&
             (FUN_1400847bc(local_150 + 0x17,0), (int)plVar4[0x21] == 0)) {
            FUN_140087e46();
            if (*plVar4 != -1) {
              pfVar23 = local_180;
              if (DAT_14cb259f8 == 0) goto LAB_14071a067;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
            }
            pfVar23 = local_180;
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
            }
          }
        }
      }
LAB_14071a067:
      lVar14 = lVar14 + 0x30;
    } while ((longlong)iVar3 * 0x30 != lVar14);
    iVar3 = *(int *)(param_1 + 0x918);
    lVar10 = (longlong)iVar3;
    if (lVar10 != 0) {
      pfVar23 = *(float **)(param_1 + 0x910);
      local_180 = pfVar23 + 0xc;
      iVar22 = 0;
      bVar15 = *pfVar23 <= fVar24 && fVar24 != *pfVar23;
      iVar18 = 0;
      do {
        lVar14 = (longlong)iVar18;
        iVar5 = iVar18 + 1;
        if (iVar18 + 1 < iVar3) {
          iVar5 = iVar3;
        }
        pfVar17 = local_180 + lVar14 * 0xc;
        iVar19 = iVar18;
        lVar16 = lVar14;
        do {
          lVar16 = lVar16 + 1;
          iVar20 = iVar5;
          if (lVar10 <= lVar16) break;
          fVar1 = *pfVar17;
          fVar2 = *pfVar17;
          iVar19 = iVar19 + 1;
          pfVar17 = pfVar17 + 0xc;
          iVar20 = iVar19;
        } while (bVar15 == (fVar2 <= fVar24 && fVar24 != fVar1));
        if (bVar15 == false) {
          if (iVar22 != iVar18) {
            memmove(pfVar23 + (longlong)iVar22 * 0xc,pfVar23 + lVar14 * 0xc,
                    (longlong)(iVar20 - iVar18) * 0x30);
          }
          iVar22 = iVar22 + (iVar20 - iVar18);
        }
        bVar15 = (bool)(bVar15 ^ 1);
        iVar18 = iVar20;
      } while (lVar16 < lVar10);
      *(int *)(param_1 + 0x918) = iVar22;
    }
  }
LAB_140719f91:
  if ((local_c0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071a6e6 FUN_14071a6e6 body=1177 status=ok
// SIG undefined FUN_14071a6e6(void)

void FUN_14071a6e6(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_1a8 [40];
  ulonglong local_180;
  int local_174;
  uint *local_170;
  ulonglong local_168;
  longlong local_160;
  undefined8 local_158 [12];
  undefined8 local_f8 [13];
  char local_89;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  char *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14478b484();
  if ((*(char *)((longlong)param_1 + 0x489) != '\0') || ((char)param_1[0x91] == '\x01')) {
    local_89 = '\0';
    puVar15 = (uint *)(param_1 + 0x95);
    uVar2 = *(uint *)(param_1 + 0x98);
    uVar18 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      uVar22 = 1;
      uVar20 = 0;
      iVar11 = 0;
      uVar5 = 0;
    }
    else {
      puVar3 = (uint *)param_1[0x97];
      if ((uint *)param_1[0x97] == (uint *)0x0) {
        puVar3 = puVar15;
      }
      uVar5 = *puVar3;
      if (uVar5 == 0) {
        iVar11 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar11 = uVar2 - 1;
        }
        uVar20 = 0;
        uVar22 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar22 = uVar20;
        }
        iVar11 = 0;
        do {
          if (uVar22 == uVar20) goto LAB_14071aaf5;
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar3[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar20 = 0;
        iVar11 = 0;
      }
      uVar22 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar22 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar5 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar5) {
        uVar5 = uVar2;
      }
    }
    if (uVar5 != uVar2) {
      uVar21 = 0xffffffff;
      local_170 = puVar15;
      local_168 = uVar18;
      do {
        lVar17 = param_1[0x93];
        lVar10 = (longlong)(int)uVar5;
        lVar16 = *(longlong *)(lVar17 + 8 + lVar10 * 0x18);
        if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x130))) {
          plVar13 = (longlong *)param_1[4];
          local_174 = iVar11;
          if (((plVar13 != (longlong *)0x0) &&
              ((((*(int *)((longlong)param_1 + 0x1c) != 0 &&
                 (uVar2 = *(uint *)(param_1 + 3), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
               && ((lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8),
                   lVar16 != 0 && (*(int *)(lVar16 + 0x10) == *(int *)((longlong)param_1 + 0x1c)))))
              )) && ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
            puVar12 = (undefined8 *)(lVar10 * 0x18 + lVar17);
            local_180 = 0;
            (**(code **)(*plVar13 + 0x28))(plVar13,local_f8,*puVar12,0);
            lVar16 = puVar12[1];
            puVar12 = local_f8;
            puVar14 = local_158;
            for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            lVar8 = lVar16 + 0x140;
            uVar2 = *(uint *)(lVar16 + 0x1d4);
            *(undefined4 *)(lVar16 + 0x1d0) = 0;
            if ((int)uVar2 < 0) {
              FUN_147f80112(lVar8,0);
              local_180 = (ulonglong)*(uint *)(lVar16 + 0x1d0);
              uVar2 = *(uint *)(lVar16 + 0x1d4);
            }
            *(undefined1 *)(lVar16 + 0x26c) = 0;
            uVar5 = (int)local_180 + 1;
            *(uint *)(lVar16 + 0x1d0) = uVar5;
            if (uVar2 < uVar5) {
              FUN_140089f7a(lVar8);
            }
            if (*(longlong *)(lVar16 + 0x1c0) != 0) {
              lVar8 = *(longlong *)(lVar16 + 0x1c0);
            }
            lVar4 = (longlong)(int)local_180 * 0x80;
            puVar12 = local_158;
            puVar14 = (undefined8 *)(lVar8 + lVar4);
            for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            *(undefined8 *)(lVar8 + 0x60 + lVar4) = 0x3f800000;
            *(undefined2 *)(lVar8 + 0x68 + lVar4) = 0;
            *(undefined8 *)(lVar8 + 0x6c + lVar4) = 0;
            FUN_1447906c0(lVar16,0);
            puVar15 = local_170;
          }
          plVar13 = (longlong *)(lVar10 * 0x18 + 8 + lVar17);
          if (((char)param_1[0x91] == '\x01') && (local_89 == '\0')) {
            local_78 = 0;
            local_68 = &PTR_LAB_14b4aa330;
            local_60 = &local_89;
            local_88[0] = &LAB_143ec7be6;
            FUN_1438a42ba(*plVar13,local_88);
          }
          (**(code **)(*param_1 + 0x30))(param_1,plVar13);
          local_160 = *plVar13;
          if (local_160 != 0) {
            *(int *)(local_160 + 0x108) = *(int *)(local_160 + 0x108) + 1;
          }
          FUN_1407d5998(param_1,&local_160);
          uVar2 = *(uint *)(param_1 + 0x98);
          uVar18 = local_168;
          iVar11 = local_174;
        }
        uVar21 = uVar21 & ~(uint)uVar22;
        puVar3 = (uint *)param_1[0x97];
        if ((uint *)param_1[0x97] == (uint *)0x0) {
          puVar3 = puVar15;
        }
        iVar19 = (int)uVar20;
        lVar17 = (longlong)iVar19;
        uVar5 = puVar3[lVar17] & uVar21;
        if (uVar5 == 0) {
          iVar6 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar6 = uVar2 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar19) {
            iVar7 = iVar19;
          }
          if (iVar19 < iVar6) {
            lVar16 = 0;
            do {
              uVar5 = puVar3[lVar17 + lVar16 + 1];
              if (uVar5 != 0) {
                uVar20 = (ulonglong)(iVar19 + (int)lVar16 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14071aa63;
              }
              iVar11 = iVar11 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar7 - lVar17 != lVar16);
            uVar21 = 0xffffffff;
            iVar19 = iVar7;
          }
          uVar20 = (ulonglong)(iVar19 + 1);
          puVar15 = local_170;
          uVar5 = uVar2;
        }
        else {
LAB_14071aa63:
          uVar22 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar22 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar5 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar5) {
            uVar5 = uVar2;
          }
        }
      } while (uVar5 != (uint)uVar18);
    }
LAB_14071aaf5:
    *(char *)(param_1 + 0x91) = local_89;
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  lVar17 = param_1[0x25];
  if ((longlong)(int)lVar17 != 0) {
    lVar16 = param_1[0x24];
    lVar10 = 0;
    do {
      plVar13 = *(longlong **)(lVar16 + 0xb0 + lVar10);
      if ((plVar13 != (longlong *)0x0) && (*plVar13 != -1)) {
        FUN_144940320();
      }
      lVar10 = lVar10 + 0xc0;
    } while ((longlong)(int)lVar17 * 0xc0 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071ab80 FUN_14071ab80 body=445 status=ok
// SIG undefined FUN_14071ab80(void)

undefined8 *
FUN_14071ab80(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    if (DAT_14cb25698 == 0) {
      uVar3 = FUN_140cd185c();
      DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar3,L"WwiseEventDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb25698);
    param_3[1] = lVar4;
  }
  lVar5 = param_3[2];
  if (lVar5 != 0) {
LAB_14071abaa:
    if (lVar4 == 0) {
      if (DAT_14cb25698 == 0) {
        uVar3 = FUN_140cd185c();
        DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar3,L"WwiseEventDef");
      }
      lVar4 = FUN_14477b664(DAT_14cb25698);
      param_3[1] = lVar4;
      lVar5 = param_3[2];
      if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*param_3 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar3,param_3);
        }
        param_3[2] = lVar5;
      }
    }
    FUN_14084a448(param_1,param_2,lVar5,param_4,param_5);
    return param_2;
  }
  if ((lVar4 != 0) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_3[2] = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar3,param_3);
      param_3[2] = lVar5;
      if (lVar5 != 0) {
        lVar4 = param_3[1];
        goto LAB_14071abaa;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0xffffffffffffffff;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14071ad3e FUN_14071ad3e body=261 status=ok
// SIG undefined FUN_14071ad3e(void)

longlong FUN_14071ad3e(longlong param_1,byte param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x498) != *(int *)(param_1 + 0x4c4)) {
    lVar5 = param_1 + 0x4c8;
    if (*(longlong *)(param_1 + 0x4d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x4d0);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x4d8) - 1U & (uint)param_2) * 4);
    if (iVar7 != -1) {
      while (pbVar1 = (byte *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar7 * 0x28),
            *pbVar1 != param_2) {
        iVar7 = *(int *)(pbVar1 + 0x20);
        if (iVar7 == -1) {
          return 0;
        }
      }
      pbVar6 = pbVar1 + 8;
      if (pbVar6 != (byte *)0x0 && pbVar1 != (byte *)0x0) {
        lVar5 = *(longlong *)(pbVar1 + 0x10);
        if (lVar5 == 0) {
          uVar4 = FUN_1405b1a32();
          lVar5 = FUN_14477b664(uVar4);
          *(longlong *)(pbVar1 + 0x10) = lVar5;
        }
        if (*(longlong *)(pbVar1 + 0x18) != 0) {
          return *(longlong *)(pbVar1 + 0x18);
        }
        if (lVar5 == 0) {
          return 0;
        }
        if (*(longlong *)pbVar6 == 0) {
          return 0;
        }
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,pbVar6);
        }
        *(longlong *)(pbVar1 + 0x18) = lVar5;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 14071ae44 FUN_14071ae44 body=684 status=ok
// SIG undefined FUN_14071ae44(void)

void FUN_14071ae44(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((longlong *)param_1[4] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) &&
      (uVar5 = *(uint *)(param_1 + 3), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x1c))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = (**(code **)(*(longlong *)param_1[4] + 0x30))();
      if (lVar6 != 0) {
        if (DAT_14cb5b388 == 0) {
          local_80 = &local_48;
          local_48 = FUN_141864c34;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_146431698;
          local_88 = &LAB_1486775cb;
          local_90 = &LAB_1464cee35;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x10000005;
          local_b0 = 0x10;
          local_b8 = 0x3a20;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
        }
        if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
          lVar1 = *(longlong *)(lVar6 + 0x1c8);
          if (lVar1 == 0) {
            local_38 = DAT_14c8464f0;
            local_48 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_40 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_48 = *(code **)(lVar1 + 0x260);
            uStack_40 = *(undefined8 *)(lVar1 + 0x268);
            local_38 = *(undefined8 *)(lVar1 + 0x270);
          }
          lVar1 = FUN_1402a107a();
          if (lVar1 != 0) {
            lVar1 = lVar1 + 0x478;
            lVar2 = FUN_1402a0e9e(lVar1);
            if (lVar2 != 0) {
              lVar2 = FUN_1402a0e9e(lVar1);
              if (lVar2 != 0) {
                uVar3 = FUN_1402a0e9e(lVar1);
                uVar4 = FUN_1447210f0(lVar6);
                uVar3 = FUN_1402a1570(uVar4,uVar3);
                FUN_1402a10ba(&local_2a,uVar4,uVar3,&local_48);
                uVar5 = 0;
                if (local_29 != '\0') {
                  uVar5 = (uint)local_2a;
                }
                lVar6 = FUN_1402a0e9e(lVar1);
                if ((int)uVar5 < *(int *)(lVar6 + 0x68)) {
                  lVar6 = FUN_1402a0e9e(lVar1);
                  lVar1 = *(longlong *)(lVar6 + 0x60);
                  lVar6 = (ulonglong)(uVar5 << 7) + (ulonglong)uVar5 * 8;
                  local_60 = *(undefined8 *)(lVar1 + 0x58 + lVar6);
                  uVar3 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x60 + lVar6));
                  local_58 = FUN_14477b664(uVar3);
                  local_50 = *(undefined8 *)(lVar1 + 0x68 + lVar6);
                  (**(code **)(*param_1 + 0x58))(param_1,&local_60,1);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071b0f2 FUN_14071b0f2 body=5040 status=ok
// SIG undefined FUN_14071b0f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong **
FUN_14071b0f2(longlong param_1,longlong **param_2,undefined8 param_3,undefined8 param_4,
             double *param_5,undefined8 param_6)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  char cVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  double *pdVar21;
  void *_Src;
  code **ppcVar22;
  longlong *plVar23;
  longlong **pplVar24;
  double dVar25;
  double *pdVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  float fVar56;
  undefined1 auStack_608 [32];
  undefined4 local_5e8;
  undefined4 local_5e0;
  undefined4 local_5d8;
  undefined8 local_5d0;
  wchar_t *local_5c8;
  undefined1 *local_5c0;
  undefined1 *local_5b8;
  code **local_5b0;
  code *local_5a8;
  code *local_5a0;
  undefined8 local_598;
  undefined4 local_58c;
  double local_588;
  double dStack_580;
  undefined1 local_578 [16];
  double local_568;
  double dStack_560;
  double local_550;
  undefined8 local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  double local_518;
  undefined8 uStack_510;
  double local_508 [12];
  longlong local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  double local_428 [4];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined4 local_3c8;
  uint uStack_3c4;
  undefined2 local_3c0;
  undefined8 local_3bc;
  undefined2 local_3a8;
  longlong local_3a0;
  ulonglong uStack_398;
  undefined1 local_390;
  longlong *local_388;
  undefined1 local_380;
  double local_378 [13];
  undefined2 local_310;
  undefined8 local_30c;
  double local_2f8 [12];
  undefined8 local_298;
  undefined2 local_290;
  double local_28c;
  double local_278 [5];
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  char cStack_190;
  undefined1 uStack_18f;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  code *local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined4 local_118;
  float fStack_114;
  char cStack_110;
  undefined1 uStack_10f;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_608;
  local_3a8 = 0;
  local_388 = (longlong *)0x0;
  local_3a0 = 0;
  uStack_398 = 0;
  local_380 = 1;
  local_438 = param_6;
  pdVar21 = local_428;
  for (lVar18 = 0xf; lVar18 != 0; lVar18 = lVar18 + -1) {
    *pdVar21 = *param_5;
    param_5 = param_5 + 1;
    pdVar21 = pdVar21 + 1;
  }
  local_390 = 0;
  uStack_430 = param_4;
  FUN_1403c7a68(param_1,&local_438);
  pplVar24 = param_2;
  if (local_388 != (longlong *)0x0) {
    if (*local_388 == -1) {
      *param_2 = (longlong *)0x0;
      iVar15 = (int)local_388[0x21] + -1;
    }
    else {
      plVar23 = *(longlong **)(param_1 + 0x20);
      if ((((((plVar23 != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
            (uVar17 = *(uint *)(param_1 + 0x18), -1 < (int)uVar17)) &&
           (((int)uVar17 < DAT_14c9647dc &&
            (lVar18 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8), lVar18 != 0)))
           ) && ((*(int *)(lVar18 + 0x10) == *(int *)(param_1 + 0x1c) &&
                 (((*(uint *)(lVar18 + 8) & 0x10200000) == 0 &&
                  (*(char *)(param_1 + 0x3c) == '\x01')))))) &&
         ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)) {
        (**(code **)(*plVar23 + 0x28))(plVar23,&local_498,uStack_430,0);
        uVar41 = 0;
        uVar42 = 0;
        dVar50 = 0.0;
        dVar53 = 0.0;
        if ((char)local_3a8 == '\0') {
          dVar50 = local_498;
          dVar53 = dStack_490;
        }
        uVar37 = 0;
        uVar38 = 0x3ff00000;
        uVar39 = 0;
        uVar40 = 0;
        uVar43 = uVar37;
        uVar44 = uVar38;
        if ((char)local_3a8 == '\0') {
          uVar41 = local_488;
          uVar42 = uStack_484;
          uVar43 = uStack_480;
          uVar44 = uStack_47c;
        }
        dVar6 = local_458._0_8_;
        dVar25 = local_458._8_8_;
        plVar19 = plVar23;
        lVar16 = (**(code **)(*plVar23 + 0x30))();
        iVar15 = (int)plVar19;
        lVar18 = 0;
        if (lVar16 == 0) {
LAB_14071c442:
          local_518 = 1.0;
          uStack_510 = 0;
          local_550 = 1.0;
        }
        else {
          if (DAT_14cac9ca8 == 0) {
            local_5b0 = &local_178;
            local_178 = FUN_141030f22;
            local_5a0 = FUN_14081d0ea;
            local_5a8 = FUN_14081d0ea;
            local_5b8 = &LAB_1478c0a72;
            local_5c0 = &LAB_1417b2375;
            local_5c8 = L"Engine";
            local_5d0 = 0x1000000000;
            local_5d8 = 0x10000004;
            local_5e0 = 8;
            local_5e8 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          iVar15 = *(int *)(DAT_14cac9ca8 + 0x38);
          lVar18 = DAT_14cac9ca8;
          if (*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar15) goto LAB_14071c442;
          lVar18 = DAT_14cac9ca8 + 0x30;
          local_518 = 1.0;
          uStack_510 = 0;
          local_550 = 1.0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar15 * 8) == lVar18
             ) {
            lVar18 = *(longlong *)(lVar16 + 0x1c8);
            if (lVar18 == 0) {
              local_550 = 1.0;
              uVar37 = 0;
              uVar38 = 0x3ff00000;
              uVar39 = 0;
              uVar40 = 0x3ff00000;
            }
            else {
              uVar37 = *(undefined4 *)(lVar18 + 0x280);
              uVar38 = *(undefined4 *)(lVar18 + 0x284);
              uVar39 = *(undefined4 *)(lVar18 + 0x288);
              uVar40 = *(undefined4 *)(lVar18 + 0x28c);
              local_550 = *(double *)(lVar18 + 0x290);
            }
            local_518 = (double)CONCAT44(uVar40,uVar39);
            uStack_510 = CONCAT44(uVar40,uVar39);
          }
        }
        local_588 = local_468;
        dStack_580 = dStack_460;
        local_568 = local_478;
        dStack_560 = dStack_470;
        local_548 = (double)CONCAT44(uVar38,uVar37);
        dVar7 = local_3e8._0_8_;
        dVar31 = local_3e8._8_8_;
        dVar8 = local_3d8._0_8_;
        local_58c = local_3c8;
        local_528 = ZEXT416(uStack_3c4);
        cVar12 = (char)local_3c0;
        uVar3 = local_3c0._1_1_;
        auVar46 = minpd(local_3e8,local_458);
        auVar51 = minpd(local_3d8,local_448);
        auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
        auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
        iVar14 = movmskpd((int)lVar18,auVar47);
        auVar46._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
        auVar46._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
        uVar17 = movmskpd(iVar15,auVar46);
        local_538 = local_448;
        auVar46 = local_538;
        local_538._0_8_ = local_448._0_8_;
        uVar11 = local_538._0_8_;
        local_538._8_8_ = local_448._8_8_;
        uVar5 = local_538._8_8_;
        uStack_540 = uVar39;
        uStack_53c = uVar40;
        local_538 = auVar46;
        if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
          dVar45 = local_428[1] * (double)CONCAT44(uVar42,uVar41) * -1.0 +
                   local_428[2] * dVar53 +
                   dVar50 * local_428[3] * 1.0 + (double)CONCAT44(uVar44,uVar43) * local_428[0];
          dVar48 = local_428[0] * (double)CONCAT44(uVar42,uVar41) * 1.0 +
                   local_428[3] * dVar53 +
                   dVar50 * local_428[2] * -1.0 + (double)CONCAT44(uVar44,uVar43) * local_428[1];
          dVar54 = local_428[2] * (double)CONCAT44(uVar42,uVar41) * -1.0 +
                   ((dVar50 * local_428[0] * -1.0 + (double)CONCAT44(uVar44,uVar43) * local_428[3])
                   - dVar53 * local_428[1]);
          local_578._8_4_ = SUB84(dVar54,0);
          local_578._0_8_ =
               local_428[3] * (double)CONCAT44(uVar42,uVar41) * 1.0 +
               ((dVar50 * local_428[1] * 1.0 + (double)CONCAT44(uVar44,uVar43) * local_428[2]) -
               dVar53 * local_428[0]);
          local_578._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          local_408 = local_408 * dVar6;
          dStack_400 = dStack_400 * dVar25;
          local_3f8 = local_3f8 * (double)local_538._0_8_;
          dStack_3f0 = dStack_3f0 * (double)local_538._8_8_;
          dVar35 = dStack_400 * dVar50 - dVar53 * local_408;
          dVar36 = local_3f8 * dVar53 - (double)CONCAT44(uVar42,uVar41) * dStack_400;
          dVar49 = local_408 * (double)CONCAT44(uVar42,uVar41) - dVar50 * local_3f8;
          dVar52 = dStack_3f0 * (double)CONCAT44(uVar44,uVar43) -
                   (double)CONCAT44(uVar44,uVar43) * dStack_3f0;
          dVar36 = dVar36 + dVar36;
          dVar49 = dVar49 + dVar49;
          dVar35 = dVar35 + dVar35;
          dVar52 = dVar52 + dVar52;
          dVar54 = local_478 +
                   (dVar35 * dVar53 - (double)CONCAT44(uVar42,uVar41) * dVar49) +
                   (double)CONCAT44(uVar44,uVar43) * dVar36 + local_408;
          dVar55 = dStack_470 +
                   (dVar36 * (double)CONCAT44(uVar42,uVar41) - dVar35 * dVar50) +
                   (double)CONCAT44(uVar44,uVar43) * dVar49 + dStack_400;
          dVar50 = local_468 +
                   (dVar49 * dVar50 - dVar53 * dVar36) +
                   (double)CONCAT44(uVar44,uVar43) * dVar35 + local_3f8;
          dVar53 = dStack_460 +
                   (dVar52 * (double)CONCAT44(uVar44,uVar43) -
                   dVar52 * (double)CONCAT44(uVar44,uVar43)) +
                   (double)CONCAT44(uVar44,uVar43) * dVar52 + dStack_3f0;
          uVar27 = local_3bc;
        }
        else {
          dVar48 = dVar53 + dVar53;
          dVar35 = (double)CONCAT44(uVar42,uVar41) + (double)CONCAT44(uVar42,uVar41);
          dVar55 = dVar50 * (dVar50 + dVar50);
          dVar52 = dVar53 * dVar48;
          dVar54 = (double)CONCAT44(uVar42,uVar41) * dVar35;
          local_578._0_8_ = 1.0 - (dVar55 + dVar52);
          local_578._8_8_ = 0.0 - (dVar55 + dVar52);
          dVar36 = dVar35 * (double)CONCAT44(uVar44,uVar43);
          dVar49 = (dVar50 + dVar50) * (double)CONCAT44(uVar44,uVar43);
          dVar45 = dVar48 * (double)CONCAT44(uVar44,uVar43);
          local_1f8 = (1.0 - (dVar54 + dVar52)) * dVar6;
          dVar54 = (1.0 - (dVar54 + dVar55)) * dVar25;
          dStack_1f0 = (dVar48 * dVar50 + dVar36) * dVar6;
          local_1c8 = (dVar35 * dVar53 + dVar49) * dVar25;
          local_598 = local_3bc;
          local_1e8 = (dVar50 * dVar35 - dVar45) * dVar6;
          uStack_1e0 = 0;
          dVar55 = (double)local_538._0_8_ * dVar8;
          local_1d8._8_4_ = SUB84(dVar54,0);
          local_1d8._0_8_ = (dVar48 * dVar50 - dVar36) * dVar25;
          local_1d8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          dStack_1c0 = 0.0;
          local_1b8._8_8_ = (dVar35 * dVar53 - dVar49) * (double)local_538._0_8_;
          local_1b8._0_8_ = (dVar45 + dVar50 * dVar35) * (double)local_538._0_8_;
          local_1a8._8_8_ = 0;
          local_1a8._0_8_ = (double)local_578._0_8_ * (double)local_538._0_8_;
          local_198 = local_478;
          cStack_190 = SUB81(dStack_470,0);
          uStack_18f = (undefined1)((ulonglong)dStack_470 >> 8);
          uStack_18e = (undefined2)((ulonglong)dStack_470 >> 0x10);
          uStack_18c = (undefined4)((ulonglong)dStack_470 >> 0x20);
          uStack_188 = SUB84(local_468,0);
          uStack_184 = (undefined4)((ulonglong)local_468 >> 0x20);
          uStack_180 = 0x3ff0000000000000;
          dVar45 = local_428[1] + local_428[1];
          dVar50 = local_428[2] + local_428[2];
          dVar54 = local_428[0] * (local_428[0] + local_428[0]);
          local_228 = (1.0 - (dVar54 + local_428[1] * dVar45)) * dVar8;
          dVar53 = (local_428[0] + local_428[0]) * local_428[3];
          local_238 = (dVar45 * local_428[3] + local_428[0] * dVar50) * dVar8;
          local_278[4] = (dVar45 * local_428[0] - dVar50 * local_428[3]) * dVar31;
          dStack_230 = (dVar50 * local_428[1] - dVar53) * dVar8;
          local_278[0] = (1.0 - (local_428[2] * dVar50 + local_428[1] * dVar45)) * dVar7;
          dStack_250 = (1.0 - (local_428[2] * dVar50 + dVar54)) * dVar31;
          local_278[1] = (dVar45 * local_428[0] + dVar50 * local_428[3]) * dVar7;
          local_248 = (dVar50 * local_428[1] + dVar53) * dVar31;
          local_278[2] = (local_428[0] * dVar50 - dVar45 * local_428[3]) * dVar7;
          local_278[3] = 0.0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_408;
          uStack_210 = SUB82(dStack_400,0);
          uStack_20e = (undefined2)((ulonglong)dStack_400 >> 0x10);
          uStack_20c = (undefined4)((ulonglong)dStack_400 >> 0x20);
          uStack_208 = SUB84(local_3f8,0);
          uStack_204 = (undefined4)((ulonglong)local_3f8 >> 0x20);
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178);
          local_578._0_8_ = local_168;
          dVar50 = local_168 * local_168 +
                   (double)local_178 * (double)local_178 + local_170 * local_170;
          local_568 = local_148;
          dVar53 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
          local_588 = local_128;
          dVar54 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
          uVar30 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
          dVar50 = (double)(~uVar30 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar50)) & uVar30)
          ;
          uVar30 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
          dVar53 = (double)(~uVar30 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar53)) & uVar30)
          ;
          uVar30 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
          dVar45 = (double)(~uVar30 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar54)) & uVar30)
          ;
          auVar51._8_8_ = -(ulonglong)(0.0 <= dVar25 * dVar31);
          auVar51._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
          auVar46 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar51);
          uVar30 = -(ulonglong)(0.0 <= dVar55);
          dVar54 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
          dVar55 = auVar46._0_8_;
          local_178 = (code *)((double)local_178 * dVar50 * dVar55);
          local_170 = local_170 * dVar50 * dVar55;
          local_168 = dVar50 * local_168 * dVar55;
          dVar50 = auVar46._8_8_;
          local_148 = dVar53 * local_148 * dVar50;
          local_150 = local_150 * dVar53 * dVar50;
          local_158 = dVar50 * local_158 * dVar53;
          local_128 = dVar45 * local_128 * dVar54;
          local_130 = local_130 * dVar45 * dVar54;
          local_138 = dVar54 * local_138 * dVar45;
          FUN_14481fd10(local_2f8,&local_178);
          dVar50 = local_2f8[2] * local_2f8[2] + local_2f8[0] * local_2f8[0];
          dVar53 = local_2f8[3] * local_2f8[3] + local_2f8[1] * local_2f8[1];
          auVar33._0_8_ = dVar50 + dVar53;
          auVar33._8_8_ = dVar50 + dVar53;
          auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
          auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
          auVar46 = sqrtpd(auVar33,auVar33);
          auVar46 = divpd(_DAT_149934d80,auVar46);
          auVar34._0_8_ = auVar46._0_8_ * local_2f8[2];
          auVar34._8_8_ = auVar46._8_8_ * local_2f8[3];
          dVar45 = (double)((ulonglong)(local_2f8[0] * auVar46._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
          dVar48 = (double)((ulonglong)(local_2f8[1] * auVar46._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
          local_578 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar32);
          dVar54 = (double)CONCAT44(fStack_114,local_118);
          dVar55 = (double)CONCAT44(uStack_10c,CONCAT22(uStack_10e,CONCAT11(uStack_10f,cStack_110)))
          ;
          dVar50 = (double)CONCAT44(uStack_104,uStack_108);
          dVar53 = 0.0;
          uVar27 = local_598;
        }
        plVar19 = local_388;
        uVar41 = local_58c;
        dVar35 = local_3d8._8_8_ * (double)uVar5;
        uVar37 = (undefined4)((ulonglong)dVar35 >> 0x20);
        uVar42 = SUB84(dVar35,0);
        uVar39 = (undefined4)((ulonglong)(dVar31 * dVar25) >> 0x20);
        uVar38 = SUB84(dVar31 * dVar25,0);
        fVar56 = (float)(~-(uint)((float)local_528._0_4_ < 0.0) & local_528._0_4_ |
                        -(uint)((float)local_528._0_4_ < 0.0) & 0xbf800000);
        if ((local_3a8._1_1_ == '\x01') && (0 < (int)uStack_398)) {
          local_538[0] = uVar3;
          local_4a8 = 0;
          uStack_4a0 = 0;
          local_598 = uVar27;
          FUN_140086b68();
          uVar41 = local_58c;
          lVar18 = (longlong)(int)uStack_398;
          local_528._0_8_ = lVar18;
          if (lVar18 != 0) {
            local_588 = (double)(local_3a0 + 0x6c);
            local_528._0_8_ = lVar18 << 7;
            dVar25 = 0.0;
            dVar35 = local_518 * local_518;
            dVar31 = local_548 * local_548;
            dVar36 = local_550 * local_550;
            do {
              _Src = (void *)((longlong)local_588 + (longlong)dVar25 + -0x6c);
              lVar18 = *(longlong *)((longlong)local_588 + (longlong)dVar25);
              local_568 = dVar25;
              if (lVar18 == 0) {
                local_1e8 = (double)local_578._0_8_;
                uStack_1e0 = local_578._8_8_;
                local_1d8._8_8_ = dVar55;
                local_1d8._0_8_ = dVar54;
                local_1b8._8_4_ = uVar38;
                local_1b8._0_8_ = dVar7 * dVar6;
                local_1b8._12_4_ = uVar39;
                local_1a8._8_4_ = uVar42;
                local_1a8._0_8_ = dVar8 * (double)uVar11;
                local_1a8._12_4_ = uVar37;
                local_198 = (double)CONCAT44(fVar56,uVar41);
                cStack_190 = cVar12;
                uStack_18f = local_538[0];
                uStack_18c = (undefined4)local_598;
                uStack_188 = (undefined4)((ulonglong)local_598 >> 0x20);
                uVar40 = *(undefined4 *)((longlong)local_588 + -0xc + (longlong)dVar25);
                fVar1 = *(float *)((longlong)local_588 + -8 + (longlong)dVar25);
                cVar2 = *(char *)((longlong)local_588 + -4 + (longlong)dVar25);
                uVar3 = *(undefined1 *)((longlong)local_588 + -3 + (longlong)dVar25);
                local_1f8 = dVar45;
                dStack_1f0 = dVar48;
                local_1c8 = dVar50;
                dStack_1c0 = dVar53;
                memmove(&local_178,_Src,0x60);
                pdVar21 = &local_1f8;
                dVar25 = 0.0;
                cStack_110 = cVar2;
                uStack_10f = uVar3;
                local_118 = uVar40;
                fStack_114 = fVar1;
              }
              else {
                (**(code **)(*plVar23 + 0x28))(plVar23,local_508,lVar18,0);
                pdVar21 = local_508;
                pdVar26 = local_278;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar26 = *pdVar21;
                  pdVar21 = pdVar21 + 1;
                  pdVar26 = pdVar26 + 1;
                }
                local_218 = 5.26354424712089e-315;
                uStack_210 = 0;
                uStack_20c = 0;
                uStack_208 = 0;
                pdVar21 = local_428;
                pdVar26 = local_378;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar26 = *pdVar21;
                  pdVar21 = pdVar21 + 1;
                  pdVar26 = pdVar26 + 1;
                }
                local_310 = local_3c0;
                local_30c = local_3bc;
                uVar5 = *(undefined8 *)((longlong)local_588 + -0xc + (longlong)dVar25);
                uVar4 = *(undefined2 *)((longlong)local_588 + -4 + (longlong)dVar25);
                local_548 = *(double *)((longlong)local_588 + (longlong)dVar25);
                memmove(local_2f8,_Src,0x60);
                local_28c = local_548;
                local_298 = uVar5;
                local_290 = uVar4;
                FUN_1400875ba(local_2f8,local_378);
                pdVar21 = local_2f8;
                ppcVar22 = &local_178;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *ppcVar22 = (code *)*pdVar21;
                  pdVar21 = pdVar21 + 1;
                  ppcVar22 = ppcVar22 + 1;
                }
                pdVar21 = local_278;
                dVar25 = local_28c;
                cStack_110 = (char)local_290;
                uStack_10f = local_290._1_1_;
                local_118 = (undefined4)local_298;
                fStack_114 = local_298._4_4_;
              }
              uStack_10c = SUB84(dVar25,0);
              uStack_108 = (undefined4)((ulonglong)dVar25 >> 0x20);
              FUN_1400875ba(&local_178,pdVar21);
              uVar30 = uStack_4a0;
              if (cStack_110 == '\x01') {
                fStack_114 = (float)((double)fStack_114 * SQRT(dVar36 + dVar31 + dVar35));
              }
              lVar18 = (longlong)(int)uStack_4a0;
              uVar17 = (int)uStack_4a0 + 1;
              uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar17);
              if (uStack_4a0._4_4_ < uVar17) {
                FUN_144796b16(&local_4a8,uVar30 & 0xffffffff);
              }
              lVar18 = lVar18 * 0x80;
              ppcVar22 = &local_178;
              puVar29 = (undefined8 *)(local_4a8 + lVar18);
              for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                *puVar29 = *ppcVar22;
                ppcVar22 = ppcVar22 + 1;
                puVar29 = puVar29 + 1;
              }
              *(undefined4 *)(local_4a8 + 0x60 + lVar18) = local_118;
              *(float *)(local_4a8 + 100 + lVar18) = fStack_114;
              *(char *)(local_4a8 + 0x68 + lVar18) = cStack_110;
              *(undefined1 *)(local_4a8 + 0x69 + lVar18) = uStack_10f;
              *(ulonglong *)(local_4a8 + 0x6c + lVar18) = CONCAT44(uStack_108,uStack_10c);
              dVar25 = (double)((longlong)local_568 + 0x80);
            } while ((double)local_528._0_8_ != dVar25);
          }
          FUN_144904532(local_388,&local_4a8);
          if (local_4a8 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (cVar12 != '\0') {
            fVar56 = (float)((double)fVar56 *
                            SQRT(local_550 * local_550 +
                                 local_548 * local_548 + local_518 * local_518));
          }
          plVar23 = local_388 + 0x28;
          uVar17 = *(uint *)((longlong)local_388 + 0x1d4);
          iVar15 = 0;
          *(undefined4 *)(local_388 + 0x3a) = 0;
          if ((int)uVar17 < 0) {
            FUN_147f80112(plVar23,0);
            iVar15 = (int)plVar19[0x3a];
            uVar17 = *(uint *)((longlong)plVar19 + 0x1d4);
          }
          *(undefined1 *)((longlong)plVar19 + 0x26c) = 0;
          *(uint *)(plVar19 + 0x3a) = iVar15 + 1U;
          if (uVar17 < iVar15 + 1U) {
            local_598 = uVar27;
            FUN_140089f7a(plVar23,iVar15);
            uVar27 = local_598;
          }
          if ((longlong *)plVar19[0x38] != (longlong *)0x0) {
            plVar23 = (longlong *)plVar19[0x38];
          }
          lVar18 = (longlong)iVar15;
          lVar16 = lVar18 * 0x80;
          plVar23[lVar18 * 0x10] = (longlong)dVar45;
          (plVar23 + lVar18 * 0x10)[1] = (longlong)dVar48;
          plVar23[lVar18 * 0x10 + 2] = local_578._0_8_;
          (plVar23 + lVar18 * 0x10 + 2)[1] = local_578._8_8_;
          plVar23[lVar18 * 0x10 + 4] = (longlong)dVar54;
          (plVar23 + lVar18 * 0x10 + 4)[1] = (longlong)dVar55;
          plVar23[lVar18 * 0x10 + 6] = (longlong)dVar50;
          (plVar23 + lVar18 * 0x10 + 6)[1] = (longlong)dVar53;
          auVar10._8_4_ = uVar38;
          auVar10._0_8_ = dVar7 * dVar6;
          auVar10._12_4_ = uVar39;
          *(undefined1 (*) [16])(plVar23 + lVar18 * 0x10 + 8) = auVar10;
          auVar9._8_4_ = uVar42;
          auVar9._0_8_ = dVar8 * (double)uVar11;
          auVar9._12_4_ = uVar37;
          *(undefined1 (*) [16])(plVar23 + lVar18 * 0x10 + 10) = auVar9;
          *(undefined4 *)(plVar23 + lVar18 * 0x10 + 0xc) = uVar41;
          *(float *)((longlong)plVar23 + lVar16 + 100) = fVar56;
          *(char *)(plVar23 + lVar18 * 0x10 + 0xd) = cVar12;
          *(undefined1 *)((longlong)plVar23 + lVar16 + 0x69) = uVar3;
          *(undefined8 *)((longlong)plVar23 + lVar16 + 0x6c) = uVar27;
          if (fVar56 < 0.0) {
            *(int *)((longlong)plVar23 + lVar16 + 100) = (int)plVar19[0x4d];
            *(undefined1 *)((longlong)plVar19 + 0x26c) = 1;
          }
          FUN_1447906c0(plVar19,0);
        }
      }
      iVar15 = *(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = iVar15 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar15 + 1U) {
        FUN_14084a9a4((longlong *)(param_1 + 400),iVar15);
      }
      uVar30 = uStack_398;
      lVar13 = local_3a0;
      lVar16 = *(longlong *)(param_1 + 400);
      lVar28 = (longlong)iVar15 * 0xc0;
      lVar18 = lVar16 + lVar28;
      puVar29 = (undefined8 *)(lVar16 + lVar28);
      *puVar29 = local_438;
      puVar29[1] = uStack_430;
      pdVar21 = local_428;
      pdVar26 = (double *)(puVar29 + 2);
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar26 = *pdVar21;
        pdVar21 = pdVar21 + 1;
        pdVar26 = pdVar26 + 1;
      }
      *(undefined4 *)(puVar29 + 0xe) = local_3c8;
      *(uint *)((longlong)puVar29 + 0x74) = uStack_3c4;
      *(char *)(puVar29 + 0xf) = (char)local_3c0;
      *(undefined1 *)((longlong)puVar29 + 0x79) = local_3c0._1_1_;
      *(undefined8 *)((longlong)puVar29 + 0x7c) = local_3bc;
      *(undefined2 *)(puVar29 + 0x12) = local_3a8;
      puVar29[0x13] = 0;
      *(int *)(puVar29 + 0x14) = (int)uStack_398;
      if ((int)uStack_398 == 0) {
        *(undefined4 *)(lVar18 + 0xa4) = 0;
      }
      else {
        puVar29 = (undefined8 *)(lVar16 + lVar28 + 0x98);
        FUN_140d27400(puVar29,uStack_398 & 0xffffffff,0);
        FUN_144796a68(*puVar29,lVar13,uVar30 & 0xffffffff);
      }
      *(undefined1 *)(lVar18 + 0xa8) = local_390;
      *(longlong **)(lVar18 + 0xb0) = local_388;
      if (local_388 != (longlong *)0x0) {
        *(int *)(local_388 + 0x21) = (int)local_388[0x21] + 1;
      }
      *(undefined1 *)(lVar18 + 0xb8) = local_380;
      *param_2 = local_388;
      if (local_388 == (longlong *)0x0) goto LAB_14071b870;
      iVar15 = (int)local_388[0x21];
      *(int *)(local_388 + 0x21) = iVar15 + 1;
    }
    plVar23 = local_388;
    pplVar24 = &local_388;
    *(int *)(local_388 + 0x21) = iVar15;
    if (((int)local_388[0x26] < 1) && (FUN_1400847bc(local_388 + 0x17,0), (int)plVar23[0x21] == 0))
    {
      FUN_140087e46(plVar23);
      if (*plVar23 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14071b869;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar23);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar23);
      }
    }
  }
LAB_14071b869:
  *pplVar24 = (longlong *)0x0;
LAB_14071b870:
  if (local_3a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14071c4a4 FUN_14071c4a4 body=345 status=ok
// SIG undefined FUN_14071c4a4(void)

void FUN_14071c4a4(uint *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = 0;
  memset(*(void **)(param_1 + 8),(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),
         (ulonglong)param_1[2] << 2);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar3 = *(uint *)(param_2 + 1);
  param_1[0x10] = uVar3;
  param_1[0x11] = (int)uVar1 * param_1[0xf] * uVar3;
  param_1[0x12] = 1;
  FUN_14573ec56(param_1 + 10);
  **(undefined8 **)(param_1 + 10) = 0x3ffffffffffff;
  uVar3 = param_1[0x10];
  if (0 < (int)uVar3) {
    uVar6 = param_1[0xf];
    uVar4 = 0;
    do {
      if (0 < (int)uVar6) {
        uVar3 = param_1[0xe];
        uVar7 = 0;
        do {
          if (0 < (int)uVar3) {
            uVar6 = 0;
            do {
              uVar5 = uVar6 & 0xff | (uVar7 & 0xff) << 8 | (uVar4 & 0xff) << 0x10;
              if (uVar5 != 0) {
                if (*param_1 == param_1[1]) {
                  uVar3 = *param_1 * 2;
                  if (uVar3 < 0x21) {
                    uVar3 = 0x20;
                  }
                  FUN_14071c684(param_1,uVar3);
                }
                if (param_1[2] <= uVar5) {
                  uVar3 = uVar5 * 2 + 1;
                  iVar2 = 0x1f;
                  if (uVar3 != 0) {
                    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                    }
                  }
                  uVar3 = 1 << ((byte)iVar2 & 0x1f);
                  if (uVar3 < 0x21) {
                    uVar3 = 0x20;
                  }
                  FUN_144a23d60(param_1,uVar3);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar3 * 4) = uVar5;
                *(undefined8 *)(*(longlong *)(param_1 + 6) + (ulonglong)uVar5 * 8) = 0;
                *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 4) = uVar3;
                FUN_14071c5fe(param_1);
                uVar3 = param_1[0xe];
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < (int)uVar3);
            uVar6 = param_1[0xf];
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
        uVar3 = param_1[0x10];
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar3);
  }
  return;
}



// FUNCTION 14071c5fe FUN_14071c5fe body=133 status=ok
// SIG undefined FUN_14071c5fe(void)

void FUN_14071c5fe(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 4);
  uVar3 = param_2;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      uVar5 = (ulonglong)uVar3;
      uVar6 = uVar3 - 1;
      uVar4 = uVar6 >> 1;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 4);
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 8) <=
          *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 8)) break;
      *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x20) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) * 4) = uVar3;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar4;
    } while (1 < uVar6);
  }
  if ((uint)uVar5 != param_2) {
    *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) = uVar1;
    *(uint *)(*(longlong *)(param_1 + 0x20) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) * 4) = (uint)uVar5;
  }
  return;
}



// FUNCTION 14071c684 FUN_14071c684 body=108 status=ok
// SIG undefined FUN_14071c684(void)

void FUN_14071c684(uint *param_1,uint param_2)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68((ulonglong)param_2 * 4 + (ulonglong)((ulonglong)param_2 == 0),0x10);
  if ((ulonglong)param_1[1] != 0) {
    _Src = *(void **)(param_1 + 4);
    memcpy(_Dst,_Src,(ulonglong)param_1[1] << 2);
    if (_Src != (void *)0x0) {
      FUN_1400020a8(_Src);
    }
  }
  uVar1 = *param_1;
  if (param_2 <= *param_1) {
    uVar1 = param_2;
  }
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(void **)(param_1 + 4) = _Dst;
  return;
}



// FUNCTION 14071c6f0 FUN_14071c6f0 body=32 status=ok
// SIG undefined FUN_14071c6f0(void)

undefined8 * FUN_14071c6f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_14071c710(&DAT_14ca8cb58);
  return param_1;
}



// FUNCTION 14071c710 FUN_14071c710 body=3267 status=ok
// SIG undefined FUN_14071c710(void)

void FUN_14071c710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  ulonglong *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  int local_cc;
  uint local_c8;
  int local_c4;
  longlong local_c0;
  longlong local_b8;
  LPCRITICAL_SECTION local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88 [2];
  undefined8 local_78;
  longlong lStack_70;
  undefined *local_68;
  ulonglong local_60;
  undefined6 uVar14;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b0 = (LPCRITICAL_SECTION)(param_1 + 0x10);
  local_e8 = param_2;
  EnterCriticalSection(local_b0);
  local_b8 = param_1;
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar18 = param_1 + 0x88;
    local_d8 = param_1 + 0x70;
    local_c0 = param_1 + 0xd8;
    uVar4 = 0;
    local_a8 = lVar18;
    do {
      lVar23 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar23 = lVar18;
      }
      lVar17 = (longlong)(int)uVar4;
      lVar23 = *(longlong *)(lVar23 + lVar17 * 8);
      if ((*(longlong *)(lVar23 + 8) == 0) ||
         ((*(int *)(*(longlong *)(lVar23 + 8) + 0x10) == 0 &&
          (cVar3 = (**(code **)(**(longlong **)(lVar23 + 8) + 0x18))(), cVar3 != '\0')))) {
        iVar25 = DAT_14c760dcc;
        uVar7 = *(uint *)(lVar23 + 0x10);
        if (uVar7 == 0) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
        }
        lVar8 = *(longlong *)(lVar23 + 0x18 + (ulonglong)uVar12 * 8);
        local_a0 = lVar17;
        local_98 = lVar23;
        local_90 = uVar4;
        if (lVar8 == 0) {
          local_f0 = (ulonglong *)0x0;
        }
        else {
          local_100 = DAT_14c760dcc << 0xc;
          *(uint *)(lVar23 + 0x14) = uVar12;
          local_108 = 0;
          local_f0 = (ulonglong *)
                     (**(code **)(*DAT_14ca83900 + 0xf8))
                               (DAT_14ca83900,&DAT_14ca85100,lVar8,*(undefined8 *)(lVar23 + 8));
        }
        uVar16 = iVar25 * 0x400;
        uVar4 = *local_f0;
        uVar7 = (int)uVar4 + 1;
        uVar12 = uVar16;
        if ((int)uVar7 < (int)uVar16) {
          uVar12 = uVar7;
        }
        if (DAT_14ca8cb30 == 0) {
          iVar25 = uVar12 - 1;
          lVar23 = local_d8;
        }
        else {
          local_88[0] = 0;
          local_88[1] = 0;
          local_e0 = (ulonglong)uVar12;
          FUN_1407c8b48(local_88,L"\nMessage Buffer[0] = %u;\n",(int)*local_f0);
          if ((int)uVar16 <= (int)uVar4) {
            FUN_1407c8b48(local_88,
                          L"GPU messages size %d exceeded maximum size %d. Results have been truncated.\n"
                          ,uVar7,uVar16);
          }
          iVar25 = (int)local_e0 + -1;
          if (2 < (int)local_e0) {
            iVar10 = 1;
            local_cc = iVar25;
            do {
              lVar18 = (longlong)iVar10;
              uVar7 = *(uint *)((longlong)local_f0 + lVar18 * 4);
              uVar12 = *(uint *)((longlong)local_f0 + lVar18 * 4 + 4);
              uVar28 = ((int)local_e0 - iVar10) - 2;
              local_108 = uVar12;
              FUN_1407c8b48(local_88,L"  Message[Offset: %d, ID: %d, PayloadSize: %d, ",iVar10,uVar7
                           );
              uVar16 = uVar28;
              if ((int)uVar12 < (int)uVar28) {
                uVar16 = uVar12;
              }
              if ((int)uVar28 < (int)uVar12) {
                local_108 = (uint)local_e0;
                local_100 = uVar16;
                FUN_1407c8b48(local_88,
                              L"!payload size %d exceeds buffer size (ReadOffset=%d, ValidRangeEnd=%d), truncated to %d!, "
                              ,uVar12,iVar10);
              }
              if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
                lVar23 = *(longlong *)(param_1 + 0x78);
                if (*(longlong *)(param_1 + 0x78) == 0) {
                  lVar23 = local_d8;
                }
                iVar25 = *(int *)(lVar23 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar7) * 4);
                if (iVar25 != -1) {
                  do {
                    lVar23 = *(longlong *)(param_1 + 0x38) + (longlong)iVar25 * 0x20;
                    if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar25 * 0x20) == uVar7)
                    {
                      if ((longlong *)(lVar23 + 8) != (longlong *)0x0 && lVar23 != 0) {
                        FUN_1407c8b48(local_88,L"Name: %s]",
                                      *(undefined8 *)(*(longlong *)(lVar23 + 8) + 8));
                        goto LAB_14071c99b;
                      }
                      break;
                    }
                    iVar25 = *(int *)(lVar23 + 0x18);
                  } while (iVar25 != -1);
                }
              }
              FUN_1400020e8(local_88,L"<Unknown>]",10);
LAB_14071c99b:
              if ((int)uVar16 < 1) {
                iVar10 = iVar10 + 2;
              }
              else {
                FUN_1400020e8(local_88,L" Payload: { ",0xc);
                puVar5 = local_f0;
                local_c4 = iVar10 + 2;
                uVar4 = 0;
                local_c8 = uVar16;
                do {
                  uVar15 = uVar4 + 1;
                  puVar22 = &DAT_149e19f34;
                  if ((ulonglong)uVar16 - 1 == uVar4) {
                    puVar22 = &DAT_149dfb77a;
                  }
                  FUN_1407c8b48(local_88,L"%u%s",
                                *(undefined4 *)((longlong)puVar5 + uVar4 * 4 + lVar18 * 4 + 8),
                                puVar22);
                  uVar4 = uVar15;
                } while (uVar16 != uVar15);
                FUN_1400020e8(local_88,&DAT_14a386cd2,2);
                param_1 = local_b8;
                iVar10 = local_c4;
                uVar16 = local_c8;
              }
              FUN_1400020e8(local_88,&DAT_149e01f72,1);
              iVar10 = iVar10 + uVar16;
              iVar25 = local_cc;
            } while (iVar10 < local_cc);
          }
          lVar23 = local_d8;
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          uVar12 = (uint)local_e0;
          lVar18 = local_a8;
        }
        if (2 < (int)uVar12) {
          iVar10 = 1;
          puVar5 = local_f0;
          do {
            lVar17 = (longlong)iVar10;
            iVar20 = *(int *)((longlong)puVar5 + lVar17 * 4 + 4);
            iVar11 = (uVar12 - 2) - iVar10;
            if (iVar20 < iVar11) {
              iVar11 = iVar20;
            }
            if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
              uVar7 = *(uint *)((longlong)puVar5 + lVar17 * 4);
              lVar8 = *(longlong *)(param_1 + 0x78);
              if (*(longlong *)(param_1 + 0x78) == 0) {
                lVar8 = lVar23;
              }
              iVar20 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar7) * 4);
              if (iVar20 != -1) {
                do {
                  lVar8 = *(longlong *)(param_1 + 0x38) + (longlong)iVar20 * 0x20;
                  if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar20 * 0x20) == uVar7) {
                    if ((undefined8 *)(lVar8 + 8) != (undefined8 *)0x0 && lVar8 != 0) {
                      plVar1 = *(longlong **)(lVar8 + 8);
                      lStack_70 = (longlong)puVar5 + lVar17 * 4 + 8;
                      local_78 = (undefined8 *)CONCAT44(iVar11,uVar7);
                      local_68 = (undefined *)((ulonglong)local_68 & 0xffffffff00000000);
                      (**(code **)(*plVar1 + 8))(plVar1,&local_78);
                      puVar5 = local_f0;
                    }
                    break;
                  }
                  iVar20 = *(int *)(lVar8 + 0x18);
                } while (iVar20 != -1);
              }
            }
            iVar10 = iVar10 + iVar11 + 2;
          } while (iVar10 < iVar25);
        }
        lVar23 = local_98;
        (**(code **)(*DAT_14ca83900 + 0x100))
                  (DAT_14ca83900,&DAT_14ca85100,
                   *(undefined8 *)(local_98 + 0x18 + (ulonglong)*(uint *)(local_98 + 0x14) * 8));
        uVar4 = local_90;
        iVar25 = *(int *)(param_1 + 0xd0);
        iVar10 = ~(uint)local_90 + iVar25;
        if (iVar10 != 0) {
          lVar17 = *(longlong *)(param_1 + 200);
          if (*(longlong *)(param_1 + 200) == 0) {
            lVar17 = lVar18;
          }
          memmove((void *)(lVar17 + local_a0 * 8),(void *)(lVar17 + local_a0 * 8 + 8),
                  (longlong)iVar10 << 3);
          iVar25 = *(int *)(param_1 + 0xd0);
        }
        *(int *)(param_1 + 0xd0) = iVar25 + -1;
        FUN_1401e398a(lVar18);
        iVar25 = *(int *)(param_1 + 0x120);
        *(uint *)(param_1 + 0x120) = iVar25 + 1U;
        if (*(uint *)(param_1 + 0x124) < iVar25 + 1U) {
          FUN_147423338(local_c0,iVar25);
        }
        lVar17 = *(longlong *)(param_1 + 0x118);
        if (*(longlong *)(param_1 + 0x118) == 0) {
          lVar17 = local_c0;
        }
        *(longlong *)(lVar17 + (longlong)iVar25 * 8) = lVar23;
      }
      else {
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
    } while ((int)uVar4 < *(int *)(param_1 + 0xd0));
  }
  lVar18 = local_e8;
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) goto LAB_14071d25a;
  uVar12 = DAT_14c760dcc << 10;
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  lStack_70 = CONCAT44(lStack_70._4_4_,0x10129);
  local_68 = (undefined *)0x0;
  uVar16 = DAT_14ca84e48;
  if (uVar12 < DAT_14ca84e48) {
    uVar16 = uVar12;
  }
  local_78 = (undefined8 *)CONCAT44(uVar16 + (uVar16 == 0),uVar7 + (uVar7 == 0));
  puVar5 = (ulonglong *)(local_e8 + 0x70);
  uVar15 = *(longlong *)(local_e8 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar15 + 0x150;
  local_f0 = puVar5;
  if (*(ulonglong *)(local_e8 + 0x78) < uVar4) {
    FUN_140023dd8(puVar5,0x160);
    uVar15 = *puVar5 + 0xf & 0xfffffffffffffff0;
    uVar4 = uVar15 + 0x150;
  }
  *(ulonglong *)(lVar18 + 0x70) = uVar4;
  FUN_1456bd266(uVar15,L"GPUMessageManager.MessageBuffer",&local_78,0);
  iVar25 = *(int *)(lVar18 + 400);
  *(uint *)(lVar18 + 400) = iVar25 + 1U;
  if (*(uint *)(lVar18 + 0x194) < iVar25 + 1U) {
    FUN_144737178(lVar18 + 0x188,iVar25);
  }
  *(ulonglong *)(*(longlong *)(lVar18 + 0x188) + (longlong)iVar25 * 8) = uVar15;
  *(int *)(uVar15 + 0x7c) = *(int *)(lVar18 + 400) + -1;
  *(ulonglong *)(param_1 + 0x128) = uVar15;
  if (DAT_14c760dd0 == -1) {
    FUN_145fdab76(&local_78,L"GPUMessage::FParameters",
                  L".\\Runtime/RenderCore/Private/GPUMessaging.cpp",0xb);
    DAT_14c760dd0 = FUN_145d12cf0(&local_78);
    lVar18 = local_e8;
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
      lVar18 = local_e8;
    }
  }
  iVar25 = DAT_14c760dd0;
  if (*(int *)(lVar18 + 0x130) <= DAT_14c760dd0) {
    FUN_140051998(lVar18 + 0x128,DAT_14c760dd0 + 1,1);
  }
  puVar5 = *(ulonglong **)(lVar18 + 0x120);
  lVar18 = *(longlong *)(lVar18 + 0x128);
  puVar27 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
  puVar6 = puVar27 + 6;
  if ((undefined8 *)puVar5[1] < puVar6) {
    FUN_140023dd8(puVar5,0x40);
    puVar27 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar27 + 6;
  }
  *puVar5 = (ulonglong)puVar6;
  *puVar27 = &PTR_FUN_14a386d38;
  puVar27[2] = &PTR_FUN_14a386d40;
  puVar27[4] = 0;
  iVar10 = (int)puVar5[6];
  *(uint *)(puVar5 + 6) = iVar10 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x34) < iVar10 + 1U) {
    FUN_1448cfae8(puVar5 + 5,iVar10);
  }
  lVar17 = local_e8;
  puVar2 = local_f0;
  *(undefined8 **)(puVar5[5] + (longlong)iVar10 * 8) = puVar27;
  *(undefined8 **)(lVar18 + (longlong)iVar25 * 8) = puVar27 + 2;
  lVar23 = *(longlong *)(local_b8 + 0x128);
  uVar4 = CONCAT71((int7)((ulonglong)lVar18 >> 8),*(char *)(lVar23 + 0x68) >> 7) &
          0xffffffffffffff1c;
  puVar19 = (undefined8 *)(*(longlong *)(local_e8 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar19 + 8;
  if (*(undefined8 **)(local_e8 + 0x78) < puVar6) {
    FUN_140023dd8(local_f0,0x48);
    puVar19 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar19 + 8;
  }
  *(undefined8 **)(lVar17 + 0x70) = puVar6;
  puVar19[1] = *(undefined8 *)(lVar23 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 2;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar19 + 5) = 0;
  *puVar19 = &PTR_FUN_14a1fb3e8;
  *(char *)(puVar19 + 6) = (char)uVar4;
  *(undefined2 *)((longlong)puVar19 + 0x31) = 0;
  puVar19[7] = lVar23;
  iVar25 = *(int *)(lVar17 + 0x1a0);
  *(uint *)(lVar17 + 0x1a0) = iVar25 + 1U;
  if (*(uint *)(lVar17 + 0x1a4) < iVar25 + 1U) {
    FUN_1447568fc(lVar17 + 0x198,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar17 + 0x198) + (longlong)iVar25 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(lVar17 + 0x1a0) + -1;
  puVar27[4] = puVar19;
  *(uint *)(puVar27 + 5) = uVar12;
  plVar1 = *(longlong **)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_1415a8c16();
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar9 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar1[8];
    }
    iVar25 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)plVar1[9] - 1U &
                     (int)DAT_14ca8caa0 + (int)((ulonglong)DAT_14ca8caa0 >> 0x20) * 0x17) * 4);
    if (iVar25 != -1) {
      do {
        plVar9 = (longlong *)(*plVar1 + (longlong)iVar25 * 0x18);
        if (*plVar9 == DAT_14ca8caa0) {
          lVar18 = 0;
          if (plVar9 != (longlong *)0x0) {
            uVar15 = 0;
            if (plVar9 + 1 == (longlong *)0x0) goto LAB_14071d073;
            lVar18 = plVar9[1];
            puVar5 = *(ulonglong **)(lVar18 + 0x28);
            lVar23 = ((ulonglong)(DAT_14ca8ca98 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14ca8ca98 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar15 = puVar5[3];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar5 + ((longlong)uVar15 >> 0x18) + 0x18;
            }
            uVar21 = puVar5[5];
            if ((uVar21 & 1) != 0) {
              uVar21 = (longlong)puVar5 + ((longlong)uVar21 >> 0x18) + 0x28;
            }
            uVar24 = puVar5[1];
            if ((uVar24 & 1) != 0) {
              uVar24 = (longlong)puVar5 + ((longlong)uVar24 >> 0x18) + 8;
            }
            uVar26 = *puVar5;
            if ((uVar26 & 1) != 0) {
              uVar26 = ((longlong)uVar26 >> 0x18) + (longlong)puVar5;
            }
            uVar7 = *(uint *)(uVar26 + (ulonglong)
                                       ((uint)puVar5[2] &
                                        ((uint)((ulonglong)lVar23 >> 0x2f) ^ (uint)lVar23) * 0x2d69
                                       & 0xffff) * 4);
            if (uVar7 != 0xffffffff) {
              goto LAB_14071d022;
            }
          }
          break;
        }
        iVar25 = (int)plVar9[2];
      } while (iVar25 != -1);
    }
  }
  goto LAB_14071d03f;
  while (uVar7 = *(uint *)(uVar24 + uVar26 * 4), uVar7 != 0xffffffff) {
LAB_14071d022:
    uVar26 = (ulonglong)uVar7;
    if ((*(longlong *)(uVar15 + uVar26 * 8) == DAT_14ca8ca98) &&
       (*(int *)(uVar21 + uVar26 * 4) == 0)) {
      uVar21 = puVar5[7];
      if ((uVar21 & 1) != 0) {
        uVar21 = (longlong)(puVar5 + 7) + ((longlong)uVar21 >> 0x18);
      }
      uVar15 = *(ulonglong *)(uVar21 + (longlong)(int)uVar7 * 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = ((longlong)uVar15 >> 0x18) + uVar21 + (longlong)(int)uVar7 * 8;
      }
      if (uVar15 != 0) goto LAB_14071d073;
      break;
    }
  }
LAB_14071d03f:
  lVar18 = 0;
  uVar15 = 0;
LAB_14071d073:
  FUN_1415a8c16();
  puVar5 = local_f0;
  puVar19 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar19 + 4;
  if (*(undefined8 **)(lVar17 + 0x78) < puVar6) {
    FUN_140023dd8(local_f0,0x30);
    puVar19 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar19 + 4;
  }
  lVar23 = local_e8;
  *(undefined8 **)(local_e8 + 0x70) = puVar6;
  *puVar19 = &PTR_FUN_14a386d48;
  puVar6 = puVar19 + 2;
  puVar19[2] = 0;
  iVar25 = *(int *)(local_e8 + 0xa0);
  *(uint *)(local_e8 + 0xa0) = iVar25 + 1U;
  if (*(uint *)(local_e8 + 0xa4) < iVar25 + 1U) {
    FUN_1448cfae8(local_e8 + 0x98,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar25 * 8) = puVar19;
  puVar19[2] = puVar27[4];
  FUN_1415a8d38();
  local_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  FUN_1448f70da(uVar15,&DAT_14ca91910,puVar6);
  FUN_140069376(lVar23);
  puVar5 = local_f0;
  uVar14 = (undefined6)(uVar4 >> 0x10);
  uVar13 = (undefined4)CONCAT62(uVar14,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar13 = (undefined4)CONCAT62(uVar14,4);
  }
  puVar19 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar27 = puVar19 + 0x3d;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar27) {
    FUN_140023dd8(local_f0,0x1f0);
    puVar19 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
    puVar27 = puVar19 + 0x3d;
  }
  *local_f0 = (ulonglong)puVar27;
  lStack_70 = DAT_14ca91958;
  if (DAT_14ca91958 != 0) {
    LOCK();
    *(int *)(DAT_14ca91958 + 8) = *(int *)(DAT_14ca91958 + 8) + 1;
    UNLOCK();
  }
  local_68 = &DAT_14ca91910;
  local_108 = CONCAT31(local_108._1_3_,2);
  local_78 = puVar6;
  FUN_140068f1a(puVar19,local_88,&local_78,uVar13);
  lVar23 = local_e8;
  *puVar19 = &PTR_FUN_14a386d50;
  puVar19[0x37] = &DAT_14ca91910;
  puVar19[0x38] = puVar6;
  puVar19[0x39] = uVar15;
  puVar19[0x3a] = lVar18;
  puVar19[0x3b] = &DAT_100000001;
  *(undefined4 *)(puVar19 + 0x3c) = 1;
  iVar25 = *(int *)(local_e8 + 0x170);
  *(uint *)(local_e8 + 0x170) = iVar25 + 1U;
  if (*(uint *)(local_e8 + 0x174) < iVar25 + 1U) {
    FUN_14470e57a(local_e8 + 0x168,iVar25);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar25 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar19);
LAB_14071d25a:
  LeaveCriticalSection(local_b0);
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071d3e0 FUN_14071d3e0 body=175 status=ok
// SIG undefined FUN_14071d3e0(void)

undefined8 FUN_14071d3e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_14071d442;
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1488346c8(param_1,param_2,uVar3);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
    puVar4 = &DAT_14c9a12e0;
    if (*plVar2 != 0) {
      puVar4 = (undefined4 *)FUN_140625092(*plVar2,&DAT_14c9a12e0);
    }
    FUN_1447a97f4(local_40,puVar4);
    FUN_14071d490(local_40,param_1);
  }
  uVar3 = 1;
LAB_14071d442:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071d490 FUN_14071d490 body=2625 status=ok
// SIG undefined FUN_14071d490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14071d490(int *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  int *piVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  int *piVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  uint local_194;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 local_170;
  int local_168;
  undefined8 local_160;
  int local_158;
  undefined8 local_150;
  int local_148;
  undefined8 local_140;
  int local_138;
  undefined8 local_130;
  int local_128;
  undefined8 local_120;
  int local_118;
  undefined8 local_110;
  int local_108;
  undefined8 local_100;
  int local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  int local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x34) != 0) {
    FUN_1446dda88(param_2 + 0x28,0);
  }
  param_2[1] = 0;
  if (*param_1 == 0) goto LAB_14071db6e;
  uVar2 = param_1[1];
  uVar23 = (ulonglong)uVar2;
  if ((uVar23 == 0) || (*param_1 == DAT_14c948000)) goto LAB_14071db6e;
  if (param_1[9] < 1 && (int)uVar2 < 2) {
    piVar16 = param_1 + 2;
  }
  else {
    piVar16 = *(int **)(param_1 + 6);
  }
  iVar9 = *piVar16;
  if (iVar9 == 0) goto LAB_14071db6e;
  puVar1 = (undefined8 *)(param_2 + 0x10);
  iVar8 = piVar16[1];
  iVar3 = piVar16[2];
  uVar24 = (ulonglong)DAT_14cb79358;
  if (DAT_14cb79358 != 0) {
    puVar11 = DAT_14cb79350;
    if (DAT_14cb79350 == (uint *)0x0) {
      puVar11 = &DAT_14cb79340;
    }
    uVar17 = *puVar11;
    local_188 = uVar24;
    if (uVar17 == 0) {
      iVar12 = DAT_14cb79358 + 0x1e;
      if (-1 < (int)(DAT_14cb79358 - 1)) {
        iVar12 = DAT_14cb79358 - 1;
      }
      local_1a8 = 0;
      uVar15 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar15 = 0;
      }
      local_1a0 = (int *)((ulonglong)local_1a0._4_4_ << 0x20);
      do {
        if (uVar15 == local_1a8) goto LAB_14071d546;
        local_1a0 = (int *)CONCAT44(local_1a0._4_4_,(int)local_1a0 + 0x20);
        uVar17 = puVar11[local_1a8 + 1];
        local_1a8 = local_1a8 + 1;
      } while (uVar17 == 0);
    }
    else {
      local_1a8 = 0;
      local_1a0 = (int *)((ulonglong)local_1a0._4_4_ << 0x20);
    }
    local_180 = (ulonglong)(-uVar17 & uVar17);
    uVar15 = local_180 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar12 = ((int)local_1a0 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar12 < (int)DAT_14cb79358) {
      local_194 = 0xffffffff;
      local_190 = DAT_14cb79330;
      puVar11 = DAT_14cb79350;
      do {
        local_178 = (longlong)iVar12 * 3;
        pcVar4 = *(code **)(*(longlong *)(local_190 + 8 + (longlong)iVar12 * 0x18) + 0x38);
        if (pcVar4 != (code *)0x0) {
          local_80 = CONCAT44(iVar8,iVar9);
          local_78 = iVar3;
          cVar6 = (*pcVar4)(&local_80);
          if (cVar6 != '\0') {
            lVar19 = *(longlong *)(local_190 + local_178 * 8 + 8);
            if (lVar19 != 0) {
              *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar19 + 4);
              FUN_1488345d6(param_2);
              if (*(code **)(lVar19 + 0x40) == (code *)0x0) {
                iVar9 = 0;
              }
              else {
                iVar9 = (**(code **)(lVar19 + 0x40))();
                iVar9 = iVar9 + 1;
              }
              if (iVar9 < (int)uVar2) {
                *param_2 = 0;
                *(undefined8 *)(param_2 + 4) = 0;
                *(undefined4 *)(param_2 + 0x30) = 0;
                *(undefined4 *)(param_2 + 0x20) = 0;
                *puVar1 = 0;
                *(undefined8 *)(param_2 + 0x18) = 0;
                if (*(int *)(param_2 + 0x34) != 0) {
                  FUN_1446dda88(param_2 + 0x28,0);
                }
                param_2[1] = 0;
              }
              else if (1 < (int)uVar2) {
                uVar24 = 1;
                do {
                  piVar22 = piVar16 + 3;
                  if (*piVar22 != 0) {
                    local_78 = piVar16[5];
                    local_80 = *(undefined8 *)piVar22;
                    FUN_144928d62(puVar1,uVar24 & 0xffffffff,&local_80);
                  }
                  uVar24 = uVar24 + 1;
                  piVar16 = piVar22;
                } while (uVar23 != uVar24);
              }
              goto switchD_14071d64c_default;
            }
            break;
          }
          local_190 = DAT_14cb79330;
          uVar24 = (ulonglong)DAT_14cb79358;
          puVar11 = DAT_14cb79350;
        }
        local_194 = local_194 & ~(uint)local_180;
        puVar21 = puVar11;
        if (puVar11 == (uint *)0x0) {
          puVar21 = &DAT_14cb79340;
        }
        lVar19 = (longlong)(int)local_1a8;
        uVar17 = puVar21[lVar19] & local_194;
        iVar10 = (int)uVar24;
        if (uVar17 == 0) {
          iVar12 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar12 = iVar10 + -1;
          }
          iVar12 = iVar12 >> 5;
          local_1a0 = (int *)CONCAT44(local_1a0._4_4_,(int)local_1a0 + 0x20);
          iVar13 = iVar12;
          if (iVar12 < (int)local_1a8) {
            iVar13 = (int)local_1a8;
          }
          if ((int)local_1a8 < iVar12) {
            lVar20 = 0;
            do {
              uVar17 = puVar21[lVar19 + lVar20 + 1];
              if (uVar17 != 0) {
                local_1a8 = (ulonglong)((int)local_1a8 + (int)lVar20 + 1);
                local_194 = 0xffffffff;
                goto LAB_14071dd9d;
              }
              local_1a0 = (int *)CONCAT44(local_1a0._4_4_,(int)local_1a0 + 0x20);
              lVar20 = lVar20 + 1;
            } while (iVar13 - lVar19 != lVar20);
            local_194 = 0xffffffff;
            lVar19 = (longlong)iVar13;
          }
          local_1a8 = lVar19 + 1;
          iVar12 = iVar10;
        }
        else {
LAB_14071dd9d:
          local_180 = (ulonglong)(-uVar17 & uVar17);
          uVar15 = local_180 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar12 = ((int)local_1a0 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar12) {
            iVar12 = iVar10;
          }
        }
      } while (iVar12 != (int)local_188);
    }
  }
LAB_14071d546:
  local_9c = iVar9;
  local_98 = iVar8;
  local_94 = iVar3;
  cVar6 = FUN_14014ed69();
  if (cVar6 == '\0') {
    local_b4 = iVar9;
    local_b0 = iVar8;
    local_ac = iVar3;
    uVar7 = FUN_143d204ee();
    *param_2 = uVar7;
    FUN_140c25b54(param_2);
  }
  else {
    *param_2 = 10;
    FUN_140c25b54(param_2);
    local_a8 = iVar9;
    local_a4 = iVar8;
    local_a0 = iVar3;
    FUN_144928d62(puVar1,1);
  }
  iVar8 = 1;
  switch(*param_2) {
  case 1:
    FUN_1447a97f4(local_70,param_1);
    if ((int)uVar2 < 7) {
      if (0 < (int)uVar2) {
        uVar24 = 0;
        do {
          local_78 = piVar16[2];
          local_80 = *(undefined8 *)piVar16;
          FUN_144928d62(puVar1,uVar24 & 0xffffffff,&local_80);
          uVar24 = uVar24 + 1;
          piVar16 = piVar16 + 3;
        } while (uVar23 != uVar24);
        if (uVar2 == 6) goto LAB_14071daaa;
      }
      local_88 = DAT_14cb7bf18;
      local_90 = _DAT_14cb7bf10;
      FUN_144928d62(puVar1,5);
    }
    else {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      if (*(int *)(param_2 + 0x34) != 0) {
        FUN_1446dda88(param_2 + 0x28,0);
      }
      param_2[1] = 0;
    }
LAB_14071daaa:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    goto switchD_14071d64c_default;
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 0xc:
    break;
  case 6:
  case 9:
    iVar8 = 0x15;
    break;
  case 7:
    goto switchD_14071d5cf_caseD_7;
  case 10:
    goto switchD_14071d5cf_caseD_a;
  case 0xb:
    goto switchD_14071d5cf_caseD_b;
  case 0xd:
  case 0xe:
    iVar8 = 3;
    goto switchD_14071d64c_caseD_2;
  default:
    iVar8 = -1;
  }
  switch(*param_2) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
switchD_14071d64c_caseD_2:
    if (iVar8 + 1 < (int)uVar2) {
LAB_14071d655:
      *param_2 = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      if (*(int *)(param_2 + 0x34) != 0) {
        FUN_1446dda88(param_2 + 0x28,0);
      }
      param_2[1] = 0;
      goto LAB_14071db6e;
    }
    if ((int)uVar2 < 2) {
      FUN_1447a993c(puVar1,1);
    }
    else {
      iVar9 = 1;
      lVar19 = 0xc;
      do {
        iVar9 = (iVar9 + 1) - (uint)(*(int *)((longlong)piVar16 + lVar19) == 0);
        lVar19 = lVar19 + 0xc;
      } while (uVar23 * 0xc != lVar19);
      FUN_1447a993c(puVar1,iVar9);
      uVar24 = 1;
      do {
        piVar22 = piVar16 + 3;
        if (*piVar22 != 0) {
          local_c8 = piVar16[5];
          local_d0 = *(undefined8 *)piVar22;
          FUN_144928d62(puVar1,uVar24 & 0xffffffff,&local_d0);
        }
        uVar24 = uVar24 + 1;
        piVar16 = piVar22;
      } while (uVar23 != uVar24);
    }
    break;
  case 7:
switchD_14071d5cf_caseD_7:
    if (uVar2 != 3) goto LAB_14071d655;
    local_d8 = piVar16[5];
    local_e0 = *(undefined8 *)(piVar16 + 3);
    FUN_144928d62(puVar1,1);
    local_e8 = piVar16[8];
    local_f0 = *(undefined8 *)(piVar16 + 6);
    uVar14 = 2;
LAB_14071db61:
    FUN_144928d62(puVar1,uVar14);
    break;
  case 10:
switchD_14071d5cf_caseD_a:
    uVar5 = local_1a8._4_4_;
    if ((iVar9 == DAT_14cb7bbe0) && (iVar3 == DAT_14cb7bbe4._4_4_)) {
      local_1a8 = CONCAT44(local_1a8._4_4_,1);
    }
    else if ((iVar9 == DAT_14cb7bd98) && (iVar3 == DAT_14cb7bd9c._4_4_)) {
      local_1a8 = CONCAT44(local_1a8._4_4_,2);
    }
    else {
      local_1a8 = local_1a8 & 0xffffffff00000000;
      if (iVar9 == DAT_14cb7bbb0) {
        local_1a8 = CONCAT44(uVar5,(uint)(iVar3 == DAT_14cb7bbb4._4_4_) * 3);
      }
    }
    if (1 < (int)uVar2) {
      piVar22 = piVar16 + 3;
      uVar24 = 1;
      local_1a0 = piVar22;
      do {
        local_f8 = piVar22[2];
        local_100 = *(undefined8 *)piVar22;
        iVar9 = (int)local_100;
        if ((iVar9 == DAT_14cb7bbf8) && (local_f8 == DAT_14cb7bc00)) {
          uVar7 = 1;
LAB_14071db2f:
          param_2[1] = uVar7;
          uVar17 = (int)uVar24 + 1;
          if ((int)uVar17 < (int)uVar2) {
            local_108 = piVar16[(ulonglong)uVar17 * 3 + 2];
            puVar18 = &local_110;
            uVar14 = *(undefined8 *)(piVar16 + (ulonglong)uVar17 * 3);
LAB_14071db56:
            *puVar18 = uVar14;
            uVar14 = 4;
            goto LAB_14071db61;
          }
          break;
        }
        if ((iVar9 == DAT_14cb7bdb0) && (local_f8 == DAT_14cb7bdb8)) {
          uVar7 = 2;
          goto LAB_14071db2f;
        }
        if ((iVar9 == DAT_14cb7bc10) && (local_f8 == DAT_14cb7bc18)) {
          uVar7 = 3;
          goto LAB_14071db2f;
        }
        cVar6 = FUN_143df68b8(&local_100);
        if (cVar6 != '\0') {
          param_2[1] = 0;
          local_118 = piVar22[2];
          puVar18 = &local_120;
          uVar14 = *(undefined8 *)piVar22;
          goto LAB_14071db56;
        }
        if (uVar24 == 1) {
          local_128 = local_1a0[2];
          local_130 = *(undefined8 *)local_1a0;
          cVar6 = FUN_14014ed69(&local_130);
          if (cVar6 == '\0') goto LAB_14071d8b7;
          iVar9 = *local_1a0;
          if ((iVar9 == DAT_14cb7bbe0) && (piVar16[5] == DAT_14cb7bbe4._4_4_)) {
LAB_14071d880:
            local_1a8 = local_1a8 & 0xffffffff00000000;
          }
          else if (iVar9 == DAT_14cb7bd98) {
            local_1a8 = CONCAT44(local_1a8._4_4_,1);
            if (piVar16[5] != DAT_14cb7bd9c._4_4_) goto LAB_14071d874;
          }
          else {
LAB_14071d874:
            if (iVar9 != DAT_14cb7bbb0) goto LAB_14071d880;
            local_1a8 = CONCAT44(local_1a8._4_4_,(uint)(piVar16[5] == DAT_14cb7bbb4._4_4_) * 2);
          }
          local_138 = local_1a0[2];
          local_140 = *(undefined8 *)local_1a0;
          uVar14 = 1;
          puVar18 = &local_140;
LAB_14071d988:
          FUN_144928d62(puVar1,uVar14,puVar18);
        }
        else {
LAB_14071d8b7:
          iVar9 = (int)uVar24 + (int)local_1a8;
          if (iVar9 == 3) {
            local_168 = piVar22[2];
            local_170 = *(undefined8 *)piVar22;
            uVar14 = 3;
            puVar18 = &local_170;
            goto LAB_14071d988;
          }
          if (iVar9 == 2) {
            local_158 = piVar22[2];
            local_160 = *(undefined8 *)piVar22;
            uVar14 = 2;
            puVar18 = &local_160;
            goto LAB_14071d988;
          }
          if (iVar9 == 1) {
            local_148 = piVar22[2];
            local_150 = *(undefined8 *)piVar22;
            uVar14 = 1;
            puVar18 = &local_150;
            goto LAB_14071d988;
          }
        }
        uVar24 = uVar24 + 1;
        piVar22 = piVar22 + 3;
      } while (uVar23 != uVar24);
    }
    break;
  case 0xb:
switchD_14071d5cf_caseD_b:
    if (3 < (int)uVar2) goto LAB_14071d655;
    FUN_1447a993c(puVar1,uVar2);
    if (0 < (int)uVar2) {
      uVar24 = 0;
      do {
        local_b8 = piVar16[2];
        local_c0 = *(undefined8 *)piVar16;
        FUN_144928d62(puVar1,uVar24 & 0xffffffff,&local_c0);
        uVar24 = uVar24 + 1;
        piVar16 = piVar16 + 3;
      } while (uVar23 != uVar24);
    }
  }
switchD_14071d64c_default:
  FUN_140114204(param_2);
LAB_14071db6e:
  if (*(longlong *)(param_1 + 6) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071ded2 FUN_14071ded2 body=44 status=ok
// SIG undefined FUN_14071ded2(void)

longlong * FUN_14071ded2(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x630))(param_1,param_4,param_3,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14071defe FUN_14071defe body=3070 status=ok
// SIG undefined FUN_14071defe(void)

longlong ****
FUN_14071defe(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong ****pppplVar7;
  longlong ****pppplVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong ****pppplVar15;
  longlong ***ppplVar16;
  longlong ****pppplVar17;
  longlong ****pppplVar18;
  undefined8 uVar19;
  undefined1 auStack_218 [32];
  longlong ***local_1f8;
  longlong ***ppplStack_1f0;
  int *local_1e8;
  longlong ***ppplStack_1e0;
  int *local_1d8;
  ulonglong local_1d0;
  longlong ***local_1c8;
  undefined4 local_1b4;
  int *local_1b0;
  longlong local_1a8;
  uint local_1a0;
  uint local_19c;
  undefined8 local_198;
  longlong *local_190;
  ulonglong local_188;
  ulonglong local_180;
  longlong ***local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  longlong ***local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  int local_d4;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong ***local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8f;
  char local_8e;
  byte local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_8e = *(char *)((longlong)param_2 + 0x32);
  local_c0 = (longlong ***)*param_2;
  local_8d = *(byte *)((longlong)param_2 + 0x33);
  local_8c = *(undefined1 *)((longlong)param_2 + 0x34);
  local_9c = *(undefined8 *)((longlong)param_2 + 0x24);
  local_94 = *(undefined2 *)((longlong)param_2 + 0x2c);
  local_92 = *(undefined2 *)((longlong)param_2 + 0x2e);
  local_90 = *(undefined1 *)(param_2 + 6);
  local_8f = *(undefined1 *)((longlong)param_2 + 0x31);
  local_b8 = param_2[1];
  uStack_b0 = param_2[2];
  local_a8 = *(undefined4 *)(param_2 + 3);
  local_a0 = *(undefined4 *)(param_2 + 4);
  local_8b = *(undefined1 *)((longlong)param_2 + 0x35);
  local_a4 = *(uint *)((longlong)param_2 + 0x1c);
  local_88 = *(uint *)(param_2 + 7);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_80 = *(undefined4 *)(param_2 + 8);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x44);
  local_78 = *(undefined4 *)(param_2 + 9);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uStack_70 = *(undefined4 *)(param_2 + 10);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x54);
  local_68 = param_2[0xb];
  local_190 = param_1;
  (**(code **)(*param_1 + 0x628))(local_88,&local_168,&local_c0);
  iVar6 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_8d * 0x30));
  if (((uint)local_c0 >> 0x19 & 1) == 0) {
    if (((ulonglong)local_c0 & 4) != 0) {
      if (iVar6 == 0x29) {
        iVar6 = 0x27;
      }
      else if (iVar6 == 0x36) {
        iVar6 = 0x35;
      }
    }
  }
  else {
    iVar6 = FUN_147365ff0(iVar6,((uint)local_c0 & 0x10) >> 4);
  }
  if (((int)local_b8 == 2 & (byte)local_138 >> 1) == 1) {
    if (iVar6 < 0x2c) {
      if (iVar6 == 0x13) {
        iVar6 = 0x14;
      }
      else if (iVar6 == 0x27) {
        iVar6 = 0x28;
      }
    }
    else if (iVar6 == 0x2c) {
      iVar6 = 0x2d;
    }
    else if (iVar6 == 0x35) {
      iVar6 = 0x37;
    }
    local_1b0 = &local_d4;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_d0 = local_b8._4_4_;
    uStack_cc = (uint)(byte)uStack_b0;
    local_d4 = iVar6;
  }
  else if (((int)local_b8 == 1 & (byte)local_138) == 1) {
    local_d4 = iVar6;
    if (((ulonglong)local_c0 & 0x10) == 0) {
      if (iVar6 < 0x49) {
        if (iVar6 < 0x2c) {
          if (iVar6 == 0x1b) {
            local_d4 = 0x1c;
          }
          else if (iVar6 == 0x13) {
LAB_14071ea51:
            local_d4 = 0x15;
          }
          else if (iVar6 == 0x27) goto LAB_14071eade;
        }
        else if (iVar6 == 0x46) {
          local_d4 = 0x47;
        }
        else if (iVar6 == 0x35) {
LAB_14071ea73:
          local_d4 = 0x38;
        }
        else if (iVar6 == 0x2c) {
LAB_14071e14a:
          local_d4 = 0x2e;
        }
      }
      else if (iVar6 < 0x61) {
        if (iVar6 == 0x5a) {
          local_d4 = 0x57;
        }
        else if (iVar6 == 0x4c) {
          local_d4 = 0x4d;
        }
        else if (iVar6 == 0x49) {
          local_d4 = 0x4a;
        }
      }
      else if (iVar6 == 0x61) {
        local_d4 = 0x62;
      }
    }
    else if (iVar6 < 0x5a) {
      if (iVar6 < 0x46) {
        if (iVar6 < 0x27) {
          if (iVar6 == 0x13) goto LAB_14071ea51;
          if (iVar6 == 0x1b) {
            local_d4 = 0x1d;
          }
        }
        else if (iVar6 == 0x27) {
LAB_14071eade:
          local_d4 = 0x29;
        }
        else {
          if (iVar6 == 0x2c) goto LAB_14071e14a;
          if (iVar6 == 0x35) goto LAB_14071ea73;
        }
      }
      else if (iVar6 == 0x46) {
        local_d4 = 0x48;
      }
      else if (iVar6 == 0x4c) {
        local_d4 = 0x4e;
      }
      else if (iVar6 == 0x49) {
        local_d4 = 0x4b;
      }
    }
    else {
      local_d4 = 0x5b;
      if ((iVar6 != 0x5a) && (local_d4 = iVar6, iVar6 == 0x61)) {
        local_d4 = 99;
      }
    }
    local_1b0 = &local_d4;
    local_d0 = local_b8._4_4_;
    uStack_cc = (uint)uStack_b0;
    uStack_c8 = uStack_b0._4_4_;
    uStack_c4 = local_a8;
  }
  else {
    local_1b0 = (int *)0x0;
  }
  uVar11 = local_138 * 2 & 8;
  iVar6 = 0x10;
  if ((local_138 & 3) == 0) {
    iVar6 = uVar11 * 2;
  }
  bVar4 = (local_138 & 8) == 0;
  if ((local_88 & 0xfffbffff) == 0 || bVar4 && iVar6 == 0) {
    if (bVar4 && iVar6 == 0) {
      uVar12 = 0xc0;
      goto LAB_14071e322;
    }
    if (((uint)((int)local_168 == 1) << 6 | uVar11) == 0x40) {
LAB_14071eabd:
      uVar12 = 0xac3;
      goto LAB_14071e322;
    }
    if (iVar6 != 0) {
      if ((local_138 & 2) != 0) {
LAB_14071e2a7:
        uVar12 = 0x10;
        goto LAB_14071e322;
      }
      if (uVar11 != 0 || ((local_138 & 2) != 0 || (local_138 & 1) != 0)) {
        uVar12 = (ulonglong)((uint)((local_138 & 3) == 0) * 4 + 4);
        goto LAB_14071e322;
      }
    }
LAB_14071e253:
    uVar12 = 0;
  }
  else {
    if ((int)local_88 < 0xc00) {
      if ((local_88 == 0x400) || (local_88 == 0x800)) {
LAB_14071e1ce:
        uVar12 = 8;
        goto LAB_14071e322;
      }
      if (local_88 == 2) goto LAB_14071e253;
    }
    else if ((int)local_88 < 0x1000) {
      if (local_88 == 0xc00) goto LAB_14071e1ce;
    }
    else if ((int)local_88 < 0x8000) {
      if (local_88 == 0x1000) {
        uVar12 = 4;
        goto LAB_14071e322;
      }
      if (local_88 == 0x2000) {
        uVar12 = 0x400;
        goto LAB_14071e322;
      }
      if (local_88 == 0x4000) {
        uVar12 = 0x1000;
        goto LAB_14071e322;
      }
    }
    else if ((int)local_88 < 0x901ff) {
      if ((local_88 == 0x8000) || (local_88 == 0x8200)) goto LAB_14071e2a7;
    }
    else if ((local_88 == 0x901ff) || (local_88 == 0x903ff)) goto LAB_14071eabd;
    uVar11 = 0xc0;
    if ((local_88 & 0x60) == 0) {
      uVar11 = 0;
    }
    uVar11 = local_88 * 4 & 0x40 | uVar11;
    uVar13 = uVar11 + 3;
    if ((local_88 & 8) == 0) {
      uVar13 = uVar11;
    }
    uVar13 = local_88 >> 4 & 0x20 |
             (local_88 & 0x100) << 5 | (local_88 & 4) << 7 | (local_88 & 0x80) << 4 | uVar13;
    uVar12 = (ulonglong)uVar13;
    if ((local_88 >> 0x13 & 1) != 0) {
      uVar11 = uVar13 + 0x1000000;
      if (DAT_14ca84f34 == '\0') {
        uVar11 = uVar13;
      }
      uVar12 = (ulonglong)uVar11;
    }
  }
LAB_14071e322:
  local_1b4 = 0x400;
  if (CONCAT44(uStack_74,local_78) == 0) {
    local_1b4 = (undefined4)uVar12;
  }
  if (local_a4 == 0) {
    uVar11 = 0x20;
  }
  else {
    uVar11 = 0;
    if (local_a4 != 0) {
      for (; (local_a4 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
  }
  if (local_a4 == 0) {
    pppplVar17 = (longlong ****)0x0;
    uVar19 = param_3;
  }
  else {
    local_1a8 = *(longlong *)local_190[0x36];
    pppplVar17 = (longlong ****)0x0;
    uVar9 = (ulonglong)uVar11;
    local_19c = local_a4;
    uVar13 = local_a4;
    local_1a0 = uVar11;
    local_198 = param_3;
    local_188 = uVar12;
    do {
      puVar2 = *(undefined4 **)(local_1a8 + 2000 + uVar9 * 8);
      local_170 = uVar9;
      pppplVar7 = (longlong ****)(**(code **)(*local_190 + 0x638))(local_190,&local_c0,puVar2);
      pppplVar15 = pppplVar7 + 0xc;
      pppplVar8 = pppplVar7 + 0x15;
      uVar11 = (uint)local_c0;
      if (param_4 == (undefined8 *)0x0) {
        pppplVar18 = pppplVar17;
        if ((uVar11 >> 0x13 & 1) == 0) {
          if (local_8e == '\x02') {
            if ((uStack_130 & 0x20000) == 0) {
              local_1e8 = (int *)CONCAT44(uStack_7c,uStack_80);
              local_118 = CONCAT44(local_168._4_4_,(int)local_168);
              uStack_110 = CONCAT44(uStack_15c,uStack_160);
              local_108 = local_158;
              uStack_104 = uStack_154;
              uStack_100 = uStack_150;
              uStack_fc = uStack_14c;
              local_f8 = local_148;
              uStack_f4 = uStack_144;
              uStack_f0 = uStack_140;
              uStack_ec = uStack_13c;
              local_e8 = local_138;
              uStack_e4 = uStack_134;
              uStack_e0 = uStack_130;
              uStack_dc = uStack_12c;
              ppplStack_1f0 = (longlong ***)CONCAT44(ppplStack_1f0._4_4_,local_1b4);
              local_1f8 = (longlong ***)pppplVar8;
              iVar6 = FUN_1403874f6(puVar2 + 0x52c,&local_118,local_1b0,local_8d);
              if (iVar6 < 0) {
                ppplStack_1f0 = *(longlong ****)(*(longlong *)(puVar2 + 4) + 8);
                local_1f8 = (longlong ***)&local_168;
                FUN_14738591d(iVar6,
                              "Device->GetTextureAllocator().AllocateTexture( ResourceDesc, ClearValuePtr, CreateDesc.Format, Location, CreateState, CreateDesc.DebugName)"
                              ,".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x2ad);
              }
            }
            else {
              local_128 = (longlong ***)0x0;
              ppplStack_1e0 = (longlong ***)&local_128;
              local_1e8 = local_1b0;
              ppplStack_1f0 = (longlong ***)CONCAT44(ppplStack_1f0._4_4_,local_1b4);
              local_1d0 = local_1d0 & 0xffffffffffffff00;
              local_1f8 = (longlong ***)CONCAT44(local_1f8._4_4_,2);
              iVar6 = FUN_140387a5c(local_1a8,&local_168,*puVar2);
              if (iVar6 < 0) {
                ppplStack_1f0 = *(longlong ****)(*(longlong *)(puVar2 + 4) + 8);
                local_1f8 = (longlong ***)&local_168;
                FUN_14738591d(iVar6,
                              "Adapter->CreateReservedResource(ResourceDesc, Device->GetGPUMask(), CreateState, ED3D12ResourceStateMode::MultiState, CreateState, ClearValuePtr, &Resource, CreateDesc.DebugName, false)"
                              ,".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x29f);
              }
              FUN_144965670(puVar2,&local_118,&local_168);
              local_1f8 = (longlong ***)0x0;
              FUN_1400daf10(pppplVar8,local_128,local_118,0);
              if (((ulonglong)local_c0 & 0x4000000000) != 0) {
                puVar14 = puVar2 + 0x2c0;
                if (*(undefined4 **)(puVar2 + 0x4a0) != (undefined4 *)0x0) {
                  puVar14 = *(undefined4 **)(puVar2 + 0x4a0);
                }
                FUN_140095bc4(local_128,*(undefined8 *)(puVar14 + 4),0xffffffffffffffff);
              }
            }
            goto LAB_14071e504;
          }
          local_1d0 = CONCAT44(uStack_7c,uStack_80);
          ppplStack_1f0 = (longlong ***)pppplVar7;
          if (pppplVar7 != (longlong ****)0x0) {
            ppplStack_1f0 = (longlong ***)pppplVar15;
          }
          local_1d8 = (int *)CONCAT44(local_1d8._4_4_,local_1b4);
          ppplStack_1e0 = local_c0;
          local_1e8 = (int *)CONCAT71(local_1e8._1_7_,local_8d);
          local_1f8 = (longlong ***)pppplVar8;
          FUN_14038721c(puVar2,local_1a8,&local_168,local_1b0);
        }
        else {
          local_118 = 0;
          uVar11 = (uint)uStack_14c._2_2_;
          if ((local_8e == '\x04') || (local_8e == '\x01')) {
            uVar11 = (uint)uStack_14c._2_2_ * (uStack_14c & 0xffff);
          }
          local_1d8 = (int *)&local_118;
          local_1e8 = (int *)0x0;
          ppplStack_1e0 = (longlong ***)0x0;
          local_1f8 = (longlong ***)0x0;
          ppplStack_1f0 = (longlong ***)0x0;
          (**(code **)(**(longlong **)(*(longlong *)(puVar2 + 4) + 8) + 0x130))
                    (*(longlong **)(*(longlong *)(puVar2 + 4) + 8),&local_168,0,uVar11);
          local_128 = (longlong ***)0x0;
          local_1e8 = (int *)CONCAT44(uStack_7c,uStack_80);
          ppplStack_1f0 = (longlong ***)&local_128;
          local_1f8 = (longlong ***)local_118;
          ppplStack_1e0 = (longlong ***)((ulonglong)ppplStack_1e0 & 0xffffffff00000000);
          iVar6 = FUN_14631a284(local_1a8,3,*puVar2,puVar2[1]);
          if (iVar6 < 0) {
            ppplStack_1f0 = *(longlong ****)(*(longlong *)(puVar2 + 4) + 8);
            local_1f8 = (longlong ***)&local_168;
            FUN_14738591d(iVar6,
                          "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Device->GetGPUMask(), Device->GetVisibilityMask(), Size, &Resource, CreateDesc.DebugName)"
                          ,".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x294);
          }
          local_1f8 = (longlong ***)0x0;
          FUN_1400daf10(pppplVar8,local_128,0,0);
        }
      }
      else {
        local_180 = CONCAT44(uStack_7c,uStack_80);
        uVar1 = puVar2[2];
        local_e8 = local_138;
        uStack_e4 = uStack_134;
        uStack_e0 = uStack_130;
        uStack_dc = uStack_12c;
        local_f8 = local_148;
        uStack_f4 = uStack_144;
        uStack_f0 = uStack_140;
        uStack_ec = uStack_13c;
        local_108 = local_158;
        uStack_104 = uStack_154;
        uStack_100 = uStack_150;
        uStack_fc = uStack_14c;
        local_118 = CONCAT44(local_168._4_4_,(int)local_168);
        local_178 = (longlong ***)pppplVar17;
        cVar5 = FUN_1403877fe(&local_118,local_8d);
        uStack_110 = 0x10000;
        if (cVar5 != '\0') {
          uStack_110 = 0x1000;
        }
        FUN_144965670(*(undefined8 *)
                       (**(longlong **)(DAT_14ca77418 + 0x1b0) + 2000 + (ulonglong)uVar1 * 8),
                      &local_128,&local_118);
        pppplVar17 = (longlong ****)local_178;
        local_1d0 = local_180;
        local_1d8 = local_1b0;
        ppplStack_1e0 = (longlong ***)CONCAT44(ppplStack_1e0._4_4_,local_1b4);
        ppplStack_1f0 = (longlong ***)CONCAT44(ppplStack_1f0._4_4_,local_120);
        local_1f8 = local_128;
        local_1e8 = (int *)((ulonglong)local_1e8 & 0xffffffff00000000);
        local_1c8 = (longlong ***)pppplVar8;
        (**(code **)*param_4)(param_4,(ulonglong)uVar1,(uVar11 >> 0x12 & 2) + 1,&local_118);
LAB_14071e504:
        pppplVar8 = pppplVar7;
        if (pppplVar7 != (longlong ****)0x0) {
          pppplVar8 = pppplVar15;
        }
        pppplVar7[0x16] = (longlong ***)pppplVar8;
        pppplVar18 = pppplVar17;
      }
      if ((CONCAT44(uStack_74,local_78) == 0) && (*(char *)((longlong)pppplVar7 + 0x119) == '\x02'))
      {
        *(byte *)((longlong)pppplVar7 + 0xd6) = *(byte *)((longlong)pppplVar7 + 0xd6) & 0xef;
      }
      FUN_143174f1c(pppplVar7,pppplVar18);
      pppplVar17 = pppplVar7;
      if (pppplVar18 != (longlong ****)0x0) {
        (*(code *)(*pppplVar15)[1])(pppplVar15);
        pppplVar17 = pppplVar18;
      }
      pppplVar17[local_170 + 0x25] = (longlong ***)pppplVar7;
      uVar13 = uVar13 & ~(1 << ((uint)local_170 & 0x1f));
      if (uVar13 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar11 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
        uVar9 = (ulonglong)uVar11;
      }
    } while (uVar13 != 0);
    uVar12 = local_188;
    uVar19 = local_198;
    if (pppplVar17 == (longlong ****)0x0) {
      pppplVar17 = (longlong ****)0x0;
    }
    else {
      *(uint *)(pppplVar17 + 0x24) = local_19c;
      bVar3 = (byte)local_1a0 & 0x1f;
      uVar11 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & local_19c;
      if (uVar11 != 0) {
        uVar13 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
        do {
          pppplVar15 = pppplVar17 + 0x24;
          ppplVar16 = pppplVar17[(ulonglong)uVar13 + 0x25] + 0x24;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *ppplVar16 = (longlong **)*pppplVar15;
            pppplVar15 = pppplVar15 + 1;
            ppplVar16 = ppplVar16 + 1;
          }
          bVar3 = (byte)uVar13 & 0x1f;
          uVar11 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar11;
          if (uVar11 == 0) {
            uVar13 = 0x20;
          }
          else {
            uVar13 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
          }
        } while (uVar11 != 0);
      }
    }
  }
  FUN_1400db0ea(pppplVar17);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_14178be06(pppplVar17,uVar19,&local_c0,uVar12 & 0xffffffff);
    (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x18))();
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pppplVar17;
}



// FUNCTION 14071eafe FUN_14071eafe body=64 status=ok
// SIG undefined FUN_14071eafe(void)

undefined8 * FUN_14071eafe(byte *param_1,uint param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  
  puVar3 = &DAT_14c9a1308;
  if (((-1 < (int)param_2) && ((*param_1 & 0x6b) == 2)) &&
     ((int)param_2 < (int)(*(longlong **)(param_1 + 8))[2])) {
    lVar1 = **(longlong **)(param_1 + 8);
    pbVar2 = *(byte **)(lVar1 + (ulonglong)param_2 * 0x10);
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x40) == 0)) {
      puVar3 = (undefined8 *)(lVar1 + (ulonglong)param_2 * 0x10);
    }
  }
  return puVar3;
}



// FUNCTION 14071eb3e FUN_14071eb3e body=28 status=ok
// SIG undefined FUN_14071eb3e(void)

void FUN_14071eb3e(undefined8 param_1)

{
  FUN_14071ec36();
  FUN_14071eb5a(param_1,1);
  return;
}



// FUNCTION 14071eb5a FUN_14071eb5a body=218 status=ok
// SIG undefined FUN_14071eb5a(void)

void FUN_14071eb5a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    iVar4 = 0;
    if (*(int *)(param_1 + 0x1e4) != 0) {
      FUN_14482f6fa(plVar1);
      iVar4 = *(int *)(param_1 + 0x1e0);
    }
    iVar2 = *(int *)(param_1 + 0x1b8);
    uVar5 = iVar2 - iVar4;
    if (uVar5 == 0 || iVar2 < iVar4) {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
      if (iVar2 < iVar4) {
        *(int *)(param_1 + 0x1e0) = iVar2;
        FUN_1401fef06(plVar1);
      }
    }
    else {
      *(int *)(param_1 + 0x1e0) = iVar2;
      if ((uint)(*(int *)(param_1 + 0x1e4) - iVar4) < uVar5) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(int)uVar5 << 2);
    }
  }
  if (0 < *(int *)(param_1 + 0x1e0)) {
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1d8) + lVar3 * 4) = 0x7f7fffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x1e0));
  }
  return;
}



// FUNCTION 14071ec36 FUN_14071ec36 body=249 status=ok
// SIG undefined FUN_14071ec36(void)

void FUN_14071ec36(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  FUN_14066e802();
  lVar2 = param_1[8];
  lVar3 = param_1[9];
  FUN_14071ed6a(param_1 + 0x26,*(undefined4 *)(lVar3 + 200));
  FUN_14071ed9a(param_1 + 0x26,*(undefined4 *)(lVar3 + 200),1);
  if (0 < *(int *)(lVar3 + 200)) {
    uVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar3 + 0xc0);
      if (*(longlong *)(lVar3 + 0xc0) == 0) {
        lVar5 = lVar3 + 0x80;
      }
      lVar5 = *(longlong *)(lVar5 + uVar7 * 8);
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x18);
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x78))) &&
           (plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar1 * 8),
           plVar4 != (longlong *)0x0)) {
          lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar6 = FUN_14071ed30();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (**(code **)(*param_1 + 0x140))(param_1,uVar7 & 0xffffffff,plVar4);
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar3 + 200));
  }
  return;
}



// FUNCTION 14071ed30 FUN_14071ed30 body=57 status=ok
// SIG undefined FUN_14071ed30(void)

void FUN_14071ed30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21b28 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21b28 = FUN_140002ddd(FUN_146435632,uVar1,L"GbxBrainTask");
  }
  return;
}



// FUNCTION 14071ed6a FUN_14071ed6a body=47 status=ok
// SIG undefined FUN_14071ed6a(void)

void FUN_14071ed6a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (param_2 <= *(int *)(param_1 + 0x8c)) {
    return;
  }
  FUN_14573ed50();
  return;
}



// FUNCTION 14071ed9a FUN_14071ed9a body=143 status=ok
// SIG undefined FUN_14071ed9a(void)

void FUN_14071ed9a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147f55710(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    FUN_14071ee2a((longlong)iVar1 * 0x10 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x88) = param_2, param_3 == '\x01')) {
      FUN_147f5578e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14071ee2a FUN_14071ee2a body=31 status=ok
// SIG undefined FUN_14071ee2a(void)

void FUN_14071ee2a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14071ee4a FUN_14071ee4a body=1839 status=ok
// SIG undefined FUN_14071ee4a(void)

void FUN_14071ee4a(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_2 < 0) goto LAB_14071f1e6;
  if (*(int *)(param_1 + 0x1b8) <= (int)param_2) {
    FUN_14071ed9a(param_1 + 0x130,param_2 + 1,1);
  }
  lVar10 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x1b0);
  }
  lVar7 = *(longlong *)(lVar10 + (ulonglong)param_2 * 0x10);
  if (lVar7 == param_3) goto LAB_14071f1e6;
  plVar11 = (longlong *)(lVar10 + (ulonglong)param_2 * 0x10);
  if (lVar7 != 0) {
    FUN_140457ffc(lVar7 + 0x50,param_1);
    FUN_140457ffc(*plVar11 + 0x68,param_1);
  }
  *plVar11 = param_3;
  if (param_3 == 0) goto LAB_14071f1e6;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar1 = local_58;
  local_50 = 3;
  FUN_14045cb56(param_1,&local_48);
  plVar4 = local_40;
  if (local_40 == (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_LAB_14ac8afe0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    plVar1[2] = lVar7;
    *plVar1 = (longlong)&PTR_FUN_14ac8af70;
    plVar1[3] = local_48;
    plVar1[4] = 0;
    plVar1[5] = (longlong)&LAB_14387d14e;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *plVar1 = (longlong)&PTR_LAB_14ac8afe0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    plVar1[2] = lVar7;
    *plVar1 = (longlong)&PTR_FUN_14ac8af70;
    plVar1[3] = local_48;
    plVar1[4] = (longlong)local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    plVar1[5] = (longlong)&LAB_14387d14e;
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
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
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 == 0) goto LAB_14071f051;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_14071f044;
    }
  }
  else {
    plVar1 = (longlong *)(param_3 + 0x50);
    if (*(int *)(param_3 + 100) < 1) {
      iVar3 = *(int *)(param_3 + 0x58);
      iVar6 = *(int *)(param_3 + 0x60) + -1;
      *(int *)(param_3 + 0x60) = iVar6;
      if (iVar6 <= iVar3) {
        iVar6 = iVar3;
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar9);
              FUN_14005b248(plVar1);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar6 = *(int *)(param_3 + 0x58);
          } while (iVar9 < iVar6);
        }
        iVar9 = 2;
        if (2 < iVar6 * 2) {
          iVar9 = iVar6 * 2;
        }
        *(int *)(param_3 + 0x60) = iVar9;
        if ((iVar9 < iVar3) && (*(int *)(param_3 + 0x5c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
    }
    iVar3 = *(int *)(param_3 + 0x58);
    *(uint *)(param_3 + 0x58) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x5c) < iVar3 + 1U) {
      FUN_1447a71f6(plVar1,iVar3);
    }
    lVar10 = *plVar1;
    lVar7 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar10 + lVar7) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar7) = 0;
    *(longlong **)(lVar10 + lVar7) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar7) = local_50;
LAB_14071f044:
    local_50 = 0;
LAB_14071f051:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar10 = *plVar11;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar11 = local_58;
  local_50 = 3;
  FUN_14045cb56(param_1,&local_48);
  plVar1 = local_40;
  if (local_40 == (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_LAB_14ac8b0f0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    plVar11[2] = lVar8;
    *plVar11 = (longlong)&PTR_FUN_14ac8b050;
    plVar11[3] = local_48;
    plVar11[4] = 0;
    plVar11[5] = (longlong)&LAB_14063cc3e;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *plVar11 = (longlong)&PTR_LAB_14ac8b0f0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    plVar11[2] = lVar8;
    *plVar11 = (longlong)&PTR_FUN_14ac8b050;
    plVar11[3] = local_48;
    plVar11[4] = (longlong)local_40;
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
    plVar11[5] = (longlong)&LAB_14063cc3e;
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    LOCK();
    plVar11 = plVar1 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_14071f1e6;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_14071f1d0;
    }
  }
  else {
    plVar11 = (longlong *)(lVar10 + 0x68);
    if (*(int *)(lVar10 + 0x7c) < 1) {
      iVar3 = *(int *)(lVar10 + 0x70);
      iVar6 = *(int *)(lVar10 + 0x78) + -1;
      *(int *)(lVar10 + 0x78) = iVar6;
      if (iVar6 <= iVar3) {
        iVar6 = iVar3;
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar1 = *(longlong **)(*plVar11 + (longlong)iVar9 * 0x10),
                plVar1 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar1 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar11,iVar9);
              FUN_14005b248(plVar11);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar6 = *(int *)(lVar10 + 0x70);
          } while (iVar9 < iVar6);
        }
        iVar9 = 2;
        if (2 < iVar6 * 2) {
          iVar9 = iVar6 * 2;
        }
        *(int *)(lVar10 + 0x78) = iVar9;
        if ((iVar9 < iVar3) && (*(int *)(lVar10 + 0x74) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
    }
    iVar3 = *(int *)(lVar10 + 0x70);
    *(uint *)(lVar10 + 0x70) = iVar3 + 1U;
    if (*(uint *)(lVar10 + 0x74) < iVar3 + 1U) {
      FUN_1447a71f6(plVar11,iVar3);
    }
    lVar10 = *plVar11;
    lVar7 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar10 + lVar7) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar7) = 0;
    *(longlong **)(lVar10 + lVar7) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar7) = local_50;
LAB_14071f1d0:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14071f1e6:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071f5ca FUN_14071f5ca body=49 status=ok
// SIG undefined FUN_14071f5ca(void)

undefined8 FUN_14071f5ca(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14071f5fc();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))(lVar1 + 8);
    uVar2 = FUN_14482d262(uVar2,3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14071f5fc FUN_14071f5fc body=240 status=ok
// SIG undefined FUN_14071f5fc(void)

undefined8 FUN_14071f5fc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  FUN_1402b6034(&local_28,lVar6);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_28 == 0) {
        uVar5 = 0;
      }
      else {
        local_38 = *(undefined4 *)(param_1 + 0x844);
        local_48 = *(undefined4 *)(param_1 + 0x834);
        uStack_44 = *(undefined4 *)(param_1 + 0x838);
        uStack_40 = *(undefined4 *)(param_1 + 0x83c);
        uStack_3c = *(undefined4 *)(param_1 + 0x840);
        uVar5 = FUN_14041cc7c();
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_14071f68f;
    }
  }
  uVar5 = 0;
LAB_14071f68f:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14071f6ee FUN_14071f6ee body=741 status=ok
// SIG undefined FUN_14071f6ee(void)

void FUN_14071f6ee(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = *(uint *)(*(longlong *)(param_3 + 8) + 0x208);
  if ((int)uVar4 < 1) goto LAB_14071f71d;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_144740518();
  }
  local_88 = 0;
  uStack_80 = 0;
  local_70 = param_1;
  if (uVar4 < 0x41) {
    uStack_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    uStack_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = *(undefined8 *)(param_3 + 8);
LAB_14071f789:
    FUN_14071f9d4(&local_70);
LAB_14071f793:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    uStack_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    uStack_58 = param_3[4];
    uStack_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    local_48 = *(undefined8 *)(param_3 + 8);
    if ((bVar2 & 1) == 0) goto LAB_14071f789;
    puVar5 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
    puVar7 = (undefined8 *)puVar5[1];
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        uVar4 = FUN_14470efbc(&DAT_14c896180);
        if (uVar4 == 0) {
          puVar5[1] = 0;
LAB_14071f9a7:
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar5[1] = puVar7;
          iVar3 = 0xff;
          puVar8 = puVar7;
          do {
            puVar6 = puVar8 + 0x20;
            *puVar8 = puVar6;
            iVar3 = iVar3 + -1;
            puVar8 = puVar6;
          } while (iVar3 != 0);
          goto LAB_14071f942;
        }
        puVar7 = *(undefined8 **)
                  (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8) + 8 +
                  (ulonglong)(uVar4 & 0x3fff) * 0x18);
        FUN_1447d080c(uVar4);
        puVar5[1] = puVar7;
        if (puVar7 == (undefined8 *)0x0) goto LAB_14071f9a7;
      }
      else {
        puVar5[1] = puVar7;
        puVar6 = puVar5;
LAB_14071f942:
        *puVar6 = 0;
      }
      *(undefined4 *)(puVar5 + 2) = 0x100;
      iVar3 = 0xff;
    }
    else {
      iVar3 = *(int *)(puVar5 + 2) + -1;
    }
    puVar5[1] = *puVar7;
    *(int *)(puVar5 + 2) = iVar3;
    FUN_144a23e74(puVar7,2,1);
    *puVar7 = &PTR_FUN_14a309f18;
    local_98 = 0;
    FUN_144a24082(puVar7,L"FRDGBuilder::AddSetupTask",1,~bVar2 & 1);
    *(undefined4 *)(puVar7 + 0x19) = uStack_50;
    *(undefined4 *)((longlong)puVar7 + 0xcc) = uStack_4c;
    *(undefined4 *)(puVar7 + 0x1a) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar7 + 0xd4) = local_48._4_4_;
    *(undefined4 *)(puVar7 + 0x17) = uStack_60;
    *(undefined4 *)((longlong)puVar7 + 0xbc) = uStack_5c;
    *(undefined4 *)(puVar7 + 0x18) = uStack_58;
    *(undefined4 *)((longlong)puVar7 + 0xc4) = uStack_54;
    *(undefined4 *)(puVar7 + 0x15) = (undefined4)local_70;
    *(undefined4 *)((longlong)puVar7 + 0xac) = local_70._4_4_;
    *(undefined4 *)(puVar7 + 0x16) = uStack_68;
    *(undefined4 *)((longlong)puVar7 + 0xb4) = uStack_64;
    *puVar7 = &PTR_FUN_14a309f08;
    FUN_144a23fbc(puVar7,&local_88,1);
    FUN_144a23f14((ulonglong)puVar7[0x10] >> 0x3b & 0xffffffffffffff07,
                  *(undefined4 *)((longlong)puVar7 + 0x1c));
    local_39 = 1;
    FUN_1447439e4(puVar7);
    if (puVar7 == (undefined8 *)0x0) goto LAB_14071f793;
    iVar3 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar3 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar3 * 8) = puVar7;
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  FUN_14473400f(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x60) = puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
LAB_14071f71d:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14071f9d4 FUN_14071f9d4 body=1164 status=ok
// SIG undefined FUN_14071f9d4(void)

void FUN_14071f9d4(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  int local_7c;
  int *local_78;
  undefined1 local_70 [8];
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_7c = *piVar1;
  if (local_7c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_7c = *piVar1;
  }
  if ((local_7c == 0x60000000) || (local_7c == 0)) {
    *piVar1 = 0x40000010;
  }
  plVar4 = (longlong *)*param_1;
  lVar7 = param_1[2];
  if ((longlong)(int)lVar7 != 0) {
    lVar18 = param_1[1];
    lVar20 = 0;
    do {
      iVar3 = *(int *)(lVar18 + lVar20);
      lVar12 = (longlong)iVar3;
      plVar13 = (longlong *)plVar4[9];
      if ((longlong *)plVar4[9] == (longlong *)0x0) {
        plVar13 = plVar4 + 7;
      }
      iVar16 = iVar3 + 0x1f;
      if (-1 < lVar12) {
        iVar16 = iVar3;
      }
      bVar6 = (byte)iVar3 & 0x1f;
      uVar21 = -2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6;
      puVar2 = (uint *)((longlong)plVar13 + (longlong)(iVar16 >> 5) * 4);
      *puVar2 = *puVar2 & uVar21;
      lVar5 = *plVar4;
      if (*(int *)((longlong)plVar4 + 0x34) != 0) {
        *(int *)(lVar5 + (longlong)(int)plVar4[6] * 8) = iVar3;
      }
      *(undefined4 *)(lVar5 + lVar12 * 8) = 0xffffffff;
      if (*(int *)((longlong)plVar4 + 0x34) < 1) {
        uVar23 = 0xffffffff;
      }
      else {
        uVar23 = (undefined4)plVar4[6];
      }
      *(undefined4 *)(lVar5 + 4 + lVar12 * 8) = uVar23;
      *(int *)(plVar4 + 6) = iVar3;
      *(int *)((longlong)plVar4 + 0x34) = *(int *)((longlong)plVar4 + 0x34) + 1;
      plVar13 = (longlong *)plVar4[4];
      if ((longlong *)plVar4[4] == (longlong *)0x0) {
        plVar13 = plVar4 + 2;
      }
      puVar2 = (uint *)((longlong)plVar13 + (longlong)(iVar16 >> 5) * 4);
      *puVar2 = *puVar2 & uVar21;
      lVar20 = lVar20 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar20);
  }
  iVar3 = (int)plVar4[1];
  iVar16 = (iVar3 - *(int *)((longlong)plVar4 + 0x34)) + (int)param_1[4];
  plVar13 = plVar4 + 7;
  if (iVar16 <= iVar3) {
    iVar16 = iVar3;
  }
  local_78 = piVar1;
  FUN_14476b79c(plVar13,iVar16);
  lVar7 = param_1[4];
  local_88 = param_1;
  if ((longlong)(int)lVar7 != 0) {
    lVar18 = param_1[3];
    lVar20 = 0;
    do {
      uVar21 = *(uint *)(lVar18 + lVar20);
      lVar12 = (longlong)(int)uVar21;
      if ((lVar12 < 0) || ((int)plVar4[5] <= (int)uVar21)) {
LAB_14071fbce:
        FUN_141429008(plVar4,local_70,uVar21);
        *local_68 = 0;
      }
      else {
        plVar14 = (longlong *)plVar4[4];
        if ((longlong *)plVar4[4] == (longlong *)0x0) {
          plVar14 = plVar4 + 2;
        }
        if ((*(uint *)((longlong)plVar14 + (ulonglong)(uVar21 >> 5) * 4) >> (uVar21 & 0x1f) & 1) ==
            0) goto LAB_14071fbce;
      }
      uVar8 = 1 << ((byte)uVar21 & 0x1f);
      lVar5 = *plVar4;
      *(undefined4 *)(lVar5 + lVar12 * 8) = 0xffffffff;
      plVar14 = (longlong *)plVar4[9];
      if ((longlong *)plVar4[9] == (longlong *)0x0) {
        plVar14 = plVar13;
      }
      uVar9 = uVar21 + 0x1f;
      if (-1 < (int)uVar21) {
        uVar9 = uVar21;
      }
      lVar17 = (longlong)((int)uVar9 >> 5);
      if ((*(byte *)(*(longlong *)(plVar4[0xb] + 0x3550) + 0x38 + lVar12 * 0x40) & 0x80) == 0) {
        uVar8 = ~uVar8 & *(uint *)((longlong)plVar14 + lVar17 * 4);
        uVar23 = 0;
      }
      else {
        uVar8 = uVar8 | *(uint *)((longlong)plVar14 + lVar17 * 4);
        uVar23 = 0x3f800000;
      }
      *(uint *)((longlong)plVar14 + lVar17 * 4) = uVar8;
      *(undefined4 *)(lVar5 + 4 + lVar12 * 8) = uVar23;
      lVar20 = lVar20 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar20);
  }
  plVar14 = (longlong *)local_88[5];
  lVar7 = *plVar14;
  if (lVar7 != 0) {
    uVar21 = *(uint *)(lVar7 + 0x28);
    uVar22 = 0;
    if (0 < (int)uVar21) {
      uVar22 = (ulonglong)uVar21;
      uVar10 = 0;
      do {
        if (*(char *)(plVar14[0x40] + 0x18 +
                     (longlong)*(int *)(*(longlong *)(lVar7 + 0x20) + uVar10 * 4) * 0x50) != '\x01')
        {
          uVar22 = uVar10 & 0xffffffff;
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar22 != uVar10);
    }
    uVar8 = *(uint *)(lVar7 + 0x18);
    uVar9 = uVar21;
    if ((int)uVar21 < (int)uVar8) {
      uVar9 = uVar8;
    }
    if ((int)uVar8 < (int)uVar21) {
      lVar18 = 0;
      do {
        if (*(char *)(plVar14[0x40] + 0x18 +
                     (longlong)
                     *(int *)((longlong)(int)uVar8 * 4 + *(longlong *)(lVar7 + 0x20) + lVar18 * 4) *
                     0x50) != '\x01') {
          uVar9 = uVar8 + (int)lVar18;
          break;
        }
        lVar18 = lVar18 + 1;
      } while ((longlong)(int)uVar9 - (longlong)(int)uVar8 != lVar18);
    }
    if ((uint)uVar22 != uVar9) {
      local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar9);
      do {
        uVar10 = (ulonglong)(int)uVar22;
        uVar21 = *(uint *)(*(longlong *)
                            (plVar14[0x40] +
                            (longlong)*(int *)(*(longlong *)(lVar7 + 0x20) + uVar10 * 4) * 0x50) +
                          0x34);
        lVar18 = (longlong)(int)uVar21;
        if ((lVar18 < 0) || ((int)plVar4[5] <= (int)uVar21)) {
LAB_14071fe05:
          FUN_141429008(plVar4,local_70,uVar21);
          *local_68 = 0;
          uVar9 = (uint)local_88;
        }
        else {
          plVar15 = (longlong *)plVar4[4];
          if ((longlong *)plVar4[4] == (longlong *)0x0) {
            plVar15 = plVar4 + 2;
          }
          if ((*(uint *)((longlong)plVar15 + (ulonglong)(uVar21 >> 5) * 4) >> (uVar21 & 0x1f) & 1)
              == 0) goto LAB_14071fe05;
        }
        uVar8 = 1 << ((byte)uVar21 & 0x1f);
        lVar20 = *plVar4;
        *(undefined4 *)(lVar20 + lVar18 * 8) = 0xffffffff;
        plVar15 = (longlong *)plVar4[9];
        if ((longlong *)plVar4[9] == (longlong *)0x0) {
          plVar15 = plVar13;
        }
        uVar19 = uVar21 + 0x1f;
        if (-1 < (int)uVar21) {
          uVar19 = uVar21;
        }
        lVar12 = (longlong)((int)uVar19 >> 5);
        if ((*(byte *)(*(longlong *)(plVar4[0xb] + 0x3550) + 0x38 + lVar18 * 0x40) & 0x80) == 0) {
          uVar8 = ~uVar8 & *(uint *)((longlong)plVar15 + lVar12 * 4);
          uVar23 = 0;
        }
        else {
          uVar8 = uVar8 | *(uint *)((longlong)plVar15 + lVar12 * 4);
          uVar23 = 0x3f800000;
        }
        *(uint *)((longlong)plVar15 + lVar12 * 4) = uVar8;
        *(undefined4 *)(lVar20 + 4 + lVar18 * 8) = uVar23;
        uVar11 = (longlong)*(int *)(lVar7 + 0x28);
        if ((longlong)*(int *)(lVar7 + 0x28) < (longlong)(uVar10 + 1)) {
          uVar11 = uVar10 + 1;
        }
        do {
          uVar22 = uVar11;
          if (uVar11 - 1 == uVar10) break;
          lVar18 = uVar10 * 4;
          uVar22 = uVar10 + 1;
          uVar10 = uVar22;
        } while (*(char *)(plVar14[0x40] + 0x18 +
                          (longlong)*(int *)(*(longlong *)(lVar7 + 0x20) + 4 + lVar18) * 0x50) !=
                 '\0');
      } while (uVar9 != (uint)uVar22);
    }
  }
  if ((local_7c == 0x60000000) || (local_7c == 0)) {
    *local_78 = local_7c;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14071fe62 thunk_FUN_14071fe68 body=5 status=ok
// SIG undefined thunk_FUN_14071fe68(void)

void thunk_FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14071fe68 FUN_14071fe68 body=100 status=ok
// SIG undefined FUN_14071fe68(void)

void FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14071fecc FUN_14071fecc body=140 status=ok
// SIG undefined FUN_14071fecc(void)

longlong * FUN_14071fecc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = (int)param_1[0x158];
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      FUN_14071ff8a(param_2);
      if (0 < (int)param_1[0x158]) {
        iVar3 = 0;
        do {
          uVar2 = (**(code **)(*param_1 + 0x10))(param_1,iVar3);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14075a758(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)param_1[0x158]);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 14071ff8a FUN_14071ff8a body=315 status=ok
// SIG undefined FUN_14071ff8a(void)

void FUN_14071ff8a(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14071fff4;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14071fff4:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1407200c6 FUN_1407200c6 body=2111 status=ok
// SIG undefined FUN_1407200c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1407200c6(longlong *param_1,double *param_2,double *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_128 [32];
  double local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar13 = param_1;
  uVar8 = FUN_140720be2(param_1,&local_f8);
  auVar31 = *(undefined1 (*) [16])(param_3 + 8);
  auVar17 = *(undefined1 (*) [16])(param_3 + 10);
  auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_));
  auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_));
  iVar9 = movmskpd(uVar8,auVar20);
  auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar17._8_8_));
  auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar17._0_8_));
  uVar12 = movmskpd((int)plVar13,auVar24);
  uVar8 = (undefined4)DAT_14c8464c0;
  uVar27 = DAT_14c8464c0._4_4_;
  uVar28 = (undefined4)DAT_14c8464c8;
  uVar29 = DAT_14c8464c8._4_4_;
  uVar32 = (undefined4)DAT_14c846480;
  uVar33 = DAT_14c846480._4_4_;
  uVar36 = (undefined4)DAT_14c846488;
  uVar37 = DAT_14c846488._4_4_;
  dVar21 = DAT_14c8464d0;
  dVar22 = DAT_14c846498;
  dVar2 = DAT_14c8464a0;
  dVar3 = DAT_14c8464a8;
  dVar25 = DAT_14c846490;
  if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
    auVar24 = divpd(_DAT_149934d80,auVar31);
    auVar20 = divpd(ZEXT816(0x3ff0000000000000),auVar17);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_)) & auVar24._0_8_);
    dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_)) & auVar24._8_8_);
    dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar17._0_8_)) & auVar20._0_8_);
    dVar6 = *param_3;
    dVar16 = -dVar6;
    dVar7 = -param_3[1];
    dVar25 = param_3[2] * -1.0;
    dVar22 = param_3[3] * 1.0;
    dVar2 = param_3[4] * dVar4;
    dVar3 = param_3[5] * dVar5;
    dVar19 = param_3[6] * dVar21;
    dVar15 = dVar3 * dVar16 - dVar7 * dVar2;
    dVar18 = dVar19 * dVar7 - dVar25 * dVar3;
    dVar19 = dVar2 * dVar25 - dVar19 * dVar16;
    dVar18 = dVar18 + dVar18;
    dVar19 = dVar19 + dVar19;
    dVar15 = dVar15 + dVar15;
    uVar8 = SUB84(dVar4,0);
    uVar27 = (int)((ulonglong)dVar4 >> 0x20);
    uVar28 = SUB84(dVar5,0);
    uVar29 = (int)((ulonglong)dVar5 >> 0x20);
    uVar32 = SUB84(dVar6,0);
    uVar33 = (int)((ulonglong)dVar16 >> 0x20);
    uVar36 = SUB84(param_3[1],0);
    uVar37 = (int)((ulonglong)dVar7 >> 0x20);
    dVar2 = 0.0 - ((dVar15 * dVar7 - dVar19 * dVar25) + dVar22 * dVar18 + dVar2);
    dVar3 = 0.0 - (dVar15 * dVar6 + dVar25 * dVar18 + dVar22 * dVar19 + dVar3);
  }
  dVar16 = (double)CONCAT44(uStack_e4,local_e8);
  dVar4 = (double)CONCAT44(uVar27,uVar8) * (double)CONCAT44(uStack_f4,local_f8);
  dVar5 = (double)CONCAT44(uVar29,uVar28) * (double)CONCAT44(uStack_ec,uStack_f0);
  lVar10 = (**(code **)(*param_1 + 0x9f8))(param_1);
  if (lVar10 != 0) {
    lVar11 = FUN_140720906();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) == lVar11 + 0x30)) {
      dVar21 = dVar21 * dVar16;
      dVar16 = dVar5 * (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar37,uVar36) * dVar4;
      dVar7 = dVar21 * (double)CONCAT44(uVar37,uVar36) - dVar25 * dVar5;
      dVar21 = dVar4 * dVar25 - dVar21 * (double)CONCAT44(uVar33,uVar32);
      dVar7 = dVar7 + dVar7;
      dVar21 = dVar21 + dVar21;
      dVar16 = dVar16 + dVar16;
      dVar2 = dVar2 + (dVar16 * (double)CONCAT44(uVar37,uVar36) - dVar21 * dVar25) +
                      dVar22 * dVar7 + dVar4;
      dVar3 = dVar3 + (dVar25 * dVar7 - dVar16 * (double)CONCAT44(uVar33,uVar32)) +
                      dVar22 * dVar21 + dVar5;
      if ((longlong)*(int *)(lVar10 + 0x30) < 1) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = 0.0;
        lVar11 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar10 + 0x28) + 4 + lVar11);
          if (fVar14 <= fVar1) {
            fVar14 = fVar1;
          }
          lVar11 = lVar11 + 0x14;
        } while ((longlong)*(int *)(lVar10 + 0x30) * 0x14 != lVar11);
      }
      dVar15 = *param_3;
      dVar18 = param_3[1];
      dVar6 = param_3[2];
      dVar19 = param_3[8];
      dVar35 = param_3[9];
      dVar16 = param_3[10];
      dVar34 = dVar6 + dVar6;
      dVar21 = dVar15 + dVar15;
      dVar4 = dVar18 + dVar18;
      dVar22 = param_3[3];
      dVar25 = param_3[3];
      dVar5 = dVar4 * dVar22;
      auVar17._0_8_ = (dVar5 + *param_3 * dVar34) * dVar16;
      auVar17._8_8_ = (dVar21 * dVar25 + *param_3 * dVar21) * param_3[0xb];
      dVar22 = dVar34 * dVar22;
      dVar25 = dVar21 * dVar25;
      dVar7 = (1.0 - (dVar34 * dVar6 + dVar4 * dVar18)) * dVar19;
      dVar6 = (1.0 - (dVar34 * dVar6 + dVar21 * dVar15)) * dVar35;
      dVar23 = (dVar22 + dVar4 * dVar15) * dVar19;
      dVar26 = (dVar25 + dVar34 * dVar18) * dVar35;
      dVar19 = (*param_3 * dVar34 - dVar5) * dVar19;
      auVar30._0_8_ = dVar35 * (dVar4 * dVar15 - dVar22);
      auVar30._8_8_ = dVar16 * (dVar34 * dVar18 - dVar25);
      auVar17 = blendpd(auVar17,auVar30,2);
      auVar31._8_4_ = SUB84(dVar6,0);
      auVar31._0_8_ = dVar7;
      auVar31._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar31 = blendpd(auVar30,auVar31,2);
      dVar16 = (1.0 - (dVar21 * dVar15 + dVar4 * dVar18)) * dVar16;
      dVar6 = (dVar2 + dVar2) * 0.5;
      dVar15 = (dVar3 + dVar3) * 0.5;
      dVar25 = ((double)-fVar14 + 0.0) * 0.5;
      dVar2 = (dVar2 - dVar2) * 0.5;
      dVar21 = (dVar3 - dVar3) * 0.5;
      dVar35 = dVar25 * auVar17._0_8_ + dVar15 * auVar31._0_8_ + dVar6 * dVar7 + param_3[4];
      dVar34 = dVar25 * auVar17._8_8_ + dVar15 * auVar31._8_8_ + dVar6 * dVar23 + param_3[5];
      dVar18 = (double)-fVar14 * 0.5;
      dVar4 = ABS(dVar18 * auVar17._0_8_) + ABS(auVar31._0_8_ * dVar21) + ABS(dVar2 * dVar7);
      dVar5 = ABS(dVar18 * auVar17._8_8_) + ABS(auVar31._8_8_ * dVar21) + ABS(dVar2 * dVar23);
      dVar3 = dVar35 - dVar4;
      dVar22 = dVar34 - dVar5;
      dVar21 = ABS(dVar21 * dVar26) + ABS(dVar2 * dVar19) + ABS(dVar18 * dVar16);
      dVar2 = dVar25 * dVar16 + dVar15 * dVar26 + dVar6 * dVar19 + param_3[6];
      dVar19 = dVar2 - dVar21;
      dVar2 = ((dVar2 + dVar21) - dVar19) * 0.5;
      dVar5 = ((dVar5 + dVar34) - dVar22) * 0.5;
      dVar25 = ((dVar4 + dVar35) - dVar3) * 0.5;
      local_108 = dVar2 * dVar2 + dVar25 * dVar25 + dVar5 * dVar5;
      uStack_100 = 0;
      dVar7 = (double)CONCAT44(uStack_f4,local_f8);
      dVar6 = (double)CONCAT44(uStack_ec,uStack_f0);
      dVar35 = dVar7 + (double)CONCAT44(uStack_dc,uStack_e0);
      dVar4 = dVar6 + local_d8;
      dVar15 = (double)CONCAT44(uStack_e4,local_e8);
      dVar16 = dVar7 - (double)CONCAT44(uStack_dc,uStack_e0);
      local_d8 = dVar6 - local_d8;
      dVar18 = dVar15 + dStack_d0;
      dStack_d0 = dVar15 - dStack_d0;
      dVar21 = dVar16;
      if (dVar35 <= dVar16) {
        dVar21 = dVar35;
      }
      if (dVar16 <= dVar35) {
        dVar16 = dVar35;
      }
      dVar35 = local_d8;
      if (dVar4 <= local_d8) {
        dVar35 = dVar4;
      }
      if (local_d8 <= dVar4) {
        local_d8 = dVar4;
      }
      dVar4 = dStack_d0;
      if (dVar18 <= dStack_d0) {
        dVar4 = dVar18;
      }
      if (dStack_d0 <= dVar18) {
        dStack_d0 = dVar18;
      }
      dVar3 = dVar3 + dVar25;
      dVar18 = dVar3 - dVar25;
      if (dVar18 <= dVar21) {
        dVar21 = dVar18;
      }
      if (dVar16 <= dVar18) {
        dVar16 = dVar18;
      }
      dVar22 = dVar22 + dVar5;
      dVar18 = dVar22 - dVar5;
      if (dVar18 <= dVar35) {
        dVar35 = dVar18;
      }
      if (local_d8 <= dVar18) {
        local_d8 = dVar18;
      }
      dVar19 = dVar19 + dVar2;
      dVar18 = dVar19 - dVar2;
      if (dVar18 <= dVar4) {
        dVar4 = dVar18;
      }
      if (dStack_d0 <= dVar18) {
        dStack_d0 = dVar18;
      }
      dVar25 = dVar25 + dVar3;
      if (dVar25 <= dVar21) {
        dVar21 = dVar25;
      }
      if (dVar16 <= dVar25) {
        dVar16 = dVar25;
      }
      dVar5 = dVar5 + dVar22;
      if (dVar5 <= dVar35) {
        dVar35 = dVar5;
      }
      if (local_d8 <= dVar5) {
        local_d8 = dVar5;
      }
      dVar2 = dVar2 + dVar19;
      if (dVar2 <= dVar4) {
        dVar4 = dVar2;
      }
      if (dStack_d0 <= dVar2) {
        dStack_d0 = dVar2;
      }
      dVar25 = (dStack_d0 - dVar4) * 0.5;
      dVar5 = (local_d8 - dVar35) * 0.5;
      dVar16 = (dVar16 - dVar21) * 0.5;
      dVar4 = dVar4 + dVar25;
      dVar35 = dVar35 + dVar5;
      dVar21 = dVar21 + dVar16;
      *param_2 = dVar21;
      param_2[1] = dVar35;
      param_2[2] = dVar4;
      param_2[3] = dVar16;
      param_2[4] = dVar5;
      param_2[5] = dVar25;
      dVar2 = SQRT((dVar19 - dVar4) * (dVar19 - dVar4) +
                   (dVar3 - dVar21) * (dVar3 - dVar21) + (dVar22 - dVar35) * (dVar22 - dVar35)) +
              SQRT(local_108);
      local_c8 = SQRT((dVar15 - dVar4) * (dVar15 - dVar4) +
                      (dVar7 - dVar21) * (dVar7 - dVar21) + (dVar6 - dVar35) * (dVar6 - dVar35)) +
                 local_c8;
      if (local_c8 <= dVar2) {
        local_c8 = dVar2;
      }
      dVar2 = SQRT(dVar25 * dVar25 + dVar16 * dVar16 + dVar5 * dVar5);
      if (local_c8 <= dVar2) {
        dVar2 = local_c8;
      }
      param_2[6] = dVar2;
      goto LAB_140720806;
    }
  }
  param_2[6] = local_c8;
  param_2[4] = local_d8;
  param_2[5] = dStack_d0;
  *(undefined4 *)(param_2 + 2) = local_e8;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_e4;
  *(undefined4 *)(param_2 + 3) = uStack_e0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_dc;
  *(undefined4 *)param_2 = local_f8;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_f4;
  *(undefined4 *)(param_2 + 1) = uStack_f0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_ec;
LAB_140720806:
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140720906 FUN_140720906 body=228 status=ok
// SIG undefined FUN_140720906(void)

longlong FUN_140720906(void)

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
  if (DAT_14cb495b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d5262;
    local_38 = &LAB_148407f59;
    local_40 = FUN_140c51b60;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Water",L"WaterSplineMetadata",&DAT_14cb495b8,&DAT_148407f58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb495b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407209ec FUN_1407209ec body=501 status=ok
// SIG undefined FUN_1407209ec(void)

undefined8 FUN_1407209ec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
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
  if (DAT_14cb46ec8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_142b4754c;
    local_48 = &LAB_1483e40eb;
    local_50 = (code *)&LAB_146486986;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000005;
    local_70 = 8;
    local_78 = 0x420;
    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
  }
  lVar2 = DAT_14cb46ec8;
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
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar5 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x3a8) != 0)) {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x3a8) + 0x1038);
      goto LAB_140720a83;
    }
  }
  uVar4 = 0;
LAB_140720a83:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140720be2 FUN_140720be2 body=1307 status=ok
// SIG undefined FUN_140720be2(void)

void FUN_140720be2(longlong param_1,double *param_2,double *param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1b8 [40];
  double *local_190;
  double *local_188;
  float local_180 [22];
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar2 = *(uint *)(param_1 + 0x628);
  uVar1 = uVar2 - 1;
  uVar10 = uVar1;
  if (*(char *)(param_1 + 0x695) != '\0') {
    uVar10 = uVar2;
  }
  local_108 = 8796093022208.0;
  dStack_100 = 8796093022208.0;
  local_f8 = 8796093022208.0;
  local_128 = -8796093022208.0;
  dStack_120 = -8796093022208.0;
  local_118 = -8796093022208.0;
  local_190 = param_3;
  local_188 = param_2;
  if ((int)uVar10 < 1) {
    if (uVar2 == 1) {
      lVar9 = *(longlong *)(param_1 + 0x620);
      local_118 = *(double *)(lVar9 + 0x18);
      local_128 = *(double *)(lVar9 + 8);
      dStack_120 = *(double *)(lVar9 + 0x10);
      local_108 = *(double *)(lVar9 + 8);
      dStack_100 = *(double *)(lVar9 + 0x10);
      local_f8 = *(double *)(lVar9 + 0x18);
    }
    else {
      local_f8 = DAT_14c8464f0;
      local_108 = DAT_14c8464e0;
      dStack_100 = DAT_14c8464e8;
      local_128 = DAT_14c8464e0;
      dStack_120 = DAT_14c8464e8;
      local_118 = DAT_14c8464f0;
    }
  }
  else {
    uVar14 = 0;
    do {
      uVar15 = uVar14 + 1;
      pfVar8 = (float *)(uVar14 * 0x58 + *(longlong *)(param_1 + 0x620));
      uVar13 = 0;
      if (uVar14 != uVar1) {
        uVar13 = uVar15;
      }
      puVar11 = (undefined8 *)(uVar13 * 0x58 + *(longlong *)(param_1 + 0x620));
      pfVar12 = local_180;
      for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined8 *)pfVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        pfVar12 = pfVar12 + 2;
      }
      if (uVar14 == uVar1) {
        local_180[0] = *pfVar8 + *(float *)(param_1 + 0x634);
      }
      FUN_1407210fe(pfVar8,local_180,&local_108,&local_128);
      uVar14 = uVar15;
    } while (uVar15 != uVar10);
  }
  dVar16 = *local_190;
  dVar23 = local_190[1];
  dVar7 = local_190[2];
  dVar18 = local_190[8];
  dVar25 = local_190[9];
  dVar17 = local_190[10];
  dVar5 = dVar7 + dVar7;
  dVar3 = dVar16 + dVar16;
  dVar4 = dVar23 + dVar23;
  dVar19 = local_190[3];
  dVar21 = local_190[3];
  dVar24 = dVar4 * dVar19;
  auVar26._0_8_ = (dVar24 + *local_190 * dVar5) * dVar17;
  auVar26._8_8_ = (dVar3 * dVar21 + *local_190 * dVar3) * local_190[0xb];
  dVar19 = dVar5 * dVar19;
  dVar21 = dVar3 * dVar21;
  dVar6 = (1.0 - (dVar5 * dVar7 + dVar4 * dVar23)) * dVar18;
  dVar7 = (1.0 - (dVar5 * dVar7 + dVar3 * dVar16)) * dVar25;
  dVar20 = (dVar19 + dVar4 * dVar16) * dVar18;
  dVar22 = (dVar21 + dVar5 * dVar23) * dVar25;
  dVar18 = (*local_190 * dVar5 - dVar24) * dVar18;
  auVar27._0_8_ = dVar25 * (dVar4 * dVar16 - dVar19);
  auVar27._8_8_ = dVar17 * (dVar5 * dVar23 - dVar21);
  auVar26 = blendpd(auVar26,auVar27,2);
  auVar28._8_4_ = SUB84(dVar7,0);
  auVar28._0_8_ = dVar6;
  auVar28._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar28 = blendpd(auVar27,auVar28,2);
  dVar17 = (1.0 - (dVar3 * dVar16 + dVar4 * dVar23)) * dVar17;
  dVar24 = (local_108 + local_128) * 0.5;
  dVar5 = (dStack_100 + dStack_120) * 0.5;
  dVar23 = (local_f8 + local_118) * 0.5;
  dVar21 = (local_128 - local_108) * 0.5;
  dVar19 = (dStack_120 - dStack_100) * 0.5;
  dVar16 = (local_118 - local_f8) * 0.5;
  dVar3 = ABS(dVar16 * auVar26._0_8_) + ABS(auVar28._0_8_ * dVar19) + ABS(dVar21 * dVar6);
  dVar4 = ABS(dVar16 * auVar26._8_8_) + ABS(auVar28._8_8_ * dVar19) + ABS(dVar21 * dVar20);
  dVar6 = dVar23 * auVar26._0_8_ + dVar5 * auVar28._0_8_ + dVar24 * dVar6 + local_190[4];
  dVar7 = dVar23 * auVar26._8_8_ + dVar5 * auVar28._8_8_ + dVar24 * dVar20 + local_190[5];
  dVar25 = dVar6 - dVar3;
  dVar20 = dVar7 - dVar4;
  dVar21 = ABS(dVar19 * dVar22) + ABS(dVar21 * dVar18) + ABS(dVar16 * dVar17);
  dVar19 = dVar23 * dVar17 + dVar5 * dVar22 + dVar24 * dVar18 + local_190[6];
  dVar17 = dVar19 - dVar21;
  dVar24 = ((dVar19 + dVar21) - dVar17) * 0.5;
  dVar21 = ((dVar4 + dVar7) - dVar20) * 0.5;
  dVar19 = ((dVar3 + dVar6) - dVar25) * 0.5;
  *local_188 = dVar25 + dVar19;
  local_188[1] = dVar20 + dVar21;
  local_188[2] = dVar17 + dVar24;
  local_188[3] = dVar19;
  local_188[4] = dVar21;
  local_188[5] = dVar24;
  local_188[6] = SQRT(dVar24 * dVar24 + dVar19 * dVar19 + dVar21 * dVar21);
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407210fe FUN_1407210fe body=408 status=ok
// SIG undefined FUN_1407210fe(void)

void FUN_1407210fe(undefined4 *param_1,undefined4 *param_2,double *param_3,double *param_4)

{
  byte bVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  byte local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = 0x3aU >> (*(byte *)(param_1 + 0x14) & 0x1f) & *(byte *)(param_1 + 0x14) < 6;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 8);
  local_70 = *(undefined8 *)(param_2 + 2);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 0xe));
  dVar2 = *param_3;
  if (local_48 <= *param_3) {
    dVar2 = local_48;
  }
  *param_3 = dVar2;
  dVar2 = *param_4;
  if (*param_4 <= local_50) {
    dVar2 = local_50;
  }
  *param_4 = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 10);
  local_70 = *(undefined8 *)(param_2 + 4);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 0x10));
  dVar2 = param_3[1];
  if (local_48 <= param_3[1]) {
    dVar2 = local_48;
  }
  param_3[1] = dVar2;
  dVar2 = param_4[1];
  if (param_4[1] <= local_50) {
    dVar2 = local_50;
  }
  param_4[1] = dVar2;
  local_60 = *param_2;
  local_68 = *(undefined8 *)(param_2 + 0xc);
  local_70 = *(undefined8 *)(param_2 + 6);
  local_78 = *param_1;
  local_58 = bVar1;
  FUN_140721297(&local_48,&local_50,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x12));
  dVar2 = param_3[2];
  if (local_48 <= param_3[2]) {
    dVar2 = local_48;
  }
  param_3[2] = dVar2;
  dVar2 = param_4[2];
  if (param_4[2] <= local_50) {
    dVar2 = local_50;
  }
  param_4[2] = dVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140721297 FUN_140721297 body=1112 status=ok
// SIG undefined FUN_140721297(void)

/* WARNING: Removing unreachable block (ram,0x0001407214fa) */

void FUN_140721297(double *param_1,double *param_2,double param_3,double param_4,float param_5,
                  double param_6,double param_7,float param_8,char param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = param_3;
  if (param_6 <= param_3) {
    dVar3 = param_6;
  }
  *param_1 = dVar3;
  dVar3 = param_3;
  if (param_3 <= param_6) {
    dVar3 = param_6;
  }
  *param_2 = dVar3;
  if (param_9 == '\0') {
    return;
  }
  dVar5 = (double)(param_8 - param_5);
  param_4 = param_4 * dVar5;
  param_7 = param_7 * dVar5;
  dVar6 = param_6 * -6.0 + param_7 * 3.0 + param_3 * 6.0 + param_4 * 3.0;
  dVar3 = param_6 * 6.0 + ((param_3 * -6.0 + param_4 * -4.0) - (param_7 + param_7));
  if (ABS(dVar6) <= 1e-08) {
    if (ABS(dVar3) <= 1e-08) {
      return;
    }
    dVar3 = -param_4 / dVar3;
    dVar5 = dVar5 * dVar3 + (double)param_5;
    if (dVar5 <= (double)param_5) {
      return;
    }
    if ((double)param_8 <= dVar5) {
      return;
    }
    dVar6 = dVar3 * dVar3;
    dVar5 = dVar3 * dVar6;
    dVar3 = (dVar6 * 3.0 - (dVar5 + dVar5)) * param_6 +
            (dVar5 - dVar6) * param_7 +
            (((dVar5 + dVar5) - dVar6 * 3.0) + 1.0) * param_3 +
            param_4 * ((dVar5 - (dVar6 + dVar6)) + dVar3);
  }
  else {
    dVar2 = dVar3 * dVar3 + dVar6 * -4.0 * param_4;
    if (dVar2 < 0.0) {
      return;
    }
    dVar2 = SQRT(dVar2);
    dVar7 = (dVar2 - dVar3) / (dVar6 + dVar6);
    dVar4 = (double)param_5;
    dVar8 = dVar7 * dVar5 + dVar4;
    if ((dVar4 < dVar8) && (dVar8 < (double)param_8)) {
      dVar8 = dVar7 * dVar7;
      dVar1 = dVar7 * dVar8;
      dVar8 = (dVar8 * 3.0 - (dVar1 + dVar1)) * param_6 +
              (dVar1 - dVar8) * param_7 +
              (((dVar1 + dVar1) - dVar8 * 3.0) + 1.0) * param_3 +
              ((dVar1 - (dVar8 + dVar8)) + dVar7) * param_4;
      dVar7 = *param_1;
      if (dVar8 <= *param_1) {
        dVar7 = dVar8;
      }
      *param_1 = dVar7;
      dVar7 = *param_2;
      if (*param_2 <= dVar8) {
        dVar7 = dVar8;
      }
      *param_2 = dVar7;
    }
    dVar3 = (-dVar3 - dVar2) / (dVar6 + dVar6);
    dVar5 = dVar5 * dVar3 + dVar4;
    if (dVar5 <= dVar4) {
      return;
    }
    if ((double)param_8 <= dVar5) {
      return;
    }
    dVar6 = dVar3 * dVar3;
    dVar5 = dVar3 * dVar6;
    dVar3 = (dVar6 * 3.0 - (dVar5 + dVar5)) * param_6 +
            (dVar5 - dVar6) * param_7 +
            (((dVar5 + dVar5) - dVar6 * 3.0) + 1.0) * param_3 +
            param_4 * ((dVar5 - (dVar6 + dVar6)) + dVar3);
  }
  dVar5 = *param_1;
  if (dVar3 <= *param_1) {
    dVar5 = dVar3;
  }
  *param_1 = dVar5;
  dVar5 = *param_2;
  if (*param_2 <= dVar3) {
    dVar5 = dVar3;
  }
  *param_2 = dVar5;
  return;
}



// FUNCTION 1407216f0 FUN_1407216f0 body=242 status=ok
// SIG undefined FUN_1407216f0(void)

void FUN_1407216f0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      uVar4 = (ulonglong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        uVar4 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
      }
      uVar3 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1407217e2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1407217e2 FUN_1407217e2 body=132 status=ok
// SIG undefined FUN_1407217e2(void)

void FUN_1407217e2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 140721866 FUN_140721866 body=49 status=ok
// SIG undefined FUN_140721866(void)

void FUN_140721866(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000140721893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 14072189a FUN_14072189a body=785 status=ok
// SIG undefined FUN_14072189a(void)

ulonglong FUN_14072189a(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar8 = *(longlong **)(param_1 + 0x658);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar8 != (longlong *)0x0) != 0) goto LAB_140721b95;
    if (plVar8 != (longlong *)0x0) goto LAB_1407218db;
LAB_140721ae9:
    plVar8 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_140721b95:
      FUN_1456cec3c(plVar8);
    }
LAB_1407218db:
    if (DAT_14cb06da8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = &LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_140721ae9;
  }
  lVar4 = *(longlong *)(param_1 + 0xae0);
  if ((((lVar4 == 0) || (lVar2 = FUN_1402e44f4(), lVar2 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xae0);
  }
  plVar3 = (longlong *)FUN_140721bac(uVar6);
  if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0x98))(plVar3), lVar4 == 0)) {
    if (plVar8 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar8 + 0x3f8))(plVar8);
      goto LAB_14072197b;
    }
LAB_140721ba5:
    bVar9 = false;
    bVar1 = 0;
  }
  else {
LAB_14072197b:
    bVar9 = false;
    if (plVar8 == (longlong *)0x0) goto LAB_140721ba5;
    bVar1 = 0;
    if (lVar4 != 0) {
      lVar2 = (**(code **)(*plVar8 + 0x3f8))(plVar8);
      bVar9 = lVar2 != 0;
      bVar1 = FUN_140721cc4(lVar4,plVar8,0);
    }
  }
  if (((*(char *)(param_1 + 0xc5f) == '\0') && (lVar4 = *(longlong *)(param_1 + 0xae0), lVar4 != 0))
     && ((lVar2 = FUN_1402e44f4(), lVar2 != 0 &&
         (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) &&
          (lVar2 = *(longlong *)(param_1 + 0xae0),
          lVar2 != 0 && (plVar3 != (longlong *)0x0 & (bVar9 & bVar1 ^ 1)) == 0)))))) {
    uVar7 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if (*(longlong *)(param_1 + 0xae8) == 0) goto LAB_140721a77;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x10);
    lVar5 = FUN_1402e44f4();
    if (((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0xae0);
    }
    if ((lVar4 != lVar2) || (*(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x20) != param_1))
    goto LAB_140721a77;
  }
  uVar7 = 0;
LAB_140721a77:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140721bac FUN_140721bac body=258 status=ok
// SIG undefined FUN_140721bac(void)

undefined8 FUN_140721bac(longlong param_1)

{
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
  if (param_1 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1478defb1;
      local_50 = FUN_1463a1b02;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140721cc4 FUN_140721cc4 body=609 status=ok
// SIG undefined FUN_140721cc4(void)

ulonglong FUN_140721cc4(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  
  lVar6 = (**(code **)(*param_2 + 0x308))(param_2);
  uVar7 = (ulonglong)*(int *)(lVar6 + 8);
  uVar10 = 0;
  if (0 < (longlong)uVar7) {
    uVar9 = 0;
    bVar15 = false;
    do {
      lVar2 = *(longlong *)(lVar6 + 0x20);
      lVar3 = *(longlong *)(lVar2 + uVar9 * 0xc);
      if ((lVar3 != 0) && (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114))) {
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar11 = (uint)lVar3 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar8 = param_1 + 0x118;
        }
        iVar12 = *(int *)(lVar8 + (ulonglong)
                                  (*(int *)(param_1 + 0x128) - 1U &
                                  (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar11) +
                                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar12 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar12 * 0x14);
            if (*plVar1 == lVar3) {
              if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
                 (iVar12 = (int)plVar1[1], iVar12 != -1)) {
                uVar10 = (ulonglong)((int)uVar10 + 1);
                goto LAB_140721edf;
              }
              break;
            }
            iVar12 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar12 != -1);
        }
      }
      iVar12 = -1;
      uVar14 = uVar9 & 0xffffffff;
      do {
        if ((iVar12 != -1) || (iVar13 = (int)uVar14, iVar13 == -1)) break;
        iVar12 = -1;
        if ((iVar13 < 0) ||
           ((*(int *)(lVar6 + 0x28) <= iVar13 ||
            (uVar14 = (ulonglong)*(int *)(lVar2 + 8 + (uVar14 & 0xffffffff) * 0xc),
            uVar14 == 0xffffffffffffffff)))) {
          uVar14 = 0xffffffff;
        }
        else {
          lVar3 = *(longlong *)(lVar2 + uVar14 * 0xc);
          if ((lVar3 != 0) && (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114))) {
            uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
            uVar11 = (uint)lVar3 & 0xffff;
            lVar8 = *(longlong *)(param_1 + 0x120);
            if (*(longlong *)(param_1 + 0x120) == 0) {
              lVar8 = param_1 + 0x118;
            }
            iVar13 = *(int *)(lVar8 + (ulonglong)
                                      (*(int *)(param_1 + 0x128) - 1U &
                                      (int)((ulonglong)lVar3 >> 0x20) +
                                      ((uint)lVar3 << 0x10 | uVar11) +
                                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
            if (iVar13 != -1) {
              do {
                plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar13 * 0x14);
                if (*plVar1 == lVar3) {
                  if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                    iVar12 = (int)plVar1[1];
                  }
                  break;
                }
                iVar13 = *(int *)((longlong)plVar1 + 0xc);
              } while (iVar13 != -1);
            }
          }
        }
      } while ((int)uVar14 != 0);
      if (iVar12 == -1) break;
LAB_140721edf:
      if ((param_3 != '\0') && (cVar5 = FUN_1433f1f34(param_1,iVar12,param_2), cVar5 == '\0'))
      break;
      uVar9 = uVar9 + 1;
      bVar15 = uVar7 <= uVar9;
    } while (uVar9 != uVar7);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),0 < (int)uVar10 & bVar15);
  }
  return uVar10;
}



// FUNCTION 140721f26 FUN_140721f26 body=151 status=ok
// SIG undefined FUN_140721f26(void)

longlong * FUN_140721f26(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0xffffffff;
  if (*param_2 != 0) {
    local_14 = FUN_140721fbe(param_1[0x16] + 0x28);
  }
  puVar1 = (ulonglong *)param_1[1];
  if (puVar1[1] < *puVar1 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_14);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140721fbe FUN_140721fbe body=103 status=ok
// SIG undefined FUN_140721fbe(void)

ulonglong FUN_140721fbe(longlong *param_1,longlong *param_2)

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
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_14072201b;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_14072201b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140722026 FUN_140722026 body=1102 status=ok
// SIG undefined FUN_140722026(void)

void FUN_140722026(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_1401144ce(param_2);
  if ((cVar4 == '\0') || (param_3 == 0)) goto LAB_140722349;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
LAB_14072236e:
    local_40 = DAT_14c948620;
    uVar13 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 3)) goto LAB_14072236e;
    local_40 = *(uint *)(lVar11 + 0x20);
    uVar13 = *(ulonglong *)(lVar11 + 0x18);
  }
  local_48._0_4_ = (uint)uVar13;
  if (local_40 != 0) {
    uVar6 = local_40 >> 0xd ^ (uint)local_48 - local_40;
    uVar9 = uVar6 << 8 ^ (-0x61c88647 - local_40) - uVar6;
    uVar12 = uVar9 >> 0xd ^ (local_40 - uVar6) - uVar9;
    uVar8 = uVar12 >> 0xc ^ (uVar6 - uVar9) - uVar12;
    uVar6 = uVar8 << 0x10 ^ (uVar9 - uVar12) - uVar8;
    uVar9 = uVar6 >> 5 ^ (uVar12 - uVar8) - uVar6;
    uVar8 = uVar9 >> 3 ^ (uVar8 - uVar6) - uVar9;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar9) - uVar8;
    local_48._0_4_ = uVar6 >> 0xf ^ uVar9 - (uVar8 + uVar6);
  }
  uVar6 = (uint)local_48;
  local_48 = uVar13;
  iVar5 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar6,&local_48);
  if (iVar5 == -1) goto LAB_140722349;
  lVar11 = *(longlong *)(param_1 + 0x78);
  if ((lVar11 + (longlong)iVar5 * 0x70 == 0) ||
     (plVar10 = (longlong *)(lVar11 + (longlong)iVar5 * 0x70 + 0x10), plVar10 == (longlong *)0x0))
  goto LAB_140722349;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
LAB_140722384:
    local_40 = DAT_14c948620;
    local_48 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 4)) goto LAB_140722384;
    local_40 = *(uint *)(lVar11 + 0x2c);
    local_48 = *(ulonglong *)(lVar11 + 0x24);
  }
  uVar13 = local_48 & 0xffffffff;
  if (local_40 != 0) {
    uVar6 = FUN_144a78877(uVar13,local_40);
    uVar13 = (ulonglong)uVar6;
  }
  iVar5 = FUN_144a24328(plVar10,uVar13,&local_48);
  if (iVar5 == -1) goto LAB_140722349;
  if ((*plVar10 + (longlong)iVar5 * 0x68 == 0) ||
     (plVar10 = (longlong *)(*plVar10 + (longlong)iVar5 * 0x68 + 0x10), plVar10 == (longlong *)0x0))
  goto LAB_140722349;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
LAB_14072239a:
    local_40 = DAT_14c948620;
    uVar13 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 5)) goto LAB_14072239a;
    local_40 = *(uint *)(lVar11 + 0x38);
    uVar13 = *(ulonglong *)(lVar11 + 0x30);
  }
  local_48._0_4_ = (uint)uVar13;
  if (local_40 != 0) {
    uVar6 = local_40 >> 0xd ^ (uint)local_48 - local_40;
    uVar9 = uVar6 << 8 ^ (-0x61c88647 - local_40) - uVar6;
    uVar12 = uVar9 >> 0xd ^ (local_40 - uVar6) - uVar9;
    uVar8 = uVar12 >> 0xc ^ (uVar6 - uVar9) - uVar12;
    uVar6 = uVar8 << 0x10 ^ (uVar9 - uVar12) - uVar8;
    uVar9 = uVar6 >> 5 ^ (uVar12 - uVar8) - uVar6;
    uVar8 = uVar9 >> 3 ^ (uVar8 - uVar6) - uVar9;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar9) - uVar8;
    local_48._0_4_ = uVar6 >> 0xf ^ uVar9 - (uVar8 + uVar6);
  }
  uVar6 = (uint)local_48;
  local_48 = uVar13;
  iVar5 = FUN_140727b76(plVar10,uVar6,&local_48);
  if (iVar5 != -1) {
    lVar11 = *plVar10 + (longlong)iVar5 * 0xa8;
    if (((lVar11 != 0) && ((longlong)iVar5 * 0xa8 + *plVar10 != -0x10)) &&
       (uVar13 = (ulonglong)*(int *)(lVar11 + 0x68), 0 < (longlong)uVar13)) {
      plVar10 = (longlong *)(lVar11 + 0x60);
      lVar11 = uVar13 * 0x10 + -8;
      do {
        lVar1 = *plVar10;
        if ((*(int *)(lVar1 + lVar11) == 0) ||
           (plVar2 = *(longlong **)(lVar1 + -8 + lVar11), plVar2 == (longlong *)0x0)) {
          uVar7 = 0;
        }
        else {
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_48);
          uVar7 = local_48;
        }
        if (((uVar7 == param_3) || (*(int *)(lVar1 + lVar11) == 0)) ||
           ((plVar2 = *(longlong **)(lVar1 + -8 + lVar11), plVar2 == (longlong *)0x0 ||
            (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')))) {
          FUN_140722504(plVar10,(int)uVar13 + -1);
          FUN_140722476(plVar10);
        }
        lVar11 = lVar11 + -0x10;
        bVar3 = 1 < uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar3);
    }
  }
LAB_140722349:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140722476 FUN_140722476 body=142 status=ok
// SIG undefined FUN_140722476(void)

void FUN_140722476(longlong param_1)

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



// FUNCTION 140722504 FUN_140722504 body=159 status=ok
// SIG undefined FUN_140722504(void)

void FUN_140722504(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14072252e;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_14072252e:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 1407225a4 FUN_1407225a4 body=832 status=ok
// SIG undefined FUN_1407225a4(void)

longlong * FUN_1407225a4(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  uint *local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined8 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *param_1 = param_2 + 0x10;
  uVar17 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 8);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  plVar1 = param_1 + 4;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_4;
  param_1[0x10] = param_2 + 0x90;
  param_1[0x11] = param_2 + 0xb0;
  param_1[0x12] = param_2 + 0xd0;
  param_1[0x13] = param_2 + 0xf0;
  uVar4 = *(uint *)(param_3 + 5);
  local_80 = plVar1;
  if (uVar4 == 0) {
    uVar15 = 1;
    uVar7 = 0;
    iVar14 = 0;
  }
  else {
    puVar8 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_3 + 2);
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar14 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar14 = uVar4 - 1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_1407227f6;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar8[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar7) {
      uVar7 = uVar4;
    }
  }
  if (uVar7 != uVar4) {
    uVar9 = 0xffffffff;
    local_90 = (ulonglong)uVar4;
    local_88 = param_3;
    local_78 = (uint *)(param_3 + 2);
    do {
      local_60 = (undefined4 *)(*local_88 + (longlong)(int)uVar7 * 0x18);
      uVar5 = *(undefined8 *)(local_60 + 2);
      FUN_140722a1c(plVar1,&local_68,&local_60,0);
      *(undefined8 *)(*plVar1 + 8 + (longlong)(int)local_68 * 0x18) = uVar5;
      uVar9 = ~(uint)uVar15 & uVar9;
      puVar8 = (uint *)local_88[4];
      if ((uint *)local_88[4] == (uint *)0x0) {
        puVar8 = local_78;
      }
      uVar4 = *(uint *)(local_88 + 5);
      iVar16 = (int)uVar17;
      lVar12 = (longlong)iVar16;
      uVar7 = puVar8[lVar12] & uVar9;
      if (uVar7 == 0) {
        iVar10 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar10 = uVar4 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar16) {
          iVar11 = iVar16;
        }
        if (iVar16 < iVar10) {
          lVar13 = 0;
          do {
            uVar7 = puVar8[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar17 = (ulonglong)(iVar16 + (int)lVar13 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1407227ba;
            }
            iVar14 = iVar14 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar11 - lVar12 != lVar13);
          uVar9 = 0xffffffff;
          iVar16 = iVar11;
        }
        uVar17 = (ulonglong)(iVar16 + 1);
        uVar7 = uVar4;
      }
      else {
LAB_1407227ba:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar7 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = uVar4;
        }
      }
    } while (uVar7 != (uint)local_90);
  }
LAB_1407227f6:
  local_68 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_68 = &PTR_FUN_149f62930;
  *(undefined1 *)(local_68 + 1) = 0;
  local_68[2] = param_2 + 0xe0;
  puVar6 = (undefined8 *)param_1[0xe];
  param_1[0xe] = (longlong)local_68;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
    local_68 = (undefined8 *)param_1[0xe];
  }
  local_58 = &local_68;
  local_60 = &local_6c;
  local_6c = 4;
  FUN_1407228e6(local_80,local_4c,&local_60,0);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407228e6 FUN_1407228e6 body=308 status=ok
// SIG undefined FUN_1407228e6(void)

undefined4 *
FUN_1407228e6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
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
  FUN_14051b60e(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_14051b578(param_1,uVar4,local_48);
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
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_140722b4a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140722a1c FUN_140722a1c body=301 status=ok
// SIG undefined FUN_140722a1c(void)

undefined4 *
FUN_140722a1c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14051b60e(param_1,local_50);
  uVar3 = *(uint *)*param_3;
  *local_48 = uVar3;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_14051b578(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[5] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140722b4a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140722b4a FUN_140722b4a body=637 status=ok
// SIG undefined FUN_140722b4a(void)

void FUN_140722b4a(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140722bad;
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
LAB_140722bad:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
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



// FUNCTION 140722dc8 FUN_140722dc8 body=89 status=ok
// SIG undefined FUN_140722dc8(void)

longlong *
FUN_140722dc8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x3d8,0x10);
  FUN_1407231b4(plVar1,param_2,param_1,param_3);
  (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3,param_4);
  return plVar1;
}



// FUNCTION 140722e22 FUN_140722e22 body=720 status=ok
// SIG undefined FUN_140722e22(void)

void FUN_140722e22(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60;
  code *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0x21) = 0;
  local_60 = param_4;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_1448831cc(param_1 + 0x20,0);
  }
  (**(code **)(*param_2 + 0x2b0))(param_2,param_3,param_1 + 0x20);
  cVar2 = (**(code **)(*param_2 + 800))(param_2);
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xf7;
  if ((longlong)(int)param_1[0x21] != 0) {
    bVar1 = *(byte *)(param_3 + 0xd0);
    plVar8 = (longlong *)param_1[0x20];
    plVar9 = plVar8 + (int)param_1[0x21];
    iVar7 = 0;
    do {
      cVar3 = (**(code **)(*param_1 + 0x50))(param_1,*plVar8);
      if (cVar3 == '\0') {
        FUN_14003fbd6();
        lVar10 = DAT_14caea080;
        *plVar8 = DAT_14caea080;
      }
      else {
        lVar10 = *plVar8;
        if (lVar10 != 0 && cVar2 == '\x01') {
          if (DAT_14caec470 == 0) {
            local_58[0] = FUN_1417df956;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1463eaa20;
            local_80 = local_58;
            local_88 = &LAB_147bbd9ea;
            local_90 = FUN_1401cf6d7;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000000;
            local_b0 = 8;
            local_b8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) &&
             ((longlong)*(int *)(local_60 + 0x48) != 0)) {
            lVar10 = *(longlong *)(local_60 + 0x40);
            lVar6 = 0;
            do {
              if ((*(longlong **)(lVar10 + 8 + lVar6) == param_2) &&
                 (*(int *)(lVar10 + 0x10 + lVar6) == iVar7)) {
                lVar10 = *(longlong *)(lVar10 + lVar6);
                if (lVar10 != 0) {
                  *plVar8 = lVar10;
                  goto LAB_140722efc;
                }
                break;
              }
              lVar6 = lVar6 + 0x18;
            } while ((longlong)*(int *)(local_60 + 0x48) * 0x18 != lVar6);
          }
          lVar10 = *plVar8;
        }
      }
      if (lVar10 != 0) {
LAB_140722efc:
        FUN_14470a074(lVar10,local_58,(int)param_1[0x1f]);
        param_1[0x22] = param_1[0x22] | (ulonglong)local_58[0];
        bVar5 = (byte)((ulonglong)local_58[0] >> 0x10);
        if (bVar5 <= *(byte *)((longlong)param_1 + 0x112)) {
          bVar5 = *(byte *)((longlong)param_1 + 0x112);
        }
        *(byte *)((longlong)param_1 + 0x112) = bVar5;
        uVar4 = (**(code **)(*(longlong *)*plVar8 + 0x408))();
        *(uint *)(param_1 + 0x1e) =
             (*(uint *)(param_1 + 0x1e) & 0xfffffff7) +
             (uint)(byte)((byte)((*(uint *)(param_1 + 0x1e) & 8) >> 3) | uVar4 < 2 & bVar1 >> 2) * 8
        ;
      }
      iVar7 = iVar7 + 1;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140723112 FUN_140723112 body=160 status=ok
// SIG undefined FUN_140723112(void)

undefined8 FUN_140723112(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
    goto LAB_14072314d;
  }
  if ((*(byte *)(param_1 + 0x1c9) & 2) == 0) {
LAB_14072313c:
    uVar2 = 0xc;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    lVar1 = (**(code **)(*param_2 + 0x2c0))(param_2);
    if (lVar1 == 0) goto LAB_14072313c;
    local_48 = 0;
    uStack_40 = 0;
    lVar1 = (**(code **)(*param_2 + 0x2c0))(param_2);
    uVar2 = 0x14;
    if (*(char *)(lVar1 + 0x128) != '\x03') goto LAB_14072313c;
  }
  uVar2 = (**(code **)(*param_2 + 0x340))(param_2,uVar2);
LAB_14072314d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1407231b4 FUN_1407231b4 body=5584 status=ok
// SIG undefined FUN_1407231b4(void)

undefined8 * FUN_1407231b4(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  int local_14c;
  longlong *local_148;
  uint local_13c;
  ulonglong local_138;
  float local_130;
  float local_12c;
  ulonglong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 local_110 [2];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined8 local_100;
  float local_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1401f77c6();
  *param_1 = &PTR_FUN_14ae0c680;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x6c8);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_3 + 0x15c);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_3 + 0x134);
  uVar12 = *(uint *)((longlong)param_1 + 300) & 0xfffffffe | (uint)*(byte *)(param_3 + 0x728);
  *(uint *)((longlong)param_1 + 300) = uVar12;
  uVar12 = (uVar12 & 0xfffffffd) + (uint)(*(int *)(param_3 + 0x724) != -1) * 2;
  *(uint *)((longlong)param_1 + 300) = uVar12;
  uVar8 = 0;
  uVar17 = 0;
  if (*(int *)(param_3 + 0x6f4) != -1) {
    uVar17 = (uint)(*(int *)(param_3 + 0x6ec) != -1) << 2;
  }
  *(uint *)((longlong)param_1 + 300) = uVar12 & 0xfffffffb | uVar17;
  if ((*(byte *)(param_3 + 0xe3) & 1) != 0) {
    uVar8 = (uint)*(byte *)(param_3 + 0x721) << 3;
  }
  uVar8 = uVar12 & 0xfffffff3 | uVar17 | uVar8;
  *(uint *)((longlong)param_1 + 300) = uVar8;
  uVar17 = 0;
  uVar12 = 0;
  if ((*(byte *)(param_3 + 0x10b) & 1) != 0) {
    uVar12 = (uint)*(byte *)(param_3 + 0x722) << 4;
  }
  uVar12 = uVar8 & 0xffffffef | uVar12;
  *(uint *)((longlong)param_1 + 300) = uVar12;
  if (*(char *)(param_3 + 0x158) == '\x01') {
    uVar17 = (uint)*(byte *)(param_3 + 0x13a) * 2 & 0x20;
  }
  *(uint *)((longlong)param_1 + 300) = uVar12 & 0xffffffdf | uVar17;
  uVar8 = ~uVar17 * 2 & 0x40;
  if (*(char *)(param_3 + 0x158) == '\x02') {
    uVar8 = 0;
  }
  *(uint *)((longlong)param_1 + 300) = uVar12 & 0xffffff9f | uVar17 | uVar8;
  bVar7 = FUN_1401f76a8(param_3);
  *(uint *)((longlong)param_1 + 300) =
       *(uint *)((longlong)param_1 + 300) & 0xffffff7f | (uint)bVar7 << 7;
  *(undefined2 *)(param_1 + 0x26) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x132) = 1;
  *(byte *)((longlong)param_1 + 0x133) = *(byte *)((longlong)param_1 + 0x133) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x42c80000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3ff0000000000000;
  param_1[0x2a] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x2b) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
  *(byte *)((longlong)param_1 + 0x15b) = *(byte *)((longlong)param_1 + 0x15b) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x42c80000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0x2000000000;
  local_148 = param_1 + 0x45;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined2 *)(param_1 + 0x51) = 1;
  *(undefined1 *)((longlong)param_1 + 0x28a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = L"RibbonSortedIndices";
  *(undefined1 *)(param_1 + 0x54) = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 4;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = L"TangentsAndDistancesBuffer";
  *(undefined1 *)(param_1 + 0x5a) = 0xd;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 4;
  param_1[0x5e] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = L"MultiRibbonIndicesBuffer";
  *(undefined1 *)(param_1 + 0x60) = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x304) = 4;
  param_1[100] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x65] = L"RibbonLookupTableBuffer";
  *(undefined1 *)(param_1 + 0x66) = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x334) = 4;
  param_1[0x6a] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = L"SegmentsBuffer";
  *(undefined1 *)(param_1 + 0x6c) = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x364) = 4;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = L"GPUComputeCommandBuffer";
  *(undefined1 *)(param_1 + 0x72) = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x394) = 4;
  *(undefined8 *)((longlong)param_1 + 0x3a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b1) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  uVar9 = FUN_144741050(param_3 + 800);
  local_118 = *(undefined8 *)(param_3 + 0x324);
  local_110[0] = FUN_144830b78(local_110,uVar9);
  local_158 = local_108;
  FUN_1448e9d24(uVar4,&local_118,local_104,(longlong)param_1 + 0x3d4);
  param_1[0x2a] = *(undefined8 *)(param_3 + 0x100);
  uVar4 = *(undefined8 *)(param_3 + 0xe0);
  uVar9 = *(undefined8 *)(param_3 + 0xe8);
  uVar6 = *(undefined8 *)(param_3 + 0xf8);
  param_1[0x28] = *(undefined8 *)(param_3 + 0xf0);
  param_1[0x29] = uVar6;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar9;
  uVar4 = *(undefined8 *)(param_3 + 0x110);
  uVar9 = *(undefined8 *)(param_3 + 0x118);
  uVar6 = *(undefined8 *)(param_3 + 0x120);
  param_1[0x2b] = *(undefined8 *)(param_3 + 0x108);
  param_1[0x2c] = uVar4;
  param_1[0x2d] = uVar9;
  param_1[0x2e] = uVar6;
  param_1[0x2f] = *(undefined8 *)(param_3 + 0x128);
  *(undefined1 *)((longlong)param_1 + 0x27c) = *(undefined1 *)(param_3 + 0x130);
  *(undefined1 *)((longlong)param_1 + 0x27d) = *(undefined1 *)(param_3 + 0x138);
  param_1[0x50] = param_3 + 0x740;
  *(byte *)(param_1 + 0x51) = *(byte *)(param_3 + 0x13a) >> 7;
  *(byte *)((longlong)param_1 + 0x289) = *(byte *)(param_3 + 0x13a) >> 2 & 1;
  *(undefined1 *)((longlong)param_1 + 0x28a) = *(undefined1 *)(param_3 + 0x734);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)(param_3 + 0x738);
  cVar2 = *(char *)(param_3 + 0x139);
  if (cVar2 == '\x01') {
    uVar12 = *(uint *)(param_3 + 0x140);
    if (uVar12 - 2 < 0xf) {
      bVar7 = *(byte *)(param_3 + 0x13a);
      local_13c = bVar7 & 1;
      uVar8 = *(uint *)(param_3 + 0x13c);
      uVar21 = (ulonglong)uVar8;
      *(undefined1 *)(param_1 + 0x4a) = 1;
      *(bool *)((longlong)param_1 + 0x264) = (bVar7 & 3) == 0;
      bVar7 = (byte)local_13c;
      *(byte *)((longlong)param_1 + 0x265) = bVar7 ^ 1;
      local_120 = (ulonglong)(uVar12 * uVar8);
      *(uint *)((longlong)param_1 + 0x254) = uVar12 * uVar8 * 2 << bVar7;
      fVar25 = (float)(uVar8 + 1);
      local_14c = (int)fVar25 * uVar12;
      *(int *)(param_1 + 0x4b) = local_14c << bVar7;
      fVar24 = logf((float)(uint)(local_14c << bVar7));
      iVar15 = (int)ROUND(-0.5 - (fVar24 / 0.6931472 + fVar24 / 0.6931472)) >> 1;
      fVar24 = (float)(int)uVar12;
      *(int *)((longlong)param_1 + 0x25c) = -iVar15;
      *(int *)(param_1 + 0x4c) = (int)(0xffffffffL >> ((char)iVar15 + 0x20U & 0x3f));
      uVar17 = 0;
      plVar16 = local_148;
      local_138 = uVar21;
      local_12c = fVar24;
      do {
        if (-1 < (int)uVar21) {
          fVar28 = ((float)(int)uVar17 / fVar24) * 180.0 * 0.017453292;
          fVar28 = (float)(longlong)
                          (fVar28 * 0.15915494 +
                          *(float *)(&DAT_14a184448 + (ulonglong)(fVar28 < 0.0) * 4)) * -6.2831855 +
                   fVar28;
          fVar26 = fVar28;
          if (fVar28 < -1.5707964) {
            fVar26 = -3.1415927 - fVar28;
          }
          if (1.5707964 < fVar28) {
            fVar26 = 3.1415927 - fVar28;
          }
          fVar27 = fVar26 * fVar26;
          fVar26 = (((((fVar27 * -2.3889859e-08 + 2.7525562e-06) * fVar27 + -0.00019840874) * fVar27
                     + 0.008333331) * fVar27 + -0.16666667) * fVar27 + 1.0) * fVar26;
          fVar27 = (float)(-(uint)(1.5707964 < fVar28) & 0xbf800000 |
                          ~-(uint)(1.5707964 < fVar28) &
                          (~-(uint)(-1.5707964 <= fVar28) & 0xbf800000 |
                          -(uint)(-1.5707964 <= fVar28) & 0x3f800000)) *
                   (((((fVar27 * -2.6051615e-07 + 2.4760495e-05) * fVar27 + -0.0013888378) * fVar27
                     + 0.041666638) * fVar27 + -0.5) * fVar27 + 1.0);
          fVar28 = 0.0;
          do {
            fVar29 = (float)(int)fVar28 / (float)(int)uVar8;
            fVar30 = fVar29 + -0.5;
            iVar15 = *(int *)(param_1 + 0x46);
            lVar22 = (longlong)iVar15;
            *(uint *)(param_1 + 0x46) = iVar15 + 1U;
            if (*(uint *)((longlong)param_1 + 0x234) < iVar15 + 1U) {
              FUN_1407248d2(plVar16,iVar15);
              plVar16 = local_148;
              uVar21 = local_138;
              fVar24 = local_12c;
            }
            lVar5 = *plVar16;
            *(float *)(lVar5 + lVar22 * 0x14) = fVar30 * fVar27 + fVar26 * -0.0;
            *(float *)(lVar5 + 4 + lVar22 * 0x14) = fVar26 * fVar30 + fVar27 * 0.0;
            *(float *)(lVar5 + 8 + lVar22 * 0x14) = fVar27 * 0.0 - fVar26;
            *(float *)(lVar5 + 0xc + lVar22 * 0x14) = fVar26 * 0.0 + fVar27;
            *(float *)(lVar5 + 0x10 + lVar22 * 0x14) = fVar29;
            fVar28 = (float)((int)fVar28 + 1);
          } while (fVar25 != fVar28);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar12);
      local_128 = (ulonglong)uVar12;
      if ((char)local_13c != '\0') {
        iVar15 = 0;
        do {
          if (-1 < (int)uVar21) {
            fVar24 = 0.0;
            do {
              fVar26 = (float)(int)fVar24 / (float)(int)uVar8;
              local_f8 = fVar26 + -0.5;
              uStack_f4 = 0;
              FUN_14573ee76(&local_f8,&local_118);
              local_100 = 0xbf80000000000000;
              FUN_14573ee76(&local_100,&local_f8);
              iVar20 = *(int *)(param_1 + 0x46);
              lVar22 = (longlong)iVar20;
              *(uint *)(param_1 + 0x46) = iVar20 + 1U;
              if (*(uint *)((longlong)param_1 + 0x234) < iVar20 + 1U) {
                FUN_1407248d2(local_148,iVar20);
              }
              lVar5 = *local_148;
              *(undefined8 *)(lVar5 + lVar22 * 0x14) = local_118;
              *(ulonglong *)(lVar5 + 8 + lVar22 * 0x14) = CONCAT44(uStack_f4,local_f8);
              *(float *)(lVar5 + 0x10 + lVar22 * 0x14) = fVar26;
              fVar24 = (float)((int)fVar24 + 1);
            } while (fVar25 != fVar24);
          }
          iVar15 = iVar15 + 1;
          uVar21 = local_138;
        } while (iVar15 != (int)local_128);
      }
      iVar15 = (int)local_120 << ((byte)local_13c & 0x1f);
      if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar15);
      }
      puVar1 = param_1 + 0x30;
      if (*(int *)((longlong)param_1 + 0x20c) < iVar15) {
        FUN_1417335d8(puVar1);
        uVar21 = local_138;
      }
      iVar13 = 0;
      iVar20 = 1;
      uVar12 = local_13c;
      local_130 = fVar25;
      iVar15 = local_14c;
      do {
        uVar18 = uVar21 & 0xffffffff;
        iVar14 = iVar20;
        if (0 < (int)uVar21) {
          do {
            iVar3 = *(int *)(param_1 + 0x41);
            *(uint *)(param_1 + 0x41) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0x20c) < iVar3 + 1U) {
              local_14c = iVar15;
              FUN_140724a48(puVar1,iVar3);
              uVar21 = local_138;
              uVar12 = local_13c;
              iVar15 = local_14c;
            }
            puVar11 = (undefined8 *)param_1[0x40];
            if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
              puVar11 = puVar1;
            }
            *(int *)((longlong)puVar11 + (longlong)iVar3 * 4) = iVar14 + -1;
            iVar3 = *(int *)(param_1 + 0x41);
            *(uint *)(param_1 + 0x41) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0x20c) < iVar3 + 1U) {
              local_14c = iVar15;
              FUN_140724a48(puVar1,iVar3);
              uVar21 = local_138;
              uVar12 = local_13c;
              iVar15 = local_14c;
            }
            puVar11 = (undefined8 *)param_1[0x40];
            if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
              puVar11 = puVar1;
            }
            *(int *)((longlong)puVar11 + (longlong)iVar3 * 4) = iVar14;
            iVar14 = iVar14 + 1;
            uVar8 = (int)uVar18 - 1;
            uVar18 = (ulonglong)uVar8;
          } while (uVar8 != 0);
          uVar18 = uVar21 & 0xffffffff;
          iVar14 = iVar15;
          if ((char)uVar12 != '\0') {
            do {
              local_14c = iVar15;
              iVar15 = *(int *)(param_1 + 0x41);
              *(uint *)(param_1 + 0x41) = iVar15 + 1U;
              if (*(uint *)((longlong)param_1 + 0x20c) < iVar15 + 1U) {
                FUN_140724a48(puVar1,iVar15);
              }
              puVar11 = (undefined8 *)param_1[0x40];
              if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
                puVar11 = puVar1;
              }
              local_148 = (longlong *)CONCAT44(local_148._4_4_,iVar14 + 1);
              *(int *)((longlong)puVar11 + (longlong)iVar15 * 4) = iVar14 + 1;
              iVar15 = *(int *)(param_1 + 0x41);
              *(uint *)(param_1 + 0x41) = iVar15 + 1U;
              if (*(uint *)((longlong)param_1 + 0x20c) < iVar15 + 1U) {
                FUN_140724a48(puVar1,iVar15);
              }
              puVar11 = (undefined8 *)param_1[0x40];
              if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
                puVar11 = puVar1;
              }
              *(int *)((longlong)puVar11 + (longlong)iVar15 * 4) = iVar14;
              uVar8 = (int)uVar18 - 1;
              uVar18 = (ulonglong)uVar8;
              uVar21 = local_138;
              uVar12 = local_13c;
              iVar15 = local_14c;
              iVar14 = (int)local_148;
            } while (uVar8 != 0);
          }
        }
        iVar13 = iVar13 + 1;
        iVar20 = iVar20 + (int)local_130;
        iVar15 = iVar15 + (int)local_130;
      } while (iVar13 != (int)local_128);
      goto LAB_14072380e;
    }
  }
  else if (cVar2 == '\x02') {
    iVar15 = *(int *)(param_3 + 0x144);
    if (iVar15 - 3U < 0xe) {
      bVar7 = *(byte *)(param_3 + 0x13a);
      *(undefined1 *)(param_1 + 0x4a) = 2;
      *(bool *)((longlong)param_1 + 0x264) = (bVar7 & 2) == 0;
      *(undefined1 *)((longlong)param_1 + 0x265) = 0;
      iVar13 = iVar15 * 2;
      *(int *)((longlong)param_1 + 0x254) = iVar13;
      iVar20 = iVar15 + 1;
      *(int *)(param_1 + 0x4b) = iVar20;
      fVar24 = logf((float)iVar20);
      iVar14 = (int)ROUND(-0.5 - (fVar24 / 0.6931472 + fVar24 / 0.6931472)) >> 1;
      *(int *)((longlong)param_1 + 0x25c) = -iVar14;
      *(int *)(param_1 + 0x4c) = (int)(0xffffffffL >> ((char)iVar14 + 0x20U & 0x3f));
      if (*(int *)((longlong)param_1 + 0x234) <= iVar15) {
        FUN_140724786(local_148,iVar20);
      }
      fVar24 = (float)iVar15;
      puVar1 = param_1 + 0x30;
      iVar14 = 0;
      plVar16 = local_148;
      do {
        fVar25 = ((float)iVar14 / fVar24) * -360.0 * 0.017453292;
        fVar25 = (float)(longlong)
                        (fVar25 * 0.15915494 +
                        *(float *)(&DAT_14a184448 + (ulonglong)(fVar25 < 0.0) * 4)) * -6.2831855 +
                 fVar25;
        fVar26 = 1.0;
        if (1.5707964 < fVar25) {
          fVar28 = 3.1415927;
LAB_1407240be:
          fVar28 = fVar28 - fVar25;
          fVar27 = -1.0;
        }
        else {
          fVar27 = fVar26;
          fVar28 = fVar25;
          if (fVar25 < -1.5707964) {
            fVar28 = -3.1415927;
            goto LAB_1407240be;
          }
        }
        fVar30 = fVar28 * fVar28;
        fVar28 = (((((fVar30 * -2.3889859e-08 + 2.7525562e-06) * fVar30 + -0.00019840874) * fVar30 +
                   0.008333331) * fVar30 + -0.16666667) * fVar30 + 1.0) * fVar28;
        local_130 = fVar28 * -0.0;
        local_128 = CONCAT44(local_128._4_4_,(float)iVar14 / fVar24);
        if (1.5707964 < fVar25) {
          fVar26 = 3.1415927;
LAB_1407240d8:
          fVar25 = fVar26 - fVar25;
          fVar26 = -1.0;
        }
        else if (fVar25 < -1.5707964) {
          fVar26 = -3.1415927;
          goto LAB_1407240d8;
        }
        fVar29 = fVar25 * fVar25;
        fVar25 = (((((fVar29 * -2.3889859e-08 + 2.7525562e-06) * fVar29 + -0.00019840874) * fVar29 +
                   0.008333331) * fVar29 + -0.16666667) * fVar29 + 1.0) * fVar25;
        iVar3 = *(int *)(param_1 + 0x46);
        lVar22 = (longlong)iVar3;
        *(uint *)(param_1 + 0x46) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x234) < iVar3 + 1U) {
          local_138 = CONCAT44(local_138._4_4_,fVar24);
          FUN_1407248d2(plVar16,iVar3);
          plVar16 = local_148;
          fVar24 = (float)local_138;
        }
        fVar27 = fVar27 * (((((fVar30 * -2.6051615e-07 + 2.4760495e-05) * fVar30 + -0.0013888378) *
                             fVar30 + 0.041666638) * fVar30 + -0.5) * fVar30 + 1.0);
        fVar26 = fVar26 * (((((fVar29 * -2.6051615e-07 + 2.4760495e-05) * fVar29 + -0.0013888378) *
                             fVar29 + 0.041666638) * fVar29 + -0.5) * fVar29 + 1.0);
        lVar5 = *plVar16;
        *(float *)(lVar5 + lVar22 * 0x14) = fVar27 * -0.5 + local_130;
        *(float *)(lVar5 + 4 + lVar22 * 0x14) = fVar28 * -0.5 + fVar27 * 0.0;
        *(float *)(lVar5 + 8 + lVar22 * 0x14) = fVar25 * -0.0 - fVar26;
        *(float *)(lVar5 + 0xc + lVar22 * 0x14) = fVar26 * 0.0 - fVar25;
        *(undefined4 *)(lVar5 + 0x10 + lVar22 * 0x14) = (undefined4)local_128;
        iVar14 = iVar14 + 1;
      } while (iVar20 != iVar14);
      if (*(int *)((longlong)param_1 + 0x20c) < iVar13) {
        FUN_1417335d8(puVar1,iVar13);
      }
      if (iVar15 != 0) {
        iVar20 = 0;
        do {
          iVar13 = *(int *)(param_1 + 0x41);
          *(uint *)(param_1 + 0x41) = iVar13 + 1U;
          if (*(uint *)((longlong)param_1 + 0x20c) < iVar13 + 1U) {
            FUN_140724a48(puVar1,iVar13);
          }
          puVar11 = (undefined8 *)param_1[0x40];
          if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
            puVar11 = puVar1;
          }
          *(int *)((longlong)puVar11 + (longlong)iVar13 * 4) = iVar20;
          iVar13 = *(int *)(param_1 + 0x41);
          *(uint *)(param_1 + 0x41) = iVar13 + 1U;
          if (*(uint *)((longlong)param_1 + 0x20c) < iVar13 + 1U) {
            FUN_140724a48(puVar1,iVar13);
          }
          iVar20 = iVar20 + 1;
          puVar11 = (undefined8 *)param_1[0x40];
          if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
            puVar11 = puVar1;
          }
          *(int *)((longlong)puVar11 + (longlong)iVar13 * 4) = iVar20;
        } while (iVar15 != iVar20);
      }
      goto LAB_14072380e;
    }
  }
  else if ((cVar2 == '\x03') && (2 < *(int *)(param_3 + 0x150))) {
    bVar7 = *(byte *)(param_3 + 0x13a);
    *(undefined1 *)(param_1 + 0x4a) = 3;
    *(bool *)((longlong)param_1 + 0x264) = (bVar7 & 2) == 0;
    *(undefined1 *)((longlong)param_1 + 0x265) = 0;
    *(int *)((longlong)param_1 + 0x254) = *(int *)(param_3 + 0x150) * 2;
    uVar12 = *(int *)(param_3 + 0x150) + 1;
    *(uint *)(param_1 + 0x4b) = uVar12;
    fVar24 = logf((float)uVar12);
    iVar15 = (int)ROUND(-0.5 - (fVar24 / 0.6931472 + fVar24 / 0.6931472)) >> 1;
    *(int *)((longlong)param_1 + 0x25c) = -iVar15;
    *(int *)(param_1 + 0x4c) = (int)(0xffffffffL >> ((char)iVar15 + 0x20U & 0x3f));
    iVar15 = *(int *)(param_3 + 0x150);
    uVar21 = (ulonglong)iVar15;
    if ((longlong)uVar21 < 1) {
      bVar23 = false;
LAB_140724276:
      if (iVar15 < 0) {
        iVar15 = iVar15 * 2;
        goto LAB_14072457c;
      }
    }
    else {
      if (ABS(*(float *)(*(longlong *)(param_3 + 0x148) + 0x10)) <= 1e-08) {
        pfVar10 = (float *)(*(longlong *)(param_3 + 0x148) + 0x24);
        uVar18 = 0;
        do {
          uVar19 = uVar21;
          if (uVar21 - 1 == uVar18) break;
          fVar24 = *pfVar10;
          pfVar10 = pfVar10 + 5;
          uVar18 = uVar18 + 1;
          uVar19 = uVar18;
        } while (ABS(fVar24) <= 1e-08);
        bVar23 = uVar19 < uVar21;
        goto LAB_140724276;
      }
      bVar23 = true;
    }
    puVar1 = param_1 + 0x30;
    iVar15 = -1;
    plVar16 = local_148;
    do {
      iVar15 = iVar15 + 1;
      uVar18 = (longlong)iVar15 % (longlong)(int)uVar21 & 0xffffffff;
      lVar22 = *(longlong *)(param_3 + 0x148);
      fVar26 = *(float *)(lVar22 + uVar18 * 0x14);
      fVar28 = *(float *)(lVar22 + 4 + uVar18 * 0x14);
      fVar24 = *(float *)(lVar22 + 8 + uVar18 * 0x14);
      fVar25 = *(float *)(lVar22 + 0xc + uVar18 * 0x14);
      if ((ABS(fVar24) <= 0.0001) && (ABS(fVar25) <= 0.0001)) {
        fVar24 = fVar26 * fVar26 + fVar28 * fVar28;
        if (1e-08 < fVar24) {
          fVar25 = fVar28 * (1.0 / SQRT(fVar24));
        }
        else {
          fVar25 = 0.0;
        }
        fVar24 = (float)(-(uint)(1e-08 < fVar24) & (uint)((1.0 / SQRT(fVar24)) * fVar26));
      }
      if (bVar23) {
        fVar27 = *(float *)(lVar22 + uVar18 * 0x14 + 0x10);
      }
      else {
        fVar27 = (float)iVar15 / (float)(int)uVar21;
      }
      iVar20 = *(int *)(param_1 + 0x46);
      lVar22 = (longlong)iVar20;
      *(uint *)(param_1 + 0x46) = iVar20 + 1U;
      if (*(uint *)((longlong)param_1 + 0x234) < iVar20 + 1U) {
        FUN_1407248d2(plVar16,iVar20);
        plVar16 = local_148;
      }
      lVar5 = *plVar16;
      *(float *)(lVar5 + lVar22 * 0x14) = fVar26;
      *(float *)(lVar5 + 4 + lVar22 * 0x14) = fVar28;
      *(float *)(lVar5 + 8 + lVar22 * 0x14) = fVar24;
      *(float *)(lVar5 + 0xc + lVar22 * 0x14) = fVar25;
      *(float *)(lVar5 + 0x10 + lVar22 * 0x14) = fVar27;
      uVar12 = *(uint *)(param_3 + 0x150);
      uVar21 = (ulonglong)uVar12;
    } while (iVar15 < (int)uVar12);
    iVar15 = uVar12 * 2;
    if ((int)uVar12 < 0) {
LAB_14072457c:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (*(int *)((longlong)param_1 + 0x20c) < iVar15) {
      FUN_1417335d8(puVar1);
      uVar12 = *(uint *)(param_3 + 0x150);
    }
    if (0 < (int)uVar12) {
      iVar15 = 0;
      do {
        iVar20 = *(int *)(param_1 + 0x41);
        *(uint *)(param_1 + 0x41) = iVar20 + 1U;
        if (*(uint *)((longlong)param_1 + 0x20c) < iVar20 + 1U) {
          FUN_140724a48(puVar1,iVar20);
        }
        puVar11 = (undefined8 *)param_1[0x40];
        if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
          puVar11 = puVar1;
        }
        *(int *)((longlong)puVar11 + (longlong)iVar20 * 4) = iVar15;
        iVar20 = *(int *)(param_1 + 0x41);
        *(uint *)(param_1 + 0x41) = iVar20 + 1U;
        if (*(uint *)((longlong)param_1 + 0x20c) < iVar20 + 1U) {
          FUN_140724a48(puVar1,iVar20);
        }
        iVar15 = iVar15 + 1;
        puVar11 = (undefined8 *)param_1[0x40];
        if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
          puVar11 = puVar1;
        }
        *(int *)((longlong)puVar11 + (longlong)iVar20 * 4) = iVar15;
      } while (iVar15 < *(int *)(param_3 + 0x150));
    }
    goto LAB_14072380e;
  }
  iVar15 = *(int *)(param_3 + 0x13c);
  bVar7 = *(byte *)(param_3 + 0x13a);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(bool *)((longlong)param_1 + 0x264) = (bVar7 & 2) == 0;
  *(undefined1 *)((longlong)param_1 + 0x265) = 0;
  iVar20 = iVar15 * 2;
  *(int *)((longlong)param_1 + 0x254) = iVar20;
  uVar12 = iVar15 + 1;
  *(uint *)(param_1 + 0x4b) = uVar12;
  fVar24 = logf((float)uVar12);
  iVar13 = (int)ROUND(-0.5 - (fVar24 / 0.6931472 + fVar24 / 0.6931472)) >> 1;
  *(int *)((longlong)param_1 + 0x25c) = -iVar13;
  *(int *)(param_1 + 0x4c) = (int)(0xffffffffL >> ((char)iVar13 + 0x20U & 0x3f));
  if (iVar15 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  if (*(int *)((longlong)param_1 + 0x234) <= iVar15) {
    FUN_140724786(local_148,uVar12);
  }
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar20);
  }
  puVar1 = param_1 + 0x30;
  uVar8 = 0;
  plVar16 = local_148;
  do {
    iVar13 = *(int *)(param_1 + 0x46);
    lVar22 = (longlong)iVar13;
    *(uint *)(param_1 + 0x46) = iVar13 + 1U;
    if (*(uint *)((longlong)param_1 + 0x234) < iVar13 + 1U) {
      FUN_1407248d2(plVar16,iVar13);
      plVar16 = local_148;
    }
    lVar5 = *plVar16;
    *(float *)(lVar5 + lVar22 * 0x14) = (float)(int)uVar8 / (float)iVar15 + -0.5;
    *(undefined8 *)(lVar5 + 4 + lVar22 * 0x14) = 0;
    *(undefined4 *)(lVar5 + 0xc + lVar22 * 0x14) = 0x3f800000;
    *(float *)(lVar5 + 0x10 + lVar22 * 0x14) = (float)(int)uVar8 / (float)iVar15;
    uVar8 = uVar8 + 1;
  } while (uVar12 != uVar8);
  if (*(int *)((longlong)param_1 + 0x20c) < iVar20) {
    FUN_1417335d8(puVar1,iVar20);
  }
  if (iVar15 != 0) {
    iVar20 = 0;
    do {
      iVar13 = *(int *)(param_1 + 0x41);
      *(uint *)(param_1 + 0x41) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0x20c) < iVar13 + 1U) {
        FUN_140724a48(puVar1,iVar13);
      }
      puVar11 = (undefined8 *)param_1[0x40];
      if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
        puVar11 = puVar1;
      }
      *(int *)((longlong)puVar11 + (longlong)iVar13 * 4) = iVar20;
      iVar13 = *(int *)(param_1 + 0x41);
      *(uint *)(param_1 + 0x41) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0x20c) < iVar13 + 1U) {
        FUN_140724a48(puVar1,iVar13);
      }
      iVar20 = iVar20 + 1;
      puVar11 = (undefined8 *)param_1[0x40];
      if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
        puVar11 = puVar1;
      }
      *(int *)((longlong)puVar11 + (longlong)iVar13 * 4) = iVar20;
    } while (iVar15 != iVar20);
  }
LAB_14072380e:
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_3 + 0x158);
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)(param_3 + 0x160);
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_3 + 0x13a) >> 4 & 1;
  fVar24 = *(float *)(param_3 + 0x164);
  *(uint *)((longlong)param_1 + 0x274) =
       (~-(uint)(fVar24 < 1.0) & (uint)(fVar24 * 0.017453292) | -(uint)(fVar24 < 1.0) & 0x3c8efa35)
       & -(uint)(0.0 < fVar24) | ~-(uint)(0.0 < fVar24) & (uint)(fVar24 * 0.017453292);
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_3 + 0x13a) >> 5 & 1;
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140724786 FUN_140724786 body=332 status=ok
// SIG undefined FUN_140724786(void)

void FUN_140724786(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1407247f4;
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
LAB_1407247f4:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x14)) {
      uVar5 = uVar3 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x14,4);
  }
  return;
}



// FUNCTION 1407248d2 FUN_1407248d2 body=373 status=ok
// SIG undefined FUN_1407248d2(void)

void FUN_1407248d2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14072495b;
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
LAB_14072495b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 140724a48 FUN_140724a48 body=347 status=ok
// SIG undefined FUN_140724a48(void)

void FUN_140724a48(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x21) {
    uVar6 = 0x20;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x20 < *(uint *)(param_1 + 0x8c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140724ada;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140724ada:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar6;
  FUN_140724ba4(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 140724ba4 FUN_140724ba4 body=141 status=ok
// SIG undefined FUN_140724ba4(void)

void FUN_140724ba4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 140724c32 FUN_140724c32 body=85 status=ok
// SIG undefined FUN_140724c32(void)

undefined8 * FUN_140724c32(undefined8 *param_1,undefined8 param_2)

{
  FUN_140724c88();
  *param_1 = &PTR_FUN_14b40b600;
  param_1[0x1a] = param_2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 140724c88 FUN_140724c88 body=1464 status=ok
// SIG undefined FUN_140724c88(void)

undefined8 * FUN_140724c88(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_138 [40];
  undefined8 *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b3f6470;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_3 + 7);
  param_1[7] = *param_3;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_140725242(param_1 + 9,param_3 + 2);
  param_1[0x13] = param_3[0xc];
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar8 = param_1[6];
  plVar11 = *(longlong **)(lVar8 + 0x60);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x2a0))(plVar11,&local_f8,param_1);
    plVar11 = local_f0;
    if (param_1 + 0x16 != &local_f8) {
      param_1[0x16] = local_f8;
      local_f8 = 0;
      plVar15 = (longlong *)param_1[0x17];
      if (local_f0 != plVar15) {
        local_f0 = (longlong *)0x0;
        param_1[0x17] = plVar11;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar15 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
    }
    plVar11 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_f0 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    lVar8 = param_1[6];
  }
  if (*(byte *)(lVar8 + 0x68) - 2 < 2) {
    lVar9 = *(longlong *)(lVar8 + 0x80);
    if ((((lVar9 == 0) || (lVar10 = FUN_1407254de(), lVar10 == 0)) ||
        (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
         lVar10 + 0x30 || (lVar9 = *(longlong *)(lVar8 + 0x80), lVar9 == 0)))) goto LAB_140724df4;
    lVar10 = FUN_1407254de();
    if ((lVar10 == 0) ||
       ((*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
         lVar10 + 0x30)))) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x80);
    }
  }
  else if ((*(byte *)(lVar8 + 0x68) != 1) || (lVar8 = *(longlong *)(lVar8 + 0x70), lVar8 == 0))
  goto LAB_140724df4;
  lVar9 = *(longlong *)(lVar8 + 0x110);
  if (lVar9 == 0) {
    FUN_140aa6c08();
    lVar9 = *(longlong *)(lVar8 + 0x110);
    if (lVar9 == 0) goto LAB_140724df4;
  }
  if (*(char *)(param_2 + 0x88) == '\x01') {
    uVar4 = *(undefined8 *)(lVar9 + 0x10);
    plVar11 = (longlong *)param_1[7];
    FUN_14058b40c(plVar11,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_a8 = (longlong *)0x0;
    local_78 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_f8 = uVar4;
    local_f0 = plVar11;
    local_d0 = lVar9;
    lVar8 = FUN_1402710dd(&local_f8);
    if (local_b8 != 0) {
      plVar11 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar11 = local_98;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (lVar8 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    bVar6 = DAT_14c950c29;
    param_1[0x15] = lVar8;
    lVar10 = param_1[7];
    if ((lVar10 != 0) && ((bVar6 & 1) != 0)) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(lVar8 + 0x30) = lVar10;
    lVar8 = *(longlong *)(lVar9 + 0x10);
    plVar11 = param_1 + 0x18;
    do {
      if (lVar8 == 0) break;
      lVar9 = FUN_14043ab18();
      if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
         ((longlong)*(int *)(lVar8 + 0x268) != 0)) {
        plVar15 = *(longlong **)(lVar8 + 0x260);
        local_108 = plVar15 + *(int *)(lVar8 + 0x268);
        do {
          lVar9 = *plVar15;
          if (lVar9 != 0) {
            lVar10 = FUN_1407255c4();
            if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
               ((longlong)*(int *)(lVar9 + 0x30) != 0)) {
              puVar14 = *(undefined8 **)(lVar9 + 0x28);
              puVar13 = (undefined8 *)((longlong)*(int *)(lVar9 + 0x30) * 0x14 + (longlong)puVar14);
              local_110 = puVar13;
              local_100 = plVar11;
              do {
                plVar11 = local_100;
                lVar9 = param_1[0x15];
                iVar7 = *(int *)(param_1 + 0x19);
                *(uint *)(param_1 + 0x19) = iVar7 + 1U;
                if (*(uint *)((longlong)param_1 + 0xcc) < iVar7 + 1U) {
                  FUN_1407256aa(local_100,iVar7);
                  puVar13 = local_110;
                }
                lVar10 = *plVar11;
                lVar5 = (longlong)iVar7 * 0x1c;
                *(undefined8 *)(lVar10 + lVar5) = *puVar14;
                *(undefined1 *)(lVar10 + 8 + lVar5) = *(undefined1 *)(puVar14 + 1);
                puVar2 = (undefined8 *)(lVar10 + 0xc + lVar5);
                *puVar2 = 0;
                puVar2[1] = 0;
                if (lVar9 == 0) {
                  iVar7 = 0;
                }
                else {
                  uVar3 = *(uint *)(lVar9 + 0xc);
                  *(uint *)(lVar10 + lVar5 + 0xc) = uVar3;
                  if ((int)uVar3 < DAT_14c9647dc) {
                    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  iVar7 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar7 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar16 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar7;
                    if (bVar16) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                      puVar13 = local_110;
                    }
                    LOCK();
                    iVar7 = *(int *)(lVar9 + 0x10);
                    bVar16 = iVar7 == 0;
                    if (bVar16) {
                      *(int *)(lVar9 + 0x10) = iVar12;
                      iVar7 = 0;
                    }
                    UNLOCK();
                    if (bVar16) {
                      iVar7 = iVar12;
                    }
                  }
                }
                *(int *)(lVar10 + lVar5 + 0x10) = iVar7;
                *(undefined8 *)(lVar10 + lVar5 + 0x14) = *(undefined8 *)((longlong)puVar14 + 0xc);
                puVar14 = (undefined8 *)((longlong)puVar14 + 0x14);
                plVar11 = local_100;
              } while (puVar14 != puVar13);
            }
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != local_108);
      }
      lVar8 = *(longlong *)(lVar8 + 0x40);
    } while (lVar8 != 0);
    *(undefined8 **)(param_1[0x15] + 0x38) = param_1;
  }
  else {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar9);
    }
    param_1[0x15] = lVar9;
  }
LAB_140724df4:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140725242 FUN_140725242 body=154 status=ok
// SIG undefined FUN_140725242(void)

longlong FUN_140725242(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1407252ac;
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
LAB_1407252ac:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1407252dc(param_1,param_2);
  return param_1;
}



// FUNCTION 1407252dc FUN_1407252dc body=400 status=ok
// SIG undefined FUN_1407252dc(void)

longlong * FUN_1407252dc(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *_Dst;
  longlong lVar9;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140333f86(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          FUN_14072546c(lVar4 + 8 + lVar9,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0x30 + lVar9) = *(undefined8 *)(lVar3 + 0x30 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x38;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 14072546c FUN_14072546c body=113 status=ok
// SIG undefined FUN_14072546c(void)

undefined8 * FUN_14072546c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  _Dst = param_1;
  _Src = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_1 = _Dst;
    _Src = (undefined8 *)*param_2;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1407254de FUN_1407254de body=228 status=ok
// SIG undefined FUN_1407254de(void)

longlong FUN_1407254de(void)

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
  if (DAT_14cb68180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145908fe6;
    local_38 = &LAB_148742bec;
    local_40 = FUN_14185a8dc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickScript",&DAT_14cb68180,FUN_14651a708);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407255c4 FUN_1407255c4 body=228 status=ok
// SIG undefined FUN_1407255c4(void)

longlong FUN_1407255c4(void)

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
  if (DAT_14cb67f18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458628e6;
    local_38 = &LAB_14873fc33;
    local_40 = FUN_1408d565b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickNotifyDelegateBinding",&DAT_14cb67f18,&DAT_14873fc32)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67f18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407256aa FUN_1407256aa body=381 status=ok
// SIG undefined FUN_1407256aa(void)

void FUN_1407256aa(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140725737;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140725737:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 140725828 FUN_140725828 body=668 status=ok
// SIG undefined FUN_140725828(void)

void FUN_140725828(longlong param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  int *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2[0x1b] == 0) {
LAB_14072584b:
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(undefined1 *)(param_2 + 0xa6) = 2;
  uVar4 = param_2[0x15];
  if (param_2[0x17] != 0) {
    uVar4 = FUN_144a78877(uVar4);
  }
  uVar5 = param_2[0x18];
  if (param_2[0x1a] != 0) {
    uVar5 = FUN_144a78877(uVar5,param_2[0x1a]);
  }
  plVar1 = (longlong *)(param_1 + 0x528);
  uVar2 = param_2[0x1b];
  uVar9 = param_2[0x1d];
  if (uVar9 != 0) {
    uVar7 = uVar9 >> 0xd ^ uVar2 - uVar9;
    uVar2 = uVar7 << 8 ^ (-0x61c88647 - uVar9) - uVar7;
    uVar11 = uVar2 >> 0xd ^ (uVar9 - uVar7) - uVar2;
    uVar9 = uVar11 >> 0xc ^ (uVar7 - uVar2) - uVar11;
    uVar2 = uVar9 << 0x10 ^ (uVar2 - uVar11) - uVar9;
    uVar7 = uVar2 >> 5 ^ (uVar11 - uVar9) - uVar2;
    uVar9 = uVar7 >> 3 ^ (uVar9 - uVar2) - uVar7;
    uVar2 = uVar9 << 10 ^ (uVar2 - uVar7) - uVar9;
    uVar2 = uVar2 >> 0xf ^ uVar7 - (uVar9 + uVar2);
  }
  iVar3 = FUN_140ac163e(plVar1,uVar5 ^ uVar4 ^ uVar2);
  if (iVar3 != -1) {
    lVar12 = *plVar1 + (longlong)iVar3 * 0xb0;
    if ((lVar12 != 0) && ((longlong)iVar3 * 0xb0 + *plVar1 != -0x28)) {
      lVar6 = *(longlong *)(lVar12 + 0x40);
      iVar3 = *(int *)(lVar12 + 0x48);
      lVar8 = (longlong)iVar3;
      if (lVar8 != 0) {
        lVar10 = 0;
        do {
          if (*(int *)(lVar6 + lVar10) == *param_2) goto LAB_14072584b;
          lVar10 = lVar10 + 4;
        } while (lVar8 * 4 - lVar10 != 0);
      }
      *(uint *)(lVar12 + 0x48) = iVar3 + 1U;
      if (*(uint *)(lVar12 + 0x4c) < iVar3 + 1U) {
        FUN_14573f2d4((longlong *)(lVar12 + 0x40),iVar3);
        lVar6 = *(longlong *)(lVar12 + 0x40);
      }
      *(int *)(lVar6 + lVar8 * 4) = *param_2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  local_50 = param_2 + 0x15;
  FUN_14573f35a(plVar1,&local_44);
  plVar1 = (longlong *)(*plVar1 + 0x40 + (longlong)local_44 * 0xb0);
  iVar3 = (int)plVar1[1];
  *(uint *)(plVar1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar1 + 0xc) < iVar3 + 1U) {
    FUN_14573f2d4(plVar1,iVar3);
  }
  *(int *)(*plVar1 + (longlong)iVar3 * 4) = *param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 140725afe FUN_140725afe body=556 status=ok
// SIG undefined FUN_140725afe(void)

void FUN_140725afe(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((char)param_2[0xa6] == '\x05') {
    return;
  }
  *(byte *)(param_2 + 0xac) = (byte)param_2[0xac] & 0x7f | (param_3 != 0) << 7;
  if (param_3 == 0) {
LAB_140725b62:
    cVar2 = '\0';
  }
  else {
    uVar4 = FUN_140ef2452();
    plVar5 = (longlong *)FUN_144718840(param_3,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_140725b62;
    cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  iVar3 = FUN_140ac16d8();
  if ((cVar2 == '\0') && ((char)param_2[0xac] < '\0')) {
    if ((*(longlong *)(param_2 + 0x42) == 0) || (param_2[0x41] == 0)) {
LAB_140725bd4:
      bVar8 = false;
    }
    else {
      uVar1 = param_2[0x40];
      bVar8 = false;
      if ((-1 < (int)uVar1) && (bVar8 = false, (int)uVar1 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar6 == 0) || (*(uint *)(lVar6 + 0x10) != param_2[0x41])) goto LAB_140725bd4;
        bVar8 = (*(uint *)(lVar6 + 8) & 0x10200000) == 0;
      }
    }
    if ((iVar3 == 3) && (!bVar8)) {
      FUN_143d2c194(param_1,param_2);
      goto LAB_140725c63;
    }
  }
  if (cVar2 == '\x01' && iVar3 != 3) {
    if (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c)) {
      return;
    }
    lVar6 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x428);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & *param_2) * 4);
    if (iVar3 == -1) {
      return;
    }
    do {
      lVar7 = (longlong)iVar3 * 0x10;
      lVar6 = *(longlong *)(param_1 + 1000) + lVar7;
      if (*(uint *)(*(longlong *)(param_1 + 1000) + lVar7) == *param_2) {
        if ((undefined4 *)(lVar6 + 4) == (undefined4 *)0x0 || lVar6 == 0) {
          return;
        }
        FUN_140d82418(param_1,*(undefined4 *)(lVar6 + 4),CONCAT71((int7)((ulonglong)lVar7 >> 8),1),0
                     );
        return;
      }
      iVar3 = *(int *)(lVar6 + 8);
    } while (iVar3 != -1);
    return;
  }
LAB_140725c63:
  plVar5 = *(longlong **)(param_2 + 0x42);
  if ((((plVar5 != (longlong *)0x0) && (param_2[0x41] != 0)) &&
      (uVar1 = param_2[0x40], -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0)) &&
      ((*(uint *)(lVar6 + 0x10) == param_2[0x41] && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0))))))
  {
    (**(code **)(*plVar5 + 0x68))
              (plVar5,param_3,*(undefined8 *)(param_2 + 0x1e),param_2 + 0x24,
               *(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 140725d2a FUN_140725d2a body=161 status=ok
// SIG undefined FUN_140725d2a(void)

undefined8 FUN_140725d2a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_140ac163e(), iVar2 != -1)) {
    _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb0);
    lVar1 = *param_1 + (longlong)iVar2 * 0xb0;
    *(undefined4 *)(lVar1 + 0x98) = 0;
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    FUN_143d3382a(lVar1 + 0x50);
    if (*(longlong *)((longlong)_Dst + 0x40) != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0xa8);
    FUN_148840de0(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 140725dcc FUN_140725dcc body=322 status=ok
// SIG undefined FUN_140725dcc(void)

undefined8 * FUN_140725dcc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_20 = 0;
  local_38 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
  param_2[3] = puVar1[3];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  if (param_2 + 10 != &uStack_70) {
    *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)((longlong)param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0xd) = 0;
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x7c) = 0x80;
    uStack_44 = 0;
    *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  }
  local_68 = 0;
  uStack_3c = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  param_2[0x12] = 0;
  uStack_30 = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  local_28 = 0;
  FUN_143d3382a();
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140725f10 FUN_140725f10 body=124 status=ok
// SIG undefined FUN_140725f10(void)

void FUN_140725f10(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x14))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14480f766(*plVar2 + 0x2d0);
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 140725f8c FUN_140725f8c body=370 status=ok
// SIG undefined FUN_140725f8c(void)

undefined8 * FUN_140725f8c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14072610c FUN_14072610c body=994 status=ok
// SIG undefined FUN_14072610c(void)

undefined8 * FUN_14072610c(longlong param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  uint local_40;
  undefined8 *local_38;
  uint local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_1401144ce(param_3);
  if ((cVar3 != '\0') && (*(int *)(param_1 + 0x2c) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    piVar14 = (int *)&DAT_14c948618;
    piVar11 = (int *)&DAT_14c948620;
    if ((iVar1 != 0) && ((1 < *(int *)(param_3 + 0x14) && (iVar1 != DAT_14c948000)))) {
      piVar14 = (int *)(*(longlong *)(param_3 + 0x28) + 0xc);
      piVar11 = (int *)(*(longlong *)(param_3 + 0x28) + 0x14);
    }
    if ((*piVar14 == *(int *)(param_1 + 0x2c)) && (*piVar11 == *(int *)(param_1 + 0x34))) {
LAB_140726190:
      if (((iVar1 == 0) || (iVar2 = *(int *)(param_3 + 0x14), iVar2 == 0)) ||
         (iVar1 == DAT_14c948000)) {
LAB_140726487:
        local_40 = DAT_14c948620;
        puVar6 = DAT_14c948618;
      }
      else {
        pcVar5 = param_3 + 0x18;
        if (0 < *(int *)(param_3 + 0x34)) {
          pcVar5 = *(char **)(param_3 + 0x28);
        }
        if (1 < iVar2) {
          pcVar5 = *(char **)(param_3 + 0x28);
        }
        if ((iVar2 == 1) || (iVar2 < 3)) goto LAB_140726487;
        local_40 = *(uint *)(pcVar5 + 0x20);
        puVar6 = *(undefined8 **)(pcVar5 + 0x18);
      }
      local_48._0_4_ = (uint)puVar6;
      if (local_40 != 0) {
        uVar4 = local_40 >> 0xd ^ (uint)local_48 - local_40;
        uVar10 = uVar4 << 8 ^ (-0x61c88647 - local_40) - uVar4;
        uVar13 = uVar10 >> 0xd ^ (local_40 - uVar4) - uVar10;
        uVar9 = uVar13 >> 0xc ^ (uVar4 - uVar10) - uVar13;
        uVar4 = uVar9 << 0x10 ^ (uVar10 - uVar13) - uVar9;
        uVar10 = uVar4 >> 5 ^ (uVar13 - uVar9) - uVar4;
        uVar9 = uVar10 >> 3 ^ (uVar9 - uVar4) - uVar10;
        uVar4 = uVar9 << 10 ^ (uVar4 - uVar10) - uVar9;
        local_48._0_4_ = uVar4 >> 0xf ^ uVar10 - (uVar9 + uVar4);
      }
      uVar4 = (uint)local_48;
      local_48 = puVar6;
      uVar7 = FUN_140726908(param_1 + 0x78,uVar4,&local_48);
      if (((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_3 + 0x14), iVar1 == 0)) ||
         (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
LAB_14072649d:
        local_40 = DAT_14c948620;
        local_48 = DAT_14c948618;
      }
      else {
        pcVar5 = param_3 + 0x18;
        if (0 < *(int *)(param_3 + 0x34)) {
          pcVar5 = *(char **)(param_3 + 0x28);
        }
        if (1 < iVar1) {
          pcVar5 = *(char **)(param_3 + 0x28);
        }
        if ((iVar1 == 1) || (iVar1 < 4)) goto LAB_14072649d;
        local_40 = *(uint *)(pcVar5 + 0x2c);
        local_48 = *(undefined8 **)(pcVar5 + 0x24);
      }
      uVar12 = (ulonglong)local_48 & 0xffffffff;
      if (local_40 != 0) {
        uVar4 = FUN_144a78877(uVar12,local_40);
        uVar12 = (ulonglong)uVar4;
      }
      uVar7 = FUN_140726d02(uVar7,uVar12,&local_48);
      if (((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_3 + 0x14), iVar1 == 0)) ||
         (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
LAB_1407264b3:
        local_30 = DAT_14c948620;
        local_38 = DAT_14c948618;
      }
      else {
        pcVar5 = param_3 + 0x18;
        if (0 < *(int *)(param_3 + 0x34)) {
          pcVar5 = *(char **)(param_3 + 0x28);
        }
        if (1 < iVar1) {
          pcVar5 = *(char **)(param_3 + 0x28);
        }
        if ((iVar1 == 1) || (iVar1 < 5)) goto LAB_1407264b3;
        local_30 = *(uint *)(pcVar5 + 0x38);
        local_38 = *(undefined8 **)(pcVar5 + 0x30);
      }
      lVar8 = FUN_14072739f(&local_38,uVar7,&local_29);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1407266be(&local_48,param_4);
      FUN_1407264ef(lVar8 + 0x60,&local_48);
      if (((int)param_4[1] == 0) || (param_4 = (longlong *)*param_4, param_4 == (longlong *)0x0)) {
        *param_2 = 0;
      }
      else {
        (**(code **)(*param_4 + 0x38))(param_4,param_2);
      }
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_14072635a;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14072635a;
    }
    if (*param_3 == '\x01') {
      piVar14 = (int *)&DAT_14c948618;
      piVar11 = (int *)&DAT_14c948620;
      if (((iVar1 != 0) && (1 < *(int *)(param_3 + 0x14))) && (iVar1 != DAT_14c948000)) {
        piVar14 = (int *)(*(longlong *)(param_3 + 0x28) + 0xc);
        piVar11 = (int *)(*(longlong *)(param_3 + 0x28) + 0x14);
      }
      if ((*piVar14 == (int)DAT_14cb7bb98) && (*piVar11 == DAT_14cb7bba0)) goto LAB_140726190;
    }
  }
  *param_2 = 0;
LAB_14072635a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407264ef FUN_1407264ef body=450 status=ok
// SIG undefined FUN_1407264ef(void)

void FUN_1407264ef(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar4 != '\0')) {
    uVar8 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar8) {
      lVar11 = uVar8 * 0x10 + -8;
      do {
        if (((*(int *)(*param_1 + lVar11) == 0) ||
            (plVar1 = *(longlong **)(*param_1 + -8 + lVar11), plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x30))(), cVar4 == '\0')) {
          FUN_1410b6b64(param_1,(int)uVar8 + -1);
          FUN_1410b6ad6(param_1);
        }
        lVar11 = lVar11 + -0x10;
        bVar3 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar3);
    }
    if (((int)param_2[1] == 0) || (plVar1 = (longlong *)*param_2, plVar1 == (longlong *)0x0)) {
      local_58 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
    }
    lVar6 = local_58;
    lVar11 = param_1[1];
    iVar7 = 0;
    if ((longlong)(int)lVar11 != 0) {
      lVar2 = *param_1;
      lVar10 = 0;
      iVar9 = 0;
      do {
        if (*(int *)(lVar2 + 8 + lVar10) == 0) {
          lVar5 = 0;
        }
        else {
          plVar1 = *(longlong **)(lVar2 + lVar10);
          lVar5 = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
            lVar5 = local_50;
          }
        }
        if (lVar5 == lVar6) {
          iVar7 = (int)param_1[1];
          if (-1 < iVar9 && iVar9 < iVar7) goto LAB_1407265b2;
          goto LAB_140726577;
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar11 * 0x10 != lVar10);
      iVar7 = (int)param_1[1];
    }
LAB_140726577:
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_1407267fa(param_1,iVar7);
    }
    lVar11 = *param_1;
    lVar6 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar11 + lVar6) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar6) = 0;
    FUN_1407266be(lVar11 + lVar6,param_2);
  }
LAB_1407265b2:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407266be FUN_1407266be body=314 status=ok
// SIG undefined FUN_1407266be(void)

void FUN_1407266be(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14072674b;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140726724:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140726724;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14072674b;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14072674b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407267fa FUN_1407267fa body=269 status=ok
// SIG undefined FUN_1407267fa(void)

void FUN_1407267fa(longlong param_1,int param_2)

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



// FUNCTION 140726908 FUN_140726908 body=1017 status=ok
// SIG undefined FUN_140726908(void)

longlong FUN_140726908(longlong *param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = FUN_140502a60();
  if (iVar3 != -1) {
    if (*param_1 + (longlong)iVar3 * 0x70 != 0) {
      lVar6 = (longlong)iVar3 * 0x70 + *param_1;
      goto LAB_140726957;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar3 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar3) {
      FUN_140275bcc(param_1,iVar3);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar4 = iVar15 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar10 = iVar15 + 1;
    iVar14 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    if (iVar14 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar4 = iVar15;
        }
        else {
          uVar5 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar5) {
              uVar9 = uVar5;
            }
          }
          else {
            uVar9 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar5 <= iVar4) {
            iVar10 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar12,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar3;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar3 = (int)param_1[6];
    lVar6 = (longlong)iVar3;
    iVar15 = *(int *)(*param_1 + 4 + lVar6 * 0x70);
    *(int *)(param_1 + 6) = iVar15;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x70) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar15 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar15 = iVar3;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar15 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
  iVar15 = 1;
  _Src = (void *)(*param_1 + lVar6 * 0x70);
  local_88 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_80 = 0x8000000000;
  local_78 = 0xffffffff;
  puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar6 * 0x70);
  *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 1);
  puVar2[-2] = *param_3;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  if (puVar2 != &local_a8) {
    *(undefined4 *)((longlong)_Src + 0x20) = 0;
    *(undefined4 *)((longlong)_Src + 0x24) = 0;
    *(undefined4 *)((longlong)_Src + 0x28) = 0;
    *(undefined4 *)((longlong)_Src + 0x2c) = 0;
    uStack_80 = 0;
  }
  *(undefined4 *)((longlong)_Src + 0x48) = 0;
  *(undefined8 *)((longlong)_Src + 0x50) = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)_Src + 0x58) = 0;
  *(undefined1 *)((longlong)_Src + 0x60) = 0;
  uStack_60 = 0;
  FUN_14098fc46();
  *(undefined4 *)((longlong)_Src + 0x68) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar5 = 1;
LAB_140726b27:
    if (((int)uVar5 < 1) || (iVar15 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)_Src + 0x6c) = param_2;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x68) =
           *(undefined4 *)
            ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           iVar3;
    }
    else {
      *(int *)(param_1 + 9) = iVar15;
      FUN_140727d52(param_1);
    }
  }
  else {
    iVar4 = FUN_140502a60(param_1,param_2,_Src);
    if (iVar4 == -1) {
      uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (3 < uVar5) {
        uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar6 & 0x1f);
      }
      goto LAB_140726b27;
    }
    lVar6 = *param_1;
    lVar7 = (longlong)iVar4 * 0x70;
    *(undefined4 *)(lVar6 + 0x58 + lVar7) = 0;
    if (*(longlong *)(lVar6 + 0x50 + lVar7) != 0) {
      FUN_1400020a8();
    }
    FUN_14098fc46(lVar6 + lVar7 + 0x10);
    memmove((void *)(lVar6 + lVar7),_Src,0x68);
    FUN_1488574a6(param_1,iVar3);
  }
  lVar6 = *param_1 + (longlong)iVar3 * 0x70;
LAB_140726957:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar6 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140726d02 FUN_140726d02 body=1692 status=ok
// SIG undefined FUN_140726d02(void)

longlong FUN_140726d02(longlong *param_1,uint param_2,undefined8 *param_3)

{
  void *_Src;
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [40];
  uint *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = FUN_144a24328();
  if (iVar3 != -1) {
    if (*param_1 + (longlong)iVar3 * 0x68 != 0) {
      lVar5 = (longlong)iVar3 * 0x68 + *param_1;
      goto LAB_140726d51;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar17 = *(uint *)(param_1 + 1);
    uVar18 = (ulonglong)uVar17;
    *(uint *)(param_1 + 1) = uVar17 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar17) {
      FUN_1406a7630(param_1,uVar17);
    }
    iVar3 = (int)param_1[5];
    if (iVar3 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar19 = iVar3 + 1;
    iVar8 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar8 = iVar3;
    }
    if (iVar8 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar19;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar3) {
        if (iVar3 + 0x20U < 0xa0) {
          iVar19 = 0x80;
          iVar4 = iVar3;
        }
        else {
          uVar16 = iVar3 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar16) {
              uVar10 = uVar16;
            }
          }
          else {
            uVar10 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar20 = FUN_144a3809e(uVar10 << 2,0);
          iVar4 = (int)(uVar20 >> 2);
          iVar19 = -0x20;
          if ((int)uVar16 <= iVar4) {
            iVar19 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar19;
        FUN_1446efbd8(plVar12,iVar4);
        iVar19 = (int)param_1[5] + 1;
      }
      iVar4 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar4 = iVar19;
      }
      *(int *)(param_1 + 5) = iVar19;
      if (iVar19 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar12;
        }
        bVar7 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)(int)uVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar3 & 0x1f;
    puVar11 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
    *puVar11 = *puVar11 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    uVar18 = (ulonglong)*(uint *)(param_1 + 6);
    lVar5 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar3 = *(int *)(*param_1 + 4 + lVar5 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
    }
  }
  iVar3 = (int)uVar18;
  local_b0 = (uint *)(param_1 + 2);
  uVar17 = 1;
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = local_b0;
  }
  iVar4 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  puVar11[iVar4 >> 5] = puVar11[iVar4 >> 5] | 1 << ((byte)uVar18 & 0x1f);
  _Src = (void *)(*param_1 + lVar5 * 0x68);
  local_78 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar5 * 0x68);
  *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 1);
  puVar2[-2] = *param_3;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  if (puVar2 != &local_98) {
    *(undefined4 *)((longlong)_Src + 0x20) = 0;
    *(undefined4 *)((longlong)_Src + 0x24) = 0;
    *(undefined4 *)((longlong)_Src + 0x28) = 0;
    *(undefined4 *)((longlong)_Src + 0x2c) = 0;
    uStack_70 = 0;
  }
  *(undefined4 *)((longlong)_Src + 0x48) = 0;
  *(undefined8 *)((longlong)_Src + 0x50) = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)_Src + 0x58) = 0;
  uStack_50 = 0;
  FUN_14098fe9e();
  *(undefined4 *)((longlong)_Src + 0x60) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_a8 = uVar18;
  if (uVar16 == 1) {
LAB_140726efc:
    if (((int)uVar16 < 1) || ((int)uVar17 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)_Src + 100) = param_2;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x60) =
           *(undefined4 *)
            ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           iVar3;
    }
    else {
      *(uint *)(param_1 + 9) = uVar17;
      plVar12 = param_1 + 8;
      if (param_1[8] != 0) {
        FUN_1446efa72(plVar12,0,0,4);
        uVar17 = *(uint *)(param_1 + 9);
      }
      plVar14 = param_1 + 7;
      if (uVar17 == 1) {
        if (*plVar12 != 0) {
          FUN_1446efa72(plVar12,0,0,4);
        }
LAB_140726f38:
        uVar16 = 0;
        do {
          plVar12 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar12 = plVar14;
          }
          *(undefined4 *)
           ((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar16) * 4) =
               0xffffffff;
          uVar16 = uVar16 + 1;
        } while (uVar17 != uVar16);
      }
      else {
        if (uVar17 == 0) goto LAB_1407270e3;
        FUN_1446efa72(plVar12,0,uVar17,4);
        if (0 < (int)uVar17) goto LAB_140726f38;
      }
      iVar3 = (int)param_1[5];
      if (iVar3 == 0) {
        uVar20 = 0;
        uVar18 = 1;
        iVar4 = 0;
        iVar19 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = local_b0;
        }
        uVar17 = *puVar11;
        if (uVar17 == 0) {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          uVar20 = 0;
          uVar18 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar18 = uVar20;
          }
          iVar19 = 0;
          do {
            if (uVar18 == uVar20) goto LAB_1407270e3;
            iVar19 = iVar19 + 0x20;
            uVar17 = puVar11[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar20 = 0;
          iVar19 = 0;
        }
        uVar18 = (ulonglong)(-uVar17 & uVar17);
        uVar6 = uVar18 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar4 = (iVar19 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
      if (iVar4 < iVar3) {
        uVar17 = 0xffffffff;
        puVar11 = local_b0;
        do {
          piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x68);
          iVar3 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x68);
          if (iVar3 == 0) {
            iVar3 = *piVar1;
          }
          else {
            local_a0 = plVar14;
            iVar3 = FUN_144a78877(*piVar1,iVar3);
            puVar11 = local_b0;
            plVar14 = local_a0;
          }
          uVar6 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
          iVar3 = (int)uVar6;
          piVar1[0x19] = iVar3;
          plVar12 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar12 = plVar14;
          }
          piVar1[0x18] = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
          plVar12 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar12 = plVar14;
          }
          *(int *)((longlong)plVar12 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) =
               iVar4;
          uVar17 = uVar17 & ~(uint)uVar18;
          puVar13 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar13 = puVar11;
          }
          iVar3 = (int)param_1[5];
          iVar4 = (int)uVar20;
          lVar5 = (longlong)iVar4;
          uVar16 = puVar13[lVar5] & uVar17;
          if (uVar16 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar9 = iVar8;
            if (iVar8 < iVar4) {
              iVar9 = iVar4;
            }
            if (iVar8 <= iVar4) break;
            lVar15 = 0;
            while( true ) {
              iVar19 = iVar19 + 0x20;
              uVar16 = puVar13[lVar5 + lVar15 + 1];
              if (uVar16 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar9 - lVar5 == lVar15) goto LAB_1407270e3;
            }
            uVar20 = (ulonglong)(iVar4 + (int)lVar15 + 1);
            uVar17 = 0xffffffff;
          }
          uVar18 = (ulonglong)(-uVar16 & uVar16);
          uVar6 = uVar18 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar4 = (iVar19 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        } while (iVar4 < iVar3);
      }
    }
  }
  else {
    iVar4 = FUN_144a24328(param_1,param_2,_Src);
    if (iVar4 == -1) {
      if (3 < uVar16) {
        uVar18 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
        lVar5 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar5 & 0x1f);
      }
      goto LAB_140726efc;
    }
    lVar5 = *param_1;
    lVar15 = (longlong)iVar4 * 0x68;
    *(undefined4 *)(lVar5 + 0x58 + lVar15) = 0;
    if (*(longlong *)(lVar5 + 0x50 + lVar15) != 0) {
      FUN_1400020a8();
    }
    FUN_14098fe9e(lVar5 + lVar15 + 0x10);
    memmove((void *)(lVar5 + lVar15),_Src,0x60);
    FUN_14885751a(param_1,local_a8);
  }
LAB_1407270e3:
  lVar5 = *param_1 + (longlong)(int)local_a8 * 0x68;
LAB_140726d51:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5 + 0x10;
}



// FUNCTION 14072739f FUN_14072739f body=2006 status=ok
// SIG undefined FUN_14072739f(void)

longlong FUN_14072739f(uint *param_1,longlong *param_2,undefined1 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  void *_Src;
  
  *param_3 = 0;
  uVar3 = *param_1;
  uVar10 = param_1[2];
  if (uVar10 != 0) {
    uVar3 = uVar10 >> 0xd ^ uVar3 - uVar10;
    uVar13 = uVar3 << 8 ^ (-0x61c88647 - uVar10) - uVar3;
    uVar18 = uVar13 >> 0xd ^ (uVar10 - uVar3) - uVar13;
    uVar10 = uVar18 >> 0xc ^ (uVar3 - uVar13) - uVar18;
    uVar3 = uVar10 << 0x10 ^ (uVar13 - uVar18) - uVar10;
    uVar13 = uVar3 >> 5 ^ (uVar18 - uVar10) - uVar3;
    uVar10 = uVar13 >> 3 ^ (uVar10 - uVar3) - uVar13;
    uVar3 = uVar10 << 10 ^ (uVar3 - uVar13) - uVar10;
    uVar3 = uVar3 >> 0xf ^ uVar13 - (uVar10 + uVar3);
  }
  iVar4 = FUN_140727b76(param_2,uVar3,param_1);
  lVar22 = *param_2;
  lVar7 = 0;
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0xa8 + lVar22;
  }
  if (lVar7 != 0) goto LAB_14072746f;
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) == iVar4) {
      FUN_140727bdc(param_2,iVar4);
    }
    iVar6 = (int)param_2[5];
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
    plVar15 = param_2 + 2;
    iVar11 = iVar6 + 1;
    iVar19 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar19 = iVar6;
    }
    if (iVar19 >> 5 == iVar5) {
      *(int *)(param_2 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_2 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar3 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar3) {
              uVar10 = uVar3;
            }
          }
          else {
            uVar10 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar10 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar11 = -0x20;
          if ((int)uVar3 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_2[5];
        }
        *(int *)((longlong)param_2 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar15,iVar5);
        iVar11 = (int)param_2[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_2 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar14 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar14 = plVar15;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar4;
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_2[4];
    }
    bVar9 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar4 = (int)param_2[6];
    lVar7 = (longlong)iVar4;
    iVar6 = *(int *)(lVar22 + 4 + lVar7 * 0xa8);
    *(int *)(param_2 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
    *(int *)((longlong)param_2 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar22 + (longlong)iVar6 * 0xa8) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_2 + 2);
  uVar3 = 1;
  puVar12 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar6 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  puVar12[iVar6 >> 5] = puVar12[iVar6 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  lVar22 = *param_2;
  lVar7 = lVar7 * 0xa8;
  *(uint *)(lVar22 + 8 + lVar7) = param_1[2];
  *(undefined8 *)(lVar22 + lVar7) = *(undefined8 *)param_1;
  *(uint *)(lVar22 + 0x18 + lVar7) = param_1[2];
  *(undefined8 *)(lVar22 + 0x10 + lVar7) = *(undefined8 *)param_1;
  *(undefined4 *)(lVar22 + 0x1c + lVar7) = 0;
  *(undefined8 *)(lVar22 + 0x30 + lVar7) = 0;
  *(undefined8 *)(lVar22 + 0x38 + lVar7) = 0x200000000;
  puVar2 = (undefined8 *)(lVar22 + 0x40 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar22 + 0x50 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar22 + 0x60 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar22 + 0x70 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar22 + 0x80 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar22 + 0x90 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar22 + 0xa0 + lVar7) = 0xffffffff;
  uVar10 = *(uint *)(lVar22 + lVar7);
  uVar13 = *(uint *)(lVar22 + 8 + lVar7);
  if (uVar13 != 0) {
    uVar10 = uVar13 >> 0xd ^ uVar10 - uVar13;
    uVar18 = uVar10 << 8 ^ (-0x61c88647 - uVar13) - uVar10;
    uVar21 = uVar18 >> 0xd ^ (uVar13 - uVar10) - uVar18;
    uVar13 = uVar21 >> 0xc ^ (uVar10 - uVar18) - uVar21;
    uVar10 = uVar13 << 0x10 ^ (uVar18 - uVar21) - uVar13;
    uVar18 = uVar10 >> 5 ^ (uVar21 - uVar13) - uVar10;
    uVar13 = uVar18 >> 3 ^ (uVar13 - uVar10) - uVar18;
    uVar10 = uVar13 << 10 ^ (uVar10 - uVar18) - uVar13;
    uVar10 = uVar10 >> 0xf ^ uVar18 - (uVar13 + uVar10);
  }
  _Src = (void *)(lVar22 + lVar7);
  uVar13 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (uVar13 == 1) {
LAB_140727699:
    if (((int)uVar13 < 1) || ((int)uVar3 <= (int)param_2[9])) {
      uVar10 = (int)param_2[9] - 1U & uVar10;
      *(uint *)((longlong)_Src + 0xa4) = uVar10;
      plVar15 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar15 = param_2 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0xa0) =
           *(undefined4 *)
            ((longlong)plVar15 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar10) * 4);
      plVar15 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar15 = param_2 + 7;
      }
      *(int *)((longlong)plVar15 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar10) * 4) =
           iVar4;
    }
    else {
      *(uint *)(param_2 + 9) = uVar3;
      plVar15 = param_2 + 8;
      if (param_2[8] != 0) {
        FUN_1446efa72(plVar15,0,0);
        uVar3 = *(uint *)(param_2 + 9);
      }
      plVar14 = param_2 + 7;
      if (uVar3 == 1) {
        if (*plVar15 != 0) {
          FUN_1446efa72(plVar15,0,0);
        }
LAB_140727790:
        uVar10 = 0;
        do {
          plVar15 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar15 = plVar14;
          }
          *(undefined4 *)
           ((longlong)plVar15 + (ulonglong)((int)param_2[9] + 0x7fffffffU & uVar10) * 4) =
               0xffffffff;
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
      }
      else {
        if (uVar3 == 0) goto LAB_1407276f3;
        FUN_1446efa72(plVar15,0,uVar3);
        if (0 < (int)uVar3) goto LAB_140727790;
      }
      iVar6 = (int)param_2[5];
      if (iVar6 == 0) {
        uVar8 = 0;
        uVar16 = 1;
        iVar5 = 0;
        iVar11 = 0;
      }
      else {
        puVar12 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar3 = *puVar12;
        if (uVar3 == 0) {
          iVar5 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar5 = iVar6 + -1;
          }
          uVar8 = 0;
          uVar16 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar16 = uVar8;
          }
          iVar11 = 0;
          do {
            if (uVar16 == uVar8) goto LAB_1407276f3;
            iVar11 = iVar11 + 0x20;
            uVar3 = puVar12[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar8 = 0;
          iVar11 = 0;
        }
        uVar16 = (ulonglong)(-uVar3 & uVar3);
        uVar17 = uVar16 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar5) {
          iVar5 = iVar6;
        }
      }
      if (iVar5 < iVar6) {
        uVar3 = 0xffffffff;
        do {
          lVar22 = *param_2;
          lVar7 = (longlong)iVar5 * 0xa8;
          uVar10 = *(uint *)(lVar22 + lVar7);
          uVar13 = *(uint *)(lVar22 + 8 + lVar7);
          if (uVar13 != 0) {
            uVar18 = uVar13 >> 0xd ^ uVar10 - uVar13;
            uVar10 = uVar18 << 8 ^ (-0x61c88647 - uVar13) - uVar18;
            uVar13 = uVar10 >> 0xd ^ (uVar13 - uVar18) - uVar10;
            uVar18 = uVar13 >> 0xc ^ (uVar18 - uVar10) - uVar13;
            uVar10 = uVar18 << 0x10 ^ (uVar10 - uVar13) - uVar18;
            uVar13 = uVar10 >> 5 ^ (uVar13 - uVar18) - uVar10;
            uVar18 = uVar13 >> 3 ^ (uVar18 - uVar10) - uVar13;
            uVar10 = uVar18 << 10 ^ (uVar10 - uVar13) - uVar18;
            uVar10 = uVar10 >> 0xf ^ uVar13 - (uVar18 + uVar10);
          }
          uVar17 = (longlong)(int)uVar10 & (longlong)(int)param_2[9] - 1U;
          iVar6 = (int)uVar17;
          *(int *)(lVar22 + lVar7 + 0xa4) = iVar6;
          plVar15 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar15 = plVar14;
          }
          *(undefined4 *)(lVar22 + lVar7 + 0xa0) =
               *(undefined4 *)((longlong)plVar15 + ((longlong)(int)param_2[9] - 1U & uVar17) * 4);
          plVar15 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar15 = plVar14;
          }
          *(int *)((longlong)plVar15 + ((longlong)iVar6 & (longlong)(int)param_2[9] - 1U) * 4) =
               iVar5;
          uVar3 = uVar3 & ~(uint)uVar16;
          puVar12 = (uint *)param_2[4];
          if ((uint *)param_2[4] == (uint *)0x0) {
            puVar12 = puVar1;
          }
          iVar6 = (int)param_2[5];
          iVar5 = (int)uVar8;
          lVar22 = (longlong)iVar5;
          uVar10 = puVar12[lVar22] & uVar3;
          if (uVar10 == 0) {
            iVar19 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar19 = iVar6 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar20 = iVar19;
            if (iVar19 < iVar5) {
              iVar20 = iVar5;
            }
            if (iVar19 <= iVar5) break;
            lVar7 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar10 = puVar12[lVar22 + lVar7 + 1];
              if (uVar10 != 0) break;
              lVar7 = lVar7 + 1;
              if (iVar20 - lVar22 == lVar7) goto LAB_1407276f3;
            }
            uVar8 = (ulonglong)(iVar5 + (int)lVar7 + 1);
            uVar3 = 0xffffffff;
          }
          uVar16 = (ulonglong)(-uVar10 & uVar10);
          uVar17 = uVar16 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar5 = (iVar11 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        } while (iVar5 < iVar6);
      }
    }
  }
  else {
    iVar6 = FUN_140727b76(param_2,uVar10,_Src);
    if (iVar6 == -1) {
      if (3 < uVar13) {
        uVar8 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
        lVar22 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar3 = 1 << ((byte)lVar22 & 0x1f);
      }
      goto LAB_140727699;
    }
    lVar22 = *param_2;
    FUN_1409900d4((longlong)iVar6 * 0xa8 + lVar22 + 0x10);
    memmove((void *)(lVar22 + (longlong)iVar6 * 0xa8),_Src,0xa0);
    FUN_1488576b8(param_2,iVar4);
    iVar4 = iVar6;
  }
LAB_1407276f3:
  lVar7 = *param_2 + (longlong)iVar4 * 0xa8;
  *param_3 = 1;
LAB_14072746f:
  return lVar7 + 0x10;
}



// FUNCTION 140727b76 FUN_140727b76 body=101 status=ok
// SIG undefined FUN_140727b76(void)

int FUN_140727b76(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0xa8;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0xa0 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140727bdc FUN_140727bdc body=372 status=ok
// SIG undefined FUN_140727bdc(void)

void FUN_140727bdc(longlong param_1,int param_2)

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
  uVar7 = lVar6 * 0xa8;
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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140727c64;
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
LAB_140727c64:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0xa8,8);
  return;
}



// FUNCTION 140727d52 FUN_140727d52 body=722 status=ok
// SIG undefined FUN_140727d52(void)

void FUN_140727d52(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5);
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar5 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x70;
        uVar3 = *(uint *)(lVar13 + lVar12);
        uVar14 = *(uint *)(lVar13 + 8 + lVar12);
        if (uVar14 != 0) {
          uVar16 = uVar14 >> 0xd ^ uVar3 - uVar14;
          uVar3 = uVar16 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
          uVar14 = uVar3 >> 0xd ^ (uVar14 - uVar16) - uVar3;
          uVar15 = uVar14 >> 0xc ^ (uVar16 - uVar3) - uVar14;
          uVar3 = uVar15 << 0x10 ^ (uVar3 - uVar14) - uVar15;
          uVar16 = uVar3 >> 5 ^ (uVar14 - uVar15) - uVar3;
          uVar14 = uVar16 >> 3 ^ (uVar15 - uVar3) - uVar16;
          uVar3 = uVar14 << 10 ^ (uVar3 - uVar16) - uVar14;
          uVar3 = uVar3 >> 0xf ^ uVar16 - (uVar14 + uVar3);
        }
        uVar9 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar13 + lVar12 + 0x6c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + lVar12 + 0x68) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = uVar5 & ~(uint)uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar8 = (int)local_60[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar6 = iVar8 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_140727ffd;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar9 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar8);
    }
  }
LAB_140727ffd:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140728026 FUN_140728026 body=24 status=ok
// SIG undefined FUN_140728026(void)

void FUN_140728026(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014072803a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14072803e FUN_14072803e body=38 status=ok
// SIG undefined FUN_14072803e(void)

undefined8 FUN_14072803e(undefined8 param_1,int param_2)

{
  FUN_140728064();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140728064 FUN_140728064 body=151 status=ok
// SIG undefined FUN_140728064(void)

void FUN_140728064(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f0e020;
  plVar3 = (longlong *)param_1[0xd];
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
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001407280d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407280fc FUN_1407280fc body=31 status=ok
// SIG undefined FUN_1407280fc(void)

void FUN_1407280fc(longlong *param_1)

{
  FUN_14072811c();
                    /* WARNING: Could not recover jumptable at 0x000140728114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x380))(param_1);
  return;
}



// FUNCTION 14072811c FUN_14072811c body=202 status=ok
// SIG undefined FUN_14072811c(void)

void FUN_14072811c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1407281e8(param_1,&local_68);
  lVar1 = local_68;
  if ((longlong)local_60 != 0) {
    lVar2 = 0;
    do {
      local_70 = *(longlong *)(lVar1 + lVar2);
      local_58 = local_70 + 0x18;
      local_50 = &local_70;
      FUN_140728450(param_1 + 0x438,local_44,&local_58,0);
      lVar2 = lVar2 + 8;
    } while ((longlong)local_60 * 8 != lVar2);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407281e8 FUN_1407281e8 body=203 status=ok
// SIG undefined FUN_1407281e8(void)

longlong * FUN_1407281e8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)FUN_140721bac(*(undefined8 *)(param_1 + 0x10));
  if (plVar5 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    iVar4 = (int)plVar5[1];
    if (0 < iVar4) {
      iVar7 = 0;
      iVar8 = -1;
      do {
        lVar2 = *(longlong *)(*plVar5 + (longlong)(iVar4 + iVar8) * 8);
        if (lVar2 != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x70);
          lVar6 = FUN_1407282b4();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar4 = *(int *)(lVar2 + 0x44);
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1407282ee(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = iVar4 + param_1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = (int)plVar5[1];
        iVar8 = iVar8 + -1;
      } while (iVar7 < iVar4);
    }
  }
  return param_2;
}



// FUNCTION 1407282b4 FUN_1407282b4 body=57 status=ok
// SIG undefined FUN_1407282b4(void)

void FUN_1407282b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a45c0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a45c0 = FUN_140002ddd(FUN_1462a7e7e,uVar1,L"GbxAnimNode_Insertion");
  }
  return;
}



// FUNCTION 1407282ee FUN_1407282ee body=353 status=ok
// SIG undefined FUN_1407282ee(void)

void FUN_1407282ee(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140728373;
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
LAB_140728373:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140728450 FUN_140728450 body=1561 status=ok
// SIG undefined FUN_140728450(void)

int * FUN_140728450(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_14482b872(param_1,iVar18);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar11 = iVar21 + 1;
    iVar14 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar14 = iVar21;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar21;
        }
        else {
          uVar23 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar23) {
              uVar20 = uVar23;
            }
          }
          else {
            uVar20 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar20 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar11 = -0x20;
          if ((int)uVar23 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar16,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar16;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar7 = (longlong)iVar18;
    iVar21 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar21;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar21 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar21 = iVar18;
  }
  puVar12[iVar21 >> 5] = puVar12[iVar21 >> 5] | 1 << ((byte)iVar18 & 0x1f);
  plVar16 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar13 = (longlong *)param_3[1];
  lVar7 = *(longlong *)*param_3;
  *plVar16 = lVar7;
  plVar16[1] = *plVar13;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  uVar23 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar20 = (uint)lVar7 & 0xffff;
  uVar23 = ((uint)lVar7 << 0x10 | uVar20) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar20 >> 4);
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) ||
     ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34))) {
LAB_14072858f:
    cVar9 = '\0';
  }
  else {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
    if (iVar21 == -1) goto LAB_14072858f;
    do {
      plVar13 = (longlong *)(*param_1 + (longlong)iVar21 * 0x18);
      if (*plVar13 == lVar7) {
        uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
        lVar7 = plVar16[1];
        uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
        *(int *)plVar13 = (int)*plVar16;
        *(undefined4 *)((longlong)plVar13 + 4) = uVar3;
        *(int *)(plVar13 + 1) = (int)lVar7;
        *(undefined4 *)((longlong)plVar13 + 0xc) = uVar4;
        FUN_1470d9f46(param_1,iVar18);
        cVar9 = '\x01';
        iVar18 = iVar21;
        break;
      }
      iVar21 = (int)plVar13[2];
      cVar9 = '\0';
    } while (iVar21 != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar9;
  }
  if (cVar9 != '\0') goto LAB_1407288c8;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar20 = 1;
  if (3 < uVar6) {
    uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar20 <= (int)param_1[9])) {
    uVar23 = (int)param_1[9] - 1U & uVar23;
    *(uint *)((longlong)plVar16 + 0x14) = uVar23;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
         iVar18;
    goto LAB_1407288c8;
  }
  *(uint *)(param_1 + 9) = uVar20;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar20 = *(uint *)(param_1 + 9);
  }
  plVar13 = param_1 + 7;
  if (uVar20 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_1407285f2:
    uVar23 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar23) * 4) =
           0xffffffff;
      uVar23 = uVar23 + 1;
    } while (uVar20 != uVar23);
  }
  else {
    if (uVar20 == 0) goto LAB_1407288c8;
    FUN_1446efa72(plVar16,0,uVar20,4);
    if (0 < (int)uVar20) goto LAB_1407285f2;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar8 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar23 = *puVar12;
    if (uVar23 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar8 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar8;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar8) goto LAB_1407288c8;
        iVar11 = iVar11 + 0x20;
        uVar23 = puVar12[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar8 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar23 & uVar23);
    uVar22 = uVar17 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 < iVar21) {
    uVar23 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar19 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar7 + lVar19 * 0x18);
      uVar20 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar6 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar6 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar7 + 0x14 + lVar19 * 0x18) = iVar21;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar19 * 0x18) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar23 = ~(uint)uVar17 & uVar23;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar5 = (int)uVar8;
      lVar7 = (longlong)iVar5;
      uVar20 = puVar12[lVar7] & uVar23;
      if (uVar20 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar19 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar20 = puVar12[lVar7 + lVar19 + 1];
          if (uVar20 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar15 - lVar7 == lVar19) goto LAB_1407288c8;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar19 + 1);
        uVar23 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar20 & uVar20);
      uVar22 = uVar17 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar21);
  }
LAB_1407288c8:
  *param_2 = iVar18;
  return param_2;
}



// FUNCTION 140728a6a FUN_140728a6a body=306 status=ok
// SIG undefined FUN_140728a6a(void)

undefined4 *
FUN_140728a6a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140728c36(param_1,local_50);
  puVar2 = (ushort *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_48 = uVar1;
  local_48[1] = *puVar2;
  local_48[2] = 0xffff;
  local_48[3] = 0xffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_140728b9e(param_1,uVar1,local_48);
  if (cVar3 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_48 + 4) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140728e20(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140728b9e FUN_140728b9e body=151 status=ok
// SIG undefined FUN_140728b9e(void)

void FUN_140728b9e(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  short *psVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar4 * 0xc);
        if (*psVar1 == *param_3) {
          *(undefined4 *)psVar1 = *(undefined4 *)param_3;
          FUN_140831b34(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(psVar1 + 2);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140728c08;
    }
  }
  uVar2 = 0;
LAB_140728c08:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140728c36 FUN_140728c36 body=489 status=ok
// SIG undefined FUN_140728c36(void)

int * FUN_140728c36(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 140728e20 FUN_140728e20 body=624 status=ok
// SIG undefined FUN_140728e20(void)

void FUN_140728e20(longlong *param_1)

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
  longlong lVar14;
  int iVar15;
  
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
    if ((int)uVar9 < 1) goto LAB_140728e82;
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
LAB_140728e82:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
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
    iVar15 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar15) {
      iVar15 = iVar3;
    }
  }
  if (iVar15 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar15;
      uVar4 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar8 + lVar14 * 0xc);
      *(uint *)(lVar8 + 8 + lVar14 * 0xc) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 4 + lVar14 * 0xc) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar15;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar15 = (int)uVar5;
      lVar8 = (longlong)iVar15;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar10 <= iVar15) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar14 + 1];
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar15 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar15 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar3);
  }
  return;
}



// FUNCTION 1407290aa FUN_1407290aa body=192 status=ok
// SIG undefined FUN_1407290aa(void)

void FUN_1407290aa(longlong param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    dVar4 = (*(double *)(param_1 + 0x3c0) - *(double *)(lVar3 + 0x6d0)) +
            *(double *)(param_1 + 0x3d8);
    *(double *)(param_1 + 0x3d8) = dVar4;
    uVar2 = *(int *)(param_1 + 0x3e0) + 1;
    *(uint *)(param_1 + 0x3e0) = uVar2;
    if (0xfa < uVar2) {
      dVar4 = dVar4 / (double)uVar2;
      *(double *)(param_1 + 0x3d8) = dVar4;
      *(undefined4 *)(param_1 + 0x3e0) = 1;
      uVar2 = 1;
    }
    fVar1 = *(float *)(param_1 + 0x3c8);
    dVar5 = (dVar4 / (double)(int)uVar2 - (double)fVar1) * 0.5 + (double)fVar1;
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      dVar5 = dVar4 / (double)(int)uVar2;
    }
    *(float *)(param_1 + 0x3c8) = (float)dVar5;
  }
  return;
}



// FUNCTION 14072916a FUN_14072916a body=1152 status=ok
// SIG undefined FUN_14072916a(void)

void FUN_14072916a(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x658);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_140729538;
    if (lVar5 == 0) goto LAB_1407293a9;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140729538:
    FUN_1456cec3c(lVar5);
  }
  if (DAT_14cb06da8 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1464003b0;
    local_68 = &LAB_147d17bdf;
    local_70 = &LAB_1417edf22;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) {
LAB_1407293a9:
    if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_98 = local_98 & 0xffffff00;
  FUN_140729f52(param_1,param_1 + 0xd50,param_1 + 0xd60,param_2);
  plVar9 = *(longlong **)(param_1 + 0x658);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) != 0) goto LAB_1407295d3;
    if (plVar9 != (longlong *)0x0) goto LAB_14072921d;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1407295d3:
      FUN_1456cec3c(plVar9);
    }
LAB_14072921d:
    if (DAT_14cb06da8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = &LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
        DAT_14cb06da8 + 0x30)) goto LAB_140729250;
  }
  plVar9 = (longlong *)0x0;
LAB_140729250:
  lVar5 = (**(code **)(*plVar9 + 0x310))(plVar9);
  puVar1 = (undefined8 *)(param_1 + 0xb18);
  if (puVar1 != (undefined8 *)(lVar5 + 0x30)) {
    iVar2 = *(int *)(lVar5 + 0x38);
    _Src = *(void **)(lVar5 + 0x30);
    *(int *)(param_1 + 0xb20) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0xb24) == 0) {
      *(undefined4 *)(param_1 + 0xb24) = 0;
    }
    else {
      FUN_144756262(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 0x60);
      }
    }
  }
  FUN_14036294a(param_1,1,0);
  if (*(longlong *)(param_1 + 0xb88) != 0) {
    FUN_14072973a();
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_14072a850();
  }
  iVar2 = *(int *)(param_1 + 0xb80);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb78);
    lVar8 = 0;
    do {
      FUN_14072a850(*(undefined8 *)(lVar5 + lVar8));
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    FUN_14072a850();
  }
  FUN_140729912(param_1);
  *(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) | 0x20;
  FUN_140729606(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2920);
  uVar6 = (ulonglong)DAT_14cad2950;
  if (0 < (longlong)uVar6) {
    bVar7 = false;
    DAT_14cad295c = DAT_14cad295c + 1;
    do {
      lVar5 = uVar6 * 0x10 + -8;
      uVar10 = uVar6;
      while (((*(int *)(DAT_14cad2948 + lVar5) != 0 &&
              (plVar9 = *(longlong **)(DAT_14cad2948 + -8 + lVar5), plVar9 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1,param_2,param_1 + 0xd50),
             cVar4 != '\0'))) {
        lVar5 = lVar5 + -0x10;
        bVar3 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar3) {
          DAT_14cad295c = DAT_14cad295c + -1;
          if (bVar7) goto LAB_1407295f3;
          goto LAB_140729349;
        }
      }
      uVar6 = uVar10 - 1;
      bVar7 = true;
    } while (1 < uVar10);
    DAT_14cad295c = DAT_14cad295c + -1;
LAB_1407295f3:
    FUN_14109be94(&DAT_14cad2920,0);
  }
LAB_140729349:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 140729606 FUN_140729606 body=150 status=ok
// SIG undefined FUN_140729606(void)

void FUN_140729606(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xba0) = 0;
  if (*(int *)(param_1 + 0xba4) != 0) {
    FUN_1401a2688(param_1 + 0xb98,0);
  }
  *(undefined4 *)(param_1 + 0xbb0) = 0;
  if (*(int *)(param_1 + 0xbb4) != 0) {
    FUN_1401a2688(param_1 + 0xba8,0);
  }
  if (*(int *)(param_1 + 0xbc4) < 0) {
    *(undefined4 *)(param_1 + 0xbc0) = 0;
    FUN_140507fc4(param_1 + 3000,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xbc0) = 0;
  }
  *(undefined1 *)(param_1 + 0xbc8) = 0;
  FUN_14072969c(param_1 + 0xbd8);
  return;
}



// FUNCTION 14072969c FUN_14072969c body=158 status=ok
// SIG undefined FUN_14072969c(void)

void FUN_14072969c(undefined8 *param_1)

{
  FUN_144716758(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_147a147b4(param_1 + 2,0);
  }
  FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403b10bc(param_1,0);
  }
  FUN_144723c10(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_1474d8698(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    return;
  }
  FUN_147a14d40(param_1 + 6,0);
  return;
}



// FUNCTION 14072973a FUN_14072973a body=472 status=ok
// SIG undefined FUN_14072973a(void)

void FUN_14072973a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  short sVar4;
  short sVar5;
  
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
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
  *(undefined2 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1448759c8(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14481578e(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14481578e(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14481578e(param_1 + 0x70,0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1447d6d9c(param_1 + 0x80,0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_1447d6d9c(param_1 + 0x90,0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_14072a708(param_1 + 0xa0,0);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  sVar4 = (short)*(undefined4 *)(param_1 + 0xf8);
  sVar5 = sVar4 + 1;
  if (sVar5 == 0) {
    sVar5 = sVar4 + 2;
  }
  *(short *)(param_1 + 0xf8) = sVar5;
  return;
}



// FUNCTION 140729912 FUN_140729912 body=1163 status=ok
// SIG undefined FUN_140729912(void)

void FUN_140729912(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
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
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_140729d7a;
    if (plVar5 == (longlong *)0x0) goto LAB_140729a81;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140729d7a:
    FUN_1456cec3c(plVar5);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_28;
    local_28 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = (code *)&LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = (code *)&LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
      != DAT_14cb06da8 + 0x30)) goto LAB_140729a81;
  lVar2 = (**(code **)(*plVar5 + 0x3f8))(plVar5);
  if (lVar2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x658);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_140729d87;
      if (plVar4 != (longlong *)0x0) goto LAB_1407299af;
LAB_140729aef:
      plVar4 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_140729d87:
        FUN_1456cec3c(plVar4);
      }
LAB_1407299af:
      if (DAT_14cb06da8 == 0) {
        local_50 = &local_28;
        local_28 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = (code *)&LAB_1464003b0;
        local_58 = &LAB_147d17bdf;
        local_60 = (code *)&LAB_1417edf22;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(plVar4[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_140729aef;
    }
    uVar3 = (**(code **)(*plVar4 + 0x3f8))(plVar4);
    uVar1 = FUN_14489b55e(uVar3);
    *(undefined2 *)(param_1 + 0xc74) = uVar1;
  }
  if (DAT_14cabea40 == 0) {
    local_50 = &local_28;
    local_28 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b34458;
    local_58 = &LAB_147856f3b;
    local_60 = FUN_1417ac842;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"AnimCurveMetaData",&DAT_14cabea40,&DAT_147856f3a);
  }
  local_30 = DAT_14cabea40;
  if ((DAT_14cabea40 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c();
  }
  lVar2 = (**(code **)(plVar5[0x1b] + 0x18))(plVar5 + 0x1b,&local_30);
  if (lVar2 == 0) {
LAB_140729aa6:
    uVar1 = 0;
  }
  else {
    if (DAT_14cabea40 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b34458;
      local_58 = &LAB_147856f3b;
      local_60 = FUN_1417ac842;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0xa0;
      FUN_14081cfa3(L"/Script/Engine",L"AnimCurveMetaData",&DAT_14cabea40,&DAT_147856f3a);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cabea40 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cabea40 + 0x38) * 8) != DAT_14cabea40 + 0x30)) goto LAB_140729aa6;
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x48))(lVar2 + 0x28);
  }
  *(undefined2 *)(param_1 + 0xc7e) = uVar1;
LAB_140729a81:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140729d9e FUN_140729d9e body=434 status=ok
// SIG undefined FUN_140729d9e(void)

longlong FUN_140729d9e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
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
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(code **)(*param_1 + 0x30) == (code *)&LAB_1433f20b0) {
    param_1 = param_1 + 0x87;
  }
  else {
    param_1 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
  }
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar3 * 8);
      if (lVar1 != 0) {
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
LAB_140729e18:
          if (DAT_14cacda40 == 0) {
            local_50 = &local_38;
            local_38 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_147957ee7;
            local_60 = FUN_1463ac712;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000001;
            local_80 = 8;
            local_88 = 0x28;
            FUN_14081cfa3(L"/Script/Engine",L"AssetUserData",&DAT_14cacda40,&DAT_147957ee6);
            if (DAT_14cacda40 == 0) goto LAB_140729e3c;
          }
          if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cacda40 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cacda40 + 0x38) * 8) !=
              DAT_14cacda40 + 0x30)) goto LAB_140729e3c;
        }
        else {
          if (lVar2 != 0) goto LAB_140729e18;
LAB_140729e3c:
          lVar2 = 0;
        }
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_140729e5a;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  lVar1 = 0;
LAB_140729e5a:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140729f52 FUN_140729f52 body=1971 status=ok
// SIG undefined FUN_140729f52(void)

void FUN_140729f52(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,char param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  code **ppcVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
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
  longlong local_90;
  code *local_88;
  ulonglong uStack_80;
  undefined2 local_6a;
  longlong *local_68;
  int local_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1448759c8(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_1448759c8(param_3,0);
  }
  plVar14 = (longlong *)param_1[0xcb];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar14 != (longlong *)0x0) != 0) goto LAB_14072a6f1;
    if (plVar14 == (longlong *)0x0) goto LAB_14072a5ef;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14072a6f1:
    FUN_1456cec3c(plVar14);
  }
  if (DAT_14cb06da8 == 0) {
    local_b0 = &local_58;
    local_58 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464003b0;
    local_b8 = &LAB_147d17bdf;
    local_c0 = &LAB_1417edf22;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10000000;
    local_e0 = 8;
    local_e8 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar14[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
        DAT_14cb06da8 + 0x30)) &&
      (plVar4 = (longlong *)(**(code **)(*param_1 + 0xa90))(param_1), plVar4 != (longlong *)0x0)) &&
     ((int)plVar4[1] != 0)) {
    uVar8 = (int)plVar4[1] - 1;
    if ((int)param_4 < (int)uVar8) {
      uVar8 = param_4;
    }
    uVar19 = 0;
    if (0 < (int)uVar8) {
      uVar19 = (ulonglong)uVar8;
    }
    local_90 = param_3;
    FUN_140816ffa(param_2,*(longlong *)(*plVar4 + uVar19 * 8) + 0x450);
    (**(code **)(*param_1 + 0xd00))(param_1,param_2,uVar19);
    lVar5 = (**(code **)(*plVar14 + 0x308))(plVar14);
    FUN_144a2d64e(param_2,lVar5 + 0xe0);
    lVar5 = (**(code **)(*param_1 + 0xb98))(param_1);
    if (lVar5 != 0 && param_5 == '\0') {
      local_58 = (code *)0x0;
      uStack_50 = 0;
      iVar11 = *(int *)(lVar5 + 0x48);
      if (iVar11 < 0) goto LAB_14072a6fe;
      if ((iVar11 != 0) && (FUN_1448759c8(&local_58), 0 < *(int *)(lVar5 + 0x48))) {
        lVar16 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar16 * 8) != 0) {
            lVar6 = (**(code **)(*plVar14 + 0x308))(plVar14);
            uVar3 = uStack_50;
            lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar16 * 8) + 0x28);
            if ((lVar17 != 0) && (*(int *)(lVar6 + 0x98) != *(int *)(lVar6 + 0xc4))) {
              uVar8 = (uint)((ulonglong)lVar17 >> 0x10);
              uVar15 = (uint)lVar17 & 0xffff;
              lVar13 = lVar6 + 200;
              if (*(longlong *)(lVar6 + 0xd0) != 0) {
                lVar13 = *(longlong *)(lVar6 + 0xd0);
              }
              iVar11 = *(int *)(lVar13 + (ulonglong)
                                         (*(int *)(lVar6 + 0xd8) - 1U &
                                         (int)((ulonglong)lVar17 >> 0x20) +
                                         ((uint)lVar17 << 0x10 | uVar15) +
                                         (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar15 >> 4)) * 4);
              if (iVar11 != -1) {
                do {
                  plVar4 = (longlong *)(*(longlong *)(lVar6 + 0x90) + (longlong)iVar11 * 0x14);
                  if (*plVar4 == lVar17) {
                    if (((plVar4 != (longlong *)0x0) && (plVar4 + 1 != (longlong *)0x0)) &&
                       (iVar11 = (int)plVar4[1], iVar11 != -1)) {
                      lVar17 = (longlong)(int)uStack_50;
                      uVar8 = (int)uStack_50 + 1;
                      uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
                      if (uStack_50._4_4_ < uVar8) {
                        FUN_14488eebe(&local_58,uVar3 & 0xffffffff);
                      }
                      *(short *)(local_58 + lVar17 * 2) = (short)iVar11;
                    }
                    break;
                  }
                  iVar11 = *(int *)((longlong)plVar4 + 0xc);
                } while (iVar11 != -1);
              }
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar5 + 0x48));
      }
      FUN_144a2d711(local_58,uStack_50 & 0xffffffff);
      FUN_144a2d64e(param_2,&local_58);
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar5 = param_1[0xe7];
    if ((longlong)(int)lVar5 != 0) {
      lVar16 = param_1[0xe6];
      lVar17 = 0;
      do {
        iVar11 = *(int *)(lVar16 + 4 + lVar17);
        if ((((iVar11 != 0) && (uVar8 = *(uint *)(lVar16 + lVar17), -1 < (int)uVar8)) &&
            (((int)uVar8 < DAT_14c9647dc &&
             ((plVar4 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
              plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar11)))))) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
            (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
          (**(code **)(*plVar4 + 0xbc0))(plVar4,uVar19,param_2);
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar17);
    }
    iVar11 = *(int *)((longlong)param_1 + 0x714);
    if (((((*(int *)((longlong)param_1 + 0x66c) == 0) ||
          (uVar8 = *(uint *)(param_1 + 0xcd), (int)uVar8 < 0)) || (DAT_14c9647dc <= (int)uVar8)) ||
        ((lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar5 == 0 ||
         (*(int *)(lVar5 + 0x10) != *(int *)((longlong)param_1 + 0x66c))))) ||
       ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) {
      if (((0 < (int)param_1[(longlong)iVar11 * 2 + 0x110]) &&
          (iVar12 = (int)param_2[1], iVar12 <= (int)param_1[(longlong)iVar11 * 2 + 0x110])) &&
         (1 < iVar12)) {
        iVar9 = 1;
        lVar5 = 1;
        do {
          uVar2 = *(ushort *)(*param_2 + lVar5 * 2);
          if ((*(char *)(param_1[(longlong)iVar11 * 2 + 0x10f] + (ulonglong)uVar2) == '\x01') ||
             (*(char *)((longlong)param_1 + 0x89c) == '\0')) {
            lVar16 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            *(ushort *)(*param_2 + lVar16 * 2) = uVar2;
            iVar12 = (int)param_2[1];
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar12);
        if (iVar9 < iVar12) {
          *(int *)(param_2 + 1) = iVar9;
          FUN_144715f92(param_2);
        }
      }
    }
    local_88 = (code *)0x0;
    uStack_80 = 0;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    (**(code **)(*plVar14 + 0x3d8))(plVar14,&local_68);
    iVar11 = local_60;
    if (local_60 < 0) {
LAB_14072a6fe:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (local_60 != 0) {
      FUN_1448759c8(&local_58);
      if ((longlong)local_60 != 0) {
        plVar18 = local_68 + local_60;
        plVar4 = local_68;
        do {
          lVar5 = *plVar4;
          lVar17 = (**(code **)(*plVar14 + 0x308))(plVar14);
          lVar16 = *(longlong *)(lVar5 + 0x30);
          if ((lVar16 != 0) && (*(int *)(lVar17 + 0x98) != *(int *)(lVar17 + 0xc4))) {
            uVar8 = (uint)((ulonglong)lVar16 >> 0x10);
            uVar15 = (uint)lVar16 & 0xffff;
            lVar6 = lVar17 + 200;
            if (*(longlong *)(lVar17 + 0xd0) != 0) {
              lVar6 = *(longlong *)(lVar17 + 0xd0);
            }
            iVar11 = *(int *)(lVar6 + (ulonglong)
                                      (*(int *)(lVar17 + 0xd8) - 1U &
                                      (int)((ulonglong)lVar16 >> 0x20) +
                                      ((uint)lVar16 << 0x10 | uVar15) +
                                      (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar15 >> 4)) * 4);
            if (iVar11 != -1) {
              do {
                plVar1 = (longlong *)(*(longlong *)(lVar17 + 0x90) + (longlong)iVar11 * 0x14);
                if (*plVar1 == lVar16) {
                  if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
                     (iVar11 = (int)plVar1[1], iVar11 != -1)) {
                    local_6a = (undefined2)iVar11;
                    ppcVar10 = &local_58;
                    if (*(char *)(lVar5 + 0x80) != '\x01') {
                      ppcVar10 = &local_88;
                    }
                    FUN_144838706(ppcVar10,&local_6a);
                  }
                  break;
                }
                iVar11 = *(int *)((longlong)plVar1 + 0xc);
              } while (iVar11 != -1);
            }
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar18);
      }
    }
    FUN_144a2d711(local_58,uStack_50 & 0xffffffff);
    FUN_144a2d64e(param_2,&local_58);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar5 = local_90;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar16 = param_1[0xb5];
    if (((lVar16 != 0) && ((*(byte *)(lVar16 + 0x74) & 8) == 0)) && (*(int *)(lVar16 + 0x308) != 0))
    {
      FUN_144a2d64e(param_2,lVar16 + 0x300);
    }
    uVar7 = (**(code **)(*plVar14 + 0x310))(plVar14);
    FUN_14498a126(uVar7,param_2);
    FUN_144a2d711(*param_2,(int)param_2[1]);
    FUN_140817d70(lVar5,(int)uStack_80 + (int)param_2[1]);
    FUN_140816ffa(lVar5,param_2);
    FUN_144a2d711(local_88,uStack_80 & 0xffffffff);
    FUN_144a2d64e(lVar5,&local_88);
    uVar7 = (**(code **)(*plVar14 + 0x310))(plVar14);
    FUN_14498a126(uVar7,lVar5);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14072a5ef:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072a708 FUN_14072a708 body=328 status=ok
// SIG undefined FUN_14072a708(void)

void FUN_14072a708(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14072a774;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14072a774:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 14072a850 FUN_14072a850 body=1555 status=ok
// SIG undefined FUN_14072a850(void)

void FUN_14072a850(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
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
  lVar3 = param_1[4];
  lVar2 = *(longlong *)(lVar3 + 0x658);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar3 + 0x660);
    if ((DAT_14c950c29 & lVar2 != 0) != 0) goto LAB_14072adbc;
    if (lVar2 == 0) goto LAB_14072aa17;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14072adbc:
    FUN_1456cec3c(lVar2);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_14072aa17;
  plVar4 = *(longlong **)(lVar3 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar3 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_14072adc9;
    if (plVar4 != (longlong *)0x0) goto LAB_14072a8e2;
LAB_14072ab08:
    plVar4 = (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_14072adc9:
      FUN_1456cec3c(plVar4);
      if (DAT_14cb06da8 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464003b0;
        local_58 = &LAB_147d17bdf;
        local_60 = &LAB_1417edf22;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
    }
LAB_14072a8e2:
    if ((*(int *)(plVar4[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_14072ab08;
  }
  lVar2 = (**(code **)(*plVar4 + 0x3f8))(plVar4);
  if (lVar2 == 0) {
LAB_14072aa17:
    if (param_1[5] != 0) {
      if (param_1 != (longlong *)0x0) {
        lVar3 = param_1[4];
        if (lVar3 != 0) {
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
          lVar3 = *(longlong *)(lVar3 + 0x10);
          iVar1 = *(int *)(DAT_14cad2858 + 0x38);
          if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
              DAT_14cad2858 + 0x30)) {
            FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
          }
        }
        if (param_1[0x7c] == 0) {
          lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
          param_1[0x7c] = lVar3;
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
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    if (param_1[0x7c] == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  lVar2 = *(longlong *)(lVar3 + 0x658);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar3 + 0x660);
    if ((DAT_14c950c29 & lVar2 != 0) != 0) goto LAB_14072ae7f;
    if (lVar2 == 0) goto LAB_14072a9d7;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14072ae7f:
    FUN_1456cec3c(lVar2);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
LAB_14072a9d7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14072ae8c FUN_14072ae8c body=286 status=ok
// SIG undefined FUN_14072ae8c(void)

undefined8 FUN_14072ae8c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14072afa4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14072afa4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14072afa4:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14072af51;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14072af51;
    }
  }
  uVar6 = 0;
LAB_14072af51:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072affa FUN_14072affa body=199 status=ok
// SIG undefined FUN_14072affa(void)

void FUN_14072affa(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = *(char *)(param_1 + 0x200);
  FUN_1449027d0(param_1,&local_40);
  lVar4 = *(longlong *)(local_40 + 0x240);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
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
  if ((cVar3 == '\0') && (param_2 != '\0')) {
    if (*(char *)(lVar4 + 0x20) == '\x01') goto LAB_14072b063;
    uVar5 = 1;
  }
  else {
    if (*(char *)(lVar4 + 0x20) != '\x01') goto LAB_14072b063;
    uVar5 = 0;
  }
  *(undefined1 *)(lVar4 + 0x20) = uVar5;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
  *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + 1;
LAB_14072b063:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072b0c2 FUN_14072b0c2 body=315 status=ok
// SIG undefined FUN_14072b0c2(void)

void FUN_14072b0c2(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14072b1fe();
  if ((param_2 != 0) && (*(char *)(param_2 + 0xb9) != '\x01')) {
    if (DAT_14cb39ca0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_14638c6c0;
      local_48 = &LAB_14811044c;
      local_50 = &LAB_1407f5cf8;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x8e0;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
    }
    if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) {
      FUN_14072c20e(param_1 + 0x1d0,param_2 + 0x678,0,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072b1fe FUN_14072b1fe body=602 status=ok
// SIG undefined FUN_14072b1fe(void)

void FUN_14072b1fe(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  lVar10 = param_1;
  lVar16 = param_2;
  FUN_14072b458();
  uVar13 = (undefined4)lVar16;
  uVar11 = (undefined4)lVar10;
  lVar10 = *(longlong *)(param_1 + 0x1c8);
  if (*(longlong *)(param_2 + 0x5b8) != lVar10) {
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_2 + 0x5b8) = lVar10;
    lVar10 = param_2;
    FUN_1448215fa();
    uVar11 = (undefined4)lVar10;
  }
  if (*(int *)(param_1 + 0x1c0) != -1) {
    auVar5._8_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x188) - *(double *)(param_2 + 0x268)));
    auVar5._0_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x180) - *(double *)(param_2 + 0x260)));
    iVar12 = movmskpd(uVar11,auVar5);
    auVar3._8_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x198) - *(double *)(param_2 + 0x278)));
    auVar3._0_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 400) - *(double *)(param_2 + 0x270)));
    uVar14 = movmskpd(uVar13,auVar3);
    if ((uVar14 & 0x3fffffff) != 0 || iVar12 != 0) goto LAB_14072b244;
    lVar10 = -(ulonglong)
              (0.0010000000474974513 <
              ABS(*(double *)(param_1 + 0x168) - *(double *)(param_2 + 0x248)));
    auVar8._8_4_ = (int)lVar10;
    auVar8._0_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x160) - *(double *)(param_2 + 0x240)));
    auVar8._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar14 = movmskpd(iVar12,auVar8);
    lVar10 = -(ulonglong)
              (0.0010000000474974513 <
              ABS(*(double *)(param_1 + 0x178) - *(double *)(param_2 + 600)));
    auVar7._8_4_ = (int)lVar10;
    auVar7._0_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x170) - *(double *)(param_2 + 0x250)));
    auVar7._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar12 = movmskpd(0,auVar7);
    uVar15 = iVar12 << 2 | uVar14;
    if (uVar15 != 0) {
      auVar6._8_8_ = -(ulonglong)
                      (0.0010000000474974513 <
                      ABS(*(double *)(param_1 + 0x168) + *(double *)(param_2 + 0x248)));
      auVar6._0_8_ = -(ulonglong)
                      (0.0010000000474974513 <
                      ABS(*(double *)(param_1 + 0x160) + *(double *)(param_2 + 0x240)));
      uVar14 = movmskpd(uVar14,auVar6);
      auVar4._8_8_ = -(ulonglong)
                      (0.0010000000474974513 <
                      ABS(*(double *)(param_1 + 0x178) + *(double *)(param_2 + 600)));
      auVar4._0_8_ = -(ulonglong)
                      (0.0010000000474974513 <
                      ABS(*(double *)(param_1 + 0x170) + *(double *)(param_2 + 0x250)));
      uVar15 = movmskpd(uVar15,auVar4);
      if ((uVar15 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_14072b244;
    }
    auVar2._8_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x1a8) - *(double *)(param_2 + 0x288)));
    auVar2._0_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x1a0) - *(double *)(param_2 + 0x280)));
    iVar12 = movmskpd(uVar14,auVar2);
    auVar1._8_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x1b8) - *(double *)(param_2 + 0x298)));
    auVar1._0_8_ = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(param_1 + 0x1b0) - *(double *)(param_2 + 0x290)));
    uVar14 = movmskpd(0,auVar1);
    if (((uVar14 & 0x3fffffff) != 0 || iVar12 != 0) ||
       (*(int *)(param_2 + 0x338) = *(int *)(param_1 + 0x1c0), *(int *)(param_1 + 0x1c0) != -1))
    goto LAB_14072b244;
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
LAB_14072b244:
  FUN_140136708(param_2);
  if ((~*(byte *)(param_2 + 0x9c) & 3) != 0) {
    return;
  }
  bVar9 = *(byte *)(param_2 + 0x9d);
  if ((bVar9 & 1) != 0) {
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      return;
    }
    lVar10 = FUN_1448abda6(param_2);
    if (lVar10 != 0) {
      return;
    }
    bVar9 = *(byte *)(param_2 + 0x9d);
  }
  *(byte *)(param_2 + 0x9d) = bVar9 | 1;
  FUN_1401057d4(param_2);
  FUN_14010586c(&DAT_14cad0140,param_2);
  return;
}



// FUNCTION 14072b458 FUN_14072b458 body=1240 status=ok
// SIG undefined FUN_14072b458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14072b458(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double _X;
  double _X_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double _X_01;
  undefined1 auStack_138 [32];
  longlong **local_118;
  undefined1 local_110;
  longlong *local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14072b932();
  if (0 < *(int *)(param_1 + 0x10)) {
    auVar11 = *(undefined1 (*) [16])(param_2 + 0x1b0);
    dVar7 = auVar11._0_8_;
    dVar8 = auVar11._8_8_;
    dVar6 = *(double *)(param_2 + 0x1c0);
    pdVar4 = *(double **)(param_2 + 0x230);
    if (pdVar4 == (double *)0x0) {
      pdVar4 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar4 = DAT_14c8463d0;
      pdVar4[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar4[2] = DAT_14c8463e0;
      pdVar4[3] = dVar9;
      dVar9 = DAT_14c846500;
      pdVar4[4] = DAT_14c8464f8;
      pdVar4[5] = dVar9;
      pdVar4[6] = DAT_14c846508;
      *(double **)(param_2 + 0x230) = pdVar4;
    }
    auVar15 = _DAT_1499387d0;
    if ((((pdVar4[4] != dVar7) || (NAN(pdVar4[4]) || NAN(dVar7))) || (pdVar4[5] != dVar8)) ||
       (((NAN(pdVar4[5]) || NAN(dVar8) || (pdVar4[6] != dVar6)) || (NAN(pdVar4[6]) || NAN(dVar6)))))
    {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar6;
      dVar9 = (double)DAT_1499387d0;
      dVar10 = DAT_1499387d0._8_8_;
      auVar11 = divpd(auVar11,_DAT_1499387d0);
      auVar14 = divpd(auVar17,_DAT_1499387d0);
      auVar11 = roundpd(auVar11,auVar11,3);
      auVar14 = roundpd(auVar14,auVar14,3);
      auVar23._0_8_ = dVar7 - auVar11._0_8_ * dVar9;
      auVar23._8_8_ = dVar8 - auVar11._8_8_ * dVar10;
      auVar18._0_8_ = dVar6 - auVar14._0_8_ * dVar9;
      auVar18._8_8_ = 0.0 - auVar14._8_8_ * dVar10;
      auVar21._0_8_ = auVar23._0_8_ + dVar9;
      auVar21._8_8_ = auVar23._8_8_ + dVar10;
      auVar16._0_8_ = auVar18._0_8_ + dVar9;
      auVar16._8_8_ = auVar18._8_8_ + dVar10;
      auVar14._8_8_ = -(ulonglong)(0.0 <= auVar23._8_8_);
      auVar14._0_8_ = -(ulonglong)(0.0 <= auVar23._0_8_);
      auVar11 = blendvpd(auVar21,auVar23,auVar14);
      auVar22._8_8_ = -(ulonglong)(0.0 <= auVar18._8_8_);
      auVar22._0_8_ = -(ulonglong)(0.0 <= auVar18._0_8_);
      auVar14 = blendvpd(auVar16,auVar18,auVar22);
      auVar19._0_8_ = auVar11._0_8_ + -360.0;
      auVar19._8_8_ = auVar11._8_8_ + -360.0;
      auVar12._8_8_ = -(ulonglong)(180.0 < auVar11._8_8_);
      auVar12._0_8_ = -(ulonglong)(180.0 < auVar11._0_8_);
      auVar22 = blendvpd(auVar11,auVar19,auVar12);
      auVar13._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
      auVar13._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
      auVar11._8_8_ = auVar14._8_8_ + 0.0;
      auVar11._0_8_ = auVar14._0_8_ + -360.0;
      auVar11 = blendvpd(auVar14,auVar11,auVar13);
      *(undefined1 (*) [16])(pdVar4 + 4) = auVar22;
      dVar6 = auVar11._0_8_;
      pdVar4[6] = dVar6;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar6;
      auVar11 = divpd(auVar22,auVar15);
      auVar15 = divpd(auVar24,auVar15);
      auVar11 = roundpd(auVar11,auVar11,3);
      auVar15 = roundpd(auVar15,auVar15,3);
      dVar20 = (auVar22._0_8_ - auVar11._0_8_ * dVar9) * 0.008726646259971648;
      _X = (auVar22._8_8_ - auVar11._8_8_ * dVar10) * 0.008726646259971648;
      _X_00 = (dVar6 - auVar15._0_8_ * dVar9) * 0.008726646259971648;
      _X_01 = (0.0 - auVar15._8_8_ * dVar10) * 0.008726646259971648;
      dVar6 = sin(dVar20);
      dVar7 = sin(_X);
      dVar8 = sin(_X_00);
      sin(_X_01);
      dVar9 = cos(dVar20);
      dVar10 = cos(_X);
      dVar20 = cos(_X_00);
      cos(_X_01);
      *pdVar4 = dVar6 * dVar7 * dVar20 - dVar9 * dVar10 * dVar8;
      pdVar4[1] = -(dVar6 * dVar10 * dVar20) - dVar9 * dVar7 * dVar8;
      pdVar4[2] = -(dVar10 * dVar6 * dVar8) + dVar7 * dVar9 * dVar20;
      pdVar4[3] = dVar7 * dVar6 * dVar8 + dVar10 * dVar9 * dVar20;
    }
    local_108 = (longlong *)*pdVar4;
    uStack_100 = pdVar4[1];
    local_f8 = pdVar4[2];
    uStack_f0 = pdVar4[3];
    local_118 = &local_108;
    local_110 = 0;
    FUN_140092404(param_2,*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x128),0);
  }
  plVar1 = (longlong *)(param_1 + 0x110);
  lVar2 = param_1 + 0x120;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  iStack_cc = 0;
  local_c8 = 0;
  iVar5 = 0;
  local_d8 = lVar2;
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_1449c0562(&local_e0);
    iVar5 = *(int *)(param_1 + 0x138);
  }
  uStack_f0._0_4_ = local_d0;
  uStack_f0._4_4_ = iStack_cc;
  local_e8 = local_c8;
  local_e4 = local_c4;
  uStack_100 = (double)local_e0;
  local_f8 = (double)local_d8;
  local_108 = plVar1;
  if ((iStack_cc != iVar5) || (local_d8 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_108 + (longlong)uStack_f0._4_4_ * 0x80);
      if (((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) &&
         ((plVar3[0x24] == 0 || ((*(uint *)(plVar3[0x24] + 8) >> 0x1e & 1) != 0)))) {
        FUN_147a0466a(plVar3,*local_108 + (longlong)uStack_f0._4_4_ * 0x80 + 0x10);
        (**(code **)(*plVar3 + 0x490))(plVar3,param_2,&DAT_14cadad98,0);
      }
      uStack_f0._0_4_ = (uint)uStack_f0 & ~uStack_100._4_4_;
      FUN_1449c0562(&uStack_100);
    } while (((uStack_f0._4_4_ != iVar5) || (local_f8 != (double)lVar2)) || (local_108 != plVar1));
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072b932 FUN_14072b932 body=521 status=ok
// SIG undefined FUN_14072b932(void)

void FUN_14072b932(longlong param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined **local_138 [11];
  longlong *local_e0;
  longlong local_c0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_3 - 1U < 2) && (0 < *(int *)(param_1 + 0x10))) {
    if (param_3 == 1) {
      FUN_14072bf6a(param_2);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
      FUN_1479d606a(&DAT_14cad0158,param_2);
      *(byte *)(param_2 + 0x17) = *(byte *)(param_2 + 0x17) & 0x7f;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
    }
    uVar1 = *(uint *)(param_2 + 1);
    iVar2 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 != 0) {
          local_140 = 0;
          local_148 = 0;
          plVar5 = (longlong *)FUN_140be85e0(0,param_2,*(undefined8 *)(lVar4 + 0x18),0);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x170))(plVar5,0,DAT_14c951640,(uVar1 & 0x40) >> 4 | 0x10);
          }
          plVar5 = *(longlong **)(lVar3 + lVar6);
          (**(code **)(*plVar5 + 0x170))(plVar5,0,param_2);
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
    FUN_14072bba8(local_138,param_2,param_1);
    (**(code **)(*param_2 + 0x410))(param_2);
    local_138[0] = &PTR_FUN_14a8391b0;
    local_48 = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1401be552(local_90);
    local_138[0] = &PTR__purecall_149e35f70;
    if (local_e0 != (longlong *)0x0) {
      if (*local_e0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_e0);
    }
    if (local_c0 != 0) {
      if (*(longlong *)(local_c0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_c0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072bb4a FUN_14072bb4a body=93 status=ok
// SIG undefined FUN_14072bb4a(void)

void FUN_14072bb4a(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x9d) & 0x40) != 0) && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) {
    FUN_140719760(local_28,param_1,0);
    FUN_14071963e(local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072bba8 FUN_14072bba8 body=352 status=ok
// SIG undefined FUN_14072bba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14072bba8(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_14072bd94(param_1,param_3);
  *param_1 = (longlong)&PTR_FUN_14a839670;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad0d78) {
    FUN_144b3d300(&DAT_14cad0d78);
    if (DAT_14cad0d78 == -1) {
      _DAT_14cad0d70 = 0;
      _Init_thread_footer(&DAT_14cad0d78);
    }
  }
  if ((*(int *)(param_3 + 0xf8) != DAT_14cad0d70) || (*(int *)(param_3 + 0xfc) != DAT_14cad0d74)) {
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined8 *)(param_3 + 0xf8));
  }
  if (0 < *(int *)(param_3 + 0x108)) {
    (**(code **)(*param_1 + 0x60))(param_1,param_3 + 0x100);
  }
  FUN_14072be3a(param_2,param_1 + 0x15);
  plVar1 = *(longlong **)(param_2 + 0x10);
  local_1c8 = FUN_144938c96(param_2);
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1c0 = 0;
  local_1a8 = param_1;
  (**(code **)(*plVar1 + 0x2d0))(plVar1,local_198,param_2,plVar1);
  if ((local_20 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072bd0a FUN_14072bd0a body=138 status=ok
// SIG undefined FUN_14072bd0a(void)

void FUN_14072bd0a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(puVar2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_1401254a2(puVar2,iVar1,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0x28);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  else {
    FUN_140670b3c(*(longlong *)(param_1 + 0x58),param_2);
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 14072bd94 FUN_14072bd94 body=165 status=ok
// SIG undefined FUN_14072bd94(void)

undefined8 * FUN_14072bd94(undefined8 *param_1,longlong param_2)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = param_2 + 8;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = &PTR_FUN_14a8391b0;
  param_1[0x14] = param_2;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) | 0x20;
  return param_1;
}



// FUNCTION 14072be3a FUN_14072be3a body=303 status=ok
// SIG undefined FUN_14072be3a(void)

void FUN_14072be3a(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  if (DAT_14cad0160 != DAT_14cad018c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar3 = DAT_14cad0198;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar1 != -1) {
      lVar5 = DAT_14cad0158 + (longlong)iVar1 * 0x20;
      if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar1 * 0x20) == param_1) {
        if (((lVar5 + 8U & 0xfffffffffffffff7) != 0) && ((longlong)*(int *)(lVar5 + 0x10) != 0)) {
          lVar4 = *(longlong *)(lVar5 + 8);
          lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 5;
          do {
            local_38 = FUN_1479b7fb6(lVar4);
            FUN_1479d4be2(param_2,local_3c,&local_38);
            lVar4 = lVar4 + 0x20;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x18);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014072bee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14072bf6a FUN_14072bf6a body=675 status=ok
// SIG undefined FUN_14072bf6a(void)

void FUN_14072bf6a(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined **local_108 [6];
  byte local_d1;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 0xb9) == '\x01') {
    local_78 = 0;
    uStack_70 = 0;
    plVar11 = (longlong *)0x0;
    memset(local_108,0,0x90);
    FUN_144869430(local_108);
    local_108[0] = &PTR_FUN_14a8398d0;
    FUN_144a69558(local_108,1);
    local_d1 = local_d1 | 0x20;
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar6 = FUN_144938c96(param_1);
    if (plVar3 != (longlong *)0x0) {
      plVar11 = (longlong *)plVar3[10];
    }
    local_110 = 0xffffffff;
    local_10c = 0x101;
    local_10a = 0;
    local_120 = plVar3;
    local_118 = plVar11;
    FUN_144a2daf0(&local_120);
    if (local_118 != (longlong *)0x0) {
      do {
        plVar11 = local_118;
        cVar4 = FUN_144b00082(local_118,local_108);
        if ((cVar4 != '\0') &&
           (uVar8 = (ulonglong)*(uint *)(plVar11 + 6), 0 < (int)*(uint *)(plVar11 + 6))) {
          lVar10 = 0;
          do {
            iVar2 = *(int *)((longlong)plVar11 + 0x44);
            lVar7 = lVar10 * *(int *)((longlong)plVar11 + 0x34);
            if ((lVar6 == 0) ||
               ((plVar3 != (longlong *)0x0 &&
                ((int)plVar3[0xb] < *(int *)((longlong)plVar11 + 0x34) * (int)uVar8 + iVar2)))) {
              lVar9 = 0;
            }
            else {
              lVar9 = lVar6 + iVar2 + lVar7;
            }
            cVar4 = (**(code **)(*plVar11 + 200))(plVar11,iVar2 + param_1 + lVar7,lVar9,0x200);
            uVar8 = uStack_70;
            if (cVar4 == '\0') {
              lVar10 = (longlong)(int)(uint)uStack_70;
              uVar5 = (uint)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
              if (uStack_70._4_4_ < uVar5) {
                FUN_1479d5de8(&local_78,uVar8 & 0xffffffff);
                uVar5 = (uint)uStack_70;
              }
              puVar1 = (undefined8 *)(local_78 + 0x10 + lVar10 * 0x20);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(local_78 + lVar10 * 0x20);
              *puVar1 = 0;
              puVar1[1] = 0;
              FUN_1479b7ef8(plVar11,(longlong)(int)(uVar5 - 1) * 0x20 + local_78);
              break;
            }
            lVar10 = lVar10 + 1;
            uVar8 = (ulonglong)(int)plVar11[6];
          } while (lVar10 < (longlong)uVar8);
        }
        local_118 = (longlong *)local_118[3];
        FUN_144a2daf0(&local_120);
      } while (local_118 != (longlong *)0x0);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
    if ((int)(uint)uStack_70 < 1) {
      FUN_1479d606a(&DAT_14cad0158,param_1);
      *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0x7f;
    }
    else {
      local_120 = &local_128;
      local_118 = &local_78;
      local_128 = param_1;
      FUN_14010e3f8(local_64);
      *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 0x80;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
    FUN_144a7fc42(local_108);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072c20e FUN_14072c20e body=1957 status=ok
// SIG undefined FUN_14072c20e(void)

void FUN_14072c20e(undefined8 *param_1,longlong *param_2,byte param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  code *_Src;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_158 [32];
  void **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  byte local_de;
  byte local_dd;
  int local_dc;
  code *local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  void *local_88;
  ulonglong uStack_80;
  longlong *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_de = param_3;
  local_dc = param_4;
  (**(code **)*param_1)(param_1,&local_70);
  if ((longlong)local_68 != 0) {
    local_dd = local_de ^ 1;
    lVar19 = (longlong)local_68 * 0x28;
    plVar22 = local_70;
    do {
      if (*plVar22 == 0) {
LAB_14072c2d8:
        local_d8 = (code *)0x0;
        uStack_d0 = 0;
        FUN_14020fad6(&local_d8,L"Unknown");
        local_88 = (void *)0x0;
        uStack_80 = 0;
        cVar6 = FUN_14493c216(param_1 + 1,0);
        if (cVar6 == '\0') {
          if ((*(int *)((longlong)param_1 + 0xc) == 0) ||
             (uVar1 = *(uint *)(param_1 + 1), (int)uVar1 < 0)) {
LAB_14072c76f:
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              puVar16 = (undefined8 *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((puVar16 == (undefined8 *)0x0) ||
                  (*(int *)(puVar16 + 2) != *(int *)((longlong)param_1 + 0xc))) ||
                 ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) goto LAB_14072c76f;
              uVar12 = *puVar16;
            }
          }
          local_b8 = (void *)0x0;
          uStack_b0 = 0;
          FUN_1401031ac(uVar12,0,&local_b8);
          iVar20 = (int)uStack_b0;
          iVar8 = ((int)uStack_b0 == 0) + 1;
          local_a8 = local_b8;
          local_b8 = (void *)0x0;
          iVar9 = uStack_b0._4_4_;
          uStack_a0 = uStack_b0;
          uStack_b0 = 0;
          iVar17 = iVar8 + iVar20;
          if (iVar17 < iVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar8);
          }
          if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar17);
          }
          if (iVar9 < iVar17) {
            FUN_1446f8c06(&local_a8);
          }
          FUN_1400020e8(&local_a8,&DAT_149e0635c,1);
          uVar4 = uStack_a0;
          _Src = local_d8;
          iVar20 = (int)uStack_a0;
          if ((int)uStack_a0 < 2) {
            local_98 = (void *)0x0;
            lVar18 = (longlong)(int)uStack_d0;
            uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_d0);
            if (lVar18 == 0) {
              uStack_90 = uStack_d0 & 0xffffffff;
            }
            else {
              FUN_1446dd670(&local_98,uStack_d0 & 0xffffffff,0);
              memcpy(local_98,_Src,lVar18 * 2);
            }
          }
          else {
            iVar9 = (int)uStack_d0 + -1;
            if ((int)uStack_d0 == 0) {
              iVar9 = 0;
            }
            local_98 = local_a8;
            iVar17 = uStack_a0._4_4_;
            local_a8 = (void *)0x0;
            uStack_a0 = 0;
            uStack_90 = uVar4;
            iVar8 = iVar9 + iVar20;
            if (iVar8 < iVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4((longlong)iVar9);
            }
            if (iVar17 < iVar8) {
              FUN_1446f8c06(&local_98);
            }
            FUN_1400020e8(&local_98,local_d8,iVar9);
          }
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          local_88 = local_98;
          uStack_80 = uStack_90;
          local_98 = (void *)0x0;
          uStack_90 = 0;
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_b8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar20 = (int)uStack_d0 + -1;
          if ((int)uStack_d0 == 0) {
            iVar20 = 0;
          }
          FUN_1402980a2(&local_88,local_d8,iVar20);
        }
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_d8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar20 = *(int *)((longlong)plVar22 + 0xc);
        lVar18 = (longlong)iVar20;
        plVar14 = plVar22 + 1;
        plVar10 = (longlong *)FUN_144741050(plVar14);
        if (*plVar10 == 0) goto LAB_14072c2d8;
        piVar11 = (int *)(**(code **)(*param_2 + 0x58))(param_2,plVar22,0);
        if (piVar11 == (int *)0x0) {
          local_88 = (void *)CONCAT44(local_88._4_4_,0xffffffff);
LAB_14072c537:
          if (local_de == 0) {
            bVar23 = local_dc == 0;
            uVar12 = FUN_144741050(plVar14);
            bVar5 = FUN_14487ac36(uVar12);
            bVar5 = bVar5 & bVar23;
          }
          else {
            bVar5 = 0;
          }
          uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)plVar22[1]);
          local_d8 = (code *)*plVar22;
          local_c8 = 0;
          uStack_c0 = 0;
          local_138 = &local_88;
          (**(code **)(*param_2 + 0x10))(param_2,&local_d8,bVar5,0);
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          iVar9 = (int)local_88;
        }
        else {
          iVar9 = *piVar11;
          local_88 = (void *)CONCAT44(local_88._4_4_,iVar9);
          if (iVar9 == -1) goto LAB_14072c537;
        }
        if ((iVar20 != -1 & local_dd & iVar9 != -1) == 1) {
          uVar12 = FUN_144741050(plVar14);
          cVar6 = FUN_14487ac36(uVar12);
          if (cVar6 == '\0') {
            plVar10 = (longlong *)FUN_144741050(plVar14);
            if ((short)plVar10[1] == 3) {
              lVar21 = DAT_14cb420c0;
              if (DAT_14cb420c0 != 0) {
LAB_14072c686:
                if (DAT_14c927740 == 0) {
                  local_d8 = FUN_1449e2820;
                  local_f0 = FUN_14081d0ea;
                  local_f8 = FUN_14081d0ea;
                  local_100 = &local_d8;
                  local_108 = &LAB_146856450;
                  local_110 = FUN_1427b121c;
                  local_118 = L"Engine";
                  local_120 = 0;
                  local_128 = 0x10000021;
                  local_130 = 8;
                  local_138 = (void **)CONCAT44(local_138._4_4_,0x28);
                  FUN_14081cfa3(L"/Script/CoreUObject");
                  if (DAT_14c927740 == 0) goto LAB_14072c6ae;
                }
                if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar21 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
                    == DAT_14c927740 + 0x30)) {
                  lVar21 = (longlong)(int)local_88;
                  if ((iVar20 < 0) || (*(int *)(param_1 + 9) <= iVar20)) {
                    lVar13 = param_2[8];
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = *(longlong *)(param_1[8] + lVar18 * 8);
                    lVar13 = param_2[8];
                    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(lVar18);
                    }
                  }
                  *(longlong *)(lVar13 + lVar21 * 8) = lVar18;
                  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
                  goto LAB_14072c784;
                }
              }
            }
            else if (*plVar10 != 0) {
              lVar13 = FUN_1449e2fb2();
              lVar21 = *plVar10;
              if (((lVar21 != 0) && (lVar13 != 0)) &&
                 ((lVar15 = *(longlong *)(lVar21 + 0x10), lVar15 != 0 &&
                  ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar15 + 0x38) &&
                   (*(longlong *)
                     (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                    lVar13 + 0x30)))))) goto LAB_14072c686;
            }
LAB_14072c6ae:
            if (*(int *)(param_1 + 5) != 0) {
              plVar14 = (longlong *)FUN_144741050(plVar14);
              uVar7 = *(ushort *)((longlong)plVar14 + 0xc);
              if (uVar7 == 0xffff) {
                if (*plVar14 == 0) {
LAB_14072c959:
                  uVar7 = 0;
                }
                else {
                  lVar21 = DAT_14cb420c0;
                  if ((short)plVar14[1] == 3) goto LAB_14072c822;
                  if ((short)plVar14[1] == 1) goto LAB_14072c959;
                  lVar15 = FUN_1449e2fb2();
                  lVar13 = *plVar14;
                  if ((lVar13 == 0) || (lVar15 == 0)) {
LAB_14072c8e1:
                    lVar21 = 0;
                  }
                  else {
                    lVar2 = *(longlong *)(lVar13 + 0x10);
                    lVar21 = 0;
                    if (lVar2 != 0) {
                      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar15 + 0x38)) goto LAB_14072c8e1;
                      lVar21 = lVar13;
                      if (*(longlong *)
                           (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
                          lVar15 + 0x30) {
                        lVar21 = 0;
                      }
                    }
                  }
LAB_14072c822:
                  sVar3 = (short)*(undefined4 *)(lVar21 + 0x5c);
                  uVar7 = -sVar3 & ((short)*(undefined4 *)(lVar21 + 0x58) + sVar3) - 1U;
                }
                *(ushort *)((longlong)plVar14 + 0xc) = uVar7;
              }
              if ((void *)((longlong)(int)local_88 + param_2[4]) != (void *)(lVar18 + param_1[4])) {
                memcpy((void *)((longlong)(int)local_88 + param_2[4]),(void *)(lVar18 + param_1[4]),
                       (longlong)(short)uVar7);
              }
              *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
            }
          }
          else {
            lVar21 = (longlong)(int)local_88;
            if (local_dc == 0) {
              plVar14 = *(longlong **)(param_1[6] + lVar18 * 8);
              if (plVar14 != (longlong *)0x0) {
                if ((int)local_88 < 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  if ((int)local_88 < (int)param_2[7]) {
                    uVar12 = *(undefined8 *)(param_2[6] + lVar21 * 8);
                  }
                }
                (**(code **)(*plVar14 + 0x438))(plVar14,uVar12);
              }
            }
            else if (local_dc == 1) {
              lVar18 = *(longlong *)(param_1[6] + lVar18 * 8);
              lVar13 = param_2[6];
              if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar18);
              }
              *(longlong *)(lVar13 + lVar21 * 8) = lVar18;
              *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
            }
          }
        }
      }
LAB_14072c784:
      plVar22 = plVar22 + 5;
      lVar19 = lVar19 + -0x28;
    } while (lVar19 != 0);
  }
  FUN_140219f72(param_2);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072c9b6 FUN_14072c9b6 body=2537 status=ok
// SIG undefined FUN_14072c9b6(void)

void FUN_14072c9b6(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float *pfVar8;
  int iVar9;
  undefined *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  LARGE_INTEGER local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  int local_88 [2];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_b0.s.LowPart = param_2;
    uVar7 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar7,&local_b0);
    if ((DAT_14c761388 != 0) &&
       ((lVar18 = param_1[0x16], lVar18 != 0 || (lVar18 = FUN_1448abda6(param_1), lVar18 != 0)))) {
      uVar7 = FUN_14119d0a4(lVar18);
      FUN_140e65914(uVar7,param_1);
    }
  }
  lVar18 = param_1[0x15];
  lVar6 = FUN_14072d4de(param_1);
  cVar3 = FUN_14072d3a6(param_1[0x2d],0);
  plVar15 = param_1 + 0x2f;
  cVar4 = FUN_144904448(plVar15);
  if (cVar3 != '\0') {
    if (cVar4 != '\0') {
      param_1[0x2e] = 0;
      FUN_14072d42a(plVar15,0);
    }
    cVar3 = FUN_144904448(param_1 + 0x34);
    if (cVar3 != '\0') {
      FUN_14072d42a(param_1 + 0x34,0);
      param_1[0x32] = 0;
      param_1[0x33] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_128);
    }
    goto LAB_14072ccab;
  }
  if (cVar4 != '\0') {
    if (param_1[0x2e] == 0) {
      bVar19 = false;
    }
    else {
      bVar19 = *(char *)(param_1[0x2e] + 0x19) == '\x02';
    }
    cVar3 = FUN_14072d710(param_1[0x2d],bVar19);
    if (cVar3 == '\0') {
      param_1[0x2e] = 0;
      FUN_14072d42a(plVar15);
    }
  }
  cVar3 = FUN_14072d710(param_1[0x2d],0);
  local_f8 = lVar18;
  if (cVar3 == '\0') {
LAB_14072d052:
    plVar15 = (longlong *)0x0;
    iVar12 = 0;
    iVar9 = 0;
    iVar13 = 0;
    iVar17 = 0;
  }
  else {
    cVar3 = FUN_144904448(plVar15);
    plVar15 = (longlong *)0x0;
    if (lVar6 == 0) goto LAB_14072d052;
    iVar12 = 0;
    iVar9 = 0;
    iVar13 = 0;
    iVar17 = 0;
    if (cVar3 == '\0') {
      if ((longlong)*(int *)(lVar6 + 0x70) == 0) goto LAB_14072d052;
      plVar11 = (longlong *)(*(longlong *)(lVar6 + 0x68) + 0x68);
      lVar18 = (longlong)*(int *)(lVar6 + 0x70) * 0xb8;
      do {
        if ((((*(int *)((longlong)plVar11 + -0x5c) != (int)param_1[0x32]) ||
             ((int)plVar11[-0xb] != *(int *)((longlong)param_1 + 0x194))) ||
            (*(int *)((longlong)plVar11 + -0x54) != (int)param_1[0x33])) ||
           (((int)plVar11[-10] != *(int *)((longlong)param_1 + 0x19c) ||
            (plVar15 = (longlong *)plVar11[-5], plVar15 == (longlong *)0x0)))) {
          QueryPerformanceCounter(&local_b0);
          fVar21 = (float)((double)local_b0.QuadPart * DAT_14c83f420 + 16777216.0);
          if (((char)plVar11[-6] != '\0') || (0.0 < *(float *)((longlong)plVar11 + -0x2c))) {
            uVar5 = FUN_1447addd0((longlong)plVar11 + -0x5c,0x10);
            pfVar8 = (float *)FUN_1487e00f6(param_1 + 0x44,uVar5,(longlong)plVar11 + -0x5c);
            if (0.0 <= *pfVar8) {
              if ((((char)plVar11[-6] == '\x01') && (0.0 < pfVar8[1])) ||
                 (fVar20 = fVar21 - *pfVar8,
                 *(float *)((longlong)plVar11 + -0x2c) <= fVar20 &&
                 fVar20 != *(float *)((longlong)plVar11 + -0x2c))) goto LAB_14072cc4c;
            }
            else {
              *pfVar8 = fVar21;
            }
          }
          else {
            pfVar8 = (float *)0x0;
          }
          lVar6 = plVar11[1];
          if (lVar6 == 0) {
            uVar7 = FUN_140067708();
            lVar6 = FUN_14477b664(uVar7);
            plVar11[1] = lVar6;
          }
          if (plVar11[2] == 0) {
            if ((lVar6 != 0) && (*plVar11 != 0)) {
              plVar15 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar15 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar3 == '\0')) {
                plVar11[2] = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar15 + 0x110))(plVar15);
                lVar6 = FUN_144aff482(uVar7,plVar11);
                plVar11[2] = lVar6;
                if (lVar6 != 0) goto LAB_14072cbe8;
              }
            }
            if (((char)plVar11[-2] != '\x01') || (*(longlong *)((longlong)plVar11 + -0xc) == 0))
            goto LAB_14072cc4c;
          }
LAB_14072cbe8:
          plVar15 = (longlong *)plVar11[-9];
          if (plVar15 != (longlong *)0x0) {
            local_b0.QuadPart = local_b0.QuadPart & 0xffffffffffffff00;
            local_88[0] = 0;
            FUN_1456bb102(&local_b0,local_f8);
            cVar3 = (**(code **)(*plVar15 + 0x90))(plVar15,0,&local_b0);
            FUN_1448173f8(local_88);
            if ((local_b0.s.LowPart._0_1_ == '\x03') && (local_a0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_a0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_a0 + 0x10))();
              }
            }
            if (cVar3 == '\0') goto LAB_14072cc4c;
          }
          if (pfVar8 != (float *)0x0) {
            pfVar8[1] = fVar21;
          }
LAB_14072d031:
          plVar15 = plVar11 + -0xd;
          if (plVar15 == (longlong *)0x0) goto LAB_14072d052;
          iVar12 = *(int *)((longlong)plVar11 + -0x5c);
          iVar9 = (int)plVar11[-0xb];
          iVar13 = *(int *)((longlong)plVar11 + -0x54);
          iVar17 = (int)plVar11[-10];
          break;
        }
        local_b0.QuadPart = local_b0.QuadPart & 0xffffffffffffff00;
        local_88[0] = 0;
        FUN_1456bb102(&local_b0,local_f8);
        cVar3 = (**(code **)(*plVar15 + 0x90))(plVar15,0,&local_b0);
        lVar6 = DAT_14c9a3da0;
        if ((longlong)local_88[0] != 0) {
          lVar16 = (longlong)local_88[0] + -1;
          lVar14 = lVar16 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
          if (*(longlong *)(lVar6 + lVar14) != 0) {
            FUN_1400020a8();
          }
          lVar6 = DAT_14c9a3da0;
          iVar12 = (int)lVar16;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
          }
          *(undefined4 *)(lVar6 + lVar14) = 0xffffffff;
          iVar9 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar9 = DAT_14c9a3dd0;
          }
          *(int *)(lVar6 + 4 + lVar14) = iVar9;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar10 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar10 = DAT_14c9a3dc0;
          }
          iVar9 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar9 = iVar12;
          }
          bVar2 = (byte)lVar16 & 0x1f;
          DAT_14c9a3dd0 = iVar12;
          *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
               *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
               (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
          local_88[0] = 0;
        }
        if ((local_b0.s.LowPart._0_1_ == '\x03') && (local_a0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a0 + 0x10))();
          }
        }
        if (cVar3 != '\0') goto LAB_14072d031;
LAB_14072cc4c:
        plVar11 = plVar11 + 0x17;
        plVar15 = (longlong *)0x0;
        iVar12 = 0;
        iVar9 = 0;
        iVar13 = 0;
        iVar17 = 0;
        lVar18 = lVar18 + -0xb8;
      } while (lVar18 != 0);
    }
  }
  if ((((iVar12 == (int)param_1[0x32]) && (iVar9 == *(int *)((longlong)param_1 + 0x194))) &&
      (iVar13 == (int)param_1[0x33])) && (iVar17 == *(int *)((longlong)param_1 + 0x19c)))
  goto LAB_14072ccab;
  local_f0 = param_1 + 0x34;
  cVar3 = FUN_144904448();
  if (cVar3 != '\0') {
    lVar18 = param_1[0x40];
    if (lVar18 == 0) {
      uVar7 = FUN_140067708();
      lVar18 = FUN_14477b664(uVar7);
      param_1[0x40] = lVar18;
    }
    if (param_1[0x41] == 0) {
      if ((lVar18 != 0) && (param_1[0x3f] != 0)) {
        plVar11 = *(longlong **)(lVar18 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (local_e8 = plVar11, cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
          param_1[0x41] = 0;
        }
        else {
          uVar7 = (**(code **)(*local_e8 + 0x110))();
          lVar18 = FUN_144aff482(uVar7,param_1 + 0x3f);
          param_1[0x41] = lVar18;
          if (lVar18 != 0) goto LAB_14072cd86;
        }
      }
      if (((char)param_1[0x3d] != '\x01') || (*(longlong *)((longlong)param_1 + 0x1ec) == 0)) {
        FUN_14072d42a(local_f0,0x42c80000);
        goto LAB_14072ce0a;
      }
    }
LAB_14072cd86:
    plVar11 = (longlong *)*local_f0;
    if (((plVar11 == (longlong *)0x0) || (param_1[0x35] == -1)) || (*plVar11 != param_1[0x35])) {
      plVar11 = (longlong *)0x0;
    }
    else {
      *(int *)(plVar11 + 0x21) = (int)plVar11[0x21] + 1;
    }
    local_c8 = 0;
    uStack_c0 = 0;
    uVar7 = FUN_140206ee8(param_1 + 0x3d);
    local_108 = (ulonglong)local_108._4_4_ << 0x20;
    FUN_14084a448(plVar11,&local_b0,uVar7,local_f8);
    local_b0.QuadPart = 0;
    local_a8 = 0xffffffffffffffff;
    if (((plVar11 != (longlong *)0x0) &&
        (*(int *)(plVar11 + 0x21) = (int)plVar11[0x21] + -1, (int)plVar11[0x26] < 1)) &&
       (FUN_1400847bc(plVar11 + 0x17,0), (int)plVar11[0x21] == 0)) {
      FUN_140087e46(plVar11);
      if (*plVar11 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14072ce0a;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar11);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar11);
      }
    }
  }
LAB_14072ce0a:
  *(int *)(param_1 + 0x32) = iVar12;
  *(int *)((longlong)param_1 + 0x194) = iVar9;
  *(int *)(param_1 + 0x33) = iVar13;
  *(int *)((longlong)param_1 + 0x19c) = iVar17;
  plVar11 = param_1 + 0x37;
  FUN_14573fd02(plVar11,plVar15);
  if (((*(int *)((longlong)param_1 + 0x194) == 0 && (int)param_1[0x32] == 0) &&
      (int)param_1[0x33] == 0) && *(int *)((longlong)param_1 + 0x19c) == 0) goto LAB_14072ccab;
  lVar18 = param_1[0x3a];
  if (lVar18 == 0) {
    uVar7 = FUN_140067708();
    lVar18 = FUN_14477b664(uVar7);
    param_1[0x3a] = lVar18;
  }
  if (param_1[0x3b] == 0) {
    if ((lVar18 != 0) && (param_1[0x39] != 0)) {
      plVar15 = *(longlong **)(lVar18 + 0xb8);
      if ((plVar15 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar3 == '\0')) {
        param_1[0x3b] = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar15 + 0x110))(plVar15);
        lVar18 = FUN_144aff482(uVar7,param_1 + 0x39);
        param_1[0x3b] = lVar18;
        if (lVar18 != 0) goto LAB_14072ce72;
      }
    }
    if (((char)*plVar11 != '\x01') || (*(longlong *)((longlong)param_1 + 0x1bc) == 0))
    goto LAB_14072ccab;
  }
LAB_14072ce72:
  local_108 = 0;
  FUN_140b32deb(&local_e0,local_f8,plVar11,0);
  param_1[0x34] = local_e0;
  param_1[0x35] = local_d8;
  param_1[0x36] = local_d0;
  FUN_14072db1c(param_1[0x2d],local_f0);
LAB_14072ccab:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072d3a6 FUN_14072d3a6 body=132 status=ok
// SIG undefined FUN_14072d3a6(void)

undefined8 FUN_14072d3a6(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_14017698e(*(undefined8 *)(param_1 + 0xa8));
  if ((plVar3 == (longlong *)0x0) ||
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3), plVar3 == (longlong *)0x0)) {
    return 0;
  }
  cVar1 = FUN_14017695c(plVar3,0);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 1;
  }
  uVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
  lVar5 = FUN_140a436e4(plVar3 + 0xd,uVar4);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(lVar5 + 0x2d);
  }
  *param_2 = uVar2;
  return 1;
}



// FUNCTION 14072d42a FUN_14072d42a body=179 status=ok
// SIG undefined FUN_14072d42a(void)

void FUN_14072d42a(longlong *param_1,float param_2)

{
  longlong *plVar1;
  
  if ((((param_1[2] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) &&
      (param_1[1] != -1)) && (*plVar1 == param_1[1])) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    FUN_14072da56(plVar1,param_1[2],(int)(param_2 * 1000.0));
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



// FUNCTION 14072d4de FUN_14072d4de body=425 status=ok
// SIG undefined FUN_14072d4de(void)

undefined8 FUN_14072d4de(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14017698e(*(undefined8 *)(param_1 + 0xa8));
  if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 != 0)) {
    lVar1 = *(longlong *)(lVar4 + 0x148);
    local_30 = lVar1;
    uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x150));
    local_28 = FUN_14477b664(uVar5);
    lVar4 = *(longlong *)(lVar4 + 0x158);
    local_20 = lVar4;
    if (local_28 == 0) {
      uVar5 = FUN_14043db3a();
      local_28 = FUN_14477b664(uVar5);
    }
    if (lVar4 != 0) {
LAB_14072d55b:
      if (local_28 == 0) {
        uVar5 = FUN_14043db3a();
        local_28 = FUN_14477b664(uVar5);
        lVar4 = local_20;
        if (((local_20 == 0) && (lVar4 = 0, local_28 != 0)) && (local_30 != 0)) {
          plVar3 = *(longlong **)(local_28 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
            lVar4 = 0;
            local_20 = lVar4;
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar4 = FUN_144aff482(uVar5,&local_30);
            local_20 = lVar4;
          }
        }
      }
      uVar5 = FUN_14072d688(lVar4);
      goto LAB_14072d56c;
    }
    local_20 = 0;
    uVar5 = 0;
    if ((lVar1 == 0) || (local_28 == 0)) goto LAB_14072d56c;
    plVar3 = *(longlong **)(local_28 + 0xb8);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 != '\0')) {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar4 = FUN_144aff482(uVar5,&local_30);
      local_20 = lVar4;
      if (lVar4 != 0) goto LAB_14072d55b;
    }
  }
  uVar5 = 0;
LAB_14072d56c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14072d688 FUN_14072d688 body=136 status=ok
// SIG undefined FUN_14072d688(void)

void FUN_14072d688(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 == 0) {
    uVar3 = FUN_14573fd8c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x58) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x50));
    }
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14072d710 FUN_14072d710 body=607 status=ok
// SIG undefined FUN_14072d710(void)

ulonglong FUN_14072d710(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
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
  plVar3 = *(longlong **)(param_1 + 0xa8);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_14072d970();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_14072d970();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
         (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), (*(byte *)(lVar5 + 0x308) & 1) != 0)) {
        uVar6 = 0;
        goto LAB_14072d7f8;
      }
    }
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148630fef;
        local_60 = FUN_1464b6a91;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb56270);
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cb56270 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_1427b09ee;
          local_58 = &LAB_148630fef;
          local_60 = FUN_1464b6a91;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10004001;
          local_80 = 8;
          local_88 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb56270);
        if (((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
           ((param_2 == '\0' || (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x60) < '\0')))) {
          uVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
          uVar6 = (ulonglong)uVar1 ^ 1;
        }
      }
    }
  }
LAB_14072d7f8:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14072d970 FUN_14072d970 body=228 status=ok
// SIG undefined FUN_14072d970(void)

longlong FUN_14072d970(void)

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
  if (DAT_14cb68e18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14874b457;
    local_40 = FUN_14651e56f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GoreableInterface",&DAT_14cb68e18,&DAT_14874b456);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68e18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072da56 FUN_14072da56 body=157 status=ok
// SIG undefined FUN_14072da56(void)

void FUN_14072da56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x120);
    do {
      lVar1 = *plVar2;
      plVar2 = (longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0 && lVar1 != param_2);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x20) == '\x01') {
        local_28 = lVar1;
        FUN_14033ab0a();
      }
      else if (DAT_14cb25ab0 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072db1c FUN_14072db1c body=255 status=ok
// SIG undefined FUN_14072db1c(void)

void FUN_14072db1c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_14017698e(*(undefined8 *)(param_1 + 0xa8));
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (lVar2 != 0) {
      local_18 = (longlong *)*param_2;
      if (((local_18 == (longlong *)0x0) || (param_2[1] == -1)) || (*local_18 != param_2[1])) {
        local_18 = (longlong *)0x0;
      }
      else {
        *(int *)(local_18 + 0x21) = (int)local_18[0x21] + 1;
      }
      FUN_140c02e42(lVar2,&local_18);
      plVar1 = local_18;
      if ((local_18 != (longlong *)0x0) &&
         (*(int *)(local_18 + 0x21) = (int)local_18[0x21] + -1, (int)local_18[0x26] < 1)) {
        FUN_1400847bc(local_18 + 0x17,0);
        if ((int)plVar1[0x21] == 0) {
          FUN_140087e46(plVar1);
          if (*plVar1 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_14072dba1;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
          }
        }
      }
    }
  }
LAB_14072dba1:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072dc1c FUN_14072dc1c body=81 status=ok
// SIG undefined FUN_14072dc1c(void)

void FUN_14072dc1c(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x58) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x50));
    return;
  }
  return;
}



// FUNCTION 14072dc6e FUN_14072dc6e body=86 status=ok
// SIG undefined FUN_14072dc6e(void)

longlong * FUN_14072dc6e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14072dcd6 FUN_14072dcd6 body=1024 status=ok
// SIG undefined FUN_14072dcd6(void)

/* WARNING: Removing unreachable block (ram,0x00014072e065) */
/* WARNING: Removing unreachable block (ram,0x00014072e072) */
/* WARNING: Removing unreachable block (ram,0x00014072e076) */

void FUN_14072dcd6(undefined8 param_1,byte *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined ***pppuVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  byte *local_138;
  byte *local_130;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1448a4298(local_128);
  if (*param_2 == 1) {
    iVar13 = *(int *)(param_2 + 0x30);
    uVar24 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_2 + 0x44) * uVar24;
    bVar15 = 1;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar11 = uVar2 & 0x7fff;
    uVar24 = (uint)(uVar2 >> 0xf);
    lVar17 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar16 = (ulonglong)(uVar11 * *(int *)(lVar17 + 0x80)) + *(longlong *)(lVar17 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar17 + 0x20);
      lVar16 = 0;
      if (iVar13 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar13;
          iVar13 = (*(int **)(lVar17 + 0x20))[lVar16 + 1];
          lVar16 = lVar16 + 1;
        } while (iVar13 <= (int)uVar11);
      }
      lVar16 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar17 + 0x18) + lVar16 * 8);
    }
    iVar13 = *(int *)(lVar17 + 0x4c) * uVar24;
    bVar15 = *param_2;
  }
  if ((bVar15 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar11 = uVar2 & 0x7fff;
    lVar19 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar17 = (ulonglong)(uVar11 * *(int *)(lVar19 + 0x80)) + *(longlong *)(lVar19 + 0x70);
    }
    else {
      iVar20 = **(int **)(lVar19 + 0x20);
      lVar17 = 0;
      if (iVar20 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar20;
          iVar20 = (*(int **)(lVar19 + 0x20))[lVar17 + 1];
          lVar17 = lVar17 + 1;
        } while (iVar20 <= (int)uVar11);
      }
      lVar17 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar19 + 0x18) + lVar17 * 8);
    }
    uVar11 = (uint)(uVar2 >> 0xf);
    pbVar18 = (byte *)(lVar19 + 0x4c);
  }
  else {
    iVar20 = *(int *)(param_2 + 0x30);
    uVar11 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar20);
    *(int *)(param_2 + 0x30) = iVar20 + 1;
    lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar20 * 8);
    pbVar18 = param_2 + 0x44;
  }
  iVar20 = *(int *)pbVar18;
  *(undefined1 *)(local_120 + 0x139) = 1;
  local_130 = param_2 + 0x3c;
  bVar15 = *param_2;
  lVar19 = *(longlong *)(param_2 + 0x80);
  pbVar18 = (byte *)(lVar19 + 0x40);
  if (bVar15 != 0) {
    pbVar18 = local_130;
  }
  if (0 < *(int *)pbVar18) {
    piVar22 = (int *)(lVar16 + (longlong)iVar13 * 4);
    puVar23 = (undefined4 *)(lVar17 + (longlong)(int)(iVar20 * uVar11) * 4);
    uVar21 = (ulonglong)(uVar11 << 2);
    uVar25 = (ulonglong)(uVar24 << 2);
    iVar13 = 0;
    local_148 = uVar21;
    local_140 = uVar25;
    local_138 = param_2;
    do {
      uVar10 = uStack_90;
      uVar9 = local_98;
      uVar8 = uStack_9c;
      iVar7 = iStack_a0;
      ppuVar6 = local_a8;
      uVar5 = uStack_b0;
      uVar4 = uStack_c0;
      lVar16 = local_120;
      iVar20 = *piVar22;
      if (0 < iVar20) {
        local_d8 = iVar20;
        uStack_60 = CONCAT44(uStack_9c,iStack_a0);
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = CONCAT44(uStack_e4,local_e8);
        uStack_90 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = &PTR_FUN_14be783c0;
        iStack_a0 = iVar20;
        uStack_9c = *puVar23;
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_b8 = (undefined ***)0x0;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        local_c8 = FUN_144618558;
        uStack_80._0_4_ = (undefined4)uVar4;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar5;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_58._0_4_ = (undefined4)uVar9;
        local_e8 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_e4 = local_58._4_4_;
        uStack_50._0_4_ = (undefined4)uVar10;
        uStack_e0 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_dc = uStack_50._4_4_;
        local_f8 = ppuVar6;
        iStack_f0 = iVar7;
        uStack_ec = uVar8;
        uStack_50 = uVar10;
        local_58 = uVar9;
        local_68 = ppuVar6;
        uStack_70 = uVar5;
        local_78 = 0;
        uStack_80 = uVar4;
        local_88 = 0;
        local_a8 = &PTR_FUN_14be783c0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_144618558;
        local_108 = 0;
        local_118 = 0;
        puVar12 = (undefined8 *)FUN_14001cc68(0x60,0x10);
        *puVar12 = 0;
        *(int *)(puVar12 + 2) = iVar20;
        puVar12[4] = local_c8;
        puVar12[6] = 0;
        if (local_c8 != (code *)0x0) {
          pppuVar14 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar14 = &local_a8;
          }
          (*(code *)**pppuVar14)(pppuVar14,puVar12 + 6);
        }
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          puVar1 = *(undefined8 **)(lVar16 + 0x70);
          *(undefined8 **)(lVar16 + 0x70) = puVar12;
          UNLOCK();
          LOCK();
          *puVar1 = puVar12;
          UNLOCK();
        }
        if (local_c8 != (code *)0x0) {
          pppuVar14 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar14 = &local_a8;
          }
          (*(code *)(*pppuVar14)[2])();
        }
        bVar15 = *local_138;
        lVar19 = *(longlong *)(local_138 + 0x80);
        uVar21 = local_148;
        uVar25 = local_140;
      }
      iVar13 = iVar13 + 1;
      pbVar18 = (byte *)(lVar19 + 0x40);
      if ((bVar15 & 1) != 0) {
        pbVar18 = local_130;
      }
      puVar23 = (undefined4 *)((longlong)puVar23 + uVar21);
      piVar22 = (int *)((longlong)piVar22 + uVar25);
    } while (iVar13 < *(int *)pbVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072e0d8 FUN_14072e0d8 body=39 status=ok
// SIG undefined FUN_14072e0d8(void)

undefined8 FUN_14072e0d8(undefined8 param_1,undefined8 param_2)

{
  FUN_14072e100(DAT_14ca712d8);
  return param_2;
}



// FUNCTION 14072e100 FUN_14072e100 body=174 status=ok
// SIG undefined FUN_14072e100(void)

undefined8 FUN_14072e100(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  bool bVar5;
  
  puVar1 = (uint *)(param_1 + 4);
  DVar3 = GetCurrentThreadId();
  uVar4 = *(uint *)(param_1 + 4);
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar5 = uVar4 == uVar2;
    if (bVar5) {
      *puVar1 = uVar4 | 1;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
    if (bVar5) {
      *(DWORD *)(param_1 + 8) = DVar3;
      goto LAB_14072e13f;
    }
  }
  if (*(DWORD *)(param_1 + 8) == DVar3) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar4);
  }
LAB_14072e13f:
  FUN_144a2453c(param_1 + 0xa0,param_2);
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 < 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (uVar4 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar4 == uVar2) {
        *puVar1 = 0;
      }
      UNLOCK();
      if (uVar4 == uVar2) {
        return param_2;
      }
    }
    FUN_140d366d2(puVar1);
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14072e1ae FUN_14072e1ae body=19 status=ok
// SIG undefined FUN_14072e1ae(void)

void FUN_14072e1ae(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14072e1c2 FUN_14072e1c2 body=193 status=ok
// SIG undefined FUN_14072e1c2(void)

int FUN_14072e1c2(uint param_1,int *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  if (DAT_14ca712e8 != DAT_14ca71314) {
    puVar5 = &DAT_14ca71318;
    if (DAT_14ca71320 != (undefined *)0x0) {
      puVar5 = DAT_14ca71320;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(DAT_14ca71328 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      bVar2 = *(byte *)((longlong)param_2 + 5);
      do {
        lVar4 = (longlong)iVar3 * 0x2c;
        if ((((*(int *)(DAT_14ca712e0 + lVar4) == *param_2) &&
             (lVar1 = DAT_14ca712e0 + lVar4, *(byte *)(lVar1 + 5) == bVar2)) &&
            (*(char *)(lVar1 + 4) == (char)param_2[1])) &&
           (*(char *)(lVar1 + 0x16) == *(char *)((longlong)param_2 + 0x16))) {
          if ((ulonglong)bVar2 == 0) {
            return iVar3;
          }
          uVar6 = 0;
          while ((*(char *)(lVar1 + 6 + uVar6) == *(char *)((longlong)param_2 + uVar6 + 6) &&
                 (*(char *)(lVar1 + 0xe + uVar6) == *(char *)((longlong)param_2 + uVar6 + 0xe)))) {
            uVar6 = uVar6 + 1;
            if (bVar2 == uVar6) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(DAT_14ca712e0 + 0x24 + lVar4);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 14072e283 FUN_14072e283 body=129 status=ok
// SIG undefined FUN_14072e283(void)

void FUN_14072e283(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x1000100000000;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f80000000000000;
  memset((void *)((longlong)param_1 + 0x44),0,0x81);
  *(undefined1 *)((longlong)param_1 + 0xc5) = 4;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  return;
}



// FUNCTION 14072e304 FUN_14072e304 body=698 status=ok
// SIG undefined FUN_14072e304(void)

uint FUN_14072e304(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *param_1 - (uint)*(byte *)(param_1 + 1);
  uVar6 = iVar2 * 0x100 ^ 0x9e3779b9U - *param_1;
  uVar5 = uVar6 >> 0xd ^ ((uint)*(byte *)(param_1 + 1) - iVar2) - uVar6;
  uVar3 = uVar5 >> 0xc ^ (iVar2 - uVar6) - uVar5;
  uVar6 = uVar3 << 0x10 ^ (uVar6 - uVar5) - uVar3;
  uVar5 = uVar6 >> 5 ^ (uVar5 - uVar3) - uVar6;
  uVar3 = uVar5 >> 3 ^ (uVar3 - uVar6) - uVar5;
  uVar6 = uVar3 << 10 ^ (uVar6 - uVar5) - uVar3;
  uVar6 = uVar6 >> 0xf ^ uVar5 - (uVar3 + uVar6);
  bVar1 = *(byte *)((longlong)param_1 + 5);
  iVar2 = uVar6 - bVar1;
  uVar6 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar3 = uVar6 >> 0xd ^ ((uint)bVar1 - iVar2) - uVar6;
  uVar7 = uVar3 >> 0xc ^ (iVar2 - uVar6) - uVar3;
  uVar6 = uVar7 << 0x10 ^ (uVar6 - uVar3) - uVar7;
  uVar5 = uVar6 >> 5 ^ (uVar3 - uVar7) - uVar6;
  uVar3 = uVar5 >> 3 ^ (uVar7 - uVar6) - uVar5;
  uVar6 = uVar3 << 10 ^ (uVar6 - uVar5) - uVar3;
  uVar6 = uVar6 >> 0xf ^ uVar5 - (uVar3 + uVar6);
  iVar2 = uVar6 - *(byte *)((longlong)param_1 + 0x16);
  uVar3 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar6 = uVar3 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 0x16) - iVar2) - uVar3;
  uVar5 = uVar6 >> 0xc ^ (iVar2 - uVar3) - uVar6;
  uVar3 = uVar5 << 0x10 ^ (uVar3 - uVar6) - uVar5;
  uVar7 = uVar3 >> 5 ^ (uVar6 - uVar5) - uVar3;
  uVar5 = uVar7 >> 3 ^ (uVar5 - uVar3) - uVar7;
  uVar6 = uVar5 << 10 ^ (uVar3 - uVar7) - uVar5;
  uVar6 = uVar6 >> 0xf ^ uVar7 - (uVar5 + uVar6);
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = (uint)*(byte *)((longlong)param_1 + uVar4 + 6);
      iVar2 = uVar6 - uVar3;
      uVar6 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar6;
      uVar5 = uVar6 >> 0xd ^ (uVar3 - iVar2) - uVar6;
      uVar3 = uVar5 >> 0xc ^ (iVar2 - uVar6) - uVar5;
      uVar6 = uVar3 << 0x10 ^ (uVar6 - uVar5) - uVar3;
      uVar5 = uVar6 >> 5 ^ (uVar5 - uVar3) - uVar6;
      uVar3 = uVar5 >> 3 ^ (uVar3 - uVar6) - uVar5;
      uVar6 = uVar3 << 10 ^ (uVar6 - uVar5) - uVar3;
      uVar6 = uVar6 >> 0xf ^ uVar5 - (uVar3 + uVar6);
      uVar3 = (uint)*(byte *)((longlong)param_1 + uVar4 + 0xe);
      iVar2 = uVar6 - uVar3;
      uVar6 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar6;
      uVar5 = uVar6 >> 0xd ^ (uVar3 - iVar2) - uVar6;
      uVar3 = uVar5 >> 0xc ^ (iVar2 - uVar6) - uVar5;
      uVar6 = uVar3 << 0x10 ^ (uVar6 - uVar5) - uVar3;
      uVar5 = uVar6 >> 5 ^ (uVar5 - uVar3) - uVar6;
      uVar3 = uVar5 >> 3 ^ (uVar3 - uVar6) - uVar5;
      uVar6 = uVar3 << 10 ^ (uVar6 - uVar5) - uVar3;
      uVar6 = uVar6 >> 0xf ^ uVar5 - (uVar3 + uVar6);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  return uVar6;
}



// FUNCTION 14072e5be FUN_14072e5be body=875 status=ok
// SIG undefined FUN_14072e5be(void)

uint FUN_14072e5be(void)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  piVar2 = DAT_14cb0fd58;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar6 + 0xc60);
  if (iVar11 == 0x40000002) {
    iVar9 = *DAT_14cb0fd58;
    bVar8 = *DAT_14cb0fd70;
LAB_14072e8a9:
    iVar11 = 0x40000002;
LAB_14072e8b5:
    uVar7 = 0;
    lVar6 = DAT_14cb0fd88;
  }
  else {
    piVar1 = (int *)(lVar6 + 0xc60);
    if (DAT_14c86a9f8 == 0) {
      iVar9 = *DAT_14cb0fd58;
    }
    else if (iVar11 == 2) {
      iVar9 = *DAT_14cb0fd58;
      iVar11 = 2;
    }
    else {
      uVar7 = 1;
      if (iVar11 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar4 != DVar5);
        iVar11 = *piVar1;
      }
      iVar9 = piVar2[uVar7];
      if (iVar11 == 0x40000002) {
        bVar8 = *DAT_14cb0fd70;
        goto LAB_14072e8a9;
      }
    }
    pbVar3 = DAT_14cb0fd70;
    if (((DAT_14c86a9f8 & 1) == 0) || (iVar11 == 2)) {
      bVar8 = *DAT_14cb0fd70;
    }
    else {
      uVar7 = 1;
      if (iVar11 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar4 != DVar5);
        iVar11 = *piVar1;
      }
      bVar8 = pbVar3[uVar7];
      if (iVar11 == 0x40000002) {
        iVar11 = 0x40000002;
        goto LAB_14072e8b5;
      }
    }
    lVar6 = DAT_14cb0fd88;
    if ((DAT_14c86a9f8 != 1) || (iVar11 == 2)) goto LAB_14072e8b5;
    if (iVar11 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
      iVar11 = *piVar1;
    }
    else {
      uVar7 = 1;
    }
  }
  uVar10 = *(uint *)(lVar6 + uVar7 * 4);
  if (DAT_14c86a9fc == 0) {
    if (iVar11 == 2) goto LAB_14072e6ca;
    if (iVar11 != 1) goto LAB_14072e69a;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 == DVar5) goto LAB_14072e6ca;
  }
  else {
LAB_14072e69a:
    if (iVar11 == 0x10) {
LAB_14072e6ca:
      lVar6 = 4;
      goto LAB_14072e6cf;
    }
  }
  lVar6 = 0;
LAB_14072e6cf:
  uVar12 = 0;
  if (0 < (int)uVar10) {
    uVar12 = uVar10;
  }
  iVar11 = iVar9 - (uint)bVar8;
  uVar14 = 0x9e3779b9U - iVar9 ^ iVar11 * 0x100;
  uVar13 = uVar14 >> 0xd ^ ((uint)bVar8 - iVar11) - uVar14;
  uVar10 = uVar13 >> 0xc ^ (iVar11 - uVar14) - uVar13;
  uVar14 = uVar10 << 0x10 ^ (uVar14 - uVar13) - uVar10;
  uVar15 = uVar14 >> 5 ^ (uVar13 - uVar10) - uVar14;
  uVar13 = uVar15 >> 3 ^ (uVar10 - uVar14) - uVar15;
  uVar10 = uVar13 << 10 ^ (uVar14 - uVar15) - uVar13;
  uVar10 = uVar12 >> 0xd ^ (uVar10 >> 0xf ^ uVar15 - (uVar13 + uVar10)) - uVar12;
  uVar14 = uVar10 << 8 ^ (-0x61c88647 - uVar12) - uVar10;
  uVar13 = uVar14 >> 0xd ^ (uVar12 - uVar10) - uVar14;
  uVar10 = uVar13 >> 0xc ^ (uVar10 - uVar14) - uVar13;
  uVar12 = uVar10 << 0x10 ^ (uVar14 - uVar13) - uVar10;
  uVar14 = uVar12 >> 5 ^ (uVar13 - uVar10) - uVar12;
  uVar13 = uVar14 >> 3 ^ (uVar10 - uVar12) - uVar14;
  uVar12 = uVar13 << 10 ^ (uVar12 - uVar14) - uVar13;
  uVar10 = *(uint *)((longlong)&DAT_14cb0fdb0 + lVar6);
  uVar13 = uVar10 >> 0xd ^ (uVar12 >> 0xf ^ uVar14 - (uVar13 + uVar12)) - uVar10;
  uVar14 = uVar13 << 8 ^ (-0x61c88647 - uVar10) - uVar13;
  uVar12 = uVar14 >> 0xd ^ (uVar10 - uVar13) - uVar14;
  uVar10 = uVar12 >> 0xc ^ (uVar13 - uVar14) - uVar12;
  uVar13 = uVar10 << 0x10 ^ (uVar14 - uVar12) - uVar10;
  uVar14 = uVar13 >> 5 ^ (uVar12 - uVar10) - uVar13;
  uVar12 = uVar14 >> 3 ^ (uVar10 - uVar13) - uVar14;
  uVar10 = uVar12 << 10 ^ (uVar13 - uVar14) - uVar12;
  return uVar10 >> 0xf ^ uVar14 - (uVar12 + uVar10);
}



// FUNCTION 14072e92a FUN_14072e92a body=353 status=ok
// SIG undefined FUN_14072e92a(void)

void FUN_14072e92a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14072e9af;
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
LAB_14072e9af:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14072ea8c FUN_14072ea8c body=437 status=ok
// SIG undefined FUN_14072ea8c(void)

void FUN_14072ea8c(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(uint *)(param_1 + 0xb0) = param_2;
  iVar2 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar2 + param_2;
  if ((uint)(*(int *)(param_1 + 0x9c) - iVar2) < param_2) {
    FUN_14573ffbe(param_1 + 0x90);
  }
  memset((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x90)),0,(longlong)(int)param_2 << 3
        );
  FUN_1404b04e2(param_1 + 0x50,param_2);
  lVar1 = param_1 + 0x28;
  if (*(uint *)(param_1 + 0x2c) != param_2) {
    FUN_145740042(lVar1,param_2);
  }
  if (*(uint *)(param_1 + 0x30) != param_2) {
    FUN_1457400ca(lVar1,param_2);
  }
  if (1 < param_2) {
    uVar6 = 1;
    uVar7 = 2;
    do {
      if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x2c)) {
        uVar8 = *(int *)(param_1 + 0x28) * 2;
        uVar3 = 0x20;
        if (0x20 < uVar8) {
          uVar3 = uVar8;
        }
        FUN_145740042(lVar1,uVar3);
      }
      uVar8 = uVar6 & 0xffff;
      if (*(uint *)(param_1 + 0x30) <= uVar8) {
        uVar3 = (uVar7 & 0x1fffe) + 1;
        iVar2 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar4 = 1 << ((byte)iVar2 & 0x1f);
        uVar3 = 0x20;
        if (0x20 < uVar4) {
          uVar3 = uVar4;
        }
        FUN_1457400ca(lVar1,uVar3);
      }
      uVar3 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar3 + 1;
      *(short *)(*(longlong *)(param_1 + 0x38) + ((ulonglong)uVar3 & 0xffff) * 2) = (short)uVar6;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar8 * 4) = 0;
      *(short *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar8 * 2) = (short)uVar3;
      FUN_1456e6cf4(lVar1);
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 2;
    } while (param_2 != uVar6);
  }
  iVar2 = *(int *)(param_1 + 0xa8);
  uVar6 = param_2 + 1;
  *(uint *)(param_1 + 0xa8) = param_2 + iVar2 + 1;
  if ((uint)(*(int *)(param_1 + 0xac) - iVar2) < uVar6) {
    FUN_14024b9b6((longlong *)(param_1 + 0xa0));
  }
  uVar7 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    lVar5 = (longlong)(int)uVar7;
    *(undefined4 *)(lVar1 + lVar5 * 0xc) = 0xffffffff;
    *(uint *)(lVar1 + 8 + lVar5 * 0xc) = uVar7 | 0xff000000;
    *(uint *)(lVar1 + 4 + lVar5 * 0xc) = uVar7 & 0xffffff | 0xf000000;
    uVar7 = uVar7 + 1;
  } while (uVar6 + (uVar6 == 0) != uVar7);
  return;
}



// FUNCTION 14072ec41 FUN_14072ec41 body=131 status=ok
// SIG undefined FUN_14072ec41(void)

longlong FUN_14072ec41(int param_1,uint param_2,int param_3,byte param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_4 == 0x19) {
    lVar3 = (ulonglong)param_2 * (ulonglong)(param_1 + 7U >> 3);
  }
  else {
    uVar4 = (ulonglong)((uint)param_4 * 0x30);
    if (param_3 != 0) {
      lVar3 = FUN_14681923e();
      return lVar3;
    }
    uVar1 = *(uint *)((longlong)&DAT_14c87341c + uVar4);
    if ((int)uVar1 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)((param_1 + uVar1) - 1) / (ulonglong)uVar1;
    }
    uVar1 = *(uint *)((longlong)&DAT_14c873420 + uVar4);
    if ((int)uVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)((param_2 + uVar1) - 1) / (ulonglong)uVar1;
    }
    lVar3 = (longlong)*(int *)((longlong)&DAT_14c873428 + uVar4) * uVar2 * uVar5;
  }
  return lVar3;
}



// FUNCTION 14072ecc4 FUN_14072ecc4 body=672 status=ok
// SIG undefined FUN_14072ecc4(void)

void FUN_14072ecc4(longlong param_1,longlong param_2,int param_3,int param_4,void **param_5)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Src;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  size_t _Size;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (void *)0x0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = *(undefined4 *)(param_1 + 0x38);
  uStack_5c = CONCAT22(uStack_5c._2_2_,0x101);
  if (0 < (longlong)*(int *)(param_1 + 0x58)) {
    lVar8 = (longlong)*(int *)(param_1 + 0x58);
    do {
      lVar10 = lVar8 + -1;
      if (((*(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + lVar10 * 0x28) <= param_4) &&
          (plVar11 = (longlong *)(*(longlong *)(param_1 + 0x50) + lVar10 * 0x28),
          *(int *)((longlong)plVar11 + 0x14) == 0 || param_4 <= *(int *)((longlong)plVar11 + 0x14)))
         && ((int)plVar11[1] == param_3)) {
        if (param_3 < 1) goto LAB_14072ee12;
        lVar9 = 1;
        do {
          cVar1 = *(char *)(*plVar11 + -1 + lVar9);
          cVar2 = *(char *)(param_2 + -1 + lVar9);
          if (param_3 <= lVar9) break;
          lVar9 = lVar9 + 1;
        } while (cVar2 == cVar1);
        if (cVar2 == cVar1) goto LAB_14072ee12;
      }
      bVar7 = 1 < lVar8;
      lVar8 = lVar10;
    } while (bVar7);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x48)) {
    bVar7 = false;
    lVar8 = (longlong)*(int *)(param_1 + 0x48);
    do {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x40) + (lVar8 + -1) * 0x28);
      if ((((int)plVar11[2] <= param_4) &&
          (*(int *)((longlong)plVar11 + 0x14) == 0 || param_4 <= *(int *)((longlong)plVar11 + 0x14))
          ) && ((int)plVar11[1] == param_3)) {
        if (param_3 < 1) goto LAB_14072ee12;
        lVar10 = 1;
        do {
          cVar1 = *(char *)(*plVar11 + -1 + lVar10);
          cVar2 = *(char *)(param_2 + -1 + lVar10);
          if (param_3 <= lVar10) break;
          lVar10 = lVar10 + 1;
        } while (cVar2 == cVar1);
        if (cVar2 == cVar1) goto LAB_14072ee12;
      }
      bVar3 = !bVar7;
      bVar7 = true;
      if (bVar3) {
        if ((int)plVar11[1] == 0) {
          bVar7 = 0 < (int)plVar11[3];
          local_80 = param_2;
          if (bVar7) {
            FUN_14574072c(&local_78,plVar11);
            local_68 = plVar11[2];
            uStack_60 = (undefined4)plVar11[3];
            uStack_5c = *(undefined4 *)((longlong)plVar11 + 0x1c);
            local_58 = (void *)plVar11[4];
            param_2 = local_80;
          }
        }
        else {
          bVar7 = false;
        }
      }
      bVar3 = 1 < lVar8;
      lVar8 = lVar8 + -1;
    } while (bVar3);
  }
  _Src = local_78;
  if (&local_78 != param_5) {
    iVar6 = (int)uStack_70;
    _Size = (size_t)(int)uStack_70;
    *(int *)(param_5 + 1) = (int)uStack_70;
    if ((int)uStack_70 == 0 && *(int *)((longlong)param_5 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_5 + 0xc) = 0;
    }
    else {
      FUN_145740780(param_5,uStack_70 & 0xffffffff);
      if (iVar6 != 0) {
        memcpy(*param_5,_Src,_Size);
      }
    }
  }
  param_5[4] = local_58;
  *(undefined4 *)(param_5 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_5 + 0x14) = local_68._4_4_;
  *(undefined4 *)(param_5 + 3) = uStack_60;
  *(undefined4 *)((longlong)param_5 + 0x1c) = uStack_5c;
LAB_14072ee2a:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14072ee12:
  FUN_14574072c(param_5,plVar11);
  uVar4 = *(undefined4 *)((longlong)plVar11 + 0x14);
  lVar8 = plVar11[3];
  uVar5 = *(undefined4 *)((longlong)plVar11 + 0x1c);
  *(int *)(param_5 + 2) = (int)plVar11[2];
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
  *(int *)(param_5 + 3) = (int)lVar8;
  *(undefined4 *)((longlong)param_5 + 0x1c) = uVar5;
  param_5[4] = (void *)plVar11[4];
  goto LAB_14072ee2a;
}



// FUNCTION 14072ef66 FUN_14072ef66 body=486 status=ok
// SIG undefined FUN_14072ef66(void)

void FUN_14072ef66(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14ca71320 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca71320,0,0,4);
  }
  uVar2 = DAT_14ca71328;
  uVar3 = local_60;
  if (DAT_14ca71328 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14ca71318,0,DAT_14ca71328,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14ca71320;
        if (DAT_14ca71320 == (undefined *)0x0) {
          puVar7 = &DAT_14ca71318;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14ca71328 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14ca712f0;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14ca71308 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14ca712e0;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x2c;
        iVar5 = FUN_14072e304(lVar1 + lVar9);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14ca71328 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x28 + lVar9) = iVar5;
        puVar7 = DAT_14ca71320;
        if (DAT_14ca71320 == (undefined *)0x0) {
          puVar7 = &DAT_14ca71318;
        }
        *(undefined4 *)(lVar1 + 0x24 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14ca71328 - 1U & uVar6) * 4);
        puVar7 = DAT_14ca71320;
        if (DAT_14ca71320 == (undefined *)0x0) {
          puVar7 = &DAT_14ca71318;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14ca71328 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14072f14e FUN_14072f14e body=25 status=ok
// SIG undefined FUN_14072f14e(void)

undefined8 FUN_14072f14e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14072f168 FUN_14072f168 body=137 status=ok
// SIG undefined FUN_14072f168(void)

void FUN_14072f168(longlong param_1)

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



// FUNCTION 14072f1f2 FUN_14072f1f2 body=1119 status=ok
// SIG undefined FUN_14072f1f2(void)

void FUN_14072f1f2(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  if (((((param_2 >> 0x20 != 0) && (uVar15 = (uint)param_2, -1 < (int)uVar15)) &&
       ((int)uVar15 < DAT_14c9647dc)) &&
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0xd & 0x3fff8))),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == (int)(param_2 >> 0x20))))) &&
     ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar12;
    }
    else {
      lVar11 = 0;
    }
    lVar11 = (**(code **)(*(longlong *)(lVar11 + 0x1108) + 0x10))(lVar11 + 0x1108);
    if ((longlong)*(int *)(lVar11 + 0x90) != 0) {
      lVar13 = *(longlong *)(lVar11 + 0x88);
      lVar16 = (longlong)*(int *)(lVar11 + 0x90) * 0x138;
      do {
        if (*(longlong *)(lVar13 + 0x10) == param_3) {
          if (lVar13 == 0) {
            return;
          }
          if ((param_3 != param_4) && (*(longlong *)(lVar13 + 0x20) != param_4)) {
            return;
          }
          if (0 < *(int *)(param_1 + 0x138)) {
            lVar16 = *(longlong *)(param_1 + 0x130);
            if ((*(byte *)(lVar16 + 0xad) & 1) != 0) {
              dVar20 = *(double *)(lVar16 + 0x28) * *(double *)(lVar11 + 0x1d0);
              dVar3 = *(double *)(lVar16 + 0x30) * *(double *)(lVar11 + 0x1d8);
              dVar23 = *(double *)(lVar16 + 0x38) * *(double *)(lVar11 + 0x1e0);
              dVar5 = *(double *)(lVar11 + 400);
              dVar6 = *(double *)(lVar11 + 0x198);
              dVar7 = *(double *)(lVar11 + 0x1a0);
              dVar19 = *(double *)(lVar11 + 0x1a8);
              dVar25 = *(double *)(lVar11 + 0x1a8);
              dVar17 = dVar3 * dVar5 - dVar20 * dVar6;
              dVar24 = dVar23 * dVar6 - dVar3 * dVar7;
              dVar4 = dVar20 * dVar7 - dVar23 * dVar5;
              dVar24 = dVar24 + dVar24;
              dVar4 = dVar4 + dVar4;
              dVar17 = dVar17 + dVar17;
              dVar20 = (dVar17 * dVar6 - dVar4 * dVar7) + dVar19 * dVar24 + dVar20 +
                       *(double *)(lVar11 + 0x1b0);
              dVar3 = (dVar7 * dVar24 - dVar5 * dVar17) + dVar25 * dVar4 + dVar3 +
                      *(double *)(lVar11 + 0x1b8);
              dVar8 = *(double *)(lVar16 + 0x58);
              dVar9 = *(double *)(lVar16 + 0x60);
              dVar22 = dVar9 * dVar5 - dVar6 * dVar8;
              dVar18 = *(double *)(lVar16 + 0x68) * dVar6 - dVar7 * dVar9;
              dVar21 = dVar8 * dVar7 - dVar5 * *(double *)(lVar16 + 0x68);
              dVar18 = dVar18 + dVar18;
              dVar21 = dVar21 + dVar21;
              dVar22 = dVar22 + dVar22;
              dVar17 = dVar17 * dVar19 + dVar23 + (dVar4 * dVar5 - dVar24 * dVar6) +
                       *(double *)(lVar11 + 0x1c0);
              dVar23 = dVar22 * dVar19 + *(double *)(lVar16 + 0x68) +
                       (dVar21 * dVar5 - dVar18 * dVar6);
              dVar19 = (dVar22 * dVar6 - dVar21 * dVar7) + dVar19 * dVar18 + dVar8;
              dVar25 = (dVar7 * dVar18 - dVar5 * dVar22) + dVar25 * dVar21 + dVar9;
              cVar10 = '\x02' - ((*(byte *)(lVar16 + 0xad) & 2) == 0);
              goto LAB_14072f600;
            }
          }
          dVar20 = *(double *)(param_1 + 0xe8) * *(double *)(lVar11 + 0x1d0);
          dVar21 = *(double *)(param_1 + 0xf0) * *(double *)(lVar11 + 0x1d8);
          dVar18 = *(double *)(param_1 + 0xf8) * *(double *)(lVar11 + 0x1e0);
          dVar23 = *(double *)(lVar11 + 400);
          dVar17 = *(double *)(lVar11 + 0x198);
          dVar3 = *(double *)(lVar11 + 0x1a0);
          dVar19 = *(double *)(lVar11 + 0x1a8);
          dVar22 = dVar21 * dVar23 - dVar20 * dVar17;
          dVar24 = dVar18 * dVar17 - dVar21 * dVar3;
          dVar25 = dVar20 * dVar3 - dVar23 * dVar18;
          dVar24 = dVar24 + dVar24;
          dVar25 = dVar25 + dVar25;
          dVar22 = dVar22 + dVar22;
          dVar20 = (dVar22 * dVar17 - dVar25 * dVar3) + dVar19 * dVar24 + dVar20 +
                   *(double *)(lVar11 + 0x1b0);
          dVar3 = (dVar3 * dVar24 - dVar23 * dVar22) + *(double *)(lVar11 + 0x1a8) * dVar25 + dVar21
                  + *(double *)(lVar11 + 0x1b8);
          dVar17 = dVar22 * dVar19 + dVar18 + (dVar25 * dVar23 - dVar24 * dVar17) +
                   *(double *)(lVar11 + 0x1c0);
          cVar10 = '\0';
          dVar19 = DAT_14c8462c0;
          dVar25 = DAT_14c8462c8;
          dVar23 = DAT_14c8462d0;
LAB_14072f600:
          pdVar1 = (double *)(lVar13 + 0x68);
          puVar14 = (undefined1 *)(lVar13 + 0xa8);
          if (param_3 != param_4) {
            puVar14 = (undefined1 *)(lVar13 + 0xf0);
            pdVar1 = (double *)(lVar13 + 0xb0);
          }
          *pdVar1 = dVar19;
          pdVar1[1] = dVar25;
          pdVar1[2] = dVar23;
          auVar2._8_4_ = SUB84(dVar3,0);
          auVar2._0_8_ = dVar20;
          auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          *(undefined1 (*) [16])(pdVar1 + 3) = auVar2;
          pdVar1[5] = dVar17;
          *(char *)(pdVar1 + 6) = cVar10;
          *(undefined8 *)((longlong)pdVar1 + 0x34) = 0;
          *puVar14 = 1;
          return;
        }
        lVar13 = lVar13 + 0x138;
        lVar16 = lVar16 + -0x138;
      } while (lVar16 != 0);
    }
  }
  return;
}



// FUNCTION 14072f652 FUN_14072f652 body=818 status=ok
// SIG undefined FUN_14072f652(void)

void FUN_14072f652(float *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_ac;
  
  fVar2 = param_1[2];
  fVar2 = (float)(longlong)
                 (fVar2 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar2 < 0.0) * 4)) *
          -6.2831855 + fVar2;
  if (1.5707964 < fVar2) {
    fVar1 = 3.1415927;
LAB_14072f970:
    fVar2 = fVar1 - fVar2;
    fVar1 = -1.0;
  }
  else {
    if (fVar2 < -1.5707964) {
      fVar1 = -3.1415927;
      goto LAB_14072f970;
    }
    fVar1 = 1.0;
  }
  fVar5 = param_1[1];
  fVar5 = (float)(longlong)
                 (fVar5 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar5 < 0.0) * 4)) *
          -6.2831855 + fVar5;
  if (1.5707964 < fVar5) {
    fVar4 = 3.1415927;
  }
  else {
    if (-1.5707964 <= fVar5) {
      local_ac = 1.0;
      goto LAB_14072f76b;
    }
    fVar4 = -3.1415927;
  }
  fVar5 = fVar4 - fVar5;
  local_ac = -1.0;
LAB_14072f76b:
  fVar6 = fVar2 * fVar2;
  fVar1 = fVar1 * (((((fVar6 * -2.6051615e-07 + 2.4760495e-05) * fVar6 + -0.0013888378) * fVar6 +
                    0.041666638) * fVar6 + -0.5) * fVar6 + 1.0);
  fVar3 = fVar5 * fVar5;
  fVar4 = *param_1;
  *param_2 = (double)((((((fVar3 * -2.6051615e-07 + 2.4760495e-05) * fVar3 + -0.0013888378) * fVar3
                        + 0.041666638) * fVar3 + -0.5) * fVar3 + 1.0) * local_ac * fVar1 * fVar4);
  param_2[1] = (double)((((((fVar3 * -2.3889859e-08 + 2.7525562e-06) * fVar3 + -0.00019840874) *
                           fVar3 + 0.008333331) * fVar3 + -0.16666667) * fVar3 + 1.0) * fVar5 *
                        fVar1 * fVar4);
  param_2[2] = (double)((((((fVar6 * -2.3889859e-08 + 2.7525562e-06) * fVar6 + -0.00019840874) *
                           fVar6 + 0.008333331) * fVar6 + -0.16666667) * fVar6 + 1.0) * fVar2 *
                       fVar4);
  return;
}



// FUNCTION 14072f984 FUN_14072f984 body=40 status=ok
// SIG undefined FUN_14072f984(void)

void FUN_14072f984(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14072f9ac();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 14072f9ac FUN_14072f9ac body=57 status=ok
// SIG undefined FUN_14072f9ac(void)

void FUN_14072f9ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c158 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c158 = FUN_140002ddd(FUN_14641f2b0,uVar1,L"GbxNavSpot");
  }
  return;
}



// FUNCTION 14072f9e6 FUN_14072f9e6 body=408 status=ok
// SIG undefined FUN_14072f9e6(void)

undefined8 * FUN_14072f9e6(undefined8 *param_1,longlong param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *_Dst;
  void *_Src;
  
  FUN_14072fb7e();
  *param_1 = &PTR_FUN_149e898a0;
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_14a8a3730;
  uVar3 = *(undefined4 *)(param_2 + 200);
  uVar4 = *(undefined4 *)(param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0xd0);
  uVar6 = *(undefined4 *)(param_2 + 0xd4);
  uVar7 = *(undefined4 *)(param_2 + 0xd8);
  uVar8 = *(undefined4 *)(param_2 + 0xdc);
  uVar9 = *(undefined4 *)(param_2 + 0xe0);
  uVar10 = *(undefined4 *)(param_2 + 0xe4);
  uVar11 = *(undefined4 *)(param_2 + 0xeb);
  uVar12 = *(undefined4 *)(param_2 + 0xef);
  uVar13 = *(undefined4 *)(param_2 + 0xf3);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0xeb) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0xef) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xf3) = uVar13;
  *(undefined4 *)(param_1 + 0x1b) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar10;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar6;
  param_1[0x1f] = 0;
  iVar1 = *(int *)(param_2 + 0x100);
  pvVar2 = *(void **)(param_2 + 0xf8);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  else {
    FUN_1400e97e8(param_1 + 0x1f,iVar1,0);
    memcpy((void *)param_1[0x1f],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x110);
  pvVar2 = *(void **)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1468f8d30(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x25] = 0;
  iVar1 = *(int *)(param_2 + 0x130);
  pvVar2 = *(void **)(param_2 + 0x128);
  *(int *)(param_1 + 0x26) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x134) = 4;
  }
  else {
    _Src = (void *)(param_2 + 0x118);
    if (pvVar2 != (void *)0x0) {
      _Src = pvVar2;
    }
    FUN_1400e91fc(param_1 + 0x23,iVar1,0);
    _Dst = (undefined8 *)param_1[0x25];
    if ((undefined8 *)param_1[0x25] == (undefined8 *)0x0) {
      _Dst = param_1 + 0x23;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14072fb7e FUN_14072fb7e body=157 status=ok
// SIG undefined FUN_14072fb7e(void)

undefined8 * FUN_14072fb7e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_1407134c4();
  *param_1 = &PTR_FUN_149e37560;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  _Src = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],_Src,(longlong)iVar1);
  }
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar2;
  return param_1;
}



// FUNCTION 14072fc1c FUN_14072fc1c body=739 status=ok
// SIG undefined FUN_14072fc1c(void)

void FUN_14072fc1c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  void *_Src;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  uint local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140216e06();
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_f8 = 0xffffffff;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  uVar5 = FUN_14072ff00(param_1);
  FUN_140851e80(&local_88,uVar5);
  _Src = local_70;
  local_f0 = local_88;
  local_e8 = local_80;
  uStack_e4 = uStack_7c;
  uStack_e0 = uStack_78;
  uStack_dc = uStack_74;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,local_68);
  if (local_68 == 0 && uStack_d0._4_4_ == 0) {
    uStack_d0 = (ulonglong)local_68;
  }
  else {
    FUN_1446dd670(&local_d8,local_68);
    if (local_68 != 0) {
      memcpy(local_d8,_Src,(longlong)(int)local_68 * 2);
    }
  }
  if (local_c8 != local_60) {
    local_b8 = 0;
  }
  local_c8 = local_60;
  if (lStack_c0 != local_58) {
    local_b8 = 0;
  }
  uVar5 = FUN_14477b664();
  lStack_c0 = FUN_14477b664(uVar5);
  plVar3 = local_a8;
  local_b8 = local_50;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
    UNLOCK();
  }
  uStack_b0 = local_48;
  local_a8 = local_40;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
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
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_118 = DAT_14cb88a10;
  uStack_100 = 0;
  local_f8 = 0;
  if (0 < *(int *)(param_1 + 0x1f8)) {
    iVar6 = 0;
    do {
      FUN_14072fffd(&local_88,iVar6);
      uVar2 = local_108;
      lVar7 = (longlong)(int)local_108;
      uVar4 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar4);
      if (local_108._4_4_ < uVar4) {
        FUN_1446f84a2(&lStack_110,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(lStack_110 + lVar7 * 8) = 0;
      *(undefined8 *)(lStack_110 + lVar7 * 8) = local_88;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1f8));
  }
  FUN_140ab6af6(param_2,&local_118);
  FUN_14072ff4a(&local_118);
  uVar5 = FUN_14072ff11();
  FUN_1409f75d4(param_2,&DAT_14cb88a18,uVar5,0);
  uVar5 = FUN_14574082c();
  FUN_1409f75d4(param_2,&DAT_14cb88a20,uVar5,1);
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14072ff00 FUN_14072ff00 body=17 status=ok
// SIG undefined FUN_14072ff00(void)

undefined8 FUN_14072ff00(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  return 0;
}



// FUNCTION 14072ff11 FUN_14072ff11 body=57 status=ok
// SIG undefined FUN_14072ff11(void)

void FUN_14072ff11(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb614d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb614d0 = FUN_14171c317(FUN_1464f2d37,uVar1,L"EGbxMovingPlatformMoveState");
  }
  return;
}



// FUNCTION 14072ff4a FUN_14072ff4a body=104 status=ok
// SIG undefined FUN_14072ff4a(void)

void FUN_14072ff4a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14072ffb2(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14072ffb2 FUN_14072ffb2 body=75 status=ok
// SIG undefined FUN_14072ffb2(void)

void FUN_14072ffb2(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14072fffd FUN_14072fffd body=205 status=ok
// SIG undefined FUN_14072fffd(void)

undefined8 * FUN_14072fffd(undefined8 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == -1) {
    *param_1 = 0;
  }
  else {
    FUN_1400021e4(&DAT_14cb88a38,&local_48);
    puVar1 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar1 = local_48;
    }
    FUN_140002266(&local_38,L"%s_%d",puVar1,param_2);
    puVar1 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar1 = local_38;
    }
    FUN_1446f470e(param_1,puVar1,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407300cb FUN_1407300cb body=3307 status=ok
// SIG undefined FUN_1407300cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407300cb(longlong param_1,double *param_2,char param_3,char param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 6) {
    FUN_140272e1c(param_1,6);
  }
  if (param_3 != '\0') {
    dVar28 = param_2[0xb] - param_2[10];
    dVar29 = param_2[7] - param_2[6];
    dVar24 = param_2[3] - param_2[2];
    dVar23 = dVar28 * dVar28 + dVar24 * dVar24 + dVar29 * dVar29;
    if (9.999999439624929e-11 < dVar23) {
      dVar25 = param_2[0xf];
      dVar27 = param_2[0xe];
      dVar23 = 1.0 / SQRT(dVar23);
      iVar14 = *(int *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
        FUN_1448afb60(param_1,iVar14);
      }
      lVar11 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar11 = param_1;
      }
      lVar18 = (longlong)iVar14 * 0x20;
      *(double *)(lVar11 + lVar18) = -dVar24 * dVar23;
      *(double *)(lVar11 + 8 + lVar18) = -dVar29 * dVar23;
      *(double *)(lVar11 + 0x10 + lVar18) = -dVar28 * dVar23;
      *(double *)(lVar11 + 0x18 + lVar18) = (dVar25 - dVar27) * dVar23;
    }
  }
  dVar23 = param_2[0xb];
  uVar19 = SUB84(dVar23,0);
  uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
  dVar28 = param_2[8];
  dVar23 = dVar23 + dVar28;
  dVar25 = param_2[7];
  dVar29 = param_2[4];
  dVar7 = dVar25 + dVar29;
  dVar24 = *param_2;
  dVar27 = param_2[3];
  dVar8 = dVar27 + dVar24;
  dVar9 = dVar23 * dVar23 + dVar8 * dVar8 + dVar7 * dVar7;
  if (9.999999439624929e-11 < dVar9) {
    dVar28 = param_2[0xf];
    dVar29 = param_2[0xc];
    dVar24 = 1.0 / SQRT(dVar9);
    iVar14 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
      FUN_1448afb60(param_1,iVar14);
    }
    lVar11 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar11 = param_1;
    }
    lVar18 = (longlong)iVar14 * 0x20;
    *(double *)(lVar11 + lVar18) = -dVar8 * dVar24;
    *(double *)(lVar11 + 8 + lVar18) = -dVar7 * dVar24;
    *(double *)(lVar11 + 0x10 + lVar18) = -dVar23 * dVar24;
    *(double *)(lVar11 + 0x18 + lVar18) = (dVar28 + dVar29) * dVar24;
    uVar19 = SUB84(param_2[0xb],0);
    uVar21 = (undefined4)((ulonglong)param_2[0xb] >> 0x20);
    dVar28 = param_2[8];
    dVar25 = param_2[7];
    dVar29 = param_2[4];
    dVar24 = *param_2;
    dVar27 = param_2[3];
  }
  dVar28 = (double)CONCAT44(uVar21,uVar19) - dVar28;
  dVar29 = dVar25 - dVar29;
  dVar24 = dVar27 - dVar24;
  dVar23 = dVar28 * dVar28 + dVar24 * dVar24 + dVar29 * dVar29;
  if (9.999999439624929e-11 < dVar23) {
    dVar25 = param_2[0xf];
    dVar27 = param_2[0xc];
    dVar23 = 1.0 / SQRT(dVar23);
    iVar14 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
      FUN_1448afb60(param_1,iVar14);
    }
    lVar11 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar11 = param_1;
    }
    lVar18 = (longlong)iVar14 * 0x20;
    *(double *)(lVar11 + lVar18) = -dVar24 * dVar23;
    *(double *)(lVar11 + 8 + lVar18) = -dVar29 * dVar23;
    *(double *)(lVar11 + 0x10 + lVar18) = -dVar28 * dVar23;
    *(double *)(lVar11 + 0x18 + lVar18) = (dVar25 - dVar27) * dVar23;
    uVar19 = SUB84(param_2[0xb],0);
    uVar21 = (undefined4)((ulonglong)param_2[0xb] >> 0x20);
    dVar27 = param_2[3];
    dVar25 = param_2[7];
  }
  dVar23 = param_2[9];
  uVar30 = SUB84(dVar23,0);
  uVar32 = (undefined4)((ulonglong)dVar23 >> 0x20);
  dVar23 = (double)CONCAT44(uVar21,uVar19) - dVar23;
  dVar28 = param_2[1];
  uVar36 = SUB84(dVar28,0);
  uVar37 = (undefined4)((ulonglong)dVar28 >> 0x20);
  dVar29 = param_2[5];
  uVar34 = SUB84(dVar29,0);
  uVar35 = (undefined4)((ulonglong)dVar29 >> 0x20);
  dVar29 = dVar25 - dVar29;
  dVar28 = dVar27 - dVar28;
  dVar24 = dVar23 * dVar23 + dVar28 * dVar28 + dVar29 * dVar29;
  if (9.999999439624929e-11 < dVar24) {
    dVar25 = param_2[0xf];
    dVar27 = param_2[0xd];
    dVar24 = 1.0 / SQRT(dVar24);
    iVar14 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
      FUN_1448afb60(param_1,iVar14);
    }
    lVar11 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar11 = param_1;
    }
    lVar18 = (longlong)iVar14 * 0x20;
    *(double *)(lVar11 + lVar18) = -dVar28 * dVar24;
    *(double *)(lVar11 + 8 + lVar18) = -dVar29 * dVar24;
    *(double *)(lVar11 + 0x10 + lVar18) = -dVar23 * dVar24;
    *(double *)(lVar11 + 0x18 + lVar18) = (dVar25 - dVar27) * dVar24;
    uVar19 = SUB84(param_2[0xb],0);
    uVar21 = (undefined4)((ulonglong)param_2[0xb] >> 0x20);
    uVar30 = SUB84(param_2[9],0);
    uVar32 = (undefined4)((ulonglong)param_2[9] >> 0x20);
    dVar25 = param_2[7];
    uVar34 = SUB84(param_2[5],0);
    uVar35 = (undefined4)((ulonglong)param_2[5] >> 0x20);
    uVar36 = SUB84(param_2[1],0);
    uVar37 = (undefined4)((ulonglong)param_2[1] >> 0x20);
    dVar27 = param_2[3];
  }
  dVar28 = (double)CONCAT44(uVar32,uVar30) + (double)CONCAT44(uVar21,uVar19);
  dVar25 = (double)CONCAT44(uVar35,uVar34) + dVar25;
  dVar27 = (double)CONCAT44(uVar37,uVar36) + dVar27;
  dVar23 = dVar28 * dVar28 + dVar27 * dVar27 + dVar25 * dVar25;
  if (9.999999439624929e-11 < dVar23) {
    dVar29 = param_2[0xf];
    dVar24 = param_2[0xd];
    dVar23 = 1.0 / SQRT(dVar23);
    uVar6 = DAT_149931e80;
    iVar14 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
      FUN_1448afb60(param_1,iVar14);
    }
    lVar11 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar11 = param_1;
    }
    lVar18 = (longlong)iVar14 * 0x20;
    *(double *)(lVar11 + lVar18) = (double)((ulonglong)dVar27 ^ uVar6) * dVar23;
    *(double *)(lVar11 + 8 + lVar18) = (double)((ulonglong)dVar25 ^ uVar6) * dVar23;
    *(double *)(lVar11 + 0x10 + lVar18) = (double)((ulonglong)dVar28 ^ uVar6) * dVar23;
    *(double *)(lVar11 + 0x18 + lVar18) = (dVar29 + dVar24) * dVar23;
  }
  if (param_4 != '\0') {
    if (param_5 == (undefined8 *)0x0) {
      dVar23 = param_2[10];
      dVar28 = param_2[2];
      dVar29 = param_2[6];
      dVar24 = dVar23 * dVar23 + dVar28 * dVar28 + dVar29 * dVar29;
      if (9.999999439624929e-11 < dVar24) {
        dVar25 = 1.0 / SQRT(dVar24);
        dVar24 = param_2[0xe];
        uVar6 = DAT_149931e80;
        iVar14 = *(int *)(param_1 + 0xd0);
        *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
          FUN_1448afb60(param_1,iVar14);
        }
        lVar11 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar11 = param_1;
        }
        lVar18 = (longlong)iVar14 * 0x20;
        *(double *)(lVar11 + lVar18) = (double)((ulonglong)dVar28 ^ uVar6) * dVar25;
        *(double *)(lVar11 + 8 + lVar18) = (double)((ulonglong)dVar29 ^ uVar6) * dVar25;
        *(double *)(lVar11 + 0x10 + lVar18) = (double)((ulonglong)dVar23 ^ uVar6) * dVar25;
        *(double *)(lVar11 + 0x18 + lVar18) = dVar24 * dVar25;
      }
    }
    else {
      iVar14 = *(int *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0xd0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0xd4) < iVar14 + 1U) {
        FUN_1448afb60(param_1,iVar14);
      }
      lVar11 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar11 = param_1;
      }
      uVar26 = *param_5;
      uVar2 = param_5[1];
      uVar3 = param_5[3];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)iVar14 * 0x20);
      *puVar1 = param_5[2];
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)(lVar11 + (longlong)iVar14 * 0x20);
      *puVar1 = uVar26;
      puVar1[1] = uVar2;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xd0);
  uVar10 = uVar4 + 3;
  if (-1 < (int)uVar4) {
    uVar10 = uVar4;
  }
  uVar16 = uVar10 & 0xfffffffc;
  iVar17 = (int)uVar4 % 4;
  iVar14 = (uint)(iVar17 != 0) * 4 + uVar16;
  if (-1 < iVar14) {
    lVar11 = param_1 + 0xe0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if (*(int *)(param_1 + 500) != iVar14) {
      FUN_144921ba2(lVar11);
    }
    if (3 < (int)uVar4) {
      iVar14 = (int)uVar10 >> 2;
      lVar18 = 0x60;
      do {
        iVar5 = *(int *)(param_1 + 0x1f0);
        *(uint *)(param_1 + 0x1f0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 500) < iVar5 + 1U) {
          FUN_147a3c080(lVar11,iVar5);
        }
        lVar13 = *(longlong *)(param_1 + 0x1e0);
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
          lVar13 = lVar11;
        }
        lVar15 = (longlong)iVar5 * 0x20;
        lVar12 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar12 = param_1;
        }
        uVar26 = *(undefined8 *)(lVar12 + lVar18);
        uVar2 = *(undefined8 *)(lVar12 + -0x20 + lVar18);
        uVar3 = *(undefined8 *)(lVar12 + -0x40 + lVar18);
        *(undefined8 *)(lVar13 + lVar15) = *(undefined8 *)(lVar12 + -0x60 + lVar18);
        *(undefined8 *)(lVar13 + 8 + lVar15) = uVar3;
        *(undefined8 *)(lVar13 + 0x10 + lVar15) = uVar2;
        *(undefined8 *)(lVar13 + 0x18 + lVar15) = uVar26;
        iVar5 = *(int *)(param_1 + 0x1f0);
        *(uint *)(param_1 + 0x1f0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 500) < iVar5 + 1U) {
          FUN_147a3c080(lVar11,iVar5);
        }
        lVar13 = *(longlong *)(param_1 + 0x1e0);
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
          lVar13 = lVar11;
        }
        lVar15 = (longlong)iVar5 * 0x20;
        lVar12 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar12 = param_1;
        }
        uVar26 = *(undefined8 *)(lVar12 + 8 + lVar18);
        uVar2 = *(undefined8 *)(lVar12 + -0x18 + lVar18);
        uVar3 = *(undefined8 *)(lVar12 + -0x38 + lVar18);
        *(undefined8 *)(lVar13 + lVar15) = *(undefined8 *)(lVar12 + -0x58 + lVar18);
        *(undefined8 *)(lVar13 + 8 + lVar15) = uVar3;
        *(undefined8 *)(lVar13 + 0x10 + lVar15) = uVar2;
        *(undefined8 *)(lVar13 + 0x18 + lVar15) = uVar26;
        iVar5 = *(int *)(param_1 + 0x1f0);
        *(uint *)(param_1 + 0x1f0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 500) < iVar5 + 1U) {
          FUN_147a3c080(lVar11,iVar5);
        }
        lVar13 = *(longlong *)(param_1 + 0x1e0);
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
          lVar13 = lVar11;
        }
        lVar15 = (longlong)iVar5 * 0x20;
        lVar12 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar12 = param_1;
        }
        uVar26 = *(undefined8 *)(lVar12 + 0x10 + lVar18);
        uVar2 = *(undefined8 *)(lVar12 + -0x10 + lVar18);
        uVar3 = *(undefined8 *)(lVar12 + -0x30 + lVar18);
        *(undefined8 *)(lVar13 + lVar15) = *(undefined8 *)(lVar12 + -0x50 + lVar18);
        *(undefined8 *)(lVar13 + 8 + lVar15) = uVar3;
        *(undefined8 *)(lVar13 + 0x10 + lVar15) = uVar2;
        *(undefined8 *)(lVar13 + 0x18 + lVar15) = uVar26;
        iVar5 = *(int *)(param_1 + 0x1f0);
        *(uint *)(param_1 + 0x1f0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 500) < iVar5 + 1U) {
          FUN_147a3c080(lVar11,iVar5);
        }
        lVar13 = *(longlong *)(param_1 + 0x1e0);
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
          lVar13 = lVar11;
        }
        lVar15 = (longlong)iVar5 * 0x20;
        lVar12 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar12 = param_1;
        }
        uVar26 = *(undefined8 *)(lVar12 + 0x18 + lVar18);
        uVar2 = *(undefined8 *)(lVar12 + -8 + lVar18);
        uVar3 = *(undefined8 *)(lVar12 + -0x28 + lVar18);
        *(undefined8 *)(lVar13 + lVar15) = *(undefined8 *)(lVar12 + -0x48 + lVar18);
        *(undefined8 *)(lVar13 + 8 + lVar15) = uVar3;
        *(undefined8 *)(lVar13 + 0x10 + lVar15) = uVar2;
        *(undefined8 *)(lVar13 + 0x18 + lVar15) = uVar26;
        lVar18 = lVar18 + 0x80;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (iVar17 != 0) {
      if (iVar17 == 2) {
        lVar18 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar18 = param_1;
        }
        lVar13 = (longlong)(int)uVar16 * 0x20;
        uVar31 = (undefined4)*(undefined8 *)(lVar18 + lVar13);
        uVar33 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar13) >> 0x20);
        uVar26 = *(undefined8 *)(lVar18 + 8 + lVar13);
        uVar42 = (undefined4)uVar26;
        uVar43 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar26 = *(undefined8 *)(lVar18 + 0x10 + lVar13);
        uVar34 = (undefined4)uVar26;
        uVar35 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar26 = *(undefined8 *)(lVar18 + 0x18 + lVar13);
        lVar13 = (longlong)(int)(uVar16 | 1) * 0x20;
        uVar2 = *(undefined8 *)(lVar18 + 8 + lVar13);
        uVar40 = (undefined4)uVar2;
        uVar41 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar2 = *(undefined8 *)(lVar18 + 0x10 + lVar13);
        uVar38 = (undefined4)uVar2;
        uVar39 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar2 = *(undefined8 *)(lVar18 + 0x18 + lVar13);
        uVar20 = (undefined4)uVar2;
        uVar22 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar19 = (int)*(undefined8 *)(lVar18 + lVar13);
        uVar21 = (int)((ulonglong)*(undefined8 *)(lVar18 + lVar13) >> 0x20);
        uVar30 = (int)uVar26;
        uVar32 = (int)((ulonglong)uVar26 >> 0x20);
        uVar36 = uVar34;
        uVar37 = uVar35;
        uVar44 = uVar42;
        uVar45 = uVar43;
        uVar46 = uVar31;
        uVar47 = uVar33;
      }
      else if (iVar17 == 1) {
        lVar18 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar18 = param_1;
        }
        lVar13 = (longlong)(int)uVar16 * 0x20;
        uVar31 = (undefined4)*(undefined8 *)(lVar18 + lVar13);
        uVar33 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar13) >> 0x20);
        uVar26 = *(undefined8 *)(lVar18 + 8 + lVar13);
        uVar40 = (undefined4)uVar26;
        uVar41 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar26 = *(undefined8 *)(lVar18 + 0x10 + lVar13);
        uVar38 = (undefined4)uVar26;
        uVar39 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar26 = *(undefined8 *)(lVar18 + 0x18 + lVar13);
        uVar20 = (undefined4)uVar26;
        uVar22 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar19 = uVar31;
        uVar21 = uVar33;
        uVar30 = uVar20;
        uVar32 = uVar22;
        uVar34 = uVar38;
        uVar35 = uVar39;
        uVar36 = uVar38;
        uVar37 = uVar39;
        uVar42 = uVar40;
        uVar43 = uVar41;
        uVar44 = uVar40;
        uVar45 = uVar41;
        uVar46 = uVar31;
        uVar47 = uVar33;
      }
      else {
        uVar20 = 0;
        uVar22 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar19 = 0;
        uVar21 = 0;
        uVar26 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar31 = 0;
        uVar33 = 0;
        uVar30 = 0;
        uVar32 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar44 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        if (iVar17 == 3) {
          lVar18 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar18 = param_1;
          }
          lVar13 = (longlong)(int)uVar16 * 0x20;
          uVar46 = (undefined4)*(undefined8 *)(lVar18 + lVar13);
          uVar47 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar13) >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 8 + lVar13);
          uVar44 = (undefined4)uVar26;
          uVar45 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 0x10 + lVar13);
          uVar36 = (undefined4)uVar26;
          uVar37 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 0x18 + lVar13);
          uVar30 = (undefined4)uVar26;
          uVar32 = (undefined4)((ulonglong)uVar26 >> 0x20);
          lVar13 = (longlong)(int)(uVar16 | 1) * 0x20;
          uVar19 = (undefined4)*(undefined8 *)(lVar18 + lVar13);
          uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar13) >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 8 + lVar13);
          uVar40 = (undefined4)uVar26;
          uVar41 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 0x10 + lVar13);
          uVar38 = (undefined4)uVar26;
          uVar39 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 0x18 + lVar13);
          uVar20 = (undefined4)uVar26;
          uVar22 = (undefined4)((ulonglong)uVar26 >> 0x20);
          lVar13 = (longlong)(int)(uVar16 | 2) * 0x20;
          uVar31 = (undefined4)*(undefined8 *)(lVar18 + lVar13);
          uVar33 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar13) >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 8 + lVar13);
          uVar42 = (undefined4)uVar26;
          uVar43 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 0x10 + lVar13);
          uVar34 = (undefined4)uVar26;
          uVar35 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar26 = *(undefined8 *)(lVar18 + 0x18 + lVar13);
        }
      }
      iVar14 = *(int *)(param_1 + 0x1f0);
      *(uint *)(param_1 + 0x1f0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 500) < iVar14 + 1U) {
        FUN_147a3c080(lVar11,iVar14);
      }
      lVar18 = *(longlong *)(param_1 + 0x1e0);
      if (*(longlong *)(param_1 + 0x1e0) == 0) {
        lVar18 = lVar11;
      }
      lVar13 = (longlong)iVar14 * 0x20;
      *(ulonglong *)(lVar18 + lVar13) = CONCAT44(uVar47,uVar46);
      *(ulonglong *)(lVar18 + 8 + lVar13) = CONCAT44(uVar21,uVar19);
      *(ulonglong *)(lVar18 + 0x10 + lVar13) = CONCAT44(uVar33,uVar31);
      *(ulonglong *)(lVar18 + 0x18 + lVar13) = CONCAT44(uVar47,uVar46);
      iVar14 = *(int *)(param_1 + 0x1f0);
      *(uint *)(param_1 + 0x1f0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 500) < iVar14 + 1U) {
        FUN_147a3c080(lVar11,iVar14);
      }
      lVar18 = *(longlong *)(param_1 + 0x1e0);
      if (*(longlong *)(param_1 + 0x1e0) == 0) {
        lVar18 = lVar11;
      }
      lVar13 = (longlong)iVar14 * 0x20;
      *(ulonglong *)(lVar18 + lVar13) = CONCAT44(uVar45,uVar44);
      *(ulonglong *)(lVar18 + 8 + lVar13) = CONCAT44(uVar41,uVar40);
      *(ulonglong *)(lVar18 + 0x10 + lVar13) = CONCAT44(uVar43,uVar42);
      *(ulonglong *)(lVar18 + 0x18 + lVar13) = CONCAT44(uVar45,uVar44);
      iVar14 = *(int *)(param_1 + 0x1f0);
      *(uint *)(param_1 + 0x1f0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 500) < iVar14 + 1U) {
        FUN_147a3c080(lVar11,iVar14);
      }
      lVar18 = *(longlong *)(param_1 + 0x1e0);
      if (*(longlong *)(param_1 + 0x1e0) == 0) {
        lVar18 = lVar11;
      }
      lVar13 = (longlong)iVar14 * 0x20;
      *(ulonglong *)(lVar18 + lVar13) = CONCAT44(uVar37,uVar36);
      *(ulonglong *)(lVar18 + 8 + lVar13) = CONCAT44(uVar39,uVar38);
      *(ulonglong *)(lVar18 + 0x10 + lVar13) = CONCAT44(uVar35,uVar34);
      *(ulonglong *)(lVar18 + 0x18 + lVar13) = CONCAT44(uVar37,uVar36);
      iVar14 = *(int *)(param_1 + 0x1f0);
      *(uint *)(param_1 + 0x1f0) = iVar14 + 1U;
      if (*(uint *)(param_1 + 500) < iVar14 + 1U) {
        FUN_147a3c080(lVar11,iVar14);
      }
      if (*(longlong *)(param_1 + 0x1e0) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x1e0);
      }
      lVar18 = (longlong)iVar14 * 0x20;
      *(ulonglong *)(lVar11 + lVar18) = CONCAT44(uVar32,uVar30);
      *(ulonglong *)(lVar11 + 8 + lVar18) = CONCAT44(uVar22,uVar20);
      *(undefined8 *)(lVar11 + 0x10 + lVar18) = uVar26;
      *(ulonglong *)(lVar11 + 0x18 + lVar18) = CONCAT44(uVar32,uVar30);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar14);
}



// FUNCTION 140730db6 FUN_140730db6 body=190 status=ok
// SIG undefined FUN_140730db6(void)

void FUN_140730db6(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = *(longlong *)(param_2 + 0x10);
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_30);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0xc];
    *(uint *)(param_1 + 0xc) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 100) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0xb,iVar1);
    }
    *(longlong *)(param_1[0xb] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140730e76 FUN_140730e76 body=258 status=ok
// SIG undefined FUN_140730e76(void)

void FUN_140730e76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x60);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_140730ecd:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_140730ee1;
        }
        else {
          if (lVar5 != 0) goto LAB_140730ecd;
LAB_140730ee1:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x60);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x60);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x58) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x58) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x60);
            }
            *(int *)(param_1 + 0x60) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x58));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 140730f78 FUN_140730f78 body=353 status=ok
// SIG undefined FUN_140730f78(void)

void FUN_140730f78(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140730ffd;
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
LAB_140730ffd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407310da FUN_1407310da body=40 status=ok
// SIG undefined FUN_1407310da(void)

undefined8 FUN_1407310da(undefined8 param_1,int param_2)

{
  FUN_140731102();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140731102 FUN_140731102 body=290 status=ok
// SIG undefined FUN_140731102(void)

void FUN_140731102(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7f7c40;
  param_1[0x4a] = &PTR_FUN_14a7f8040;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x71));
  FUN_140731294(param_1 + 0x6f,0);
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_14073125c(param_1 + 0x65);
  *(undefined4 *)(param_1 + 100) = 0;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_140731224(param_1 + 0x5b);
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd3e6(param_1);
  return;
}



// FUNCTION 140731224 FUN_140731224 body=55 status=ok
// SIG undefined FUN_140731224(void)

void FUN_140731224(longlong *param_1)

{
  FUN_140731304(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14073125c FUN_14073125c body=55 status=ok
// SIG undefined FUN_14073125c(void)

void FUN_14073125c(longlong *param_1)

{
  FUN_140731380(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140731294 FUN_140731294 body=110 status=ok
// SIG undefined FUN_140731294(void)

void FUN_140731294(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140731304 FUN_140731304 body=123 status=ok
// SIG undefined FUN_140731304(void)

void FUN_140731304(longlong param_1,int param_2)

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



// FUNCTION 140731380 FUN_140731380 body=381 status=ok
// SIG undefined FUN_140731380(void)

void FUN_140731380(longlong *param_1,int param_2)

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
      FUN_1400d0e42(*local_70 + (longlong)iStack_54 * 0x58 + 8);
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
    FUN_140e91948(param_1,param_2);
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



// FUNCTION 1407314fe FUN_1407314fe body=171 status=ok
// SIG undefined FUN_1407314fe(void)

uint FUN_1407314fe(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140002184(local_38,param_4);
  plVar1 = (longlong *)param_1[3];
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x368))(plVar1,param_3,local_38);
  }
  cVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((char)uVar3 == '\0') && (cVar2 == '\0')) {
    if ((*(uint *)(param_2 + 0xb0) & 0x10) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(uint *)(param_2 + 0xb0) & 8) >> 3;
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407315b2 FUN_1407315b2 body=490 status=ok
// SIG undefined FUN_1407315b2(void)

ulonglong FUN_1407315b2(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if ((0 < *(int *)(param_1 + 0x1610)) &&
     (**(longlong **)(param_1 + 0x1608) == *(longlong *)(param_1 + 0x8a8))) {
    **(longlong **)(param_1 + 0x1608) = 0;
  }
  FUN_14073179c(param_1);
  lVar4 = (longlong)*(int *)(param_1 + 0x1610);
  uVar6 = 0;
  if (lVar4 != 0) {
    plVar8 = *(longlong **)(param_1 + 0x1608);
    uVar6 = lVar4 * 3;
    plVar1 = plVar8 + lVar4 * 3;
    do {
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar8 + 0x10))();
        lVar4 = *plVar8;
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar9 = 0;
          lVar7 = 0;
        }
        else {
          uVar9 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar7 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
        }
        *(longlong *)(lVar7 + 8) = lVar4;
        do {
          uVar6 = DAT_14ca96680;
          uVar5 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 >> 0x1a < DAT_14ca96680 >> 0x1a) {
            FUN_14274643a();
          }
          if (uVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar4 + 0x10) = (uint)uVar6 & 0x3ffffff;
          LOCK();
          bVar10 = uVar6 != DAT_14ca96680;
          uVar5 = uVar5 | uVar2;
          if (bVar10) {
            uVar6 = DAT_14ca96680;
            uVar5 = DAT_14ca96680;
          }
          DAT_14ca96680 = uVar5;
          UNLOCK();
        } while (bVar10);
        *plVar8 = 0;
        plVar8[1] = 0;
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar1);
  }
  *(undefined4 *)(param_1 + 0x1610) = 0;
  if (*(int *)(param_1 + 0x1614) != 0) {
    uVar6 = FUN_140731a28(param_1 + 0x1608,0);
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14073179c FUN_14073179c body=651 status=ok
// SIG undefined FUN_14073179c(void)

longlong * FUN_14073179c(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = *(longlong **)(param_1 + 0xb0);
  if (((plVar7 != (longlong *)0x0) ||
      (plVar7 = (longlong *)FUN_1448abda6(param_1), plVar7 != (longlong *)0x0)) &&
     (puVar2 = (ulonglong *)plVar7[0x43], puVar2 != (ulonglong *)0x0)) {
    plVar7 = (longlong *)*puVar2;
    if ((code *)plVar7[3] == FUN_1447fa51c) {
      local_60 = param_1;
      if ((*(byte *)(param_1 + 0x2d3) & 2) == 0) {
        local_70 = &local_60;
        local_68 = 1;
        if ((code *)plVar7[9] == FUN_14177bd6a) {
          local_50 = 1;
          local_4c = local_64;
          local_58 = local_70;
          plVar7 = (longlong *)FUN_1400e4416();
        }
        else {
          plVar7 = (longlong *)(*(code *)plVar7[9])(puVar2,&local_70);
        }
      }
    }
    else {
      plVar7 = (longlong *)(*(code *)plVar7[3])(puVar2,param_1);
    }
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  iVar1 = *(int *)(param_1 + 0x6a8);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x6a0);
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar8 + lVar10);
      if (plVar3 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar3 + 0x2a8))();
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  plVar3 = *(longlong **)(param_1 + 0x8a8);
  if (plVar3 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x9c) & 4) == 0) {
      (**(code **)(*plVar3 + 0x10))();
      uVar4 = *(undefined8 *)(param_1 + 0x8a8);
      uVar5 = FUN_14493c560();
      if (uVar5 == 0) {
        uVar6 = 0;
        uVar9 = 0;
        lVar8 = 0;
      }
      else {
        uVar9 = (ulonglong)(uVar5 >> 0xe);
        uVar6 = uVar5 & 0x3fff;
        lVar8 = (ulonglong)(uVar6 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
      }
      *(undefined8 *)(lVar8 + 8) = uVar4;
      do {
        local_58 = DAT_14ca96680;
        local_70 = (longlong *)(((ulonglong)DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000);
        if ((ulonglong)local_70 >> 0x1a < (ulonglong)DAT_14ca96680 >> 0x1a) {
          FUN_14274643a();
        }
        local_70 = (longlong *)((ulonglong)local_70 & 0xfffffffffc000000 | (ulonglong)uVar5);
        if (uVar5 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar6 * 0x18);
        }
        *(uint *)(lVar8 + 0x10) = (uint)local_58 & 0x3ffffff;
        LOCK();
        bVar11 = local_58 != DAT_14ca96680;
        plVar7 = local_58;
        plVar3 = local_70;
        if (bVar11) {
          plVar7 = DAT_14ca96680;
          plVar3 = DAT_14ca96680;
        }
        DAT_14ca96680 = plVar3;
        UNLOCK();
      } while (bVar11);
    }
    else {
      *(longlong **)(param_1 + 0x8c0) = plVar3;
    }
    *(undefined8 *)(param_1 + 0x8a8) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 140731a28 FUN_140731a28 body=323 status=ok
// SIG undefined FUN_140731a28(void)

void FUN_140731a28(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140731a95;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140731a95:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 140731b6c FUN_140731b6c body=22 status=ok
// SIG undefined FUN_140731b6c(void)

undefined1 FUN_140731b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140731b82(param_2,param_3);
  return 1;
}



// FUNCTION 140731b82 FUN_140731b82 body=168 status=ok
// SIG undefined FUN_140731b82(void)

longlong * FUN_140731b82(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140731c2a FUN_140731c2a body=481 status=ok
// SIG undefined FUN_140731c2a(void)

void FUN_140731c2a(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar11 = 0;
      uVar13 = 1;
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar8 * 0x18) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140731d73;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_140731d73:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}


