// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b3e3e4 FUN_140b3e3e4 body=121 status=ok
// SIG undefined FUN_140b3e3e4(void)

void FUN_140b3e3e4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_1407abeca(&local_30,param_1 + 0x28);
    *(undefined4 *)(lVar1 + 0x178) = local_30;
    *(undefined4 *)(lVar1 + 0x17c) = uStack_2c;
    *(undefined4 *)(lVar1 + 0x180) = uStack_28;
    *(undefined4 *)(lVar1 + 0x184) = uStack_24;
    if (*(char *)(lVar1 + 0x189) != *(char *)(lVar1 + 0x188)) {
      FUN_140cc5d3a(lVar1);
    }
  }
  FUN_140b3e45e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3e45e FUN_140b3e45e body=779 status=ok
// SIG undefined FUN_140b3e45e(void)

void FUN_140b3e45e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_140b3e76a(plVar1);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    plVar7 = (longlong *)0x0;
LAB_140b3e4c2:
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar4 = 0;
    }
    FUN_14026e798(&local_d8,uVar4);
    plVar3 = local_d0;
    lVar6 = local_d8;
    local_d8 = 0;
    plVar5 = plVar7;
    if (local_d0 == plVar7) {
LAB_140b3e6c3:
      plVar7 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_d0)(local_d0);
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
    else {
      local_d0 = (longlong *)0x0;
      plVar5 = plVar3;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        goto LAB_140b3e6c3;
      }
    }
    if (lVar6 == 0) goto LAB_140b3e652;
  }
  else {
    FUN_14026e798(&local_d8);
    plVar5 = local_d0;
    lVar6 = local_d8;
    plVar7 = local_d0;
    if (local_d8 == 0) goto LAB_140b3e4c2;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  local_68 = 0x3f800000;
  local_60 = 0;
  local_5c = 0;
  FUN_140056680(&local_d8,L"DialogEmitter");
  local_f0 = 0;
  local_f8 = &local_c8;
  FUN_14071b0f2(lVar6,&local_e0,&local_d8,0);
  FUN_1403c75f4(plVar1,&local_e0);
  if (local_e0 != (longlong *)0x0) {
    *(int *)(local_e0 + 0x21) = (int)local_e0[0x21] + -1;
    if (((int)local_e0[0x26] < 1) && (FUN_1400847bc(local_e0 + 0x17,0), (int)local_e0[0x21] == 0)) {
      FUN_140087e46(local_e0);
      if (*local_e0 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140b3e5e5;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_e0);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_e0);
      }
    }
LAB_140b3e5e5:
    local_e0 = (longlong *)0x0;
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (((*(longlong *)(param_1 + 0x48) == 0) ||
      (((*(uint *)(param_1 + 8) & 0x10) == 0 &&
       (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x20))))) &&
     (lVar6 = *plVar1, lVar6 != 0)) {
    uVar4 = FUN_140316ff8();
    uVar4 = FUN_1405f79bc(uVar4);
    local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffffffffff00);
    FUN_1447997cc(lVar6,uVar4,0x3f800000,0);
    *(undefined1 *)(*plVar1 + 0xb0) = 7;
  }
LAB_140b3e652:
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
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3e76a FUN_140b3e76a body=135 status=ok
// SIG undefined FUN_140b3e76a(void)

void FUN_140b3e76a(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
    FUN_140087e46(plVar1);
    if (*plVar1 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140b3e7a1;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
    }
  }
LAB_140b3e7a1:
  *param_1 = 0;
  return;
}



// FUNCTION 140b3e7f2 FUN_140b3e7f2 body=2679 status=ok
// SIG undefined FUN_140b3e7f2(void)

void FUN_140b3e7f2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  int *piVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  int *piVar28;
  uint uVar29;
  undefined8 ****ppppuVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  int local_168;
  undefined4 local_164;
  void *local_160;
  int local_158;
  undefined4 local_154;
  undefined1 local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined5 uStack_138;
  undefined3 local_133;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined1 local_121;
  ulonglong local_120;
  char local_118;
  ulonglong local_110 [2];
  longlong *local_100;
  undefined4 local_e8 [2];
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined8 ***local_b0;
  char local_a8;
  ushort local_98;
  byte local_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_78;
  ushort local_70;
  undefined6 uStack_6e;
  byte local_68;
  int *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar27 = *(longlong *)(*(longlong *)(param_2 + 0x548) + 8);
  lVar24 = (ulonglong)*(ushort *)(param_3 + 0x30) * 0x128;
  lVar18 = lVar27 + lVar24;
  local_188 = *(undefined8 *)(lVar27 + 0x88 + lVar24);
  puVar3 = (undefined4 *)(lVar27 + 0x68 + lVar24);
  local_1a8 = *puVar3;
  uStack_1a4 = puVar3[1];
  uStack_1a0 = puVar3[2];
  uStack_19c = puVar3[3];
  puVar3 = (undefined4 *)(lVar27 + 0x78 + lVar24);
  local_198 = *puVar3;
  uStack_194 = puVar3[1];
  uStack_190 = puVar3[2];
  uStack_18c = puVar3[3];
  local_180 = *(undefined8 *)(lVar27 + 0x90 + lVar24);
  local_178 = *(undefined4 *)(lVar27 + 0x98 + lVar24);
  local_170 = 0;
  iVar13 = *(int *)(lVar27 + 0xa8 + lVar24);
  uVar5 = *(undefined8 *)(lVar27 + 0xa0 + lVar24);
  local_168 = iVar13;
  if (iVar13 == 0) {
    local_164 = 0;
  }
  else {
    FUN_14753cf4a(&local_170,iVar13,0);
    FUN_14753cfbd(local_170,uVar5,iVar13);
  }
  local_160 = (void *)0x0;
  local_158 = *(int *)(lVar18 + 0xb8);
  lVar27 = (longlong)local_158;
  pvVar6 = *(void **)(lVar18 + 0xb0);
  if (lVar27 == 0) {
    local_154 = 0;
  }
  else {
    FUN_1456c5740(&local_160,local_158,0);
    memcpy(local_160,pvVar6,lVar27 << 3);
  }
  local_150 = *(undefined1 *)(lVar18 + 0xc0);
  local_148 = (void *)0x0;
  local_140 = *(int *)(lVar18 + 0xd0);
  lVar27 = (longlong)local_140;
  pvVar6 = *(void **)(lVar18 + 200);
  if (lVar27 == 0) {
    local_13c = 0;
  }
  else {
    FUN_1447bda9e(&local_148,local_140,0);
    memcpy(local_148,pvVar6,lVar27 << 2);
  }
  uVar5 = *(undefined8 *)(lVar18 + 0xd8);
  uVar31 = *(ulonglong *)(lVar18 + 0xdd);
  uStack_130 = (undefined4)(uVar31 >> 0x18);
  uStack_12c = (undefined1)(uVar31 >> 0x38);
  uStack_138 = (undefined5)uVar5;
  local_133 = (undefined3)((ulonglong)uVar5 >> 0x28);
  if (((int)uVar5 == 0) || ((uVar31 & 0x200000000000000) != 0)) goto LAB_140b3ede2;
  cVar12 = FUN_140b3f358();
  if ((cVar12 != '\0') || ((int)local_188 == 1)) goto LAB_140b3ede2;
  local_1b8 = *(undefined8 *)(lVar18 + 0x100);
  plVar16 = *(longlong **)(lVar18 + 0x108);
  if (plVar16 == (longlong *)0x0) {
    local_1b0 = (longlong *)0x0;
    plVar15 = (longlong *)FUN_140165676();
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    local_1b0 = plVar16;
    plVar15 = (longlong *)FUN_140165676();
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar17 = (int *)((longlong)plVar16 + 0xc);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (plVar15 == (longlong *)0x0) goto LAB_140b3ede2;
  plVar16 = (longlong *)(**(code **)(*plVar15 + 0x20))(plVar15);
  if (plVar16 == (longlong *)0x0) goto LAB_140b3ede2;
  lVar27 = FUN_140b3f272();
  if ((*(int *)(plVar16[2] + 0x38) < *(int *)(lVar27 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar27 + 0x38) * 8) !=
      lVar27 + 0x30)) goto LAB_140b3ede2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    iVar13 = (int)plVar16[0xba];
    if (iVar13 < (int)(uint)*(ushort *)(param_1 + 8)) {
LAB_140b3eb78:
      *(int *)(plVar16 + 0xba) = iVar13 + 1;
      local_110[0] = FUN_140b3f3f0();
      if ((local_110[0] != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(local_110[0]);
      }
      lVar27 = FUN_14009ee5c(param_2,local_110);
      ppppuVar30 = (undefined8 ****)(*(ulonglong *)(param_1 + -0x60) >> 0x20);
      uVar31 = *(ulonglong *)(param_1 + -0x58) >> 0x20;
      FUN_14087ad3e(&local_180,local_110);
      local_88 = CONCAT31(local_88._1_3_,0xf);
      FUN_1405bad34(local_110,&local_b0,ppppuVar30);
      if (local_a8 != '\0') {
        ppppuVar30 = (undefined8 ****)local_b0;
      }
      FUN_14087ad3e(&local_180,&local_88);
      local_121 = 0xf;
      FUN_1405bad34(&local_88,&local_120,uVar31);
      if (local_118 != '\0') {
        uVar31 = local_120;
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_100 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar21 = *(uint *)(lVar18 + 0x122);
      local_1c0 = (longlong *)(lVar27 + 0x40);
      if (*(int *)(lVar27 + 0x74) == 0) {
        iVar13 = *(int *)(lVar27 + 0x48);
        *(int *)(lVar27 + 0x48) = iVar13 + 1;
        if (*(int *)(lVar27 + 0x4c) == iVar13) {
          FUN_1406245f8(local_1c0,iVar13);
        }
        iVar25 = *(int *)(lVar27 + 0x68);
        if (iVar25 == 0) {
          iVar14 = -1;
        }
        else {
          iVar14 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar14 = iVar25 + -1;
          }
          iVar14 = iVar14 >> 5;
        }
        lVar24 = lVar27 + 0x50;
        iVar22 = iVar25 + 1;
        iVar26 = iVar25 + 0x1f;
        if (-1 < iVar25) {
          iVar26 = iVar25;
        }
        if (iVar26 >> 5 == iVar14) {
          *(int *)(lVar27 + 0x68) = iVar22;
        }
        else {
          if (*(int *)(lVar27 + 0x6c) <= iVar25) {
            if (iVar25 + 0x20U < 0xa0) {
              iVar22 = 0x80;
              iVar14 = iVar25;
            }
            else {
              uVar29 = iVar25 + 0x20U >> 5;
              local_1c8 = (ulonglong)uVar29;
              if (*(int *)(lVar27 + 0x6c) + 0x1fU < 0xa0) {
                uVar23 = 4;
                if (4 < uVar29) {
                  uVar23 = uVar29;
                }
              }
              else {
                uVar23 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
              }
              uVar19 = FUN_144a3809e(uVar23 << 2,0);
              iVar14 = (int)(uVar19 >> 2);
              iVar22 = -0x20;
              if ((int)local_1c8 <= iVar14) {
                iVar22 = iVar14 << 5;
              }
              iVar14 = *(int *)(lVar27 + 0x68);
            }
            *(int *)(lVar27 + 0x6c) = iVar22;
            FUN_1446efbd8(lVar24,iVar14);
            iVar22 = *(int *)(lVar27 + 0x68) + 1;
          }
          iVar14 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar14 = iVar22;
          }
          *(int *)(lVar27 + 0x68) = iVar22;
          if (iVar22 % 0x20 != 0) {
            lVar18 = *(longlong *)(lVar27 + 0x60);
            if (*(longlong *)(lVar27 + 0x60) == 0) {
              lVar18 = lVar24;
            }
            bVar20 = -(char)(iVar22 % 0x20);
            *(uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4) =
                 (uint)(*(int *)(lVar18 + (longlong)(iVar14 >> 5) * 4) << (bVar20 & 0x1f)) >>
                 (bVar20 & 0x1f);
          }
        }
        lVar18 = (longlong)iVar13;
        if (*(longlong *)(lVar27 + 0x60) != 0) {
          lVar24 = *(longlong *)(lVar27 + 0x60);
        }
        bVar20 = (byte)iVar25 & 0x1f;
        puVar4 = (uint *)(lVar24 + (longlong)(iVar26 >> 5) * 4);
        *puVar4 = *puVar4 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
      }
      else {
        iVar13 = *(int *)(lVar27 + 0x70);
        lVar18 = (longlong)iVar13;
        iVar25 = *(int *)(*(longlong *)(lVar27 + 0x40) + 4 + lVar18 * 0x1c);
        *(int *)(lVar27 + 0x70) = iVar25;
        iVar14 = *(int *)(lVar27 + 0x74) + -1;
        *(int *)(lVar27 + 0x74) = iVar14;
        if (iVar14 != 0) {
          *(undefined4 *)(*(longlong *)(lVar27 + 0x40) + (longlong)iVar25 * 0x1c) = 0xffffffff;
        }
      }
      lVar24 = lVar27 + 0x50;
      if (*(longlong *)(lVar27 + 0x60) != 0) {
        lVar24 = *(longlong *)(lVar27 + 0x60);
      }
      iVar25 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar25 = iVar13;
      }
      puVar4 = (uint *)(lVar24 + (longlong)(iVar25 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)iVar13 & 0x1f);
      iVar25 = 1;
      lVar24 = *(longlong *)(lVar27 + 0x40);
      lVar18 = lVar18 * 0x1c;
      puVar3 = (undefined4 *)(lVar24 + lVar18);
      *(uint *)(lVar24 + lVar18) = uVar21;
      *(undefined8 *****)(lVar24 + 4 + lVar18) = ppppuVar30;
      *(ulonglong *)(lVar24 + 0xc + lVar18) = uVar31;
      *(undefined4 *)(lVar24 + 0x14 + lVar18) = 0xffffffff;
      uVar29 = *(int *)(lVar27 + 0x48) - *(int *)(lVar27 + 0x74);
      if (uVar29 != 1) {
        if (*(int *)(lVar27 + 0x48) != *(int *)(lVar27 + 0x74)) {
          lVar18 = lVar27 + 0x78;
          if (*(longlong *)(lVar27 + 0x80) != 0) {
            lVar18 = *(longlong *)(lVar27 + 0x80);
          }
          iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar27 + 0x88) - 1U & uVar21 & 0xffff) * 4
                           );
          if (iVar14 != -1) {
            do {
              puVar2 = (undefined4 *)(*local_1c0 + (longlong)iVar14 * 0x1c);
              if (*(uint *)(*local_1c0 + (longlong)iVar14 * 0x1c) == uVar21) {
                uVar8 = *puVar3;
                uVar9 = puVar3[1];
                uVar10 = puVar3[2];
                uVar11 = puVar3[3];
                puVar2[4] = puVar3[4];
                *puVar2 = uVar8;
                puVar2[1] = uVar9;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                FUN_148965d02(local_1c0,iVar13);
                goto LAB_140b3ede2;
              }
              iVar14 = puVar2[5];
            } while (iVar14 != -1);
          }
        }
        if (3 < uVar29) {
          uVar31 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar25 = 1 << ((byte)lVar18 & 0x1f);
        }
      }
      if (((int)uVar29 < 1) || (iVar25 <= *(int *)(lVar27 + 0x88))) {
        uVar21 = *(int *)(lVar27 + 0x88) - 1U & uVar21 & 0xffff;
        puVar3[6] = uVar21;
        lVar18 = *(longlong *)(lVar27 + 0x80);
        if (*(longlong *)(lVar27 + 0x80) == 0) {
          lVar18 = lVar27 + 0x78;
        }
        puVar3[5] = *(undefined4 *)(lVar18 + (ulonglong)(*(int *)(lVar27 + 0x88) - 1U & uVar21) * 4)
        ;
        lVar18 = lVar27 + 0x78;
        if (*(longlong *)(lVar27 + 0x80) != 0) {
          lVar18 = *(longlong *)(lVar27 + 0x80);
        }
        *(int *)(lVar18 + (ulonglong)(*(int *)(lVar27 + 0x88) - 1U & uVar21) * 4) = iVar13;
      }
      else {
        *(int *)(lVar27 + 0x88) = iVar25;
        FUN_1457747e0(local_1c0);
      }
      goto LAB_140b3ede2;
    }
  }
  else {
    lVar27 = (**(code **)(*plVar16 + 0x308))(plVar16);
    if (lVar27 != 0) {
      local_110[0] = local_110[0] & 0xffffffffffffff00;
      local_e8[0] = 0;
      FUN_1456bb102(local_110,lVar27);
      local_e0 = '\0';
      local_b8[0] = 0;
      lVar27 = *(longlong *)(param_1 + 0x20);
      if (lVar27 == 0) {
        local_b0 = *(undefined8 ****)(param_1 + 0x10);
        FUN_1446dcdd4(&local_88);
        lVar27 = FUN_1448fdc6e(&local_88);
        if (CONCAT62(uStack_6e,local_70) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x20) = lVar27;
      }
      FUN_1400606f6(&local_88,lVar27,local_110);
      piVar17 = local_58;
      if (local_58 == (int *)0x0) {
        piVar17 = &local_88;
      }
      piVar28 = (int *)&DAT_14c9a40e0;
      if (0 < local_50) {
        piVar28 = piVar17;
      }
      FUN_1400603ec(&local_b0,lVar27,piVar28);
      piVar17 = local_58;
      if (local_58 == (int *)0x0) {
        piVar17 = &local_88;
      }
      FUN_1446fdf58(piVar17,local_50);
      if (local_58 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_90 == 1) {
        bVar32 = (int)local_b0 != 0;
        uVar21 = 1;
      }
      else {
        piVar17 = &local_88;
        FUN_1400b56fe(piVar17,&local_b0,1);
        bVar32 = local_88 != 0;
        pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar7 != (code *)0x0) {
          if (0x18 < local_70) {
            piVar17 = (int *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar7)(piVar17);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        bVar32 = local_68 != 0 && bVar32;
        uVar21 = (uint)local_90;
      }
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar21 * 0x120));
      if (pcVar7 != (code *)0x0) {
        ppppuVar30 = &local_b0;
        if (0x18 < local_98) {
          ppppuVar30 = (undefined8 ****)local_b0;
        }
        (*pcVar7)(ppppuVar30);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(local_b0);
      }
      FUN_1448173f8(local_b8);
      if (local_e0 != '\0') {
        if (local_e0 == '\x01') {
          local_d8 = 0;
        }
        else if ((local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
          LOCK();
          piVar17 = (int *)((longlong)local_d0 + 0xc);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        local_e0 = '\0';
      }
      FUN_1448173f8(local_e8);
      if (((char)local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
        LOCK();
        piVar17 = (int *)((longlong)local_100 + 0xc);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
      }
      if (!bVar32) {
        iVar13 = (int)plVar16[0xba];
        goto LAB_140b3eb78;
      }
    }
  }
  *(undefined4 *)(plVar16 + 0xba) = 1;
LAB_140b3ede2:
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_160 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_170,local_168);
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3f272 FUN_140b3f272 body=228 status=ok
// SIG undefined FUN_140b3f272(void)

longlong FUN_140b3f272(void)

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
  if (DAT_14cb60230 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463683d6;
    local_38 = &LAB_1486c145b;
    local_40 = &LAB_1464eb534;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0x880;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequencePlayerBase",&DAT_14cb60230,&DAT_1486c145a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60230;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3f358 FUN_140b3f358 body=151 status=ok
// SIG undefined FUN_140b3f358(void)

ulonglong FUN_140b3f358(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14c846590;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < (int)DAT_14c846590) {
    uVar1 = FUN_144b3d300(&DAT_14c846590);
    if (DAT_14c846590 == 0xffffffff) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c84658c = FUN_14054d46e(&DAT_14c846b20,L"UNATTENDED");
      uVar1 = _Init_thread_footer(&DAT_14c846590);
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),DAT_14c86aa68 | DAT_14c84658c) & 0xffffffffffffff01;
}



// FUNCTION 140b3f3f0 FUN_140b3f3f0 body=228 status=ok
// SIG undefined FUN_140b3f3f0(void)

longlong FUN_140b3f3f0(void)

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
  if (DAT_14cb633d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_1486f1ae1;
    local_40 = &LAB_1458c474f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequenceLoopSystem",&DAT_14cb633d8,&DAT_1486f1ae0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb633d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3f4e4 FUN_140b3f4e4 body=98 status=ok
// SIG undefined FUN_140b3f4e4(void)

undefined8 * FUN_140b3f4e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3ae2c0;
  plVar3 = (longlong *)param_1[0x17];
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
  FUN_140753ab6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b3f554 FUN_140b3f554 body=230 status=ok
// SIG undefined FUN_140b3f554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b3f554(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b6538b0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  FUN_140b3f63a(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
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



// FUNCTION 140b3f63a FUN_140b3f63a body=51 status=ok
// SIG undefined FUN_140b3f63a(void)

void FUN_140b3f63a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b3f66e FUN_140b3f66e body=343 status=ok
// SIG undefined FUN_140b3f66e(void)

void FUN_140b3f66e(longlong param_1)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b3f702;
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
LAB_140b3f702:
    if ((int)uVar7 != iVar4) {
      *(int *)(param_1 + 0xc) = (int)uVar7;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar7,1,1);
    }
  }
  return;
}



// FUNCTION 140b3f7c6 FUN_140b3f7c6 body=684 status=ok
// SIG undefined FUN_140b3f7c6(void)

undefined8 * FUN_140b3f7c6(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2[2];
  uVar2 = FUN_14477b664(param_2[3]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  param_1[5] = 0;
  iVar6 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 5,iVar6,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar6 * 0x18);
  }
  param_1[7] = param_2[7];
  puVar4 = param_2 + 8;
  puVar5 = param_1 + 8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x21] = 0;
  iVar6 = *(int *)(param_2 + 0x22);
  puVar4 = (undefined8 *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 4;
  }
  else {
    puVar5 = param_2 + 0x15;
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar4;
    }
    FUN_140b3fa74(param_1 + 0x15,iVar6);
    puVar4 = (undefined8 *)param_1[0x21];
    if ((undefined8 *)param_1[0x21] == (undefined8 *)0x0) {
      puVar4 = param_1 + 0x15;
    }
    memcpy(puVar4,puVar5,(longlong)iVar6 * 0x18);
  }
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_2 == param_1) goto LAB_140b3f97b;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  puVar4 = (undefined8 *)0x0;
  if (*(int *)(param_2 + 0x24) == 0) {
    iVar6 = 0;
LAB_140b3fa48:
    local_40 = 0;
    local_48 = (undefined8 *)0x0;
    param_1[0x23] = puVar4;
    *(int *)(param_1 + 0x24) = iVar6;
  }
  else {
    plVar1 = (longlong *)param_2[0x23];
    iVar6 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b3fa48;
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_48);
    iVar6 = local_40;
    puVar4 = local_48;
    puVar5 = (undefined8 *)param_1[0x23];
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      if (puVar5 == (undefined8 *)0x0) goto LAB_140b3fa48;
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(param_1 + 0x23,0,0,0x10);
      *(undefined4 *)(param_1 + 0x24) = 0;
      puVar5 = (undefined8 *)param_1[0x23];
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x23] = puVar4;
    *(int *)(param_1 + 0x24) = iVar6;
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_140b3f97b;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140b3f97b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3fa74 FUN_140b3fa74 body=104 status=ok
// SIG undefined FUN_140b3fa74(void)

undefined8 FUN_140b3fa74(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 4;
  if (4 < param_2) {
    iVar6 = 0;
    uVar3 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
    iVar4 = (int)(uVar3 / 0x18);
    iVar5 = 0x7fffffff;
    if (((int)param_2 <= iVar4) && (iVar5 = iVar4, iVar4 < 1)) goto LAB_140b3fa98;
  }
  uVar2 = FUN_140b3fadc(param_1,0,iVar5);
  iVar6 = iVar5;
LAB_140b3fa98:
  *(int *)(param_1 + 0x6c) = iVar6;
  return uVar2;
}



// FUNCTION 140b3fadc FUN_140b3fadc body=139 status=ok
// SIG undefined FUN_140b3fadc(void)

void FUN_140b3fadc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x18);
  return;
}



// FUNCTION 140b3fb76 FUN_140b3fb76 body=301 status=ok
// SIG undefined FUN_140b3fb76(void)

void FUN_140b3fb76(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_48 = DAT_14cb7e8f8;
    local_50 = DAT_14cb7e8f0;
    FUN_1448075d0(local_40);
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar7 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[9];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == local_40[0]) {
              if ((((lVar1 != 0) &&
                   (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
              goto LAB_140b3fc2d;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar5 = &DAT_14c9a1308;
LAB_140b3fc2d:
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar5 != (byte *)0x0) && ((*(byte *)*puVar5 & 3) == 1)) {
      uVar3 = FUN_140e1edd4(puVar5,0);
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3fcb2 FUN_140b3fcb2 body=40 status=ok
// SIG undefined FUN_140b3fcb2(void)

undefined8 FUN_140b3fcb2(undefined8 param_1,int param_2)

{
  FUN_140b3fcda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b3fcda FUN_140b3fcda body=157 status=ok
// SIG undefined FUN_140b3fcda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b3fcda(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b80d110;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000140b3fd5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140b3fd78 FUN_140b3fd78 body=30 status=ok
// SIG undefined FUN_140b3fd78(void)

void FUN_140b3fd78(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140b3fd96 FUN_140b3fd96 body=276 status=ok
// SIG undefined FUN_140b3fd96(void)

longlong * FUN_140b3fd96(longlong *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  pcVar2 = *(char **)param_1[1];
  if ((char *)((undefined8 *)param_1[1])[1] < pcVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *pcVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    cVar1 = *param_2;
    if (cVar1 == '\x01') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar5 = &PTR_FUN_14a3a2010;
      puVar5[1] = &PTR_FUN_14a3a2060;
      puVar5[2] = 0;
    }
    else if (cVar1 == '\x02') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      *puVar5 = &PTR_FUN_14a3a20f0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 1;
    }
    else {
      if (cVar1 != '\x03') goto LAB_140b3fe0a;
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = &PTR_FUN_14a3a2140;
      puVar5[1] = &PTR_FUN_14a3a2190;
    }
    puVar3 = *(undefined8 **)(param_2 + 8);
    if ((puVar3 != puVar5) && (*(undefined8 **)(param_2 + 8) = puVar5, puVar3 != (undefined8 *)0x0))
    {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
LAB_140b3fe0a:
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  }
  return param_1;
}



// FUNCTION 140b3feaa FUN_140b3feaa body=23 status=ok
// SIG undefined FUN_140b3feaa(void)

void FUN_140b3feaa(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140b3febe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x10,*(code **)(*param_2 + 0x138));
  return;
}



// FUNCTION 140b3fec2 FUN_140b3fec2 body=180 status=ok
// SIG undefined FUN_140b3fec2(void)

bool FUN_140b3fec2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x24) != 0) {
    uVar3 = *(uint *)(lVar6 + 0x20);
    lVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140b3ff1f;
    plVar8 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) &&
       (((int)plVar8[2] == *(int *)(lVar6 + 0x24) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))))
    {
      lVar7 = *plVar8;
      goto LAB_140b3ff1f;
    }
  }
  lVar7 = 0;
LAB_140b3ff1f:
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x548) + 8);
  lVar6 = (ulonglong)*(ushort *)(lVar6 + 0x30) * 0x128;
  iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
  iVar5 = *(int *)(lVar7 + 0x44 + lVar6);
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return iVar4 == iVar5;
}



// FUNCTION 140b3ff76 FUN_140b3ff76 body=489 status=ok
// SIG undefined FUN_140b3ff76(void)

void FUN_140b3ff76(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [80];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = *param_1;
  *param_1 = 0;
  local_120._0_4_ = *(undefined4 *)(param_1 + 1);
  local_120._4_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  local_118 = *(undefined4 *)(param_1 + 2);
  local_110 = param_1[3];
  uStack_108 = param_1[4];
  param_1[3] = 0;
  param_1[4] = 0;
  local_100 = *(undefined2 *)(param_1 + 5);
  local_f8 = param_1[6];
  param_1[6] = 0;
  local_f0 = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(param_1 + 7) = 0;
  local_e8 = param_1[8];
  param_1[8] = 0;
  local_e0._0_4_ = *(undefined4 *)(param_1 + 9);
  local_e0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x4c);
  param_1[9] = 0;
  local_d8 = param_1[10];
  param_1[10] = 0;
  local_d0._0_4_ = *(undefined4 *)(param_1 + 0xb);
  local_d0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x5c);
  param_1[0xb] = 0;
  FUN_140b40160(local_c8,param_1 + 0xc);
  local_78[0] = (code *)0x0;
  puVar1 = (undefined8 *)FUN_14001cc68(0xb8,8);
  *puVar1 = &PTR_LAB_14ae37c80;
  puVar1[1] = local_128;
  local_128 = 0;
  *(undefined4 *)(puVar1 + 2) = (undefined4)local_120;
  *(undefined4 *)((longlong)puVar1 + 0x14) = local_120._4_4_;
  local_120 = 0;
  *(undefined4 *)(puVar1 + 3) = local_118;
  puVar1[4] = local_110;
  puVar1[5] = uStack_108;
  local_110 = 0;
  uStack_108 = 0;
  *(undefined2 *)(puVar1 + 6) = local_100;
  puVar1[7] = local_f8;
  local_f8 = 0;
  *(undefined4 *)(puVar1 + 8) = local_f0;
  local_f0 = 0;
  puVar1[9] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(puVar1 + 10) = (undefined4)local_e0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = local_e0._4_4_;
  local_e0 = 0;
  puVar1[0xb] = local_d8;
  local_d8 = 0;
  *(undefined4 *)(puVar1 + 0xc) = (undefined4)local_d0;
  *(undefined4 *)((longlong)puVar1 + 100) = local_d0._4_4_;
  local_d0 = 0;
  local_68 = puVar1;
  FUN_140b40160(puVar1 + 0xd,local_c8);
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_143ae2c9e;
  }
  FUN_1407461b0(0x4ff,local_78);
  FUN_140b40248(&local_128);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b40160 FUN_140b40160 body=232 status=ok
// SIG undefined FUN_140b40160(void)

undefined8 * FUN_140b40160(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 140b40248 FUN_140b40248 body=231 status=ok
// SIG undefined FUN_140b40248(void)

void FUN_140b40248(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4037a(param_1 + 0xc);
  FUN_140b4032f(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140b402b1;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140b402b1:
  plVar3 = (longlong *)param_1[4];
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b4032f FUN_140b4032f body=75 status=ok
// SIG undefined FUN_140b4032f(void)

void FUN_140b4032f(longlong param_1,int param_2)

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



// FUNCTION 140b4037a FUN_140b4037a body=55 status=ok
// SIG undefined FUN_140b4037a(void)

void FUN_140b4037a(longlong *param_1)

{
  FUN_140b403b2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b403b2 FUN_140b403b2 body=506 status=ok
// SIG undefined FUN_140b403b2(void)

void FUN_140b403b2(longlong *param_1,int param_2)

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
        if (uVar8 == uVar13) goto LAB_140b40497;
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
          if (iVar5 - lVar11 == lVar9) goto LAB_140b40497;
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
LAB_140b40497:
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



// FUNCTION 140b405ac FUN_140b405ac body=73 status=ok
// SIG undefined FUN_140b405ac(void)

undefined8 FUN_140b405ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_48 = 0;
  FUN_140b405f6();
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b405f6 FUN_140b405f6 body=1497 status=ok
// SIG undefined FUN_140b405f6(void)

undefined8 FUN_140b405f6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_178 [32];
  void **local_158;
  uint local_14c;
  ulonglong local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  ulonglong local_130;
  uint *local_128;
  longlong local_120 [2];
  int local_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  uint local_d8;
  undefined1 local_cc [4];
  longlong *local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar18 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar2 = *(uint *)(param_1 + 0x80);
  local_140 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
  if (uVar2 == 0) {
    uVar12 = 1;
    uVar5 = 0;
    iVar13 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x68);
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar13 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar13 = uVar2 - 1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_140b409aa;
        iVar13 = iVar13 + 0x20;
        uVar5 = puVar6[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
    }
    uVar12 = (ulonglong)(-uVar5 & uVar5);
    uVar19 = uVar12 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar5 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar5) {
      uVar5 = uVar2;
    }
  }
  if (uVar5 != uVar2) {
    local_14c = 0xffffffff;
    uVar19 = 0;
    local_130 = (ulonglong)uVar2;
    local_128 = (uint *)(param_1 + 0x68);
    do {
      lVar16 = *(longlong *)(param_1 + 0x58);
      plVar14 = *(longlong **)(lVar16 + 0x10 + (longlong)(int)uVar5 * 0x30);
      local_148 = uVar19;
      local_13c = iVar13;
      if (plVar14 == (longlong *)0x0) {
LAB_140b4089a:
        uVar19 = (ulonglong)((int)local_148 + 1);
      }
      else {
        cVar4 = (**(code **)(*plVar14 + 0x38))(plVar14,param_3);
        uVar19 = local_148;
        if (cVar4 != '\0') {
          plVar14 = (longlong *)(lVar16 + (longlong)(int)uVar5 * 0x30);
          (**(code **)(*(longlong *)plVar14[2] + 0x18))((longlong *)plVar14[2],&local_e0,param_3);
          _Src = local_e0;
          pcVar3 = (code *)*param_4;
          if (pcVar3 == (code *)0x0) {
            local_f0 = (void *)0x0;
            lVar16 = (longlong)(int)local_d8;
            uStack_e8 = CONCAT44(uStack_e8._4_4_,local_d8);
            local_138 = param_1;
            if (lVar16 == 0) {
              uStack_e8 = (ulonglong)local_d8;
            }
            else {
              FUN_1446dd670(&local_f0,local_d8,0);
              memcpy(local_f0,_Src,lVar16 * 2);
              param_1 = local_138;
            }
          }
          else {
            local_110 = local_140;
            local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(int)local_148);
            plVar8 = param_4 + 4;
            if ((longlong *)param_4[2] != (longlong *)0x0) {
              plVar8 = (longlong *)param_4[2];
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            local_158 = &local_e0;
            (*pcVar3)(&local_f0,uVar7,&local_c8,&local_110);
          }
          (**(code **)(*(longlong *)plVar14[2] + 0x48))((longlong *)plVar14[2],&local_110);
          iVar13 = local_108;
          if (CONCAT44(uStack_10c,local_110) != 0) {
            FUN_1400020a8();
          }
          local_100 = (undefined4)local_f0;
          uStack_fc = local_f0._4_4_;
          uStack_f8 = (undefined4)uStack_e8;
          uStack_f4 = uStack_e8._4_4_;
          if (iVar13 < 2) {
            local_f0 = (void *)0x0;
            uStack_e8 = 0;
            local_110 = 3;
            local_c0 = &local_110;
            local_c8 = plVar14;
            FUN_140b40fd0(&local_b8,local_120,&local_c8);
          }
          else {
            local_f0 = (void *)0x0;
            uStack_e8 = 0;
            local_110 = 3;
            (**(code **)(*(longlong *)plVar14[2] + 0x48))((longlong *)plVar14[2],local_120);
            local_c0 = &local_110;
            local_c8 = local_120;
            FUN_1472ad862(&local_b8,local_cc,&local_c8,0);
            if (local_120[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (CONCAT44(uStack_fc,local_100) != 0) {
            FUN_1400020a8();
          }
          if (local_f0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_e0 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_140b4089a;
        }
      }
      local_14c = local_14c & ~(uint)uVar12;
      puVar6 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar6 = local_128;
      }
      uVar2 = *(uint *)(param_1 + 0x80);
      iVar17 = (int)uVar18;
      lVar16 = (longlong)iVar17;
      uVar5 = puVar6[lVar16] & local_14c;
      iVar13 = local_13c;
      if (uVar5 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = local_13c + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar17) {
          iVar10 = iVar17;
        }
        if (iVar17 < iVar9) {
          lVar15 = 0;
          do {
            uVar5 = puVar6[lVar16 + lVar15 + 1];
            if (uVar5 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar15 + 1);
              local_14c = 0xffffffff;
              goto LAB_140b40922;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar16 != lVar15);
          local_14c = 0xffffffff;
          iVar17 = iVar10;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar5 = uVar2;
      }
      else {
LAB_140b40922:
        uVar12 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar12 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar5 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar5) {
          uVar5 = uVar2;
        }
      }
    } while (uVar5 != (uint)local_130);
  }
LAB_140b409aa:
  plVar14 = *(longlong **)(param_1 + 0x48);
  if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  plVar14 = *(longlong **)(param_1 + 0x48);
  pcVar3 = *(code **)(*plVar14 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar8 = plVar14 + 3;
    if (plVar14[5] != 0) {
      plVar8 = (longlong *)(plVar14[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar8 = plVar14 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar3)(plVar14);
  }
  if ((int)plVar8[1] == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*plVar8;
  }
  FUN_140230a63();
  FUN_140a69a96(&DAT_14c8731a8,param_2,puVar11,&local_b8);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_b8);
  if (*param_4 != 0) {
    plVar14 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b40bda FUN_140b40bda body=55 status=ok
// SIG undefined FUN_140b40bda(void)

void FUN_140b40bda(longlong *param_1)

{
  FUN_140b40c12(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b40c12 FUN_140b40c12 body=538 status=ok
// SIG undefined FUN_140b40c12(void)

void FUN_140b40c12(longlong *param_1,int param_2)

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
        if (uVar14 == uVar13) goto LAB_140b40d77;
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
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x20 + (longlong)iVar4 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar4 * 0x38) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
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
          if (iVar7 - lVar11 == lVar9) goto LAB_140b40d77;
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
LAB_140b40d77:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
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



// FUNCTION 140b40e2c FUN_140b40e2c body=418 status=ok
// SIG undefined FUN_140b40e2c(void)

ulonglong FUN_140b40e2c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *plStack_60;
  undefined8 ***local_50 [3];
  ushort local_38;
  undefined6 uStack_36;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    local_68 = *(longlong **)(param_1 + 8);
    FUN_1446dcdd4(local_50);
    lVar6 = FUN_1448fdc6e(local_50);
    if (CONCAT62(uStack_36,local_38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) goto LAB_140b40e57;
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
LAB_140b40f3b:
    local_38 = 0;
    local_30 = 0;
  }
  else {
LAB_140b40e57:
    FUN_140187aa4(lVar6 + 0x30,&local_68);
    if (local_68 == (longlong *)0x0) goto LAB_140b40f3b;
    (**(code **)(*local_68 + 0x48))(local_68,local_50,lVar6,param_2);
    if (local_30 != 0) {
      if (local_30 == 1) {
        uVar5 = FUN_144a7fca4(local_50);
      }
      else {
        uVar9 = FUN_144a7ecd0();
        uVar5 = FUN_140bb33a8(param_1,uVar9);
      }
      uVar8 = (ulonglong)uVar5;
      goto LAB_140b40e98;
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)lVar6 >> 8),*(undefined1 *)(param_1 + 0x2c));
LAB_140b40e98:
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_50[0];
    if (local_38 < 0x19) {
      ppppuVar7 = local_50;
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  plVar4 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140b40fd0 FUN_140b40fd0 body=521 status=ok
// SIG undefined FUN_140b40fd0(void)

undefined4 * FUN_140b40fd0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b412f4(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  *local_48 = 0;
  iVar8 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_48 + 1) = iVar8;
  if ((longlong)iVar8 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar8,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar8 * 2);
  }
  local_48[4] = 0;
  local_48[5] = 0;
  FUN_140b411da(local_48 + 2);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  iVar8 = *(int *)(local_48 + 1);
  uVar9 = 0;
  iVar5 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    if (iVar8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*local_48;
    }
    lVar6 = 0;
    uVar9 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar3[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar6]) -
              0x20;
      uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar7) & 0xff) * 4);
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
      lVar6 = lVar6 + 1;
    } while (iVar5 != (int)lVar6);
  }
  local_68 = 0;
  cVar2 = FUN_140b4124e(param_1,uVar9,local_48,&local_54);
  if (cVar2 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar4 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_48 + 0x34) = uVar9;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140b414cc(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b411da FUN_140b411da body=115 status=ok
// SIG undefined FUN_140b411da(void)

int * FUN_140b411da(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (iVar1 == 3) {
      if (*(longlong *)(param_1 + 4) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      param_2[4] = 0;
      param_2[5] = 0;
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      param_2[6] = 0;
      param_2[7] = 0;
    }
    else {
      switch(iVar1) {
      case 0:
      case 1:
      case 2:
      case 4:
      case 5:
      case 6:
      case 7:
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b4124e FUN_140b4124e body=166 status=ok
// SIG undefined FUN_140b4124e(void)

void FUN_140b4124e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
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
  undefined1 uVar13;
  int iVar14;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar14 = FUN_140b417e4();
    if (iVar14 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar14 * 0x38);
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar14 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[9];
      uVar11 = param_3[10];
      uVar12 = param_3[0xb];
      *(undefined4 *)(plVar1 + 4) = param_3[8];
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)(plVar1 + 5) = uVar11;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar12;
      *(undefined4 *)(plVar1 + 2) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(undefined4 *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
      FUN_1472ad9d2(param_1,*param_4,1);
      *param_4 = iVar14;
      uVar13 = 1;
      goto LAB_140b4126f;
    }
  }
  uVar13 = 0;
LAB_140b4126f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 140b412f4 FUN_140b412f4 body=472 status=ok
// SIG undefined FUN_140b412f4(void)

int * FUN_140b412f4(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x38);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 140b414cc FUN_140b414cc body=791 status=ok
// SIG undefined FUN_140b414cc(void)

void FUN_140b414cc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 *puVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_140b41532;
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
  } while (uVar8 != uVar3);
LAB_140b41532:
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar6 = 0;
    uVar10 = 1;
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar15;
    if (uVar8 == 0) {
      iVar9 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar9 = iVar11 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar6;
      }
      iVar7 = 0;
      do {
        if (uVar10 == uVar6) {
          return;
        }
        iVar7 = iVar7 + 0x20;
        uVar8 = puVar15[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar6 = 0;
      iVar7 = 0;
    }
    uVar10 = (ulonglong)(-uVar8 & uVar8);
    uVar14 = uVar10 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar9) {
      iVar9 = iVar11;
    }
  }
  if (iVar9 < iVar11) {
    uVar8 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x38);
      iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar9 * 0x38);
      iVar12 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar18 = &DAT_149dfb77a;
        if (iVar11 != 0) {
          puVar18 = (undefined2 *)*puVar2;
        }
        lVar16 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar18[lVar16] +
                  (uint)(0x19 < (ushort)puVar18[lVar16] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar16 = lVar16 + 1;
        } while (iVar12 != (int)lVar16);
      }
      uVar14 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar11 = (int)uVar14;
      *(int *)((longlong)puVar2 + 0x34) = iVar11;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 6) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar8 = uVar8 & ~(uint)uVar10;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = (uint *)(param_1 + 2);
      }
      iVar11 = (int)param_1[5];
      iVar9 = (int)uVar6;
      lVar16 = (longlong)iVar9;
      uVar3 = puVar15[lVar16] & uVar8;
      if (uVar3 == 0) {
        iVar12 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar12 = iVar11 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar12 <= iVar9) {
          return;
        }
        lVar17 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar3 = puVar15[lVar16 + lVar17 + 1];
          if (uVar3 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar13 - lVar16 == lVar17) {
            return;
          }
        }
        uVar6 = (ulonglong)(iVar9 + (int)lVar17 + 1);
        uVar8 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar3 & uVar3);
      uVar14 = uVar10 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar9 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar11);
  }
  return;
}



// FUNCTION 140b417e4 FUN_140b417e4 body=199 status=ok
// SIG undefined FUN_140b417e4(void)

int FUN_140b417e4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140b4182a:
      lVar10 = (longlong)iVar1 * 0x38;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140b41897;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140b41897;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140b41844;
    }
  }
  return -1;
LAB_140b41897:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140b41844:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140b4182a;
}



// FUNCTION 140b418ac FUN_140b418ac body=1669 status=ok
// SIG undefined FUN_140b418ac(void)

/* WARNING: Removing unreachable block (ram,0x000140b41c71) */

undefined8 FUN_140b418ac(longlong param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 ****ppppuVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  char local_b8 [8];
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  char local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  undefined6 uStack_6e;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8[0] = *param_3;
  if (local_b8[0] == '\x01') {
    local_b8[0] = '\x02';
    if (*(longlong *)(param_3 + 8) == 0) {
      local_b0._0_4_ = 0;
      iVar6 = 0;
      uVar4 = (uint)local_b0;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(param_3 + 8) + 0xc);
      local_b0 = (ulonglong)uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar6 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar6 = *(int *)(lVar16 + 0x10);
        bVar17 = iVar6 == 0;
        if (bVar17) {
          *(int *)(lVar16 + 0x10) = iVar14;
          iVar6 = 0;
        }
        UNLOCK();
        uVar4 = (uint)local_b0;
        if (bVar17) {
          iVar6 = iVar14;
        }
      }
    }
    local_b0._0_4_ = uVar4;
    local_b0 = CONCAT44(iVar6,(uint)local_b0);
  }
  else if (local_b8[0] == '\x02') {
    local_b0 = *(ulonglong *)(param_3 + 8);
  }
  else if (local_b8[0] == '\x03') {
    local_b0 = *(undefined8 *)(param_3 + 8);
    local_a8 = *(longlong **)(param_3 + 0x10);
    if (local_a8 == (longlong *)0x0) {
      local_a0 = *(undefined8 *)(param_3 + 0x18);
      local_98 = param_3[0x20];
    }
    else {
      LOCK();
      *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
      UNLOCK();
      local_a0 = *(undefined8 *)(param_3 + 0x18);
      local_98 = param_3[0x20];
    }
  }
  local_90[0] = 0;
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar10 = FUN_1448174c4(local_90);
    FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)*(int *)(param_3 + 0x28) * 0x10 + -0x10);
  }
  plVar7 = (longlong *)FUN_1448174c4(local_90);
  lVar16 = plVar7[1];
  if ((longlong)(int)lVar16 != 0) {
    local_100 = *plVar7;
    lVar9 = 0;
    do {
      lVar11 = (**(code **)(**(longlong **)(local_100 + lVar9) + 8))();
      lVar12 = FUN_1417392fc();
      if (lVar11 == lVar12) {
        plVar8 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14b4133e0;
        uVar3 = *(undefined1 *)(param_1 + 0x79);
        plVar8[2] = (longlong)&PTR_FUN_14a181280;
        *(undefined1 *)(plVar8 + 3) = uVar3;
        if (plVar8 == (longlong *)0x0) {
          *(undefined8 *)(local_100 + lVar9) = 0x10;
          plVar7 = *(longlong **)(local_100 + 8 + lVar9);
          if (plVar7 == (longlong *)0x0) goto LAB_140b41a00;
          *(undefined8 *)(local_100 + 8 + lVar9) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          *(longlong **)(local_100 + lVar9) = plVar8 + 2;
          plVar7 = *(longlong **)(local_100 + 8 + lVar9);
          if (plVar8 == plVar7) {
            LOCK();
            plVar7 = plVar8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            goto LAB_140b419f5;
          }
          *(longlong **)(local_100 + 8 + lVar9) = plVar8;
          if (plVar7 == (longlong *)0x0) goto LAB_140b419f5;
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
        if (plVar8 != (longlong *)0x0) goto LAB_140b419f5;
        goto LAB_140b41a00;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar16 * 0x10 != lVar9);
  }
  plVar8 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b4133e0;
  uVar3 = *(undefined1 *)(param_1 + 0x79);
  plVar8[2] = (longlong)&PTR_FUN_14a181280;
  *(undefined1 *)(plVar8 + 3) = uVar3;
  iVar6 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
    FUN_1401037bc(plVar7,iVar6);
  }
  lVar16 = *plVar7;
  *(longlong **)(lVar16 + (longlong)iVar6 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar16 + 8 + (longlong)iVar6 * 0x10) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
LAB_140b419f5:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_140b41a00:
  lVar16 = *(longlong *)(param_1 + 0x58);
  if (lVar16 == 0) {
    local_e0[0] = *(undefined8 ****)(param_1 + 0x48);
    FUN_1446dcdd4(&local_88);
    lVar16 = FUN_1448fdc6e(&local_88);
    if (CONCAT62(uStack_6e,local_70) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x58) = lVar16;
  }
  lVar9 = *(longlong *)(param_1 + 0x70);
  if (lVar9 == 0) {
    local_e0[0] = *(undefined8 ****)(param_1 + 0x60);
    FUN_1446dcdd4(&local_88);
    lVar9 = FUN_1448fdc6e(&local_88);
    if (CONCAT62(uStack_6e,local_70) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x70) = lVar9;
  }
  if (lVar16 == 0) {
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
LAB_140b41cf7:
    local_c8 = 0;
    local_c0 = 0;
  }
  else {
    FUN_140187aa4(lVar16 + 0x30,&local_f8);
    if (local_f8 == (longlong *)0x0) goto LAB_140b41cf7;
    if (lVar9 != 0) {
      lVar16 = lVar9;
    }
    (**(code **)(*local_f8 + 0x48))(local_f8,local_e0,lVar16,local_b8);
    if (local_c0 == 3) {
      uVar18 = local_e0[0]._0_4_;
LAB_140b41a72:
      uVar18 = FUN_140b41f32(param_1,uVar18);
      FUN_140b420f8(param_1,param_2,uVar18);
      goto LAB_140b41a8b;
    }
    if (local_c0 != 0) {
      puVar15 = &local_88;
      FUN_1400b56fe(puVar15,local_e0,3);
      uVar18 = 0;
      if (local_68 != 0) {
        uVar18 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar15 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar15);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      goto LAB_140b41a72;
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
LAB_140b41a8b:
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar13 = (undefined8 ****)local_e0[0];
    if (local_c8 < 0x19) {
      ppppuVar13 = local_e0;
    }
    (*pcVar5)(ppppuVar13);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0[0]);
  }
  plVar7 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_f0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b41f32 FUN_140b41f32 body=454 status=ok
// SIG undefined FUN_140b41f32(void)

undefined8 FUN_140b41f32(longlong param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  float fVar4;
  uint uVar5;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar10 = (uint)((ulonglong)param_2 >> 0x20);
  fVar4 = ABS((float)param_2);
  uVar5 = uVar10 & 0x7fffffff;
  fVar9 = (float)(~-(uint)(fVar4 <= 1e-08) & (uint)(float)param_2);
  uVar10 = ~uVar5 & uVar10;
  uVar12 = ~(in_XMM1_Dc & 0x7fffffff) & in_XMM1_Dc;
  uVar14 = ~(in_XMM1_Dd & 0x7fffffff) & in_XMM1_Dd;
  bVar2 = fVar9 != 1.0;
  uVar6 = ~-(uint)bVar2 & (uint)fVar9;
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar15 = uVar14;
  if (*(char *)(param_1 + 0x8e) != '\0') {
    uVar11 = 0;
    uVar13 = 0;
    uVar15 = 0;
    fVar9 = 1.0 / (1.0 - fVar9) + -1.0;
  }
  auVar17._4_4_ = uVar10 & uVar11;
  auVar17._0_4_ = -(uint)bVar2 & (uint)fVar9;
  auVar17._8_4_ = uVar12 & uVar13;
  auVar17._12_4_ = uVar14 & uVar15;
  auVar7 = ZEXT416(uVar6) | auVar17;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    auVar7 = ZEXT416((uint)(1.0 - auVar7._0_4_));
  }
  if (*(char *)(param_1 + 0x8d) != '\0') {
    auVar7._0_4_ = auVar7._0_4_ + 1.0;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    auVar7._0_4_ = auVar7._0_4_ * 100.0;
  }
  cVar1 = *(char *)(param_1 + 0x80);
  uVar11 = auVar7._8_4_;
  uVar13 = auVar7._12_4_;
  fVar9 = auVar7._0_4_;
  uVar3 = auVar7._0_8_;
  if (cVar1 == '\x01') {
    auVar8._0_8_ = uVar3 ^ 0x8000000080000000;
    auVar8._8_4_ = uVar11 ^ 0x80000000;
    auVar8._12_4_ = uVar13 ^ 0x80000000;
    if (fVar9 < -fVar9) {
LAB_140b4209f:
      auVar7 = auVar8;
    }
  }
  else if (cVar1 == '\x02') {
    auVar8._0_8_ = uVar3 ^ 0x8000000080000000;
    auVar8._8_4_ = uVar11 ^ 0x80000000;
    auVar8._12_4_ = uVar13 ^ 0x80000000;
    if (-fVar9 < fVar9) goto LAB_140b4209f;
  }
  else if (cVar1 == '\x03') {
    auVar7._0_8_ = uVar3 ^ 0x8000000080000000;
    auVar7._8_4_ = uVar11 ^ 0x80000000;
    auVar7._12_4_ = uVar13 ^ 0x80000000;
  }
  if (*(char *)(param_1 + 0x8a) != '\0') {
    uVar11 = -(uint)(fVar4 <= 1e-08);
    auVar16._0_4_ = (uint)auVar7._0_4_ & uVar11;
    auVar16._4_4_ = auVar7._4_4_ & uVar5;
    auVar16._8_4_ = auVar7._8_4_ & in_XMM1_Dc & 0x7fffffff;
    auVar16._12_4_ = auVar7._12_4_ & in_XMM1_Dd & 0x7fffffff;
    auVar7 = auVar16 | ZEXT416(~uVar11 & (uint)(1.0 / auVar7._0_4_));
  }
  fVar4 = auVar7._0_4_;
  if (((*(char *)(param_1 + 0x88) == '\0') || (*(char *)(param_1 + 0x89) != '\0')) ||
     (*(char *)(param_1 + 0x81) != '\0')) {
    cVar1 = *(char *)(param_1 + 0x81);
    if (cVar1 == '\0') {
      uVar11 = 10;
      if (*(uint *)(param_1 + 0xa0) < 10) {
        uVar11 = *(uint *)(param_1 + 0xa0);
      }
      fVar9 = powf(10.0,(float)(int)uVar11);
      auVar18._0_4_ = fVar4 * fVar9 + 0.5;
      auVar18._4_12_ = auVar7._4_12_;
      auVar17 = roundps(auVar18,ZEXT416((uint)auVar18._0_4_),1);
      auVar19._4_12_ = auVar17._4_12_;
      auVar19._0_4_ = auVar17._0_4_ / fVar9;
      return auVar19._0_8_;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        auVar17 = roundps(auVar7,ZEXT416((uint)fVar4),2);
        return auVar17._0_8_;
      }
      if (cVar1 != '\x02') {
        return auVar7._0_8_;
      }
      goto LAB_140b42022;
    }
  }
  auVar7._0_4_ = fVar4 + 0.5;
LAB_140b42022:
  auVar17 = roundps(auVar7,ZEXT416(auVar7._0_4_),1);
  return auVar17._0_8_;
}



// FUNCTION 140b420f8 FUN_140b420f8 body=1377 status=ok
// SIG undefined FUN_140b420f8(void)

longlong * FUN_140b420f8(longlong param_1,longlong *param_2,float param_3)

{
  int *piVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68 [2];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar10 = (undefined2 *)&DAT_149e1dd00;
  puVar7 = &DAT_149dfb77a;
  if (*(char *)(param_1 + 0x88) == '\0') {
    puVar10 = &DAT_149dfb77a;
  }
  fVar11 = powf(10.0,(float)(*(int *)(param_1 + 0x84) + -1));
  if ((900.0 < fVar11 + -0.1) && (fVar11 + -0.1 < param_3)) {
    if (9999999.0 < param_3) {
      param_3 = param_3 / 1e+06;
      puVar7 = (undefined2 *)&DAT_149ebbbfe;
    }
    else if (999.0 < param_3) {
      param_3 = param_3 / 1000.0;
      puVar7 = (undefined2 *)&DAT_14b41314a;
    }
  }
  local_68[0] = 0x100;
  local_64 = 0x100000000;
  local_5c = 0x144;
  *param_2 = 0;
  param_2[1] = 0;
  if ((((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x89) == '\0')) &&
      (*(char *)(param_1 + 0x81) == '\0')) || (*(char *)(param_1 + 0x81) != '\0')) {
    local_58 = 0;
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    FUN_1413a454c(&local_78,(int)param_3,local_68,&local_88);
    plVar3 = uStack_80;
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (-1 < (int)param_3) {
LAB_140b421fc:
      if (*(char *)(param_1 + 0x8b) != '\0') {
        plVar3 = local_78;
        if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
          plVar3 = (longlong *)(**(code **)(*local_78 + 0x50))();
        }
        FUN_1447a1fc0(plVar3);
        pcVar2 = *(code **)(*local_78 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar3 = local_78 + 3;
          if (local_78[5] != 0) {
            plVar3 = (longlong *)(local_78[5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar3 = local_78 + 2;
        }
        else {
          plVar3 = (longlong *)(*pcVar2)(local_78);
        }
        if ((int)plVar3[1] == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*plVar3;
        }
        pwVar6 = L"+%s%ls%ls";
        goto LAB_140b4233d;
      }
    }
  }
  else {
    uVar5 = 10;
    if (*(uint *)(param_1 + 0xa0) < 10) {
      uVar5 = *(uint *)(param_1 + 0xa0);
    }
    local_58 = CONCAT44(uVar5,uVar5);
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    FUN_140407a00(&local_78,param_3,local_68,&local_88);
    plVar3 = uStack_80;
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (0.0 <= param_3) goto LAB_140b421fc;
  }
  plVar3 = local_78;
  if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*local_78 + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  pcVar2 = *(code **)(*local_78 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar3 = local_78 + 3;
    if (local_78[5] != 0) {
      plVar3 = (longlong *)(local_78[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar3 = local_78 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar2)(local_78);
  }
  if ((int)plVar3[1] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*plVar3;
  }
  pwVar6 = L"%s%ls%ls";
LAB_140b4233d:
  local_98 = puVar10;
  FUN_140002266(&local_88,pwVar6,puVar9,puVar7);
  if (&local_88 == param_2) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_88;
    local_88 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (*(char *)(param_1 + 0x8f) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x90);
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x90);
    pcVar2 = *(code **)(*plVar3 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar4 = plVar3 + 3;
      if (plVar3[5] != 0) {
        plVar4 = (longlong *)(plVar3[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar4 = plVar3 + 2;
    }
    else {
      plVar4 = (longlong *)(*pcVar2)(plVar3);
    }
    local_78 = (longlong *)0x0;
    local_70 = (int)plVar4[1];
    lVar8 = (longlong)local_70;
    _Src = (void *)*plVar4;
    if (lVar8 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar8 * 2);
    }
    if ((int)param_2[1] == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    local_98 = (undefined2 *)CONCAT44(local_98._4_4_,1);
    FUN_140807d8e(&local_78,&local_88,L"$VALUE$",puVar7);
    if (&local_88 == param_2) {
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_88;
      local_88 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4265a FUN_140b4265a body=74 status=ok
// SIG undefined FUN_140b4265a(void)

void FUN_140b4265a(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xc) == 0x40) {
    FUN_140b42780(param_1,param_2 + 0x10,*(undefined4 *)(param_2 + 0x18));
  }
  else {
    if (*(int *)(param_2 + 0xc) != 0x20) {
      FUN_140b426a4(param_1,param_2);
      return;
    }
    FUN_148ef02f6(param_1,param_2 + 0x10,*(undefined4 *)(param_2 + 0x18));
  }
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}



// FUNCTION 140b426a4 FUN_140b426a4 body=219 status=ok
// SIG undefined FUN_140b426a4(void)

ulonglong FUN_140b426a4(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 == 2) {
    uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2 + 0x10);
  }
  else if ((int)uVar1 < 4) {
    if (uVar1 != 1) {
      return (ulonglong)uVar1;
    }
    uVar2 = (**(code **)(*param_1 + 0x2a0))(param_1,param_2 + 0x10);
  }
  else if (uVar1 == 0x10) {
    uVar2 = FUN_140b42b6e(param_1,param_2 + 0x10);
  }
  else if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    if (*(int *)((longlong)param_1 + 0xb4) < 0) {
      FUN_1403de8ba(param_1 + 0x15,0);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)((longlong)param_1 + 0xc4) < 0) {
      FUN_1403de8ba(param_1 + 0x17,0);
    }
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x25);
    *(uint *)(param_1 + 0x25) = 1;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
  }
  else {
    if (uVar1 != 4) {
      return (ulonglong)uVar1;
    }
    uVar2 = FUN_1405b0f7a(param_1,param_1 + 8,&DAT_14caa8558,&DAT_14caa8558,1);
  }
  *(undefined1 *)(param_2 + 8) = 1;
  return uVar2;
}



// FUNCTION 140b42780 FUN_140b42780 body=604 status=ok
// SIG undefined FUN_140b42780(void)

void FUN_140b42780(longlong param_1,longlong *param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == 0.0) && (!NAN(param_3))) {
    lVar2 = FUN_1402735c8();
    param_3 = *(float *)(lVar2 + 0x560);
  }
  plVar6 = (longlong *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar2 = *param_2;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x180);
    }
    iVar8 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x188) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar8 != -1) {
      lVar4 = *plVar6;
      iVar7 = iVar8;
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar7 * 0x14) == lVar2) goto LAB_140b42969;
        iVar7 = *(int *)(lVar4 + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b42a7e(plVar6,local_50);
  lVar2 = *param_2;
  *local_48 = lVar2;
  *(float *)(local_48 + 1) = param_3;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar5 = (uint)lVar2 & 0xffff;
  uVar9 = ((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  local_68 = 0;
  cVar1 = FUN_140b429de(plVar6,uVar9,local_48);
  if (cVar1 == '\0') {
    uVar5 = *(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x174);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x188))) {
      uVar9 = *(int *)(param_1 + 0x188) - 1U & uVar9;
      *(uint *)(local_48 + 2) = uVar9;
      lVar2 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar2 = param_1 + 0x178;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar2 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)(int)uVar9) * 4);
      lVar2 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar2 = param_1 + 0x178;
      }
      *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x188) = iVar8;
      FUN_145774c3e(plVar6);
    }
  }
  goto LAB_140b428d3;
  while (iVar8 = *(int *)((longlong)plVar6 + 0xc), iVar8 != -1) {
LAB_140b42969:
    plVar6 = (longlong *)(lVar4 + (longlong)iVar8 * 0x14);
    if (*plVar6 == lVar2) goto LAB_140b42979;
  }
  plVar6 = (longlong *)0x0;
LAB_140b42979:
  *(float *)(plVar6 + 1) = param_3;
LAB_140b428d3:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b429de FUN_140b429de body=159 status=ok
// SIG undefined FUN_140b429de(void)

void FUN_140b429de(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
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
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_1405b16ec(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140b42a02;
    }
  }
  uVar2 = 0;
LAB_140b42a02:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140b42a7e FUN_140b42a7e body=239 status=ok
// SIG undefined FUN_140b42a7e(void)

int * FUN_140b42a7e(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140b42b6e FUN_140b42b6e body=323 status=ok
// SIG undefined FUN_140b42b6e(void)

void FUN_140b42b6e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1447d701e();
  if ((cVar2 != '\0') && (DAT_14cb91d78 != 0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x19));
    plVar1 = param_1 + 0x15;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_1403de7ba(&local_68,plVar1);
    uVar6 = uStack_60 & 0xffffffff;
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        lVar8 = uVar7 * 8 + local_68;
        lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1,lVar8);
        if (((lVar4 != 0) && (*param_2 != 0)) && ((longlong)*(int *)(lVar4 + 0x30) != 0)) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar5) == *param_2) {
              iVar3 = FUN_1405b18ba(plVar1,lVar8);
              if (0 < iVar3) {
                FUN_1401fa756(plVar1);
              }
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(lVar4 + 0x30) * 8 != lVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar6);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x25) = 1;
    UNLOCK();
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x19));
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b42cb2 FUN_140b42cb2 body=788 status=ok
// SIG undefined FUN_140b42cb2(void)

void FUN_140b42cb2(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined2 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  code **local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_180 [39];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar4 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  lVar6 = param_1[5];
  lVar5 = *(longlong *)(lVar6 + 0x98);
  if (lVar5 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_1b0 = local_180;
      local_180[0] = FUN_141030f22;
      local_1a0 = FUN_14081d0ea;
      local_1a8 = &LAB_1463c0cc2;
      local_1b8 = &LAB_147c9db5b;
      local_1c0 = &LAB_1463f9c44;
      local_1c8 = &DAT_149e063b2;
      local_1d0 = 0x2000000000;
      local_1d8 = 0x10000004;
      local_1e0 = 8;
      local_1e8 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar5 = *(longlong *)(lVar6 + 0x98);
      if (lVar5 == 0) goto LAB_140b42d41;
    }
    if ((((DAT_14caf9cd0 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
        (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
         == DAT_14caf9cd0 + 0x30 && (*(longlong *)(lVar5 + 0x438) != 0)))) {
      if ((int)param_1[0xf] < 1) {
        *(short *)(param_1 + 0x13) = (short)param_1[0x13] + 1;
      }
      else {
        *(undefined2 *)(param_1 + 0x13) = 0;
        if ((int)param_1[0xd] == 3) {
          lVar6 = (**(code **)(*(longlong *)param_1[5] + 0x180))();
          if (lVar6 == 0) goto LAB_140b42d41;
          lVar5 = param_1[0xf];
          if ((longlong)(int)lVar5 != 0) {
            lVar8 = param_1[0xe];
            lVar7 = 0;
            do {
              plVar2 = *(longlong **)(lVar8 + lVar7);
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x10))(plVar2,lVar6);
              }
              lVar7 = lVar7 + 0x10;
            } while ((longlong)(int)lVar5 * 0x10 != lVar7);
          }
        }
        else {
          FUN_1449daf8c(local_180,param_1,0);
          FUN_140b4b694(param_1 + 0xe,local_180,*(undefined8 *)(param_1[5] + 0x68));
          (**(code **)(*param_1 + 0x308))(param_1,&local_188,local_180,1);
          lVar6 = param_1[0xf];
          if ((longlong)(int)lVar6 != 0) {
            lVar5 = param_1[0xe];
            lVar8 = 0;
            do {
              lVar7 = *(longlong *)(lVar5 + lVar8);
              if ((lVar7 != 0) && (*(char *)(lVar7 + 9) == '\x01')) {
                local_190 = local_188;
                local_198 = *(longlong *)(lVar5 + 8 + lVar8);
                if (local_198 != 0) {
                  LOCK();
                  *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
                  UNLOCK();
                }
                iVar1 = (int)param_1[0x11];
                lVar9 = (longlong)iVar1;
                *(uint *)(param_1 + 0x11) = iVar1 + 1U;
                if (*(uint *)((longlong)param_1 + 0x8c) < iVar1 + 1U) {
                  FUN_145774e22(param_1 + 0x10,iVar1);
                }
                lVar3 = param_1[0x10];
                *(undefined8 *)(lVar3 + lVar9 * 0x18) = local_190;
                *(longlong *)(lVar3 + 8 + lVar9 * 0x18) = lVar7;
                *(longlong *)(lVar3 + 0x10 + lVar9 * 0x18) = local_198;
              }
              lVar8 = lVar8 + 0x10;
            } while ((longlong)(int)lVar6 * 0x10 != lVar8);
          }
          FUN_1449daebe(local_180);
        }
        FUN_140b42ff8(param_1[0xe],(int)param_1[0xf]);
        *(undefined4 *)(param_1 + 0xf) = 0;
        if (*(int *)((longlong)param_1 + 0x7c) != 0) {
          FUN_140b42fc8(param_1 + 0xe);
        }
      }
    }
  }
LAB_140b42d41:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b42fc8 FUN_140b42fc8 body=48 status=ok
// SIG undefined FUN_140b42fc8(void)

void FUN_140b42fc8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140b42ff8 FUN_140b42ff8 body=73 status=ok
// SIG undefined FUN_140b42ff8(void)

void FUN_140b42ff8(longlong param_1,int param_2)

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



// FUNCTION 140b43042 FUN_140b43042 body=72 status=ok
// SIG undefined FUN_140b43042(void)

undefined8 FUN_140b43042(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 0x38) == -1) ||
     (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) != '\0')) {
    bVar1 = *(byte *)(param_1 + 0x31) & 0x10;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) & 0xed | bVar1;
  FUN_1408f10c6(param_1,param_2);
  return param_2;
}



// FUNCTION 140b4308a FUN_140b4308a body=1002 status=ok
// SIG undefined FUN_140b4308a(void)

void FUN_140b4308a(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  byte local_190;
  undefined1 local_188;
  byte local_180;
  undefined1 local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_1402d1dc0(param_1 + 0x10);
  if ((lVar4 == 0) ||
     (((*(char *)(param_1 + 0xb0) == '\x01' &&
       (((((*(int *)(param_1 + 0x9c) == 0 || (uVar2 = *(uint *)(param_1 + 0x98), (int)uVar2 < 0)) ||
          (DAT_14c9647dc <= (int)uVar2)) ||
         ((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 == 0 ||
          (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x9c))))) ||
        ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) ||
      (((*(char *)(param_1 + 0xae) != '\0' || (*(char *)(param_1 + 0xaf) == '\x01')) &&
       (cVar3 = FUN_144729dda(param_1 + 0x90), cVar3 == '\0')))))) goto LAB_140b432de;
  puVar1 = (uint *)(param_1 + 0x90);
  if (((((*(int *)(param_1 + 0x94) != 0) && (uVar2 = *puVar1, -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0 &&
       (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x94))))) &&
     ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
    param_2 = FUN_14479d2ce(puVar1);
  }
  if (*(char *)(param_1 + 0xad) == '\0') {
    bVar7 = *(byte *)(param_1 + 0xac);
  }
  else {
    bVar7 = 2;
  }
  if (*(char *)(param_1 + 0xae) == '\0') {
    if (*(byte *)(param_1 + 0xaf) == 0) {
      if (*(char *)(param_1 + 0xb0) != '\x01') {
        local_118 = *(undefined8 *)(param_1 + 0x78);
        local_1b0 = &local_128;
        local_128 = *(undefined8 *)(param_1 + 0x68);
        uStack_120 = *(undefined8 *)(param_1 + 0x70);
        local_148 = *(undefined8 *)(param_1 + 0x50);
        uStack_140 = *(undefined8 *)(param_1 + 0x58);
        local_1b8 = &local_148;
        local_138 = *(undefined8 *)(param_1 + 0x60);
        local_168 = *(undefined4 *)(param_1 + 0x38);
        uStack_164 = *(undefined4 *)(param_1 + 0x3c);
        uStack_160 = *(undefined4 *)(param_1 + 0x40);
        uStack_15c = *(undefined4 *)(param_1 + 0x44);
        local_158 = *(undefined8 *)(param_1 + 0x48);
        local_198 = 1;
        local_1a0 = CONCAT31(local_1a0._1_3_,1);
        local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,1);
        local_188 = 0;
        local_190 = bVar7;
        FUN_1413d76a4(param_2,lVar4,param_1 + 0x80);
        goto LAB_140b432de;
      }
      local_1a0 = *(undefined4 *)(param_1 + 0xa8);
      local_b8 = *(undefined8 *)(param_1 + 0x78);
      local_c8 = *(undefined8 *)(param_1 + 0x68);
      uStack_c0 = *(undefined8 *)(param_1 + 0x70);
      local_d8 = *(undefined8 *)(param_1 + 0x60);
      local_e8 = *(undefined8 *)(param_1 + 0x50);
      uStack_e0 = *(undefined8 *)(param_1 + 0x58);
      local_f8 = *(undefined8 *)(param_1 + 0x48);
      local_108 = *(undefined4 *)(param_1 + 0x38);
      uStack_104 = *(undefined4 *)(param_1 + 0x3c);
      uStack_100 = *(undefined4 *)(param_1 + 0x40);
      uStack_fc = *(undefined4 *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x9c) == 0) {
LAB_140b4339e:
        uVar8 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x98);
        uVar8 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar9 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar9 == (undefined8 *)0x0) ||
             ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x9c) ||
              ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_140b4339e;
          uVar8 = *puVar9;
        }
      }
      local_188 = 1;
      local_190 = 1;
      local_198 = 1;
      local_1a8 = &local_c8;
      local_1b0 = &local_e8;
      local_1b8 = (undefined8 *)&local_108;
      local_178 = 0;
      local_180 = bVar7;
      FUN_140a44d48(lVar4,param_1 + 0x80,uVar8,*(undefined8 *)(param_1 + 0xa0));
      goto LAB_140b432de;
    }
    bVar7 = 2;
  }
  else {
    bVar7 = *(byte *)(param_1 + 0xaf) ^ 1;
  }
  local_16c = *(undefined4 *)(param_1 + 0xa8);
  local_58 = *(undefined8 *)(param_1 + 0x78);
  local_68 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x70);
  local_78 = *(undefined8 *)(param_1 + 0x60);
  local_88 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = *(undefined8 *)(param_1 + 0x58);
  local_a8 = *(undefined4 *)(param_1 + 0x38);
  uStack_a4 = *(undefined4 *)(param_1 + 0x3c);
  uStack_a0 = *(undefined4 *)(param_1 + 0x40);
  uStack_9c = *(undefined4 *)(param_1 + 0x44);
  local_98 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = FUN_14479d2ce(puVar1);
  local_188 = 1;
  local_190 = 1;
  local_198 = 1;
  local_1a0 = local_16c;
  local_178 = 0;
  local_1b8 = (undefined8 *)&local_a8;
  local_1b0 = &local_88;
  local_1a8 = &local_68;
  local_180 = bVar7;
  FUN_1411d5404(lVar4,param_1 + 0x80,uVar5,uVar8);
LAB_140b432de:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b43475 FUN_140b43475 body=2993 status=ok
// SIG undefined FUN_140b43475(void)

void FUN_140b43475(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double _X;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_938 [32];
  undefined8 *local_918;
  undefined1 *local_910;
  undefined1 *local_908;
  double *local_900;
  undefined8 *local_8f8;
  float local_8f0;
  undefined1 local_8e8;
  undefined1 local_8e0;
  undefined8 local_8d8;
  undefined8 *local_8d0;
  undefined8 local_8c8;
  undefined4 local_8b4;
  longlong local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  double local_870;
  double local_868;
  double local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  double local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8 [16];
  undefined1 local_758 [16];
  double local_748;
  undefined8 local_738 [16];
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double local_690;
  double local_688;
  double local_680;
  double local_678;
  undefined8 local_668;
  undefined8 uStack_660;
  double local_658;
  double local_650;
  float local_648;
  float local_644;
  ulonglong local_638;
  undefined8 uStack_630;
  ulonglong local_628;
  undefined1 local_618 [192];
  undefined1 *local_558;
  undefined8 local_548;
  longlong local_438;
  undefined8 local_428;
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8;
  undefined4 local_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined2 local_3c8;
  undefined8 local_3b8 [4];
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348 [19];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  double local_1f8 [16];
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double dStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_938;
  local_8b4 = param_4;
  local_8a8 = param_1;
  iVar5 = FUN_1401d4f3c(param_2);
  FUN_1401d4fca(&local_870,param_2,iVar5 + -1);
  local_8a0 = param_2;
  fVar9 = (float)FUN_1401d4dea(param_2);
  dVar3 = (double)fVar9;
  local_658 = 0.0;
  local_668 = 0;
  uStack_660 = 0;
  local_650 = 1.0;
  local_638 = 0x5500000000000000;
  uStack_630 = 0;
  local_628 = 0x55000000;
  local_558 = (undefined1 *)0x0;
  local_548 = 0x600000000;
  local_438 = 0;
  local_428 = 0x800000000;
  local_3d8 = 0;
  local_3d4 = 0xffffffff;
  uStack_3d0 = 0x3f800000;
  uStack_3cc = 0xbf800000;
  local_3c8 = 0;
  dVar13 = ((local_860 - dVar3) + local_860 + dVar3) * 0.5;
  dVar4 = ((local_868 - dVar3) + local_868 + dVar3) * 0.5;
  dVar14 = ((local_870 - dVar3) + local_870 + dVar3) * 0.5;
  local_348[7] = ((local_860 + dVar3) - (local_860 - dVar3)) * 0.5;
  local_348[9] = ((local_868 + dVar3) - (local_868 - dVar3)) * 0.5;
  local_348[0xe] = ((local_870 + dVar3) - (local_870 - dVar3)) * 0.5;
  local_348[4] = dVar13 + local_348[7];
  local_348[3] = dVar4 + local_348[9];
  local_348[2] = dVar14 + local_348[0xe];
  local_348[7] = dVar13 - local_348[7];
  local_348[5] = local_348[2];
  local_348[6] = local_348[3];
  local_348[9] = dVar4 - local_348[9];
  local_348[8] = local_348[2];
  local_348[10] = local_348[4];
  local_348[0xb] = local_348[2];
  local_348[0xc] = local_348[9];
  local_348[0xd] = local_348[7];
  local_348[0xe] = dVar14 - local_348[0xe];
  local_348[0xf] = local_348[3];
  local_348[0x10] = local_348[4];
  local_348[0x11] = local_348[0xe];
  local_348[0x12] = local_348[3];
  local_2b0 = local_348[7];
  local_2a8 = local_348[0xe];
  local_2a0 = local_348[9];
  local_298 = local_348[4];
  local_290 = local_348[0xe];
  local_288 = local_348[9];
  local_280 = local_348[7];
  dVar3 = 0.0;
  lVar6 = 0x10;
  do {
    dVar1 = dVar14 - *(double *)((longlong)local_348 + lVar6);
    dVar12 = dVar4 - *(double *)((longlong)local_348 + lVar6 + 8);
    dVar2 = dVar13 - *(double *)((longlong)local_348 + lVar6 + 0x10);
    dVar1 = dVar2 * dVar2 + dVar12 * dVar12 + dVar1 * dVar1;
    if (dVar3 <= dVar1) {
      dVar3 = dVar1;
    }
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0xd0);
  if (dVar3 < 0.0) {
    dVar3 = sqrt(dVar3);
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  local_910 = local_3f8;
  local_918 = (undefined8 *)local_418;
  lVar6 = *(longlong *)(param_3 + 0x28);
  local_168 = (double)(*(ulonglong *)(lVar6 + 0x90) ^ 0x8000000000000000);
  local_178._8_4_ = (int)*(undefined8 *)(lVar6 + 0x70);
  local_178._0_8_ = *(ulonglong *)(lVar6 + 0x50) ^ 0x8000000000000000;
  local_178._12_4_ = (uint)((ulonglong)*(undefined8 *)(lVar6 + 0x70) >> 0x20) ^ 0x80000000;
  FUN_1448ae3ce(CONCAT71((int7)((ulonglong)lVar6 >> 8),1),local_348 + 2,local_178,local_618);
  local_3d4 = 0;
  local_748 = -dVar13;
  local_758._8_4_ = SUB84(dVar4,0);
  local_758._0_8_ = -dVar14;
  local_758._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) ^ 0x80000000;
  lVar6 = *(longlong *)(param_3 + 0x28);
  dVar13 = *(double *)(lVar6 + 0x90);
  dVar14 = *(double *)(lVar6 + 0x50);
  dVar4 = *(double *)(lVar6 + 0x70);
  dVar1 = dVar13 * dVar13 + dVar14 * dVar14 + dVar4 * dVar4;
  if (((dVar1 != 1.0) || (dVar2 = dVar13, dVar12 = dVar4, _X = dVar14, NAN(dVar1))) &&
     (dVar2 = DAT_14c8464f0, dVar12 = DAT_14c8464e8, _X = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar1)) {
    dVar1 = 1.0 / SQRT(dVar1);
    dVar2 = dVar13 * dVar1;
    dVar12 = dVar4 * dVar1;
    _X = dVar14 * dVar1;
  }
  dVar13 = 0.0;
  if (((dVar12 != 0.0) || (NAN(dVar12))) || ((_X != 0.0 || (NAN(_X))))) {
    dVar13 = atan2(dVar12,_X);
    dVar13 = dVar13 * 57.29577951308232 * 3.1415927410125732;
  }
  dVar14 = SQRT(_X * _X + dVar12 * dVar12);
  dVar4 = 0.0;
  local_8b0 = param_3;
  if (((dVar2 != 0.0) || (NAN(dVar2))) || ((dVar14 != 0.0 || (NAN(dVar14))))) {
    dVar14 = atan2(dVar2,dVar14);
    dVar4 = dVar14 * 57.29577951308232 * 3.1415927410125732;
  }
  if (dVar3 <= 1.0) {
    dVar3 = 1.0;
  }
  dVar12 = (double)(float)(dVar3 / 1.7320507764816284);
  dVar13 = dVar13 / 180.0;
  dVar14 = cos(dVar13);
  dVar1 = sin(dVar13);
  dVar2 = sin(dVar13);
  local_178._0_8_ = cos(dVar13);
  local_178._8_8_ = -dVar2;
  local_168 = 0.0;
  uStack_160 = 0;
  local_148 = 0.0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 1.0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  dStack_108 = 0.0;
  local_100 = 0x3ff0000000000000;
  dVar4 = dVar4 / 180.0;
  local_158 = dVar1;
  local_150 = dVar14;
  dVar13 = cos(dVar4);
  dVar14 = sin(dVar4);
  dVar1 = sin(dVar4);
  local_1f8[0] = cos(dVar4);
  local_1f8[1] = 0.0;
  local_1f8[3] = 0.0;
  local_1f8[4] = 0.0;
  local_1f8[5] = 1.0;
  local_1f8[6] = 0.0;
  local_1f8[7] = 0.0;
  local_1f8[9] = 0.0;
  local_1f8[0xb] = 0.0;
  local_1f8[0xc] = 0.0;
  local_1f8[0xd] = 0.0;
  local_1f8[0xe] = 0.0;
  local_1f8[0xf] = 1.0;
  local_1f8[2] = -dVar1;
  local_1f8[8] = dVar14;
  local_1f8[10] = dVar13;
  FUN_1447fea8d(local_348 + 2,local_178,local_1f8);
  local_278 = 0x3ff0000000000000;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_230 = 0x8000000000000000;
  local_228 = 0x3ff0000000000000;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0x3ff0000000000000;
  FUN_1447fea8d(local_3b8,local_348 + 2);
  puVar7 = local_3b8;
  puVar8 = local_738;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_6b8 = 1.0 / dVar3;
  local_6a8 = DAT_14c8464e0;
  dStack_6a0 = DAT_14c8464e8;
  local_698 = DAT_14c8464f0;
  local_658 = 0.0;
  local_668 = 0;
  uStack_660 = 0;
  local_650 = 1.0;
  fVar9 = (float)dVar3;
  uVar10 = 0;
  uVar11 = 0xc1300000;
  if (-dVar3 <= -1048576.0) {
    uVar10 = SUB84(dVar3,0);
    uVar11 = (int)((ulonglong)-dVar3 >> 0x20);
  }
  local_648 = (float)(double)CONCAT44(uVar11,uVar10);
  local_644 = fVar9 - local_648;
  local_3c8 = CONCAT11(1,(undefined1)local_3c8);
  local_3d8 = 0;
  uStack_630 = 0;
  local_638 = CONCAT44(fVar9,fVar9) ^ 0x80000000;
  local_628 = (ulonglong)(uint)fVar9;
  local_3d4 = 0;
  uStack_3d0 = 0;
  local_348[2] = 0.0;
  local_348[3] = 0.0;
  local_348[4] = 1.0;
  local_348[5] = 0.0;
  local_348[6] = 0.0;
  local_348[7] = 1.0;
  local_348[8] = 0.0;
  local_348[9] = 0.0;
  local_348[10] = -1.0;
  local_348[0xb] = 0.0;
  local_348[0xc] = 0.0;
  local_348[0xd] = 0.0;
  local_348[0xe] = 0.0;
  local_348[0xf] = 0.0;
  local_348[0x10] = 0.0;
  local_348[0x11] = 1.0;
  local_6b0 = local_6b8;
  local_690 = dVar12;
  local_688 = dVar12;
  local_680 = dVar12;
  local_678 = dVar3;
  FUN_1447fea8d(local_178,local_738,local_348 + 2);
  dVar3 = local_6a8 * local_168 + dStack_6a0 * local_148 + local_698 * local_128 + dStack_108 +
          local_678;
  if ((double)local_644 <= dVar3) {
    dVar3 = (double)local_644;
  }
  dVar13 = dVar3 - (local_678 + local_678);
  if (dVar13 <= (double)local_648) {
    dVar13 = (double)local_648;
  }
  local_1f8[0] = local_6b8;
  local_1f8[1] = 0.0;
  local_1f8[2] = 0.0;
  local_1f8[3] = 0.0;
  local_1f8[4] = 0.0;
  local_1f8[5] = local_6b0;
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
  dVar14 = local_658 * dVar13 + local_650;
  local_348[0] = (dVar3 * dVar14) / (dVar3 - dVar13);
  local_368 = -dVar14 / (dVar3 - dVar13);
  local_3b8[0] = 0x3ff0000000000000;
  local_3b8[1] = 0;
  local_3b8[2] = 0;
  local_3b8[3] = local_668;
  local_398 = 0;
  local_390 = 0x3ff0000000000000;
  local_388 = 0;
  local_380 = uStack_660;
  local_378 = 0;
  uStack_370 = 0;
  local_360 = local_658;
  local_358 = 0;
  uStack_350 = 0;
  local_348[1] = local_650;
  FUN_1447fea8d(&local_278,local_1f8,local_3b8);
  FUN_1447fea8d(local_3b8,local_178,&local_278);
  uVar10 = (undefined4)local_548;
  local_908 = local_618;
  if (local_558 != (undefined1 *)0x0) {
    local_908 = local_558;
  }
  local_878 = DAT_14c8464f0;
  local_888 = DAT_14c8464e0;
  dStack_880 = DAT_14c8464e8;
  local_898 = 0;
  uStack_890 = 0;
  local_858 = 0x3ff0000000000000;
  local_850 = 0;
  uStack_848 = 0;
  local_840 = 0;
  uStack_838 = 0;
  local_830 = 0x3ff0000000000000;
  local_828 = 0;
  uStack_820 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0x3ff0000000000000;
  local_800 = 0;
  local_7f8 = local_758._0_4_;
  uStack_7f4 = local_758._4_4_;
  uStack_7f0 = local_758._8_4_;
  uStack_7ec = local_758._12_4_;
  local_7e8 = local_748;
  local_7e0 = 0x3ff0000000000000;
  FUN_1447fea8d(local_7d8,&local_858,local_3b8);
  puVar7 = local_7d8;
  puVar8 = param_6;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_7d8[2] = 0;
  local_7d8[3] = 0;
  local_7d8[0] = 0;
  local_7d8[1] = 0;
  local_8c8 = param_7;
  local_8d8 = param_5;
  local_8e0 = 0;
  local_8e8 = 0;
  local_8f8 = &local_898;
  local_910 = (undefined1 *)CONCAT44(local_910._4_4_,uVar10);
  local_918 = param_6;
  local_900 = &local_888;
  local_8f0 = fVar9;
  local_8d0 = local_7d8;
  FUN_140b44027(local_8a8,local_8a0,*(undefined8 *)(local_8b0 + 0x28),local_8b4);
  if (local_438 != 0) {
    FUN_1400020a8();
  }
  if (local_558 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_938) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b44027 FUN_140b44027 body=6171 status=ok
// SIG undefined FUN_140b44027(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b44027(longlong param_1,longlong param_2,longlong param_3,int param_4,double *param_5,
                  uint param_6,longlong param_7,double *param_8,undefined4 *param_9,float param_10,
                  byte param_11,byte param_12,undefined8 *param_13,undefined8 *param_14,
                  undefined8 *param_15)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
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
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong *puVar34;
  int iVar35;
  uint uVar36;
  uint *puVar37;
  longlong lVar38;
  ulonglong uVar39;
  uint uVar40;
  int *piVar41;
  int iVar42;
  ulonglong uVar43;
  undefined8 *puVar44;
  bool bVar45;
  char cVar46;
  uint uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  int local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  ulonglong *local_160;
  longlong local_158;
  undefined8 local_150;
  int local_144;
  undefined8 *local_140;
  undefined8 *local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  ulonglong local_f0;
  double dVar3;
  double dVar5;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_120 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x40);
  puVar37 = (uint *)(param_13 + 2);
  if (param_4 == 1) {
    puVar37 = (uint *)(param_13 + 5);
  }
  local_110 = 0;
  uVar47 = *puVar37;
  local_150 = (ulonglong)uVar47;
  uVar36 = uVar47 + 0x1fe;
  if (-1 < (int)(uVar47 + 0xff)) {
    uVar36 = uVar47 + 0xff;
  }
  local_158 = param_3;
  local_144 = param_4;
  FUN_14176009a(param_1,uVar36 & 0xffffff00,&local_110,param_14);
  FUN_1405bfba3(param_1,*param_14,0,2);
  local_160 = (ulonglong *)(param_1 + 0x70);
  puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar44 = puVar48 + 0x36;
  if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
    FUN_140023dd8(local_160,0x1c0);
    puVar48 = (undefined8 *)(*local_160 + 0xf & 0xfffffffffffffff0);
    puVar44 = puVar48 + 0x36;
  }
  *local_160 = (ulonglong)puVar44;
  *puVar48 = &PTR_FUN_14a20b160;
  local_138 = puVar48 + 2;
  puVar48[2] = 0;
  *(undefined1 *)(puVar48 + 3) = 1;
  puVar48[4] = 0;
  *(undefined1 *)(puVar48 + 5) = 1;
  local_140 = puVar48 + 0x1c;
  puVar48[0x1c] = 0;
  puVar48[0x1d] = 0x3f80000000000000;
  puVar48[6] = 0;
  puVar48[7] = 0;
  puVar48[9] = 0;
  puVar48[10] = 0;
  puVar48[0xc] = 0;
  puVar48[0xd] = 0;
  puVar48[0xe] = 0;
  puVar48[0xf] = 0;
  lVar38 = 0xf0;
  do {
    puVar1 = (undefined4 *)((longlong)puVar48 + lVar38 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    puVar1 = (undefined4 *)((longlong)puVar48 + lVar38);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    lVar38 = lVar38 + 0x20;
  } while (lVar38 != 0x1b0);
  local_130 = (longlong *)(param_1 + 0x98);
  iVar42 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar42 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar42 + 1U) {
    FUN_1448cfae8(local_130,iVar42);
  }
  *(undefined8 **)(*local_130 + (longlong)iVar42 * 8) = puVar48;
  lVar38 = FUN_1447e4f80();
  cVar46 = '\x02';
  if (*(char *)(lVar38 + 0x41) != '\x03') {
    cVar46 = *(char *)(lVar38 + 0x41);
  }
  puVar48[2] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar48 + 3) = cVar46;
  uVar8 = *param_13;
  uVar30 = param_13[1];
  uVar31 = param_13[2];
  uVar32 = param_13[3];
  uVar33 = param_13[5];
  puVar48[10] = param_13[4];
  puVar48[0xb] = uVar33;
  puVar48[8] = uVar31;
  puVar48[9] = uVar32;
  puVar48[6] = uVar8;
  puVar48[7] = uVar30;
  uVar8 = param_14[1];
  uVar30 = param_14[2];
  uVar31 = param_14[3];
  puVar48[0xc] = *param_14;
  puVar48[0xd] = uVar8;
  puVar48[0xe] = uVar30;
  puVar48[0xf] = uVar31;
  *(undefined4 *)(puVar48 + 0x10) = 0x24;
  dVar6 = *param_5;
  dVar7 = param_5[1];
  dVar13 = param_5[2];
  dVar14 = param_5[3];
  dVar15 = param_5[4];
  dVar16 = param_5[5];
  dVar17 = param_5[6];
  dVar18 = param_5[7];
  dVar19 = param_5[8];
  dVar20 = param_5[9];
  dVar21 = param_5[10];
  dVar22 = param_5[0xb];
  dVar23 = param_5[0xc];
  dVar24 = param_5[0xd];
  dVar25 = param_5[0xe];
  dVar26 = param_5[0xf];
  dVar51 = -*(double *)(param_2 + 0x1030);
  dVar52 = -*(double *)(param_2 + 0x1030);
  dVar2 = *(double *)(param_2 + 0x1038);
  dVar3 = *(double *)(param_2 + 0x1038);
  dVar4 = *(double *)(param_2 + 0x1040);
  dVar5 = *(double *)(param_2 + 0x1040);
  dVar9 = dVar23 * 0.0;
  dVar10 = dVar24 * 0.0;
  dVar11 = dVar25 * 0.0;
  dVar12 = dVar26 * 0.0;
  *(float *)(puVar48 + 0x12) = (float)(dVar6 + dVar15 * 0.0 + dVar19 * 0.0 + dVar9);
  *(float *)((longlong)puVar48 + 0x94) = (float)(dVar7 + dVar16 * 0.0 + dVar20 * 0.0 + dVar10);
  *(float *)(puVar48 + 0x13) = (float)(dVar13 + dVar17 * 0.0 + dVar21 * 0.0 + dVar11);
  *(float *)((longlong)puVar48 + 0x9c) = (float)(dVar14 + dVar18 * 0.0 + dVar22 * 0.0 + dVar12);
  *(float *)(puVar48 + 0x14) = (float)(dVar6 * 0.0 + dVar15 + dVar19 * 0.0 + dVar9);
  *(float *)((longlong)puVar48 + 0xa4) = (float)(dVar7 * 0.0 + dVar16 + dVar20 * 0.0 + dVar10);
  *(float *)(puVar48 + 0x15) = (float)(dVar13 * 0.0 + dVar17 + dVar21 * 0.0 + dVar11);
  *(float *)((longlong)puVar48 + 0xac) = (float)(dVar14 * 0.0 + dVar18 + dVar22 * 0.0 + dVar12);
  *(float *)(puVar48 + 0x16) = (float)(dVar6 * 0.0 + dVar15 * 0.0 + dVar19 + dVar9);
  *(float *)((longlong)puVar48 + 0xb4) = (float)(dVar7 * 0.0 + dVar16 * 0.0 + dVar20 + dVar10);
  *(float *)(puVar48 + 0x17) = (float)(dVar13 * 0.0 + dVar17 * 0.0 + dVar21 + dVar11);
  *(float *)((longlong)puVar48 + 0xbc) = (float)(dVar14 * 0.0 + dVar18 * 0.0 + dVar22 + dVar12);
  *(float *)(puVar48 + 0x18) =
       (float)(((dVar6 * dVar51 - dVar15 * dVar2) - dVar19 * dVar4) + dVar23);
  *(float *)((longlong)puVar48 + 0xc4) =
       (float)(((dVar7 * dVar52 - dVar16 * dVar3) - dVar20 * dVar5) + dVar24);
  *(float *)(puVar48 + 0x19) =
       (float)(((dVar51 * dVar13 - dVar2 * dVar17) - dVar4 * dVar21) + dVar25);
  *(float *)((longlong)puVar48 + 0xcc) =
       (float)(((dVar52 * dVar14 - dVar3 * dVar18) - dVar5 * dVar22) + dVar26);
  *(uint *)(puVar48 + 0x1a) = param_6;
  uVar27 = param_9[1];
  uVar28 = param_9[2];
  uVar29 = param_9[3];
  *(undefined4 *)local_140 = *param_9;
  *(undefined4 *)((longlong)local_140 + 4) = uVar27;
  *(undefined4 *)(local_140 + 1) = uVar28;
  *(undefined4 *)((longlong)local_140 + 0xc) = uVar29;
  uVar47 = 1;
  if (((*(byte *)(local_158 + 0x1d3) & 0x20) != 0) && (*(char *)(local_158 + 0x1e8) == '\0')) {
    uVar47 = (uint)(param_11 ^ 1);
  }
  iVar42 = (int)local_150;
  *(uint *)((longlong)puVar48 + 0xd4) = uVar47;
  *(uint *)(puVar48 + 0x1b) = (uint)param_12;
  if (0 < (int)param_6) {
    lVar38 = 0;
    do {
      dVar3 = *(double *)(param_2 + 0x1040);
      dVar2 = param_8[2];
      dVar4 = *(double *)(param_2 + 0x1030);
      dVar5 = *(double *)(param_2 + 0x1038);
      dVar9 = param_8[1];
      dVar10 = *param_8;
      dVar11 = *(double *)(param_7 + 0x18 + lVar38 * 2);
      dVar12 = *(double *)(param_7 + 0x10 + lVar38 * 2);
      dVar6 = *(double *)(param_7 + lVar38 * 2);
      dVar7 = *(double *)(param_7 + 8 + lVar38 * 2);
      *(float *)((longlong)puVar48 + lVar38 + 0xf0) = (float)dVar6;
      *(float *)((longlong)puVar48 + lVar38 + 0xf4) = (float)dVar7;
      *(float *)((longlong)puVar48 + lVar38 + 0xf8) = (float)dVar12;
      *(float *)((longlong)puVar48 + lVar38 + 0xfc) =
           (float)((dVar11 * dVar12 + (dVar3 - dVar2)) * dVar12 +
                  (dVar11 * dVar6 + (dVar4 - dVar10)) * dVar6 +
                  (dVar11 * dVar7 + (dVar5 - dVar9)) * dVar7);
      lVar38 = lVar38 + 0x10;
    } while ((ulonglong)param_6 << 4 != lVar38);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x13818);
  FUN_1415a0222();
  FUN_1448e935e(uVar8,&local_108,&DAT_14c9c6ca8,local_144);
  FUN_1415a0222();
  iVar35 = iVar42 + 0x3f;
  iVar42 = iVar42 + 0x7e;
  if (-1 < iVar35) {
    iVar42 = iVar35;
  }
  uVar47 = iVar42 >> 6;
  local_150 = (ulonglong)uVar47;
  iVar42 = 1;
  if (DAT_14ca84f24 < (int)uVar47) {
    iVar35 = uVar47 + 0xfe;
    if (-1 < (int)(uVar47 + 0x7f)) {
      iVar35 = uVar47 + 0x7f;
    }
    iVar35 = iVar35 >> 7;
    local_150 = 0x80;
  }
  else {
    iVar35 = 1;
  }
  uVar8 = CONCAT44(local_108._4_4_,(int)local_108);
  if (DAT_14ca84f28 < iVar35) {
    iVar42 = iVar35 + 0xfe;
    if (-1 < iVar35 + 0x7f) {
      iVar42 = iVar35 + 0x7f;
    }
    iVar42 = iVar42 >> 7;
    iVar35 = 0x80;
  }
  uVar30 = CONCAT44(uStack_fc,uStack_100);
  FUN_1415a0344();
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  FUN_1448f70da(uVar8,&DAT_14c9c89e8,local_138,&local_108);
  FUN_140069376(param_1);
  puVar34 = local_160;
  uVar39 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar39 = 4;
  }
  puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar44 = puVar48 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
    local_140 = (undefined8 *)CONCAT62(local_140._2_6_,(short)uVar39);
    FUN_140023dd8(local_160,0x1f0);
    uVar39 = (ulonglong)local_140 & 0xffff;
    puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
    puVar44 = puVar48 + 0x3d;
  }
  *local_160 = (ulonglong)puVar44;
  local_108._0_4_ = (int)local_138;
  local_108._4_4_ = (int)((ulonglong)local_138 >> 0x20);
  uStack_100 = (undefined4)DAT_14c9c8a30;
  uStack_fc = (undefined4)((ulonglong)DAT_14c9c8a30 >> 0x20);
  if (DAT_14c9c8a30 != 0) {
    LOCK();
    *(int *)(DAT_14c9c8a30 + 8) = *(int *)(DAT_14c9c8a30 + 8) + 1;
    UNLOCK();
  }
  local_f8 = &DAT_14c9c89e8;
  local_198 = 2;
  FUN_140068f1a(puVar48,&local_111,&local_108,uVar39);
  *puVar48 = &PTR_FUN_14a20b170;
  puVar48[0x37] = &DAT_14c9c89e8;
  puVar48[0x38] = local_138;
  puVar48[0x39] = uVar8;
  puVar48[0x3a] = uVar30;
  *(int *)(puVar48 + 0x3b) = (int)local_150;
  *(int *)((longlong)puVar48 + 0x1dc) = iVar35;
  *(int *)(puVar48 + 0x3c) = iVar42;
  lVar38 = param_1 + 0x168;
  iVar42 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar42 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar42 + 1U) {
    FUN_14470e57a(lVar38,iVar42);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar42 * 8) = puVar48;
  *(int *)((longlong)puVar48 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar48);
  puVar34 = local_160;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,(int)local_108);
  if ((*(char *)(local_158 + 0x1e8) == '\0') &&
     (local_108 = (undefined8 *)CONCAT44(local_108._4_4_,(int)local_108), DAT_14c7601f0 != 0)) {
    fVar50 = param_10 / _DAT_14c7601f4 + 1.0;
    if (256.0 <= fVar50) {
      fVar50 = 256.0;
    }
    uVar47 = (int)fVar50 + 0x3fU & 0xffffffc0;
    if (*(char *)(local_120 + 0x4b59) == '\x01') {
      bVar45 = *(int *)(local_120 + 0x4588) < 0x10000;
    }
    else {
      bVar45 = false;
    }
    local_150 = CONCAT44(local_150._4_4_,(int)fVar50 + 0x3fU) & 0xffffffffffffffc0;
    uVar47 = uVar47 * uVar47;
    uVar36 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar36 = DAT_14ca84e48;
    }
    local_108._0_4_ = uVar36 + (uVar36 == 0);
    uStack_100 = 0x4109;
    uVar36 = DAT_14ca84e48;
    if (uVar47 < DAT_14ca84e48) {
      uVar36 = uVar47;
    }
    local_f8 = (undefined *)0x0;
    local_108._4_4_ = uVar36 + (uVar36 == 0);
    uVar43 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar39 = uVar43 + 0x150;
    local_128 = lVar38;
    if (*(ulonglong *)(param_1 + 0x78) < uVar39) {
      FUN_140023dd8(local_160,0x160);
      uVar43 = *puVar34 + 0xf & 0xfffffffffffffff0;
      uVar39 = uVar43 + 0x150;
    }
    local_140 = (undefined8 *)(param_1 + 0x188);
    *(ulonglong *)(param_1 + 0x70) = uVar39;
    FUN_1456bd266(uVar43,L"ShadowTileNumCulledObjects",&local_108,0);
    iVar42 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar42 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar42 + 1U) {
      FUN_144737178(local_140,iVar42);
    }
    puVar34 = local_160;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar42 * 8) = uVar43;
    *(int *)(uVar43 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar44 = puVar48 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
      FUN_140023dd8(local_160,0x48);
      puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
      puVar44 = puVar48 + 8;
    }
    local_158 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar44;
    puVar48[1] = *(undefined8 *)(uVar43 + 8);
    puVar48[2] = 0;
    *(undefined1 *)(puVar48 + 3) = 2;
    *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar48 + 5) = 0;
    *puVar48 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar48 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar48 + 0x32) = 0;
    puVar48[7] = uVar43;
    iVar42 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar42 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar42 + 1U) {
      FUN_1447568fc(local_158,iVar42);
    }
    puVar34 = local_160;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar42 * 8) = puVar48;
    *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *param_15 = puVar48;
    puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar44 = puVar48 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
      FUN_140023dd8(local_160,0x50);
      puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
      puVar44 = puVar48 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar44;
    puVar48[1] = *(undefined8 *)(uVar43 + 8);
    puVar48[2] = 0;
    *(undefined1 *)(puVar48 + 3) = 3;
    *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
    *puVar48 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar48 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar48 + 0x2c) = 0xffffffff00000000;
    puVar48[7] = 0;
    puVar48[8] = uVar43;
    iVar42 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar42 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar42 + 1U) {
      FUN_1447568fc(local_158,iVar42);
    }
    puVar34 = local_160;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar42 * 8) = puVar48;
    *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    piVar41 = &DAT_14c7601f8;
    if (local_144 == 1) {
      piVar41 = &DAT_14c760200;
    }
    param_15[4] = puVar48;
    iVar42 = *piVar41;
    uVar36 = iVar42 * uVar47;
    uVar40 = (uint)(bVar45 ^ 1) * 2 + 2;
    if (DAT_14ca84e48 <= uVar40) {
      uVar40 = DAT_14ca84e48;
    }
    local_108._0_4_ = uVar40 + (uVar40 == 0);
    uStack_100 = 0x4109;
    if (DAT_14ca84e48 <= uVar36) {
      uVar36 = DAT_14ca84e48;
    }
    local_f8 = (undefined *)0x0;
    local_108._4_4_ = uVar36 + (uVar36 == 0);
    uVar43 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar39 = uVar43 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar39) {
      FUN_140023dd8(local_160,0x160);
      uVar43 = *puVar34 + 0xf & 0xfffffffffffffff0;
      uVar39 = uVar43 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar39;
    FUN_1456bd266(uVar43,L"ShadowTileArrayData",&local_108,0);
    iVar35 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar35 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar35 + 1U) {
      FUN_144737178(local_140,iVar35);
    }
    puVar34 = local_160;
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar35 * 8) = uVar43;
    *(int *)(uVar43 + 0x7c) = *(int *)(param_1 + 400) + -1;
    cVar46 = bVar45 * '\x04' + '\x1c';
    puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar44 = puVar48 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
      FUN_140023dd8(local_160,0x48);
      puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
      puVar44 = puVar48 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar44;
    puVar48[1] = *(undefined8 *)(uVar43 + 8);
    puVar48[2] = 0;
    *(undefined1 *)(puVar48 + 3) = 2;
    *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar48 + 5) = 0;
    *puVar48 = &PTR_FUN_14a1fb3e8;
    *(char *)(puVar48 + 6) = cVar46;
    *(undefined2 *)((longlong)puVar48 + 0x31) = 0;
    puVar48[7] = uVar43;
    iVar35 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_158,iVar35);
    }
    puVar34 = local_160;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar35 * 8) = puVar48;
    *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    param_15[3] = puVar48;
    puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar44 = puVar48 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
      FUN_140023dd8(local_160,0x50);
      puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
      puVar44 = puVar48 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar44;
    puVar48[1] = *(undefined8 *)(uVar43 + 8);
    puVar48[2] = 0;
    *(undefined1 *)(puVar48 + 3) = 3;
    *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
    *puVar48 = &PTR_FUN_14a1fb168;
    *(char *)(puVar48 + 5) = cVar46;
    *(undefined8 *)((longlong)puVar48 + 0x2c) = 0xffffffff00000000;
    puVar48[7] = 0;
    puVar48[8] = uVar43;
    iVar35 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_158,iVar35);
    }
    puVar34 = local_160;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar35 * 8) = puVar48;
    *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    param_15[7] = puVar48;
    puVar44 = (undefined8 *)CONCAT44((uint)local_150,(uint)local_150);
    param_15[0xb] = puVar44;
    *(int *)(param_15 + 0xc) = iVar42;
    if (DAT_14c760204 == 0) {
      param_15[1] = 0;
      param_15[2] = 0;
      param_15[5] = 0;
      param_15[6] = 0;
    }
    else {
      uVar36 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar36 = DAT_14ca84e48;
      }
      local_108._0_4_ = uVar36 + (uVar36 == 0);
      uStack_100 = 0x4109;
      uVar36 = DAT_14ca84e48;
      if (uVar47 < DAT_14ca84e48) {
        uVar36 = uVar47;
      }
      local_f8 = (undefined *)0x0;
      local_108._4_4_ = uVar36 + (uVar36 == 0);
      uVar43 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar39 = uVar43 + 0x150;
      local_138 = puVar44;
      if (*(ulonglong *)(param_1 + 0x78) < uVar39) {
        FUN_140023dd8(local_160,0x160);
        uVar43 = *puVar34 + 0xf & 0xfffffffffffffff0;
        uVar39 = uVar43 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar39;
      FUN_1456bd266(uVar43,L"ShadowTileStartOffsets",&local_108,0);
      iVar42 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar42 + 1U) {
        FUN_144737178(local_140,iVar42);
      }
      puVar34 = local_160;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar42 * 8) = uVar43;
      *(int *)(uVar43 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar44 = puVar48 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
        FUN_140023dd8(local_160,0x48);
        puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
        puVar44 = puVar48 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar44;
      puVar48[1] = *(undefined8 *)(uVar43 + 8);
      puVar48[2] = 0;
      *(undefined1 *)(puVar48 + 3) = 2;
      *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar48 + 5) = 0;
      *puVar48 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar48 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar48 + 0x32) = 0;
      puVar48[7] = uVar43;
      iVar42 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(local_158,iVar42);
      }
      puVar34 = local_160;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar42 * 8) = puVar48;
      *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      param_15[1] = puVar48;
      puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar44 = puVar48 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
        FUN_140023dd8(local_160,0x50);
        puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
        puVar44 = puVar48 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar44;
      puVar48[1] = *(undefined8 *)(uVar43 + 8);
      puVar48[2] = 0;
      *(undefined1 *)(puVar48 + 3) = 3;
      *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
      *puVar48 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar48 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar48 + 0x2c) = 0xffffffff00000000;
      puVar48[7] = 0;
      puVar48[8] = uVar43;
      iVar42 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(local_158,iVar42);
      }
      puVar34 = local_160;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar42 * 8) = puVar48;
      *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      param_15[5] = puVar48;
      local_f8 = (undefined *)0x0;
      uVar47 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar47 = DAT_14ca84e48;
      }
      local_108._0_4_ = uVar47 + (uVar47 == 0);
      local_108._4_4_ = 1;
      uStack_100 = 0x4109;
      uVar43 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar39 = uVar43 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar39) {
        FUN_140023dd8(local_160,0x160);
        uVar43 = *puVar34 + 0xf & 0xfffffffffffffff0;
        uVar39 = uVar43 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar39;
      FUN_1456bd266(uVar43,L"ShadowNextStartOffset",&local_108,0);
      iVar42 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar42 + 1U) {
        FUN_144737178(local_140,iVar42);
      }
      puVar34 = local_160;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar42 * 8) = uVar43;
      *(int *)(uVar43 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar44 = puVar48 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
        FUN_140023dd8(local_160,0x48);
        puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
        puVar44 = puVar48 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar44;
      puVar48[1] = *(undefined8 *)(uVar43 + 8);
      puVar48[2] = 0;
      *(undefined1 *)(puVar48 + 3) = 2;
      *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar48 + 5) = 0;
      *puVar48 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar48 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar48 + 0x32) = 0;
      puVar48[7] = uVar43;
      iVar42 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(local_158,iVar42);
      }
      puVar34 = local_160;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar42 * 8) = puVar48;
      *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      param_15[2] = puVar48;
      puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar44 = puVar48 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
        FUN_140023dd8(local_160,0x50);
        puVar48 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
        puVar44 = puVar48 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar44;
      puVar48[1] = *(undefined8 *)(uVar43 + 8);
      puVar48[2] = 0;
      *(undefined1 *)(puVar48 + 3) = 3;
      *(undefined8 *)((longlong)puVar48 + 0x1c) = 0xffffffffffffffff;
      *puVar48 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar48 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar48 + 0x2c) = 0xffffffff00000000;
      puVar48[7] = 0;
      puVar48[8] = uVar43;
      iVar42 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar42 + 1U;
      uVar47 = (uint)local_150;
      if (*(uint *)(param_1 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(local_158,iVar42);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar42 * 8) = puVar48;
      *(int *)((longlong)puVar48 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      param_15[6] = puVar48;
      FUN_1405bfba3(param_1,*param_15,0,2);
      local_168 = param_15;
      local_170 = param_14;
      local_178 = param_13;
      local_180 = local_110;
      local_188 = local_138;
      local_190 = local_144;
      local_198 = 1;
      FUN_142be0197(param_1,param_2,param_5,param_10);
      FUN_1405bfba3(param_1,param_15[2],0,2);
      puVar34 = local_160;
      puVar48 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar44 = puVar48 + 0x10;
      if (*(undefined8 **)(param_1 + 0x78) < puVar44) {
        FUN_140023dd8(local_160,0x90);
        puVar48 = (undefined8 *)(*puVar34 + 0xf & 0xfffffffffffffff0);
        puVar44 = puVar48 + 0x10;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar44;
      *puVar48 = &PTR_FUN_14a20b188;
      puVar44 = puVar48 + 2;
      puVar48[2] = 0;
      puVar48[3] = 0;
      puVar48[4] = 0;
      puVar48[5] = 0;
      puVar48[6] = 0;
      puVar48[7] = 0;
      puVar48[8] = 0;
      puVar48[9] = 0;
      puVar48[10] = 0;
      puVar48[0xb] = 0;
      puVar48[0xc] = 0;
      iVar42 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar42 + 1U) {
        FUN_1448cfae8(local_130,iVar42);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar42 * 8) = puVar48;
      puVar48 = param_15;
      puVar49 = puVar44;
      for (lVar38 = 0xd; lVar38 != 0; lVar38 = lVar38 + -1) {
        *puVar49 = *puVar48;
        puVar48 = puVar48 + 1;
        puVar49 = puVar49 + 1;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x13818);
      FUN_1415a5852();
      FUN_1415a5852();
      FUN_1448e935e(uVar8,&local_108,&DAT_14c9c7398,0);
      FUN_1415a5852();
      uVar8 = CONCAT44(local_108._4_4_,(int)local_108);
      uVar30 = CONCAT44(uStack_fc,uStack_100);
      uVar36 = uVar47 | 7;
      uVar47 = uVar47 + 0xe;
      if (-1 < (int)uVar36) {
        uVar47 = uVar36;
      }
      FUN_1415a5974();
      local_108._0_4_ = 0;
      local_108._4_4_ = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      FUN_1448f70da(uVar8,&DAT_14c9c8da0,puVar44,&local_108);
      FUN_140069376(param_1);
      puVar34 = local_160;
      uVar39 = 2;
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar39 = 4;
      }
      puVar49 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar48 = puVar49 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar48) {
        local_150 = CONCAT62(local_150._2_6_,(short)uVar39);
        FUN_140023dd8(local_160,0x1f0);
        uVar39 = local_150 & 0xffff;
        puVar49 = (undefined8 *)(*puVar34 + 7 & 0xfffffffffffffff8);
        puVar48 = puVar49 + 0x3d;
      }
      *local_160 = (ulonglong)puVar48;
      uStack_100 = (undefined4)DAT_14c9c8de8;
      uStack_fc = (undefined4)((ulonglong)DAT_14c9c8de8 >> 0x20);
      if (DAT_14c9c8de8 != 0) {
        LOCK();
        *(int *)(DAT_14c9c8de8 + 8) = *(int *)(DAT_14c9c8de8 + 8) + 1;
        UNLOCK();
      }
      local_f8 = &DAT_14c9c8da0;
      local_198 = 2;
      local_108 = puVar44;
      FUN_140068f1a(puVar49,&local_111,&local_108,uVar39);
      *puVar49 = &PTR_FUN_14a20b190;
      puVar49[0x37] = &DAT_14c9c8da0;
      puVar49[0x38] = puVar44;
      puVar49[0x39] = uVar8;
      puVar49[0x3a] = uVar30;
      *(int *)(puVar49 + 0x3b) = (int)uVar47 >> 3;
      *(int *)((longlong)puVar49 + 0x1dc) = (int)uVar47 >> 3;
      *(undefined4 *)(puVar49 + 0x3c) = 1;
      iVar42 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar42 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar42 + 1U) {
        FUN_14470e57a(local_128,iVar42);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar42 * 8) = puVar49;
      *(int *)((longlong)puVar49 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar49);
      puVar44 = local_138;
    }
    FUN_1405bfba3(param_1,*param_15,0,2);
    local_170 = param_14;
    local_178 = param_13;
    local_180 = local_110;
    local_190 = local_144;
    local_198 = 0;
    local_188 = puVar44;
    local_168 = param_15;
    FUN_142be0197(param_1,param_2,param_5,param_10);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b45844 FUN_140b45844 body=306 status=ok
// SIG undefined FUN_140b45844(void)

undefined8 FUN_140b45844(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    if (iVar1 == 2) goto LAB_140b45970;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b45970;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140b45970:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b45918;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140b45918;
    }
  }
  uVar6 = 0;
LAB_140b45918:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b45978 FUN_140b45978 body=936 status=ok
// SIG undefined FUN_140b45978(void)

void FUN_140b45978(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_1403ae288(param_2);
  if (cVar4 == '\0') goto LAB_140b45ba3;
  cVar4 = FUN_140280fd6(param_2,param_1 + 0x48);
  if (cVar4 == '\0') goto LAB_140b45ba3;
  FUN_1449027d0(param_1,&local_50);
  pfVar3 = *(float **)(local_50 + 0x130);
  AcquireSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x18));
  pfVar3[0x16] = (float)((int)pfVar3[0x16] + 1);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (pfVar3[1] == 0.0 || param_3 != *pfVar3) {
    *pfVar3 = param_3;
    pfVar3[1] = (float)((int)pfVar3[1] + 1);
  }
  local_50 = (code *)CONCAT71(local_50._1_7_,4);
  uVar8 = FUN_140280ec4(param_2);
  cVar4 = FUN_140280f4a(uVar8,&local_50);
  if (cVar4 != '\0') {
    if (((char)local_50 != *(char *)(pfVar3 + 10)) || (pfVar3[0xb] == 0.0)) {
      *(char *)(pfVar3 + 10) = (char)local_50;
      pfVar3[0xb] = (float)((int)pfVar3[0xb] + 1);
    }
  }
  fVar6 = pfVar3[0xc];
  fVar10 = (*pfVar3 / pfVar3[4]) * 100.0;
  if (1e-08 < ABS(fVar10 - fVar6)) {
    fVar12 = fVar6 - fVar10;
    if ((fVar12 != pfVar3[0xe]) || (NAN(fVar12) || NAN(pfVar3[0xe]))) {
      fVar5 = (float)((int)pfVar3[0xf] + 1);
LAB_140b45abd:
      pfVar3[0xe] = fVar12;
      pfVar3[0xf] = fVar5;
    }
    else if (pfVar3[0xf] == 0.0) {
      fVar5 = 1.4013e-45;
      goto LAB_140b45abd;
    }
    if ((fVar10 != fVar6) || (NAN(fVar10) || NAN(fVar6))) {
      fVar6 = (float)((int)pfVar3[0xd] + 1);
LAB_140b45ad8:
      pfVar3[0xc] = fVar10;
      pfVar3[0xd] = fVar6;
    }
    else if (pfVar3[0xd] == 0.0) {
      fVar6 = 1.4013e-45;
      goto LAB_140b45ad8;
    }
    lVar9 = FUN_1400d7050(param_1 + 0x30);
    if (lVar9 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1459f2e4c;
        local_78 = &LAB_148c39de3;
        local_80 = &LAB_1457a9eb2;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x3de0;
        local_70 = &local_50;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        iVar7 = (int)ROUND(pfVar3[0xc] + pfVar3[0xc] + 0.5);
        if ((bool)*(char *)(param_1 + 0x88) != iVar7 < 200) {
          if (iVar7 < 200) {
            FUN_1403ca8ec(lVar9 + 0xd98,&DAT_14cbd9640);
          }
          else {
            FUN_140b45d22(lVar9 + 0xd98,&DAT_14cbd9640,pfVar3[0x10]);
          }
          *(bool *)(param_1 + 0x88) = iVar7 < 200;
        }
        if ((*(longlong *)(lVar9 + 0xf40) != 0) &&
           (lVar9 = *(longlong *)(&DAT_00006850 + *(longlong *)(lVar9 + 0xf40)), lVar9 != 0)) {
          uVar11 = FUN_14075fe08(lVar9,0x40000);
          cVar4 = FUN_14075fa88(lVar9 + 0x42b8,uVar11);
          if (*(char *)(pfVar3 + 0x12) == cVar4) {
            if (pfVar3[0x13] != 0.0) goto LAB_140b45b9a;
            fVar6 = 1.4013e-45;
          }
          else {
            fVar6 = (float)((int)pfVar3[0x13] + 1);
          }
          *(char *)(pfVar3 + 0x12) = cVar4;
          pfVar3[0x13] = fVar6;
        }
      }
    }
  }
LAB_140b45b9a:
  ReleaseSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x18));
LAB_140b45ba3:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b45d22 FUN_140b45d22 body=106 status=ok
// SIG undefined FUN_140b45d22(void)

void FUN_140b45d22(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      lVar2 = FUN_140ade7fe();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1409ee6e4(lVar1,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b45d9a FUN_140b45d9a body=311 status=ok
// SIG undefined FUN_140b45d9a(void)

void FUN_140b45d9a(undefined1 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_50 = DAT_14cb86ba8;
    local_58 = DAT_14cb86ba0;
    FUN_1448075d0(local_48);
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar3 = &DAT_14c9a1288;
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
        plVar5 = plVar3 + 8;
        if ((longlong *)plVar3[9] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar3[9];
        }
        iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_48[0]) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_48[0]) {
              if ((((lVar1 != 0) &&
                   (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
              goto LAB_140b45e52;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar4 = &DAT_14c9a1308;
LAB_140b45e52:
    if ((byte *)*puVar4 == (byte *)0x0) {
      bVar7 = false;
    }
    else {
      bVar7 = (*(byte *)*puVar4 & 3) != 0;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar7) {
      *param_1 = 0;
      FUN_140c13792(param_1 + 8,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b45ed2 FUN_140b45ed2 body=92 status=ok
// SIG undefined FUN_140b45ed2(void)

void FUN_140b45ed2(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  size_t _Size;
  
  lVar1 = *param_1;
  _Dst = (void *)param_1[1];
  _Size = param_2 - ((longlong)_Dst - lVar1);
  if (param_2 < (ulonglong)((longlong)_Dst - lVar1)) {
    param_1[1] = lVar1 + param_2;
  }
  else if (_Size != 0) {
    if ((ulonglong)(param_1[2] - lVar1) < param_2) {
      FUN_140b45f2e(param_1);
      return;
    }
    memset(_Dst,0,_Size);
    param_1[1] = (longlong)_Dst + _Size;
  }
  return;
}



// FUNCTION 140b45f2e FUN_140b45f2e body=199 status=ok
// SIG undefined FUN_140b45f2e(void)

void FUN_140b45f2e(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong unaff_RBX;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R15;
  
  if ((longlong)param_2 < 0) {
    FUN_14709756c();
  }
  else {
    unaff_R12 = *param_1;
    unaff_R15 = param_1[1];
    uVar1 = param_1[2] - unaff_R12;
    unaff_RBX = (uVar1 >> 1) + uVar1;
    if (unaff_RBX <= param_2) {
      unaff_RBX = param_2;
    }
    if ((uVar1 >> 1 ^ 0x7fffffffffffffff) < uVar1) {
      unaff_RBX = 0x7fffffffffffffff;
    }
    if (0xfff < unaff_RBX) {
      _Dst = (void *)FUN_140c1ca1d(unaff_RBX);
      goto LAB_140b45f9d;
    }
    unaff_RSI = param_2;
    unaff_RDI = param_1;
    if (unaff_RBX != 0) {
      _Dst = (void *)FUN_14001cc68(unaff_RBX);
      goto LAB_140b45f9d;
    }
  }
  _Dst = (void *)0x0;
  param_2 = unaff_RSI;
  param_1 = unaff_RDI;
LAB_140b45f9d:
  memset((void *)((longlong)_Dst + (unaff_R15 - unaff_R12)),0,param_2 - (unaff_R15 - unaff_R12));
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_140b45ff6(param_1,_Dst,param_2,unaff_RBX);
  return;
}



// FUNCTION 140b45ff6 FUN_140b45ff6 body=104 status=ok
// SIG undefined FUN_140b45ff6(void)

void FUN_140b45ff6(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 + param_2;
  param_1[2] = param_4 + param_2;
  return;
}



// FUNCTION 140b46060 FUN_140b46060 body=337 status=ok
// SIG undefined FUN_140b46060(void)

void FUN_140b46060(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140b460cd;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140b460cd:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 140b461c0 FUN_140b461c0 body=182 status=ok
// SIG undefined FUN_140b461c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b461c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677d0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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



// FUNCTION 140b46284 FUN_140b46284 body=40 status=ok
// SIG undefined FUN_140b46284(void)

undefined8 FUN_140b46284(undefined8 param_1,int param_2)

{
  FUN_140595c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b462ac FUN_140b462ac body=218 status=ok
// SIG undefined FUN_140b462ac(void)

void FUN_140b462ac(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  local_20 = param_1;
  if (*(int *)(param_1 + 0x16) != 0) {
    if (plVar2 == (longlong *)0x0) goto LAB_140b4630d;
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_1 + 0x17),&local_20);
    plVar2 = (longlong *)param_1[0x15];
    if (*(int *)(param_1 + 0x16) != 0) {
      if (plVar2 == (longlong *)0x0) goto LAB_140b4630d;
      (**(code **)*plVar2)(plVar2,0);
      FUN_1446efa72(param_1 + 0x15,0,0,0x10);
      *(undefined4 *)(param_1 + 0x16) = 0;
      plVar2 = (longlong *)param_1[0x15];
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140b4630d:
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b46388 FUN_140b46388 body=21 status=ok
// SIG undefined FUN_140b46388(void)

undefined8 FUN_140b46388(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140b4639e FUN_140b4639e body=26 status=ok
// SIG undefined FUN_140b4639e(void)

void FUN_140b4639e(undefined8 param_1)

{
  FUN_144a5f54e();
  FUN_144a5ecd2(param_1);
  return;
}



// FUNCTION 140b463b8 FUN_140b463b8 body=78 status=ok
// SIG undefined FUN_140b463b8(void)

void FUN_140b463b8(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403e3958();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_140704026();
      return;
    }
  }
  return;
}



// FUNCTION 140b46408 FUN_140b46408 body=212 status=ok
// SIG undefined FUN_140b46408(void)

void FUN_140b46408(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x200) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,4);
  }
  return;
}



// FUNCTION 140b464dc FUN_140b464dc body=62 status=ok
// SIG undefined FUN_140b464dc(void)

void FUN_140b464dc(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    FUN_146c9814e(param_1 + 8);
    FUN_146c98292(param_1 + 8);
  }
  FUN_140b4651a(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



// FUNCTION 140b4651a FUN_140b4651a body=68 status=ok
// SIG undefined FUN_140b4651a(void)

void FUN_140b4651a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146c983ae();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140b4656a FUN_140b4656a body=134 status=ok
// SIG undefined FUN_140b4656a(void)

void FUN_140b4656a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140b466f2(param_1,iVar1);
    }
    FUN_140b465f0((longlong)iVar1 * 400 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146de6de2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146de6e48(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b465f0 FUN_140b465f0 body=41 status=ok
// SIG undefined FUN_140b465f0(void)

void FUN_140b465f0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b4661a(param_1);
    param_1 = param_1 + 400;
  }
  return;
}



// FUNCTION 140b4661a FUN_140b4661a body=216 status=ok
// SIG undefined FUN_140b4661a(void)

void FUN_140b4661a(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  param_1[0x1a] = 0;
  *(undefined1 (*) [16])(param_1 + 0x23) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x2f) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x2c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x3b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x47) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x44) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0xffffffff;
  param_1[0x62] = 0xffffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  return;
}



// FUNCTION 140b466f2 FUN_140b466f2 body=271 status=ok
// SIG undefined FUN_140b466f2(void)

void FUN_140b466f2(longlong param_1,int param_2)

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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
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
    FUN_1446f8d3c(param_1,param_2,iVar8,400,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b46802 FUN_140b46802 body=87 status=ok
// SIG undefined FUN_140b46802(void)

void FUN_140b46802(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_140b4685a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4685a FUN_140b4685a body=1239 status=ok
// SIG undefined FUN_140b4685a(void)

void FUN_140b4685a(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((char)param_2[1] == '\x01') {
    lVar4 = *param_1;
    uVar2 = *param_2;
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140b468af:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140b468af;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0xd] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xc]);
  }
  if ((char)param_2[0x15] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x14];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140b46a70:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140b46a70;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x21] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x20];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140b46bc9:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140b46bc9;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x25] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x24]);
  }
  if ((char)param_2[0x2d] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if ((char)param_2[0x39] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
  }
  if ((char)param_2[0x41] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x40];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140b46b04:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140b46b04;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x43] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x42]);
  }
  if ((char)param_2[0x45] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
  }
  if ((char)param_2[0x47] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x46]);
  }
  if ((char)param_2[0x49] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x48]);
  }
  if ((char)param_2[0x4b] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x4a]);
  }
  if ((char)param_2[0x4d] != '\x01') {
    return;
  }
  lVar4 = *param_1;
  uVar2 = param_2[0x4c];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_140b46a0d;
  if (iVar3 == 0) {
LAB_140b469ce:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140b469ce;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_140b46a0d:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140b46d32 FUN_140b46d32 body=83 status=ok
// SIG undefined FUN_140b46d32(void)

undefined8 * FUN_140b46d32(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b47b110;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b46d86 FUN_140b46d86 body=136 status=ok
// SIG undefined FUN_140b46d86(void)

void FUN_140b46d86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    if (*(code **)*puVar3 == FUN_145715146) {
      *puVar3 = &PTR_FUN_14b478da0;
      plVar4 = (longlong *)puVar3[4];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    else {
      (**(code **)*puVar3)(puVar3,0);
    }
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b46e0e FUN_140b46e0e body=572 status=ok
// SIG undefined FUN_140b46e0e(void)

void FUN_140b46e0e(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[9];
  if ((*(char *)(lVar3 + 0xa1) == '\0') &&
     ((*(char *)(lVar3 + 0xa3) != '\0' || (*(char *)(lVar3 + 0xa4) == '\x01')))) {
    if (*(int *)(lVar3 + 0xf8) != *(int *)(lVar3 + 0x124)) {
      uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar10 = lVar3 + 0x128;
      if (*(longlong *)(lVar3 + 0x130) != 0) {
        lVar10 = *(longlong *)(lVar3 + 0x130);
      }
      iVar2 = *(int *)(lVar10 + ((longlong)(int)(uVar7 >> 0x10 ^ uVar7) &
                                (longlong)*(int *)(lVar3 + 0x138) - 1U) * 4);
      if (iVar2 != -1) {
        lVar4 = *(longlong *)(lVar3 + 0xf0);
LAB_140b46ebc:
        lVar1 = lVar4 + (longlong)iVar2 * 0x10;
        if (*(longlong **)(lVar4 + (longlong)iVar2 * 0x10) != param_1) goto code_r0x000140b46ecd;
        iVar11 = *(int *)(lVar10 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        if (iVar11 == iVar2) {
          piVar8 = (int *)(lVar10 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        }
        else {
          do {
            piVar8 = (int *)((longlong)iVar11 * 0x10 + lVar4 + 8);
            iVar11 = *piVar8;
          } while (iVar11 != iVar2);
        }
        *piVar8 = *(int *)(lVar1 + 8);
        FUN_140b4704c();
      }
    }
LAB_140b46ef5:
    *(undefined1 *)(lVar3 + 0x160) = 1;
    goto LAB_140b46efd;
  }
  lVar10 = *(longlong *)(lVar3 + 0x70);
  if (lVar10 == 0) {
    uVar9 = FUN_140067708();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar3 + 0x70) = lVar10;
  }
  if (*(longlong *)(lVar3 + 0x78) == 0) {
    if ((lVar10 != 0) && (*(longlong *)(lVar3 + 0x68) != 0)) {
      plVar5 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
        *(undefined8 *)(lVar3 + 0x78) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar3 + 0x68));
        *(longlong *)(lVar3 + 0x78) = lVar10;
        if (lVar10 != 0) goto LAB_140b46fd3;
      }
    }
    FUN_14072d42a(param_1,0);
  }
  else {
LAB_140b46fd3:
    local_30 = (longlong *)*param_1;
    if (((local_30 == (longlong *)0x0) || (param_1[1] == -1)) || (*local_30 != param_1[1])) {
      local_30 = (longlong *)0x0;
    }
    else {
      *(int *)(local_30 + 0x21) = (int)local_30[0x21] + 1;
      local_58 = 0;
      FUN_14071ab80(local_30,&local_48,param_1[9] + 0x68,0);
      local_48 = 0;
      local_40 = 0xffffffffffffffff;
    }
    FUN_144a61ac8(&local_30);
  }
LAB_140b46efd:
  *(undefined1 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140b46ecd:
  iVar2 = *(int *)(lVar1 + 8);
  if (iVar2 == -1) goto LAB_140b46ef5;
  goto LAB_140b46ebc;
}



// FUNCTION 140b4704c FUN_140b4704c body=114 status=ok
// SIG undefined FUN_140b4704c(void)

void FUN_140b4704c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 140b470be FUN_140b470be body=21 status=ok
// SIG undefined FUN_140b470be(void)

undefined8 FUN_140b470be(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140b470da FUN_140b470da body=288 status=ok
// SIG undefined FUN_140b470da(void)

void FUN_140b470da(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1458359cc(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 0xc + lVar6);
      if (((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + 8 + lVar6), -1 < (int)uVar3)) &&
           ((int)uVar3 < DAT_14c9647dc)) &&
          ((plVar5 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar2)))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
          ((*plVar5 != 0 && (*(longlong *)(lVar4 + lVar6) != 0)))))) {
        FUN_14480f766(*plVar5 + 0x410);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_145774eb6(param_1 + 0x90);
  }
  lVar4 = FUN_140b15fd0(param_1);
  if (lVar4 == 0) {
    return;
  }
  FUN_140457ffc(lVar4 + 0x2d0,param_1);
  FUN_140457ffc(lVar4 + 0x2b8,param_1);
  return;
}



// FUNCTION 140b47202 FUN_140b47202 body=52 status=ok
// SIG undefined FUN_140b47202(void)

void FUN_140b47202(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c50cd4();
  if (lVar1 == 0) {
    return;
  }
  FUN_14107e4c6(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),
                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60),1);
  return;
}



// FUNCTION 140b47236 FUN_140b47236 body=366 status=ok
// SIG undefined FUN_140b47236(void)

void FUN_140b47236(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 ***local_50;
  undefined8 ***local_48;
  undefined8 local_40;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar2 = FUN_140b473a6();
    uVar2 = FUN_14477b664(uVar2);
    local_30 = 0x18;
    local_48 = (undefined8 ****)0x0;
    uVar2 = FUN_14477b664(uVar2);
    local_40 = FUN_14477b664(uVar2);
  }
  else {
    uVar2 = FUN_140b473a6();
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_2 + 8);
    }
    FUN_1447325ac(puVar3,&local_50,1);
    uVar2 = FUN_14477b664(uVar2);
    local_30 = 0x18;
    local_48 = local_50;
    uVar2 = FUN_14477b664(uVar2);
    local_40 = FUN_14477b664(uVar2);
  }
  local_38 = 0;
  local_28 = 0x1d;
  local_58 = FUN_140b473e0();
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_58);
  }
  FUN_14095c1ce(param_1,&local_58,&local_48,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar4 = &local_48;
    if (0x18 < local_30) {
      ppppuVar4 = (undefined8 ****)local_48;
    }
    (*pcVar1)(ppppuVar4);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b473a6 FUN_140b473a6 body=57 status=ok
// SIG undefined FUN_140b473a6(void)

void FUN_140b473a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56a28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56a28 = FUN_140002ddd(FUN_1464b933e,uVar1,L"DamageSourceDef");
  }
  return;
}



// FUNCTION 140b473e0 FUN_140b473e0 body=228 status=ok
// SIG undefined FUN_140b473e0(void)

longlong FUN_140b473e0(void)

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
  if (DAT_14cb676f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a83864;
    local_38 = &LAB_14873c07d;
    local_40 = &LAB_145b043fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_DmgSourceDef",&DAT_14cb676f0,
                  FUN_146516c76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb676f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b474c6 FUN_140b474c6 body=620 status=ok
// SIG undefined FUN_140b474c6(void)

void FUN_140b474c6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBP;
  uint uVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  byte local_44;
  undefined4 local_40;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) goto LAB_140b475f4;
  plVar1 = (longlong *)(param_1 + -0xda8);
  (**(code **)(*param_2 + 0x38))(param_2,&local_40);
  cVar5 = *(char *)(param_3 + 0x11);
  if (local_3c != 1) {
    uVar2 = *(undefined1 *)(param_3 + 0x10);
    uVar8 = (**(code **)(*param_2 + 8))(param_2);
    FUN_145774ee6(plVar1,uVar8,CONCAT71((int7)((ulonglong)param_1 >> 8),uVar2) & 0xffffffff,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar5) & 0xffffffff);
    goto LAB_140b475f4;
  }
  uVar9 = 0x40;
  if (cVar5 != '\0') {
    local_44 = local_3c;
    local_48 = local_40;
    bVar6 = FUN_145774f4c(plVar1,&local_48,0x40);
    uVar9 = (uint)bVar6 << 5 | 0x40;
  }
  if ((local_3c & 1) != 0) {
    local_50[0] = local_40;
  }
  cVar5 = FUN_140b47776(plVar1,local_50,uVar9);
  if (cVar5 == '\0') {
    (**(code **)(*param_2 + 0x88))(param_2,param_3);
    goto LAB_140b475f4;
  }
  lVar7 = *(longlong *)(param_1 + -0xa10);
  if (lVar7 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464f5fc4;
      local_78 = &LAB_148c3dd26;
      local_80 = &LAB_1459673ba;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar7 = *(longlong *)(param_1 + -0xa10);
      if (lVar7 == 0) goto LAB_140b475b6;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30 && (*(longlong *)(lVar7 + 0xf78) != 0)))) {
      FUN_140b47734(*(longlong *)(lVar7 + 0xf78),&local_40);
    }
  }
LAB_140b475b6:
  pcVar4 = local_58;
  local_58._6_2_ = SUB82(pcVar4,6);
  local_58._0_6_ =
       CONCAT15(*(char *)(param_3 + 0x10) == '\x01',
                CONCAT14(*(undefined1 *)(param_3 + 0x11),local_40));
  uVar8 = FUN_14477b072(plVar1,DAT_14cbadd48);
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar8,&local_58);
LAB_140b475f4:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b47734 FUN_140b47734 body=66 status=ok
// SIG undefined FUN_140b47734(void)

void FUN_140b47734(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14007a5e6(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b4776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xf8))(plVar2,param_2,*(code **)(*plVar2 + 0xf8));
      return;
    }
  }
  return;
}



// FUNCTION 140b47776 FUN_140b47776 body=312 status=ok
// SIG undefined FUN_140b47776(void)

undefined4 FUN_140b47776(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_1447210f0();
    plVar3 = (longlong *)FUN_14007a5e6();
    if (plVar3 != (longlong *)0x0) {
      local_a8 = 0;
      local_a0 = 0x8000000000;
      uStack_98 = 0xffffffff;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      local_48 = 1;
      local_44 = 0;
      uStack_3c = 0;
      cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,*param_2);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*(longlong *)(param_1 + 0xe38) + 0x20))
                          (param_1 + 0xe38,&local_108,param_3);
        FUN_140368b56(&local_108);
        goto LAB_140b4786e;
      }
      FUN_140368b56(&local_108);
    }
  }
  uVar2 = 0;
LAB_140b4786e:
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b478b0 FUN_140b478b0 body=318 status=ok
// SIG undefined FUN_140b478b0(void)

uint FUN_140b478b0(longlong param_1,longlong *param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14011c349();
  local_30 = *(undefined8 *)(lVar2 + 0x48);
  lVar3 = FUN_140254f32(param_1 + -0xe38);
  lVar2 = *(longlong *)(param_1 + 0x110);
  cVar1 = FUN_140d0d096(*param_2,lVar2);
  if (cVar1 == '\0') goto LAB_140b479e8;
  if ((lVar3 == 0) || ((*(byte *)(*param_2 + 0x368) & 4) == 0)) {
LAB_140b4791f:
    uVar4 = 1;
    goto LAB_140b47921;
  }
  local_30 = CONCAT44(local_30._4_4_,0xffffffff);
  cVar1 = FUN_1412e0532(lVar3,param_2,&local_30,0);
  uVar4 = 1;
  if (cVar1 != '\0') goto LAB_140b47921;
  FUN_1441822da(&local_30,param_2,1);
  if (*(char *)(lVar3 + 0x147) == '\0') {
    if (lVar2 != 0 && (param_3 & 0x20) != 0) {
      cVar1 = FUN_148cce8d6(lVar2,&local_30);
      if (cVar1 != '\0') goto LAB_140b4791f;
    }
LAB_140b479e8:
    uVar4 = 0;
  }
  else {
    if (lVar2 != 0) {
      cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3be8) + 0x38))(lVar2 + 0x3be8,0xffffffff,param_2)
      ;
      if (cVar1 == '\0') goto LAB_140b479e8;
      cVar1 = FUN_140ae5a58(lVar2,&local_30);
      if (cVar1 != '\0') goto LAB_140b4791f;
    }
    uVar4 = (param_3 & 0x20) >> 5;
  }
LAB_140b47921:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b479f0 FUN_140b479f0 body=37 status=ok
// SIG undefined FUN_140b479f0(void)

undefined8 FUN_140b479f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140b47a16();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 8) == '\0')) {
    param_3 = *(undefined8 *)(lVar1 + 0x28);
  }
  return param_3;
}



// FUNCTION 140b47a16 FUN_140b47a16 body=179 status=ok
// SIG undefined FUN_140b47a16(void)

longlong FUN_140b47a16(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  FUN_14087e154(param_1,1);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          lVar2 = plVar1[1];
          if (lVar2 == 0) {
            return 0;
          }
          return lVar2;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 140b47ae0 FUN_140b47ae0 body=50 status=ok
// SIG undefined FUN_140b47ae0(void)

bool FUN_140b47ae0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x9c) & 0x20) == 0) {
    cVar1 = switchD_143c3d4dc::caseD_45();
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_1 + 0xb9) != '\x02';
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



// FUNCTION 140b47b20 FUN_140b47b20 body=141 status=ok
// SIG undefined FUN_140b47b20(void)

undefined8 * FUN_140b47b20(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2401f0;
  FUN_140b47bad(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b47c46(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b47bad FUN_140b47bad body=153 status=ok
// SIG undefined FUN_140b47bad(void)

void FUN_140b47bad(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b240080;
    FUN_140b47c46(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_1[0x14];
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
    *param_1 = &PTR_FUN_14b23dd30;
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 140b47c46 FUN_140b47c46 body=73 status=ok
// SIG undefined FUN_140b47c46(void)

void FUN_140b47c46(longlong param_1,int param_2)

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



// FUNCTION 140b47c90 FUN_140b47c90 body=174 status=ok
// SIG undefined FUN_140b47c90(void)

undefined8 * FUN_140b47c90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_140b47d1c;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x68);
    bVar9 = true;
    if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0xe8) != 0)) {
      lVar5 = *(longlong *)(lVar4 + 0xe0);
      lVar8 = 0;
      do {
        if ((*(char *)(lVar5 + 0x19 + lVar8) != '\x01') ||
           (*(char *)(lVar5 + 0x1a + lVar8) == '\x01')) {
          FUN_140b47d3e(param_2,lVar5 + lVar8 + 8);
          bVar9 = false;
          break;
        }
        lVar8 = lVar8 + 0x30;
      } while ((longlong)*(int *)(lVar4 + 0xe8) * 0x30 != lVar8);
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_140b47d1c:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140b47d3e FUN_140b47d3e body=166 status=ok
// SIG undefined FUN_140b47d3e(void)

undefined8 * FUN_140b47d3e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_48,&local_58);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x4f0) == 0)) ||
     ((longlong)*(int *)(lVar1 + 0x4f8) == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)
              (*(longlong *)(*(longlong *)(lVar1 + 0x4f0) + 0x50) +
              (longlong)*(int *)(lVar1 + 0x4f8) * 8);
  }
  *param_1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b47de6 FUN_140b47de6 body=342 status=ok
// SIG undefined FUN_140b47de6(void)

undefined4 * FUN_140b47de6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14043cde0(param_1,local_48);
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
  cVar2 = FUN_14043cd48(param_1,uVar3,local_40);
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
      FUN_140b47f3e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b47f3e FUN_140b47f3e body=667 status=ok
// SIG undefined FUN_140b47f3e(void)

void FUN_140b47f3e(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140b47fb1;
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
LAB_140b47fb1:
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



// FUNCTION 140b481d9 FUN_140b481d9 body=49 status=ok
// SIG undefined FUN_140b481d9(void)

void FUN_140b481d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4820a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b696b50;
  FUN_140b484ce(puVar1 + 0x88);
  return;
}



// FUNCTION 140b4820a FUN_140b4820a body=707 status=ok
// SIG undefined FUN_140b4820a(void)

undefined8 * FUN_140b4820a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a7ae030;
  param_1[5] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x562906305629063;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x55) = 0xffff;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x3ff00000;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0x3ff0000000000000;
  param_1[0x79] = 0x3ff0000000000000;
  param_1[0x7a] = 0x3ff0000000000000;
  param_1[0x7b] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 6) = 3;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(byte *)((longlong)param_1 + 0x31) = (*(byte *)((longlong)param_1 + 0x31) & 0x82) + 1;
  *(byte *)((longlong)param_1 + 0x33) = *(byte *)((longlong)param_1 + 0x33) | 2;
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return param_1;
}



// FUNCTION 140b484ce FUN_140b484ce body=894 status=ok
// SIG undefined FUN_140b484ce(void)

undefined8 * FUN_140b484ce(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14b6a0c50;
  param_1[0x116] = 0;
  *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x8b9) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined1 *)(param_1 + 0x11b) = 0;
  param_1[0x11c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x11d) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x90c) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0x800000000;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x115] = &PTR_FUN_14a427a60;
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x13d) = 0;
  lVar3 = 0x9f0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar3 + 8) = 0;
    pbVar1 = (byte *)((longlong)param_1 + lVar3 + 0x10);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x11) = 0;
    *(undefined ***)((longlong)param_1 + lVar3) = &PTR_FUN_14a427bc0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x18) = 0x3f80000000000000;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x20) = 0x3dcccccd;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x24) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x28);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x38) = 0;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0x40) = 0x300;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x42) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x50) = 0;
    pbVar1 = (byte *)((longlong)param_1 + lVar3 + 0x58);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x59) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x60) = 0xfffffffe;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x68) = 0xfffffffe;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x84) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x80) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x70);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x88) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x90) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x98) = 0x100;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0xa0) = 0;
    *(undefined1 **)((longlong)param_1 + lVar3 + 0xa8) = &DAT_3f8000003f800000;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0xb0) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0xb2) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0xb4);
    *puVar2 = 0x3f80000000000000;
    puVar2[1] = 0x3f80000000000000;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0xc4);
    *puVar2 = 0x3f800000;
    puVar2[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0xd4) = 0x4120000041200000;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0xdc) = 0;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0xe0) = 1;
    *(undefined ***)((longlong)param_1 + lVar3 + 0x48) = &PTR_FUN_14a42cfe0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0xf0) = 0;
    pbVar1 = (byte *)((longlong)param_1 + lVar3 + 0xf8);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0xf9) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x100) = 0xfffffffe;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x108) = 0xfffffffe;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x124) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x120) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x110);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x138);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x128);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x148) = 0xffffffff;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x150);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined ***)((longlong)param_1 + lVar3 + 0xe8) = &PTR_FUN_14a42de10;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0x160) = 0x100;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x162) = 0;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0x16a) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x16c) = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0x170) = 0x101;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x174) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x178) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x188) = 0;
    pbVar1 = (byte *)((longlong)param_1 + lVar3 + 400);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x191) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x198) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x1a0) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar3 + 0x1a8) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x1c0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + 0x1b0);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined ***)((longlong)param_1 + lVar3 + 0x180) = &PTR_FUN_14a4225a0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x1d0) = 1;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x1d8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x1e0) = 0x101010000000000;
    lVar3 = lVar3 + 0x1e8;
  } while (lVar3 != 0x1378);
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0x400000000;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  *(undefined4 *)(param_1 + 0x273) = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0x400000000;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0x400000000;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d8] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2d9) = 0xffff;
  return param_1;
}



// FUNCTION 140b4884c FUN_140b4884c body=1428 status=ok
// SIG undefined FUN_140b4884c(void)

undefined8 * FUN_140b4884c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14a7b0ba0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ff00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3ff00000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3ff00000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3ff00000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  lVar5 = 0x238;
  do {
    *(undefined8 *)((longlong)param_1 + lVar5 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar5 + -0x20) = 0;
    puVar3 = (undefined8 *)((longlong)param_1 + lVar5 + -0x48);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar5 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar5 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar5 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar5) = 0;
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x2d8);
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x562906305629063;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  lVar5 = 0x4b8;
  do {
    *(undefined8 *)((longlong)param_1 + lVar5 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar5 + -0x20) = 0;
    puVar3 = (undefined8 *)((longlong)param_1 + lVar5 + -0x48);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar5 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar5 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar5 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar5) = 0;
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x5a8);
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb9) = 0xffff;
  param_1[0xba] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbb) = 0xffff;
  param_1[0xbc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[0xbe] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbf) = 0xffff;
  param_1[0xc0] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x621) = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0x3ff00000;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x3ff00000;
  param_1[0xd2] = 0x3ff0000000000000;
  param_1[0xd3] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x178);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a7be2e0;
  plVar4[6] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x80;
  *(undefined1 *)(plVar4 + 0x1b) = 0;
  plVar4[0x26] = 0;
  *(undefined4 *)(plVar4 + 0x27) = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0;
  *(undefined1 *)(plVar4 + 0x1e) = 0;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x105) = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  memset(plVar4 + 8,0,0x91);
  *(undefined8 *)((longlong)plVar4 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar4 + 0x144) = 0;
  plVar4[0x2a] = 0;
  *(undefined4 *)(plVar4 + 0x2b) = 0;
  plVar4[0x2c] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x2e] = 2;
  *(undefined4 *)(plVar4 + 7) = 0;
  param_1[0xd4] = plVar4 + 2;
  param_1[0xd5] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  param_1[0xd6] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(byte *)((longlong)param_1 + 0x7e1) = *(byte *)((longlong)param_1 + 0x7e1) & 0xe0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  return param_1;
}



// FUNCTION 140b48de0 FUN_140b48de0 body=97 status=ok
// SIG undefined FUN_140b48de0(void)

void FUN_140b48de0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1446e0b6e();
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) != 0) {
        FUN_1400337aa();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1414bc010(*(undefined8 *)(param_1 + 0xd8));
  uVar3 = FUN_140b48e42(param_1);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  return;
}



// FUNCTION 140b48e42 FUN_140b48e42 body=765 status=ok
// SIG undefined FUN_140b48e42(void)

undefined8 * FUN_140b48e42(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  *puVar8 = *(undefined8 *)(param_1 + 0x18);
  puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  FUN_145775214(puVar9 + 2,0);
  puVar8[5] = puVar9;
  FUN_140b4aefc(param_1,puVar8 + 3);
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar13 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  if (*(int *)((longlong)puVar8 + 0x14) < (int)uVar1) {
    FUN_145775252(puVar8 + 1,uVar1);
  }
  if (uVar13 != 0) {
    uVar16 = 0;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar16 * 8);
      if ((lVar12 != 0) &&
         (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar16 * 8), lVar15 != 0)) {
        lVar10 = FUN_1457751a0(puVar8 + 1);
        iVar2 = *(int *)(*(longlong *)(lVar12 + 0x28) + 0x30);
        iVar3 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(lVar10,*(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x28),iVar3);
        lVar12 = *(longlong *)(lVar12 + 0x28);
        *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)(lVar12 + 0x40);
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar12 + 0x38);
        *(longlong *)(lVar10 + 0x20) = lVar15;
        uVar11 = FUN_140b49140(param_1,uVar16 & 0xffffffff,puVar8[5]);
        *(undefined8 *)(lVar10 + 0x28) = uVar11;
        *(undefined1 *)(lVar10 + 100) = 1;
        iVar2 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar2 != 0) {
          lVar12 = *(longlong *)(param_1 + 0x48);
          lVar15 = 0;
          do {
            if (((uVar16 == *(uint *)(lVar12 + lVar15)) &&
                (plVar4 = *(longlong **)
                           (*(longlong *)(param_1 + 0x38) +
                           (longlong)*(int *)(lVar12 + 8 + lVar15) * 8), plVar4 != (longlong *)0x0))
               && (cVar5 = (**(code **)(*plVar4 + 0x2a8))(), cVar5 != '\0')) {
              *(undefined4 *)(lVar10 + 0x60) = *(undefined4 *)(lVar12 + 8 + lVar15);
              break;
            }
            lVar15 = lVar15 + 0x38;
          } while ((longlong)iVar2 * 0x38 - lVar15 != 0);
        }
        iVar2 = *(int *)(lVar10 + 0x60);
        if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x70))) &&
           ((longlong)*(int *)(param_1 + 0x50) != 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 4);
          lVar12 = (longlong)*(int *)(param_1 + 0x50) * 0x38;
          piVar14 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
          do {
            if (uVar16 == (uint)piVar14[-2]) {
              plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar14 * 8);
              if (plVar4 != (longlong *)0x0) {
                iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + (longlong)*piVar14 * 4);
                iVar7 = FUN_1449e3bb0(lVar10 + 0x30,piVar14);
                if (iVar7 == *(int *)(lVar10 + 0x58)) {
                  *(uint *)(lVar10 + 0x58) = iVar7 + 1U;
                  if (*(uint *)(lVar10 + 0x5c) < iVar7 + 1U) {
                    FUN_1401c3474((longlong *)(lVar10 + 0x50),iVar7);
                  }
                  *(bool *)(*(longlong *)(lVar10 + 0x50) + (longlong)iVar7) = iVar3 == iVar2;
                }
                if (iVar3 == iVar2) {
                  bVar6 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
                  *(byte *)(lVar10 + 100) = *(byte *)(lVar10 + 100) & bVar6;
                }
                if (((char)piVar14[2] == '\0') &&
                   (cVar5 = (**(code **)(*plVar4 + 0x300))(plVar4), cVar5 != '\0')) {
                  FUN_1449e3bb0(lVar10 + 0x40,piVar14);
                }
              }
            }
            piVar14 = piVar14 + 0xe;
            lVar12 = lVar12 + -0x38;
          } while (lVar12 != 0);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar13);
  }
  return puVar8;
}



// FUNCTION 140b49140 FUN_140b49140 body=790 status=ok
// SIG undefined FUN_140b49140(void)

undefined8 FUN_140b49140(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined4 local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)*(int *)(param_1 + 0x50) == 0) {
    local_88[0] = 0;
    local_88[1] = 0;
    local_78 = 0;
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x50) * 0x38;
    lVar10 = *(longlong *)(param_1 + 0x48) + 8;
    do {
      if (*(int *)(lVar10 + -8) == param_2) {
        FUN_1449e3bb0(&local_68,lVar10);
      }
      lVar10 = lVar10 + 0x38;
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
    local_a0 = local_68;
    local_b0 = (longlong)(int)uStack_60;
    local_88[0] = 0;
    local_88[1] = 0;
    local_78 = 0;
    if (local_b0 != 0) {
      plVar9 = param_3 + 2;
      local_b0 = local_b0 << 2;
      lVar8 = 0;
      local_a8 = param_1;
      do {
        iVar4 = *(int *)(local_a0 + lVar8);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 8);
        if (plVar1 != (longlong *)0x0) {
          iVar3 = FUN_140b49458(plVar9);
          uVar5 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
          FUN_140002266(&local_98,L"DI%d_%s",iVar4,uVar5);
          iVar4 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar4 = iVar3;
          }
          lVar10 = (ulonglong)(uint)(iVar3 % 0x20) * 0x10;
          plVar7 = (longlong *)(*(longlong *)(*plVar9 + (longlong)(iVar4 >> 5) * 8) + lVar10);
          if (plVar7 != &local_98) {
            if (*plVar7 != 0) {
              FUN_1400020a8();
            }
            *plVar7 = local_98;
            local_98 = 0;
            *(undefined4 *)(plVar7 + 1) = (undefined4)local_90;
            *(undefined4 *)((longlong)plVar7 + 0xc) = local_90._4_4_;
            local_90 = 0;
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          lVar2 = *(longlong *)(*plVar9 + (longlong)(iVar4 >> 5) * 8);
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(lVar2 + 8 + lVar10) != 0) {
            puVar6 = *(undefined2 **)(lVar2 + lVar10);
          }
          (**(code **)(*plVar1 + 0x2d8))(plVar1,puVar6,local_88,param_3);
          param_1 = local_a8;
        }
        lVar8 = lVar8 + 4;
      } while (local_b0 != lVar8);
    }
  }
  iVar3 = FUN_140b49458(param_3 + 2);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_50,&local_98);
  iVar4 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  lVar8 = (ulonglong)(uint)(iVar3 % 0x20) * 0x10;
  plVar9 = (longlong *)(*(longlong *)(param_3[2] + (longlong)(iVar4 >> 5) * 8) + lVar8);
  if (plVar9 != &local_98) {
    if (*plVar9 != 0) {
      FUN_1400020a8();
    }
    *plVar9 = local_98;
    local_98 = 0;
    *(undefined4 *)(plVar9 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)plVar9 + 0xc) = local_90._4_4_;
    local_90 = 0;
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar10 = *(longlong *)(param_3[2] + (longlong)(iVar4 >> 5) * 8);
  if (*(int *)(lVar10 + 8 + lVar8) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(lVar10 + lVar8);
  }
  uVar5 = FUN_140b494da(local_88,0,puVar6);
  iVar4 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
    FUN_1457752be(param_3,iVar4);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar4 * 8) = uVar5;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b49458 FUN_140b49458 body=130 status=ok
// SIG undefined FUN_140b49458(void)

int FUN_140b49458(longlong *param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_1[2];
  iVar2 = iVar1 + 0x3f;
  if (-1 < iVar1 + 0x20) {
    iVar2 = iVar1 + 0x20;
  }
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar3 = (iVar2 >> 5) - (int)param_1[1];
  if (iVar3 != 0 && (int)param_1[1] <= iVar2 >> 5) {
    do {
      _Dst = (void *)FUN_14001cc68(0x200);
      memset(_Dst,0,0x200);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}



// FUNCTION 140b494da FUN_140b494da body=136 status=ok
// SIG undefined FUN_140b494da(void)

undefined8 FUN_140b494da(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_14001cc68(0x80,0x10);
  FUN_140b49562(uVar2,param_2,1,param_3,param_3,0,0,
                ".\\Runtime/RenderCore/Private/ShaderParameterMetadataBuilder.cpp",0xbd,
                iVar1 + 0xfU & 0xfffffff0,param_1,0,0,0);
  return uVar2;
}



// FUNCTION 140b49562 FUN_140b49562 body=482 status=ok
// SIG undefined FUN_140b49562(void)

undefined8 *
FUN_140b49562(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 *param_11,char param_12,
             undefined8 param_13,undefined1 param_14)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a395230;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_7;
  FUN_1446f470e(&local_60,param_6,1);
  local_78 = param_1 + 5;
  FUN_14099931e(param_1 + 5,&local_60);
  param_1[6] = param_8;
  *(undefined4 *)(param_1 + 7) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_10;
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x41) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x42) = param_14;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_11 + 1);
  _Src = (void *)*param_11;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_140b497e4(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 0x30);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1402eeb06();
  FUN_140b49746();
  if (*(char *)(param_1 + 8) == '\x01' && param_12 == '\0') {
    if (DAT_14ca9edd0 != (undefined8 *)0x0) {
      DAT_14ca9edd0[1] = param_1 + 0xc;
    }
    param_1[0xc] = DAT_14ca9edd0;
    param_1[0xd] = &DAT_14ca9edd0;
    DAT_14ca9edd0 = param_1 + 0xc;
    FUN_1446f470e(local_68,param_1[2],1);
    FUN_140b49746();
    local_58 = &local_70;
    local_60 = local_78;
    local_70 = param_1;
    FUN_140b4a98a(&DAT_14ca9edd8,local_4c,&local_60,0);
  }
  else {
    FUN_140b498ce(param_1,param_13);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b49746 FUN_140b49746 body=157 status=ok
// SIG undefined FUN_140b49746(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b49746(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9ee28) {
    FUN_144b3d300(&DAT_14ca9ee28);
    if (DAT_14ca9ee28 == -1) {
      DAT_14ca9edf8 = 0;
      _DAT_14ca9ee00 = 0;
      DAT_14ca9edd8 = 0;
      _DAT_14ca9ede0 = 0;
      _DAT_14ca9ee04 = 0xffffffff00000080;
      DAT_14ca9ee0c = 0;
      DAT_14ca9ee18 = 0;
      DAT_14ca9ee20 = 0;
      atexit(FUN_1432348d0);
      _Init_thread_footer(&DAT_14ca9ee28);
    }
  }
  return &DAT_14ca9edd8;
}



// FUNCTION 140b497e4 FUN_140b497e4 body=233 status=ok
// SIG undefined FUN_140b497e4(void)

void FUN_140b497e4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b498ce FUN_140b498ce body=4283 status=ok
// SIG undefined FUN_140b498ce(void)

void FUN_140b498ce(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  DWORD DVar6;
  undefined1 uVar7;
  uint uVar8;
  DWORD dwTlsIndex;
  DWORD DVar9;
  ulonglong *puVar10;
  LPVOID lpTlsValue;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong *puVar21;
  undefined *puVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  uint uVar35;
  bool bVar36;
  longlong local_4e8;
  undefined1 local_4b8 [4];
  int local_4b4;
  ulonglong *local_4b0;
  ulonglong *local_4a8;
  ulonglong *local_4a0;
  ulonglong local_498;
  ulonglong *local_490;
  longlong local_488;
  longlong local_480;
  longlong local_478;
  ulonglong *local_470;
  longlong local_468;
  longlong local_460;
  ulonglong *local_458;
  ulonglong *local_450;
  undefined4 local_448 [2];
  longlong local_440;
  undefined8 uStack_438;
  undefined8 *local_430;
  undefined8 local_428;
  longlong local_420;
  char local_418;
  undefined8 local_410;
  longlong local_408;
  ulonglong local_400 [2];
  ulonglong local_3f0 [2];
  ulonglong local_3e0 [2];
  ulonglong local_3d0 [2];
  ulonglong local_3c0 [2];
  ulonglong local_3b0 [2];
  ulonglong local_3a0 [4];
  undefined **local_380 [11];
  longlong *local_328;
  longlong local_308;
  undefined8 local_2f0;
  undefined8 local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_4b8;
  FUN_141790820(local_400,*(undefined8 *)(param_1 + 8));
  local_4b0 = param_2;
  if (param_2 == (ulonglong *)0x0) {
    local_4b0 = local_400;
  }
  *(undefined4 *)((longlong)local_4b0 + 0x74) = *(undefined4 *)(param_1 + 0x3c);
  bVar15 = *(byte *)(param_1 + 0x42);
  if ((bVar15 & 2) != 0) {
    puVar10 = param_2;
    if (param_2 == (ulonglong *)0x0) {
      puVar10 = local_400;
    }
    *(byte *)((longlong)puVar10 + 0x7c) = *(byte *)((longlong)puVar10 + 0x7c) | 8;
    bVar15 = *(byte *)(param_1 + 0x42);
  }
  if ((bVar15 & 3) != 0) {
    puVar10 = param_2;
    if (param_2 == (ulonglong *)0x0) {
      puVar10 = local_400;
    }
    *(byte *)((longlong)puVar10 + 0x7c) = *(byte *)((longlong)puVar10 + 0x7c) | 1;
    bVar15 = *(byte *)(param_1 + 0x42);
  }
  if ((bVar15 & 4) != 0) {
    puVar10 = param_2;
    if (param_2 == (ulonglong *)0x0) {
      puVar10 = local_400;
    }
    *(byte *)((longlong)puVar10 + 0x7c) = *(byte *)((longlong)puVar10 + 0x7c) | 2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1411d089c();
    FUN_1446f470e(&local_408,*(undefined8 *)(param_1 + 0x20),1);
    uVar7 = 0xff;
    if (0 < (longlong)DAT_14ca9ed68) {
      lVar20 = 0;
      do {
        if (*(longlong *)(DAT_14ca9ed60 + lVar20 * 8) == local_408) {
          uVar7 = (undefined1)lVar20;
          break;
        }
        lVar20 = lVar20 + 1;
      } while (DAT_14ca9ed68 != lVar20);
    }
    puVar10 = param_2;
    if (param_2 == (ulonglong *)0x0) {
      puVar10 = local_400;
    }
    *(undefined1 *)((longlong)puVar10 + 0x7a) = uVar7;
    *(undefined1 *)((longlong)puVar10 + 0x7b) = *(undefined1 *)(param_1 + 0x41);
  }
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar9 = 0xffffffff;
    LOCK();
    bVar36 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar36) {
      DVar9 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar36) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar9;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(local_380);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_430 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_428 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_420 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_418 = '\0';
  local_410 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_430;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_440 = 0;
  uStack_438 = 0;
  iVar19 = *(int *)(param_1 + 0x58);
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar19);
  }
  if ((iVar19 != 0) && (FUN_141790a72(&local_440), 0 < *(int *)(param_1 + 0x58))) {
    lVar20 = 0;
    lVar34 = 0;
    do {
      uVar11 = uStack_438;
      lVar31 = *(longlong *)(param_1 + 0x50);
      lVar26 = (longlong)(int)uStack_438;
      uVar8 = (int)uStack_438 + 1;
      uStack_438 = CONCAT44(uStack_438._4_4_,uVar8);
      if (uStack_438._4_4_ < uVar8) {
        FUN_140490492(&local_440,uVar11 & 0xffffffff);
      }
      *(longlong *)(local_440 + lVar26 * 0x18) = param_1;
      *(longlong *)(local_440 + 8 + lVar26 * 0x18) = lVar31 + lVar20;
      *(undefined4 *)(local_440 + 0x10 + lVar26 * 0x18) = 0;
      lVar34 = lVar34 + 1;
      lVar20 = lVar20 + 0x30;
    } while (lVar34 < *(int *)(param_1 + 0x58));
  }
  if (0 < (int)uStack_438) {
    puVar10 = param_2;
    if (param_2 == (ulonglong *)0x0) {
      puVar10 = local_400;
    }
    puVar24 = puVar10 + 2;
    puVar3 = puVar10 + 4;
    local_470 = puVar10 + 6;
    local_4a0 = puVar10 + 0xc;
    local_4a8 = puVar10 + 10;
    local_490 = puVar10 + 8;
    local_4b4 = -1;
    local_488 = 0xc;
    lVar20 = 0;
    local_498 = 0;
    local_458 = puVar24;
    local_450 = puVar10;
    do {
      local_478 = lVar20 * 3;
      local_480 = *(longlong *)(local_440 + 8 + lVar20 * 0x18);
      bVar15 = *(byte *)(local_480 + 0x18);
      iVar19 = *(int *)(local_480 + 0x24);
      local_468 = *(longlong *)(local_480 + 0x28);
      uVar11 = CONCAT71((int7)((ulonglong)local_440 >> 8),bVar15 == 7 | (byte)local_498);
      if (bVar15 == 7 || (local_498 & 1) != 0) {
        *(byte *)((longlong)puVar10 + 0x7c) = *(byte *)((longlong)puVar10 + 0x7c) | 4;
      }
      uVar27 = (uint)bVar15;
      uVar8 = (uint)bVar15;
      local_498 = uVar11;
      local_460 = lVar20;
      if ((((bVar15 < 0x19) && ((0x1000160U >> (uVar27 & 0x1f) & 1) != 0)) || (uVar27 == 7)) ||
         ((byte)(bVar15 - 9) < 0xb || (bVar15 & 0xfe) == 0x16)) {
        iVar30 = iVar19 + (uint)(iVar19 == 0);
        iVar29 = 0;
        do {
          iVar16 = *(int *)(local_440 + 0x10 + local_478 * 8);
          iVar33 = *(int *)(local_480 + 0x14);
          iVar25 = (int)puVar10[3];
          *(uint *)(puVar10 + 3) = iVar25 + 1U;
          if (*(uint *)((longlong)puVar10 + 0x1c) < iVar25 + 1U) {
            FUN_141770dc0(puVar24,iVar25);
          }
          uVar32 = iVar16 + iVar33 + iVar29;
          uVar11 = *puVar24;
          uVar18 = ((longlong)uVar11 >> 0x18) + (longlong)puVar24;
          if ((uVar11 & 1) == 0) {
            uVar18 = uVar11;
          }
          uVar35 = uVar32 & 0xffff | uVar27 << 0x10;
          *(uint *)(uVar18 + (longlong)iVar25 * 4) = uVar35;
          if ((uVar8 - 9 < 6) || (uVar8 == 0x17)) {
            iVar16 = (int)puVar10[5];
            *(uint *)(puVar10 + 5) = iVar16 + 1U;
            if (*(uint *)((longlong)puVar10 + 0x2c) < iVar16 + 1U) {
              FUN_141770dc0(puVar3,iVar16);
            }
            uVar11 = *puVar3;
            uVar18 = ((longlong)uVar11 >> 0x18) + (longlong)puVar3;
            if ((uVar11 & 1) == 0) {
              uVar18 = uVar11;
            }
            *(uint *)(uVar18 + (longlong)iVar16 * 4) = uVar35;
            iVar16 = (int)puVar10[7];
            *(uint *)(puVar10 + 7) = iVar16 + 1U;
            if (*(uint *)((longlong)puVar10 + 0x3c) < iVar16 + 1U) {
              FUN_141770dc0(local_470,iVar16);
            }
            uVar11 = *local_470;
            uVar18 = ((longlong)uVar11 >> 0x18) + (longlong)local_470;
            if ((uVar11 & 1) == 0) {
              uVar18 = uVar11;
            }
            *(uint *)(uVar18 + (longlong)iVar16 * 4) = uVar35;
            if (uVar8 == 0x17) {
              *(short *)(puVar10 + 0xf) = (short)uVar32;
            }
          }
          else {
            if ((byte)(bVar15 - 0xf) < 4) {
              iVar16 = (int)puVar10[5];
              *(uint *)(puVar10 + 5) = iVar16 + 1U;
              if (*(uint *)((longlong)puVar10 + 0x2c) < iVar16 + 1U) {
                FUN_141770dc0(puVar3,iVar16);
              }
              uVar11 = *puVar3;
              uVar18 = ((longlong)uVar11 >> 0x18) + (longlong)puVar3;
              if ((uVar11 & 1) == 0) {
                uVar18 = uVar11;
              }
              *(uint *)(uVar18 + (longlong)iVar16 * 4) = uVar35;
              iVar16 = (int)puVar10[9];
              lVar20 = (longlong)iVar16;
              *(uint *)(puVar10 + 9) = iVar16 + 1U;
              puVar21 = local_490;
              if (*(uint *)((longlong)puVar10 + 0x4c) < iVar16 + 1U) {
                FUN_141770dc0(local_490,iVar16);
                puVar21 = local_490;
              }
            }
            else if (uVar8 == 0x16) {
              iVar16 = (int)puVar10[0xd];
              lVar20 = (longlong)iVar16;
              *(uint *)(puVar10 + 0xd) = iVar16 + 1U;
              puVar21 = local_4a0;
              if (*(uint *)((longlong)puVar10 + 0x6c) < iVar16 + 1U) {
                FUN_141770dc0(local_4a0,iVar16);
                puVar21 = local_4a0;
              }
            }
            else {
              if (uVar8 != 0x13) goto LAB_140b49d40;
              iVar16 = (int)puVar10[5];
              *(uint *)(puVar10 + 5) = iVar16 + 1U;
              if (*(uint *)((longlong)puVar10 + 0x2c) < iVar16 + 1U) {
                FUN_141770dc0(puVar3,iVar16);
              }
              uVar11 = *puVar3;
              uVar18 = ((longlong)uVar11 >> 0x18) + (longlong)puVar3;
              if ((uVar11 & 1) == 0) {
                uVar18 = uVar11;
              }
              *(uint *)(uVar18 + (longlong)iVar16 * 4) = uVar35;
              iVar16 = (int)puVar10[0xb];
              lVar20 = (longlong)iVar16;
              *(uint *)(puVar10 + 0xb) = iVar16 + 1U;
              puVar21 = local_4a8;
              if (*(uint *)((longlong)puVar10 + 0x5c) < iVar16 + 1U) {
                FUN_141770dc0(local_4a8,iVar16);
                puVar21 = local_4a8;
              }
            }
            uVar11 = *puVar21;
            uVar18 = ((longlong)uVar11 >> 0x18) + (longlong)puVar21;
            if ((uVar11 & 1) == 0) {
              uVar18 = uVar11;
            }
            *(uint *)(uVar18 + lVar20 * 4) = uVar35;
          }
LAB_140b49d40:
          iVar29 = iVar29 + 8;
          iVar30 = iVar30 + -1;
        } while (iVar30 != 0);
      }
      if (((local_468 != 0) && (uVar8 != 0x13)) && (uVar8 != 0x16)) {
        uVar11 = (ulonglong)*(uint *)(local_468 + 0x58);
        iVar29 = 0;
        local_4e8 = local_440;
        lVar20 = local_468;
        do {
          if (0 < (int)uVar11) {
            iVar30 = *(int *)(local_4e8 + 0x10 + local_478 * 8);
            iVar16 = *(int *)(local_480 + 0x14);
            iVar33 = *(int *)(lVar20 + 0x3c);
            lVar26 = 0;
            lVar31 = 0;
            lVar34 = local_488;
            iVar25 = local_4b4;
            do {
              uVar11 = uStack_438;
              lVar20 = *(longlong *)(lVar20 + 0x50);
              iVar5 = (int)uStack_438;
              uVar8 = (int)uStack_438 + 1;
              uStack_438 = CONCAT44(uStack_438._4_4_,uVar8);
              if (uStack_438._4_4_ < uVar8) {
                FUN_140490492(&local_440,uVar11 & 0xffffffff);
                local_4e8 = local_440;
              }
              plVar14 = (longlong *)(local_4e8 + lVar34 * 2);
              memmove(plVar14 + 3,(void *)(local_4e8 + lVar34 * 2),
                      (ulonglong)(uint)(iVar5 + iVar25) * 0x18);
              *plVar14 = local_468;
              plVar14[1] = lVar20 + lVar26;
              *(int *)(plVar14 + 2) = iVar33 * iVar29 + iVar30 + iVar16;
              lVar31 = lVar31 + 1;
              uVar11 = (ulonglong)*(int *)(local_468 + 0x58);
              iVar25 = iVar25 + -1;
              lVar34 = lVar34 + 0xc;
              lVar26 = lVar26 + 0x30;
              lVar20 = local_468;
              puVar24 = local_458;
              puVar10 = local_450;
            } while (lVar31 < (longlong)uVar11);
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 != iVar19 + (uint)(iVar19 == 0));
      }
      lVar20 = local_460 + 1;
      local_4b4 = local_4b4 + -1;
      local_488 = local_488 + 0xc;
    } while (lVar20 < (int)uStack_438);
  }
  puVar17 = local_3f0;
  puVar10 = local_3e0;
  puVar24 = local_3d0;
  puVar3 = local_3c0;
  puVar21 = local_3b0;
  puVar4 = local_3a0;
  if (param_2 != (ulonglong *)0x0) {
    puVar17 = param_2 + 2;
    puVar10 = param_2 + 4;
    puVar24 = param_2 + 6;
    puVar3 = param_2 + 8;
    puVar21 = param_2 + 10;
    puVar4 = param_2 + 0xc;
  }
  FUN_1432348fa(puVar17);
  FUN_1432348fa(puVar10);
  FUN_143234c7c(puVar24);
  FUN_143234c7c(puVar3);
  FUN_1432348fa(puVar21);
  FUN_1432348fa(puVar4);
  FUN_1403abc08(local_4b0);
  memset(local_380,0,0x90);
  FUN_144869430(local_380);
  local_2f0 = 0;
  local_380[0] = &PTR_FUN_14a395930;
  if (&local_2c0 != (undefined8 *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_2c0 = 0xc2b2ae3d;
    local_2b8 = &DAT_9e3779b185ebca87;
    local_2b0 = &DAT_c2b2ae3d27d4eb4f;
    local_2a8 = 0x165667b19e3779f9;
    local_2a0 = 0x85ebca77c2b2ae63;
    local_298 = 0x85ebca77;
    local_290 = 0x27d4eb2f165667c5;
    local_288 = 0x9e3779b1;
    local_98 = 0;
    local_88 = &DAT_149e18840;
    local_a0 = 0x80;
    local_a8 = 0x10;
  }
  FUN_144a69558(local_380,1);
  (*(code *)local_380[0][0x1e])(local_380,0);
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x50);
    lVar34 = (longlong)*(int *)(param_1 + 0x58) * 0x30;
    do {
      FUN_1447e1f50(lVar20,local_380);
      lVar20 = lVar20 + 0x30;
      lVar34 = lVar34 + -0x30;
    } while (lVar34 != 0);
  }
  FUN_140ab910e(&local_2c0,local_448);
  *(undefined4 *)(param_1 + 0x78) = local_448[0];
  local_380[0] = &PTR__purecall_149e35f70;
  if (local_328 != (longlong *)0x0) {
    if (*local_328 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_328);
  }
  if (local_308 != 0) {
    if (*(longlong *)(local_308 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_308);
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1402eeb06();
    iVar29 = DAT_14ca9eda8;
    iVar19 = DAT_14ca9ed80;
    puVar10 = local_400;
    if (param_2 != (ulonglong *)0x0) {
      puVar10 = param_2;
    }
    uVar8 = (uint)puVar10[0xe];
    if (DAT_14ca9edac == 0) {
      iVar29 = DAT_14ca9ed80 + 1;
      bVar36 = DAT_14ca9ed84 == DAT_14ca9ed80;
      DAT_14ca9ed80 = iVar29;
      if (bVar36) {
        FUN_14482b872(&DAT_14ca9ed78,iVar19);
      }
      iVar29 = DAT_14ca9eda0;
      if (DAT_14ca9eda0 == 0) {
        iVar30 = -1;
      }
      else {
        iVar30 = DAT_14ca9eda0 + 0x1e;
        if (-1 < DAT_14ca9eda0 + -1) {
          iVar30 = DAT_14ca9eda0 + -1;
        }
        iVar30 = iVar30 >> 5;
      }
      iVar16 = DAT_14ca9eda0 + 1;
      iVar33 = DAT_14ca9eda0 + 0x1f;
      if (-1 < DAT_14ca9eda0) {
        iVar33 = DAT_14ca9eda0;
      }
      if (iVar33 >> 5 != iVar30) {
        if (DAT_14ca9eda4 <= DAT_14ca9eda0) {
          if (DAT_14ca9eda0 + 0x20U < 0xa0) {
            DAT_14ca9eda4 = 0x80;
          }
          else {
            uVar27 = DAT_14ca9eda0 + 0x20U >> 5;
            if (DAT_14ca9eda4 + 0x1fU < 0xa0) {
              uVar32 = 4;
              if (4 < uVar27) {
                uVar32 = uVar27;
              }
            }
            else {
              uVar32 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
            }
            uVar11 = (ulonglong)(uVar32 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar35 = (uint)(uVar11 + 0xf);
                if (uVar32 < 0x1ffd) {
                  uVar11 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
                }
                else {
                  uVar18 = (ulonglong)(uVar35 & 0xfffffff0);
                  if (uVar18 < 0x7ff1) {
                    bVar15 = (&DAT_14c841e00)[uVar35 >> 4];
                    uVar23 = 0x32;
                    if (0x32 < bVar15) {
                      uVar23 = (ulonglong)bVar15;
                    }
                    uVar28 = 0x32 - (ulonglong)bVar15;
                    do {
                      uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_140b4a808;
                      lVar20 = uVar23 + 1 + uVar28;
                      uVar28 = uVar28 - 1;
                    } while (lVar20 != 0x33);
                  }
                  uVar11 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar11 = (ulonglong)DAT_14c841df8;
                  }
                  uVar11 = -uVar11 & (uVar18 + uVar11) - 1;
                }
              }
              else {
                uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              }
            }
LAB_140b4a808:
            iVar30 = (int)(uVar11 >> 2);
            DAT_14ca9eda4 = -0x20;
            if ((int)uVar27 <= iVar30) {
              DAT_14ca9eda4 = iVar30 << 5;
            }
          }
          FUN_1446efbd8(&DAT_14ca9ed88,DAT_14ca9eda0);
          iVar16 = DAT_14ca9eda0 + 1;
        }
        iVar30 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar30 = iVar16;
        }
        if (iVar16 % 0x20 != 0) {
          puVar22 = &DAT_14ca9ed88;
          if (DAT_14ca9ed98 != (undefined *)0x0) {
            puVar22 = DAT_14ca9ed98;
          }
          bVar15 = -(char)(iVar16 % 0x20);
          DAT_14ca9eda0 = iVar16;
          *(uint *)(puVar22 + (longlong)(iVar30 >> 5) * 4) =
               (uint)(*(int *)(puVar22 + (longlong)(iVar30 >> 5) * 4) << (bVar15 & 0x1f)) >>
               (bVar15 & 0x1f);
          iVar16 = DAT_14ca9eda0;
        }
      }
      DAT_14ca9eda0 = iVar16;
      lVar20 = (longlong)iVar19;
      puVar22 = &DAT_14ca9ed88;
      if (DAT_14ca9ed98 != (undefined *)0x0) {
        puVar22 = DAT_14ca9ed98;
      }
      bVar15 = (byte)iVar29 & 0x1f;
      *(uint *)(puVar22 + (longlong)(iVar33 >> 5) * 4) =
           *(uint *)(puVar22 + (longlong)(iVar33 >> 5) * 4) &
           (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
      iVar29 = iVar19;
    }
    else {
      lVar20 = (longlong)DAT_14ca9eda8;
      DAT_14ca9eda8 = *(int *)(DAT_14ca9ed78 + 4 + lVar20 * 0x18);
      DAT_14ca9edac = DAT_14ca9edac + -1;
      if (DAT_14ca9edac != 0) {
        *(undefined4 *)(DAT_14ca9ed78 + (longlong)DAT_14ca9eda8 * 0x18) = 0xffffffff;
      }
    }
    iVar19 = 1;
    puVar22 = &DAT_14ca9ed88;
    if (DAT_14ca9ed98 != (undefined *)0x0) {
      puVar22 = DAT_14ca9ed98;
    }
    iVar30 = iVar29 + 0x1f;
    if (-1 < iVar29) {
      iVar30 = iVar29;
    }
    *(uint *)(puVar22 + (longlong)(iVar30 >> 5) * 4) =
         *(uint *)(puVar22 + (longlong)(iVar30 >> 5) * 4) | 1 << ((byte)iVar29 & 0x1f);
    puVar1 = (uint *)(DAT_14ca9ed78 + lVar20 * 0x18);
    *puVar1 = uVar8;
    *(longlong *)(puVar1 + 2) = param_1;
    puVar1[4] = 0xffffffff;
    uVar27 = DAT_14ca9ed80 - DAT_14ca9edac;
    if ((uVar27 != 0) && (uVar27 != 1)) {
      puVar22 = &DAT_14ca9edb0;
      if (DAT_14ca9edb8 != (undefined *)0x0) {
        puVar22 = DAT_14ca9edb8;
      }
      uVar32 = *(uint *)(puVar22 + (ulonglong)(DAT_14ca9edc0 - 1U & uVar8) * 4);
      while (uVar32 != 0xffffffff) {
        puVar2 = (uint *)(DAT_14ca9ed78 + (longlong)(int)uVar32 * 0x18);
        if (*puVar2 == uVar8) {
          uVar8 = puVar1[1];
          uVar27 = puVar1[2];
          uVar32 = puVar1[3];
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar27;
          puVar2[3] = uVar32;
          FUN_14094cefe(&DAT_14ca9ed78,iVar29,1);
          goto LAB_140b4a4c4;
        }
        uVar32 = puVar2[4];
      }
    }
    if (3 < uVar27) {
      uVar11 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((int)uVar27 < 1) || (iVar19 <= DAT_14ca9edc0)) {
      uVar8 = DAT_14ca9edc0 - 1U & uVar8;
      puVar1[5] = uVar8;
      puVar22 = DAT_14ca9edb8;
      if (DAT_14ca9edb8 == (undefined *)0x0) {
        puVar22 = &DAT_14ca9edb0;
      }
      puVar1[4] = *(uint *)(puVar22 + ((longlong)DAT_14ca9edc0 - 1U & (longlong)(int)uVar8) * 4);
      puVar22 = DAT_14ca9edb8;
      if (DAT_14ca9edb8 == (undefined *)0x0) {
        puVar22 = &DAT_14ca9edb0;
      }
      *(int *)(puVar22 + ((longlong)DAT_14ca9edc0 - 1U & (longlong)(int)uVar8) * 4) = iVar29;
    }
    else {
      DAT_14ca9edc0 = iVar19;
      FUN_141790a86();
    }
  }
LAB_140b4a4c4:
  lVar20 = FUN_14001cc68(0x90,0x10);
  FUN_1404e4ca0(lVar20,local_4b0);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  lVar34 = *(longlong *)(param_1 + 0x48);
  *(longlong *)(param_1 + 0x48) = lVar20;
  if (lVar34 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar34 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar34 + 8);
      LOCK();
      uVar8 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar8 >> 0x1e & 1) == 0) {
        bVar15 = *(byte *)(lVar34 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar34;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar15 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar36 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar36) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar36);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar36 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar36) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar36);
        }
      }
    }
  }
  if (local_418 == '\0') {
    local_418 = '\x01';
    *(int *)(local_430 + 4) = *(int *)(local_430 + 4) + -1;
    if (local_420 != local_430[2]) {
      FUN_14004673c();
    }
    *local_430 = local_428;
    local_430[3] = local_410;
  }
  if (local_3a0[0] != 0 && (local_3a0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_3b0[0] != 0 && (local_3b0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_3c0[0] != 0 && (local_3c0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_3d0[0] != 0 && (local_3d0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_3e0[0] != 0 && (local_3e0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_3f0[0] != 0 && (local_3f0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_400[0] != 0 && (local_400[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)local_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b4a98a FUN_140b4a98a body=832 status=ok
// SIG undefined FUN_140b4a98a(void)

int * FUN_140b4a98a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar12) {
      FUN_14482b872(param_1,iVar12);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar4 = iVar14 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar9 = iVar14 + 1;
    iVar15 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar15 = iVar14;
    }
    if (iVar15 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar14;
        }
        else {
          uVar16 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar16) {
              uVar5 = uVar16;
            }
          }
          else {
            uVar5 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar16 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar13,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar13;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar12;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar12 = (int)param_1[6];
    lVar6 = (longlong)iVar12;
    iVar14 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar14;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar14 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar14 = iVar12;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)(*param_1 + lVar6 * 0x18);
  plVar10 = (longlong *)param_3[1];
  lVar6 = *(longlong *)*param_3;
  *plVar13 = lVar6;
  plVar13[1] = *plVar10;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar16 = (int)((ulonglong)lVar6 >> 0x20) * 0x17 + (int)lVar6;
  cVar7 = '\0';
  iVar14 = iVar12;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
    if (iVar14 != -1) {
      do {
        plVar10 = (longlong *)(*param_1 + (longlong)iVar14 * 0x18);
        if (*plVar10 == lVar6) {
          uVar2 = *(undefined4 *)((longlong)plVar13 + 4);
          lVar6 = plVar13[1];
          uVar3 = *(undefined4 *)((longlong)plVar13 + 0xc);
          *(int *)plVar10 = (int)*plVar13;
          *(undefined4 *)((longlong)plVar10 + 4) = uVar2;
          *(int *)(plVar10 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar10 + 0xc) = uVar3;
          FUN_14094ce76(param_1,iVar12,1);
          cVar7 = '\x01';
          goto LAB_140b4aae0;
        }
        iVar14 = (int)plVar10[2];
      } while (iVar14 != -1);
    }
    cVar7 = '\0';
    iVar14 = iVar12;
  }
LAB_140b4aae0:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar12 <= (int)param_1[9])) {
      uVar16 = (int)param_1[9] - 1U & uVar16;
      *(uint *)((longlong)plVar13 + 0x14) = uVar16;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)(plVar13 + 2) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
           iVar14;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_140b4acca(param_1);
    }
  }
  *param_2 = iVar14;
  return param_2;
}



// FUNCTION 140b4acca FUN_140b4acca body=560 status=ok
// SIG undefined FUN_140b4acca(void)

void FUN_140b4acca(longlong *param_1)

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
            if (iVar3 - lVar12 == lVar11) goto LAB_140b4aeb5;
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
LAB_140b4aeb5:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4aefc FUN_140b4aefc body=627 status=ok
// SIG undefined FUN_140b4aefc(void)

void FUN_140b4aefc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_c8 [36];
  undefined1 local_a4 [4];
  ulonglong local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar7 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar7,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_140b4b0cc;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 == 0) {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    FUN_145775343(*param_2,(int)param_2[1]);
    *(undefined4 *)(param_2 + 1) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14945b8b4(param_2);
    }
    FUN_1457753b6(param_2,*(undefined4 *)(param_1 + 0x30));
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      piVar9 = *(int **)(param_1 + 0x48);
      piVar10 = piVar9 + (longlong)*(int *)(param_1 + 0x50) * 0xe;
      do {
        lVar6 = (longlong)piVar9[2];
        if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar6 * 8) != 0) {
          iVar2 = *piVar9;
          local_a0 = lVar6 << 0x20 | (longlong)iVar2;
          if ((int)uStack_90 != local_64) {
            puVar8 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar8 = local_60;
            }
            iVar3 = *(int *)(puVar8 + (ulonglong)
                                      (local_50 - 1U & (int)(local_a0 >> 0x20) * 0x17 + iVar2) * 4);
            while (iVar3 != -1) {
              lVar1 = local_98 + (longlong)iVar3 * 0x10;
              if (*(ulonglong *)(local_98 + (longlong)iVar3 * 0x10) == local_a0) {
                if (lVar1 != 0) goto LAB_140b4b09e;
                break;
              }
              iVar3 = *(int *)(lVar1 + 8);
            }
          }
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar6 * 8);
          (**(code **)(*plVar4 + 0x2c0))(plVar4,(longlong)iVar2 * 0x58 + *param_2);
          FUN_1403458a2(&local_98,local_a4,&local_a0,0);
        }
LAB_140b4b09e:
        piVar9 = piVar9 + 0xe;
      } while (piVar9 != piVar10);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140345f8a(&local_98);
  }
LAB_140b4b0cc:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b4b170 FUN_140b4b170 body=94 status=ok
// SIG undefined FUN_140b4b170(void)

undefined8 * FUN_140b4b170(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a7f6ac0;
  return param_1;
}



// FUNCTION 140b4b1ce FUN_140b4b1ce body=77 status=ok
// SIG undefined FUN_140b4b1ce(void)

void FUN_140b4b1ce(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 140b4b21c FUN_140b4b21c body=86 status=ok
// SIG undefined FUN_140b4b21c(void)

void FUN_140b4b21c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) && (*(int *)(param_1 + 0xd0) != 0)
       ) {
      FUN_143eb4eb0(param_1,param_1 + 200);
      return;
    }
  }
  return;
}



// FUNCTION 140b4b272 FUN_140b4b272 body=123 status=ok
// SIG undefined FUN_140b4b272(void)

void FUN_140b4b272(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar3 = 0;
    do {
      FUN_140b4b2ee(param_2,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (-1 < *(int *)(param_1 + 0x144)) {
    return;
  }
  FUN_14480809c(param_1 + 0x138,0);
  return;
}



// FUNCTION 140b4b2ee FUN_140b4b2ee body=316 status=ok
// SIG undefined FUN_140b4b2ee(void)

undefined8 FUN_140b4b2ee(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x1a0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x1a0) << 3;
    lVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar6 * 8) + 8) == param_2) {
        if (((int)lVar6 != -1) && (cVar1 = FUN_140b4b42a(param_1 + 0x198), cVar1 != '\0')) {
          return 1;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1a8);
    lVar6 = 0;
    do {
      if (*(int *)(lVar3 + 8 + lVar6) == param_2) {
        uVar5 = (int)(lVar6 >> 3) * -0x49249249;
        if ((int)uVar5 < iVar2 && -1 < (int)uVar5) {
          if (~uVar5 + iVar2 != 0) {
            lVar6 = (ulonglong)(uVar5 & 0x7fffffff) * 0x38;
            memmove((void *)(lVar3 + lVar6),(void *)(lVar3 + lVar6 + 0x38),
                    (longlong)(int)(~uVar5 + iVar2) * 0x38);
            iVar2 = *(int *)(param_1 + 0x1b0);
          }
          *(int *)(param_1 + 0x1b0) = iVar2 + -1;
          return 1;
        }
        break;
      }
      lVar6 = lVar6 + 0x38;
    } while ((longlong)iVar2 * 0x38 - lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x1c0) << 3;
    lVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + lVar6 * 8) + 8) == param_2) {
        if ((int)lVar6 == -1) {
          return 0;
        }
        uVar4 = FUN_147f8e7c0(param_1 + 0x1b8);
        return uVar4;
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 140b4b42a FUN_140b4b42a body=103 status=ok
// SIG undefined FUN_140b4b42a(void)

undefined8 FUN_140b4b42a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((int)param_2 < 0) || (iVar3 = (int)param_1[1], iVar3 <= (int)param_2)) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    puVar2 = *(undefined8 **)(lVar1 + (ulonglong)param_2 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      iVar3 = (int)param_1[1];
    }
    if (~param_2 + iVar3 != 0) {
      _Dst = (void *)(lVar1 + (ulonglong)param_2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
    uVar4 = CONCAT71((uint7)(uint3)((uint)(iVar3 + -1) >> 8),1);
  }
  return uVar4;
}



// FUNCTION 140b4b498 FUN_140b4b498 body=57 status=ok
// SIG undefined FUN_140b4b498(void)

void FUN_140b4b498(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fb20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fb20 = FUN_140002ddd(FUN_1465a6a2e,uVar1,L"CarryableObjectContainerBodySettings");
  }
  return;
}



// FUNCTION 140b4b4d2 FUN_140b4b4d2 body=87 status=ok
// SIG undefined FUN_140b4b4d2(void)

void FUN_140b4b4d2(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_140b4b52a();
  if (cVar1 == '\0') {
    FUN_1405870ce(param_1);
    cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar1 == '\0') {
      do {
        FUN_140b4b694(param_1 + 0x70,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
        cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
      } while (cVar1 == '\0');
    }
  }
  return;
}



// FUNCTION 140b4b52a FUN_140b4b52a body=360 status=ok
// SIG undefined FUN_140b4b52a(void)

ulonglong FUN_140b4b52a(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(byte *)((longlong)param_2 + 0xe9) & 1) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58), lVar7 == 0)) ||
     (lVar4 = *(longlong *)(lVar7 + 0x1b8), lVar4 == 0)) {
    uVar9 = 0;
  }
  else {
    plVar5 = *(longlong **)(lVar7 + 0x1c0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_32 = 0;
    puVar6 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar6 + 1;
    if ((ushort *)puVar6[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_32,2);
      }
      else {
        FUN_1457251a8(param_2,&local_32);
      }
    }
    else {
      local_32 = *(ushort *)*puVar6;
      *puVar6 = (ulonglong)puVar1;
    }
    uVar9 = 0;
    if (local_32 != 0) {
      do {
        local_40 = 0;
        (**(code **)(*param_2 + 400))(param_2,&local_40);
        lVar7 = FUN_1400fcfc4(lVar4,&local_40);
        if (lVar7 == 0) {
          FUN_14572541c(param_2);
        }
        else {
          lVar7 = FUN_14479d2ce(lVar7);
          if (lVar7 == 0) {
            uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
            goto LAB_140b4b64e;
          }
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < local_32);
      uVar9 = 0;
    }
LAB_140b4b64e:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140b4b694 FUN_140b4b694 body=766 status=ok
// SIG undefined FUN_140b4b694(void)

void FUN_140b4b694(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_5d;
  int local_5c;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = (int)param_1[1];
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    local_5c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  iVar2 = (int)param_1[1];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (iVar2 != 0) {
      lVar11 = *param_1;
      lVar13 = 0;
      do {
        puVar10 = (undefined1 *)(*(longlong *)(lVar11 + lVar13) + 8);
        puVar4 = *(undefined1 **)param_2[1];
        if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar10,1);
        }
        else {
          *puVar10 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
        }
        plVar5 = *(longlong **)(lVar11 + lVar13);
        (**(code **)(*plVar5 + 8))(plVar5,param_2,param_3);
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar13);
    }
  }
  else {
    if (iVar2 < local_5c) {
      *(int *)(param_1 + 1) = local_5c;
      uVar12 = local_5c - iVar2;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar12) {
        FUN_140587152(param_1);
      }
      memset((void *)((longlong)iVar2 * 0x10 + *param_1),0,(longlong)(int)uVar12 << 4);
    }
    else {
      if (local_5c < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_5c);
      }
      if (local_5c < iVar2) {
        FUN_1457756b6(param_1,local_5c,iVar2 - local_5c);
        FUN_145775622(param_1);
      }
    }
    if (0 < local_5c) {
      lVar11 = 0;
      lVar13 = 0;
      local_68 = param_3;
      do {
        puVar3 = (ulonglong *)param_2[1];
        puVar4 = (undefined1 *)*puVar3 + 1;
        if ((undefined1 *)puVar3[1] < puVar4) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_5d,1);
        }
        else {
          local_5d = *(undefined1 *)*puVar3;
          *puVar3 = (ulonglong)puVar4;
        }
        FUN_140b4b994(&local_58,local_5d);
        plVar5 = local_50;
        uVar9 = local_58;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_50 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
        uVar8 = local_68;
        lVar6 = *param_1;
        *(undefined8 *)(lVar6 + lVar11) = uVar9;
        plVar7 = *(longlong **)(lVar6 + 8 + lVar11);
        if (plVar5 == plVar7) {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar5 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar7 = plVar5;
              goto joined_r0x000140b4b980;
            }
          }
        }
        else {
          *(longlong **)(lVar6 + 8 + lVar11) = plVar5;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar7 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
joined_r0x000140b4b980:
              if (iVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
        }
        plVar5 = *(longlong **)(*param_1 + lVar11);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5,param_2,uVar8);
        }
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar13 < local_5c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4b994 FUN_140b4b994 body=330 status=ok
// SIG undefined FUN_140b4b994(void)

longlong * FUN_140b4b994(longlong *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong *plVar7;
  
  FUN_140b4bb10();
  if (DAT_14cb7d7d0 != DAT_14cb7d7fc) {
    puVar6 = &DAT_14cb7d800;
    if (DAT_14cb7d808 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d808;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7d810 - 1U & (uint)param_2) * 4);
    while (iVar1 != -1) {
      lVar4 = DAT_14cb7d7c8 + (longlong)iVar1 * 0x20;
      if (*(byte *)(DAT_14cb7d7c8 + (longlong)iVar1 * 0x20) == param_2) {
        plVar7 = (longlong *)(lVar4 + 8);
        if ((plVar7 != (longlong *)0x0 && lVar4 != 0) && (*plVar7 != 0)) {
          lVar4 = FUN_140b4bade(*plVar7 + 8);
          uVar2 = ((uint *)*plVar7)[1];
          if (uVar2 != 0) {
            uVar3 = *(uint *)*plVar7;
            plVar7 = (longlong *)0x0;
            if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140b4ba74;
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar5 != (undefined8 *)0x0) &&
               ((*(uint *)(puVar5 + 2) == uVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
              plVar7 = (longlong *)*puVar5;
              goto LAB_140b4ba74;
            }
          }
          plVar7 = (longlong *)0x0;
LAB_140b4ba74:
          (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar4,1);
          *(byte *)(lVar4 + 8) = param_2;
          *param_1 = lVar4;
          puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          puVar5[1] = &DAT_100000001;
          *puVar5 = &PTR_FUN_14b403380;
          puVar5[2] = lVar4;
          param_1[1] = (longlong)puVar5;
          return param_1;
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140b4bade FUN_140b4bade body=50 status=ok
// SIG undefined FUN_140b4bade(void)

void FUN_140b4bade(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_14012b77c(param_1,*(undefined4 *)(param_1 + 4));
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = *puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



// FUNCTION 140b4bb10 FUN_140b4bb10 body=157 status=ok
// SIG undefined FUN_140b4bb10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4bb10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7d818) {
    FUN_144b3d300(&DAT_14cb7d818);
    if (DAT_14cb7d818 == -1) {
      DAT_14cb7d7e8 = 0;
      DAT_14cb7d7f0 = 0;
      DAT_14cb7d7c8 = 0;
      _DAT_14cb7d7d0 = 0;
      _DAT_14cb7d7f4 = 0xffffffff00000080;
      DAT_14cb7d7fc = 0;
      DAT_14cb7d808 = 0;
      DAT_14cb7d810 = 0;
      atexit(FUN_143d4f3e0);
      _Init_thread_footer(&DAT_14cb7d818);
    }
  }
  return &DAT_14cb7d7c8;
}



// FUNCTION 140b4bbae FUN_140b4bbae body=1687 status=ok
// SIG undefined FUN_140b4bbae(void)

ulonglong FUN_140b4bbae(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  void *pvVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined1 local_5a;
  byte local_59;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_59 = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    bVar15 = false;
    if ((ABS(*(double *)(param_1 + 0x68) - DAT_14c846510) <= 9.999999747378752e-05) &&
       (bVar15 = false, ABS(*(double *)(param_1 + 0x70) - DAT_14c846518) <= 9.999999747378752e-05))
    {
      bVar15 = ABS(*(double *)(param_1 + 0x78) - DAT_14c846520) <= 9.999999747378752e-05;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
LAB_140b4c00b:
      bVar11 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x90);
      bVar11 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x94)))
        goto LAB_140b4c00b;
        bVar11 = ((*(uint *)(lVar12 + 8) & 0x10200000) == 0) << 2;
      }
    }
    if (((((*(int *)(param_1 + 0x9c) == 0) || (uVar3 = *(uint *)(param_1 + 0x98), (int)uVar3 < 0))
         || (DAT_14c9647dc <= (int)uVar3)) ||
        ((lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 == 0 ||
         (*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x9c))))) ||
       (local_59 = 8, (*(uint *)(lVar12 + 8) & 0x10200000) != 0)) {
      local_59 = 8;
      if (*(char *)(param_1 + 0xae) == '\0') {
        local_59 = *(char *)(param_1 + 0xaf) << 3;
      }
    }
    local_59 = *(char *)(param_1 + 0xae) << 6 |
               *(char *)(param_1 + 0xac) << 5 |
               *(char *)(param_1 + 0xad) << 4 |
               (*(int *)(param_1 + 0x88) != 0) * '\x02' | bVar15 ^ 1U | bVar11 |
               *(char *)(param_1 + 0xaf) << 7 | local_59;
  }
  puVar8 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar8 + 1;
  if ((byte *)puVar8[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_59,1);
  }
  else {
    local_59 = *(byte *)*puVar8;
    *puVar8 = (ulonglong)pbVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (*(int *)(param_1 + 0x8c) < 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      FUN_1457d8ef0(param_1 + 0x80,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    *(double *)(param_1 + 0x78) = DAT_14c846520;
    dVar4 = DAT_14c846518;
    *(double *)(param_1 + 0x68) = DAT_14c846510;
    *(double *)(param_1 + 0x70) = dVar4;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xad) = local_59 >> 4 & 1;
    *(byte *)(param_1 + 0xac) = local_59 >> 5 & 1;
    *(byte *)(param_1 + 0xae) = local_59 >> 6 & 1;
    *(byte *)(param_1 + 0xaf) = local_59 >> 7;
  }
  (**(code **)(*param_2 + 0x130))(param_2,param_1 + 0x10);
  FUN_14480c34d(param_2,param_1 + 0x38);
  uVar7 = FUN_1401fb57a(param_2,param_1 + 0x50);
  puVar8 = (ulonglong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_59);
  if ((local_59 & 1) != 0) {
    uVar7 = FUN_14480c34d(param_2,param_1 + 0x68);
    puVar8 = (ulonglong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_59);
  }
  local_5a = 1;
  if (((ulonglong)puVar8 & 2) != 0) {
    iVar6 = 0xff;
    if (*(int *)(param_1 + 0x88) < 0xff) {
      iVar6 = *(int *)(param_1 + 0x88);
    }
    plVar10 = (longlong *)(param_1 + 0x80);
    local_50 = (code *)CONCAT44(local_50._4_4_,iVar6);
    pvVar9 = (void *)(**(code **)(*param_2 + 0x178))(param_2,&local_50,8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      lVar12 = (longlong)(int)(uint)local_50;
      iVar6 = *(int *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x88) = iVar6 + (uint)local_50;
      if ((uint)(*(int *)(param_1 + 0x8c) - iVar6) < (uint)local_50) {
        FUN_1405bc420(plVar10);
      }
      pvVar9 = memset((void *)((longlong)iVar6 * 0x58 + *plVar10),0,lVar12 * 0x58);
    }
    if (0 < (int)(uint)local_50) {
      lVar12 = 0;
      lVar13 = 0;
      do {
        FUN_1408ef08e(*plVar10 + lVar12,param_2,param_3,&local_5a);
        lVar13 = lVar13 + 1;
        pvVar9 = (void *)(longlong)(int)(uint)local_50;
        lVar12 = lVar12 + 0x58;
      } while (lVar13 < (longlong)pvVar9);
    }
    puVar8 = (ulonglong *)CONCAT71((int7)((ulonglong)pvVar9 >> 8),local_59);
  }
  bVar11 = 1;
  if (((ulonglong)puVar8 & 4) != 0) {
    uVar7 = FUN_1408ee61b(param_2,param_3,param_1 + 0x90);
    bVar11 = (byte)uVar7;
    puVar8 = (ulonglong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_59);
  }
  if (((ulonglong)puVar8 & 8) == 0) goto LAB_140b4bf8e;
  if ((byte)puVar8 < 0x40) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    local_58 = 0;
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      if (*(int *)(param_1 + 0x9c) == 0) {
LAB_140b4c0f2:
        local_58 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x98);
        local_58 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             (((int)plVar10[2] != *(int *)(param_1 + 0x9c) ||
              ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_140b4c0f2;
          local_58 = *plVar10;
        }
      }
    }
    if (DAT_14cac7648 == 0) {
      local_80 = &local_50;
      local_50 = FUN_144a7958c;
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
    local_b8 = 0;
    bVar5 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,DAT_14cac7648,&local_58);
    if ((local_58 != 0 & *(byte *)(param_2 + 5)) == 1) {
      uVar3 = *(uint *)(local_58 + 0xc);
      *(uint *)(param_1 + 0x98) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(lVar12 + 0x10) = iVar14;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar6 = iVar14;
        }
      }
      *(int *)(param_1 + 0x9c) = iVar6;
    }
    bVar11 = bVar11 & bVar5;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0xa0);
  local_50 = (code *)CONCAT71(local_50._1_7_,*(undefined1 *)(param_1 + 0xa8));
  puVar8 = (ulonglong *)param_2[1];
  puVar2 = (undefined1 *)*puVar8 + 1;
  if ((undefined1 *)puVar8[1] < puVar2) {
    puVar8 = (ulonglong *)(**(code **)(*param_2 + 0x170))(param_2,&local_50,1);
  }
  else {
    local_50 = (code *)CONCAT71(local_50._1_7_,*(undefined1 *)*puVar8);
    *puVar8 = (ulonglong)puVar2;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar8 = (ulonglong *)0x0;
    *(uint *)(param_1 + 0xa8) = (uint)(byte)local_50;
  }
LAB_140b4bf8e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),~*(byte *)(param_1 + 9) | bVar11) &
         0xffffffffffffff01;
}



// FUNCTION 140b4c246 FUN_140b4c246 body=40 status=ok
// SIG undefined FUN_140b4c246(void)

undefined8 FUN_140b4c246(undefined8 param_1,int param_2)

{
  FUN_140b4c26e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b4c26e FUN_140b4c26e body=49 status=ok
// SIG undefined FUN_140b4c26e(void)

void FUN_140b4c26e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c5d40;
  FUN_140b4c2a0();
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b4c2a0 FUN_140b4c2a0 body=97 status=ok
// SIG undefined FUN_140b4c2a0(void)

void FUN_140b4c2a0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar2 = *(int *)(param_1 + 0x38);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < *(int *)(param_1 + 0x3c)) {
    return;
  }
  FUN_1470d9a06((longlong *)(param_1 + 0x30),0);
  return;
}



// FUNCTION 140b4c302 FUN_140b4c302 body=219 status=ok
// SIG undefined FUN_140b4c302(void)

void FUN_140b4c302(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (lVar4 == 0) {
      lVar4 = FUN_14001cc68(0x58,0x10);
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x48) = 0x800000000;
      *(undefined4 *)(lVar4 + 0x50) = 0;
      *(longlong *)(param_1 + 0x78) = lVar4;
      iVar5 = 0;
      uVar1 = 8;
    }
    else {
      iVar5 = *(int *)(lVar4 + 0x48);
      uVar1 = *(uint *)(lVar4 + 0x4c);
    }
    *(uint *)(lVar4 + 0x48) = iVar5 + 1U;
    if (uVar1 < iVar5 + 1U) {
      FUN_140b4c3de(lVar4,iVar5);
    }
    lVar3 = *(longlong *)(lVar4 + 0x40);
    if (*(longlong *)(lVar4 + 0x40) == 0) {
      lVar3 = lVar4;
    }
    *(longlong *)(lVar3 + (longlong)iVar5 * 8) = param_2;
    iVar5 = *(int *)(lVar4 + 0x50) + 1;
    do {
      iVar2 = iVar5;
      iVar5 = 1;
    } while (iVar2 == 0);
    *(int *)(lVar4 + 0x50) = iVar2;
    *(longlong *)(param_1 + 0x70) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140b4c389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x228))
            (*(longlong **)(param_1 + 0x90),param_2,param_3);
  return;
}



// FUNCTION 140b4c3de FUN_140b4c3de body=350 status=ok
// SIG undefined FUN_140b4c3de(void)

void FUN_140b4c3de(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 9) {
    uVar6 = 8;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0x4c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140b4c45f;
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
LAB_140b4c45f:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = (int)uVar6;
  FUN_140b4c53c(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 140b4c53c FUN_140b4c53c body=133 status=ok
// SIG undefined FUN_140b4c53c(void)

void FUN_140b4c53c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b4c5d0 FUN_140b4c5d0 body=40 status=ok
// SIG undefined FUN_140b4c5d0(void)

undefined8 FUN_140b4c5d0(undefined8 param_1,int param_2)

{
  FUN_140b4c5f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b4c5f8 FUN_140b4c5f8 body=129 status=ok
// SIG undefined FUN_140b4c5f8(void)

void FUN_140b4c5f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b945cc0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b4c67a FUN_140b4c67a body=377 status=ok
// SIG undefined FUN_140b4c67a(void)

undefined8 * FUN_140b4c67a(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float _X;
  
  if (((DAT_14c760db4 < 2) && (*(char *)(param_1 + 0x1fb) == '\x02')) &&
     ((DAT_14ca964f0 != '\x01' || ((DAT_14c760e14 & 1) == 0)))) {
    if (DAT_14c760e10 < 1) {
      return (undefined8 *)0x0;
    }
  }
  else if (((*DAT_14cad1fb8 == 0) && (*(char *)(param_1 + 0x1fb) == '\0')) &&
          (*(longlong *)(param_1 + 0xa8) != 0)) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)FUN_14001cc68(0x2e0,0x10);
  FUN_140b4c7f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a898ba0;
  fVar3 = *(float *)(param_1 + 0x440);
  if (89.0 <= fVar3) {
    fVar3 = 89.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  _X = (fVar3 * 3.1415927) / 180.0;
  fVar2 = _X + 0.001;
  fVar3 = (*(float *)(param_1 + 0x444) * 3.1415927) / 180.0;
  if (1.5543431 <= fVar3) {
    fVar3 = 1.5543431;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(puVar1 + 0x59) = fVar3;
  fVar2 = cosf(fVar3);
  *(float *)(puVar1 + 0x5a) = fVar2;
  fVar2 = sinf(fVar3);
  *(float *)(puVar1 + 0x5b) = fVar2;
  fVar2 = cosf(_X);
  *(float *)((longlong)puVar1 + 0x2cc) = fVar2;
  *(float *)((longlong)puVar1 + 0x2d4) = 1.0 / (fVar2 - *(float *)(puVar1 + 0x5a));
  fVar3 = tanf(fVar3);
  *(float *)((longlong)puVar1 + 0x2dc) = 1.0 / fVar3;
  return puVar1;
}



// FUNCTION 140b4c7f4 FUN_140b4c7f4 body=271 status=ok
// SIG undefined FUN_140b4c7f4(void)

undefined8 * FUN_140b4c7f4(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  FUN_140bff1a4();
  *param_1 = &PTR_FUN_14a9bf410;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_2 + 0x404);
  fVar1 = *(float *)(param_2 + 0x40c);
  *(float *)(param_1 + 0x53) = fVar1;
  fVar2 = 1e-05;
  if (1e-05 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)((longlong)param_1 + 0x29c) = 1.0 / fVar2;
  *param_1 = &PTR_FUN_14a861d80;
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)((longlong)param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x430);
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)(param_2 + 0x438);
  *(uint *)(param_1 + 0x58) =
       *(uint *)(param_1 + 0x58) & 0xfffffffe | *(uint *)(param_2 + 0x428) & 1;
  fVar1 = *(float *)(param_2 + 0x40c);
  *(float *)(param_1 + 0x53) = fVar1;
  fVar2 = 1e-05;
  if (1e-05 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)((longlong)param_1 + 0x29c) = 1.0 / fVar2;
  return param_1;
}



// FUNCTION 140b4c904 FUN_140b4c904 body=709 status=ok
// SIG undefined FUN_140b4c904(void)

void FUN_140b4c904(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140b4c9ec;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_140b4c9ec:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  cVar5 = (**(code **)(*param_1 + 0x710))(param_1);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerUpdateFPUseOffet_Validate");
  }
  else {
    local_68 = local_30;
    local_78 = local_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    (**(code **)(*param_1 + 0x718))(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4cc22 FUN_140b4cc22 body=28 status=ok
// SIG undefined FUN_140b4cc22(void)

void FUN_140b4cc22(undefined8 param_1)

{
  FUN_140a3b34e();
  FUN_140b4cc3e(param_1,1);
  return;
}



// FUNCTION 140b4cc3e FUN_140b4cc3e body=390 status=ok
// SIG undefined FUN_140b4cc3e(void)

void FUN_140b4cc3e(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      lVar2 = FUN_140b4cdf2(lVar2);
      if (lVar2 != 0) {
        if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4cdf2 FUN_140b4cdf2 body=102 status=ok
// SIG undefined FUN_140b4cdf2(void)

void FUN_140b4cdf2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140b4ce5a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4ce5a FUN_140b4ce5a body=228 status=ok
// SIG undefined FUN_140b4ce5a(void)

longlong FUN_140b4ce5a(void)

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
  if (DAT_14cb5ca48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14868fdd1;
    local_40 = &LAB_140d60b74;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogComponent",&DAT_14cb5ca48,FUN_1464d7b52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ca48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4cf40 FUN_140b4cf40 body=38 status=ok
// SIG undefined FUN_140b4cf40(void)

undefined8 FUN_140b4cf40(undefined8 param_1,int param_2)

{
  FUN_140b4cf66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b4cf66 FUN_140b4cf66 body=1077 status=ok
// SIG undefined FUN_140b4cf66(void)

void FUN_140b4cf66(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f58340;
  if (param_1[0x80] != 0) {
    plVar2 = param_1 + 0x84;
    if ((longlong *)param_1[0x82] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x82];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0x78] != 0) {
    plVar2 = param_1 + 0x7c;
    if ((longlong *)param_1[0x7a] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x7a];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d39b(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d39b(param_1[0x6e],*(undefined4 *)(param_1 + 0x6f));
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d39b(param_1[0x69],*(undefined4 *)(param_1 + 0x6a));
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d39b(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d48c(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d463(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d3d6(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_149f51a28;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_149f51a30;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407fbce0(param_1 + 4);
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b4d39b FUN_140b4d39b body=58 status=ok
// SIG undefined FUN_140b4d39b(void)

void FUN_140b4d39b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b4d3d6 FUN_140b4d3d6 body=66 status=ok
// SIG undefined FUN_140b4d3d6(void)

void FUN_140b4d3d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f51a80;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4d418(param_1);
  return;
}



// FUNCTION 140b4d418 FUN_140b4d418 body=75 status=ok
// SIG undefined FUN_140b4d418(void)

void FUN_140b4d418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f51c10;
  FUN_144756766(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1407fbce0(param_1);
  return;
}



// FUNCTION 140b4d463 FUN_140b4d463 body=41 status=ok
// SIG undefined FUN_140b4d463(void)

void FUN_140b4d463(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b4d4ca(param_1);
    param_1 = param_1 + 400;
  }
  return;
}



// FUNCTION 140b4d48c FUN_140b4d48c body=62 status=ok
// SIG undefined FUN_140b4d48c(void)

void FUN_140b4d48c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b4d4ca FUN_140b4d4ca body=188 status=ok
// SIG undefined FUN_140b4d4ca(void)

void FUN_140b4d4ca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
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
  FUN_144716727(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b4d586 FUN_140b4d586 body=64 status=ok
// SIG undefined FUN_140b4d586(void)

void FUN_140b4d586(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140b4d5c6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 140b4d5c6 FUN_140b4d5c6 body=87 status=ok
// SIG undefined FUN_140b4d5c6(void)

ulonglong FUN_140b4d5c6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 140b4d61e FUN_140b4d61e body=357 status=ok
// SIG undefined FUN_140b4d61e(void)

undefined8 FUN_140b4d61e(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_3 + 0x80);
  if (*(longlong *)(param_3 + 0x80) == 0) {
    lVar3 = param_3;
  }
  *(undefined4 *)(lVar3 + (longlong)param_2 * 4) = 0;
  iVar9 = *(int *)(param_1 + 0xc0);
  uVar7 = param_2 * iVar9;
  local_68 = (int)uVar7 >> 5;
  local_64 = 1 << ((byte)uVar7 & 0x1f);
  iVar8 = 1;
  local_58 = -1 << ((byte)uVar7 & 0x1f);
  local_50 = uVar7 & 0xffffffe0;
  local_60 = param_4;
  local_54 = uVar7;
  if (*(uint *)(param_4 + 0x88) != uVar7) {
    FUN_140b4d784(&local_68);
  }
  iVar9 = iVar9 + uVar7;
  lVar3 = *(longlong *)(param_3 + 0x80);
  if ((int)local_54 < iVar9) {
    iVar8 = 0;
    local_70 = param_1;
    do {
      iVar6 = local_54 - uVar7;
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = param_3;
      }
      iVar1 = *(int *)(lVar5 + (longlong)iVar6 * 4);
      if (iVar1 == 0) {
LAB_140b4d77d:
        uVar4 = 0;
        goto LAB_140b4d6de;
      }
      if (iVar1 < 0) {
        cVar2 = FUN_140b4d61e(local_70,iVar6,param_3,param_4);
        if (cVar2 == '\0') goto LAB_140b4d77d;
        lVar3 = *(longlong *)(param_3 + 0x80);
      }
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = param_3;
      }
      iVar6 = *(int *)(lVar5 + (longlong)iVar6 * 4);
      if (iVar8 <= iVar6) {
        iVar8 = iVar6;
      }
      local_58 = local_58 & ~local_64;
      FUN_140b4d784(&local_68);
    } while ((int)local_54 < iVar9);
    iVar8 = iVar8 + 1;
  }
  if (lVar3 != 0) {
    param_3 = lVar3;
  }
  *(int *)(param_3 + (longlong)param_2 * 4) = iVar8;
  uVar4 = 1;
LAB_140b4d6de:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140b4d784 FUN_140b4d784 body=178 status=ok
// SIG undefined FUN_140b4d784(void)

void FUN_140b4d784(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 0x80);
  if (*(longlong *)(lVar9 + 0x80) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x88);
  iVar4 = *param_1;
  lVar9 = (longlong)iVar4;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar3 = param_1[6];
    iVar7 = iVar6 >> 5;
    if (iVar6 >> 5 < iVar4) {
      iVar7 = iVar4;
    }
    lVar10 = 0;
    do {
      *param_1 = iVar4 + 1 + (int)lVar10;
      iVar3 = iVar3 + 0x20;
      param_1[6] = iVar3;
      if (iVar7 - lVar9 == lVar10) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar10 * 4);
      param_1[4] = -1;
      lVar10 = lVar10 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar3 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar4 = (iVar3 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  param_1[5] = iVar4;
  return;
}



// FUNCTION 140b4d836 FUN_140b4d836 body=1489 status=ok
// SIG undefined FUN_140b4d836(void)

void FUN_140b4d836(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  byte bVar22;
  undefined2 uVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auStack_128 [44];
  int local_fc;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) & 0xfd;
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(*param_2 + 0x28);
  *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(*param_2 + 0x18);
  puVar25 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar6 = (undefined8 *)*param_2;
  *puVar25 = *puVar6;
  *puVar6 = 0;
  *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar6 + 1);
  *(undefined4 *)((longlong)puVar25 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  plVar26 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar26[1] = (longlong)&DAT_100000001;
  *plVar26 = (longlong)&PTR_FUN_14a3a6e70;
  plVar26[2] = (longlong)puVar25;
  *(undefined8 **)(param_1 + 0xb10) = puVar25;
  plVar7 = *(longlong **)(param_1 + 0xb18);
  if (plVar26 == plVar7) {
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar26 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar1 = (int *)((longlong)plVar26 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar24 = *piVar1;
        UNLOCK();
        plVar7 = plVar26;
        goto joined_r0x000140b4dc49;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0xb18) = plVar26;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar26 = plVar7 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar24 = *piVar1;
        UNLOCK();
joined_r0x000140b4dc49:
        if (iVar24 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  lVar27 = *param_2;
  if (param_1 + 0x7d8 != lVar27 + 0x20) {
    if (*(longlong *)(param_1 + 0x7d8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(lVar27 + 0x20);
    *(undefined8 *)(lVar27 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(lVar27 + 0x28);
    *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(lVar27 + 0x2c);
    *(undefined8 *)(lVar27 + 0x28) = 0;
    lVar27 = *param_2;
  }
  if ((longlong *)(param_1 + 0xb40) != (longlong *)(lVar27 + 0x10)) {
    if (*(longlong *)(param_1 + 0xb40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(lVar27 + 0x10);
    *(undefined8 *)(lVar27 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(lVar27 + 0x18);
    *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(lVar27 + 0x1c);
    *(undefined8 *)(lVar27 + 0x18) = 0;
  }
  lVar27 = *(longlong *)(param_1 + 0x660);
  if ((lVar27 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar27);
  }
  uVar9 = *(undefined4 *)(lVar27 + 0x200);
  uVar10 = *(undefined4 *)(lVar27 + 0x204);
  uVar11 = *(undefined4 *)(lVar27 + 0x208);
  uVar12 = *(undefined4 *)(lVar27 + 0x20c);
  uVar13 = *(undefined4 *)(lVar27 + 0x210);
  uVar14 = *(undefined4 *)(lVar27 + 0x214);
  uVar15 = *(undefined4 *)(lVar27 + 0x218);
  uVar16 = *(undefined4 *)(lVar27 + 0x21c);
  uVar17 = *(undefined4 *)(lVar27 + 0x220);
  uVar18 = *(undefined4 *)(lVar27 + 0x224);
  uVar19 = *(undefined4 *)(lVar27 + 0x228);
  uVar20 = *(undefined4 *)(lVar27 + 0x22c);
  *(undefined8 *)(param_1 + 0xc18) = *(undefined8 *)(lVar27 + 0x230);
  *(undefined4 *)(param_1 + 0xc08) = uVar17;
  *(undefined4 *)(param_1 + 0xc0c) = uVar18;
  *(undefined4 *)(param_1 + 0xc10) = uVar19;
  *(undefined4 *)(param_1 + 0xc14) = uVar20;
  *(undefined4 *)(param_1 + 0xbf8) = uVar13;
  *(undefined4 *)(param_1 + 0xbfc) = uVar14;
  *(undefined4 *)(param_1 + 0xc00) = uVar15;
  *(undefined4 *)(param_1 + 0xc04) = uVar16;
  *(undefined4 *)(param_1 + 0xbe8) = uVar9;
  *(undefined4 *)(param_1 + 0xbec) = uVar10;
  *(undefined4 *)(param_1 + 0xbf0) = uVar11;
  *(undefined4 *)(param_1 + 0xbf4) = uVar12;
  lVar27 = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 0xbe0) = *(undefined4 *)(*param_2 + 0x30);
  local_a8 = lVar27;
  FUN_140b4defe(&local_e8,*(undefined8 *)(param_1 + 0xb10),param_1 + 0xb28);
  *(undefined8 *)(param_1 + 0xb88) = local_b8;
  *(undefined4 *)(param_1 + 0xb78) = local_c8;
  *(undefined4 *)(param_1 + 0xb7c) = uStack_c4;
  *(undefined4 *)(param_1 + 0xb80) = uStack_c0;
  *(undefined4 *)(param_1 + 0xb84) = uStack_bc;
  *(undefined4 *)(param_1 + 0xb68) = local_d8;
  *(undefined4 *)(param_1 + 0xb6c) = uStack_d4;
  *(undefined4 *)(param_1 + 0xb70) = uStack_d0;
  *(undefined4 *)(param_1 + 0xb74) = uStack_cc;
  *(longlong *)(param_1 + 0xb58) = local_e8;
  *(ulonglong *)(param_1 + 0xb60) = uStack_e0;
  *(undefined8 *)(param_1 + 3000) = DAT_14c8464f0;
  uVar21 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xba8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xbb0) = uVar21;
  *(undefined8 *)(param_1 + 0xba0) = DAT_14c8464f0;
  uVar11 = DAT_14c8464e8._4_4_;
  uVar10 = (undefined4)DAT_14c8464e8;
  uVar9 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb90) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xb94) = uVar9;
  *(undefined4 *)(param_1 + 0xb98) = uVar10;
  *(undefined4 *)(param_1 + 0xb9c) = uVar11;
  *(undefined1 *)(param_1 + 0xbc0) = 0;
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  if (*(int *)(param_1 + 0xbd4) != 0) {
    FUN_1401a2d6a(param_1 + 0xbc8,0);
  }
  *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(param_1 + 0xb50);
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_140b4de08(param_1);
  if (0 < *(int *)(param_1 + 0x6b0)) {
    local_f0 = (ulonglong)*(uint *)(lVar27 + 0x40);
    local_f8 = FUN_1403fc0e6(param_1,*(undefined8 *)(param_1 + 0x6a8),0);
    if ((local_f8 != 0) && (0 < (int)local_f0)) {
      lVar30 = 8;
      uVar31 = 0;
      do {
        iVar24 = *(int *)(*(longlong *)(param_1 + 0xb40) + uVar31 * 4);
        if ((-1 < (longlong)iVar24) && (iVar24 < *(int *)(local_f8 + 0x28))) {
          lVar8 = *(longlong *)(local_f8 + 0x20);
          lVar28 = (longlong)iVar24 * 0x10;
          fVar2 = *(float *)(lVar8 + lVar28);
          fVar3 = *(float *)(lVar8 + 4 + lVar28);
          fVar4 = *(float *)(lVar8 + 0xc + lVar28);
          fVar5 = *(float *)(lVar8 + 8 + lVar28);
          lVar8 = *(longlong *)(lVar27 + 0x28);
          local_fc = (**(code **)(**(longlong **)(lVar27 + 0x20) + 0x28))();
          iVar24 = (**(code **)(**(longlong **)(lVar27 + 0x20) + 0x20))();
          if ((*(ulonglong *)(lVar27 + 0x28) <= (ulonglong)(lVar30 + -8 + lVar8)) &&
             ((ulonglong)(lVar8 + lVar30) <=
              *(ulonglong *)(lVar27 + 0x28) + (ulonglong)(uint)(iVar24 * local_fc))) {
            iVar24 = (int)(fVar2 * 32767.0);
            if (0x7ffe < iVar24) {
              iVar24 = 0x7fff;
            }
            uVar23 = (undefined2)iVar24;
            if (iVar24 < -0x7fff) {
              uVar23 = 0x8000;
            }
            iVar24 = (int)(fVar3 * 32767.0);
            if (0x7ffe < iVar24) {
              iVar24 = 0x7fff;
            }
            if (iVar24 < -0x7fff) {
              iVar24 = -0x8000;
            }
            iVar29 = (int)(fVar5 * 32767.0);
            if (0x7ffe < iVar29) {
              iVar29 = 0x7fff;
            }
            *(undefined2 *)(lVar8 + uVar31 * 8) = uVar23;
            uVar23 = (undefined2)iVar29;
            if (iVar29 < -0x7fff) {
              uVar23 = 0x8000;
            }
            *(short *)(lVar8 + 2 + uVar31 * 8) = (short)iVar24;
            iVar24 = (int)(fVar4 * 32767.0);
            *(undefined2 *)(lVar8 + 4 + uVar31 * 8) = uVar23;
            if (0x7ffe < iVar24) {
              iVar24 = 0x7fff;
            }
            uVar23 = (undefined2)iVar24;
            if (iVar24 < -0x7fff) {
              uVar23 = 0x8000;
            }
            *(undefined2 *)(lVar8 + 6 + uVar31 * 8) = uVar23;
          }
        }
        uVar31 = uVar31 + 1;
        lVar30 = lVar30 + 8;
      } while (local_f0 != uVar31);
    }
  }
  FUN_140b4dfbe(param_1 + 0x8c0,&local_a8,param_1 + 0x7d8,&local_e8);
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar22 = *(byte *)(param_1 + 0x9d);
    if ((bVar22 & 1) != 0) {
      if ((*(longlong *)(param_1 + 0xb0) != 0) || (lVar27 = FUN_1448abda6(param_1), lVar27 != 0))
      goto LAB_140b4db95;
      bVar22 = *(byte *)(param_1 + 0x9d);
    }
    *(byte *)(param_1 + 0x9d) = bVar22 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_140b4db95:
  FUN_140b4de3e(param_1,param_3);
  FUN_14477c0e3(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  lVar27 = local_a8;
  if (local_a8 != 0) {
    FUN_14006ea12(local_a8);
    FUN_1400020a8(lVar27);
  }
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4de08 FUN_140b4de08 body=53 status=ok
// SIG undefined FUN_140b4de08(void)

void FUN_140b4de08(undefined8 param_1,undefined8 *param_2)

{
  FUN_14477c0e3(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
    return;
  }
  FUN_147b4e50a(param_2,0);
  return;
}



// FUNCTION 140b4de3e FUN_140b4de3e body=192 status=ok
// SIG undefined FUN_140b4de3e(void)

void FUN_140b4de3e(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cae42a0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cae42ac = DAT_14cae42ac + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cae4298 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cae4298 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cae42ac = DAT_14cae42ac + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_140b4dee5;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cae42ac = DAT_14cae42ac + -1;
LAB_140b4dee5:
  FUN_14474d06a(&DAT_14cae4298,0);
  return;
}



// FUNCTION 140b4defe FUN_140b4defe body=192 status=ok
// SIG undefined FUN_140b4defe(void)

void FUN_140b4defe(double *param_1,undefined8 *param_2,double *param_3)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 1) {
    dVar6 = 0.0;
    dVar8 = 0.0;
    dVar7 = 0.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
  }
  else {
    pfVar2 = (float *)*param_2;
    dVar3 = (double)pfVar2[6] + param_3[2];
    dVar4 = (double)pfVar2[5] + param_3[1];
    dVar5 = (double)pfVar2[4] + *param_3;
    dVar7 = (double)pfVar2[2] + param_3[2];
    dVar8 = (double)pfVar2[1] + param_3[1];
    dVar6 = (double)*pfVar2 + *param_3;
  }
  *param_1 = dVar6;
  param_1[1] = dVar8;
  param_1[2] = dVar7;
  param_1[3] = dVar5;
  param_1[4] = dVar4;
  param_1[5] = dVar3;
  *(bool *)(param_1 + 6) = 0 < iVar1;
  return;
}



// FUNCTION 140b4dfbe FUN_140b4dfbe body=686 status=ok
// SIG undefined FUN_140b4dfbe(void)

void FUN_140b4dfbe(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)((longlong)param_1 + 0x9d) != '\x02') {
    puVar6 = (undefined4 *)(param_3 + 8);
    if (*(char *)((longlong)param_1 + 0x9c) == '\x02') {
      puVar6 = (undefined4 *)(*param_2 + 0x40);
    }
    FUN_14062ab38(param_1,*puVar6);
    puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar5 = FUN_14006ead0;
    plVar7 = puVar5 + 2;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    lVar3 = param_1[0x17];
    param_1[0x17] = plVar7;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
      plVar7 = (longlong *)param_1[0x17];
    }
    if (plVar7 != param_2) {
      lVar3 = *plVar7;
      *plVar7 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        FUN_14006ea12(lVar3);
        FUN_1400020a8(lVar3);
      }
    }
    FUN_14054c6c4(param_1[0x17] + 8,param_3);
    local_50 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 1);
    pvVar4 = (void *)*param_1;
    local_48 = CONCAT44(local_48._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_48 = (ulonglong)uVar1;
    }
    else {
      FUN_14589f2be(&local_50,uVar1,0);
      memcpy(local_50,pvVar4,(longlong)(int)uVar1 << 2);
    }
    local_40 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 3);
    pvVar4 = (void *)param_1[2];
    local_38 = CONCAT44(local_38._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_38 = (ulonglong)uVar1;
    }
    else {
      FUN_144a06ca8(&local_40,uVar1,0);
      memcpy(local_40,pvVar4,(longlong)(int)uVar1 << 2);
    }
    local_2c = *(undefined1 *)((longlong)param_1 + 0x24);
    local_30 = *(undefined4 *)(param_1 + 4);
    lVar3 = param_1[0x17];
    if ((void **)(lVar3 + 0x18) == &local_50) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      *(undefined1 *)(lVar3 + 0x3c) = *(undefined1 *)((longlong)param_1 + 0x24);
      *(undefined4 *)(lVar3 + 0x38) = uVar2;
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar3 + 0x18) = local_50;
      local_50 = (void *)0x0;
      *(undefined4 *)(lVar3 + 0x20) = (undefined4)local_48;
      *(undefined4 *)(lVar3 + 0x24) = local_48._4_4_;
      local_48 = 0;
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar3 + 0x28) = local_40;
      local_40 = (void *)0x0;
      *(undefined4 *)(lVar3 + 0x30) = (undefined4)local_38;
      *(undefined4 *)(lVar3 + 0x34) = local_38._4_4_;
      local_38 = 0;
      *(undefined1 *)(lVar3 + 0x3c) = local_2c;
      *(undefined4 *)(lVar3 + 0x38) = local_30;
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (*(char *)((longlong)param_1 + 0x9c) != '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x9d) = 1;
    }
    FUN_1402d2c26(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4e26e FUN_140b4e26e body=1033 status=ok
// SIG undefined FUN_140b4e26e(void)

void FUN_140b4e26e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_5c [12];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  lVar3 = FUN_1403ca227();
  lVar6 = *(longlong *)(lVar3 + 0x410);
  if (lVar6 == 0) {
    uVar4 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x410) = lVar6;
  }
  plVar8 = (longlong *)(lVar3 + 0x408);
  if (*(longlong *)(lVar3 + 0x418) == 0) {
    if ((lVar6 == 0) || (*plVar8 == 0)) goto LAB_140b4e3f7;
    plVar7 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0x418) = 0;
      goto LAB_140b4e3f7;
    }
    uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar4,plVar8);
    *(longlong *)(lVar3 + 0x418) = lVar6;
    if (lVar6 == 0) goto LAB_140b4e3f7;
  }
  lVar6 = *(longlong *)(lVar3 + 0x428);
  if (lVar6 == 0) {
    uVar4 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x428) = lVar6;
  }
  plVar7 = (longlong *)(lVar3 + 0x420);
  if (*(longlong *)(lVar3 + 0x430) == 0) {
    if ((lVar6 == 0) || (*plVar7 == 0)) goto LAB_140b4e3f7;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0x430) = 0;
      goto LAB_140b4e3f7;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar4,plVar7);
    *(longlong *)(lVar3 + 0x430) = lVar6;
    if (lVar6 == 0) goto LAB_140b4e3f7;
  }
  lVar6 = *(longlong *)(lVar3 + 0x410);
  if (lVar6 == 0) {
    uVar4 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x410) = lVar6;
  }
  lVar5 = *(longlong *)(lVar3 + 0x418);
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar8 != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,plVar8);
    }
    *(longlong *)(lVar3 + 0x418) = lVar5;
  }
  plVar8 = (longlong *)(param_1 + 0x9b0);
  puVar9 = *(undefined4 **)(lVar5 + 8);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar6 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar6);
    DAT_14c947fe0 = lVar6;
  }
  FUN_140045924(DAT_14c947fe0,&local_68,puVar9,1);
  local_50 = local_68;
  FUN_1401533ba(local_5c,&local_50,1);
  uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,local_5c);
  *param_2 = uVar4;
  lVar6 = *(longlong *)(lVar3 + 0x428);
  if (lVar6 == 0) {
    uVar4 = FUN_140dddfde();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x428) = lVar6;
  }
  lVar5 = *(longlong *)(lVar3 + 0x430);
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar7 != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,plVar7);
    }
    *(longlong *)(lVar3 + 0x430) = lVar5;
  }
  puVar9 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(lVar5 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar6 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar6);
    DAT_14c947fe0 = lVar6;
  }
  FUN_140045924(DAT_14c947fe0,&local_70,puVar9,1);
  local_50 = local_70;
  FUN_1401533ba(local_5c,&local_50,1);
  uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,local_5c);
  *local_78 = uVar4;
LAB_140b4e3f7:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b4e694 FUN_140b4e694 body=91 status=ok
// SIG undefined FUN_140b4e694(void)

undefined8 FUN_140b4e694(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x2a8))();
    if ((longlong)*(int *)(puVar1 + 1) != 0) {
      piVar2 = (int *)*puVar1;
      lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x18;
      while ((*piVar2 != *param_2 || (piVar2[2] != param_2[2]))) {
        piVar2 = piVar2 + 6;
        lVar3 = lVar3 + -0x18;
        if (lVar3 == 0) {
          return 0;
        }
      }
      if (piVar2 != (int *)0x0) {
        return *(undefined8 *)(piVar2 + 4);
      }
    }
  }
  return 0;
}



// FUNCTION 140b4e6f0 FUN_140b4e6f0 body=5 status=ok
// SIG undefined FUN_140b4e6f0(void)

longlong FUN_140b4e6f0(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 140b4e6f6 FUN_140b4e6f6 body=54 status=ok
// SIG undefined FUN_140b4e6f6(void)

undefined1 FUN_140b4e6f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140b4e72c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 140b4e72c FUN_140b4e72c body=651 status=ok
// SIG undefined FUN_140b4e72c(void)

longlong * FUN_140b4e72c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[2] = lVar2;
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[3] = lVar2;
  lVar2 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar2;
  lVar2 = param_2[5];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[5];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[5] = lVar2;
  lVar2 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[6];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar2;
  lVar2 = param_2[7];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[7];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[7] = lVar2;
  lVar2 = param_2[8];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[8];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[8] = lVar2;
  lVar2 = param_2[9];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[9];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[9] = lVar2;
  lVar2 = param_2[10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[10];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[10] = lVar2;
  lVar2 = param_2[0xb];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
    }
  }
  param_1[0xb] = lVar2;
  lVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar2;
  return param_1;
}



// FUNCTION 140b4e9b8 FUN_140b4e9b8 body=741 status=ok
// SIG undefined FUN_140b4e9b8(void)

int * FUN_140b4e9b8(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14482b872(param_1,iVar13);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar5 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar15 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar15 = iVar8;
    }
    if (iVar15 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar7 = iVar8;
        }
        else {
          uVar14 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar14) {
              uVar10 = uVar14;
            }
          }
          else {
            uVar10 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar10 << 2,0);
          iVar7 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar14 <= iVar7) {
            iVar9 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar5,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar5;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar4 = (longlong)iVar13;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar8 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  iVar7 = 1;
  piVar2 = (int *)(*param_1 + lVar4 * 0x18);
  iVar8 = *(int *)*param_4;
  *piVar2 = iVar8;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = -1;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar14 != 0) && (uVar14 != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*piVar3 == iVar8) {
          iVar8 = piVar2[1];
          iVar7 = piVar2[2];
          iVar9 = piVar2[3];
          *piVar3 = *piVar2;
          piVar3[1] = iVar8;
          piVar3[2] = iVar7;
          piVar3[3] = iVar9;
          FUN_14322d6ca(param_1,iVar13);
          goto LAB_140b4eb1b;
        }
        iVar9 = piVar3[4];
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar14) {
    uVar11 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar14 < 1) || (iVar7 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    piVar2[5] = param_3;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar2[4] = *(int *)((longlong)plVar5 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_140b4ec9e(param_1);
  }
LAB_140b4eb1b:
  *param_2 = iVar13;
  return param_2;
}



// FUNCTION 140b4ec9e FUN_140b4ec9e body=625 status=ok
// SIG undefined FUN_140b4ec9e(void)

void FUN_140b4ec9e(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140b4ed10;
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
LAB_140b4ed10:
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



// FUNCTION 140b4ef10 FUN_140b4ef10 body=152 status=ok
// SIG undefined FUN_140b4ef10(void)

void FUN_140b4ef10(longlong param_1,uint param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x10))) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140b4efaa((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 8),&local_38);
    FUN_1406a922a(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4efaa FUN_140b4efaa body=80 status=ok
// SIG undefined FUN_140b4efaa(void)

longlong * FUN_140b4efaa(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1406a922a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140b4f008 FUN_140b4f008 body=656 status=ok
// SIG undefined FUN_140b4f008(void)

undefined8 FUN_140b4f008(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_98 [36];
  AccountId local_74;
  longlong local_70;
  longlong local_68;
  AccountId *pAStack_60;
  undefined1 local_54 [4];
  longlong local_50;
  AccountId *pAStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
    if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar1 == '\0'))
    goto LAB_140b4f188;
  }
  else if ((*(uint *)(param_3 + 8) & 0xffffff) == 0) goto LAB_140b4f188;
  local_68 = 0;
  pAStack_60 = (AccountId *)0x0;
  plVar5 = (longlong *)FUN_1408e4caa(param_3);
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_50);
  FUN_1446f470e(&local_70,L"SHIFT",1);
  if (local_50 != local_70) goto LAB_140b4f188;
  bVar2 = (&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)];
  if (bVar2 == 1) {
    uVar3 = 0xffffffff;
    if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar1 != '\0')) {
      bVar2 = (&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)];
LAB_140b4f0e2:
      if ((bVar2 & 1) == 0) {
        uVar8 = *(uint *)(param_3 + 8) & 0xffffff;
        uVar3 = uVar8 >> 0xd ^ (*(uint *)(param_3 + 8) >> 0x18) - uVar8;
        uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar8) - uVar3;
        uVar9 = uVar7 >> 0xd ^ (uVar8 - uVar3) - uVar7;
        uVar8 = uVar9 >> 0xc ^ (uVar3 - uVar7) - uVar9;
        uVar3 = uVar8 << 0x10 ^ (uVar7 - uVar9) - uVar8;
        uVar7 = uVar3 >> 5 ^ (uVar9 - uVar8) - uVar3;
        uVar8 = uVar7 >> 3 ^ (uVar8 - uVar3) - uVar7;
        uVar3 = uVar8 << 10 ^ (uVar3 - uVar7) - uVar8;
        uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar8 + uVar3);
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x40))();
      }
    }
  }
  else {
    if ((*(uint *)(param_3 + 8) & 0xffffff) != 0) goto LAB_140b4f0e2;
    uVar3 = 0xffffffff;
  }
  iVar4 = FUN_140ba4172(uVar3,param_3);
  if ((iVar4 == -1) || (lVar6 = (longlong)iVar4 * 0x30 + DAT_14cb979d0, lVar6 == 0)) {
    FUN_1405e6804(param_3,&local_50);
    local_68 = local_50;
    pAStack_60 = pAStack_48;
    local_74 = FUN_14657de13();
    pAStack_48 = &local_74;
    local_50 = param_3;
    FUN_14577f510(local_54,&local_50);
  }
  else {
    local_74 = *(AccountId *)(lVar6 + 0x20);
  }
  if (local_74 != 0) {
    local_50 = 0;
    FUN_1401e7ce8(param_1,param_2,&local_50);
    bifrost::telemetry::rowBuilder::vShiftUser
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),local_74);
    local_50 = 0;
    FUN_1401e7ce8(param_1,param_2,&local_50);
    bifrost::telemetry::rowBuilder::vServiceUser
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),local_74);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_140b4f188:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140b4f29a FUN_140b4f29a body=829 status=ok
// SIG undefined FUN_140b4f29a(void)

void FUN_140b4f29a(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (param_1 == (longlong *)0x0) goto LAB_140b4f40a;
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_140bc34ba(&local_88,lVar6);
  plVar10 = (longlong *)CONCAT44(uStack_7c,local_80);
  if (plVar10 == (longlong *)0x0) {
LAB_140b4f44e:
    bVar11 = true;
    plVar10 = (longlong *)0x0;
LAB_140b4f453:
    if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x155) & 0x20) != 0)) {
      FUN_14895ae6e(param_1);
    }
    else {
      uVar7 = FUN_144a88394(lVar6);
      FUN_1401924dc(param_1);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar3 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_98[2] = lVar8;
      *local_98 = &PTR_FUN_14b425bd0;
      local_98[3] = 0;
      FUN_14485c47a(local_98 + 3,param_1);
      puVar3[4] = param_1;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar7,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_98);
    }
    if (bVar11) goto LAB_140b4f40a;
  }
  else {
    iVar5 = (int)plVar10[1];
    do {
      if (iVar5 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_7c,local_80) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_7c,local_80) + 0x10))();
    }
    lVar8 = local_88;
    if (plVar10 == (longlong *)0x0) goto LAB_140b4f44e;
    if (local_88 == 0) {
      bVar11 = false;
      goto LAB_140b4f453;
    }
    if (((((*(int *)(local_88 + 0xc) == 0) || (uVar2 = *(uint *)(local_88 + 8), (int)uVar2 < 0)) ||
         (DAT_14c9647dc <= (int)uVar2)) ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(local_88 + 0xc))))) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
        ((*plVar9 == 0 || ((*(byte *)(*plVar9 + 0x155) & 0x20) != 0)))))) {
      FUN_140c7dd04(local_88,param_1);
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_1);
      }
      iVar5 = *(int *)(lVar8 + 0x60);
      *(uint *)(lVar8 + 0x60) = iVar5 + 1U;
      if (*(uint *)(lVar8 + 100) < iVar5 + 1U) {
        FUN_145781a2e((longlong *)(lVar8 + 0x58),iVar5);
      }
      *(longlong **)(*(longlong *)(lVar8 + 0x58) + (longlong)iVar5 * 8) = param_1;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_1);
      }
      FUN_144958d50(lVar8 + 0x20);
    }
  }
  LOCK();
  plVar9 = plVar10 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_140b4f40a:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b4f5f0 FUN_140b4f5f0 body=111 status=ok
// SIG undefined FUN_140b4f5f0(void)

ulonglong FUN_140b4f5f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_140b4f642:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140b4f642;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x30))
                (lVar4 + *(int *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140b4f660 FUN_140b4f660 body=641 status=ok
// SIG undefined FUN_140b4f660(void)

void FUN_140b4f660(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    lVar3 = param_1 + 0x3c0;
    if (*(longlong *)(param_1 + 0x3c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x3c8);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x3d0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x388) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar6 * 0x20) == param_3) {
          if (((lVar3 != 0) && ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0)) &&
             ((longlong)*(int *)(lVar3 + 0x10) != 0)) {
            plVar7 = *(longlong **)(lVar3 + 8);
            lVar3 = (longlong)*(int *)(lVar3 + 0x10) * 0x70;
            goto LAB_140b4f722;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_140b4f73c;
  while( true ) {
    plVar7 = plVar7 + 0xe;
    lVar3 = lVar3 + -0x70;
    if (lVar3 == 0) break;
LAB_140b4f722:
    if (*plVar7 == param_4) {
      if (((param_2 != 0) || (plVar7 == (longlong *)0x0)) ||
         ((lVar3 = FUN_1402070be(param_1,plVar7 + 8), lVar3 == 0 ||
          (FUN_1403c747e(param_1,&local_28,plVar7[7]), plVar7 = local_28,
          local_28 == (longlong *)0x0)))) break;
      plVar2 = *(longlong **)(param_1 + 0x20);
      if ((plVar2 == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) {
LAB_140b4f8b2:
        plVar4 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x18);
        plVar4 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x1c))) ||
             ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_140b4f8b2;
          if (*(code **)(*plVar2 + 0x30) == (code *)&LAB_14479b63c) {
            plVar4 = plVar2 + -0xa4;
            if ((longlong *)plVar2[-0x77] != (longlong *)0x0) {
              plVar4 = (longlong *)plVar2[-0x77];
            }
          }
          else {
            plVar4 = (longlong *)(**(code **)(*plVar2 + 0x30))();
          }
        }
      }
      local_48 = 0;
      FUN_14084a448(plVar7,&local_40,lVar3,plVar4);
      local_40 = 0;
      local_38 = 0xffffffffffffffff;
      if (((local_28 == (longlong *)0x0) ||
          (*(int *)(local_28 + 0x21) = (int)local_28[0x21] + -1, 0 < (int)local_28[0x26])) ||
         (FUN_1400847bc(local_28 + 0x17,0), (int)local_28[0x21] != 0)) break;
      FUN_140087e46(local_28);
      if (*local_28 != -1) {
        if (DAT_14cb259f8 == 0) break;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_28);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_28);
      }
      break;
    }
  }
LAB_140b4f73c:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b4f8e2 FUN_140b4f8e2 body=562 status=ok
// SIG undefined FUN_140b4f8e2(void)

undefined8
FUN_140b4f8e2(longlong *param_1,int param_2,undefined8 param_3,longlong *param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  
  iVar25 = *(int *)((longlong)param_1 + 0x2c);
  iVar17 = (**(code **)(*param_1 + 0xd8))();
  if (iVar17 < param_2 - iVar25) {
LAB_140b4fb0d:
    uVar21 = 0;
  }
  else {
    uVar19 = *(uint *)((longlong)param_1 + 0x2c);
    uVar23 = -(int)((longlong)param_2 % (longlong)(int)uVar19);
    uVar24 = (ulonglong)uVar23;
    if ((int)uVar23 < 0) {
      uVar24 = (longlong)param_2 % (longlong)(int)uVar19 & 0xffffffff;
    }
    lVar5 = param_1[2];
    lVar20 = uVar24 * 0x70;
    if (*(int *)(lVar5 + 0xc + lVar20) == param_2) {
      *(int *)((longlong)param_1 + 0x24) = param_2;
      *(int *)(param_1 + 5) = (int)uVar24;
      lVar6 = *(longlong *)(lVar5 + 8 + lVar20);
      *(undefined8 *)((longlong)param_4 + 0xe) = *(undefined8 *)(lVar5 + 0xe + lVar20);
      param_4[1] = lVar6;
      plVar1 = (longlong *)(lVar5 + 0x18 + lVar20);
      lVar6 = plVar1[1];
      plVar2 = (longlong *)(lVar5 + 0x28 + lVar20);
      lVar14 = *plVar2;
      lVar15 = plVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x34 + lVar20);
      uVar21 = *puVar3;
      uVar16 = puVar3[1];
      param_4[3] = *plVar1;
      param_4[4] = lVar6;
      param_4[5] = lVar14;
      param_4[6] = lVar15;
      *(undefined8 *)((longlong)param_4 + 0x34) = uVar21;
      *(undefined8 *)((longlong)param_4 + 0x3c) = uVar16;
      plVar1 = (longlong *)(lVar5 + 0x48 + lVar20);
      lVar6 = plVar1[1];
      plVar2 = (longlong *)(lVar5 + 0x58 + lVar20);
      lVar14 = *plVar2;
      lVar15 = plVar2[1];
      param_4[9] = *plVar1;
      param_4[10] = lVar6;
      param_4[0xb] = lVar14;
      param_4[0xc] = lVar15;
      uVar24 = *(ulonglong *)(lVar5 + 0x68 + lVar20);
      param_4[0xd] = uVar24;
    }
    else {
      if ((int)uVar19 < 1) {
        return 0;
      }
      if (param_5 != '\0') {
        return 0;
      }
      iVar25 = 0;
      do {
        uVar24 = (ulonglong)(uint)(param_2 + iVar25);
        if (param_2 + iVar25 < 1) {
          uVar24 = 0;
        }
        uVar23 = (uint)(uVar24 % (ulonglong)uVar19);
        if (*(int *)(lVar5 + 0xc + (uVar24 % (ulonglong)uVar19) * 0x70) == (int)uVar24)
        goto LAB_140b4f9ce;
        iVar25 = iVar25 + -1;
      } while (uVar19 + iVar25 != 0);
      uVar23 = 0xffffffff;
LAB_140b4f9ce:
      uVar26 = 0;
      do {
        uVar24 = (longlong)(int)(param_2 + uVar26) % (longlong)(int)uVar19;
        uVar18 = -(int)uVar24;
        uVar22 = (ulonglong)uVar18;
        if ((int)uVar18 < 0) {
          uVar22 = uVar24 & 0xffffffff;
        }
        if (param_2 + uVar26 == *(int *)(lVar5 + 0xc + uVar22 * 0x70)) {
          if (uVar23 == 0xffffffff) goto LAB_140b4fb0d;
          lVar27 = (ulonglong)uVar23 * 0x70;
          lVar20 = *(longlong *)(lVar5 + 8 + lVar27);
          *(undefined8 *)((longlong)param_4 + 0xe) = *(undefined8 *)(lVar5 + 0xe + lVar27);
          param_4[1] = lVar20;
          plVar1 = (longlong *)(lVar5 + 0x18 + lVar27);
          lVar20 = *plVar1;
          lVar6 = plVar1[1];
          plVar1 = (longlong *)(lVar5 + 0x28 + lVar27);
          lVar14 = *plVar1;
          lVar15 = plVar1[1];
          puVar4 = (undefined4 *)(lVar5 + 0x34 + lVar27);
          uVar7 = puVar4[1];
          uVar8 = puVar4[2];
          uVar9 = puVar4[3];
          *(undefined4 *)((longlong)param_4 + 0x34) = *puVar4;
          *(undefined4 *)(param_4 + 7) = uVar7;
          *(undefined4 *)((longlong)param_4 + 0x3c) = uVar8;
          *(undefined4 *)(param_4 + 8) = uVar9;
          param_4[5] = lVar14;
          param_4[6] = lVar15;
          param_4[3] = lVar20;
          param_4[4] = lVar6;
          param_4[0xd] = *(longlong *)(lVar5 + 0x68 + lVar27);
          puVar4 = (undefined4 *)(lVar5 + 0x48 + lVar27);
          uVar7 = *puVar4;
          uVar8 = puVar4[1];
          uVar9 = puVar4[2];
          uVar10 = puVar4[3];
          puVar4 = (undefined4 *)(lVar5 + 0x58 + lVar27);
          uVar11 = puVar4[1];
          uVar12 = puVar4[2];
          uVar13 = puVar4[3];
          *(undefined4 *)(param_4 + 0xb) = *puVar4;
          *(undefined4 *)((longlong)param_4 + 0x5c) = uVar11;
          *(undefined4 *)(param_4 + 0xc) = uVar12;
          *(undefined4 *)((longlong)param_4 + 100) = uVar13;
          *(undefined4 *)(param_4 + 9) = uVar7;
          *(undefined4 *)((longlong)param_4 + 0x4c) = uVar8;
          *(undefined4 *)(param_4 + 10) = uVar9;
          *(undefined4 *)((longlong)param_4 + 0x54) = uVar10;
          (**(code **)(*param_4 + 0x50))(param_4,param_1[2] + lVar27,uVar22 * 0x70 + param_1[2]);
          iVar17 = param_2 - *(int *)(param_1[2] + 0xc + lVar27);
          iVar25 = -iVar17;
          if (iVar25 < 0) {
            iVar25 = iVar17;
          }
          *(int *)((longlong)param_4 + 0xc) = param_2;
          uVar19 = iVar25 + *(int *)(param_1[2] + 8 + lVar27);
          uVar24 = (ulonglong)uVar19;
          *(uint *)(param_4 + 1) = uVar19;
          goto LAB_140b4fa6c;
        }
        uVar26 = uVar26 + 1;
      } while (uVar19 != uVar26);
      if (uVar23 == 0xffffffff) goto LAB_140b4fb0d;
      uVar24 = (ulonglong)uVar23 * 0x70;
      lVar20 = *(longlong *)(lVar5 + 8 + uVar24);
      *(undefined8 *)((longlong)param_4 + 0xe) = *(undefined8 *)(lVar5 + 0xe + uVar24);
      param_4[1] = lVar20;
      plVar1 = (longlong *)(lVar5 + 0x18 + uVar24);
      lVar20 = *plVar1;
      lVar6 = plVar1[1];
      plVar1 = (longlong *)(lVar5 + 0x28 + uVar24);
      lVar14 = *plVar1;
      lVar15 = plVar1[1];
      puVar3 = (undefined8 *)(lVar5 + 0x34 + uVar24);
      uVar21 = puVar3[1];
      *(undefined8 *)((longlong)param_4 + 0x34) = *puVar3;
      *(undefined8 *)((longlong)param_4 + 0x3c) = uVar21;
      param_4[5] = lVar14;
      param_4[6] = lVar15;
      param_4[3] = lVar20;
      param_4[4] = lVar6;
      plVar1 = (longlong *)(lVar5 + 0x48 + uVar24);
      lVar20 = *plVar1;
      lVar6 = plVar1[1];
      plVar1 = (longlong *)(lVar5 + 0x58 + uVar24);
      lVar14 = plVar1[1];
      param_4[0xb] = *plVar1;
      param_4[0xc] = lVar14;
      param_4[9] = lVar20;
      param_4[10] = lVar6;
      param_4[0xd] = *(longlong *)(lVar5 + 0x68 + uVar24);
      param_2 = param_2 - *(int *)(param_1[2] + 0xc + uVar24);
      iVar25 = -param_2;
      if (iVar25 < 0) {
        iVar25 = param_2;
      }
      *(int *)(param_4 + 1) = iVar25 + *(int *)(param_1[2] + 8 + uVar24);
LAB_140b4fa6c:
      *(undefined4 *)(param_4 + 2) = 0xffffffff;
    }
    uVar21 = CONCAT71((int7)(uVar24 >> 8),1);
  }
  return uVar21;
}



// FUNCTION 140b4fb18 FUN_140b4fb18 body=198 status=ok
// SIG undefined FUN_140b4fb18(void)

void FUN_140b4fb18(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar1 = param_1[0x45];
  if (lVar1 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    param_1[0x1e] = lVar1;
    param_1[0x45] = 0;
  }
  FUN_140b4fbe0(param_1 + 0x1b);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140b4fd32(param_1 + 0x1b);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b4fbe0 FUN_140b4fbe0 body=337 status=ok
// SIG undefined FUN_140b4fbe0(void)

void FUN_140b4fbe0(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_1 + 0x149) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x149) = 1;
  fVar1 = *(float *)(param_1 + 0x27);
  if ((fVar1 != 0.1) || (NAN(fVar1))) {
    *(float *)(param_1 + 7) = fVar1;
    *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_1 + 0x145);
    if ((*(byte *)((longlong)param_1 + 0x13c) & 1) == 0) goto LAB_140b4fc6f;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x13c) & 1) == 0) {
      *(float *)(param_1 + 7) = fVar1;
      *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_1 + 0x145);
LAB_140b4fc6f:
      uVar4 = 0;
      goto LAB_140b4fc71;
    }
    if ((((*(float *)(param_1 + 0x28) == 0.1) && (!NAN(*(float *)(param_1 + 0x28)))) &&
        (*(char *)((longlong)param_1 + 0x144) == '\x01')) &&
       (((*(char *)((longlong)param_1 + 0x145) == '\0' &&
         (*(char *)((longlong)param_1 + 0x146) == '\x01')) &&
        ((*(char *)((longlong)param_1 + 0x147) == '\0' && ((char)param_1[0x29] != '\0')))))) {
      return;
    }
    *(float *)(param_1 + 7) = fVar1;
    *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_1 + 0x145);
  }
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x146);
LAB_140b4fc71:
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0x28];
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)((longlong)param_1 + 0x147);
  if (*(char *)((longlong)param_1 + 0x144) == '\x01') {
    uVar4 = (undefined1)param_1[0x29];
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar2 + 0x30 + lVar5) = *(undefined4 *)(lVar2 + 0xe4 + lVar5);
      *(undefined1 *)(lVar2 + 0x34 + lVar5) = *(undefined1 *)(lVar2 + 0xec + lVar5);
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = *(undefined4 *)(lVar2 + 0xe8 + lVar5);
      *(undefined1 *)(lVar2 + 0x54 + lVar5) = *(undefined1 *)(lVar2 + 0xed + lVar5);
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)(int)lVar3 * 0xf0 - lVar5 != 0);
  }
  return;
}



// FUNCTION 140b4fd32 FUN_140b4fd32 body=625 status=ok
// SIG undefined FUN_140b4fd32(void)

void FUN_140b4fd32(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = param_1 + 0x21;
  lVar3 = param_1[0x22];
  if ((lVar3 == 0) && (*plVar1 == 0)) {
    lVar3 = param_1[0x25];
    if (lVar3 == 0) {
      if (param_1[0x24] == 0) goto LAB_140b4fd75;
      param_1[2] = param_1[0x24];
      lVar3 = 0;
    }
    else {
      param_1[2] = param_1[0x24];
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
        lVar3 = param_1[0x25];
      }
    }
    param_1[3] = lVar3;
    *(int *)(param_1 + 4) = (int)param_1[0x26];
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    FUN_14079c534(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
      FUN_1489aba52(param_1);
    }
    lVar3 = FUN_1489a5194(param_1);
    *(longlong *)(lVar3 + 4) = DAT_14cb8d440;
  }
  else if ((param_1[0x25] == 0) && (param_1[0x24] == 0)) {
    if (lVar3 == 0) {
      if (*plVar1 == 0) goto LAB_140b4fd75;
      param_1[2] = *plVar1;
      lVar3 = 0;
    }
    else {
      param_1[2] = param_1[0x21];
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
        lVar3 = param_1[0x22];
      }
    }
    param_1[3] = lVar3;
    *(int *)(param_1 + 4) = (int)param_1[0x23];
  }
  else {
    *(undefined1 *)(param_1 + 5) = 0;
    if ((longlong)(int)param_1[1] != 0) {
      lVar3 = *param_1;
      lVar4 = (longlong)(int)param_1[1] * 0xf0;
      do {
        if (*(longlong *)(lVar3 + 4) == DAT_14cb8d438) {
          if (lVar3 != 0) goto LAB_140b4fdfa;
          break;
        }
        lVar3 = lVar3 + 0xf0;
        lVar4 = lVar4 + -0xf0;
      } while (lVar4 != 0);
    }
    lVar3 = FUN_1489a5194(param_1);
    *(longlong *)(lVar3 + 4) = DAT_14cb8d438;
LAB_140b4fdfa:
    *(longlong *)(lVar3 + 0x10) = param_1[0x21];
    lVar4 = param_1[0x22];
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = param_1[0x22];
      }
    }
    *(longlong *)(lVar3 + 0x18) = lVar4;
    *(int *)(lVar3 + 0x20) = (int)param_1[0x23];
    if ((longlong)(int)param_1[1] != 0) {
      lVar3 = *param_1;
      lVar4 = (longlong)(int)param_1[1] * 0xf0;
      do {
        if (*(longlong *)(lVar3 + 4) == DAT_14cb8d440) {
          if (lVar3 != 0) goto LAB_140b4fe7a;
          break;
        }
        lVar3 = lVar3 + 0xf0;
        lVar4 = lVar4 + -0xf0;
      } while (lVar4 != 0);
    }
    lVar3 = FUN_1489a5194(param_1);
    *(longlong *)(lVar3 + 4) = DAT_14cb8d440;
LAB_140b4fe7a:
    *(longlong *)(lVar3 + 0x10) = param_1[0x24];
    lVar4 = param_1[0x25];
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = param_1[0x25];
      }
    }
    *(longlong *)(lVar3 + 0x18) = lVar4;
    *(int *)(lVar3 + 0x20) = (int)param_1[0x26];
  }
LAB_140b4fd75:
  *plVar1 = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 1;
  return;
}



// FUNCTION 140b4ffa4 FUN_140b4ffa4 body=30 status=ok
// SIG undefined FUN_140b4ffa4(void)

void FUN_140b4ffa4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x6f0))();
  FUN_140b4ffc2(param_1);
  return;
}



// FUNCTION 140b4ffc2 FUN_140b4ffc2 body=1696 status=ok
// SIG undefined FUN_140b4ffc2(void)

void FUN_140b4ffc2(longlong *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14078a36a(param_1 + 0x23f,param_1 + 0x76);
  (**(code **)(*param_1 + 0x698))(param_1);
  bVar3 = *(byte *)((longlong)param_1 + 100);
  if ((bVar3 & 1) != 0) {
    plVar8 = param_1 + 0x24e;
    plVar12 = param_1 + 0xdc;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *plVar12 = *plVar8;
      plVar8 = plVar8 + 1;
      plVar12 = plVar12 + 1;
    }
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  FUN_14078a0a0(param_1 + 0x73,0);
  FUN_140b5133a(param_1);
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x678))(param_1);
  if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x1c7] = (longlong)plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_140b50340;
  }
  else {
    FUN_1456cec3c(plVar8);
    param_1[0x1c7] = (longlong)plVar8;
  }
  (**(code **)(*plVar8 + 0x618))(plVar8,param_1[0x1c2]);
  if ((char)param_1[0x2f] == '\x03') {
    if (*(char *)(param_1[0x1c2] + 0x250) < '\0') {
      if (*(byte *)((longlong)param_1 + 0x13a9) == 0) {
        *(undefined1 *)((longlong)param_1 + 0x13a9) = 1;
      }
LAB_140b505a4:
      lVar11 = param_1[0x36];
      if (lVar11 != 0) {
        uVar10 = FUN_140757e32();
        plVar8 = (longlong *)FUN_144718840(lVar11,uVar10);
        if ((plVar8 != (longlong *)0x0) && (*(char *)(lVar11 + 0x178) == '\x03')) {
          uVar14 = (**(code **)(*plVar8 + 0x18))(plVar8);
          *(undefined4 *)(param_1[0x1c7] + 0x4c0) = uVar14;
          if ((0.0 < *(float *)(param_1[0x1c7] + 0x4c0)) &&
             (lVar11 = *(longlong *)(param_1[0x1c7] + 0x118), lVar11 != 0)) {
            pbVar2 = (byte *)(lVar11 + 0x2e4);
            *pbVar2 = *pbVar2 | 8;
          }
        }
      }
    }
    else if ((*(byte *)((longlong)param_1 + 0x13a9) & 1) != 0) goto LAB_140b505a4;
    if (((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) &&
       (((~*(byte *)(param_1[0x1c2] + 0x251) & 3) == 0 ||
        (((*(byte *)(param_1[0x1c2] + 0x300) & 1) != 0 &&
         (lVar11 = FUN_140ccfc10(), *(char *)(lVar11 + 0xea8) == '\x01')))))) {
      FUN_14045a684(param_1 + 0x26e,1);
    }
  }
  if (((param_1[0x1c7] != 0) &&
      (pfVar1 = (float *)(param_1[0x1c7] + 0x4c0), *pfVar1 <= 0.0001 && *pfVar1 != 0.0001)) &&
     (*(char *)((longlong)param_1 + 0x13a9) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x13a9) = 0;
  }
  plVar8 = (longlong *)(**(code **)(param_1[0x73] + 0x38))();
  if (plVar8 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar8 + 8))();
    lVar9 = FUN_140b5066a();
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30)) {
      lVar11 = param_1[0x1c7];
      *(longlong *)(lVar11 + 0x398) = plVar8[0x47];
      uVar14 = *(undefined4 *)((longlong)plVar8 + 0x22c);
      lVar9 = plVar8[0x46];
      uVar6 = *(undefined4 *)((longlong)plVar8 + 0x234);
      *(int *)(lVar11 + 0x388) = (int)plVar8[0x45];
      *(undefined4 *)(lVar11 + 0x38c) = uVar14;
      *(int *)(lVar11 + 0x390) = (int)lVar9;
      *(undefined4 *)(lVar11 + 0x394) = uVar6;
    }
  }
  if ((char)param_1[0x22c] != '\0') {
    FUN_140b3d268(param_1,param_1 + 0x22d);
  }
  *(float *)(param_1[0x1c7] + 0x178) =
       *(float *)(param_1 + 0x22b) * *(float *)(param_1[0x1c7] + 0x178);
  *(float *)(param_1[0x1c7] + 0x17c) =
       *(float *)(param_1 + 0x22b) * *(float *)(param_1[0x1c7] + 0x17c);
  if ((*(byte *)((longlong)param_1 + 0x1151) & 2) != 0) {
    *(undefined4 *)(param_1[0x1c7] + 0x1a8) = *(undefined4 *)((longlong)param_1 + 0x1154);
  }
  if (((*(uint *)(param_1 + 1) & 0x20) == 0) && (lVar11 = FUN_1447210f0(), lVar11 != 0)) {
    FUN_140b506a4();
  }
  if ((char)param_1[0x2f] != '\x03') {
    iVar4 = *(int *)((longlong)param_1 + 0x1014);
    if (iVar4 != 0) {
      lVar11 = param_1[0x1c7];
      *(int *)(lVar11 + 0x428) = iVar4;
      *(int *)(lVar11 + 0x42c) = iVar4;
    }
    bVar13 = 1;
    if (((((param_1[0x1ef] != 0) || (param_1[0x1f0] != 0)) || ((double)param_1[0x1f2] != 0.0)) ||
        ((NAN((double)param_1[0x1f2]) || ((double)param_1[499] != 0.0)))) ||
       (NAN((double)param_1[499]))) {
LAB_140b5057f:
      FUN_140478a46(param_1[0x1c7] + 0x3a0,bVar13);
    }
    else if (((double)param_1[500] != 0.0) || (NAN((double)param_1[500]))) {
      bVar13 = -((double)param_1[500] != 0.0) & 1;
      goto LAB_140b5057f;
    }
    if (*(char *)((longlong)param_1 + 0xf74) == '\x01') {
      FUN_14118107a(param_1[0x1c7] + 0x3a0,1);
    }
  }
  plVar8 = (longlong *)param_1[0x39];
  if (plVar8 == (longlong *)0x0) {
    if ((*(byte *)(param_1[0x1c2] + 0x124) & 1) != 0) goto LAB_140b50340;
    plVar12 = (longlong *)0x0;
LAB_140b502a2:
    plVar8 = plVar12;
    if (((param_1[0x1e5] != 0) && (plVar8 != (longlong *)0x0)) &&
       ((int)param_1[0x1e6] - 1U < 0xfffffffe)) goto LAB_140b5031c;
    if (plVar8 == (longlong *)0x0) goto LAB_140b50340;
  }
  else {
    if (DAT_14cac6e60 == 0) {
      local_60 = &local_48;
      local_48 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b47bc4;
      local_68 = &LAB_1478989f1;
      local_70 = &LAB_146391124;
      local_78 = L"Engine";
      local_80 = 0x10000000000;
      local_88 = 0x10000005;
      local_90 = 0x10;
      local_98 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      plVar8 = (longlong *)param_1[0x39];
      if (plVar8 != (longlong *)0x0) goto LAB_140b50262;
      plVar8 = (longlong *)0x0;
LAB_140b5065c:
      plVar12 = (longlong *)0x0;
    }
    else {
LAB_140b50262:
      plVar12 = (longlong *)0x0;
      if ((DAT_14cac6e60 != 0) && (lVar11 = plVar8[2], lVar11 != 0)) {
        if (*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) goto LAB_140b5065c;
        plVar12 = (longlong *)0x0;
        if (*(longlong *)
             (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
            DAT_14cac6e60 + 0x30) {
          plVar12 = plVar8;
        }
      }
    }
    if ((*(byte *)(param_1[0x1c2] + 0x124) & 1) == 0) goto LAB_140b502a2;
    if (plVar12 == (longlong *)0x0) goto LAB_140b50340;
LAB_140b5031c:
    *(byte *)((longlong)plVar8 + 0x2d3) = *(byte *)((longlong)plVar8 + 0x2d3) | 0x40;
  }
  *(undefined1 *)((longlong)plVar8 + 0x2eb) = 0;
  cVar7 = (**(code **)(*plVar8 + 0x480))(plVar8,0);
  if ((cVar7 != '\0') && ((*(byte *)(param_1[0x1c2] + 0x250) & 0x20) != 0)) {
    FUN_1411dc36a(param_1);
  }
LAB_140b50340:
  if ((((bVar3 & 1) != 0) && ((char)param_1[0x2f] != '\x03')) &&
     ((*(byte *)(param_1 + 0xc) & 0x10) != 0)) {
    (**(code **)(*param_1 + 0x428))(param_1);
  }
  local_48 = (code *)0x0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x670))(param_1,&local_48);
  FUN_14078b280(param_1 + 0xee,param_1,&local_48);
  (**(code **)(*param_1 + 0x688))(param_1);
  pcVar5 = (code *)param_1[0x25a];
  if (pcVar5 != (code *)0x0) {
    plVar8 = param_1 + 0x25e;
    if ((longlong *)param_1[0x25c] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x25c];
    }
    uVar10 = (**(code **)(*plVar8 + 8))();
    (*pcVar5)(uVar10);
  }
  (**(code **)(*param_1 + 0x690))(param_1);
  if (local_48 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b5066a FUN_140b5066a body=57 status=ok
// SIG undefined FUN_140b5066a(void)

void FUN_140b5066a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e8f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e8f0 = FUN_140002ddd(FUN_14653cb68,uVar1,L"ProjectileBodySettings");
  }
  return;
}



// FUNCTION 140b506a4 FUN_140b506a4 body=56 status=ok
// SIG undefined FUN_140b506a4(void)

void FUN_140b506a4(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      FUN_140b506dc(param_1,lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140b506dc FUN_140b506dc body=941 status=ok
// SIG undefined FUN_140b506dc(void)

void FUN_140b506dc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
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
  longlong local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((param_1 == (longlong *)0x0) || ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) ||
       (param_2 == 0)) ||
      (((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0 ||
       ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)))) ||
     ((*(int *)(param_2 + 0x78c) != 0 ||
      ((lVar1 = param_1[0x15], lVar1 != 0 && (*(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) < 0))))))
  goto LAB_140b50736;
  if ((*(byte *)((longlong)param_1 + 0x9f) & 4) == 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
  }
  param_1[0x16] = param_2;
  FUN_14342c1dc(param_1,param_3);
  bVar5 = *(byte *)(param_2 + 0x152);
  if ((bVar5 == 1) || ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))) {
    if (lVar1 == 0) {
      if ((*(byte *)((longlong)param_1 + 0x9f) & 9) == 1) {
        (**(code **)(*param_1 + 0x378))(param_1);
      }
      goto LAB_140b5081b;
    }
    bVar5 = *(byte *)(lVar1 + 0x65) & 0x18;
    if (((*(byte *)((longlong)param_1 + 0x9f) & 9) == 1) && ((*(byte *)(lVar1 + 100) & 2) != 0)) {
      (**(code **)(*param_1 + 0x378))(param_1);
      if ((bVar5 == 0x10) || (bVar5 == 8)) {
        if (*(char *)((longlong)param_1 + 0x9c) < '\0') {
          FUN_14010f056(lVar1,param_1);
        }
        goto LAB_140b507d3;
      }
    }
    else {
LAB_140b507d3:
      if (((bVar5 == 0x10) || (bVar5 == 8)) &&
         (FUN_1449483a0(param_1,1), (*(byte *)((longlong)param_1 + 0x9f) & 0x20) == 0)) {
        (**(code **)(*param_1 + 0x388))(param_1);
      }
    }
  }
  else {
LAB_140b5081b:
    FUN_1449483a0(param_1,1);
  }
  if ((byte)(*(char *)((longlong)param_1 + 0xb9) - 1U) < 2) {
    local_68 = 0;
    uStack_60 = 0;
    local_b8 = 0x200000;
    FUN_14086ecde(param_1,&local_68,1,0);
    lVar4 = local_68;
    lVar6 = (longlong)(int)uStack_60;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar7);
        if (lVar2 != 0) {
          if (DAT_14cad00c8 == 0) {
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_80 = &local_50;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
          }
          if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) &&
             (((*(byte *)(lVar2 + 0x9d) & 0x20) != 0 &&
              (((*(byte *)(lVar2 + 0x9c) & 1) == 0 && (*(longlong *)(lVar2 + 0xa8) == lVar1)))))) {
            FUN_140b506dc(lVar2,param_2,0);
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x188) != 0)) {
    plVar3 = (longlong *)FUN_140389788();
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar4 = plVar3[0x22];
    }
    if ((*(byte *)(lVar4 + 0x49) & 8) != 0) {
      FUN_1408c9530(param_1[2],*(undefined8 *)(lVar1 + 0x188),param_1);
    }
  }
LAB_140b50736:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b50a8a FUN_140b50a8a body=41 status=ok
// SIG undefined FUN_140b50a8a(void)

undefined8 FUN_140b50a8a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b50aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140b50ad0 FUN_140b50ad0 body=63 status=ok
// SIG undefined FUN_140b50ad0(void)

void FUN_140b50ad0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x136c) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x136b) == '\0') {
      (**(code **)(*param_1 + 0x6d0))(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x000140b50b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6a8))(param_1);
    return;
  }
  return;
}



// FUNCTION 140b50b10 FUN_140b50b10 body=117 status=ok
// SIG undefined FUN_140b50b10(void)

void FUN_140b50b10(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xe10);
  if (lVar4 != 0) {
    uVar1 = *(undefined1 *)(lVar4 + 0x412);
    uVar2 = *(undefined1 *)(lVar4 + 0x410);
    uVar3 = *(undefined1 *)(lVar4 + 0x411);
    uVar5 = FUN_1447210f0();
    FUN_140b50c30(param_1 + 0x940,uVar5,lVar4 + 0x3f0,lVar4 + 0x400,uVar2,uVar3,uVar1);
  }
  return;
}



// FUNCTION 140b50b86 FUN_140b50b86 body=168 status=ok
// SIG undefined FUN_140b50b86(void)

void FUN_140b50b86(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xe10) != 0) {
    FUN_140b51d72(*(longlong *)(param_1 + 0xe10),&local_30);
    if ((longlong)(int)local_28 != 0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + local_28;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_28) {
        FUN_140789f3e(param_2,iVar1);
      }
      memmove((void *)((longlong)iVar1 * 8 + *param_2),local_30,(longlong)(int)local_28 << 3);
      local_28 = 0;
    }
    if (local_30 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b50c30 FUN_140b50c30 body=279 status=ok
// SIG undefined FUN_140b50c30(void)

void FUN_140b50c30(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x152) & 0xfe) != 4)) {
    lVar2 = param_3[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_3;
      lVar3 = 0;
      do {
        FUN_140b50f46(param_1,*(undefined8 *)(lVar1 + 0x38 + lVar3),
                      *(undefined4 *)(lVar1 + 0x40 + lVar3),*(undefined4 *)(lVar1 + 0x44 + lVar3),
                      *(undefined1 *)(lVar1 + 0x48 + lVar3),*(undefined1 *)(lVar1 + 0x49 + lVar3),
                      *(undefined1 *)(lVar1 + 0x4a + lVar3));
        lVar3 = lVar3 + 0x50;
      } while ((longlong)(int)lVar2 * 0x50 != lVar3);
    }
    lVar2 = param_4[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_4;
      lVar3 = 0;
      do {
        FUN_140b511ca(param_1,*(undefined8 *)(lVar1 + 0x38 + lVar3),
                      *(undefined4 *)(lVar1 + 0x40 + lVar3),*(undefined4 *)(lVar1 + 0x44 + lVar3),
                      *(undefined1 *)(lVar1 + 0x48 + lVar3),*(undefined1 *)(lVar1 + 0x49 + lVar3),
                      *(undefined1 *)(lVar1 + 0x4a + lVar3));
        lVar3 = lVar3 + 0x50;
      } while ((longlong)(int)lVar2 * 0x50 != lVar3);
    }
    *(undefined1 *)(param_1 + 0x188) = param_5;
    *(undefined1 *)(param_1 + 0x18b) = param_6;
    *(undefined1 *)(param_1 + 0x18c) = param_7;
  }
  return;
}



// FUNCTION 140b50d48 FUN_140b50d48 body=279 status=ok
// SIG undefined FUN_140b50d48(void)

undefined8 FUN_140b50d48(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    uVar2 = FUN_140b50e60();
    if ((*(longlong *)(param_1 + 0xe10) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xe10) + 0x175) & 1) != 0)) {
      *(byte *)(param_1 + 0x1151) = *(byte *)(param_1 + 0x1151) | 4;
      uVar2 = FUN_140b3d448();
    }
    lVar1 = DAT_14cb89e38;
    if (DAT_14cb89e38 == 0) {
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
    }
    local_68 = (longlong *)0x0;
    local_38 = 0;
    local_98 = 0;
    local_a8 = lVar1;
    uStack_a0 = 0x41;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    lStack_78 = 0;
    local_b8 = uVar2;
    local_b0 = param_1;
    uVar2 = FUN_1402710dd(&local_b8);
    if (lStack_78 != 0) {
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b50e60 FUN_140b50e60 body=228 status=ok
// SIG undefined FUN_140b50e60(void)

longlong FUN_140b50e60(void)

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
  if (DAT_14cb62588 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e96e0;
    local_38 = &LAB_1486e4f57;
    local_40 = &LAB_140bf6a9b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x520;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProjectileMovementComponent",&DAT_14cb62588,FUN_1464f822e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b50f46 FUN_140b50f46 body=366 status=ok
// SIG undefined FUN_140b50f46(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140b50f46(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90[1] = 0;
  local_68 = 4;
  local_80 = 1;
  local_58 = (DAT_14c9a8634 & 0x20) == 0;
  local_60 = 1;
  uStack_40 = param_5;
  uStack_3f = param_6;
  uStack_3e = param_7;
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + 1U;
  local_50 = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  if (*(uint *)(param_1 + 0xb4) < iVar1 + 1U) {
    FUN_140b510b6(param_1 + 0xa8,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  lVar5 = (longlong)iVar1 * 0x50;
  FUN_14034cca6(lVar2 + lVar5,local_90 + 1);
  puVar4 = (undefined4 *)(lVar2 + 0x38 + lVar5);
  *puVar4 = (undefined4)local_50;
  puVar4[1] = local_50._4_4_;
  puVar4[2] = uStack_48;
  puVar4[3] = uStack_44;
  *(uint *)(lVar2 + 0x47 + lVar5) =
       CONCAT13(uStack_3e,CONCAT12(uStack_3f,CONCAT11(uStack_40,uStack_44._3_1_)));
  local_90[0] = param_1;
  FUN_1403597f2(local_90,param_1 + 0xb8,param_1 + 0xa8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (local_68 < 0x19) {
      puVar4 = &local_80;
    }
    else {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar3)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b510b6 FUN_140b510b6 body=275 status=ok
// SIG undefined FUN_140b510b6(void)

void FUN_140b510b6(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b511ca FUN_140b511ca body=366 status=ok
// SIG undefined FUN_140b511ca(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140b511ca(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90[1] = 0;
  local_68 = 4;
  local_80 = 1;
  local_58 = (DAT_14c9a8634 & 0x20) == 0;
  local_60 = 1;
  uStack_40 = param_5;
  uStack_3f = param_6;
  uStack_3e = param_7;
  iVar1 = *(int *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = iVar1 + 1U;
  local_50 = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  if (*(uint *)(param_1 + 0x124) < iVar1 + 1U) {
    FUN_140b510b6(param_1 + 0x118,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x118);
  lVar5 = (longlong)iVar1 * 0x50;
  FUN_14034cca6(lVar2 + lVar5,local_90 + 1);
  puVar4 = (undefined4 *)(lVar2 + 0x38 + lVar5);
  *puVar4 = (undefined4)local_50;
  puVar4[1] = local_50._4_4_;
  puVar4[2] = uStack_48;
  puVar4[3] = uStack_44;
  *(uint *)(lVar2 + 0x47 + lVar5) =
       CONCAT13(uStack_3e,CONCAT12(uStack_3f,CONCAT11(uStack_40,uStack_44._3_1_)));
  local_90[0] = param_1;
  FUN_1403597f2(local_90,param_1 + 0x128,param_1 + 0x118);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (local_68 < 0x19) {
      puVar4 = &local_80;
    }
    else {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar3)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b5133a FUN_140b5133a body=659 status=ok
// SIG undefined FUN_140b5133a(void)

void FUN_140b5133a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar2 != 0) && (lVar6 = *(longlong *)(param_1 + 0xe10), lVar6 != 0)) {
    if ((((*(byte *)(param_1 + 0x1151) & 1) != 0) && (*(longlong *)(param_1 + 0xbb0) != 0)) &&
       ((*(short *)(param_1 + 3000) < 0 || (*(longlong *)(param_1 + 0xbc0) != 0)))) {
      if ((*(byte *)(lVar6 + 0x250) & 8) == 0) {
        bVar5 = *(byte *)(param_1 + 0xbe2);
      }
      else {
        bVar5 = *(byte *)(lVar6 + 0x250) >> 4 & 1;
      }
      if ((bVar5 == 0) &&
         ((*(char *)(param_1 + 0xbe0) == '\0' || (*(char *)(param_1 + 0xbe1) == '\0')))) {
        *(undefined2 *)(param_1 + 0xbe0) = 0x101;
        FUN_1403573f6(param_1 + 0xb90);
        lVar6 = *(longlong *)(param_1 + 0xe10);
      }
    }
    if ((*(byte *)(lVar6 + 0x250) & 2) == 0) {
      FUN_140b515ce(param_1,lVar2);
      lVar6 = *(longlong *)(param_1 + 0xe10);
    }
    if (((*(byte *)(lVar6 + 0x251) & 4) == 0) && (*(longlong *)(param_1 + 0x1148) != 0)) {
      if ((*(longlong *)(param_1 + 0x1148) != lVar2) || ((*(byte *)(lVar6 + 0x250) & 2) != 0)) {
        FUN_140b515ce(param_1);
        lVar6 = *(longlong *)(param_1 + 0xe10);
      }
      if (0.0 < *(float *)(lVar6 + 0x254)) {
        local_b8 = 0;
        uVar4 = FUN_1401b4c98(param_1);
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xe10) + 0x254);
        local_b0 = (undefined8 *)0x0;
        local_a8 = 0;
        FUN_1446efa72(&local_b0,0,3,0x10);
        puVar3 = local_b0;
        local_a8 = 3;
        *local_b0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_b0[2] = lVar6;
        *local_b0 = &PTR_FUN_14b4225a0;
        local_b0[3] = 0;
        FUN_14485c47a(local_b0 + 3,param_1);
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[4] = &LAB_14893d428;
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_b0);
        local_58 = 1;
        local_c8 = local_a0;
        local_a0[0] = 0;
        local_9c = 0xbf800000;
        FUN_1406f4044(uVar4,&local_b8,&local_98,uVar1);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_b0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b515ce FUN_140b515ce body=617 status=ok
// SIG undefined FUN_140b515ce(void)

void FUN_140b515ce(longlong param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (code *)0x0) goto LAB_140b516b2;
  local_30 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  FUN_140b518ec(param_1 + 0x1488,&local_30);
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  if (lVar3 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      local_50 = &local_30;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar3 = *(longlong *)(param_1 + 0x1c8);
      if (lVar3 == 0) goto LAB_140b51671;
    }
    if ((DAT_14cac6e60 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) {
      iVar1 = *(int *)(DAT_14cac6e60 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cac6e60 + 0x30))
      {
        FUN_140b51838(lVar3,param_2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      }
    }
  }
LAB_140b51671:
  lVar3 = *(longlong *)(param_2 + 0x1c8);
  if (lVar3 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      local_50 = &local_30;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      FUN_140b51838(lVar3,param_1,1);
    }
  }
LAB_140b516b2:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b51838 FUN_140b51838 body=179 status=ok
// SIG undefined FUN_140b51838(void)

void FUN_140b51838(longlong param_1,longlong param_2,char param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = param_1 + 0x3e0;
  local_28 = 0;
  FUN_14021b9fa(param_1,&local_28,1);
  if (param_2 != 0) {
    local_28 = param_2;
    if (param_3 == '\0') {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_144a61248(param_1,&local_28,1);
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_140b518ec(param_1,&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b518ec FUN_140b518ec body=172 status=ok
// SIG undefined FUN_140b518ec(void)

ulonglong FUN_140b518ec(longlong *param_1,longlong *param_2)

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
        if ((int)uVar5 != -1) goto LAB_140b51978;
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
    FUN_140b51998(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_140b51978:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140b51998 FUN_140b51998 body=353 status=ok
// SIG undefined FUN_140b51998(void)

void FUN_140b51998(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b51a1d;
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
LAB_140b51a1d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140b51afa FUN_140b51afa body=490 status=ok
// SIG undefined FUN_140b51afa(void)

void FUN_140b51afa(ulonglong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  ulonglong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0xe10) != 0) {
    lVar2 = FUN_1402d1dc0(*(longlong *)(param_1 + 0xe10) + 0x598);
    local_60 = 0;
    local_58 = 0;
    plVar3 = (longlong *)FUN_140b51ce6();
    if (plVar3 != (longlong *)0x0) {
      local_50[1] = 0;
      local_40 = 0;
      local_38 = 0;
      local_50[0] = param_1;
      lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,local_50,&local_60,0);
      if (lVar4 != 0) {
        lVar2 = lVar4;
      }
    }
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe10);
      local_68 = *(undefined8 *)(lVar4 + 0x600);
      local_c8 = &local_78;
      local_78 = *(undefined8 *)(lVar4 + 0x5f0);
      uStack_70 = *(undefined8 *)(lVar4 + 0x5f8);
      local_98 = *(undefined4 *)(lVar4 + 0x5d8);
      uStack_94 = *(undefined4 *)(lVar4 + 0x5dc);
      uStack_90 = *(undefined4 *)(lVar4 + 0x5e0);
      uStack_8c = *(undefined4 *)(lVar4 + 0x5e4);
      local_88 = *(undefined8 *)(lVar4 + 0x5e8);
      local_a8 = 1;
      local_b8 = 1;
      local_b0 = 0;
      local_c0 = 2;
      lVar2 = FUN_140a44468(lVar2,*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(lVar4 + 0x608));
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x1188) = lVar2;
      if (0 < local_58) {
        local_50[0] = local_50[0] & 0xffffffffffffff00;
        local_28[0] = 0;
        FUN_1456bb102(local_50,param_1);
        FUN_140e99737(*(undefined8 *)(param_1 + 0x1188),&local_60,local_50);
        FUN_1448173f8(local_28);
        if (((char)local_50[0] == '\x03') &&
           (plVar3 = (longlong *)CONCAT44(uStack_3c,local_40), plVar3 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b51ce6 FUN_140b51ce6 body=138 status=ok
// SIG undefined FUN_140b51ce6(void)

longlong FUN_140b51ce6(undefined8 *param_1)

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
    if (DAT_14cb78bf0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb78bf0,local_40);
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



// FUNCTION 140b51d72 FUN_140b51d72 body=889 status=ok
// SIG undefined FUN_140b51d72(void)

longlong * FUN_140b51d72(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x6e8);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if ((iVar1 != 0) && (FUN_140b520ec(param_2), 0 < *(int *)(param_1 + 0x6e8))) {
    lVar10 = 8;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x6e0) + lVar10;
      puVar11 = (uint *)(lVar5 + -8);
      iVar1 = *(int *)(lVar5 + -4);
      if (((((iVar1 == 0) || (uVar2 = *puVar11, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
          || ((plVar9 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
              plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar1)))) ||
         (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar5 = *plVar9, lVar5 == 0)))) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x6e0) + lVar10) != 0) {
          lVar5 = FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar3 == '\0')) {
            FUN_14485c47a(puVar11,lVar5);
            if (lVar5 == 0) goto LAB_140b51f0d;
          }
          else {
            uVar2 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(puVar11,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_140b51e48;
        }
      }
      else {
LAB_140b51e48:
        if (DAT_14c949118 == 0) {
          local_58 = FUN_140631fbe;
          lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar4;
          FUN_1446f470e(local_50,L"Class",1);
          local_68 = &LAB_146891e90;
          local_70 = &LAB_146273097;
          local_80 = L"Engine";
          local_78 = 199;
          local_88 = 0x20;
          local_90 = 0x10000000;
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
          local_60 = &local_58;
          FUN_14574b4b2(lVar4);
          DAT_14c949118 = lVar4;
          uVar6 = FUN_144a7a812();
          lVar4 = DAT_14c949118;
          uVar7 = FUN_1449e2fb2();
          local_98 = L"Class";
          FUN_14574b446(uVar7,lVar4,uVar6,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
            (lVar4 = FUN_140789e1e(), lVar4 != 0)) &&
           (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) {
          lVar12 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30) {
            lVar12 = lVar5;
          }
          if ((lVar12 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar12 == 0) goto LAB_140b51f0d;
          }
          else {
            FUN_1456cec3c(lVar12);
          }
          lVar4 = FUN_140789e1e();
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_140789f3e(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar5);
            }
          }
        }
      }
LAB_140b51f0d:
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x28;
    } while (lVar8 < *(int *)(param_1 + 0x6e8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b520ec FUN_140b520ec body=312 status=ok
// SIG undefined FUN_140b520ec(void)

void FUN_140b520ec(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140b52156;
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
LAB_140b52156:
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



// FUNCTION 140b52224 FUN_140b52224 body=943 status=ok
// SIG undefined FUN_140b52224(void)

void FUN_140b52224(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_1404fa388((undefined8 *)(param_1 + 0xe18));
  if (cVar5 != '\0') goto LAB_140b5243e;
  lVar2 = *(longlong *)(param_1 + 0xe10);
  lVar7 = *(longlong *)(lVar2 + 0x500);
  if (lVar7 == 0) {
    uVar6 = FUN_140067708();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar2 + 0x500) = lVar7;
  }
  if (*(longlong *)(lVar2 + 0x508) == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar2 + 0x4f8) == 0)) goto LAB_140b5243e;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x4f8));
        *(longlong *)(lVar2 + 0x508) = lVar7;
        if (lVar7 == 0) goto LAB_140b5243e;
        goto LAB_140b522e1;
      }
    }
    *(undefined8 *)(lVar2 + 0x508) = 0;
    goto LAB_140b5243e;
  }
LAB_140b522e1:
  (**(code **)(*(longlong *)(param_1 + 0x3d8) + 0x10))(param_1 + 0x3d8,&local_40);
  if (local_40 != 0) {
    FUN_1403c747e(local_40,&local_48,0);
    if (local_48 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0xe10);
      lVar7 = *(longlong *)(lVar2 + 0x500);
      if (lVar7 == 0) {
        uVar6 = FUN_140067708();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar2 + 0x500) = lVar7;
      }
      if (((*(longlong *)(lVar2 + 0x508) == 0) && (lVar7 != 0)) &&
         (*(longlong *)(lVar2 + 0x4f8) != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_140b525cc:
          uVar6 = 0;
        }
        else {
          cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar5 == '\0') goto LAB_140b525cc;
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          uVar6 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x4f8));
        }
        *(undefined8 *)(lVar2 + 0x508) = uVar6;
      }
      plVar3 = local_38;
      local_70 = local_48;
      if (local_48 != (longlong *)0x0) {
        *(int *)(local_48 + 0x21) = (int)local_48[0x21] + 1;
      }
      if (local_38 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        local_78 = local_38;
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_140c72376(&local_68,local_80,&local_70);
      if ((undefined8 *)(param_1 + 0xe18) != &local_68) {
        *(undefined8 *)(param_1 + 0xe18) = local_68;
        local_68 = 0;
        plVar4 = *(longlong **)(param_1 + 0xe20);
        *(longlong **)(param_1 + 0xe20) = local_60;
        local_60 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0xe28) = local_58;
      *(undefined4 *)(param_1 + 0xe2c) = uStack_54;
      *(undefined4 *)(param_1 + 0xe30) = uStack_50;
      *(undefined4 *)(param_1 + 0xe34) = uStack_4c;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if ((local_48 != (longlong *)0x0) &&
         (*(int *)(local_48 + 0x21) = (int)local_48[0x21] + -1, (int)local_48[0x26] < 1)) {
        FUN_1400847bc(local_48 + 0x17,0);
        if ((int)local_48[0x21] == 0) {
          FUN_140087e46(local_48);
          if (*local_48 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140b5242a;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_48);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_48);
          }
        }
      }
    }
  }
LAB_140b5242a:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_140b5243e:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b525f6 FUN_140b525f6 body=3035 status=ok
// SIG undefined FUN_140b525f6(void)

void FUN_140b525f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  code *pcVar5;
  longlong ****pppplVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte bVar17;
  byte bVar18;
  undefined8 *puVar19;
  longlong ****pppplVar20;
  byte bVar21;
  undefined *puVar22;
  int iVar23;
  int iVar24;
  byte bVar25;
  longlong lVar26;
  undefined2 *puVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *****ppppplVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  longlong local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong ****local_138;
  undefined8 local_130;
  longlong *local_128 [3];
  int local_110;
  byte local_f8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  longlong ****local_b8;
  int local_b0;
  undefined4 uStack_ac;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar16 = *(longlong *)(param_1 + 0xa8);
  uVar32 = FUN_140b536be(param_2);
  *(undefined4 *)(param_1 + 0x4f4) = uVar32;
  *(undefined4 *)(param_1 + 0x178) = uVar32;
  dVar11 = (double)FUN_144719204((int)*(undefined8 *)(param_2 + 200),0);
  dVar10 = (double)FUN_144719204((int)*(undefined8 *)(param_2 + 0xd0),0);
  dVar8 = sin(dVar11 * 0.017453292519943295);
  dVar11 = cos(dVar11 * 0.017453292519943295);
  dVar9 = sin(dVar10 * 0.017453292519943295);
  dVar10 = cos(dVar10 * 0.017453292519943295);
  *(double *)(param_1 + 0x128) = dVar10 * dVar11;
  *(double *)(param_1 + 0x130) = dVar9 * dVar11;
  *(double *)(param_1 + 0x138) = dVar8;
  uVar32 = FUN_140b531d2(param_2);
  *(undefined4 *)(param_1 + 0x17c) = uVar32;
  uVar32 = FUN_140b53448(param_2);
  *(undefined4 *)(param_1 + 0x350) = uVar32;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar28 = (ulonglong)((uint)*(ushort *)(param_2 + 0xc2) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_138 = (longlong ****)((ulonglong)local_138 & 0xffffffffffffff00);
  local_110 = 0;
  FUN_14575a19a(&local_138,0);
  puVar27 = &local_e0;
  FUN_1448729ea(lVar28,puVar27,&local_138);
  if (local_c0 == 3) {
    uVar14 = 3;
    uVar32 = CONCAT22(uStack_de,local_e0);
  }
  else {
    FUN_1400b56fe(&local_b8,&local_e0,3);
    uVar32 = 0;
    if (local_98 != 0) {
      uVar32 = local_b8._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppplVar30 = &local_b8;
      if (0x18 < local_a0) {
        ppppplVar30 = (longlong *****)local_b8;
      }
      (*pcVar5)(ppppplVar30);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(local_b8);
    }
    uVar14 = (uint)local_c0;
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_c8) {
      puVar27 = (undefined2 *)CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
    }
    (*pcVar5)(puVar27);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0)));
  }
  lVar28 = DAT_14c9a3da0;
  if ((longlong)local_110 != 0) {
    lVar26 = (longlong)local_110 + -1;
    lVar29 = lVar26 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar29),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar29));
    if (*(longlong *)(lVar28 + lVar29) != 0) {
      FUN_1400020a8();
    }
    lVar28 = DAT_14c9a3da0;
    iVar23 = (int)lVar26;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
    }
    *(undefined4 *)(lVar28 + lVar29) = 0xffffffff;
    iVar24 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar24 = DAT_14c9a3dd0;
    }
    *(int *)(lVar28 + 4 + lVar29) = iVar24;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar22 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar22 = DAT_14c9a3dc0;
    }
    iVar24 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar24 = iVar23;
    }
    bVar18 = (byte)lVar26 & 0x1f;
    DAT_14c9a3dd0 = iVar23;
    *(uint *)(puVar22 + (longlong)(iVar24 >> 5) * 4) =
         *(uint *)(puVar22 + (longlong)(iVar24 >> 5) * 4) &
         (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
    local_110 = 0;
  }
  if (((char)local_138 == '\x03') && (local_128[0] != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)local_128[0] + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x354) = uVar32;
  fVar4 = *(float *)(param_2 + 0xe0);
  *(float *)(param_1 + 0x1a8) = fVar4;
  if (((ABS(*(float *)(param_1 + 0x17c)) <= 1e-08) && (*(float *)(param_1 + 0x350) <= 0.0001)) &&
     (ABS(fVar4) <= 1e-08)) {
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x178);
  }
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_2 + 0x120);
  bVar21 = (*(byte *)(param_2 + 0xbe) & 1) << 3;
  bVar18 = *(byte *)(param_1 + 0x180);
  *(byte *)(param_1 + 0x180) = bVar18 & 0xf7 | bVar21;
  bVar25 = *(float *)(param_2 + 0x120) == 0.0 & *(byte *)(param_2 + 0xbe) >> 1;
  *(byte *)(param_1 + 0x180) = bVar18 & 0xf6 | bVar21 | bVar25;
  *(byte *)(param_1 + 0x358) =
       *(byte *)(param_1 + 0x358) & 0xfd |
       (*(float *)(param_2 + 0x120) != 0.0) * '\x02' & *(byte *)(param_2 + 0xbe);
  bVar17 = *(byte *)(param_2 + 0xbe) >> 1 & 2;
  *(byte *)(param_1 + 0x180) = bVar18 & 0xf4 | bVar21 | bVar25 | bVar17;
  *(byte *)(param_1 + 0x180) =
       bVar18 & 0xf0 | bVar21 | bVar25 | bVar17 | (*(byte *)(param_2 + 0x124) & 1) << 2;
  uVar32 = 0;
  bVar18 = *(byte *)(param_2 + 0x168) & 1;
  *(byte *)(param_1 + 0x4d4) = bVar18;
  if (bVar18 != 0) {
    uVar32 = *(undefined4 *)(param_2 + 0x16c);
  }
  *(undefined4 *)(param_1 + 0x364) = uVar32;
  bVar17 = *(byte *)(param_2 + 0x138) & 1;
  bVar18 = *(byte *)(param_1 + 0x36c);
  *(byte *)(param_1 + 0x36c) = bVar18 & 0xfe | bVar17;
  *(byte *)(param_1 + 0x4d6) = *(byte *)(param_2 + 0x175) >> 3 & 1;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x130);
  *(byte *)(param_1 + 0x36c) = bVar18 & 0xfc | bVar17 | *(char *)(param_2 + 0x100) * '\x02' & 2U;
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x118);
  uVar15 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x378) = uVar15;
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0xf8);
  uVar32 = *(undefined4 *)(param_2 + 0xec);
  uVar12 = *(undefined4 *)(param_2 + 0xf0);
  uVar13 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x2cc) = uVar32;
  *(undefined4 *)(param_1 + 0x2d0) = uVar12;
  *(undefined4 *)(param_1 + 0x2d4) = uVar13;
  iVar23 = *(int *)(param_2 + 0x4d8);
  if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar23);
  }
  plVar1 = (longlong *)(param_1 + 0x4b0);
  if (*(int *)(param_1 + 0x4bc) < iVar23) {
    FUN_1488e537c(plVar1);
    iVar23 = *(int *)(param_2 + 0x4d8);
  }
  if (iVar23 != 0) {
    lVar28 = *(longlong *)(param_2 + 0x4d0);
    local_150 = (longlong)iVar23 * 0x18;
    lVar26 = 0;
    do {
      pppplVar6 = *(longlong *****)(lVar28 + lVar26);
      if (pppplVar6 != (longlong ****)0x0) {
        plVar7 = *(longlong **)(lVar28 + 8 + lVar26);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        local_148 = 0;
        uStack_140 = 0;
        local_138 = pppplVar6;
        local_130 = plVar7;
        if ((lVar16 == 0) || (DAT_14c950c29 == '\0')) {
          if (lVar16 != 0) goto LAB_140b52e6b;
          uStack_140 = 0;
          local_148 = lVar16;
        }
        else {
          FUN_1456cec3c(lVar16);
LAB_140b52e6b:
          local_148 = lVar16;
          uVar15 = FUN_14592281a();
          uStack_140 = FUN_144718840(lVar16,uVar15);
        }
        (*(code *)(*pppplVar6)[2])(pppplVar6,&local_b8,&local_148,&local_138);
        plVar7 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_130 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        local_130 = (longlong *)CONCAT44(uStack_ac,local_b0);
        local_138 = local_b8;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        if ((longlong *****)local_b8 == (longlong *****)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (*(code *)(*local_b8)[1])();
        }
        local_128[0] = (longlong *)0x0;
        FUN_14485c47a(local_128,uVar15);
        iVar23 = *(int *)(param_1 + 0x4b8);
        *(uint *)(param_1 + 0x4b8) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x4bc) < iVar23 + 1U) {
          FUN_1488e53ee(plVar1,iVar23);
        }
        puVar19 = (undefined8 *)(*plVar1 + (longlong)iVar23 * 0x18);
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        FUN_14029d0b6(puVar19,&local_138);
        plVar7 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_130 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        plVar7 = (longlong *)CONCAT44(uStack_ac,local_b0);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      lVar26 = lVar26 + 0x18;
    } while (local_150 != lVar26);
  }
  if ((*(byte *)(param_2 + 0x588) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x588) & 2) != 0) {
      lVar16 = *(longlong *)(param_1 + 0xb0);
      if (lVar16 == 0) {
        lVar16 = FUN_1448abda6(param_1);
      }
      if (*(longlong *)(lVar16 + 0x1f0) == 0) {
        puVar19 = (undefined8 *)(lVar16 + 0x458);
      }
      else {
        puVar19 = (undefined8 *)(*(longlong *)(lVar16 + 0x1f0) + 0xf0);
      }
      uVar15 = *puVar19;
      local_b8 = (longlong ****)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,3,0x10);
      pppplVar6 = local_b8;
      local_b0 = 3;
      *local_b8 = (longlong ***)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppplVar20 = (longlong ****)(DAT_14c758608 + 1);
      lVar16 = DAT_14c758608 + 1;
      if (pppplVar20 == (longlong ****)0x0) {
        LOCK();
        UNLOCK();
        pppplVar20 = (longlong ****)(DAT_14c758608 + 2);
        lVar16 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar16;
      local_b8[2] = (longlong ***)pppplVar20;
      *local_b8 = (longlong ***)&PTR_FUN_14b422510;
      local_b8[3] = (longlong ***)0x0;
      FUN_14485c47a(local_b8 + 3,param_1);
      *(undefined4 *)(pppplVar6 + 5) = 0;
      pppplVar6[4] = (longlong ***)FUN_140c3aa26;
      local_138 = (longlong ****)0x0;
      local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
      FUN_14487d8d8(&local_138,&local_b8);
      local_f8 = 1;
      local_158 = &local_e0;
      local_e0 = 0;
      uStack_dc = 0x3e800000;
      FUN_1406f4044(uVar15,param_1 + 0x4f8,&local_138,0x3e800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_f8])(&local_138);
      FUN_1449db362(&local_b8);
    }
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0xb0);
    if (lVar16 == 0) {
      lVar16 = FUN_1448abda6(param_1);
    }
    if (*(longlong *)(lVar16 + 0x1f0) == 0) {
      puVar19 = (undefined8 *)(lVar16 + 0x458);
    }
    else {
      puVar19 = (undefined8 *)(*(longlong *)(lVar16 + 0x1f0) + 0xf0);
    }
    uVar15 = *puVar19;
    local_b8 = (longlong ****)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    pppplVar6 = local_b8;
    local_b0 = 3;
    *local_b8 = (longlong ***)&PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    pppplVar20 = (longlong ****)(DAT_14c758608 + 1);
    lVar16 = DAT_14c758608 + 1;
    if (pppplVar20 == (longlong ****)0x0) {
      LOCK();
      UNLOCK();
      pppplVar20 = (longlong ****)(DAT_14c758608 + 2);
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    local_b8[2] = (longlong ***)pppplVar20;
    *local_b8 = (longlong ***)&PTR_FUN_14b422510;
    local_b8[3] = (longlong ***)0x0;
    iVar23 = 0;
    if (param_1 != 0) {
      uVar14 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_b8 + 3) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar23 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar23 = DAT_14c964868 + 1;
        UNLOCK();
        iVar24 = DAT_14c964868 + 1;
        bVar31 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar23;
        if (bVar31) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar24);
        }
        LOCK();
        iVar23 = *(int *)(lVar16 + 0x10);
        bVar31 = iVar23 == 0;
        if (bVar31) {
          *(int *)(lVar16 + 0x10) = iVar24;
          iVar23 = 0;
        }
        UNLOCK();
        if (bVar31) {
          iVar23 = iVar24;
        }
      }
    }
    *(int *)((longlong)pppplVar6 + 0x1c) = iVar23;
    pppplVar6[4] = (longlong ***)FUN_140c3aa26;
    *(undefined4 *)(pppplVar6 + 5) = 0;
    local_138 = (longlong ****)0x0;
    local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
    FUN_14487d8d8(&local_138,&local_b8);
    local_f8 = 1;
    local_158 = &local_e0;
    local_e0 = 1;
    uStack_dc = 0x3e800000;
    FUN_1406f4044(uVar15,param_1 + 0x4f8,&local_138,0x3e800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_f8])(&local_138);
    if (local_b0 != 0) {
      if ((longlong *****)local_b8 == (longlong *****)0x0) goto LAB_140b52a01;
      (*(code *)**local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      local_b0 = 0;
    }
    if ((longlong *****)local_b8 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140b52a01:
  if ((local_90 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b531d2 FUN_140b531d2 body=628 status=ok
// SIG undefined FUN_140b531d2(void)

undefined4 FUN_140b531d2(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0xbc) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_14575a19a(local_b0,0);
  puVar10 = &local_80;
  FUN_1448729ea(lVar7,puVar10,local_b0);
  if (local_60 == 3) {
    uVar4 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = 0;
    if (local_38 != 0) {
      uVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar4 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar7 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar7 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar7 + lVar11) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar7 + 4 + lVar11) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b53448 FUN_140b53448 body=628 status=ok
// SIG undefined FUN_140b53448(void)

undefined4 FUN_140b53448(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0xc0) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_14575a19a(local_b0,0);
  puVar10 = &local_80;
  FUN_1448729ea(lVar7,puVar10,local_b0);
  if (local_60 == 3) {
    uVar4 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = 0;
    if (local_38 != 0) {
      uVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar4 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar7 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar7 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar7 + lVar11) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar7 + 4 + lVar11) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b536be FUN_140b536be body=635 status=ok
// SIG undefined FUN_140b536be(void)

undefined4 FUN_140b536be(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(param_1 + 0xba) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_14575a19a(local_b0,0);
  puVar10 = &local_80;
  FUN_1448729ea(lVar7,puVar10,local_b0);
  if (local_60 == 3) {
    uVar4 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = local_58;
    if (local_38 == 0) {
      uVar13 = 0x447a0000;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar4 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar7 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar7 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar7 + lVar11) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar7 + 4 + lVar11) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 140b5393a FUN_140b5393a body=156 status=ok
// SIG undefined FUN_140b5393a(void)

void FUN_140b5393a(longlong param_1,longlong param_2)

{
  FUN_140b525f6();
  *(byte *)(param_1 + 0x180) = *(byte *)(param_1 + 0x180) | 4;
  *(byte *)(param_1 + 0x520) = *(byte *)(param_2 + 0x175) >> 1 & 1;
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x17c);
  *(byte *)(param_1 + 0x52c) = *(byte *)(param_2 + 0x175) >> 2 & 1;
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x538) = *(undefined1 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_2 + 0x18c);
  return;
}



// FUNCTION 140b539d6 FUN_140b539d6 body=2049 status=ok
// SIG undefined FUN_140b539d6(void)

void FUN_140b539d6(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong *plStack_108;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d0 [5];
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x1bd0) == 0) goto LAB_140b5414e;
  if ((longlong)*(int *)(param_1 + 0x1be8) != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1be0) + lVar9) == 0) goto LAB_140b5414e;
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1be8) * 8 != lVar9);
  }
  if (*(longlong *)(param_1 + 0xe10) == 0) goto LAB_140b5414e;
  lVar9 = FUN_140921bb0(*(longlong *)(param_1 + 0xe10) + 0x6b8);
  if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x1ca8) = lVar9;
    if (lVar9 != 0) goto LAB_140b53a85;
    *(undefined1 *)(param_1 + 0x1cb0) = 1;
    if ((*(longlong *)(param_1 + 0x1bd0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1bc8) + 0x720) & 2) != 0)) {
      lVar9 = FUN_1401fe4bc(*(longlong *)(param_1 + 0x1bd0) + 0x1a0);
      if (lVar9 == 0) {
LAB_140b53afe:
        lVar9 = 0;
      }
      else {
        lVar13 = FUN_14045ceca();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) goto LAB_140b53afe;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar9);
        }
      }
      *(longlong *)(param_1 + 0x1ca8) = lVar9;
    }
  }
  else {
    FUN_1456cec3c(lVar9);
    *(longlong *)(param_1 + 0x1ca8) = lVar9;
LAB_140b53a85:
    if ((*(longlong *)(param_1 + 0x1bc8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1bc8) + 0x720) & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x1cb0) = 1;
    }
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b977d20;
  local_a8[0] = &LAB_144187c40;
  local_80 = param_1;
  FUN_140255853(param_1 + 0x1bd0,1,local_a8,param_1 + 0x1cb8);
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0xe10) + 8);
  puVar12 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar12 = puVar2;
  }
  if (DAT_14c947fe0 == 0) {
    lVar9 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar9);
    DAT_14c947fe0 = lVar9;
  }
  FUN_140045924(DAT_14c947fe0,local_d0,puVar12,1);
  if ((*(longlong *)(&DAT_00001ce8 + param_1) != local_d0[0]) ||
     (*(int *)(param_1 + 0x1cf0) != 0x4000)) {
    *(longlong *)(&DAT_00001ce8 + param_1) = local_d0[0];
    *(undefined4 *)(param_1 + 0x1cf0) = 0x4000;
    *(undefined8 *)(param_1 + 0x1cf8) = 0;
  }
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  iVar11 = *(int *)(param_1 + 0x1cc0);
  if ((longlong)iVar11 == 0) {
    local_120 = 0;
    plVar15 = (longlong *)0x0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x1cb8);
    lVar13 = 0;
    local_120 = 0;
    plVar8 = (longlong *)0x0;
    do {
      plVar16 = *(longlong **)(lVar9 + lVar13);
      plVar15 = plVar8;
      if (plVar16 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar16 + 8))(plVar16);
        lVar7 = FUN_140932c46();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          plVar14 = plVar8;
          if ((int)plVar16[6] == *(int *)(param_1 + 0x1b38)) {
            if (*(char *)((longlong)plVar16 + 0x3c) == '\0') {
              local_118 = plVar8;
              FUN_1414afec6(plVar16 + 8,&local_e8);
              plVar15 = plStack_e0;
              local_110 = local_e8;
              plStack_108 = plStack_e0;
              local_e8 = 0;
              plStack_e0 = (longlong *)0x0;
              plVar8 = (longlong *)FUN_14416b565(&local_110,param_1);
              if (plVar8 == (longlong *)0x0) {
LAB_140b53f1f:
                plVar8 = (longlong *)0x0;
              }
              else {
                lVar6 = (**(code **)(*plVar8 + 8))(plVar8);
                lVar7 = FUN_1418c5540();
                if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)))
                goto LAB_140b53f1f;
                if (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                    lVar7 + 0x30) {
                  plVar8 = (longlong *)0x0;
                }
              }
              plVar14 = local_118;
              puVar3 = *(undefined8 **)(param_1 + 0x1cc8);
              *(longlong **)(param_1 + 0x1cc8) = plVar8;
              if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
              }
            }
            else {
              if (*(char *)((longlong)plVar16 + 0x3c) != '\x01') goto LAB_140b53c2b;
              if (*(longlong *)(param_1 + 0x1cd0) == 0) {
                lVar6 = 0;
              }
              else {
                if (*(longlong *)(param_1 + 0x1cd8) != 0) goto LAB_140b53c2b;
                lVar6 = 1;
              }
              FUN_145ae3c82(plVar16 + 8,&local_e8);
              local_110 = local_e8;
              plStack_108 = plStack_e0;
              local_e8 = 0;
              plStack_e0 = (longlong *)0x0;
              FUN_148d581ee(&local_f0,&local_110,param_1,lVar6);
              puVar3 = *(undefined8 **)(param_1 + 0x1cd0 + lVar6 * 8);
              *(undefined8 *)(param_1 + 0x1cd0 + lVar6 * 8) = local_f0;
              local_f0 = 0;
              plVar15 = plStack_108;
              if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
                plVar15 = plStack_108;
              }
            }
            plVar16 = plStack_e0;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar15 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar16 = plStack_e0;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                  plVar16 = plStack_e0;
                }
              }
            }
          }
          else {
            if ((int)plVar16[6] != *(int *)(param_1 + 0x1b38) + 1) goto LAB_140b53c2b;
            if (*(char *)((longlong)plVar16 + 0x3c) == '\0') {
              FUN_1414afec6(plVar16 + 8,&local_110);
              plVar15 = plStack_108;
              local_120 = local_110;
              local_110 = 0;
              plVar16 = plStack_108;
              if (plStack_108 != plVar8) {
                plStack_108 = (longlong *)0x0;
                if (plVar8 == (longlong *)0x0) goto LAB_140b53c2b;
                LOCK();
                plVar10 = plVar8 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                plVar14 = plVar15;
                plVar16 = plStack_108;
                if ((int)*plVar10 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar16 = plStack_108;
                  if (*piVar1 == 0) {
                    lVar6 = *plVar8;
LAB_140b53e99:
                    (**(code **)(lVar6 + 0x10))(plVar8);
                    plVar14 = plVar15;
                    plVar16 = plStack_108;
                  }
                }
              }
            }
            else {
              if ((*(char *)((longlong)plVar16 + 0x3c) != '\x01') ||
                 ((plVar10 = local_d0 + 1, local_d0[1] != 0 &&
                  (plVar10 = local_d0 + 3, local_d0[3] != 0)))) goto LAB_140b53c2b;
              FUN_145ae3c82(plVar16 + 8,&local_110);
              plVar16 = plStack_108;
              *plVar10 = local_110;
              local_110 = 0;
              plVar8 = (longlong *)plVar10[1];
              if (plStack_108 != plVar8) {
                plStack_108 = (longlong *)0x0;
                plVar10[1] = (longlong)plVar16;
                if (plVar8 == (longlong *)0x0) goto LAB_140b53c2b;
                LOCK();
                plVar10 = plVar8 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                plVar16 = plStack_108;
                if ((int)*plVar10 == 0) {
                  (**(code **)*plVar8)();
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar16 = plStack_108;
                  if (*piVar1 == 0) {
                    lVar6 = *plVar8;
                    goto LAB_140b53e99;
                  }
                }
              }
            }
          }
          plVar15 = plVar14;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar16 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
        }
      }
LAB_140b53c2b:
      lVar13 = lVar13 + 0x10;
      plVar8 = plVar15;
    } while ((longlong)iVar11 * 0x10 != lVar13);
  }
  local_e8 = 0;
  plVar8 = local_d0 + 1;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    if ((*plVar8 != 0) && (lVar9 = *(longlong *)(*plVar8 + 0x58), lVar9 != 0)) goto LAB_140b53fbc;
    plVar8 = local_d0 + 3;
    bVar4 = false;
  } while (bVar5);
  lVar13 = 0;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    lVar9 = *(longlong *)(param_1 + 0x1cd0 + lVar13 * 8);
    if ((lVar9 != 0) && (FUN_148d4baaa(lVar9,&local_f8), local_f8 != 0)) {
      FUN_148d4baaa(*(undefined8 *)(param_1 + 0x1cd0 + lVar13 * 8),&local_e8);
      lVar9 = local_e8;
      break;
    }
    lVar13 = 1;
    bVar4 = false;
    lVar9 = local_e8;
  } while (bVar5);
LAB_140b53fbc:
  local_e8 = lVar9;
  lVar9 = local_120;
  if (local_120 == 0) {
    lVar13 = 0;
    iVar11 = 0;
LAB_140b54023:
    lVar9 = lVar13;
    if (*(longlong *)(param_1 + 0x1cc8) != 0) {
      FUN_1400ecfc6(*(undefined8 *)(*(longlong *)(param_1 + 0x1cc8) + 0x20),&local_110,&local_e8);
      lVar9 = local_110;
      if (iVar11 == (int)plStack_108) {
        lVar9 = lVar13;
      }
      if (lVar13 != local_110) {
        lVar9 = local_110;
      }
      *(byte *)(param_1 + 0x1d00) =
           *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1cc8) + 0x20) + 0xd8) >> 1 & 1;
      iVar11 = (int)plStack_108;
    }
  }
  else {
    FUN_1400ecfc6(local_120,&local_110,&local_e8);
    lVar13 = 0;
    if ((int)plStack_108 != 0) {
      lVar13 = local_110;
    }
    if (local_110 != 0) {
      lVar13 = local_110;
    }
    *(byte *)(param_1 + 0x1d00) = *(byte *)(lVar9 + 0xd8) >> 1 & 1;
    lVar9 = local_110;
    iVar11 = (int)plStack_108;
    if (lVar13 == 0 || 0xfffffffd < (int)plStack_108 - 1U) goto LAB_140b54023;
  }
  if (((lVar9 != 0) && (iVar11 - 1U < 0xfffffffe)) &&
     ((*(longlong *)(&DAT_00001ce8 + param_1) != lVar9 || (*(int *)(param_1 + 0x1cf0) != iVar11))))
  {
    *(longlong *)(&DAT_00001ce8 + param_1) = lVar9;
    *(int *)(param_1 + 0x1cf0) = iVar11;
    *(undefined8 *)(param_1 + 0x1cf8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1cc8) != 0) &&
     ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1cc8) + 0x20) + 0xd8) & 2) != 0)) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
  }
  lVar9 = 0x20;
  do {
    plVar8 = *(longlong **)((longlong)local_d0 + lVar9);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar8 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != 0);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar15 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (local_a8[0] != (undefined1 *)0x0) {
    pppuVar17 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar17 = local_98;
    }
    (*(code *)(*pppuVar17)[2])(pppuVar17);
  }
LAB_140b5414e:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b541d8 FUN_140b541d8 body=125 status=ok
// SIG undefined FUN_140b541d8(void)

void FUN_140b541d8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x68;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x60 + lVar6 * 0x68);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x68 + 0x60);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x60);
  if (*(longlong *)(*param_1 + 0x38 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140b54256(param_1,param_2);
  return;
}



// FUNCTION 140b54256 FUN_140b54256 body=116 status=ok
// SIG undefined FUN_140b54256(void)

void FUN_140b54256(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 140b542ca FUN_140b542ca body=76 status=ok
// SIG undefined FUN_140b542ca(void)

void FUN_140b542ca(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_140b54316();
  (**(code **)(*param_1 + 0xb78))(param_1);
  if ((param_1[0x208] != 0) && (plVar1 = (longlong *)param_1[0x336], plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140b5430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x638))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140b54316 FUN_140b54316 body=346 status=ok
// SIG undefined FUN_140b54316(void)

void FUN_140b54316(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
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
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x398), lVar1 != 0)) {
      uVar2 = (**(code **)(*param_1 + 0xb20))(param_1);
      *(undefined1 *)(lVar1 + 0x695) = uVar2;
      *(undefined1 *)(lVar1 + 0x696) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b54488 FUN_140b54488 body=48 status=ok
// SIG undefined FUN_140b54488(void)

bool FUN_140b54488(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa40))();
  if (cVar1 == '\x01') {
    bVar2 = true;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xa40))(param_1);
    bVar2 = cVar1 == '\x02';
  }
  return bVar2;
}



// FUNCTION 140b544b8 FUN_140b544b8 body=1189 status=ok
// SIG undefined FUN_140b544b8(void)

void FUN_140b544b8(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1448aa298();
  for (lVar11 = param_1; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x20)) {
    if ((*(uint *)(lVar11 + 8) & 0x30) != 0) goto LAB_140b54595;
  }
  if (*(longlong *)(param_1 + 0x680) == 0) {
    plVar1 = (longlong *)(param_1 + 0x670);
    *(longlong **)(param_1 + 0x688) = &DAT_14cb23a70;
    *(longlong *)(param_1 + 0x680) = param_1;
    lVar11 = DAT_14cb23a70;
    while( true ) {
      *(longlong *)(param_1 + 0x670) = lVar11;
      LOCK();
      lVar8 = **(longlong **)(param_1 + 0x688);
      bVar12 = lVar11 == lVar8;
      if (bVar12) {
        **(longlong **)(param_1 + 0x688) = (longlong)plVar1;
        lVar8 = lVar11;
      }
      UNLOCK();
      if (bVar12) break;
      *(longlong *)(param_1 + 0x670) = lVar8;
      lVar11 = **(longlong **)(param_1 + 0x688);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_140b54595:
  *(bool *)(param_1 + 0x629) = 0 < *(int *)(param_1 + 0x638);
  lVar11 = *(longlong *)(param_1 + 0xb0);
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(param_1);
  }
  lVar8 = *(longlong *)(param_1 + 0xa8);
  if (lVar8 != 0) {
    lVar9 = FUN_140b5495e();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)) &&
       (((lVar11 == 0 || (bVar2 = *(byte *)(lVar11 + 0x152), bVar2 == 1)) ||
        ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))))) goto LAB_140b545fc;
  }
  FUN_147f44422(param_1);
  *(bool *)(param_1 + 0x629) = 0 < *(int *)(param_1 + 0x638);
LAB_140b545fc:
  if ((*(byte *)(param_1 + 0x1f8) & 0xc) != 0) {
    uVar10 = FUN_144a7757c();
    lVar11 = FUN_144a78ede(param_1,uVar10);
    if ((lVar11 != 0) && (cVar7 = FUN_1449a7b8c(lVar11), cVar7 != '\0')) {
      uVar10 = FUN_144a7b8cc();
      lVar11 = FUN_144a78ede(param_1,uVar10);
      if ((lVar11 != 0) && (lVar11 = FUN_1405d1c86(lVar11), lVar11 != 0)) {
        dVar3 = *(double *)(lVar11 + 0x80);
        dVar4 = *(double *)(lVar11 + 0x88);
        dVar5 = *(double *)(lVar11 + 0x90);
        dVar6 = *(double *)(lVar11 + 0x98);
        local_108 = *(double *)(param_1 + 0x240);
        dStack_100 = *(double *)(param_1 + 0x248);
        local_f8 = *(double *)(param_1 + 0x250);
        dStack_f0 = *(double *)(param_1 + 600);
        local_e8 = *(double *)(param_1 + 0x260);
        dStack_e0 = *(double *)(param_1 + 0x268);
        local_d8 = *(double *)(param_1 + 0x270);
        uStack_d0 = *(undefined8 *)(param_1 + 0x278);
        local_c8 = *(undefined8 *)(param_1 + 0x280);
        uStack_c0 = *(undefined8 *)(param_1 + 0x288);
        local_b8 = *(undefined8 *)(param_1 + 0x290);
        uStack_b0 = *(undefined8 *)(param_1 + 0x298);
        if ((*(byte *)(param_1 + 0x1f8) & 4) != 0) {
          local_d8 = *(double *)(lVar11 + 0xd0) * local_d8;
          local_e8 = *(double *)(lVar11 + 0xc0) * local_e8;
          dStack_e0 = *(double *)(lVar11 + 200) * dStack_e0;
          dVar16 = dStack_e0 * dVar3 - dVar4 * local_e8;
          dVar17 = local_d8 * dVar4 - dVar5 * dStack_e0;
          dVar18 = local_e8 * dVar5 - dVar3 * local_d8;
          dVar17 = dVar17 + dVar17;
          dVar18 = dVar18 + dVar18;
          dVar16 = dVar16 + dVar16;
          local_e8 = *(double *)(lVar11 + 0xa0) +
                     (dVar16 * dVar4 - dVar18 * dVar5) + dVar6 * dVar17 + local_e8;
          dStack_e0 = *(double *)(lVar11 + 0xa8) +
                      (dVar5 * dVar17 - dVar3 * dVar16) + dVar6 * dVar18 + dStack_e0;
          local_d8 = *(double *)(lVar11 + 0xb0) +
                     dVar16 * dVar6 + local_d8 + (dVar18 * dVar3 - dVar17 * dVar4);
          uStack_d0 = 0;
        }
        if ((*(byte *)(param_1 + 0x1f8) & 8) != 0) {
          dVar16 = dVar3 * dStack_100;
          dVar18 = dVar3 * local_108;
          dVar17 = dVar4 * local_108;
          dVar13 = dVar4 * dStack_100;
          dVar14 = local_108 * dVar5;
          dVar15 = local_f8 * dVar5;
          local_108 = dStack_100 * dVar5 * -1.0 +
                      local_f8 * dVar4 + dVar3 * dStack_f0 * 1.0 + dVar6 * local_108;
          dStack_100 = dVar14 * 1.0 +
                       dStack_f0 * dVar4 + dVar3 * local_f8 * -1.0 + dVar6 * dStack_100;
          local_f8 = dStack_f0 * dVar5 * 1.0 + ((dVar16 * 1.0 + dVar6 * local_f8) - dVar17);
          dStack_f0 = dVar15 * -1.0 + ((dVar18 * -1.0 + dVar6 * dStack_f0) - dVar13);
        }
        local_118 = 0;
        FUN_144927a08(param_1,&local_108,0,0);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b5495e FUN_140b5495e body=228 status=ok
// SIG undefined FUN_140b5495e(void)

longlong FUN_140b5495e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20c08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147f148ad;
    local_40 = &LAB_146430a05;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x408;
    FUN_14081cfa3(L"/Script/GbxAI",L"Cover",&DAT_14cb20c08,FUN_1464309de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20c08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b54a4c FUN_140b54a4c body=139 status=ok
// SIG undefined FUN_140b54a4c(void)

undefined8 * FUN_140b54a4c(undefined8 *param_1)

{
  FUN_140b54ad8();
  *param_1 = &PTR_FUN_14b94f740;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x13,1);
  *param_1 = &PTR_FUN_14b9505b0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xe4;
  return param_1;
}



// FUNCTION 140b54ad8 FUN_140b54ad8 body=121 status=ok
// SIG undefined FUN_140b54ad8(void)

undefined8 * FUN_140b54ad8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b4a6e50;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  FUN_14020a6cc(param_1 + 9,1);
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3e4ccccd;
  FUN_14020a6cc((longlong)param_1 + 0x54,1);
  return param_1;
}



// FUNCTION 140b54b52 FUN_140b54b52 body=197 status=ok
// SIG undefined FUN_140b54b52(void)

void FUN_140b54b52(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar3 = (code *)param_1[0x16];
  plVar5 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar5 = param_1 + 0x1a;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4);
  *(undefined4 *)(param_1[0x1e] + 0x80) = 0;
  FUN_140b576f0();
  plVar5 = (longlong *)param_1[0x1f];
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
  if (param_1[0x16] != 0) {
    plVar5 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b54c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140b54c18 FUN_140b54c18 body=15 status=ok
// SIG undefined FUN_140b54c18(void)

void FUN_140b54c18(longlong param_1)

{
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 140b54c28 FUN_140b54c28 body=584 status=ok
// SIG undefined FUN_140b54c28(void)

void FUN_140b54c28(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1[0x32a] == 0) || (lVar3 = (**(code **)(*param_1 + 0x48))(), lVar3 == 0)) ||
     (*(char *)(lVar3 + 8) != '\x01')) goto LAB_140b54d60;
  if ((*(byte *)((longlong)param_1 + 0x19c5) & 1) == 0) {
    fVar7 = -1.0;
  }
  else {
    fVar7 = (float)FUN_140b54f46(param_1 + 0x32e);
  }
  plVar1 = param_1 + -0x8a;
  uVar4 = (**(code **)(param_1[-10] + 0x28))(param_1 + -10);
  plVar5 = (longlong *)FUN_1409b5a12(uVar4);
  if (plVar5 == (longlong *)0x0) {
LAB_140b54cb6:
    lVar6 = param_1[-0x51];
    if (lVar6 == 0) {
      local_58 = DAT_14c8464f0;
      local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_68 = *(undefined8 *)(lVar6 + 0x260);
      uStack_60 = *(undefined8 *)(lVar6 + 0x268);
      local_58 = *(undefined8 *)(lVar6 + 0x270);
    }
    uVar2 = FUN_14086aacd(plVar1,&local_68);
  }
  else {
    lVar6 = FUN_1407fbe78();
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_140b54cb6;
    uVar2 = (**(code **)(*plVar5 + 0xaf0))(plVar5,plVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x18ea) = uVar2;
  if (param_2 < 1) {
    if ((*(char *)(lVar3 + 10) == '\x01') && (lVar6 = param_1[-0x5d], lVar6 != 0)) {
      uVar4 = FUN_14018b740();
      plVar5 = (longlong *)FUN_144718840(lVar6,uVar4);
      if ((plVar5 != (longlong *)0x0) &&
         (((lVar6 = (**(code **)(*plVar5 + 0x48))(plVar5), lVar6 != 0 &&
           (*(char *)(lVar6 + 8) == '\x01')) &&
          (param_2 = (**(code **)(*plVar5 + 0x18))(plVar5), 0 < param_2)))) goto LAB_140b54d4d;
    }
    if (*(char *)(lVar3 + 0xb) == '\x01') {
      param_2 = FUN_146620ffa(plVar1);
    }
    else {
      local_68._0_5_ = (uint5)(uint)local_68;
      uVar2 = *(undefined1 *)((longlong)param_1 + 0x18ea);
      plVar5 = (longlong *)FUN_1405c6693(plVar1);
      if (plVar5 == (longlong *)0x0) {
        param_2 = 1;
      }
      else {
        param_2 = (**(code **)(*plVar5 + 0x7a0))
                            (plVar5,plVar1,
                             CONCAT71((int7)((ulonglong)lVar3 >> 8),uVar2) & 0xffffffff,&local_68);
      }
    }
  }
LAB_140b54d4d:
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if (0.0 < fVar7) {
    FUN_140b5543e(param_1 + 0x32e,0x3f800000,fVar7);
  }
LAB_140b54d60:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b54e90 FUN_140b54e90 body=174 status=ok
// SIG undefined FUN_140b54e90(void)

void FUN_140b54e90(longlong *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x18))();
  *(int *)(param_1 + 0x88) = param_2;
  if ((iVar2 != param_2 && param_1[0x32a] != 0) && ((char)param_1[-0x5b] == '\x03')) {
    if ((*(byte *)((longlong)param_1 + 0x19c5) & 1) != 0) {
      uVar1 = *(ushort *)(param_1[0x32a] + 0x34c);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14cb77c40);
      lVar3 = (ulonglong)uVar1 * 0x10 + DAT_14cb77c48;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb77c40);
      FUN_140b551fe(param_1 + 0x32e,lVar3);
    }
    if (param_1[0x32b] != 0) {
      FUN_140b54fee(param_1[0x32b] + 0x270,param_1 + 0x32e);
      return;
    }
  }
  return;
}



// FUNCTION 140b54f46 FUN_140b54f46 body=168 status=ok
// SIG undefined FUN_140b54f46(void)

float FUN_140b54f46(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
    fVar5 = 0.0;
    do {
      fVar4 = (float)FUN_1405583ce(lVar2);
      fVar5 = fVar5 + fVar4;
      lVar2 = lVar2 + 0x88;
      lVar1 = lVar1 + -0x88;
    } while (lVar1 != 0);
    fVar4 = 0.0;
    if (0.0 < fVar5) {
      if ((longlong)*(int *)(param_1 + 0x40) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x38);
        lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
        do {
          fVar3 = (float)FUN_14055830e(lVar2);
          fVar4 = fVar4 + fVar3;
          lVar2 = lVar2 + 0x88;
          lVar1 = lVar1 + -0x88;
        } while (lVar1 != 0);
      }
      fVar4 = fVar4 / fVar5;
    }
  }
  return fVar4;
}



// FUNCTION 140b54fee FUN_140b54fee body=527 status=ok
// SIG undefined FUN_140b54fee(void)

void FUN_140b54fee(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  
  if (((*(longlong *)(param_2 + 0x30) != 0) && ((*(byte *)(param_2 + 0x55) & 1) != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x30) + 0x178) == '\x03')) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      uVar14 = 1;
      uVar13 = 0;
      iVar11 = 0;
      iVar9 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x18);
      }
      uVar12 = *puVar4;
      if (uVar12 == 0) {
        iVar11 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar11 = iVar1 + -1;
        }
        uVar13 = 0;
        uVar7 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar7 = uVar13;
        }
        iVar11 = 0;
        do {
          if (uVar7 == uVar13) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar12 = puVar4[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar13 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar12 & uVar12);
      uVar7 = uVar14 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar9) {
        iVar9 = iVar1;
      }
    }
    if (iVar9 != iVar1) {
      uVar12 = 0xffffffff;
      do {
        lVar10 = (longlong)iVar9 * 0x80 + *(longlong *)(param_1 + 8);
        lVar3 = FUN_1402179b4(lVar10);
        if ((*(byte *)(lVar3 + 0x19) & 0x10) != 0) {
          fVar15 = (float)FUN_140960b90(lVar10);
          fVar16 = 0.0;
          if (0.0 < fVar15) {
            fVar16 = (float)FUN_14108d0d4(lVar10);
            fVar15 = (float)FUN_140960b90(lVar10);
            fVar16 = fVar16 / fVar15;
          }
          FUN_145775712(lVar10,param_2,fVar16);
        }
        uVar12 = uVar12 & ~(uint)uVar14;
        puVar4 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x18);
        }
        iVar2 = *(int *)(param_1 + 0x30);
        iVar9 = (int)uVar13;
        lVar3 = (longlong)iVar9;
        uVar8 = puVar4[lVar3] & uVar12;
        if (uVar8 == 0) {
          iVar5 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar5 = iVar2 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          if (iVar9 < iVar5) {
            lVar10 = 0;
            do {
              uVar8 = puVar4[lVar3 + lVar10 + 1];
              if (uVar8 != 0) {
                uVar13 = (ulonglong)(iVar9 + (int)lVar10 + 1);
                uVar12 = 0xffffffff;
                goto LAB_140b550f4;
              }
              iVar11 = iVar11 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar6 - lVar3 != lVar10);
            uVar12 = 0xffffffff;
            iVar9 = iVar6;
          }
          uVar13 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar2;
        }
        else {
LAB_140b550f4:
          uVar14 = (ulonglong)(-uVar8 & uVar8);
          uVar7 = uVar14 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar9 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar9) {
            iVar9 = iVar2;
          }
        }
      } while (iVar9 != iVar1);
    }
  }
  return;
}



// FUNCTION 140b551fe FUN_140b551fe body=575 status=ok
// SIG undefined FUN_140b551fe(void)

void FUN_140b551fe(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_108 [40];
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)*(uint *)(param_1 + 0x40) < (int)*(uint *)(param_2 + 1)) {
    uVar4 = *(uint *)(param_1 + 0x40);
  }
  if (0 < (int)uVar4) {
    lVar8 = 0x50;
    lVar7 = 0;
    do {
      lVar5 = *param_2;
      if ((*(longlong *)(lVar5 + 0x20 + lVar7) == 0) ||
         (0xfffffffd < *(int *)(lVar5 + 0x28 + lVar7) - 1U)) {
        local_e0[0] = '\0';
        local_b8[0] = 0;
        FUN_1456bb102(local_e0,*(undefined8 *)(param_1 + 0x30));
        FUN_1448729ea(lVar5 + lVar7 + 0x48,&local_b0,local_e0);
        if (local_90 == 3) {
          fVar9 = local_b0;
          bVar3 = 3;
        }
        else {
          FUN_1400b56fe(&local_88,&local_b0,3);
          fVar9 = 0.0;
          if (local_68 != 0) {
            fVar9 = local_88;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar2 != (code *)0x0) {
            pfVar6 = &local_88;
            if (0x18 < local_70) {
              pfVar6 = (float *)CONCAT44(uStack_84,local_88);
            }
            (*pcVar2)(pfVar6);
          }
          bVar3 = local_90;
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT44(uStack_84,local_88));
            bVar3 = local_90;
          }
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pfVar6 = &local_b0;
          if (0x18 < local_98) {
            pfVar6 = (float *)CONCAT44(uStack_ac,local_b0);
          }
          (*pcVar2)(pfVar6);
        }
        if (0x18 < local_98) {
          FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
        }
        FUN_1448173f8(local_b8);
        if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        pfVar6 = (float *)(*(longlong *)(param_1 + 0x38) + 8 + lVar8);
        if ((fVar9 != *pfVar6) || (NAN(fVar9) || NAN(*pfVar6))) {
          lVar5 = *(longlong *)(param_1 + 0x38) + lVar8;
          *(float *)(lVar5 + 8) = fVar9;
          FUN_14020a6cc(lVar5,1);
        }
      }
      lVar7 = lVar7 + 0xf0;
      lVar8 = lVar8 + 0x88;
    } while ((ulonglong)uVar4 * 0xf0 - lVar7 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b5543e FUN_140b5543e body=360 status=ok
// SIG undefined FUN_140b5543e(void)

void FUN_140b5543e(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
    fVar7 = 0.0;
    do {
      fVar4 = (float)FUN_1405583ce(lVar2);
      fVar7 = fVar7 + fVar4;
      lVar2 = lVar2 + 0x88;
      lVar1 = lVar1 + -0x88;
    } while (lVar1 != 0);
    if (0.0001 < fVar7) {
      if ((longlong)*(int *)(param_1 + 0x40) == 0) {
        fVar4 = 0.0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x38);
        lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
        fVar4 = 0.0;
        do {
          fVar5 = (float)FUN_14055830e(lVar2);
          fVar4 = fVar4 + fVar5;
          lVar2 = lVar2 + 0x88;
          lVar1 = lVar1 + -0x88;
        } while (lVar1 != 0);
      }
      fVar4 = fVar4 / fVar7;
      if (fVar4 < param_3) {
        fVar5 = param_2 + fVar4;
        if (param_3 <= param_2 + fVar4) {
          fVar5 = param_3;
        }
        fVar7 = fVar7 * (fVar5 - fVar4);
        if ((0.0 < fVar7) && (0 < *(int *)(param_1 + 0x40))) {
          lVar2 = 0;
          lVar1 = 0;
          do {
            lVar3 = *(longlong *)(param_1 + 0x38) + lVar2;
            fVar5 = (float)FUN_1405583ce(lVar3);
            fVar6 = (float)FUN_14055830e(lVar3);
            fVar4 = fVar7;
            if (fVar5 - fVar6 <= fVar7) {
              fVar4 = fVar5 - fVar6;
            }
            FUN_140b555a6(lVar3,fVar4,0);
            fVar7 = fVar7 - fVar4;
            if (fVar7 < 0.0001) {
              return;
            }
            lVar1 = lVar1 + 1;
            lVar2 = lVar2 + 0x88;
          } while (lVar1 < *(int *)(param_1 + 0x40));
        }
      }
    }
  }
  return;
}



// FUNCTION 140b555a6 FUN_140b555a6 body=157 status=ok
// SIG undefined FUN_140b555a6(void)

void FUN_140b555a6(char *param_1,float param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  
  if (*param_1 == '\x01') {
    param_1 = param_1 + 0x30;
    cVar2 = FUN_14486ea84(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_14008e0ae(param_1);
      FUN_140b55644(uVar1,param_2,1);
      if (param_3 != '\0') {
        uVar1 = FUN_14008e0ae(param_1);
        FUN_14584f9b6(uVar1);
        return;
      }
    }
  }
  else {
    fVar3 = param_2 + *(float *)(param_1 + 0x74);
    if (*(float *)(param_1 + 0x54) <= param_2 + *(float *)(param_1 + 0x74)) {
      fVar3 = *(float *)(param_1 + 0x54);
    }
    *(float *)(param_1 + 0x78) = fVar3;
    FUN_14020a6cc(param_1 + 0x70,1);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_14036aa80();
      return;
    }
  }
  return;
}



// FUNCTION 140b55644 FUN_140b55644 body=25 status=ok
// SIG undefined FUN_140b55644(void)

void FUN_140b55644(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 200) + *(float *)(param_1 + 0x120);
  FUN_1409d461e(fVar1,param_2 + fVar1);
  return;
}



// FUNCTION 140b5565e FUN_140b5565e body=43 status=ok
// SIG undefined FUN_140b5565e(void)

void FUN_140b5565e(undefined8 param_1,longlong *param_2)

{
  FUN_140b55689(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b55689 FUN_140b55689 body=68 status=ok
// SIG undefined FUN_140b55689(void)

void FUN_140b55689(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b556ce FUN_140b556ce body=2015 status=ok
// SIG undefined FUN_140b556ce(void)

void FUN_140b556ce(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_c8;
  uint *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *plStack_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[1] == 0) {
    bVar20 = true;
LAB_140b55711:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_14479d2ce(param_1[1] + 0x10);
    if (lVar5 == 0) {
      bVar20 = true;
    }
    else {
      bVar20 = *param_1 == 0;
    }
    if (param_1[1] == 0) goto LAB_140b55711;
    lVar5 = *(longlong *)(param_1[1] + 0x28);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
  }
  if (param_4 == 0) {
    param_4 = FUN_140b55eae();
  }
  if (param_1[1] == 0) {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
LAB_140b55740:
    lVar7 = 0;
  }
  else {
    FUN_140232b8e(param_1[1],&local_a8);
    if (param_1[1] == 0) goto LAB_140b55740;
    lVar7 = FUN_14479d2ce(param_1[1] + 0x10);
  }
  *(undefined4 *)(param_1 + 3) = DAT_14cab2cd4;
  if ((!bVar20 && lVar5 == param_4) && lVar7 == param_2) goto LAB_140b558fa;
  if (param_1[1] == 0) {
    uVar15 = 0xffff;
    uVar9 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1[1] + 0x30);
    uVar9 = uVar15 >> 0x10;
  }
  param_1[1] = 0;
  plVar16 = (longlong *)param_1[2];
  if (plVar16 != (longlong *)0x0) {
    param_1[2] = 0;
    LOCK();
    plVar18 = plVar16 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((short)uVar15 != -1) {
    if (local_a8 == 0) {
      if (*param_1 != 0) {
        FUN_14009d5de(*(undefined8 *)(*param_1 + 0x548),uVar15 & 0xffff | uVar9 << 0x10);
      }
    }
    else {
      FUN_14754785e(local_a8,uVar15 & 0xffff | uVar9 << 0x10);
    }
  }
  if ((int)param_3[4] != *(int *)((longlong)param_3 + 0x4c)) {
    plVar16 = param_3 + 10;
    if ((longlong *)param_3[0xb] != (longlong *)0x0) {
      plVar16 = (longlong *)param_3[0xb];
    }
    local_c8 = param_3 + 3;
    iVar11 = (int)param_3[0xc];
    iVar12 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar12 = iVar11;
    }
    if ((int)param_3[4] - *(int *)((longlong)param_3 + 0x4c) < iVar12 >> 2) {
      plVar18 = param_3 + 5;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = plVar18;
      if ((int)param_3[8] == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar11 = (int)param_3[8];
      }
      local_90 = local_c8;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar6 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar12 = local_78._4_4_;
      if ((local_78._4_4_ != iVar11) || (local_78 = local_58, uStack_60 != plVar18)) {
        do {
          do {
            local_78 = uVar6;
            *(undefined4 *)
             ((longlong)plVar16 + (longlong)*(int *)(*local_90 + 0x1c + (longlong)iVar12 * 0x20) * 4
             ) = 0xffffffff;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar12 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_78._4_4_ != iVar11);
        } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar18) || (local_90 != local_c8));
      }
    }
    else if (0 < iVar11) {
      lVar5 = 0;
      do {
        *(undefined4 *)((longlong)plVar16 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_3[0xc]);
    }
    iVar11 = (int)param_3[8];
    if (iVar11 == 0) {
      uVar17 = 0;
      uVar19 = 1;
      iVar12 = 0;
      iVar10 = 0;
    }
    else {
      puVar8 = (uint *)param_3[7];
      if ((uint *)param_3[7] == (uint *)0x0) {
        puVar8 = (uint *)(param_3 + 5);
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar12 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar12 = iVar11 + -1;
        }
        uVar17 = 0;
        uVar19 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar19 = uVar17;
        }
        iVar10 = 0;
        do {
          if (uVar19 == uVar17) goto LAB_140b55ae9;
          iVar10 = iVar10 + 0x20;
          uVar15 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar17 = 0;
        iVar10 = 0;
      }
      uVar19 = (ulonglong)(-uVar15 & uVar15);
      uVar3 = uVar19 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar12 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar12) {
        iVar12 = iVar11;
      }
    }
    if (iVar12 < iVar11) {
      uVar15 = 0xffffffff;
      local_c0 = (uint *)(param_3 + 5);
      do {
        puVar4 = *(undefined8 **)(*local_c8 + 0x10 + (longlong)iVar12 * 0x20);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
          iVar11 = (int)param_3[8];
        }
        uVar15 = uVar15 & ~(uint)uVar19;
        puVar8 = (uint *)param_3[7];
        if ((uint *)param_3[7] == (uint *)0x0) {
          puVar8 = local_c0;
        }
        iVar12 = (int)uVar17;
        lVar5 = (longlong)iVar12;
        uVar9 = puVar8[lVar5] & uVar15;
        if (uVar9 == 0) {
          iVar13 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar13 = iVar11 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar14 = iVar13;
          if (iVar13 < iVar12) {
            iVar14 = iVar12;
          }
          if (iVar13 <= iVar12) break;
          lVar7 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar9 = puVar8[lVar5 + lVar7 + 1];
            if (uVar9 != 0) break;
            lVar7 = lVar7 + 1;
            if (iVar14 - lVar5 == lVar7) goto LAB_140b55ae9;
          }
          uVar17 = (ulonglong)(iVar12 + (int)lVar7 + 1);
          uVar15 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar19 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar11);
    }
LAB_140b55ae9:
    *(undefined4 *)(param_3 + 4) = 0;
    if (*(int *)((longlong)param_3 + 0x24) < 0) {
      FUN_1446f4a44(local_c8,0);
    }
    param_3[9] = 0xffffffff;
    *(undefined4 *)(param_3 + 8) = 0;
  }
  if ((int)param_3[0xe] != *(int *)((longlong)param_3 + 0x9c)) {
    FUN_147567e0a(param_3 + 0xd);
    FUN_147567f4e(param_3 + 0xd);
  }
  lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
  if (lVar5 == 0) {
    uVar6 = (**(code **)(*param_3 + 0x78))(param_3);
    lVar5 = FUN_1407f0098(uVar6,4,L"DefaultEntitySystemLinker");
  }
  if ((lVar5 == 0) || (DAT_14c950c29 == 0)) {
    *param_1 = lVar5;
    if (lVar5 == 0) goto LAB_140b558fa;
  }
  else {
    FUN_1456cec3c(lVar5);
    *param_1 = lVar5;
  }
  if (*(longlong *)(lVar5 + 0x548) == 0) goto LAB_140b558fa;
  uVar6 = (**(code **)(*param_3 + 0x78))(param_3);
  lVar5 = *(longlong *)(*param_1 + 0x548);
  local_d8 = param_4;
  FUN_140b55f76(lVar5,&local_90,param_2,uVar6);
  uVar15 = (uint)local_90;
  uVar9 = (uint)local_90 & 0xffff;
  lVar5 = *(longlong *)(lVar5 + 8);
  lVar7 = (ulonglong)uVar9 * 0x128;
  local_b8 = *(longlong *)(lVar5 + 0x100 + lVar7);
  plVar16 = *(longlong **)(lVar5 + 0x108 + lVar7);
  if (plVar16 == (longlong *)0x0) {
    param_1[1] = local_b8;
    plVar18 = (longlong *)param_1[2];
    if (plVar18 != (longlong *)0x0) {
      param_1[2] = 0;
LAB_140b55d83:
      LOCK();
      plVar2 = plVar18 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      if (plVar16 != (longlong *)0x0) goto LAB_140b5586a;
      goto LAB_140b55874;
    }
    local_b0 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    param_1[1] = local_b8;
    plVar18 = (longlong *)param_1[2];
    if (plVar16 == plVar18) {
      LOCK();
      plVar18 = plVar16 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    else {
      param_1[2] = (longlong)plVar16;
      if (plVar18 != (longlong *)0x0) goto LAB_140b55d83;
    }
LAB_140b5586a:
    LOCK();
    plVar18 = plVar16 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
LAB_140b55874:
    local_b8 = param_1[1];
    local_b0 = param_1[2];
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
  }
  (**(code **)(*param_3 + 0xc0))(param_3,&local_b8);
  if (uVar9 != 0xffff) {
    if (*param_1 == 0) {
      *(undefined4 *)(param_3 + 0x22) = 0;
      iVar11 = 0;
    }
    else {
      uVar9 = *(uint *)(*param_1 + 0xc);
      *(uint *)(param_3 + 0x22) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar11 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar11 = *(int *)(lVar5 + 0x10);
        bVar20 = iVar11 == 0;
        if (bVar20) {
          *(int *)(lVar5 + 0x10) = iVar12;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar11 = iVar12;
        }
      }
    }
    *(int *)((longlong)param_3 + 0x114) = iVar11;
    *(uint *)(param_3 + 0x23) = uVar15;
  }
LAB_140b558fa:
  plVar16 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_a0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b55eae FUN_140b55eae body=198 status=ok
// SIG undefined FUN_140b55eae(void)

undefined8 FUN_140b55eae(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab2540) {
    FUN_144b3d300(&DAT_14cab2540);
    if (DAT_14cab2540 == -1) {
      FUN_1446ddc76(&local_18,"PrecompiledDataManager",1);
      uVar1 = FUN_1409ffe1d();
      local_20 = 0;
      local_28 = 0;
      DAT_14cab2538 = FUN_14577583b(uVar1,local_18,0x80,0);
      _Init_thread_footer(&DAT_14cab2540);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cab2538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b55f76 FUN_140b55f76 body=380 status=ok
// SIG undefined FUN_140b55f76(void)

undefined4 *
FUN_140b55f76(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  short sVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50 [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  sVar4 = (short)(int)param_1[8];
  *(short *)(param_1 + 8) = sVar4 + 1;
  FUN_140b562d0(param_1 + 1,local_50);
  *(undefined2 *)param_2 = local_50[0];
  *(short *)((longlong)param_2 + 2) = sVar4;
  if (param_5 == 0) {
    param_5 = FUN_140b55eae();
  }
  local_68 = *param_2;
  lVar3 = *param_1;
  local_70 = param_4;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  local_60 = lVar3;
  local_58 = param_5;
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a475bf0;
  plVar1 = plVar5 + 2;
  FUN_140b56624(plVar1,param_3,&local_70);
  local_80 = plVar1;
  local_78 = plVar5;
  FUN_140b560f4(&local_80,plVar1);
  local_90 = local_80;
  local_88 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  FUN_140b56194(local_48,&local_90);
  plVar1 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b560f4 FUN_140b560f4 body=159 status=ok
// SIG undefined FUN_140b560f4(void)

void FUN_140b560f4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_140b56131;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_140b56131;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140b56131:
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
                    /* WARNING: Could not recover jumptable at 0x000140b5618f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140b56194 FUN_140b56194 body=315 status=ok
// SIG undefined FUN_140b56194(void)

undefined8 * FUN_140b56194(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  param_1[6] = 0;
  param_1[7] = 0x8000000000;
  param_1[8] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = &DAT_10000003c;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x80000000;
  *(byte *)((longlong)param_1 + 0xe4) = *(byte *)((longlong)param_1 + 0xe4) & 0xc0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = *param_2;
  lVar3 = param_2[1];
  param_1[0x21] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = DAT_14cab2cd4;
  *(undefined4 *)(param_1 + 0x22) = DAT_14cab2cd4;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x11a) = *(undefined4 *)(*param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x11e) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x122) = *(undefined4 *)(*param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x126) = *(byte *)((longlong)param_1 + 0x126) & 0xf8 | 2;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 140b562d0 FUN_140b562d0 body=478 status=ok
// SIG undefined FUN_140b562d0(void)

int * FUN_140b562d0(longlong *param_1,int *param_2)

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
      FUN_140b564ae(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x128);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x128) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x128 + *param_1;
  return param_2;
}



// FUNCTION 140b564ae FUN_140b564ae body=372 status=ok
// SIG undefined FUN_140b564ae(void)

void FUN_140b564ae(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x128;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b56536;
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
LAB_140b56536:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x128)) {
    uVar7 = uVar5 / 0x128 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x128,8);
  return;
}



// FUNCTION 140b56624 FUN_140b56624 body=882 status=ok
// SIG undefined FUN_140b56624(void)

undefined8 * FUN_140b56624(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3;
  lVar5 = *param_3;
  param_1[3] = 0;
  iVar3 = 0;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar3;
  lVar5 = param_3[2];
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
    param_1[4] = 0;
  }
  else {
    param_1[4] = 0;
    if (lVar5 == 0) {
      iVar3 = 0;
      goto LAB_140b56747;
    }
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  *(uint *)(param_1 + 4) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar4 = DAT_14c964868 + 1;
    bVar6 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar4);
    }
    LOCK();
    iVar3 = *(int *)(lVar5 + 0x10);
    bVar6 = iVar3 == 0;
    if (bVar6) {
      *(int *)(lVar5 + 0x10) = iVar4;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar6) {
      iVar3 = iVar4;
    }
  }
LAB_140b56747:
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  lVar5 = param_3[3];
  param_1[5] = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 6) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar2 = param_3[1];
  lVar5 = param_3[2];
  param_1[0xc] = 0;
  iVar3 = 0;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 100) = iVar3;
  *(int *)(param_1 + 0xd) = (int)lVar2;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  if (param_1[5] != 0) {
    FUN_140b56998(param_1[5],&local_3c,param_2);
    *(undefined4 *)((longlong)param_1 + 0x34) = local_3c;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b56998 FUN_140b56998 body=542 status=ok
// SIG undefined FUN_140b56998(void)

int * FUN_140b56998(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined1 local_5c [4];
  undefined8 *local_58;
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b56bb8();
  if (*param_2 == -1) {
    FUN_140b5719a(param_1 + 0xa0,&local_58);
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = -1;
    *(undefined1 *)(local_50 + 0xb) = 0;
    *(undefined2 *)((longlong)local_50 + 0x2e) = 0;
    *param_2 = (int)local_58;
    lVar5 = (longlong)(int)local_58 * 0x30 + *(longlong *)(param_1 + 0xa0);
    if (param_3 == 0) {
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(int *)(lVar5 + 0x28) = (int)local_58;
      *(undefined1 *)(lVar5 + 0x2c) = DAT_00000063;
      local_64 = 0;
    }
    else {
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar4 + 0x10) = iVar3;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar3;
        }
      }
      *(ulonglong *)(lVar5 + 0x20) = CONCAT44(iVar2,uVar1);
      *(int *)(lVar5 + 0x28) = (int)local_58;
      *(undefined1 *)(lVar5 + 0x2c) = *(undefined1 *)(param_3 + 99);
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar2 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar2 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar3;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar3;
        }
      }
      local_64 = CONCAT44(iVar2,uVar1);
    }
    local_58 = &local_64;
    local_50 = param_2;
    FUN_140b56d76(param_1 + 0x50,local_5c,&local_58,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b56bb8 FUN_140b56bb8 body=446 status=ok
// SIG undefined FUN_140b56bb8(void)

uint * FUN_140b56bb8(longlong param_1,uint *param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_3 == 0) {
    uVar9 = 0;
    uVar3 = 0;
  }
  else {
    uVar9 = *(uint *)(param_3 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar3 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar3 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = 0xffffffff;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar4 = uVar3 >> 0xd ^ uVar9 - uVar3;
    uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar3) - uVar4;
    uVar7 = uVar6 >> 0xd ^ (uVar3 - uVar4) - uVar6;
    uVar8 = uVar7 >> 0xc ^ (uVar4 - uVar6) - uVar7;
    uVar4 = uVar8 << 0x10 ^ (uVar6 - uVar7) - uVar8;
    uVar6 = uVar4 >> 5 ^ (uVar7 - uVar8) - uVar4;
    uVar7 = uVar6 >> 3 ^ (uVar8 - uVar4) - uVar6;
    uVar4 = uVar7 << 10 ^ (uVar4 - uVar6) - uVar7;
    lVar10 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x90);
    }
    uVar4 = *(uint *)(lVar10 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (uVar4 >> 0xf ^ uVar6 - (uVar7 + uVar4))) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar4 * 0x14);
        if ((*puVar1 == uVar9) &&
           (*(uint *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)(int)uVar4 * 0x14) == uVar3)) {
          if (puVar1 != (uint *)0x0) {
            uVar5 = puVar1[2];
          }
          break;
        }
        uVar4 = puVar1[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  *param_2 = uVar5;
  return param_2;
}



// FUNCTION 140b56d76 FUN_140b56d76 body=431 status=ok
// SIG undefined FUN_140b56d76(void)

undefined4 *
FUN_140b56d76(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b56fc4(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
  uVar5 = uVar6 >> 0xd ^ (int)uVar2 - uVar6;
  uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - uVar6;
  uVar11 = uVar8 >> 0xd ^ (uVar6 - uVar5) - uVar8;
  uVar6 = uVar11 >> 0xc ^ (uVar5 - uVar8) - uVar11;
  uVar5 = uVar6 << 0x10 ^ (uVar8 - uVar11) - uVar6;
  uVar8 = uVar5 >> 5 ^ (uVar11 - uVar6) - uVar5;
  uVar6 = uVar8 >> 3 ^ (uVar6 - uVar5) - uVar8;
  uVar5 = uVar6 << 10 ^ (uVar5 - uVar8) - uVar6;
  uVar5 = uVar5 >> 0xf ^ uVar8 - (uVar6 + uVar5);
  local_68 = param_4;
  cVar4 = FUN_140b56f26(param_1,uVar5,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)(local_48 + 2) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_140b57378(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b56f26 FUN_140b56f26 body=158 status=ok
// SIG undefined FUN_140b56f26(void)

void FUN_140b56f26(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar3 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar3 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 == -1) {
      uVar3 = 0;
    }
    else {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_140d218da(param_1,*param_4);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = piVar1[3];
        uVar3 = 0;
      } while (iVar5 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 140b56fc4 FUN_140b56fc4 body=470 status=ok
// SIG undefined FUN_140b56fc4(void)

int * FUN_140b56fc4(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140b5719a FUN_140b5719a body=478 status=ok
// SIG undefined FUN_140b5719a(void)

int * FUN_140b5719a(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar11);
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
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 140b57378 FUN_140b57378 body=690 status=ok
// SIG undefined FUN_140b57378(void)

void FUN_140b57378(longlong *param_1)

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
        lVar11 = (longlong)iVar6;
        uVar3 = *(uint *)(lVar12 + 4 + lVar11 * 0x14);
        uVar15 = uVar3 >> 0xd ^ *(int *)(lVar12 + lVar11 * 0x14) - uVar3;
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
        *(int *)(lVar12 + 0x10 + lVar11 * 0x14) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0xc + lVar11 * 0x14) =
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
            if (iVar2 - lVar12 == lVar11) goto LAB_140b575e3;
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
LAB_140b575e3:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b5762c FUN_140b5762c body=195 status=ok
// SIG undefined FUN_140b5762c(void)

void FUN_140b5762c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar3 = (code *)param_1[0x16];
  plVar6 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar6 = param_1 + 0x1a;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  uVar4 = (*pcVar3)(uVar5);
  *(undefined1 *)(param_1[0x1e] + 0x80) = uVar4;
  FUN_140b576f0();
  plVar6 = (longlong *)param_1[0x1f];
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
  if (param_1[0x16] != 0) {
    plVar6 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b576ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140b576f0 FUN_140b576f0 body=309 status=ok
// SIG undefined FUN_140b576f0(void)

void FUN_140b576f0(LPCRITICAL_SECTION param_1)

{
  code *pcVar1;
  HANDLE pvVar2;
  ULONG_PTR UVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  HANDLE pvVar5;
  HANDLE pvVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  LONG local_88;
  LONG LStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  LONG LStack_60;
  LONG LStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (code *)0x0;
  local_b8 = (longlong *)0x0;
  EnterCriticalSection(param_1);
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  LStack_60 = (LONG)uStack_a0;
  LStack_5c = uStack_a0._4_4_;
  local_78 = (undefined4)local_b8;
  uStack_74 = local_b8._4_4_;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  local_88 = (LONG)local_c8;
  LStack_84 = local_c8._4_4_;
  uStack_80 = (undefined4)uStack_c0;
  uStack_7c = uStack_c0._4_4_;
  pcVar1 = *(code **)&param_1[1].LockCount;
  pvVar2 = param_1[1].OwningThread;
  plVar8 = param_1[1].LockSemaphore;
  UVar3 = param_1[1].SpinCount;
  p_Var4 = param_1[2].DebugInfo;
  uVar7._0_4_ = param_1[2].LockCount;
  uVar7._4_4_ = param_1[2].RecursionCount;
  pvVar5 = param_1[2].OwningThread;
  pvVar6 = param_1[2].LockSemaphore;
  *(undefined4 *)&param_1[2].OwningThread = (undefined4)local_98;
  *(undefined4 *)((longlong)&param_1[2].OwningThread + 4) = local_98._4_4_;
  *(undefined4 *)&param_1[2].LockSemaphore = (undefined4)uStack_90;
  *(undefined4 *)((longlong)&param_1[2].LockSemaphore + 4) = uStack_90._4_4_;
  *(undefined4 *)&param_1[2].DebugInfo = (undefined4)local_a8;
  *(undefined4 *)((longlong)&param_1[2].DebugInfo + 4) = local_a8._4_4_;
  param_1[2].LockCount = (LONG)uStack_a0;
  param_1[2].RecursionCount = uStack_a0._4_4_;
  *(undefined4 *)&param_1[1].LockSemaphore = (undefined4)local_b8;
  *(undefined4 *)((longlong)&param_1[1].LockSemaphore + 4) = local_b8._4_4_;
  *(undefined4 *)&param_1[1].SpinCount = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)&param_1[1].SpinCount + 4) = uStack_b0._4_4_;
  param_1[1].LockCount = (LONG)local_c8;
  param_1[1].RecursionCount = local_c8._4_4_;
  *(undefined4 *)&param_1[1].OwningThread = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)&param_1[1].OwningThread + 4) = uStack_c0._4_4_;
  LOCK();
  *(undefined1 *)&param_1[3].DebugInfo = 1;
  UNLOCK();
  local_c8 = pcVar1;
  uStack_c0 = pvVar2;
  local_b8 = plVar8;
  uStack_b0 = UVar3;
  local_a8 = p_Var4;
  uStack_a0 = uVar7;
  local_98 = pvVar5;
  uStack_90 = pvVar6;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  (**(code **)(*(longlong *)param_1[2].SpinCount + 0x10))();
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    plVar8 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar8 = &local_a8;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar1)(uVar7);
    if (local_c8 != (code *)0x0) {
      plVar8 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar8 = local_b8;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b57826 FUN_140b57826 body=41 status=ok
// SIG undefined FUN_140b57826(void)

void FUN_140b57826(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140b57850();
  return;
}


