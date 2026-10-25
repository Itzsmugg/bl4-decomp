// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14763ba92 FUN_14763ba92 body=154 status=ok
// SIG undefined FUN_14763ba92(void)

void FUN_14763ba92(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(*param_1 + (ulonglong)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14763bb2c FUN_14763bb2c body=993 status=ok
// SIG undefined FUN_14763bb2c(void)

void FUN_14763bb2c(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  int local_b4;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_84;
  ushort local_7e;
  char local_7c;
  char local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14763bb89;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14763bb89:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_a8 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_14763bbe0;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14763bbe0:
  lVar6 = *plVar10;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar3 = *plVar9;
  local_a0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_b0 = param_1 + 8;
    uVar15 = 0;
    do {
      local_84 = *(int *)(lVar3 + uVar15 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar7 = *(longlong *)(param_1 + 8);
      uVar11 = 0;
      if (0 < (int)uVar2) {
        uVar11 = 0;
        uVar12 = (ulonglong)uVar2;
        uVar13 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar14 = (uint)uVar12 + (int)uVar11;
          if (*(int *)(lVar7 + (ulonglong)uVar14 * 0x18) < local_84) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar4 = 1 < uVar13;
          uVar13 = (uint)uVar12;
        } while (bVar4);
      }
      if ((((int)uVar11 < (int)uVar2) && (*(int *)(lVar7 + uVar11 * 0x18) <= local_84)) &&
         (lVar7 = lVar7 + uVar11 * 0x18 + 8, lVar7 != 0)) {
        FUN_144a787a6(uVar15 * 0x10 + lVar6,lVar7);
      }
      else {
        lVar7 = FUN_1475b443c(local_a0);
        if (((lVar7 != 0) && (lVar8 = FUN_14479d2ce(lVar7), lVar8 != 0)) &&
           (*(longlong *)(lVar7 + 8) != 0)) {
          local_98 = *(undefined4 *)(param_1 + 0x30);
          uStack_94 = *(undefined4 *)(param_1 + 0x34);
          uStack_90 = *(undefined4 *)(param_1 + 0x38);
          uStack_8c = *(undefined4 *)(param_1 + 0x3c);
          local_c8 = lVar8;
          FUN_140d4d2ba(&local_7e,lVar8,lVar7 + 8,&local_98);
          lVar8 = *(longlong *)(param_1 + 0x48);
          if (lVar8 != 0) {
            local_c0 = lVar8;
            if (local_7a == '\0') {
              FUN_14763c900(lVar8,&local_78,local_c8,lVar7 + 0x10);
            }
            else if (local_7c == '\x01') {
              FUN_14763d136();
            }
            else {
              FUN_14763d318(lVar8,&local_78,local_c8,local_7e);
            }
            if (local_78._2_1_ == '\x01') {
              lVar8 = (local_78 & 0xffff) * 0x10 + *(longlong *)(local_c0 + 8);
            }
            else {
              lVar8 = 0;
            }
            if (lVar8 != 0) {
              FUN_144a787a6(uVar15 * 0x10 + lVar6,lVar8);
              FUN_14763d4fa(local_b0,&local_84,lVar8);
              goto LAB_14763bc9d;
            }
          }
          if (local_7a == '\0') {
            local_78 = 0;
            uStack_70 = 0;
            FUN_14763c840(local_c8,lVar7 + 0x10,&local_78);
          }
          else if (local_7c == '\x01') {
            local_78 = 0;
            uStack_70 = 0;
            FUN_147638824(local_c8,(longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_7e +
                                   *(longlong *)(param_1 + 0x30),&local_78);
          }
          else {
            local_78 = 0;
            uStack_70 = 0;
            FUN_144a787a6(&local_78,local_c8 + (ulonglong)local_7e);
          }
          iVar5 = (int)uStack_70 + -1;
          if ((int)uStack_70 == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(uVar15 * 0x10 + lVar6,local_78,iVar5);
          FUN_14763d4fa(local_b0,&local_84,&local_78);
          if ((uStack_70._4_4_ != -1) && (local_78 != 0)) {
            FUN_1400020a8();
          }
        }
      }
LAB_14763bc9d:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar1);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar15 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_a8) {
      uVar15 = local_a8;
    }
    plVar10[2] = uVar15;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763bf0e FUN_14763bf0e body=1639 status=ok
// SIG undefined FUN_14763bf0e(void)

void FUN_14763bf0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  int local_ec;
  int local_e8;
  int local_e4;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined2 local_ca;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ushort local_7c;
  char local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_14763bf6c;
      plVar6 = plVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_14763bf6c:
  local_108 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_d8 = *(ulonglong *)(param_1 + 0x40);
  local_e4 = *(int *)(param_2 + 0x14);
  if (local_e4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14763bfc9;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14763bfc9:
  local_f8 = *plVar6;
  local_e0 = *(ulonglong *)(param_1 + 0x40);
  local_e8 = *(int *)(param_2 + 0x14);
  if (local_e8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14763c025;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14763c025:
  lVar4 = *plVar7;
  local_ec = *(int *)(param_2 + 0x14);
  if (local_ec == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  local_110 = *plVar9;
  FUN_140b325e4(param_2,&local_b0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_a0 == 0) {
    FUN_1410bd96e(param_2,&local_c8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar1 = local_b8;
    if (local_b8 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_100 = local_68;
      if ((short)local_108 != 0 && local_68 != 0) {
        local_108 = (ulonglong)(uint)((int)local_108 * 2);
        uVar8 = 0;
        do {
          lVar1 = *(longlong *)(local_100 + uVar8 * 8);
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar1 + 0x58) != 0) {
            puVar5 = *(undefined2 **)(lVar1 + 0x50);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_98,puVar5,1);
          FUN_14763c900(uVar2,&local_7c,*(undefined8 *)(local_110 + uVar8 * 4),&local_98);
          lVar1 = local_110;
          if (local_7a == '\x01') {
            FUN_144a787a6(lVar4,(ulonglong)local_7c * 0x10 +
                                *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
          }
          else {
            local_98 = 0;
            uStack_90 = 0;
            FUN_1476388a4(*(undefined8 *)(local_110 + uVar8 * 4),
                          *(undefined8 *)(local_100 + uVar8 * 8),&local_98);
            iVar3 = (int)uStack_90 + -1;
            if ((int)uStack_90 == 0) {
              iVar3 = 0;
            }
            FUN_1402980a2(lVar4,local_98,iVar3);
            local_118 = *(undefined8 *)(local_100 + uVar8 * 8);
            FUN_14763d8ec(*(undefined8 *)(param_1 + 0x48),&local_ca,
                          *(undefined8 *)(lVar1 + uVar8 * 4),&local_98);
            *(undefined2 *)(local_f8 + uVar8) = local_ca;
            if (local_98 != 0) {
              FUN_1400020a8();
            }
          }
          uVar8 = uVar8 + 2;
          lVar4 = lVar4 + 0x10;
        } while (local_108 != uVar8);
      }
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
        UNLOCK();
        if ((int)uStack_70 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
        }
      }
    }
    else if (local_108 != 0) {
      uVar8 = 0;
      do {
        FUN_14763d318(*(undefined8 *)(param_1 + 0x48),&local_98,
                      *(undefined8 *)(local_110 + uVar8 * 8),*(undefined2 *)(local_b8 + uVar8 * 2));
        if (local_98._2_1_ == '\x01') {
          FUN_144a787a6(lVar4,(local_98 & 0xffff) * 0x10 +
                              *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
        }
        else {
          local_78 = 0;
          uStack_70 = 0;
          FUN_144a787a6(&local_78,
                        (ulonglong)*(ushort *)(lVar1 + uVar8 * 2) +
                        *(longlong *)(local_110 + uVar8 * 8));
          iVar3 = (int)uStack_70 + -1;
          if ((int)uStack_70 == 0) {
            iVar3 = 0;
          }
          FUN_1402980a2(lVar4,local_78,iVar3);
          local_118 = CONCAT62(local_118._2_6_,*(undefined2 *)(lVar1 + uVar8 * 2));
          FUN_14763d82a(*(undefined8 *)(param_1 + 0x48),&local_7c,
                        *(undefined8 *)(local_110 + uVar8 * 8),&local_78);
          *(ushort *)(local_f8 + uVar8 * 2) = local_7c;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 0x10;
      } while (local_108 != uVar8);
    }
    if (local_c8 != 0) {
      LOCK();
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + -1;
      UNLOCK();
      if ((int)uStack_c0 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_c8 + 8));
      }
    }
  }
  else if (local_108 != 0) {
    uVar8 = 0;
    do {
      FUN_14763d136(*(undefined8 *)(param_1 + 0x48),&local_78,*(undefined8 *)(local_110 + uVar8 * 8)
                    ,*(undefined2 *)(local_a0 + uVar8 * 2));
      if (local_78._2_1_ == '\x01') {
        FUN_144a787a6(lVar4,(local_78 & 0xffff) * 0x10 +
                            *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
      }
      else {
        local_c8 = 0;
        uStack_c0 = 0;
        FUN_147638824(*(undefined8 *)(local_110 + uVar8 * 8),
                      (longlong)*(int *)(param_1 + 0x3c) *
                      (ulonglong)*(ushort *)(local_a0 + uVar8 * 2) + *(longlong *)(param_1 + 0x30),
                      &local_c8);
        iVar3 = (int)uStack_c0 + -1;
        if ((int)uStack_c0 == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(lVar4,local_c8,iVar3);
        local_118 = CONCAT62(local_118._2_6_,*(undefined2 *)(local_a0 + uVar8 * 2));
        FUN_14763d768(*(undefined8 *)(param_1 + 0x48),&local_98,
                      *(undefined8 *)(local_110 + uVar8 * 8),&local_c8);
        *(undefined2 *)(local_f8 + uVar8 * 2) = (undefined2)local_98;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      uVar8 = uVar8 + 1;
      lVar4 = lVar4 + 0x10;
    } while (local_108 != uVar8);
  }
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_b0 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_ec == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    uVar8 = plVar7[2];
    if ((ulonglong)plVar7[2] < local_e0) {
      uVar8 = local_e0;
    }
    plVar7[2] = uVar8;
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_e8 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar8 = plVar6[2];
    if ((ulonglong)plVar6[2] < local_d8) {
      uVar8 = local_d8;
    }
    plVar6[2] = uVar8;
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_e4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763c576 FUN_14763c576 body=713 status=ok
// SIG undefined FUN_14763c576(void)

void FUN_14763c576(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14763c5cb;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14763c5cb:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ulonglong)uVar1;
  local_98 = *(ulonglong *)(param_1 + 0x40);
  local_9c = *(int *)(param_2 + 0x14);
  if (local_9c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14763c61f;
      plVar6 = plVar6 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_14763c61f:
  lVar3 = *plVar5;
  local_a0 = *(int *)(param_2 + 0x14);
  if (local_a0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar2 = *plVar6;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_50 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar1 != 0 && local_80 != 0) {
        lVar8 = 0;
        do {
          FUN_1476388a4(*(undefined8 *)(lVar2 + lVar8),*(undefined8 *)(local_80 + lVar8 * 2),lVar3);
          lVar8 = lVar8 + 8;
          lVar3 = lVar3 + 0x10;
        } while ((ulonglong)uVar1 * 8 != lVar8);
      }
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
        }
      }
    }
    else if (uVar4 != 0) {
      uVar7 = 0;
      do {
        FUN_144a787a6(lVar3,(ulonglong)*(ushort *)(local_68 + uVar7 * 2) +
                            *(longlong *)(lVar2 + uVar7 * 8));
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 != uVar7);
    }
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
      }
    }
  }
  else if (uVar4 != 0) {
    uVar7 = 0;
    do {
      FUN_147638824(*(undefined8 *)(lVar2 + uVar7 * 8),
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_50 + uVar7 * 2) + *(longlong *)(param_1 + 0x30),
                    lVar3);
      uVar7 = uVar7 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 != uVar7);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    uVar4 = plVar5[2];
    if ((ulonglong)plVar5[2] < local_98) {
      uVar4 = local_98;
    }
    plVar5[2] = uVar4;
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (local_9c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763c840 FUN_14763c840 body=191 status=ok
// SIG undefined FUN_14763c840(void)

void FUN_14763c840(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  longlong local_30;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_40,puVar1);
  FUN_14763d6b8(&local_30,param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 != -1) {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(int *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763c900 FUN_14763c900 body=483 status=ok
// SIG undefined FUN_14763c900(void)

undefined8 FUN_14763c900(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14763ca2e;
        }
        else {
LAB_14763ca2e:
          FUN_14763cd9e(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14763ce6a(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_14763ccd2(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_14763cae4(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763cae4 FUN_14763cae4 body=493 status=ok
// SIG undefined FUN_14763cae4(void)

undefined2 * FUN_14763cae4(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14763cc16;
        }
        else {
LAB_14763cc16:
          FUN_14763cd9e(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_14763ce6a(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_14763ccd2(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_14763d07e((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763ccd2 FUN_14763ccd2 body=203 status=ok
// SIG undefined FUN_14763ccd2(void)

void FUN_14763ccd2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x10;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x10) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_14474875a(param_1,iVar5);
  return;
}



// FUNCTION 14763cd9e FUN_14763cd9e body=90 status=ok
// SIG undefined FUN_14763cd9e(void)

void FUN_14763cd9e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14763cdf8();
  return;
}



// FUNCTION 14763cdf8 FUN_14763cdf8 body=114 status=ok
// SIG undefined FUN_14763cdf8(void)

void FUN_14763cdf8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 14763ce6a FUN_14763ce6a body=68 status=ok
// SIG undefined FUN_14763ce6a(void)

void FUN_14763ce6a(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14763ceae(param_1);
  return;
}



// FUNCTION 14763ceae FUN_14763ceae body=462 status=ok
// SIG undefined FUN_14763ceae(void)

void FUN_14763ceae(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763d07e FUN_14763d07e body=107 status=ok
// SIG undefined FUN_14763d07e(void)

int FUN_14763d07e(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14763d0e9(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14763d0e9 FUN_14763d0e9 body=76 status=ok
// SIG undefined FUN_14763d0e9(void)

undefined8 FUN_14763d0e9(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14763d136 FUN_14763d136 body=481 status=ok
// SIG undefined FUN_14763d136(void)

undefined8 FUN_14763d136(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14763d264;
        }
        else {
LAB_14763d264:
          FUN_14763cd9e(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14763ce6a(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_14763ccd2(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_14763cae4(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763d318 FUN_14763d318 body=481 status=ok
// SIG undefined FUN_14763d318(void)

undefined8 FUN_14763d318(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14763d446;
        }
        else {
LAB_14763d446:
          FUN_14763cd9e(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14763ce6a(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_14763ccd2(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_14763cae4(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763d4fa FUN_14763d4fa body=297 status=ok
// SIG undefined FUN_14763d4fa(void)

void FUN_14763d4fa(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar8 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x18) <= *param_2)) {
      piVar9 = (int *)(lVar7 + (ulonglong)uVar8 * 0x18);
      FUN_14763b62f(piVar9,1);
      goto LAB_14763d5ae;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14763d624(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar5 = (ulonglong)uVar8 * 0x18;
  memmove((void *)(lVar7 + lVar5 + 0x18),(void *)(lVar7 + lVar5),(ulonglong)(uVar2 - uVar8) * 0x18);
  piVar9 = (int *)(lVar5 + *param_1);
LAB_14763d5ae:
  *piVar9 = *param_2;
  piVar9[2] = 0;
  piVar9[3] = 0;
  iVar3 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  piVar9[4] = iVar3;
  if ((longlong)iVar3 != 0) {
    FUN_1446dd670(piVar9 + 2,iVar3,0);
    memcpy(*(void **)(piVar9 + 2),_Src,(longlong)iVar3 * 2);
    return;
  }
  piVar9[5] = 0;
  return;
}



// FUNCTION 14763d624 FUN_14763d624 body=147 status=ok
// SIG undefined FUN_14763d624(void)

void FUN_14763d624(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14763d6b8 FUN_14763d6b8 body=175 status=ok
// SIG undefined FUN_14763d6b8(void)

undefined8 * FUN_14763d6b8(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406fa5f4(local_48);
  local_58 = 0;
  uStack_50 = 0;
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x44) + local_20 == 0)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = 0xffffffff;
  }
  else {
    FUN_144a787a6(&local_58);
    *param_1 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    uVar1 = uStack_50._4_4_;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763d768 FUN_14763d768 body=193 status=ok
// SIG undefined FUN_14763d768(void)

undefined2 *
FUN_14763d768(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 *local_58;
  undefined2 *local_50;
  undefined1 local_48 [4];
  undefined8 *local_44;
  undefined2 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  local_3c = param_5;
  local_34 = 1;
  local_5a = FUN_14763d9ce(param_1 + 8,param_4);
  local_50 = &local_5a;
  local_58 = &local_44;
  FUN_14763db3e(param_1 + 0x40,local_48);
  *param_2 = local_5a;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763d82a FUN_14763d82a body=193 status=ok
// SIG undefined FUN_14763d82a(void)

undefined2 *
FUN_14763d82a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 *local_58;
  undefined2 *local_50;
  undefined1 local_48 [4];
  undefined8 *local_44;
  undefined2 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  local_3c = param_5;
  local_34 = 0;
  local_5a = FUN_14763d9ce(param_1 + 8,param_4);
  local_50 = &local_5a;
  local_58 = &local_44;
  FUN_14763db3e(param_1 + 0x40,local_48);
  *param_2 = local_5a;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763d8ec FUN_14763d8ec body=225 status=ok
// SIG undefined FUN_14763d8ec(void)

undefined2 *
FUN_14763d8ec(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 *local_58;
  undefined2 *local_50;
  undefined1 local_48 [4];
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  local_5a = FUN_14763d9ce(param_1 + 8,param_4);
  local_50 = &local_5a;
  local_58 = &local_44;
  FUN_14763db3e(param_1 + 0x40,local_48);
  *param_2 = local_5a;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763d9ce FUN_14763d9ce body=137 status=ok
// SIG undefined FUN_14763d9ce(void)

undefined4 FUN_14763d9ce(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14763da58(param_1,local_30);
  *local_28 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_28 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_28 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_28,iVar1,0);
    memcpy((void *)*local_28,_Src,(longlong)iVar1 * 2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763da58 FUN_14763da58 body=229 status=ok
// SIG undefined FUN_14763da58(void)

int * FUN_14763da58(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14763db3e FUN_14763db3e body=339 status=ok
// SIG undefined FUN_14763db3e(void)

undefined4 * FUN_14763db3e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14763dc92(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_14763dd78(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14763ceae(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763dc92 FUN_14763dc92 body=229 status=ok
// SIG undefined FUN_14763dc92(void)

int * FUN_14763dc92(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1405b363e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14763dd78 FUN_14763dd78 body=93 status=ok
// SIG undefined FUN_14763dd78(void)

undefined8 FUN_14763dd78(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14763d07e(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14763cdf8(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14763ddd6 FUN_14763ddd6 body=48 status=ok
// SIG undefined FUN_14763ddd6(void)

void FUN_14763ddd6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14763de06 FUN_14763de06 body=136 status=ok
// SIG undefined FUN_14763de06(void)

void FUN_14763de06(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_14763de90(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14763de90 FUN_14763de90 body=149 status=ok
// SIG undefined FUN_14763de90(void)

void FUN_14763de90(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x28);
  return;
}



// FUNCTION 14763df26 FUN_14763df26 body=31 status=ok
// SIG undefined FUN_14763df26(void)

undefined8 FUN_14763df26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763df46 FUN_14763df46 body=927 status=ok
// SIG undefined FUN_14763df46(void)

void FUN_14763df46(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1f8 [32];
  ushort *local_1d8;
  code **local_1d0;
  longlong local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  undefined8 *local_1a8;
  ushort local_19c [2];
  ushort *local_198;
  undefined8 *local_190;
  undefined2 local_184;
  ushort local_182;
  undefined8 local_180;
  undefined2 local_178;
  undefined2 local_176;
  undefined2 local_174;
  undefined2 local_172;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 local_168;
  undefined1 local_163;
  undefined4 local_160;
  undefined1 local_15c;
  undefined2 local_158;
  undefined4 local_156;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined8 local_138;
  undefined1 local_130 [28];
  undefined1 local_114;
  byte bStack_113;
  uint local_110;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b0 = param_4;
  lVar3 = FUN_14009d2a0();
  local_158 = *(undefined2 *)(lVar3 + 0x4a);
  local_152 = *(undefined2 *)(lVar3 + 0x108);
  local_156 = *(undefined4 *)(lVar3 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_140 = puVar6[0x10];
  local_142 = puVar6[0xe];
  local_144 = puVar6[0xc];
  local_146 = puVar6[10];
  local_148 = puVar6[8];
  local_14a = puVar6[6];
  local_14c = puVar6[4];
  local_150 = *puVar6;
  local_14e = puVar6[2];
  local_13b = 0;
  local_138 = CONCAT35(local_138._5_3_,0x6ff);
  local_182 = *(ushort *)(param_2 + 0x14);
  local_198 = &local_182;
  local_190 = &local_180;
  local_1a8 = param_3;
  FUN_140dad0c2(&local_158,local_130);
  local_110 = *(uint *)(param_6 + 0x290);
  bVar4 = bStack_113 & 0xfe | (local_110 & 0xfffffeff) == 1;
  _local_114 = CONCAT11(bVar4,local_114);
  local_1d8 = local_19c;
  local_19c[0] = CONCAT11(bVar4,local_114) & 0xfdff;
  local_1d0 = (code **)&local_180;
  local_180 = FUN_14763f1e2;
  local_178 = CONCAT11(local_178._1_1_,3);
  local_1c8 = param_2;
  FUN_14763efd6(local_130,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  puVar2 = local_1a8;
  if (0 < *(int *)(local_1b0 + 4)) {
    local_138 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1a8;
    iVar1 = *(int *)(local_1a8 + 1);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_158,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
      puVar6 = (undefined2 *)*puVar2;
    }
    local_168 = puVar6[0x10];
    local_1b0 = CONCAT62(local_1b0._2_6_,local_168);
    local_16a = puVar6[0xe];
    local_16c = puVar6[0xc];
    local_16e = puVar6[10];
    local_170 = puVar6[8];
    local_172 = puVar6[6];
    local_174 = puVar6[4];
    local_178 = *puVar6;
    local_176 = puVar6[2];
    local_180 = (code *)CONCAT26(*(undefined2 *)(lVar3 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar3 + 0x104),
                                          *(undefined2 *)(lVar3 + 0x4a)));
    local_163 = 0;
    local_160 = 0x6ff;
    local_15c = 0;
    FUN_140dada72(local_130);
    FUN_140dad9c2(local_108,&local_158,2);
    local_184 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_182;
    local_58 = (code *)&local_184;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_158,0x84);
    local_110 = *(uint *)(param_6 + 0x290);
    bVar4 = bStack_113 & 0xfe | (local_110 & 0xfffffeff) == 1;
    _local_114 = CONCAT11(bVar4,local_114);
    local_182 = CONCAT11(bVar4,local_114) & 0xfdff;
    local_58 = FUN_14763fe6a;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1c0 = local_1a8;
    local_1d8 = &local_182;
    local_1d0 = &local_58;
    local_1c8 = param_2;
    FUN_14763fc46(local_130,local_19c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763e2e6 FUN_14763e2e6 body=912 status=ok
// SIG undefined FUN_14763e2e6(void)

void FUN_14763e2e6(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined2 *local_1a0;
  uint *local_198;
  undefined8 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  undefined2 local_172;
  undefined2 local_170;
  uint local_16e;
  undefined2 local_16a;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined1 local_153;
  undefined4 local_150;
  undefined1 local_14c;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined8 local_128;
  undefined1 local_120 [29];
  byte local_103;
  uint local_100;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_4;
  lVar4 = FUN_14009d2a0();
  local_148 = *(undefined2 *)(lVar4 + 0x4a);
  local_142 = *(undefined2 *)(lVar4 + 0x108);
  local_146 = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_130 = puVar6[0x10];
  local_132 = puVar6[0xe];
  local_134 = puVar6[0xc];
  local_136 = puVar6[10];
  local_138 = puVar6[8];
  local_13a = puVar6[6];
  local_13c = puVar6[4];
  local_140 = *puVar6;
  local_13e = puVar6[2];
  local_12b = 0;
  local_128 = CONCAT35(local_128._5_3_,0x6ff);
  local_170 = *(undefined2 *)(param_2 + 0x14);
  local_1a0 = &local_170;
  local_198 = &local_16e;
  local_1b0 = param_3;
  FUN_140dad0c2(&local_148,local_120);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1d8 = param_6;
  local_1d0 = param_2;
  local_1c0 = param_2;
  FUN_143300a78(local_120,&local_190,param_7 + 0x28,param_5);
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_190 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_190)(local_190,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_1b0;
  if (0 < *(int *)(local_1b8 + 4)) {
    local_128 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1b0;
    iVar2 = *(int *)(local_1b0 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_148,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*puVar3;
    }
    local_170 = *(undefined2 *)(lVar4 + 0x4a);
    local_16a = *(undefined2 *)(lVar4 + 0x108);
    local_16e = *(uint *)(lVar4 + 0x104);
    local_158 = puVar6[0x10];
    local_15a = puVar6[0xe];
    local_15c = puVar6[0xc];
    local_15e = puVar6[10];
    local_160 = puVar6[8];
    local_162 = puVar6[6];
    local_164 = puVar6[4];
    local_168 = *puVar6;
    local_166 = puVar6[2];
    local_153 = 0;
    local_150 = 0x6ff;
    local_14c = 0;
    FUN_140dada72(local_120);
    FUN_140dad9c2(local_f8,&local_148,2);
    lVar4 = local_1c0;
    local_172 = *(undefined2 *)(local_1c0 + 0x14);
    local_180 = &local_170;
    local_188 = &local_172;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_148,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_1c8 = puVar3;
    local_1d0 = lVar4;
    local_1d8 = param_6;
    FUN_143300f16(local_120,&local_1a8,param_7 + 0x28,param_5);
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1a8)(local_1a8,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763e678 FUN_14763e678 body=520 status=ok
// SIG undefined FUN_14763e678(void)

longlong * FUN_14763e678(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147641e78(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_14763e6bc;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c6bb0;
  plVar5 = plVar4 + 2;
  FUN_147641fe6(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_147643780(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_14763e847:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014763e836:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x00014763e836;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_14763e847;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_147641f2c(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_14763e6bc:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763e884 FUN_14763e884 body=130 status=ok
// SIG undefined FUN_14763e884(void)

void FUN_14763e884(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_147643828(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763e908 FUN_14763e908 body=616 status=ok
// SIG undefined FUN_14763e908(void)

void FUN_14763e908(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_147605a78(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763eb72 FUN_14763eb72 body=1123 status=ok
// SIG undefined FUN_14763eb72(void)

void FUN_14763eb72(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_120;
  int local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar2 = (int)param_4[1];
  local_168 = param_3;
  if (0 < iVar2) {
    lVar8 = *param_6;
    local_178 = param_5 + 0x28;
    lVar4 = 0;
    local_170 = param_4;
    do {
      if (*(short *)(*param_4 + lVar4 * 2) != -1) {
        FUN_1432d4ca4(local_178,&local_60);
        lVar6 = local_60;
        plVar1 = local_168;
        lVar9 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*local_168 + 0x20));
        local_140 = local_50 + lVar9 * 8;
        if (local_50 == 0) {
          local_140 = 0;
        }
        FUN_1475b4978(lVar6,&local_78,*(undefined2 *)(*plVar1 + 0x1c));
        local_148 = local_68 + lVar9 * 8;
        if (local_68 == 0) {
          local_148 = 0;
        }
        FUN_1475b4978(lVar6,&local_90,*(undefined2 *)(*plVar1 + 0x18));
        local_150 = local_80 + lVar9 * 8;
        if (local_80 == 0) {
          local_150 = 0;
        }
        FUN_1475b4978(lVar6,&local_a8,*(undefined2 *)(*plVar1 + 0x14));
        local_158 = local_98 + lVar9 * 8;
        if (local_98 == 0) {
          local_158 = 0;
        }
        FUN_1475b4978(lVar6,&local_c0,*(undefined2 *)(*plVar1 + 0x10));
        local_160 = local_b0 + lVar9 * 8;
        if (local_b0 == 0) {
          local_160 = 0;
        }
        FUN_1475b4978(lVar6,&local_d8,*(undefined2 *)(*plVar1 + 0xc));
        lVar5 = local_c8 + lVar9 * 8;
        if (local_c8 == 0) {
          lVar5 = 0;
        }
        FUN_1475b4978(lVar6,&local_f0,*(undefined2 *)(*plVar1 + 8));
        lVar3 = local_e0 + lVar9 * 8;
        if (local_e0 == 0) {
          lVar3 = 0;
        }
        FUN_1475b4978(lVar6,&local_108,*(undefined2 *)(*plVar1 + 4));
        lVar7 = local_f8 + lVar9 * 8;
        if (local_f8 == 0) {
          lVar7 = 0;
        }
        FUN_1475b4978(lVar6,&local_120,*(undefined2 *)*plVar1);
        lVar6 = local_110 + lVar9 * 8;
        if (local_110 == 0) {
          lVar6 = 0;
        }
        local_138 = (undefined4)*plVar1;
        uStack_134 = *(undefined4 *)((longlong)plVar1 + 4);
        uStack_130 = (undefined4)plVar1[1];
        uStack_12c = *(undefined4 *)((longlong)plVar1 + 0xc);
        local_188 = local_140;
        local_190 = local_148;
        local_198 = local_150;
        local_1a0 = local_158;
        local_1a8 = local_160;
        local_1b8 = lVar3;
        local_1b0 = lVar5;
        FUN_140911be0(&local_138,lVar8,lVar6,lVar7);
        if (local_120 != 0) {
          LOCK();
          *(int *)(local_120 + 0x18) = *(int *)(local_120 + 0x18) + -1;
          UNLOCK();
          if (local_118 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_120 + 8));
          }
        }
        if (local_108 != 0) {
          LOCK();
          *(int *)(local_108 + 0x18) = *(int *)(local_108 + 0x18) + -1;
          UNLOCK();
          if (local_100 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_108 + 8));
          }
        }
        param_4 = local_170;
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 0x18) = *(int *)(local_f0 + 0x18) + -1;
          UNLOCK();
          if (local_e8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_f0 + 8));
          }
        }
        if (local_d8 != 0) {
          LOCK();
          *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
          UNLOCK();
          if (local_d0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
          }
        }
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + -1;
          UNLOCK();
          if (local_b8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_c0 + 8));
          }
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar2 = (int)param_4[1];
      }
      lVar4 = lVar4 + 1;
      lVar8 = lVar8 + 0x48;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763efd6 FUN_14763efd6 body=522 status=ok
// SIG undefined FUN_14763efd6(void)

int * FUN_14763efd6(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar4 = FUN_14760384a();
  if ((cVar4 == '\0') || (cVar4 = FUN_140dac6d2(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_14763f025;
  }
  plVar5 = (longlong *)FUN_14763f233(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x88);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0xb0);
  FUN_140dac962(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_14763f32e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x28;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14763f16d;
    }
  }
  else {
LAB_14763f16d:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_14763f025:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14763f1e2 FUN_14763f1e2 body=80 status=ok
// SIG undefined FUN_14763f1e2(void)

void FUN_14763f1e2(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_14763f346(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763f233 FUN_14763f233 body=188 status=ok
// SIG undefined FUN_14763f233(void)

undefined8 * FUN_14763f233(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c6b50;
  puVar8[2] = &PTR_FUN_14a4c6b68;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  puVar8[10] = *(undefined8 *)(param_1 + 8);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(puVar8 + 8) = param_1[4];
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
  *(undefined4 *)(puVar8 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763f2f2 FUN_14763f2f2 body=29 status=ok
// SIG undefined FUN_14763f2f2(void)

undefined8 FUN_14763f2f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763f310 FUN_14763f310 body=29 status=ok
// SIG undefined FUN_14763f310(void)

undefined8 FUN_14763f310(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763f346 FUN_14763f346 body=574 status=ok
// SIG undefined FUN_14763f346(void)

void FUN_14763f346(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_90 = (ulonglong)puVar1[0xc];
  local_98 = (ulonglong)puVar1[0xb];
  local_a8 = (ulonglong)puVar1[10];
  local_70 = (ulonglong)puVar1[8];
  local_78 = (ulonglong)puVar1[7];
  local_80 = (ulonglong)puVar1[6];
  local_88 = (ulonglong)puVar1[5];
  lVar4 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar4;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_a0 = lVar2 + local_a8;
  local_b0 = lVar2 + local_70;
  local_b8 = lVar2 + local_78;
  local_c0 = lVar2 + local_80;
  local_c8 = lVar2 + local_88;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  local_118 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_118 = lVar4;
  }
  local_110 = local_c8;
  if (local_88 == 0xffffffff) {
    local_110 = lVar4;
  }
  local_108 = local_c0;
  if (local_80 == 0xffffffff) {
    local_108 = lVar4;
  }
  local_100 = local_b8;
  if (local_78 == 0xffffffff) {
    local_100 = lVar4;
  }
  local_f8 = local_b0;
  if (local_70 == 0xffffffff) {
    local_f8 = lVar4;
  }
  local_f0 = lVar2 + (ulonglong)puVar1[9];
  if ((ulonglong)puVar1[9] == 0xffffffff) {
    local_f0 = lVar4;
  }
  local_e8 = local_a0;
  if (local_a8 == 0xffffffff) {
    local_e8 = lVar4;
  }
  local_e0 = lVar2 + local_98;
  if (local_98 == 0xffffffff) {
    local_e0 = lVar4;
  }
  local_d8 = lVar2 + local_90;
  if (local_90 == 0xffffffff) {
    local_d8 = lVar4;
  }
  FUN_14763f586(param_1,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763f586 FUN_14763f586 body=936 status=ok
// SIG undefined FUN_14763f586(void)

void FUN_14763f586(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar9 = *(ushort *)(param_2 + 0xe);
  if (*param_4 == 0) {
    lVar10 = param_4[1];
    if (lVar10 == 0) {
      if (uVar9 != 0 && param_4[2] != 0) {
        local_e0 = (ulonglong)((uint)uVar9 * 8);
        uVar13 = 0;
        local_d8 = param_4[2];
        do {
          local_88 = *(undefined8 *)(param_13 + uVar13);
          local_90 = *(undefined8 *)(param_12 + uVar13);
          local_98 = *(undefined8 *)(param_11 + uVar13);
          local_a8 = *(undefined8 *)(param_10 + uVar13);
          local_b0 = *(undefined8 *)(param_9 + uVar13);
          local_a0 = *(undefined8 *)(param_8 + uVar13);
          local_b8 = *(undefined8 *)(param_7 + uVar13);
          local_c0 = *(undefined8 *)(param_6 + uVar13);
          local_c8 = *(undefined8 *)(param_5 + uVar13);
          FUN_14763f9b6(*(undefined8 *)(local_d8 + uVar13 * 2),*(undefined8 *)(param_3 + uVar13),
                        &local_c8);
          uVar13 = uVar13 + 8;
        } while (local_e0 != uVar13);
      }
    }
    else if (uVar9 != 0) {
      uVar13 = 0;
      do {
        uVar12 = (ulonglong)*(ushort *)(lVar10 + uVar13);
        if (uVar12 != 0) {
          lVar11 = *(longlong *)(param_3 + uVar13 * 4);
          uVar1 = *(undefined8 *)(param_6 + uVar13 * 4);
          uVar2 = *(undefined8 *)(param_7 + uVar13 * 4);
          uVar3 = *(undefined8 *)(param_8 + uVar13 * 4);
          uVar4 = *(undefined8 *)(param_9 + uVar13 * 4);
          uVar5 = *(undefined8 *)(param_10 + uVar13 * 4);
          uVar6 = *(undefined8 *)(param_11 + uVar13 * 4);
          uVar7 = *(undefined8 *)(param_12 + uVar13 * 4);
          uVar8 = *(undefined8 *)(param_13 + uVar13 * 4);
          *(undefined8 *)(lVar11 + uVar12) = *(undefined8 *)(param_5 + uVar13 * 4);
          *(undefined8 *)(lVar11 + 8 + uVar12) = uVar1;
          *(undefined8 *)(lVar11 + 0x10 + uVar12) = uVar2;
          *(undefined8 *)(lVar11 + 0x18 + uVar12) = uVar4;
          *(undefined8 *)(lVar11 + 0x20 + uVar12) = uVar5;
          *(undefined8 *)(lVar11 + 0x28 + uVar12) = uVar3;
          *(undefined8 *)(lVar11 + 0x30 + uVar12) = uVar6;
          *(undefined8 *)(lVar11 + 0x38 + uVar12) = uVar7;
          *(undefined8 *)(lVar11 + 0x40 + uVar12) = uVar8;
        }
        uVar13 = uVar13 + 2;
      } while ((uint)uVar9 * 2 != uVar13);
    }
  }
  else if (uVar9 != 0) {
    local_e0 = (ulonglong)((uint)uVar9 * 2);
    uVar13 = 0;
    local_d8 = *param_4;
    local_d0 = param_3;
    do {
      local_88 = *(undefined8 *)(param_13 + uVar13 * 4);
      local_90 = *(undefined8 *)(param_12 + uVar13 * 4);
      local_98 = *(undefined8 *)(param_11 + uVar13 * 4);
      local_a0 = *(undefined8 *)(param_10 + uVar13 * 4);
      local_a8 = *(undefined8 *)(param_9 + uVar13 * 4);
      local_b0 = *(undefined8 *)(param_8 + uVar13 * 4);
      local_b8 = *(undefined8 *)(param_7 + uVar13 * 4);
      local_c0 = *(undefined8 *)(param_6 + uVar13 * 4);
      local_c8 = *(undefined8 *)(param_5 + uVar13 * 4);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(local_d8 + uVar13)))
                (*(undefined8 *)(local_d0 + uVar13 * 4),&local_c8);
      uVar13 = uVar13 + 2;
    } while (local_e0 != uVar13);
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763f9b6 FUN_14763f9b6 body=246 status=ok
// SIG undefined FUN_14763f9b6(void)

void FUN_14763f9b6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if ((plVar2 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2), cVar1 == '\0'))
  {
    lVar3 = FUN_14479d2ce(local_30);
    if (lVar3 == 0) {
      lVar3 = FUN_1406f977c(local_60);
      if ((lVar3 != 0) &&
         (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined8 *)0x0))
      {
        for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    else {
      FUN_14763faae(param_2,lVar3,param_3);
    }
  }
  else {
    (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3);
  }
  lVar3 = FUN_14479d2ce(local_28);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763faae FUN_14763faae body=402 status=ok
// SIG undefined FUN_14763faae(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14763faae(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14763fb4d;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14763fb64;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x48) goto LAB_14763fbff;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14763fbb5;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14763fbce;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x48);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14763fbfb;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_14763fbff:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_14763fc29;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763fc46 FUN_14763fc46 body=546 status=ok
// SIG undefined FUN_14763fc46(void)

int * FUN_14763fc46(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_1 == -1) || (cVar4 = FUN_140dac69c(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_14763fc8c;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  FUN_14763febc(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x44);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x58);
  FUN_140dadb3c(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_14763ffb4;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x14;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14763fdf5;
    }
  }
  else {
LAB_14763fdf5:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_14763fc8c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14763fe6a FUN_14763fe6a body=80 status=ok
// SIG undefined FUN_14763fe6a(void)

void FUN_14763fe6a(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_14763ffcc(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763febc FUN_14763febc body=185 status=ok
// SIG undefined FUN_14763febc(void)

undefined8 *
FUN_14763febc(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c6b70;
  param_1[2] = &PTR_FUN_14a4c6b88;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763ff78 FUN_14763ff78 body=29 status=ok
// SIG undefined FUN_14763ff78(void)

undefined8 FUN_14763ff78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763ff96 FUN_14763ff96 body=29 status=ok
// SIG undefined FUN_14763ff96(void)

undefined8 FUN_14763ff96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763ffcc FUN_14763ffcc body=574 status=ok
// SIG undefined FUN_14763ffcc(void)

void FUN_14763ffcc(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_90 = (ulonglong)puVar1[0xc];
  local_98 = (ulonglong)puVar1[0xb];
  local_a8 = (ulonglong)puVar1[10];
  local_70 = (ulonglong)puVar1[8];
  local_78 = (ulonglong)puVar1[7];
  local_80 = (ulonglong)puVar1[6];
  local_88 = (ulonglong)puVar1[5];
  lVar4 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar4;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_a0 = lVar2 + local_a8;
  local_b0 = lVar2 + local_70;
  local_b8 = lVar2 + local_78;
  local_c0 = lVar2 + local_80;
  local_c8 = lVar2 + local_88;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  local_118 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_118 = lVar4;
  }
  local_110 = local_c8;
  if (local_88 == 0xffffffff) {
    local_110 = lVar4;
  }
  local_108 = local_c0;
  if (local_80 == 0xffffffff) {
    local_108 = lVar4;
  }
  local_100 = local_b8;
  if (local_78 == 0xffffffff) {
    local_100 = lVar4;
  }
  local_f8 = local_b0;
  if (local_70 == 0xffffffff) {
    local_f8 = lVar4;
  }
  local_f0 = lVar2 + (ulonglong)puVar1[9];
  if ((ulonglong)puVar1[9] == 0xffffffff) {
    local_f0 = lVar4;
  }
  local_e8 = local_a0;
  if (local_a8 == 0xffffffff) {
    local_e8 = lVar4;
  }
  local_e0 = lVar2 + local_98;
  if (local_98 == 0xffffffff) {
    local_e0 = lVar4;
  }
  local_d8 = lVar2 + local_90;
  if (local_90 == 0xffffffff) {
    local_d8 = lVar4;
  }
  FUN_14764020c(param_1,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764020c FUN_14764020c body=262 status=ok
// SIG undefined FUN_14764020c(void)

void FUN_14764020c(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1476409b2();
      }
    }
    else {
      FUN_147640688();
    }
    return;
  }
  FUN_147640312();
  return;
}



// FUNCTION 147640312 FUN_147640312 body=884 status=ok
// SIG undefined FUN_147640312(void)

void FUN_147640312(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined4 *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [10];
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_188 = param_1;
  local_140 = param_3;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    local_158 = (undefined4 *)(param_1 + 0x18);
    uVar6 = 0;
    local_160 = param_8;
    local_168 = param_7;
    local_170 = param_6;
    local_178 = param_5;
    lVar8 = param_11;
    lVar11 = param_12;
    lVar13 = param_9;
    lVar14 = param_13;
    lVar15 = param_10;
    local_150 = (ulonglong)*(ushort *)(param_2 + 0xe);
    local_148 = param_4;
    do {
      lVar5 = local_140;
      local_130 = (ulonglong)*(ushort *)(local_148 + uVar6 * 2);
      local_f8[6] = 0;
      local_f8[7] = 0;
      local_f8[4] = 0;
      local_f8[5] = 0;
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_f8[8] = 0;
      local_180 = uVar6;
      (**(code **)(*(longlong *)(local_188 + 8) + 0x18 +
                  (longlong)*(int *)(local_188 + 0x14) * local_130))
                (local_a8,*(undefined8 *)(local_140 + uVar6 * 8));
      lVar4 = local_160;
      lVar3 = local_168;
      lVar2 = local_170;
      lVar1 = local_178;
      local_198 = lVar14;
      if (param_13 == 0) {
        local_198 = param_13;
      }
      local_1a0 = lVar11;
      if (param_12 == 0) {
        local_1a0 = param_12;
      }
      local_1a8 = lVar8;
      if (param_11 == 0) {
        local_1a8 = param_11;
      }
      local_1b0 = lVar15;
      if (param_10 == 0) {
        local_1b0 = param_10;
      }
      local_1b8 = lVar13;
      if (param_9 == 0) {
        local_1b8 = param_9;
      }
      local_1c0 = local_160;
      if (param_8 == 0) {
        local_1c0 = param_8;
      }
      local_1c8 = local_168;
      if (param_7 == 0) {
        local_1c8 = param_7;
      }
      lVar12 = local_170;
      if (param_6 == 0) {
        lVar12 = param_6;
      }
      puVar9 = local_a8;
      puVar10 = local_f8;
      for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar7 = local_178;
      if (param_5 == 0) {
        lVar7 = param_5;
      }
      local_108 = *local_158;
      uStack_104 = local_158[1];
      uStack_100 = local_158[2];
      uStack_fc = local_158[3];
      local_138 = lVar13;
      local_128 = lVar15;
      local_120 = lVar8;
      local_118 = lVar11;
      local_110 = lVar14;
      FUN_140911be0(&local_108,local_f8,lVar7,lVar12);
      (**(code **)(*(longlong *)(local_188 + 8) + 0x20 +
                  (longlong)*(int *)(local_188 + 0x14) * local_130))
                (*(undefined8 *)(lVar5 + local_180 * 8),local_f8);
      uVar6 = local_180 + 1;
      local_178 = lVar1 + 8;
      local_170 = lVar2 + 8;
      local_168 = lVar3 + 8;
      local_160 = lVar4 + 8;
      lVar13 = local_138 + 8;
      lVar15 = local_128 + 8;
      lVar8 = local_120 + 8;
      lVar11 = local_118 + 8;
      lVar14 = local_110 + 8;
    } while (local_150 != uVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147640688 FUN_147640688 body=808 status=ok
// SIG undefined FUN_147640688(void)

void FUN_147640688(undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined4 *local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_108 = param_1;
  local_e0 = param_4;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    local_108 = param_1 + 6;
    uVar16 = 0;
    local_100 = param_5;
    lVar5 = param_7;
    lVar6 = param_12;
    lVar8 = param_9;
    lVar9 = param_8;
    lVar14 = param_6;
    lVar12 = param_11;
    lVar13 = param_10;
    lVar15 = param_13;
    local_f0 = (ulonglong)*(ushort *)(param_2 + 0xe);
    local_e8 = param_3;
    do {
      lVar4 = local_100;
      local_118 = lVar15;
      if (param_13 == 0) {
        local_118 = param_13;
      }
      local_120 = lVar6;
      if (param_12 == 0) {
        local_120 = param_12;
      }
      local_128 = lVar12;
      if (param_11 == 0) {
        local_128 = param_11;
      }
      local_130 = lVar13;
      if (param_10 == 0) {
        local_130 = param_10;
      }
      local_138 = lVar8;
      if (param_9 == 0) {
        local_138 = param_9;
      }
      local_140 = lVar9;
      if (param_8 == 0) {
        local_140 = param_8;
      }
      local_148 = lVar5;
      if (param_7 == 0) {
        local_148 = param_7;
      }
      lVar11 = lVar14;
      if (param_6 == 0) {
        lVar11 = param_6;
      }
      uVar7 = (ulonglong)*(ushort *)(local_e0 + uVar16 * 2);
      lVar3 = *(longlong *)(local_e8 + uVar16 * 8);
      local_90 = *(undefined8 *)(lVar3 + uVar7);
      uStack_88 = ((undefined8 *)(lVar3 + uVar7))[1];
      local_80 = *(undefined8 *)(lVar3 + 0x10 + uVar7);
      local_78 = *(undefined8 *)(lVar3 + 0x28 + uVar7);
      puVar1 = (undefined4 *)(lVar3 + 0x18 + uVar7);
      local_70 = *puVar1;
      uStack_6c = puVar1[1];
      uStack_68 = puVar1[2];
      uStack_64 = puVar1[3];
      local_60 = *(undefined8 *)(lVar3 + 0x30 + uVar7);
      puVar2 = (undefined8 *)(lVar3 + 0x38 + uVar7);
      uStack_58 = *puVar2;
      uStack_50 = puVar2[1];
      lVar10 = local_100;
      if (param_5 == 0) {
        lVar10 = param_5;
      }
      local_a8 = *local_108;
      uStack_a4 = local_108[1];
      uStack_a0 = local_108[2];
      uStack_9c = local_108[3];
      local_f8 = lVar5;
      local_d8 = lVar9;
      local_d0 = lVar8;
      local_c8 = lVar13;
      local_c0 = lVar12;
      local_b8 = lVar6;
      local_b0 = lVar15;
      FUN_140911be0(&local_a8,&local_90,lVar10,lVar11);
      *(undefined8 *)(lVar3 + uVar7) = local_90;
      ((undefined8 *)(lVar3 + uVar7))[1] = uStack_88;
      *(undefined8 *)(lVar3 + 0x10 + uVar7) = local_80;
      puVar2 = (undefined8 *)(lVar3 + 0x18 + uVar7);
      *puVar2 = CONCAT44(uStack_6c,local_70);
      puVar2[1] = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(lVar3 + 0x28 + uVar7) = local_78;
      puVar1 = (undefined4 *)(lVar3 + 0x30 + uVar7);
      *puVar1 = (undefined4)local_60;
      puVar1[1] = local_60._4_4_;
      puVar1[2] = (undefined4)uStack_58;
      puVar1[3] = uStack_58._4_4_;
      *(undefined8 *)(lVar3 + 0x40 + uVar7) = uStack_50;
      uVar16 = uVar16 + 1;
      local_100 = lVar4 + 8;
      lVar14 = lVar14 + 8;
      lVar5 = lVar5 + 8;
      lVar9 = local_d8 + 8;
      lVar8 = local_d0 + 8;
      lVar13 = local_c8 + 8;
      lVar12 = local_c0 + 8;
      lVar6 = lVar6 + 8;
      lVar15 = lVar15 + 8;
    } while (local_f0 != uVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476409b2 FUN_1476409b2 body=681 status=ok
// SIG undefined FUN_1476409b2(void)

void FUN_1476409b2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar5 = 0;
    local_120 = param_4;
    do {
      uVar2 = *(undefined8 *)(local_120 + lVar5 * 2);
      FUN_147640c5c(uVar2,&local_b8,*(undefined8 *)(param_3 + lVar5));
      local_128 = param_13 + lVar5;
      if (param_13 == 0) {
        local_128 = 0;
      }
      local_130 = param_12 + lVar5;
      if (param_12 == 0) {
        local_130 = 0;
      }
      local_138 = param_11 + lVar5;
      if (param_11 == 0) {
        local_138 = 0;
      }
      local_140 = param_10 + lVar5;
      if (param_10 == 0) {
        local_140 = 0;
      }
      local_148 = param_9 + lVar5;
      if (param_9 == 0) {
        local_148 = 0;
      }
      local_150 = param_8 + lVar5;
      if (param_8 == 0) {
        local_150 = 0;
      }
      local_158 = param_7 + lVar5;
      if (param_7 == 0) {
        local_158 = 0;
      }
      lVar4 = param_6 + lVar5;
      if (param_6 == 0) {
        lVar4 = 0;
      }
      lVar3 = param_5 + lVar5;
      local_d0 = CONCAT44(uStack_84,local_88);
      uStack_c8 = CONCAT44(uStack_7c,uStack_80);
      local_100 = local_b8;
      uStack_f8 = uStack_b0;
      local_f0 = local_a8;
      local_e8 = local_90;
      local_e0 = local_a0;
      uStack_d8 = uStack_98;
      local_c0 = local_78;
      if (param_5 == 0) {
        lVar3 = 0;
      }
      local_118 = *(undefined4 *)(param_1 + 0x18);
      uStack_114 = *(undefined4 *)(param_1 + 0x1c);
      uStack_110 = *(undefined4 *)(param_1 + 0x20);
      uStack_10c = *(undefined4 *)(param_1 + 0x24);
      FUN_140911be0(&local_118,&local_100,lVar3,lVar4);
      local_b8 = local_100;
      uStack_b0 = uStack_f8;
      local_a8 = local_f0;
      local_a0 = local_e0;
      uStack_98 = uStack_d8;
      local_90 = local_e8;
      local_88 = (undefined4)local_d0;
      uStack_84 = local_d0._4_4_;
      uStack_80 = (undefined4)uStack_c8;
      uStack_7c = uStack_c8._4_4_;
      local_78 = local_c0;
      FUN_14763f9b6(uVar2,*(undefined8 *)(param_3 + lVar5),&local_b8);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar5);
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147640c5c FUN_147640c5c body=157 status=ok
// SIG undefined FUN_147640c5c(void)

undefined8 * FUN_147640c5c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  uVar1 = (undefined4)DAT_14c846510;
  *(undefined4 *)(param_2 + 6) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  param_2[8] = DAT_14c846520;
  FUN_1406f9c46(uVar1,local_60);
  lVar5 = FUN_1406f977c(local_60);
  if ((lVar5 != 0) &&
     (puVar6 = (undefined8 *)(*(int *)(lVar5 + 0x44) + local_38), puVar6 != (undefined8 *)0x0)) {
    puVar7 = param_2;
    for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147640cfa FUN_147640cfa body=143 status=ok
// SIG undefined FUN_147640cfa(void)

undefined4 * FUN_147640cfa(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147640d8a FUN_147640d8a body=2030 status=ok
// SIG undefined FUN_147640d8a(void)

void FUN_147640d8a(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  short *local_288;
  longlong local_280;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[0xc]) goto LAB_147640de0;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147640de0:
  local_254 = *(int *)(lVar1 + 0x14);
  local_280 = param_3;
  local_1f0 = param_1;
  if (local_254 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[0xb]) goto LAB_147640e1c;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_147640e1c:
  local_200 = *puVar10;
  local_258 = *(int *)(lVar1 + 0x14);
  if (local_258 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[10]) goto LAB_147640e63;
      puVar11 = puVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_147640e63:
  local_210 = *puVar13;
  local_25c = *(int *)(lVar1 + 0x14);
  if (local_25c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar17 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar17 + 0x1e) == param_4[9]) goto LAB_147640eab;
      puVar17 = puVar17 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar17 = (undefined8 *)0x0;
LAB_147640eab:
  local_218 = *puVar11;
  local_260 = *(int *)(lVar1 + 0x14);
  if (local_260 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar17 + 1));
  }
  LOCK();
  *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar15 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar15 + 0x1e) == param_4[8]) goto LAB_147640ef5;
      puVar15 = puVar15 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar15 = (undefined8 *)0x0;
LAB_147640ef5:
  local_220 = *puVar17;
  local_264 = *(int *)(lVar1 + 0x14);
  if (local_264 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
  }
  LOCK();
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[7]) goto LAB_147640f47;
      puVar12 = puVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_147640f47:
  local_228 = *puVar15;
  local_268 = *(int *)(lVar1 + 0x14);
  local_1f8 = puVar10;
  if (local_268 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[6]) goto LAB_147640f8f;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147640f8f:
  local_230 = *puVar12;
  local_26c = *(int *)(lVar1 + 0x14);
  if (local_26c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar14 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar14 + 0x1e) == param_4[5]) goto LAB_147640fde;
      puVar14 = puVar14 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_147640fde:
  local_240 = *puVar10;
  local_270 = *(int *)(lVar1 + 0x14);
  local_208 = puVar13;
  if (local_270 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar14 + 1));
  }
  LOCK();
  *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[4]) goto LAB_14764102b;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_14764102b:
  local_248 = *puVar14;
  local_274 = *(int *)(lVar1 + 0x14);
  local_288 = param_4;
  local_238 = param_2;
  if (local_274 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  plVar2 = local_238;
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  local_250 = *puVar13;
  local_4c = local_288[3];
  local_50 = *(undefined4 *)(local_288 + 1);
  FUN_1410bd8a8(&local_1d0,
                *(undefined8 *)(*(longlong *)(*local_238 + 0x60) + (longlong)(int)local_238[1] * 8),
                &local_50,local_280);
  lVar1 = *(longlong *)(*(longlong *)(*plVar2 + 0x60) + (longlong)(int)plVar2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar16 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar16 + 0x1e) == *local_288) goto LAB_1476410cd;
      puVar16 = puVar16 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar16 = (undefined8 *)0x0;
LAB_1476410cd:
  local_180 = *(int *)(lVar1 + 0x14);
  if (*(int *)(lVar1 + 0x14) == 1) {
    local_288 = (short *)CONCAT44(local_288._4_4_,1);
    AcquireSRWLockShared((PSRWLOCK)(puVar16 + 1));
    local_180 = (int)local_288;
  }
  lVar1 = local_1c0;
  uVar8 = local_200;
  uVar7 = local_210;
  uVar6 = local_218;
  uVar5 = local_220;
  uVar4 = local_228;
  uVar3 = local_230;
  LOCK();
  *(int *)(puVar16 + 3) = *(int *)(puVar16 + 3) + 1;
  UNLOCK();
  local_178 = *puVar16;
  local_170 = local_1d0;
  local_168 = local_1c8;
  local_1d0 = 0;
  local_160 = local_1c0;
  local_1c0 = 0;
  local_158 = local_1b8;
  local_150 = local_1b0;
  local_1b8 = 0;
  local_288 = (short *)local_1a8;
  local_148 = local_1a8;
  local_1a8 = 0;
  local_140 = local_1a0;
  local_138 = local_198;
  local_1a0 = 0;
  local_280 = local_190;
  local_130 = local_190;
  local_120 = local_274;
  local_118 = local_250;
  local_108 = local_270;
  local_100 = local_248;
  local_f0 = local_26c;
  local_e8 = local_240;
  local_d8 = local_268;
  local_d0 = local_230;
  local_c0 = local_264;
  local_b8 = local_228;
  local_a8 = local_260;
  local_a0 = local_220;
  local_90 = local_25c;
  local_88 = local_218;
  local_80 = local_208;
  local_78 = local_258;
  local_70 = local_210;
  local_68 = local_1f8;
  local_60 = local_254;
  local_190 = 0;
  local_58 = local_200;
  local_188 = puVar16;
  local_128 = puVar13;
  local_110 = puVar14;
  local_f8 = puVar10;
  local_e0 = puVar12;
  local_c8 = puVar15;
  local_b0 = puVar17;
  local_98 = puVar11;
  FUN_1432f59b8();
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if (lVar1 != 0) {
    local_1e8 = lVar1;
  }
  if (local_288 != (short *)0x0) {
    lStack_1e0 = (longlong)local_288;
  }
  if (local_280 != 0) {
    local_1d8 = local_280;
  }
  local_298 = uVar8;
  local_2a0 = uVar7;
  local_2a8 = uVar6;
  local_2b0 = uVar5;
  local_2b8 = uVar4;
  local_2c0 = uVar3;
  local_2c8 = local_240;
  local_2d0 = local_248;
  local_2d8 = local_250;
  FUN_14763f586(local_1f0,
                *(undefined8 *)(*(longlong *)(*local_238 + 0x60) + (longlong)(int)local_238[1] * 8),
                local_178,&local_1e8);
  FUN_147604854(&local_188);
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14764157a FUN_14764157a body=118 status=ok
// SIG undefined FUN_14764157a(void)

longlong FUN_14764157a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147640cfa();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476415f2 FUN_1476415f2 body=143 status=ok
// SIG undefined FUN_1476415f2(void)

undefined4 * FUN_1476415f2(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147641682 FUN_147641682 body=1889 status=ok
// SIG undefined FUN_147641682(void)

void FUN_147641682(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined4 local_270;
  longlong local_268;
  longlong local_260;
  int local_258;
  undefined8 local_250;
  longlong local_248;
  int local_240;
  undefined8 local_238;
  longlong local_230;
  int local_228;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  undefined8 local_208;
  longlong local_200;
  int local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  int local_198;
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1a0,param_4[0xc]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1b8,param_4[0xb]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1d0,param_4[10]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1e8,param_4[9]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_200,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_218,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_230,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_248,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_260,param_4[4]);
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_2a8,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_147641830;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_147641830:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_178 = *puVar4;
  local_170 = local_2a8;
  local_168 = local_2a0;
  local_2a8 = 0;
  local_160 = local_298;
  uStack_158 = uStack_290;
  local_298 = 0;
  uStack_290 = 0;
  local_150 = local_288;
  local_148 = local_280;
  local_280 = 0;
  local_140 = local_278;
  local_138 = local_270;
  local_278 = 0;
  local_130 = local_268;
  local_268 = 0;
  local_128 = local_260;
  local_120 = local_258;
  local_260 = 0;
  local_118 = local_250;
  local_250 = 0;
  local_110 = local_248;
  local_108 = local_240;
  local_248 = 0;
  local_100 = local_238;
  local_238 = 0;
  local_f8 = local_230;
  local_f0 = local_228;
  local_230 = 0;
  local_e8 = local_220;
  local_220 = 0;
  local_e0 = local_218;
  local_d8 = local_210;
  local_218 = 0;
  local_d0 = local_208;
  local_208 = 0;
  local_c8 = local_200;
  local_c0 = local_1f8;
  local_200 = 0;
  local_b8 = local_1f0;
  local_1f0 = 0;
  local_b0 = local_1e8;
  local_a8 = local_1e0;
  local_1e8 = 0;
  local_a0 = local_1d8;
  local_1d8 = 0;
  local_98 = local_1d0;
  local_90 = local_1c8;
  local_1d0 = 0;
  local_88 = local_1c0;
  local_1c0 = 0;
  local_80 = local_1b8;
  local_78 = local_1b0;
  local_1b8 = 0;
  local_70 = local_1a8;
  local_1a8 = 0;
  local_68 = local_1a0;
  local_60 = local_198;
  local_1a0 = 0;
  local_58 = local_190;
  local_190 = 0;
  local_188 = puVar4;
  local_180 = iVar1;
  FUN_1432f59b8();
  if (local_260 != 0) {
    LOCK();
    *(int *)(local_260 + 0x18) = *(int *)(local_260 + 0x18) + -1;
    UNLOCK();
    if (local_258 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_260 + 8));
    }
  }
  if (local_248 != 0) {
    LOCK();
    *(int *)(local_248 + 0x18) = *(int *)(local_248 + 0x18) + -1;
    UNLOCK();
    if (local_240 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_248 + 8));
    }
  }
  if (local_230 != 0) {
    LOCK();
    *(int *)(local_230 + 0x18) = *(int *)(local_230 + 0x18) + -1;
    UNLOCK();
    if (local_228 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_230 + 8));
    }
  }
  if (local_218 != 0) {
    LOCK();
    *(int *)(local_218 + 0x18) = *(int *)(local_218 + 0x18) + -1;
    UNLOCK();
    if (local_210 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_218 + 8));
    }
  }
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 0x18) = *(int *)(local_200 + 0x18) + -1;
    UNLOCK();
    if (local_1f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_200 + 8));
    }
  }
  if (local_1e8 != 0) {
    LOCK();
    *(int *)(local_1e8 + 0x18) = *(int *)(local_1e8 + 0x18) + -1;
    UNLOCK();
    if (local_1e0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1e8 + 8));
    }
  }
  if (local_1d0 != 0) {
    LOCK();
    *(int *)(local_1d0 + 0x18) = *(int *)(local_1d0 + 0x18) + -1;
    UNLOCK();
    if (local_1c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1d0 + 8));
    }
  }
  if (local_1b8 != 0) {
    LOCK();
    *(int *)(local_1b8 + 0x18) = *(int *)(local_1b8 + 0x18) + -1;
    UNLOCK();
    if (local_1b0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1b8 + 8));
    }
  }
  if (local_1a0 != 0) {
    LOCK();
    *(int *)(local_1a0 + 0x18) = *(int *)(local_1a0 + 0x18) + -1;
    UNLOCK();
    if (local_198 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1a0 + 8));
    }
  }
  local_2c8 = 0;
  lStack_2c0 = 0;
  local_2b8 = 0;
  if (local_160 != 0) {
    local_2c8 = local_160;
  }
  if (local_148 != 0) {
    lStack_2c0 = local_148;
  }
  if (local_130 != 0) {
    local_2b8 = local_130;
  }
  local_2d8 = local_58;
  local_2e0 = local_70;
  local_2e8 = local_88;
  local_2f0 = local_a0;
  local_2f8 = local_b8;
  local_300 = local_d0;
  local_308 = local_e8;
  local_310 = local_100;
  local_318 = local_118;
  FUN_14764020c(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_178,
                &local_2c8);
  FUN_14760548c(&local_188);
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147641de4 FUN_147641de4 body=146 status=ok
// SIG undefined FUN_147641de4(void)

longlong FUN_147641de4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1476415f2();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x100) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x104) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x108) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x10c) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147641e78 FUN_147641e78 body=179 status=ok
// SIG undefined FUN_147641e78(void)

undefined8 * FUN_147641e78(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
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
      goto LAB_147641ed2;
    }
  }
  uVar6 = 0;
LAB_147641ed2:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147641f2c FUN_147641f2c body=184 status=ok
// SIG undefined FUN_147641f2c(void)

void FUN_147641f2c(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147641fe6 FUN_147641fe6 body=241 status=ok
// SIG undefined FUN_147641fe6(void)

undefined8 * FUN_147641fe6(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c6bd0;
  param_1[0x1b] = &PTR_FUN_14a4c6c18;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476420d8 FUN_1476420d8 body=9 status=ok
// SIG undefined FUN_1476420d8(void)

void FUN_1476420d8(longlong param_1)

{
  FUN_147642dc4(param_1 + 0x10);
  return;
}



// FUNCTION 1476420e2 FUN_1476420e2 body=29 status=ok
// SIG undefined FUN_1476420e2(void)

undefined8 FUN_1476420e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147642100 FUN_147642100 body=38 status=ok
// SIG undefined FUN_147642100(void)

undefined8 FUN_147642100(undefined8 param_1,int param_2)

{
  FUN_147642dc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764214c FUN_14764214c body=82 status=ok
// SIG undefined FUN_14764214c(void)

void FUN_14764214c(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_147642e72();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476421a0 FUN_1476421a0 body=1056 status=ok
// SIG undefined FUN_1476421a0(void)

ulonglong FUN_1476421a0(longlong param_1,int param_2,char param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RSI;
  undefined7 uVar10;
  undefined8 *puVar9;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [9];
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar3 + 8))
                      (plVar3,(longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68));
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),3);
    if (cVar5 == '\0') goto LAB_14764221c;
  }
  uVar10 = (undefined7)(unaff_RSI >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar16 = *(longlong *)(param_1 + 0x68);
      lVar17 = (longlong)param_2 * 0x78;
      puVar7 = (undefined4 *)(lVar16 + lVar17);
      local_c8 = *puVar7;
      uStack_c4 = puVar7[1];
      uStack_c0 = puVar7[2];
      uStack_bc = puVar7[3];
      puVar9 = (undefined8 *)(puVar7 + 4);
      puVar11 = local_b8;
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar16 = lVar16 + 0x58 + lVar17;
      local_60 = *(byte *)(lVar16 + 0x10);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,lVar16);
      local_58 = *(byte *)(lVar16 + 0x18);
      FUN_1410d7556(param_1 + 0x18,&local_c8);
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar17 + 0x68)])();
      FUN_147642ffa(param_1 + 0x68);
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar2) {
        uVar12 = (ulonglong)uVar2;
        uVar14 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar15 = (uint)uVar12 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x68) < param_2) {
            uVar8 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar12;
        } while (bVar4);
      }
      if (((int)uVar8 < (int)uVar2) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x68) <= param_2)) {
        FUN_147603588(param_1 + 0xa0,uVar8,1);
      }
joined_r0x0001476424f6:
      if ((local_58 & 1) != 0) {
        FUN_147642efc(&local_c8,local_b8);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
      unaff_RSI = 0;
      goto LAB_14764221c;
    }
    unaff_RSI = CONCAT71(uVar10,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78) & 1) == 0)
    goto LAB_14764221c;
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    lVar16 = *(longlong *)(param_1 + 0xa0);
    uVar14 = 0;
    if (0 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
      uVar15 = uVar2;
      do {
        uVar8 = uVar8 >> 1;
        uVar13 = (uint)uVar8 + uVar14;
        if (*(int *)(lVar16 + (ulonglong)uVar13 * 0x68) < param_2) {
          uVar14 = uVar13 + (uVar15 & 1);
        }
        bVar4 = 1 < uVar15;
        uVar15 = (uint)uVar8;
      } while (bVar4);
    }
    if ((((int)uVar14 < (int)uVar2) && (*(int *)(lVar16 + (ulonglong)uVar14 * 0x68) <= param_2)) &&
       (lVar16 + (ulonglong)uVar14 * 0x68 != -8)) {
      FUN_147642efc((longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68));
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar2) {
        uVar12 = (ulonglong)uVar2;
        uVar14 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar15 = (uint)uVar12 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x68) < param_2) {
            uVar8 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar12;
        } while (bVar4);
      }
      unaff_RSI = CONCAT71(uVar10,1);
      if (((int)uVar8 < (int)uVar2) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x68) <= param_2)) {
        unaff_RSI = CONCAT71(uVar10,1);
        FUN_147603588(param_1 + 0xa0,uVar8,1);
      }
      goto LAB_14764221c;
    }
    unaff_RSI = CONCAT71(uVar10,1);
    if (param_4 == '\x01') {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78);
      if ((bVar1 & 1) == 0) goto LAB_14764221c;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
      *(byte *)(puVar7 + 0x1c) = bVar1 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14764221c;
      lVar16 = (longlong)param_2 * 0x78;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + lVar16);
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar16);
      if ((bVar1 & 2) == 0) {
        local_c8 = *puVar7;
        uStack_c4 = puVar7[1];
        uStack_c0 = puVar7[2];
        uStack_bc = puVar7[3];
        puVar9 = (undefined8 *)(puVar7 + 4);
        puVar11 = local_b8;
        for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        local_60 = *(byte *)(puVar7 + 0x1a);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar7 + 0x16);
        local_58 = *(byte *)(puVar7 + 0x1c);
        FUN_1410d7556(param_1 + 0x18,&local_c8);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar16 + 0x68)])();
        FUN_147642ffa(param_1 + 0x68);
        uVar2 = *(uint *)(param_1 + 0xa8);
        uVar8 = 0;
        if (0 < (int)uVar2) {
          uVar12 = (ulonglong)uVar2;
          uVar14 = uVar2;
          do {
            uVar12 = uVar12 >> 1;
            uVar15 = (uint)uVar12 + (int)uVar8;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x68) < param_2) {
              uVar8 = (ulonglong)(uVar15 + (uVar14 & 1));
            }
            bVar4 = 1 < uVar14;
            uVar14 = (uint)uVar12;
          } while (bVar4);
        }
        if (((int)uVar8 < (int)uVar2) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x68) <= param_2)) {
          FUN_147603588(param_1 + 0xa0,uVar8,1);
        }
        goto joined_r0x0001476424f6;
      }
      if ((bVar1 & 1) == 0) goto LAB_14764221c;
    }
  }
  FUN_147642efc(puVar7,puVar7 + 4);
LAB_14764221c:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1476425c2 FUN_1476425c2 body=412 status=ok
// SIG undefined FUN_1476425c2(void)

ulonglong FUN_1476425c2(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_147642672;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x78;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x68)])();
    FUN_147642ffa(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x68) < param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar6 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x68) <= param_2)) {
      FUN_147603588(param_1 + 0xa0,uVar6,1);
    }
    unaff_RBP = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x68) < param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    uVar7 = (undefined7)(unaff_RBP >> 8);
    if (((int)uVar6 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x68) <= param_2)) {
      unaff_RBP = CONCAT71(uVar7,1);
      FUN_147603588(param_1 + 0xa0,uVar6,1);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78);
      *pbVar2 = *pbVar2 | 2;
      unaff_RBP = CONCAT71(uVar7,1);
    }
  }
LAB_147642672:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764276a FUN_14764276a body=266 status=ok
// SIG undefined FUN_14764276a(void)

void FUN_14764276a(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_14764306e(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147642876 FUN_147642876 body=941 status=ok
// SIG undefined FUN_147642876(void)

void FUN_147642876(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  byte *pbVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined4 local_154;
  char *local_150;
  longlong local_148;
  longlong local_140;
  undefined1 local_134 [8];
  int local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar2 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_168 = param_1;
  if (uVar2 != 0) {
    param_1 = param_1 + -0xd8;
    local_148 = *param_6;
    local_140 = param_6[1];
    local_160 = param_6[2];
    param_5 = param_5 + 8;
    uVar10 = 0;
    do {
      local_128 = *(longlong *)(param_4 + uVar10 * 4);
      if ((local_128 != 0) && (cVar3 = FUN_14764338c(param_1,&local_128,param_5), cVar3 != '\0')) {
        FUN_14764306e(param_1,local_134,&local_128,param_5);
        piVar6 = *(int **)(local_168 + -0x28);
        if (*piVar6 != 0) {
          FUN_140adeba6(piVar6,local_134);
          piVar6 = *(int **)(local_168 + -0x28);
        }
        lVar4 = FUN_1400e4054(piVar6,local_134);
        if (lVar4 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (undefined4)
                  CONCAT71((int7)((ulonglong)local_134 >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0)
                          );
        }
        cVar3 = FUN_147643412(param_1,local_12c,uVar8);
        if (cVar3 == '\0') {
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_154 = uVar8;
          local_150 = param_2;
          if (local_140 == 0) {
            if (local_148 == 0) {
              if (local_160 != 0) {
                uStack_90 = *(ulonglong *)(local_160 + uVar10 * 8);
                local_88 = *(longlong *)(local_160 + 8 + uVar10 * 8);
                uVar5 = uStack_90;
                if (local_88 != 0) {
                  LOCK();
                  *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
                  UNLOCK();
                  uVar5 = *(ulonglong *)(local_160 + uVar10 * 8);
                }
                uStack_80 = 2;
                FUN_147640c5c(uVar5,&local_120,*(undefined8 *)(param_4 + uVar10 * 4));
                local_d8 = CONCAT44(local_120._4_4_,(undefined4)local_120);
                uStack_d0 = CONCAT44(uStack_114,uStack_118);
                local_c8 = local_110;
                uStack_c0 = local_f8;
                local_b8 = local_108;
                uStack_b0 = local_100;
                local_a8 = local_f0;
                uStack_a0 = local_e8;
                local_98 = local_e0;
              }
            }
            else {
              lVar4 = (longlong)*(int *)(local_168 + 0x24) *
                      (ulonglong)*(ushort *)(local_148 + uVar10);
              uStack_90 = *(longlong *)(local_168 + 0x18) + lVar4;
              (**(code **)(*(longlong *)(local_168 + 0x18) + 0x18 + lVar4))
                        (&local_120,*(undefined8 *)(param_4 + uVar10 * 4));
              puVar7 = &local_120;
              puVar9 = &local_d8;
              for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
            }
          }
          else {
            uVar5 = (ulonglong)*(ushort *)(local_140 + uVar10);
            uStack_90 = (ulonglong)*(ushort *)(local_140 + uVar10);
            uStack_80 = 1;
            lVar4 = *(longlong *)(param_4 + uVar10 * 4);
            local_d8 = *(undefined8 *)(lVar4 + uVar5);
            uStack_d0 = ((undefined8 *)(lVar4 + uVar5))[1];
            local_c8 = *(undefined8 *)(lVar4 + 0x10 + uVar5);
            uStack_c0 = *(undefined8 *)(lVar4 + 0x28 + uVar5);
            puVar7 = (undefined8 *)(lVar4 + 0x18 + uVar5);
            local_b8 = *puVar7;
            uStack_b0 = puVar7[1];
            local_a8 = *(undefined8 *)(lVar4 + 0x30 + uVar5);
            puVar7 = (undefined8 *)(lVar4 + 0x38 + uVar5);
            uStack_a0 = *puVar7;
            local_98 = puVar7[1];
          }
          FUN_1476434a8(param_1,local_12c,local_154,&local_d8);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_80 & 0xff])(&uStack_90);
          param_2 = local_150;
        }
        if (*param_2 == '\x01') {
          pbVar1 = (byte *)(*(longlong *)(local_168 + -0x70) + 0x70 + (longlong)local_12c * 0x78);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar10 = uVar10 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar2 * 2 != uVar10);
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147642c24 FUN_147642c24 body=38 status=ok
// SIG undefined FUN_147642c24(void)

undefined8 FUN_147642c24(undefined8 param_1,int param_2)

{
  FUN_147642dc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147642c4a FUN_147642c4a body=52 status=ok
// SIG undefined FUN_147642c4a(void)

void FUN_147642c4a(longlong *param_1)

{
  FUN_147642c7e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147642c7e FUN_147642c7e body=324 status=ok
// SIG undefined FUN_147642c7e(void)

void FUN_147642c7e(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x78 + 0x68)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147642dc4 FUN_147642dc4 body=173 status=ok
// SIG undefined FUN_147642dc4(void)

void FUN_147642dc4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c6c30;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_14588e4dd(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147642c4a(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147642e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147642e72 FUN_147642e72 body=136 status=ok
// SIG undefined FUN_147642e72(void)

void FUN_147642e72(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147642efc FUN_147642efc body=213 status=ok
// SIG undefined FUN_147642efc(void)

void FUN_147642efc(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_24 = param_1[1];
  lVar4 = FUN_14479d2ce(&local_28);
  if (lVar4 != 0) {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      uVar5 = (ulonglong)*(ushort *)(param_2 + 9);
      uVar2 = param_2[2];
      uVar3 = param_2[1];
      *(undefined8 *)(lVar4 + uVar5) = *param_2;
      ((undefined8 *)(lVar4 + uVar5))[1] = uVar3;
      *(undefined8 *)(lVar4 + 0x10 + uVar5) = uVar2;
      uVar2 = param_2[3];
      uVar3 = param_2[5];
      puVar1 = (undefined8 *)(lVar4 + 0x18 + uVar5);
      *puVar1 = param_2[4];
      puVar1[1] = uVar3;
      *(undefined8 *)(lVar4 + 0x28 + uVar5) = uVar2;
      uVar2 = param_2[8];
      uVar3 = param_2[7];
      puVar1 = (undefined8 *)(lVar4 + 0x30 + uVar5);
      *puVar1 = param_2[6];
      puVar1[1] = uVar3;
      *(undefined8 *)(lVar4 + 0x40 + uVar5) = uVar2;
    }
    else {
      if (*(char *)(param_2 + 0xb) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
      if (param_2[9] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147642ffa FUN_147642ffa body=116 status=ok
// SIG undefined FUN_147642ffa(void)

void FUN_147642ffa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 14764306e FUN_14764306e body=189 status=ok
// SIG undefined FUN_14764306e(void)

longlong FUN_14764306e(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14764312c(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764312c FUN_14764312c body=381 status=ok
// SIG undefined FUN_14764312c(void)

int * FUN_14764312c(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_b8._0_4_ = *param_3;
    local_b8._4_4_ = param_3[1];
    uStack_b0._0_4_ = param_3[2];
    uStack_b0._4_4_ = param_3[3];
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_1476432aa(param_1 + 0x68,local_c8);
    *local_c0 = (undefined4)local_b8;
    local_c0[1] = local_b8._4_4_;
    local_c0[2] = (undefined4)uStack_b0;
    local_c0[3] = uStack_b0._4_4_;
    *(undefined1 *)(local_c0 + 0x1a) = 0;
    *(undefined1 *)(local_c0 + 0x1c) = 0;
    *(undefined8 *)(local_c0 + 4) = 0;
    *(undefined8 *)(local_c0 + 6) = 0;
    *(undefined8 *)(local_c0 + 8) = 0;
    *(undefined8 *)(local_c0 + 10) = 0;
    *(undefined8 *)(local_c0 + 0xc) = 0;
    *(undefined8 *)(local_c0 + 0xe) = 0;
    *(undefined8 *)(local_c0 + 0x10) = 0;
    *(undefined8 *)(local_c0 + 0x12) = 0;
    *(undefined8 *)(local_c0 + 0x14) = 0;
    *(undefined8 *)(local_c0 + 0x16) = 0;
    *param_2 = local_c8[0];
    local_b8 = param_3;
    uStack_b0 = param_2;
    FUN_140bf3cbe(plVar1,local_c8,&local_b8,0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476432aa FUN_1476432aa body=226 status=ok
// SIG undefined FUN_1476432aa(void)

int * FUN_1476432aa(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 14764338c FUN_14764338c body=132 status=ok
// SIG undefined FUN_14764338c(void)

byte FUN_14764338c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14764361a(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 147643412 FUN_147643412 body=150 status=ok
// SIG undefined FUN_147643412(void)

ulonglong FUN_147643412(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x70);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x68) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x68) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x68;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x70));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476434a8 FUN_1476434a8 body=369 status=ok
// SIG undefined FUN_1476434a8(void)

void FUN_1476434a8(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar7 = *(byte *)(lVar8 + 0x70);
    if ((bVar7 & 1) == 0) {
      puVar9 = param_4;
      puVar10 = (undefined8 *)(lVar8 + 0x10);
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if ((undefined8 *)(lVar8 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xb));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xb)])
                  (&local_58,param_4 + 9);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar8 + 0x68);
        uVar2 = *(undefined4 *)(lVar8 + 0x58);
        uVar3 = *(undefined4 *)(lVar8 + 0x5c);
        uVar4 = *(undefined4 *)(lVar8 + 0x60);
        uVar5 = *(undefined4 *)(lVar8 + 100);
        *(undefined4 *)(lVar8 + 0x58) = local_58;
        *(undefined4 *)(lVar8 + 0x5c) = uStack_54;
        *(undefined4 *)(lVar8 + 0x60) = uStack_50;
        *(undefined4 *)(lVar8 + 100) = uStack_4c;
        *(ulonglong *)(lVar8 + 0x68) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar7 = *(byte *)(lVar8 + 0x70);
      }
      *(byte *)(lVar8 + 0x70) = bVar7 | 1;
    }
    else {
      FUN_1476036b4(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    puVar9 = param_4;
    puVar10 = (undefined8 *)(lVar8 + 0x10);
    for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    if ((undefined8 *)(lVar8 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xb));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xb)])
                (&local_58,param_4 + 9);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar8 + 0x68);
      uVar2 = *(undefined4 *)(lVar8 + 0x58);
      uVar3 = *(undefined4 *)(lVar8 + 0x5c);
      uVar4 = *(undefined4 *)(lVar8 + 0x60);
      uVar5 = *(undefined4 *)(lVar8 + 100);
      *(undefined4 *)(lVar8 + 0x58) = local_58;
      *(undefined4 *)(lVar8 + 0x5c) = uStack_54;
      *(undefined4 *)(lVar8 + 0x60) = uStack_50;
      *(undefined4 *)(lVar8 + 100) = uStack_4c;
      *(ulonglong *)(lVar8 + 0x68) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar8 + 0x70) = *(byte *)(lVar8 + 0x70) | 3;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764361a FUN_14764361a body=189 status=ok
// SIG undefined FUN_14764361a(void)

longlong FUN_14764361a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1476436d8(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476436d8 FUN_1476436d8 body=167 status=ok
// SIG undefined FUN_1476436d8(void)

undefined4 * FUN_1476436d8(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 147643780 FUN_147643780 body=167 status=ok
// SIG undefined FUN_147643780(void)

void FUN_147643780(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476437fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476437fb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1476437fb:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014764381b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147643828 FUN_147643828 body=905 status=ok
// SIG undefined FUN_147643828(void)

void FUN_147643828(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte local_599;
  undefined8 *local_578;
  int local_570;
  longlong local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  int iStack_558;
  undefined4 uStack_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined1 local_538 [8];
  undefined1 local_530 [32];
  undefined1 *local_510;
  undefined8 local_508;
  undefined8 local_500 [150];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_538;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar9 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_510 + lVar5) = 0;
        *(undefined4 *)((longlong)local_500 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x490);
      local_540 = *(undefined8 *)(param_3 + 8);
      local_560 = *param_3;
      uStack_55c = param_3[1];
      iStack_558 = param_3[2];
      uStack_554 = param_3[3];
      local_550 = *(undefined8 *)(param_3 + 4);
      uStack_548 = *(undefined8 *)(param_3 + 6);
      local_510 = (undefined1 *)0x0;
      local_508 = 0x400000000;
      puVar13 = local_500;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_540._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_540);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_578,&local_560,puVar13);
          uVar12 = local_508;
          if (local_578 != (undefined8 *)0x0) {
            lVar11 = (longlong)(int)local_508;
            uVar6 = (int)local_508 + 1;
            local_508 = CONCAT44(local_508._4_4_,uVar6);
            if (local_508._4_4_ < uVar6) {
              FUN_14476a5c8(local_530,uVar12 & 0xffffffff);
              puVar7 = local_510;
              if (local_510 == (undefined1 *)0x0) {
                puVar7 = local_530;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_578;
              if (local_578 == (undefined8 *)0x0) goto LAB_147643a0a;
            }
            else {
              puVar7 = local_510;
              if (local_510 == (undefined1 *)0x0) {
                puVar7 = local_530;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_578;
            }
            LOCK();
            *(int *)(local_578 + 1) = *(int *)(local_578 + 1) + 1;
            UNLOCK();
            if (local_578 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_578 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_578)(local_578,1);
              }
            }
          }
        }
LAB_147643a0a:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 9);
      if ((int)local_508 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_530,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_578 = (undefined8 *)0x0;
        local_568 = 0;
      }
      else {
        FUN_147605a78(lVar9 + 0x28,&local_578,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_599 = local_570 == 1;
      }
      if (0 < iStack_558) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_55c,local_560) + lVar5 * 2);
          lVar11 = *param_6;
          puVar13 = local_500;
          lVar8 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar8 & 0x1f) & 1) != 0) {
              uVar12 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar8 * 4);
              lVar10 = uVar12 + local_568;
              if (local_568 == 0) {
                lVar10 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar12),lVar10);
              *(undefined8 *)(lVar5 * 0x48 + lVar11 + uVar12) = uVar3;
            }
            lVar8 = lVar8 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar8 != 9);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_558);
      }
      *(undefined4 *)(lVar9 + 0x29c) = 1;
      if (local_578 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_578 + 3) = *(int *)(local_578 + 3) + -1;
        UNLOCK();
        if ((local_599 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_578 + 1));
        }
      }
      FUN_14588b8d6(local_530);
      lVar9 = 0x400;
      do {
        FUN_1475d7c02((longlong)local_500 + lVar9);
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147643bb2 FUN_147643bb2 body=57 status=ok
// SIG undefined FUN_147643bb2(void)

undefined8 * FUN_147643bb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6ca0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147643bec FUN_147643bec body=152 status=ok
// SIG undefined FUN_147643bec(void)

void FUN_147643bec(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_147643d3e(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147643cca FUN_147643cca body=57 status=ok
// SIG undefined FUN_147643cca(void)

void FUN_147643cca(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_147607e22(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147643d04 FUN_147643d04 body=57 status=ok
// SIG undefined FUN_147643d04(void)

undefined8 * FUN_147643d04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6ca0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147643d3e FUN_147643d3e body=232 status=ok
// SIG undefined FUN_147643d3e(void)

undefined8 * FUN_147643d3e(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_147643e28();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c6cc0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147643e28 FUN_147643e28 body=104 status=ok
// SIG undefined FUN_147643e28(void)

undefined8 FUN_147643e28(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147643e90 FUN_147643e90 body=38 status=ok
// SIG undefined FUN_147643e90(void)

undefined8 FUN_147643e90(undefined8 param_1,int param_2)

{
  FUN_147643f2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147643eb6 FUN_147643eb6 body=118 status=ok
// SIG undefined FUN_147643eb6(void)

void FUN_147643eb6(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_147605ee4(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 147643f2c FUN_147643f2c body=71 status=ok
// SIG undefined FUN_147643f2c(void)

void FUN_147643f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6cc0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_147643f74(param_1 + 8);
  FUN_1475b4ca4(param_1 + 1);
  return;
}



// FUNCTION 147643f74 FUN_147643f74 body=52 status=ok
// SIG undefined FUN_147643f74(void)

void FUN_147643f74(longlong *param_1)

{
  FUN_147643fa8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147643fa8 FUN_147643fa8 body=89 status=ok
// SIG undefined FUN_147643fa8(void)

void FUN_147643fa8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 147644002 FUN_147644002 body=1091 status=ok
// SIG undefined FUN_147644002(void)

void FUN_147644002(longlong param_1,longlong param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c4;
  ushort local_be;
  char local_bc;
  char local_ba;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14764405f;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14764405f:
  uVar2 = *(ushort *)(param_2 + 0xe);
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_f4 = *(int *)(param_2 + 0x14);
  if (local_f4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1476440b5;
      plVar16 = plVar16 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1476440b5:
  local_100 = *plVar10;
  local_f8 = *(int *)(param_2 + 0x14);
  if (local_f8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  lVar6 = *plVar16;
  local_e0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar2 != 0) {
    local_f0 = param_1 + 8;
    uVar15 = 0;
    do {
      local_c4 = *(int *)(lVar6 + uVar15 * 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar9 = *(longlong *)(param_1 + 8);
      uVar14 = 0;
      if (0 < (int)uVar3) {
        uVar14 = 0;
        uVar13 = uVar3;
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar9 + (ulonglong)uVar1 * 0x50) < local_c4) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
      }
      if ((((int)uVar14 < (int)uVar3) && (*(int *)(lVar9 + (ulonglong)uVar14 * 0x50) <= local_c4))
         && (puVar11 = (undefined8 *)(lVar9 + (ulonglong)uVar14 * 0x50 + 8),
            puVar11 != (undefined8 *)0x0)) {
        puVar12 = (undefined8 *)(local_100 + uVar15 * 0x48);
        for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      else {
        lVar9 = FUN_1475b443c(local_e0);
        if (((lVar9 != 0) && (lVar7 = FUN_14479d2ce(lVar9), lVar7 != 0)) &&
           (*(longlong *)(lVar9 + 8) != 0)) {
          local_d8 = *(undefined4 *)(param_1 + 0x30);
          uStack_d4 = *(undefined4 *)(param_1 + 0x34);
          uStack_d0 = *(undefined4 *)(param_1 + 0x38);
          uStack_cc = *(undefined4 *)(param_1 + 0x3c);
          FUN_140d4d2ba(&local_be,lVar7,lVar9 + 8,&local_d8);
          lVar4 = *(longlong *)(param_1 + 0x48);
          if (lVar4 == 0) {
LAB_1476441eb:
            if (local_ba == '\0') {
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_78 = 0;
              local_70 = 1;
              puVar11 = &local_b8;
              FUN_147644ebe(lVar7,lVar9 + 0x10,puVar11);
            }
            else if (local_bc == '\x01') {
              local_70 = 1;
              puVar11 = &local_b8;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_be))(puVar11,lVar7);
            }
            else {
              uVar8 = (ulonglong)local_be;
              local_70 = 1;
              puVar11 = (undefined8 *)(lVar7 + 0x18 + uVar8);
              puVar12 = (undefined8 *)(lVar7 + 0x38 + uVar8);
              local_b8 = *(undefined8 *)(lVar7 + uVar8);
              uStack_b0 = ((undefined8 *)(lVar7 + uVar8))[1];
              local_a8 = *(undefined8 *)(lVar7 + 0x10 + uVar8);
              uStack_a0 = *(undefined8 *)(lVar7 + 0x28 + uVar8);
              local_98 = *puVar11;
              uStack_90 = puVar11[1];
              local_88 = *(undefined8 *)(lVar7 + 0x30 + uVar8);
              uStack_80 = *puVar12;
              local_78 = puVar12[1];
              puVar11 = &local_b8;
            }
          }
          else {
            local_108 = lVar4;
            if (local_ba == '\0') {
              FUN_147644faa(lVar4,&local_b8,lVar7,lVar9 + 0x10);
            }
            else if (local_bc == '\x01') {
              FUN_147645714();
            }
            else {
              FUN_1476458f6(lVar4,&local_b8,lVar7,local_be);
            }
            if (local_b8._2_1_ == '\x01') {
              puVar11 = (undefined8 *)
                        ((ulonglong)((uint)(ushort)local_b8 * 0x48) + *(longlong *)(local_108 + 8));
            }
            else {
              puVar11 = (undefined8 *)0x0;
            }
            if (puVar11 == (undefined8 *)0x0) goto LAB_1476441eb;
          }
          puVar12 = (undefined8 *)(local_100 + uVar15 * 0x48);
          for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          FUN_1476075da(local_f0,&local_c4);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar15 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_e8) {
      uVar15 = local_e8;
    }
    plVar10[2] = uVar15;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_f4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147644446 FUN_147644446 body=1747 status=ok
// SIG undefined FUN_147644446(void)

void FUN_147644446(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  longlong local_180;
  int local_174;
  int local_170;
  int local_16c;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  undefined2 local_150;
  undefined6 uStack_14e;
  int local_148;
  longlong local_140;
  undefined2 local_138;
  undefined6 uStack_136;
  int local_130;
  longlong local_128;
  longlong local_120;
  int local_118;
  longlong local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ushort local_74;
  char local_72;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1476444ab;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476444ab:
  uVar3 = *(ushort *)(param_2 + 0xe);
  uVar15 = (ulonglong)uVar3;
  local_160 = *(ulonglong *)(param_1 + 0x40);
  local_16c = *(int *)(param_2 + 0x14);
  if (local_16c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar14 = *(undefined8 **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar14 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476444fe;
      puVar14 = puVar14 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_1476444fe:
  local_180 = *plVar8;
  local_168 = *(ulonglong *)(param_1 + 0x40);
  local_170 = *(int *)(param_2 + 0x14);
  if (local_170 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar14 + 1));
  }
  LOCK();
  *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_147644557;
      plVar12 = plVar12 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147644557:
  puVar13 = (undefined8 *)*puVar14;
  local_174 = *(int *)(param_2 + 0x14);
  if (local_174 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  local_190 = *plVar12;
  FUN_140b325e4(param_2,&local_120,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  local_198 = local_110;
  local_188 = uVar15;
  if (local_110 == 0) {
    FUN_1410bd96e(param_2,&local_138,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_128 == 0) {
      FUN_1410bd9c4(param_2,&local_150,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_198 = local_140;
      if (uVar3 != 0 && local_140 != 0) {
        local_188 = (ulonglong)((uint)uVar3 * 2);
        uVar15 = 0;
        do {
          lVar5 = *(longlong *)(local_198 + uVar15 * 8);
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(lVar5 + 0x58) != 0) {
            puVar7 = *(undefined2 **)(lVar5 + 0x50);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_108,puVar7,1);
          FUN_147644faa(uVar4,&local_74,*(undefined8 *)(local_190 + uVar15 * 4),&local_108);
          if (local_72 == '\x01') {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uint)local_74 * 0x48) +
                      *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
            puVar11 = puVar13;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          else {
            FUN_147640c5c(*(undefined8 *)(local_198 + uVar15 * 8),&local_108,
                          *(undefined8 *)(local_190 + uVar15 * 4));
            local_c0 = local_108;
            uStack_bc = uStack_104;
            uStack_b8 = uStack_100;
            uStack_b4 = uStack_fc;
            local_b0 = local_f8;
            local_a0 = local_f0;
            local_90 = local_d8;
            local_88 = local_d0;
            local_80 = uStack_c8;
            puVar10 = (undefined8 *)&local_c0;
            puVar11 = puVar13;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            local_1a8 = *(undefined8 *)(local_198 + uVar15 * 8);
            FUN_147645d38(*(undefined8 *)(param_1 + 0x48),&local_108,
                          *(undefined8 *)(local_190 + uVar15 * 4));
            *(undefined2 *)(local_180 + uVar15) = (undefined2)local_108;
          }
          uVar15 = uVar15 + 2;
          puVar13 = puVar13 + 9;
        } while (local_188 != uVar15);
      }
      if (CONCAT62(uStack_14e,local_150) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT62(uStack_14e,local_150) + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_148 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT62(uStack_14e,local_150) + 8));
        }
      }
    }
    else {
      local_198 = local_128;
      if (uVar15 != 0) {
        uVar15 = 0;
        do {
          FUN_1476458f6(*(undefined8 *)(param_1 + 0x48),&local_c0,
                        *(undefined8 *)(local_190 + uVar15 * 8),
                        *(undefined2 *)(local_128 + uVar15 * 2));
          if (local_c0._2_1_ == '\x01') {
            puVar10 = (undefined8 *)
                      ((ulonglong)((local_c0 & 0xffff) * 0x48) +
                      *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
            puVar11 = puVar13;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          else {
            uVar6 = (ulonglong)*(ushort *)(local_198 + uVar15 * 2);
            lVar5 = *(longlong *)(local_190 + uVar15 * 8);
            puVar9 = (uint *)(lVar5 + uVar6);
            puVar2 = (undefined4 *)(lVar5 + 0x18 + uVar6);
            puVar10 = (undefined8 *)(lVar5 + 0x38 + uVar6);
            local_108 = *puVar9;
            uStack_104 = puVar9[1];
            uStack_100 = puVar9[2];
            uStack_fc = puVar9[3];
            local_f8 = *(undefined8 *)(lVar5 + 0x10 + uVar6);
            local_f0 = *(undefined8 *)(lVar5 + 0x28 + uVar6);
            local_e8 = *puVar2;
            uStack_e4 = puVar2[1];
            uStack_e0 = puVar2[2];
            uStack_dc = puVar2[3];
            local_d8 = *(undefined8 *)(lVar5 + 0x30 + uVar6);
            local_d0 = *puVar10;
            uStack_c8 = puVar10[1];
            puVar9 = &local_108;
            puVar10 = puVar13;
            for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar10 = *(undefined8 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 1;
            }
            local_1a8 = CONCAT62(local_1a8._2_6_,*(undefined2 *)(local_198 + uVar15 * 2));
            FUN_147645c56(*(undefined8 *)(param_1 + 0x48),&local_150,
                          *(undefined8 *)(local_190 + uVar15 * 8));
            *(undefined2 *)(local_180 + uVar15 * 2) = local_150;
          }
          uVar15 = uVar15 + 1;
          puVar13 = puVar13 + 9;
        } while (local_188 != uVar15);
      }
    }
    if (CONCAT62(uStack_136,local_138) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT62(uStack_136,local_138) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_130 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT62(uStack_136,local_138) + 8));
      }
    }
  }
  else {
    local_158 = param_1;
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        FUN_147645714(*(undefined8 *)(param_1 + 0x48),&local_c0,
                      *(undefined8 *)(local_190 + uVar15 * 8),
                      *(undefined2 *)(local_198 + uVar15 * 2));
        if (local_c0._2_1_ == '\x01') {
          puVar10 = (undefined8 *)
                    ((ulonglong)((local_c0 & 0xffff) * 0x48) +
                    *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
          puVar11 = puVar13;
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        else {
          (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                      (longlong)*(int *)(param_1 + 0x3c) *
                      (ulonglong)*(ushort *)(local_198 + uVar15 * 2)))
                    (&local_108,*(undefined8 *)(local_190 + uVar15 * 8));
          puVar9 = &local_108;
          puVar10 = puVar13;
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar10 = *(undefined8 *)puVar9;
            puVar9 = puVar9 + 2;
            puVar10 = puVar10 + 1;
          }
          local_1a8 = CONCAT62(local_1a8._2_6_,*(undefined2 *)(local_198 + uVar15 * 2));
          FUN_147645b74(*(undefined8 *)(param_1 + 0x48),&local_138,
                        *(undefined8 *)(local_190 + uVar15 * 8),&local_108);
          *(undefined2 *)(local_180 + uVar15 * 2) = local_138;
        }
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 9;
      } while (local_188 != uVar15);
    }
  }
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 0x18) = *(int *)(local_120 + 0x18) + -1;
    UNLOCK();
    if (local_118 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_120 + 8));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_174 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = puVar14[2];
    if ((ulonglong)puVar14[2] < local_168) {
      uVar15 = local_168;
    }
    puVar14[2] = uVar15;
    LOCK();
    *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + -1;
    UNLOCK();
    if (local_170 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar14 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar15 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_160) {
      uVar15 = local_160;
    }
    plVar8[2] = uVar15;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_16c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147644b1a FUN_147644b1a body=931 status=ok
// SIG undefined FUN_147644b1a(void)

void FUN_147644b1a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined1 auStack_118 [40];
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar17 = *(undefined8 **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147644b6f;
      puVar17 = puVar17 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  puVar17 = (undefined8 *)0x0;
LAB_147644b6f:
  uVar5 = *(ushort *)(param_2 + 0xe);
  uVar14 = (ulonglong)uVar5;
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_ec = *(int *)(param_2 + 0x14);
  if (local_ec == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar17 + 1));
  }
  LOCK();
  *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar20 = *(longlong **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar20 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_147644bc3;
      plVar20 = plVar20 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar20 = (longlong *)0x0;
LAB_147644bc3:
  puVar21 = (undefined8 *)*puVar17;
  local_f0 = *(int *)(param_2 + 0x14);
  local_e0 = puVar17;
  if (local_f0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar20 + 1));
  }
  LOCK();
  *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
  UNLOCK();
  lVar13 = *plVar20;
  FUN_140b325e4(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_98 == 0) {
    FUN_1410bd96e(param_2,&local_c0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_b0 == 0) {
      FUN_1410bd9c4(param_2,&local_d8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar5 != 0 && local_c8 != 0) {
        puVar21 = puVar21 + 8;
        lVar15 = 0;
        do {
          FUN_147640c5c(*(undefined8 *)(local_c8 + lVar15 * 2),&local_90,
                        *(undefined8 *)(lVar13 + lVar15));
          *(undefined4 *)(puVar21 + -8) = (undefined4)local_90;
          *(undefined4 *)((longlong)puVar21 + -0x3c) = local_90._4_4_;
          *(undefined4 *)(puVar21 + -7) = uStack_88;
          *(undefined4 *)((longlong)puVar21 + -0x34) = uStack_84;
          puVar21[-6] = local_80;
          puVar21[-5] = local_68;
          puVar21[-4] = local_78;
          puVar21[-3] = uStack_70;
          puVar21[-2] = local_60;
          puVar21[-1] = local_58;
          *puVar21 = uStack_50;
          lVar15 = lVar15 + 8;
          puVar21 = puVar21 + 9;
        } while ((ulonglong)uVar5 * 8 != lVar15);
      }
      if (local_d8 != 0) {
        LOCK();
        *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
        UNLOCK();
        if (local_d0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
        }
      }
    }
    else if (uVar14 != 0) {
      puVar21 = puVar21 + 8;
      uVar19 = 0;
      do {
        uVar16 = (ulonglong)*(ushort *)(local_b0 + uVar19 * 2);
        lVar15 = *(longlong *)(lVar13 + uVar19 * 8);
        puVar1 = (undefined4 *)(lVar15 + uVar16);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar2 = *(undefined8 *)(lVar15 + 0x10 + uVar16);
        uVar3 = *(undefined8 *)(lVar15 + 0x28 + uVar16);
        puVar17 = (undefined8 *)(lVar15 + 0x18 + uVar16);
        uVar9 = *puVar17;
        uVar10 = puVar17[1];
        uVar4 = *(undefined8 *)(lVar15 + 0x30 + uVar16);
        puVar17 = (undefined8 *)(lVar15 + 0x38 + uVar16);
        uVar11 = *puVar17;
        uVar12 = puVar17[1];
        *(undefined4 *)(puVar21 + -8) = *puVar1;
        *(undefined4 *)((longlong)puVar21 + -0x3c) = uVar6;
        *(undefined4 *)(puVar21 + -7) = uVar7;
        *(undefined4 *)((longlong)puVar21 + -0x34) = uVar8;
        puVar21[-6] = uVar2;
        puVar21[-5] = uVar3;
        puVar21[-4] = uVar9;
        puVar21[-3] = uVar10;
        puVar21[-2] = uVar4;
        puVar21[-1] = uVar11;
        *puVar21 = uVar12;
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 9;
      } while (uVar14 != uVar19);
    }
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + -1;
      UNLOCK();
      if (local_b8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_c0 + 8));
      }
    }
  }
  else if (uVar14 != 0) {
    uVar19 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_98 + uVar19 * 2)
                  ))(&local_90,*(undefined8 *)(lVar13 + uVar19 * 8));
      puVar17 = &local_90;
      puVar18 = puVar21;
      for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      uVar19 = uVar19 + 1;
      puVar21 = puVar21 + 9;
    } while (uVar14 != uVar19);
  }
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
    }
  }
  puVar17 = local_e0;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 3) = (int)plVar20[3] + -1;
    UNLOCK();
    if (local_f0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar20 + 1));
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    uVar14 = puVar17[2];
    if ((ulonglong)puVar17[2] < local_e8) {
      uVar14 = local_e8;
    }
    puVar17[2] = uVar14;
    LOCK();
    *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + -1;
    UNLOCK();
    if (local_ec == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar17 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147644ebe FUN_147644ebe body=235 status=ok
// SIG undefined FUN_147644ebe(void)

void FUN_147644ebe(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_b8 [40];
  undefined2 *local_90;
  int local_88;
  longlong local_80 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400021e4(param_2,&local_90);
  puVar1 = local_90;
  if (local_88 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_80,puVar1);
  FUN_147645ad8(&local_70,param_1,local_80);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    *param_3 = local_70;
    param_3[1] = uStack_6c;
    param_3[2] = uStack_68;
    param_3[3] = uStack_64;
    *(undefined8 *)(param_3 + 4) = local_60;
    *(undefined8 *)(param_3 + 6) = local_48;
    *(undefined8 *)(param_3 + 8) = local_58;
    *(undefined8 *)(param_3 + 10) = uStack_50;
    *(undefined8 *)(param_3 + 0xc) = local_40;
    *(undefined8 *)(param_3 + 0xe) = local_38;
    *(undefined8 *)(param_3 + 0x10) = uStack_30;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147644faa FUN_147644faa body=483 status=ok
// SIG undefined FUN_147644faa(void)

undefined8 FUN_147644faa(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1476450d8;
        }
        else {
LAB_1476450d8:
          FUN_14764537c(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147645448(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_14764518e(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764518e FUN_14764518e body=493 status=ok
// SIG undefined FUN_14764518e(void)

undefined2 * FUN_14764518e(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1476452c0;
        }
        else {
LAB_1476452c0:
          FUN_14764537c(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_147645448(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_14764565c((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764537c FUN_14764537c body=90 status=ok
// SIG undefined FUN_14764537c(void)

void FUN_14764537c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1476453d6();
  return;
}



// FUNCTION 1476453d6 FUN_1476453d6 body=114 status=ok
// SIG undefined FUN_1476453d6(void)

void FUN_1476453d6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147645448 FUN_147645448 body=68 status=ok
// SIG undefined FUN_147645448(void)

void FUN_147645448(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14764548c(param_1);
  return;
}



// FUNCTION 14764548c FUN_14764548c body=462 status=ok
// SIG undefined FUN_14764548c(void)

void FUN_14764548c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14764565c FUN_14764565c body=107 status=ok
// SIG undefined FUN_14764565c(void)

int FUN_14764565c(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1476456c7(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476456c7 FUN_1476456c7 body=76 status=ok
// SIG undefined FUN_1476456c7(void)

undefined8 FUN_1476456c7(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147645714 FUN_147645714 body=481 status=ok
// SIG undefined FUN_147645714(void)

undefined8 FUN_147645714(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147645842;
        }
        else {
LAB_147645842:
          FUN_14764537c(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147645448(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_14764518e(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476458f6 FUN_1476458f6 body=481 status=ok
// SIG undefined FUN_1476458f6(void)

undefined8 FUN_1476458f6(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147645a24;
        }
        else {
LAB_147645a24:
          FUN_14764537c(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147645448(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_14764518e(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147645ad8 FUN_147645ad8 body=155 status=ok
// SIG undefined FUN_147645ad8(void)

undefined8 * FUN_147645ad8(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar10 = FUN_1406f977c(local_48);
  if ((lVar10 == 0) ||
     (puVar11 = (undefined8 *)(*(int *)(lVar10 + 0x44) + local_20), puVar11 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar4 = puVar11[1];
    uVar5 = puVar11[2];
    uVar6 = puVar11[3];
    uVar7 = puVar11[4];
    uVar8 = puVar11[5];
    *param_1 = *puVar11;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[8] = puVar11[8];
    uVar1 = *(undefined4 *)((longlong)puVar11 + 0x34);
    uVar2 = *(undefined4 *)(puVar11 + 7);
    uVar3 = *(undefined4 *)((longlong)puVar11 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar11 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 7) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 9) = uVar9;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147645b74 FUN_147645b74 body=224 status=ok
// SIG undefined FUN_147645b74(void)

undefined2 *
FUN_147645b74(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [42];
  undefined2 local_6e;
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_54;
  undefined2 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_68 = (undefined8 *)0x0;
    FUN_14485c47a(&local_68,param_3);
    local_54 = local_68;
  }
  local_4c = param_5;
  local_44 = 1;
  FUN_147607aa4(param_1 + 8,&local_68);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *local_60 = *param_4;
    param_4 = param_4 + 1;
    local_60 = local_60 + 1;
  }
  local_60 = (undefined8 *)&local_6e;
  local_6e = local_68._0_2_;
  local_68 = &local_54;
  FUN_147645e2e(param_1 + 0x40,local_6c,&local_68);
  *param_2 = local_6e;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147645c56 FUN_147645c56 body=224 status=ok
// SIG undefined FUN_147645c56(void)

undefined2 *
FUN_147645c56(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [42];
  undefined2 local_6e;
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_54;
  undefined2 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_68 = (undefined8 *)0x0;
    FUN_14485c47a(&local_68,param_3);
    local_54 = local_68;
  }
  local_4c = param_5;
  local_44 = 0;
  FUN_147607aa4(param_1 + 8,&local_68);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *local_60 = *param_4;
    param_4 = param_4 + 1;
    local_60 = local_60 + 1;
  }
  local_60 = (undefined8 *)&local_6e;
  local_6e = local_68._0_2_;
  local_68 = &local_54;
  FUN_147645e2e(param_1 + 0x40,local_6c,&local_68);
  *param_2 = local_6e;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147645d38 FUN_147645d38 body=245 status=ok
// SIG undefined FUN_147645d38(void)

undefined2 *
FUN_147645d38(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_147607aa4(param_1 + 8,&local_58);
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *local_50 = *param_4;
    param_4 = param_4 + 1;
    local_50 = local_50 + 1;
  }
  local_50 = (undefined8 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_147645e2e(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147645e2e FUN_147645e2e body=339 status=ok
// SIG undefined FUN_147645e2e(void)

undefined4 * FUN_147645e2e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147645f82(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_147646068(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14764548c(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147645f82 FUN_147645f82 body=229 status=ok
// SIG undefined FUN_147645f82(void)

int * FUN_147645f82(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1405b363e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147646068 FUN_147646068 body=93 status=ok
// SIG undefined FUN_147646068(void)

undefined8 FUN_147646068(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14764565c(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1476453d6(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1476460c6 FUN_1476460c6 body=31 status=ok
// SIG undefined FUN_1476460c6(void)

undefined8 FUN_1476460c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147646102 FUN_147646102 body=93 status=ok
// SIG undefined FUN_147646102(void)

void FUN_147646102(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4c6cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147646160 FUN_147646160 body=126 status=ok
// SIG undefined FUN_147646160(void)

void FUN_147646160(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4c6cd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476461cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476461de FUN_1476461de body=21 status=ok
// SIG undefined FUN_1476461de(void)

undefined8 FUN_1476461de(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1476461f6 FUN_1476461f6 body=402 status=ok
// SIG undefined FUN_1476461f6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1476461f6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147646295;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476462ac;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x48) goto LAB_147646347;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476462fd;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147646316;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x48);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147646343;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_147646347:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_147646371;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14764638e FUN_14764638e body=38 status=ok
// SIG undefined FUN_14764638e(void)

undefined8 FUN_14764638e(undefined8 param_1,int param_2)

{
  FUN_14588e3f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476463b4 FUN_1476463b4 body=147 status=ok
// SIG undefined FUN_1476463b4(void)

undefined8 * FUN_1476463b4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  FUN_1406f9c46(0,local_60);
  lVar1 = FUN_1406f977c(local_60);
  if ((lVar1 != 0) &&
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_38), puVar2 != (undefined8 *)0x0)) {
    puVar3 = param_2;
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646448 FUN_147646448 body=69 status=ok
// SIG undefined FUN_147646448(void)

undefined8 * FUN_147646448(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2e60;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764648e FUN_14764648e body=119 status=ok
// SIG undefined FUN_14764648e(void)

void FUN_14764648e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c2e60;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x34);
  *(char *)((longlong)param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x2c) = uVar2;
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x38);
  cVar1 = *(char *)(param_2 + 0x58);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    param_1[10] = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[9] = uVar2;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  *param_1 = &PTR_FUN_14a4c6e00;
  return;
}



// FUNCTION 147646506 FUN_147646506 body=69 status=ok
// SIG undefined FUN_147646506(void)

undefined8 * FUN_147646506(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2e80;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764654c FUN_14764654c body=208 status=ok
// SIG undefined FUN_14764654c(void)

void FUN_14764654c(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,8);
  FUN_14764661e(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c6e40;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764661e FUN_14764661e body=111 status=ok
// SIG undefined FUN_14764661e(void)

void FUN_14764661e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c6e60;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x38);
  *(char *)(param_1 + 7) = cVar1;
  if (cVar1 == '\x01') {
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  cVar1 = *(char *)(param_2 + 0x54);
  *(char *)((longlong)param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)((longlong)param_1 + 0x4c) = uVar2;
  }
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return;
}



// FUNCTION 14764668e FUN_14764668e body=69 status=ok
// SIG undefined FUN_14764668e(void)

undefined8 * FUN_14764668e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6e60;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476466d4 FUN_1476466d4 body=78 status=ok
// SIG undefined FUN_1476466d4(void)

undefined8 FUN_1476466d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147646814();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646724 FUN_147646724 body=82 status=ok
// SIG undefined FUN_147646724(void)

void FUN_147646724(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147646920(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646778 FUN_147646778 body=86 status=ok
// SIG undefined FUN_147646778(void)

void FUN_147646778(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_140659bfa(param_1 + 8,lVar2,uVar1);
    FUN_140659c98(param_1 + 0x28,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1476467ce FUN_1476467ce body=69 status=ok
// SIG undefined FUN_1476467ce(void)

undefined8 * FUN_1476467ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6e60;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147646814 FUN_147646814 body=266 status=ok
// SIG undefined FUN_147646814(void)

undefined2 * FUN_147646814(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147646920(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_147646778(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646920 FUN_147646920 body=77 status=ok
// SIG undefined FUN_147646920(void)

void FUN_147646920(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  FUN_140dba9e6(*param_1,param_2[0x28]);
  return;
}



// FUNCTION 14764696e FUN_14764696e body=78 status=ok
// SIG undefined FUN_14764696e(void)

undefined8 FUN_14764696e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147646abe();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476469be FUN_1476469be body=52 status=ok
// SIG undefined FUN_1476469be(void)

undefined8 * FUN_1476469be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6ea0;
  FUN_1476469f2(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476469f2 FUN_1476469f2 body=203 status=ok
// SIG undefined FUN_1476469f2(void)

void FUN_1476469f2(longlong param_1)

{
  if (*(char *)(param_1 + 0x138) == '\x01') {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147646abe FUN_147646abe body=312 status=ok
// SIG undefined FUN_147646abe(void)

undefined2 * FUN_147646abe(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_140de1c46(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x150) * '\x02' + '\x01',
                param_4,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14065991e(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646bf8 FUN_147646bf8 body=157 status=ok
// SIG undefined FUN_147646bf8(void)

void FUN_147646bf8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *(undefined1 *)(param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4c6ec0;
  *(undefined4 *)(puVar1 + 1) = local_20;
  *(undefined1 *)((longlong)puVar1 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646c96 FUN_147646c96 body=257 status=ok
// SIG undefined FUN_147646c96(void)

void FUN_147646c96(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147647420(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646d98 FUN_147646d98 body=151 status=ok
// SIG undefined FUN_147646d98(void)

undefined8 *
FUN_147646d98(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x58;
  local_48 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_30 = param_3;
  FUN_147648072(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  *param_2 = &PTR_FUN_14a4c6f40;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646e30 FUN_147646e30 body=165 status=ok
// SIG undefined FUN_147646e30(void)

undefined8 *
FUN_147646e30(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_38;
  local_36 = param_5;
  local_30 = *param_4;
  local_28 = 1;
  local_48 = param_1 + 0x70;
  local_50 = param_1 + 0x58;
  local_58 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  local_38 = param_3;
  FUN_14764850e(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14a4c6f80;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646ed6 FUN_147646ed6 body=181 status=ok
// SIG undefined FUN_147646ed6(void)

undefined8 *
FUN_147646ed6(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_40;
  local_3e = param_5;
  local_38 = *param_4;
  local_30 = 1;
  local_50 = param_1 + 0x88;
  local_58 = param_1 + 0x70;
  local_60 = param_1 + 0x58;
  local_68 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0xa0);
  local_40 = param_3;
  FUN_147648968(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x17) = uVar1;
  *param_2 = &PTR_FUN_14a4c6fc0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147646f8c FUN_147646f8c body=197 status=ok
// SIG undefined FUN_147646f8c(void)

undefined8 *
FUN_147646f8c(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined2 *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &local_48;
  local_46 = param_5;
  local_40 = *param_4;
  local_38 = 1;
  local_58 = param_1 + 0xa0;
  local_60 = param_1 + 0x88;
  local_68 = param_1 + 0x70;
  local_70 = param_1 + 0x58;
  local_78 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0xb8);
  local_48 = param_3;
  FUN_147648e38(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x1a) = uVar1;
  *param_2 = &PTR_FUN_14a4c7000;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647052 FUN_147647052 body=213 status=ok
// SIG undefined FUN_147647052(void)

undefined8 *
FUN_147647052(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined2 *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = &local_50;
  local_4e = param_5;
  local_48 = *param_4;
  local_40 = 1;
  local_60 = param_1 + 0xb8;
  local_68 = param_1 + 0xa0;
  local_70 = param_1 + 0x88;
  local_78 = param_1 + 0x70;
  local_80 = param_1 + 0x58;
  local_88 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0xd0);
  local_50 = param_3;
  FUN_1476493c0(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x1d) = uVar1;
  *param_2 = &PTR_FUN_14a4c7040;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647128 FUN_147647128 body=235 status=ok
// SIG undefined FUN_147647128(void)

undefined8 *
FUN_147647128(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined2 *local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = &local_58;
  local_56 = param_5;
  local_50 = *param_4;
  local_48 = 1;
  local_68 = param_1 + 0xd0;
  local_70 = param_1 + 0xb8;
  local_78 = param_1 + 0xa0;
  local_80 = param_1 + 0x88;
  local_88 = param_1 + 0x70;
  local_90 = param_1 + 0x58;
  local_98 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0xe8);
  local_58 = param_3;
  FUN_1476499b0(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  *param_2 = &PTR_FUN_14a4c7080;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647214 FUN_147647214 body=99 status=ok
// SIG undefined FUN_147647214(void)

void FUN_147647214(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6fe0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147647278 FUN_147647278 body=29 status=ok
// SIG undefined FUN_147647278(void)

undefined8 FUN_147647278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147647296 FUN_147647296 body=78 status=ok
// SIG undefined FUN_147647296(void)

undefined8 FUN_147647296(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147647322();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476472e6 FUN_1476472e6 body=57 status=ok
// SIG undefined FUN_1476472e6(void)

void FUN_1476472e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 10));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147647322 FUN_147647322 body=252 status=ok
// SIG undefined FUN_147647322(void)

undefined2 * FUN_147647322(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 10));
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xc) * '\x02' + '\x01',param_4,
                local_58);
  FUN_140560464(param_3,&local_78,param_4);
  local_88 = local_78;
  local_80 = local_70;
  local_7c = 1;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647420 FUN_147647420 body=104 status=ok
// SIG undefined FUN_147647420(void)

void FUN_147647420(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x110,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c6f00;
  FUN_1476475ee(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x108);
  *param_1 = &PTR_FUN_14a4c6ee0;
  return;
}



// FUNCTION 147647488 FUN_147647488 body=52 status=ok
// SIG undefined FUN_147647488(void)

undefined8 * FUN_147647488(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6f00;
  FUN_14764775a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476474bc FUN_1476474bc body=78 status=ok
// SIG undefined FUN_1476474bc(void)

undefined8 FUN_1476474bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476477de();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764750c FUN_14764750c body=85 status=ok
// SIG undefined FUN_14764750c(void)

void FUN_14764750c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147647916(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647562 FUN_147647562 body=86 status=ok
// SIG undefined FUN_147647562(void)

void FUN_147647562(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147647a14(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476475ba FUN_1476475ba body=52 status=ok
// SIG undefined FUN_1476475ba(void)

undefined8 * FUN_1476475ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6f00;
  FUN_14764775a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476475ee FUN_1476475ee body=364 status=ok
// SIG undefined FUN_1476475ee(void)

void FUN_1476475ee(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  cVar1 = *(char *)(param_2 + 0x3c);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  cVar1 = *(char *)(param_2 + 0x48);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  cVar1 = *(char *)(param_2 + 0x54);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  cVar1 = *(char *)(param_2 + 0x60);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  cVar1 = *(char *)(param_2 + 0x6c);
  *(char *)(param_1 + 0x6c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  cVar1 = *(char *)(param_2 + 0x78);
  *(char *)(param_1 + 0x78) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  }
  param_1[0x7c] = param_2[0x7c];
  return;
}



// FUNCTION 14764775a FUN_14764775a body=131 status=ok
// SIG undefined FUN_14764775a(void)

void FUN_14764775a(longlong param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1476477de FUN_1476477de body=311 status=ok
// SIG undefined FUN_1476477de(void)

undefined2 * FUN_1476477de(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147647916(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x108) * '\x02' + '\x01',
                param_4,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147647a14(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647916 FUN_147647916 body=254 status=ok
// SIG undefined FUN_147647916(void)

void FUN_147647916(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
  }
  if (*(char *)(param_2 + 0x65) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[100]);
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x70]);
  }
  FUN_140dba9e6(*param_1,param_2[0x7c]);
  return;
}



// FUNCTION 147647a14 FUN_147647a14 body=196 status=ok
// SIG undefined FUN_147647a14(void)

void FUN_147647a14(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 200,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xe0,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147647ad8 FUN_147647ad8 body=69 status=ok
// SIG undefined FUN_147647ad8(void)

undefined8 * FUN_147647ad8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c51a0;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147647b1e FUN_147647b1e body=79 status=ok
// SIG undefined FUN_147647b1e(void)

undefined8 * FUN_147647b1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7c00;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147647b6e FUN_147647b6e body=78 status=ok
// SIG undefined FUN_147647b6e(void)

undefined8 FUN_147647b6e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147647cba();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647bbe FUN_147647bbe body=82 status=ok
// SIG undefined FUN_147647bbe(void)

void FUN_147647bbe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147647df0(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647c12 FUN_147647c12 body=86 status=ok
// SIG undefined FUN_147647c12(void)

void FUN_147647c12(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147647e5e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647c6a FUN_147647c6a body=79 status=ok
// SIG undefined FUN_147647c6a(void)

undefined8 * FUN_147647c6a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7c00;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147647cba FUN_147647cba body=308 status=ok
// SIG undefined FUN_147647cba(void)

undefined2 * FUN_147647cba(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147647df0(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147647e5e(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647df0 FUN_147647df0 body=109 status=ok
// SIG undefined FUN_147647df0(void)

void FUN_147647df0(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
    return;
  }
  return;
}



// FUNCTION 147647e5e FUN_147647e5e body=85 status=ok
// SIG undefined FUN_147647e5e(void)

void FUN_147647e5e(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147647eb4 FUN_147647eb4 body=95 status=ok
// SIG undefined FUN_147647eb4(void)

undefined8 * FUN_147647eb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6f60;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147647f14 FUN_147647f14 body=78 status=ok
// SIG undefined FUN_147647f14(void)

undefined8 FUN_147647f14(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147648112();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647f64 FUN_147647f64 body=85 status=ok
// SIG undefined FUN_147647f64(void)

void FUN_147647f64(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14764824a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147647fba FUN_147647fba body=86 status=ok
// SIG undefined FUN_147647fba(void)

void FUN_147647fba(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476482ca(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648012 FUN_147648012 body=95 status=ok
// SIG undefined FUN_147648012(void)

undefined8 * FUN_147648012(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6f60;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147648072 FUN_147648072 body=159 status=ok
// SIG undefined FUN_147648072(void)

void FUN_147648072(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 2);
  }
  return;
}



// FUNCTION 147648112 FUN_147648112 body=311 status=ok
// SIG undefined FUN_147648112(void)

undefined2 * FUN_147648112(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14764824a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x88) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476482ca(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764824a FUN_14764824a body=127 status=ok
// SIG undefined FUN_14764824a(void)

void FUN_14764824a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
    return;
  }
  return;
}



// FUNCTION 1476482ca FUN_1476482ca body=101 status=ok
// SIG undefined FUN_1476482ca(void)

void FUN_1476482ca(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147648330 FUN_147648330 body=111 status=ok
// SIG undefined FUN_147648330(void)

undefined8 * FUN_147648330(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6fa0;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476483a0 FUN_1476483a0 body=78 status=ok
// SIG undefined FUN_1476483a0(void)

undefined8 FUN_1476483a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476485d8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476483f0 FUN_1476483f0 body=85 status=ok
// SIG undefined FUN_1476483f0(void)

void FUN_1476483f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147648710(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648446 FUN_147648446 body=86 status=ok
// SIG undefined FUN_147648446(void)

void FUN_147648446(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476487a8(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764849e FUN_14764849e body=111 status=ok
// SIG undefined FUN_14764849e(void)

undefined8 * FUN_14764849e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6fa0;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764850e FUN_14764850e body=202 status=ok
// SIG undefined FUN_14764850e(void)

void FUN_14764850e(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_8 + 2);
  }
  return;
}



// FUNCTION 1476485d8 FUN_1476485d8 body=311 status=ok
// SIG undefined FUN_1476485d8(void)

undefined2 * FUN_1476485d8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147648710(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476487a8(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648710 FUN_147648710 body=151 status=ok
// SIG undefined FUN_147648710(void)

void FUN_147648710(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
    return;
  }
  return;
}



// FUNCTION 1476487a8 FUN_1476487a8 body=117 status=ok
// SIG undefined FUN_1476487a8(void)

void FUN_1476487a8(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14764881e FUN_14764881e body=38 status=ok
// SIG undefined FUN_14764881e(void)

undefined8 FUN_14764881e(undefined8 param_1,int param_2)

{
  FUN_147647214();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147648844 FUN_147648844 body=78 status=ok
// SIG undefined FUN_147648844(void)

undefined8 FUN_147648844(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147648a5e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648894 FUN_147648894 body=85 status=ok
// SIG undefined FUN_147648894(void)

void FUN_147648894(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147648b96(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476488ea FUN_1476488ea body=86 status=ok
// SIG undefined FUN_1476488ea(void)

void FUN_1476488ea(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147648c46(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648942 FUN_147648942 body=38 status=ok
// SIG undefined FUN_147648942(void)

undefined8 FUN_147648942(undefined8 param_1,int param_2)

{
  FUN_147647214();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147648968 FUN_147648968 body=245 status=ok
// SIG undefined FUN_147648968(void)

void FUN_147648968(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_9 + 2);
  }
  return;
}



// FUNCTION 147648a5e FUN_147648a5e body=311 status=ok
// SIG undefined FUN_147648a5e(void)

undefined2 * FUN_147648a5e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147648b96(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xb8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147648c46(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648b96 FUN_147648b96 body=175 status=ok
// SIG undefined FUN_147648b96(void)

void FUN_147648b96(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
    return;
  }
  return;
}



// FUNCTION 147648c46 FUN_147648c46 body=139 status=ok
// SIG undefined FUN_147648c46(void)

void FUN_147648c46(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147648cd2 FUN_147648cd2 body=52 status=ok
// SIG undefined FUN_147648cd2(void)

undefined8 * FUN_147648cd2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7020;
  FUN_147648f58(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147648d06 FUN_147648d06 body=78 status=ok
// SIG undefined FUN_147648d06(void)

undefined8 FUN_147648d06(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147648fbc();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648d56 FUN_147648d56 body=85 status=ok
// SIG undefined FUN_147648d56(void)

void FUN_147648d56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476490f4(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648dac FUN_147648dac body=86 status=ok
// SIG undefined FUN_147648dac(void)

void FUN_147648dac(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476491bc(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147648e04 FUN_147648e04 body=52 status=ok
// SIG undefined FUN_147648e04(void)

undefined8 * FUN_147648e04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7020;
  FUN_147648f58(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147648e38 FUN_147648e38 body=288 status=ok
// SIG undefined FUN_147648e38(void)

void FUN_147648e38(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_9 + 2);
  }
  *(undefined4 *)(param_1 + 0x58) = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_10 + 2);
  }
  return;
}



// FUNCTION 147648f58 FUN_147648f58 body=99 status=ok
// SIG undefined FUN_147648f58(void)

void FUN_147648f58(longlong param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147648fbc FUN_147648fbc body=311 status=ok
// SIG undefined FUN_147648fbc(void)

undefined2 * FUN_147648fbc(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476490f4(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xd0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476491bc(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476490f4 FUN_1476490f4 body=199 status=ok
// SIG undefined FUN_1476490f4(void)

void FUN_1476490f4(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
    return;
  }
  return;
}



// FUNCTION 1476491bc FUN_1476491bc body=158 status=ok
// SIG undefined FUN_1476491bc(void)

void FUN_1476491bc(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14764925a FUN_14764925a body=52 status=ok
// SIG undefined FUN_14764925a(void)

undefined8 * FUN_14764925a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7060;
  FUN_14764950c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764928e FUN_14764928e body=78 status=ok
// SIG undefined FUN_14764928e(void)

undefined8 FUN_14764928e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147649580();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476492de FUN_1476492de body=85 status=ok
// SIG undefined FUN_1476492de(void)

void FUN_1476492de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476496b8(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147649334 FUN_147649334 body=86 status=ok
// SIG undefined FUN_147649334(void)

void FUN_147649334(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147649798(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764938c FUN_14764938c body=52 status=ok
// SIG undefined FUN_14764938c(void)

undefined8 * FUN_14764938c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7060;
  FUN_14764950c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476493c0 FUN_1476493c0 body=331 status=ok
// SIG undefined FUN_1476493c0(void)

void FUN_1476493c0(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_9 + 2);
  }
  *(undefined4 *)(param_1 + 0x58) = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_10 + 2);
  }
  *(undefined4 *)(param_1 + 100) = *param_11;
  cVar1 = *(char *)(param_11 + 4);
  *(char *)(param_1 + 0x6c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_11 + 2);
  }
  return;
}



// FUNCTION 14764950c FUN_14764950c body=115 status=ok
// SIG undefined FUN_14764950c(void)

void FUN_14764950c(longlong param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147649580 FUN_147649580 body=311 status=ok
// SIG undefined FUN_147649580(void)

undefined2 * FUN_147649580(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476496b8(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xe8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147649798(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476496b8 FUN_1476496b8 body=223 status=ok
// SIG undefined FUN_1476496b8(void)

void FUN_1476496b8(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
  }
  if (*(char *)(param_2 + 0x65) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[100]);
    return;
  }
  return;
}



// FUNCTION 147649798 FUN_147649798 body=177 status=ok
// SIG undefined FUN_147649798(void)

void FUN_147649798(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 200,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14764984a FUN_14764984a body=52 status=ok
// SIG undefined FUN_14764984a(void)

undefined8 * FUN_14764984a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c70a0;
  FUN_147649b26(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764987e FUN_14764987e body=78 status=ok
// SIG undefined FUN_14764987e(void)

undefined8 FUN_14764987e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147649baa();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476498ce FUN_1476498ce body=85 status=ok
// SIG undefined FUN_1476498ce(void)

void FUN_1476498ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147649ce2(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x100) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147649924 FUN_147649924 body=86 status=ok
// SIG undefined FUN_147649924(void)

void FUN_147649924(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147649dda(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764997c FUN_14764997c body=52 status=ok
// SIG undefined FUN_14764997c(void)

undefined8 * FUN_14764997c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c70a0;
  FUN_147649b26(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476499b0 FUN_1476499b0 body=374 status=ok
// SIG undefined FUN_1476499b0(void)

void FUN_1476499b0(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12
                  )

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x3c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_8 + 2);
  }
  *(undefined4 *)(param_1 + 0x4c) = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_9 + 2);
  }
  *(undefined4 *)(param_1 + 0x58) = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x60) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_10 + 2);
  }
  *(undefined4 *)(param_1 + 100) = *param_11;
  cVar1 = *(char *)(param_11 + 4);
  *(char *)(param_1 + 0x6c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_11 + 2);
  }
  *(undefined4 *)(param_1 + 0x70) = *param_12;
  cVar1 = *(char *)(param_12 + 4);
  *(char *)(param_1 + 0x78) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_12 + 2);
  }
  return;
}



// FUNCTION 147649b26 FUN_147649b26 body=131 status=ok
// SIG undefined FUN_147649b26(void)

void FUN_147649b26(longlong param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147649baa FUN_147649baa body=311 status=ok
// SIG undefined FUN_147649baa(void)

undefined2 * FUN_147649baa(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147649ce2(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x100) * '\x02' + '\x01',
                param_4,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147649dda(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147649ce2 FUN_147649ce2 body=247 status=ok
// SIG undefined FUN_147649ce2(void)

void FUN_147649ce2(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4c]);
  }
  if (*(char *)(param_2 + 0x59) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x58]);
  }
  if (*(char *)(param_2 + 0x65) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[100]);
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x70]);
    return;
  }
  return;
}



// FUNCTION 147649dda FUN_147649dda body=196 status=ok
// SIG undefined FUN_147649dda(void)

void FUN_147649dda(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x98,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0xb0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 200,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xe0,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147649e9e FUN_147649e9e body=328 status=ok
// SIG undefined FUN_147649e9e(void)

void FUN_147649e9e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_146343c98();
  uVar3 = *(ulonglong *)(lVar7 + 0x18);
  uVar9 = *(uint *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar7 = param_1;
  }
  if ((int)uVar9 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    local_68 = param_2;
    do {
      uVar1 = uVar10 + (uVar9 >> 1);
      uVar4 = *(ulonglong *)(lVar7 + (ulonglong)uVar1 * 0x18);
      if ((int)uVar4 == (int)uVar3) {
        iVar6 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
      }
      else {
        iVar6 = FUN_14002c2bd(uVar4 & 0xffffffff,uVar3 & 0xffffffff);
      }
      if (iVar6 < 0) {
        uVar10 = uVar1 + (uVar9 & 1);
      }
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar5);
    uVar9 = *(uint *)(param_1 + 0x20);
    param_2 = local_68;
  }
  if ((int)uVar10 < (int)uVar9) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar8 = lVar7;
    if (lVar7 == 0) {
      lVar8 = param_1;
    }
    if (*(ulonglong *)(lVar8 + (ulonglong)uVar10 * 0x18) == uVar3) goto LAB_147649f88;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = uVar3;
  FUN_140f93936(param_1,&local_60,uVar10);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
LAB_147649f88:
  if (lVar7 != 0) {
    param_1 = lVar7;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar10 * 0x18);
  iVar6 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar6 + 1U) {
    FUN_140aec898(plVar2,iVar6);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar6 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147649fe8 FUN_147649fe8 body=25 status=ok
// SIG undefined FUN_147649fe8(void)

void FUN_147649fe8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147649ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14764a002 FUN_14764a002 body=29 status=ok
// SIG undefined FUN_14764a002(void)

undefined8 FUN_14764a002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764a020 FUN_14764a020 body=119 status=ok
// SIG undefined FUN_14764a020(void)

undefined8 FUN_14764a020(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14764a098(param_1,&local_28);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764a098 FUN_14764a098 body=119 status=ok
// SIG undefined FUN_14764a098(void)

undefined8 FUN_14764a098(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1475262d0(param_1,&local_28);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764a110 FUN_14764a110 body=84 status=ok
// SIG undefined FUN_14764a110(void)

undefined8 * FUN_14764a110(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4c7d60;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a4c7c60;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764a164 FUN_14764a164 body=53 status=ok
// SIG undefined FUN_14764a164(void)

void FUN_14764a164(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_140108b92(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 14764a19a FUN_14764a19a body=88 status=ok
// SIG undefined FUN_14764a19a(void)

void FUN_14764a19a(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_147526316(param_1 + 0x18);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_14752d4a9(lVar2,uVar1,**(undefined8 **)(param_1 + 0x38));
    FUN_147525d6e(lVar2,uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14764a1f4 FUN_14764a1f4 body=84 status=ok
// SIG undefined FUN_14764a1f4(void)

undefined8 * FUN_14764a1f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4c70c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a4c7c60;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764a248 FUN_14764a248 body=53 status=ok
// SIG undefined FUN_14764a248(void)

void FUN_14764a248(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_14752ad3a(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 14764a27e FUN_14764a27e body=88 status=ok
// SIG undefined FUN_14764a27e(void)

void FUN_14764a27e(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_147526316(param_1 + 0x18);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_14752d4e4(lVar2,uVar1,**(undefined4 **)(param_1 + 0x38));
    FUN_147525d6e(lVar2,uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14764a2d6 FUN_14764a2d6 body=146 status=ok
// SIG undefined FUN_14764a2d6(void)

void FUN_14764a2d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14764a36a FUN_14764a36a body=211 status=ok
// SIG undefined FUN_14764a36a(void)

undefined8 * FUN_14764a36a(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46e9c0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 14764a43e FUN_14764a43e body=175 status=ok
// SIG undefined FUN_14764a43e(void)

void FUN_14764a43e(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14764a4c7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14764a4c7:
  FUN_14474d06a(param_1,0);
  return;
}


