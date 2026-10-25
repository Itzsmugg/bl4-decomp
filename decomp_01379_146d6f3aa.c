// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146d6f3aa FUN_146d6f3aa body=588 status=ok
// SIG undefined FUN_146d6f3aa(void)

void FUN_146d6f3aa(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  float local_108;
  float local_100;
  float local_f8;
  float local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(float *)(param_1 + 0xb84) != param_2) || (NAN(*(float *)(param_1 + 0xb84)) || NAN(param_2))
     ) {
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar9 = 0;
      do {
        lVar10 = lVar9 << 6;
        local_e0 = lVar9 << 7;
        uVar11 = 0;
        local_e8 = lVar9;
        local_d8 = lVar10;
        do {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar9 * 0x20 + uVar11 * 8);
          if (lVar6 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x30) + lVar10;
            lVar7 = *(longlong *)(lVar8 + uVar11 * 8);
            if ((1.1754944e-38 < *(float *)(lVar7 + 0x134)) &&
               (lVar8 = *(longlong *)(lVar8 + 0x20 + uVar11 * 8),
               1.1754944e-38 < *(float *)(lVar8 + 0x134))) {
              if (*(int *)(lVar7 + 0x150) != *(int *)(lVar8 + 0x150)) {
                fVar14 = param_2;
                fVar15 = 1.0;
                if (*(int *)(lVar8 + 0x150) <= *(int *)(lVar7 + 0x150)) {
                  fVar14 = 1.0;
                  fVar15 = param_2;
                }
                lVar13 = *(longlong *)(param_1 + 0x40) + local_e0;
                fVar1 = *(float *)(lVar6 + 0x358);
                fVar2 = *(float *)(lVar6 + 0x350);
                fVar3 = *(float *)(lVar6 + 0x354);
                fVar4 = *(float *)(lVar6 + 0x34c);
                local_d0 = *(undefined8 *)(param_1 + 0x50);
                local_c8 = *(undefined4 *)(param_1 + 0x58);
                iVar5 = *(int *)(lVar13 + 0x10 + uVar11 * 4);
                lVar10 = local_d8;
                if (0 < iVar5) {
                  iVar12 = 0;
                  do {
                    local_118 = lVar7;
                    local_110 = lVar8;
                    local_108 = fVar14 * fVar4;
                    local_100 = fVar3 * fVar14;
                    local_f8 = fVar15 * fVar2;
                    local_f0 = fVar1 * fVar15;
                    FUN_146d749ba(lVar13,iVar12,uVar11 & 0xffffffff,&local_d0);
                    iVar12 = iVar12 + 1;
                    lVar10 = local_d8;
                  } while (iVar5 != iVar12);
                }
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != 4);
        lVar9 = local_e8 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x48));
    }
    *(float *)(param_1 + 0xb84) = param_2;
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d6f5f8 FUN_146d6f5f8 body=2209 status=ok
// SIG undefined FUN_146d6f5f8(void)

void FUN_146d6f5f8(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
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
  float fVar21;
  float fVar22;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_f0;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x28) * *(float *)(lVar4 + 0x134);
  fVar11 = 0.0;
  local_110 = 0.0;
  fVar28 = 0.0;
  fVar34 = 0.0;
  fVar14 = 0.0;
  fVar25 = 0.0;
  fVar31 = 0.0;
  fVar17 = 0.0;
  fVar19 = 0.0;
  fVar36 = 0.0;
  fVar21 = 0.0;
  if (1.1754944e-38 < fVar8) {
    fVar36 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x24);
    fVar11 = *(float *)(lVar4 + 0x68) * fVar36;
    fVar14 = *(float *)(lVar4 + 0x58) * fVar36;
    fVar17 = *(float *)(lVar4 + 0x48) * fVar36;
    fVar28 = *(float *)(lVar4 + 100) * fVar36;
    fVar25 = *(float *)(lVar4 + 0x54) * fVar36;
    fVar19 = *(float *)(lVar4 + 0x44) * fVar36;
    fVar34 = *(float *)(lVar4 + 0x60) * fVar36;
    fVar31 = *(float *)(lVar4 + 0x50) * fVar36;
    fVar36 = fVar36 * *(float *)(lVar4 + 0x40);
    fVar21 = fVar8;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  fVar9 = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x40) * *(float *)(lVar5 + 0x134);
  fVar20 = 0.0;
  fVar26 = 0.0;
  fVar35 = 0.0;
  fVar13 = 0.0;
  local_10c = 0.0;
  fVar22 = 0.0;
  fVar15 = 0.0;
  fVar29 = 0.0;
  fVar8 = 0.0;
  if (1.1754944e-38 < fVar9) {
    fVar29 = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x3c);
    local_110 = *(float *)(lVar5 + 0x68) * fVar29;
    fVar35 = *(float *)(lVar5 + 0x58) * fVar29;
    fVar13 = *(float *)(lVar5 + 0x48) * fVar29;
    fVar20 = *(float *)(lVar5 + 100) * fVar29;
    local_10c = *(float *)(lVar5 + 0x54) * fVar29;
    fVar15 = *(float *)(lVar5 + 0x44) * fVar29;
    fVar26 = *(float *)(lVar5 + 0x60) * fVar29;
    fVar22 = *(float *)(lVar5 + 0x50) * fVar29;
    fVar29 = fVar29 * *(float *)(lVar5 + 0x40);
    fVar8 = fVar9;
  }
  if (0 < (longlong)*(int *)(param_1 + 0x58)) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar7 = 0;
    iVar6 = 0;
    fVar30 = 0.0;
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar32 = 0.0;
    fVar23 = 0.0;
    fVar40 = 0.0;
    fVar38 = 0.0;
    fVar37 = 0.0;
    fVar16 = 0.0;
    fVar18 = 0.0;
    fVar9 = 0.0;
    do {
      fVar24 = *(float *)(lVar2 + 0xe8 + lVar7);
      if (((0.0 < fVar24) || (0.0 < *(float *)(lVar2 + 0x100 + lVar7))) ||
         (pfVar1 = (float *)(lVar2 + 0x3c + lVar7),
         *pfVar1 <= *(float *)(param_1 + 0x14) && *(float *)(param_1 + 0x14) != *pfVar1)) {
        fVar23 = fVar23 + *(float *)(lVar2 + lVar7);
        fVar32 = fVar32 + *(float *)(lVar2 + 4 + lVar7);
        fVar12 = fVar12 + *(float *)(lVar2 + 8 + lVar7);
        fVar37 = fVar37 + *(float *)(lVar2 + 0xc + lVar7);
        fVar38 = fVar38 + *(float *)(lVar2 + 0x10 + lVar7);
        fVar40 = fVar40 + *(float *)(lVar2 + 0x14 + lVar7);
        fVar10 = fVar10 + *(float *)(lVar2 + 0x48 + lVar7);
        fVar9 = *(float *)(lVar2 + 0x18 + lVar7);
        fVar18 = *(float *)(lVar2 + 0x1c + lVar7);
        fVar16 = *(float *)(lVar2 + 0x20 + lVar7);
        fVar30 = fVar30 + fVar24;
        iVar6 = iVar6 + 1;
      }
      lVar7 = lVar7 + 0x10c;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x10c - lVar7 != 0);
    if (1 < iVar6) {
      fVar24 = fVar23 * fVar18 - fVar9 * fVar32;
      fVar23 = fVar12 * fVar9 - fVar16 * fVar23;
      fVar33 = fVar32 * fVar16 - fVar18 * fVar12;
      fVar12 = *(float *)(param_1 + 0x48);
      fVar32 = 0.0;
      local_f0 = 0.0;
      fVar27 = 0.0;
      fVar39 = 0.0;
      local_108 = 0.0;
      if (1.1754944e-38 < fVar12) {
        fVar32 = fVar11 * fVar24 + fVar34 * fVar33 + fVar28 * fVar23;
        fVar39 = fVar14 * fVar24 + fVar31 * fVar33 + fVar25 * fVar23;
        fVar27 = fVar17 * fVar24 + fVar36 * fVar33 + fVar19 * fVar23;
        local_108 = fVar21 + fVar24 * fVar32 + fVar33 * fVar27 + fVar23 * fVar39;
      }
      fVar11 = fVar37 * fVar18 - fVar9 * fVar38;
      fVar14 = fVar40 * fVar9 - fVar16 * fVar37;
      fVar36 = fVar38 * fVar16 - fVar18 * fVar40;
      fVar21 = *(float *)(param_1 + 0x4c);
      if (fVar21 <= 1.1754944e-38) {
        local_114 = 0.0;
        local_110 = 0.0;
      }
      else {
        local_110 = local_110 * fVar11 + fVar26 * fVar36 + fVar20 * fVar14;
        local_114 = fVar35 * fVar11 + fVar22 * fVar36 + local_10c * fVar14;
        local_f0 = fVar13 * fVar11 + fVar29 * fVar36 + fVar15 * fVar14;
        local_108 = local_108 + fVar8 + fVar11 * local_110 + fVar36 * local_f0 + fVar14 * local_114;
      }
      fVar8 = 0.0;
      if (-fVar30 / param_2 <= 0.0) {
        fVar8 = -fVar30 / param_2;
      }
      fVar11 = (float)(~-(uint)(1e-08 < local_108) & 0x80000000 |
                      (uint)(-1.0 / local_108) & -(uint)(1e-08 < local_108)) *
               *(float *)(param_1 + 0x10) *
               ((fVar24 * *(float *)(lVar4 + 0x38) +
                 fVar33 * *(float *)(lVar4 + 0x30) + fVar23 * *(float *)(lVar4 + 0x34) +
                (((*(float *)(lVar4 + 0x28) - *(float *)(lVar5 + 0x28)) * fVar16 +
                 (*(float *)(lVar4 + 0x20) - *(float *)(lVar5 + 0x20)) * fVar9 +
                 (*(float *)(lVar4 + 0x24) - *(float *)(lVar5 + 0x24)) * fVar18) -
                fVar10 * (1.0 / (float)iVar6))) -
               (fVar11 * *(float *)(lVar5 + 0x38) +
               fVar36 * *(float *)(lVar5 + 0x30) + fVar14 * *(float *)(lVar5 + 0x34)));
      if (fVar8 <= fVar11) {
        fVar8 = fVar11;
      }
      if (1.1754944e-38 < fVar12) {
        *(float *)(lVar4 + 0x20) = *(float *)(lVar4 + 0x20) + fVar12 * fVar9 * fVar8;
        *(float *)(lVar4 + 0x24) = *(float *)(lVar4 + 0x24) + fVar12 * fVar18 * fVar8;
        *(float *)(lVar4 + 0x28) = *(float *)(lVar4 + 0x28) + fVar12 * fVar16 * fVar8;
        *(float *)(lVar4 + 0x30) = *(float *)(lVar4 + 0x30) + fVar27 * fVar8;
        *(float *)(lVar4 + 0x34) = *(float *)(lVar4 + 0x34) + fVar39 * fVar8;
        *(float *)(lVar4 + 0x38) = *(float *)(lVar4 + 0x38) + fVar32 * fVar8;
        fVar21 = *(float *)(param_1 + 0x4c);
      }
      if (1.1754944e-38 < fVar21) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        *(float *)(lVar4 + 0x20) = *(float *)(lVar4 + 0x20) - fVar9 * fVar8 * fVar21;
        *(float *)(lVar4 + 0x24) = *(float *)(lVar4 + 0x24) - fVar18 * fVar8 * fVar21;
        *(float *)(lVar4 + 0x28) = *(float *)(lVar4 + 0x28) - fVar16 * fVar8 * fVar21;
        *(float *)(lVar4 + 0x30) = *(float *)(lVar4 + 0x30) - local_f0 * fVar8;
        *(float *)(lVar4 + 0x34) = *(float *)(lVar4 + 0x34) - local_114 * fVar8;
        *(float *)(lVar4 + 0x38) = *(float *)(lVar4 + 0x38) - local_110 * fVar8;
      }
      iVar3 = *(int *)(param_1 + 0x58);
      if (0 < iVar3) {
        lVar4 = 0x100;
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_1 + 0x50);
          if (((0.0 < *(float *)(lVar2 + -0x18 + lVar4)) || (0.0 < *(float *)(lVar2 + lVar4))) ||
             (pfVar1 = (float *)(lVar2 + -0xc4 + lVar4),
             *pfVar1 <= *(float *)(param_1 + 0x14) && *(float *)(param_1 + 0x14) != *pfVar1)) {
            *(float *)(lVar2 + -0xc + lVar4) =
                 *(float *)(lVar2 + -0xc + lVar4) + (fVar8 + 0.0) * (1.0 / (float)iVar6);
            iVar3 = *(int *)(param_1 + 0x58);
          }
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x10c;
        } while (lVar5 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 146d6fe9a FUN_146d6fe9a body=177 status=ok
// SIG undefined FUN_146d6fe9a(void)

void FUN_146d6fe9a(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  
  fVar1 = *(float *)(param_1 + 0x20);
  if (1.1754944e-38 <
      *(float *)(param_1 + 0x18) * fVar1 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x134)) {
    fVar2 = *(float *)(param_1 + 0x38);
    if (1.1754944e-38 <
        *(float *)(param_1 + 0x30) * fVar2 * *(float *)(*(longlong *)(param_1 + 0x28) + 0x134)) {
      pfVar4 = (float *)(param_1 + 0x38);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x150);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x150);
      if (iVar3 != iVar5) {
        if (iVar3 < iVar5) {
          bVar6 = NAN(fVar1) || NAN(param_2);
          pfVar4 = (float *)(param_1 + 0x20);
          fVar2 = fVar1;
        }
        else {
          bVar6 = NAN(fVar2) || NAN(param_2);
        }
        if (((fVar2 != param_2) || (bVar6)) && (*pfVar4 = param_2, 0 < *(int *)(param_1 + 0x40))) {
          iVar5 = 0;
          do {
            FUN_146d6ff4c((int *)(param_1 + 0x40),iVar5,param_1 + 0x10,param_1 + 0x28);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x40));
        }
      }
    }
  }
  return;
}



// FUNCTION 146d6ff4c FUN_146d6ff4c body=886 status=ok
// SIG undefined FUN_146d6ff4c(void)

void FUN_146d6ff4c(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *param_3;
  fVar3 = 0.0;
  if (1.1754944e-38 < *(float *)(param_3 + 1) * *(float *)(param_3 + 2) * *(float *)(lVar1 + 0x134))
  {
    lVar2 = (longlong)param_2 * 0xbc;
    fVar3 = *(float *)(param_1 + 0x20 + lVar2);
    fVar5 = *(float *)(param_1 + 4 + lVar2);
    fVar8 = *(float *)(param_1 + 8 + lVar2);
    fVar7 = *(float *)(param_1 + 0x1c + lVar2);
    fVar4 = fVar5 * fVar3 - fVar7 * fVar8;
    fVar9 = *(float *)(param_1 + 0xc + lVar2);
    fVar10 = *(float *)(param_1 + 0x24 + lVar2);
    fVar7 = fVar7 * fVar9 - fVar5 * fVar10;
    fVar5 = fVar8 * fVar10 - fVar3 * fVar9;
    fVar3 = *(float *)(param_3 + 2) * *(float *)((longlong)param_3 + 0xc);
    fVar8 = *(float *)(lVar1 + 0x68) * fVar3 * fVar4 +
            *(float *)(lVar1 + 0x60) * fVar3 * fVar5 + *(float *)(lVar1 + 100) * fVar3 * fVar7;
    fVar9 = *(float *)(lVar1 + 0x58) * fVar3 * fVar4 +
            *(float *)(lVar1 + 0x50) * fVar3 * fVar5 + *(float *)(lVar1 + 0x54) * fVar3 * fVar7;
    fVar3 = *(float *)(lVar1 + 0x48) * fVar3 * fVar4 +
            fVar3 * *(float *)(lVar1 + 0x40) * fVar5 + *(float *)(lVar1 + 0x44) * fVar3 * fVar7;
    *(float *)(param_1 + 0x50 + lVar2) = fVar3;
    *(float *)(param_1 + 0x54 + lVar2) = fVar9;
    *(float *)(param_1 + 0x58 + lVar2) = fVar8;
    fVar3 = *(float *)(param_3 + 2) * *(float *)(param_3 + 1) * *(float *)(*param_3 + 0x134) +
            fVar8 * fVar4 + fVar3 * fVar5 + fVar9 * fVar7 + 0.0;
  }
  lVar1 = *param_4;
  if (1.1754944e-38 < *(float *)(param_4 + 1) * *(float *)(param_4 + 2) * *(float *)(lVar1 + 0x134))
  {
    lVar2 = (longlong)param_2 * 0xbc;
    fVar5 = *(float *)(param_1 + 0x20 + lVar2);
    fVar8 = *(float *)(param_1 + 0x10 + lVar2);
    fVar7 = *(float *)(param_1 + 0x14 + lVar2);
    fVar9 = *(float *)(param_1 + 0x1c + lVar2);
    fVar6 = fVar8 * fVar5 - fVar9 * fVar7;
    fVar10 = *(float *)(param_1 + 0x18 + lVar2);
    fVar4 = *(float *)(param_1 + 0x24 + lVar2);
    fVar9 = fVar9 * fVar10 - fVar8 * fVar4;
    fVar8 = *(float *)(param_4 + 2) * *(float *)((longlong)param_4 + 0xc);
    fVar5 = fVar7 * fVar4 - fVar5 * fVar10;
    fVar7 = *(float *)(lVar1 + 0x68) * fVar8 * fVar6 +
            *(float *)(lVar1 + 0x60) * fVar8 * fVar5 + *(float *)(lVar1 + 100) * fVar8 * fVar9;
    fVar10 = *(float *)(lVar1 + 0x58) * fVar8 * fVar6 +
             *(float *)(lVar1 + 0x50) * fVar8 * fVar5 + *(float *)(lVar1 + 0x54) * fVar8 * fVar9;
    fVar8 = *(float *)(lVar1 + 0x48) * fVar8 * fVar6 +
            fVar8 * *(float *)(lVar1 + 0x40) * fVar5 + *(float *)(lVar1 + 0x44) * fVar8 * fVar9;
    *(float *)(param_1 + 0x74 + lVar2) = fVar8;
    *(float *)(param_1 + 0x78 + lVar2) = fVar10;
    *(float *)(param_1 + 0x7c + lVar2) = fVar7;
    fVar3 = fVar3 + *(float *)(param_4 + 2) * *(float *)(param_4 + 1) * *(float *)(*param_4 + 0x134)
                    + fVar7 * fVar6 + fVar8 * fVar5 + fVar10 * fVar9;
  }
  *(uint *)(param_1 + 0x98 + (longlong)param_2 * 0xbc) =
       -(uint)(1e-08 < fVar3) & (uint)(1.0 / fVar3);
  return;
}



// FUNCTION 146d702c2 FUN_146d702c2 body=1239 status=ok
// SIG undefined FUN_146d702c2(void)

void FUN_146d702c2(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_238 [32];
  float *local_218;
  float *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
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
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_210 = &local_198;
  local_218 = &local_168;
  FUN_146d74d7f(param_3,param_4,&local_108,&local_138);
  if (0 < *param_1) {
    local_1f8 = local_158;
    uStack_1f0 = uStack_150;
    local_208 = CONCAT44(fStack_144,local_148);
    uStack_200 = CONCAT44(fStack_13c,fStack_140);
    lVar24 = 0;
    do {
      fStack_1dc = fStack_fc;
      fStack_1e0 = fStack_100;
      fStack_1e4 = fStack_104;
      local_1e8 = local_108;
      fStack_19c = fStack_10c;
      fStack_1a0 = fStack_110;
      fStack_1a4 = fStack_114;
      local_1a8 = local_118;
      fStack_1cc = fStack_12c;
      fStack_1d0 = fStack_130;
      fStack_1d4 = fStack_134;
      local_1d8 = local_138;
      fStack_1bc = fStack_11c;
      fStack_1c0 = fStack_120;
      fStack_1c4 = fStack_124;
      local_1c8 = local_128;
      fStack_1ac = fStack_16c;
      fStack_1b0 = fStack_170;
      fStack_1b4 = fStack_174;
      local_1b8 = local_178;
      lVar9 = *param_2;
      lVar25 = (param_1[1] + lVar24) * 0x300;
      pfVar2 = (float *)(lVar9 + 0x10 + lVar25);
      pfVar3 = (float *)(lVar9 + 0x20 + lVar25);
      pfVar4 = (float *)(lVar9 + 0x30 + lVar25);
      pfVar5 = (float *)(lVar9 + 0x40 + lVar25);
      pfVar6 = (float *)(lVar9 + 0x50 + lVar25);
      pfVar7 = (float *)(lVar9 + 0x60 + lVar25);
      pfVar8 = (float *)(lVar9 + 0x70 + lVar25);
      fVar12 = *pfVar8;
      fVar13 = pfVar8[1];
      fVar14 = pfVar8[2];
      fVar15 = pfVar8[3];
      pfVar8 = (float *)(lVar9 + 0x80 + lVar25);
      fVar16 = *pfVar8;
      fVar17 = pfVar8[1];
      fVar18 = pfVar8[2];
      fVar19 = pfVar8[3];
      pfVar8 = (float *)(lVar9 + 0x90 + lVar25);
      fVar20 = *pfVar8;
      fVar21 = pfVar8[1];
      fVar22 = pfVar8[2];
      fVar23 = pfVar8[3];
      pfVar8 = (float *)(lVar9 + 0xa0 + lVar25);
      auVar40._0_4_ =
           (((*pfVar3 * local_1d8 - *pfVar2 * local_1c8) + local_e8) -
           ((*pfVar6 * local_198 - *pfVar5 * local_188) + (float)local_208)) * fVar20 +
           (((local_1a8 * *pfVar2 - *pfVar4 * local_1d8) + local_f8) -
           ((local_1b8 * *pfVar5 - *pfVar7 * local_198) + (float)local_1f8)) * fVar16 +
           (((local_1c8 * *pfVar4 - local_1a8 * *pfVar3) + local_1e8) -
           ((local_188 * *pfVar7 - local_1b8 * *pfVar6) + local_168)) * fVar12 + *pfVar8;
      auVar40._4_4_ =
           (((pfVar3[1] * fStack_1d4 - pfVar2[1] * fStack_1c4) + fStack_e4) -
           ((pfVar6[1] * fStack_194 - pfVar5[1] * fStack_184) + local_208._4_4_)) * fVar21 +
           (((fStack_1a4 * pfVar2[1] - pfVar4[1] * fStack_1d4) + fStack_f4) -
           ((fStack_1b4 * pfVar5[1] - pfVar7[1] * fStack_194) + local_1f8._4_4_)) * fVar17 +
           (((fStack_1c4 * pfVar4[1] - fStack_1a4 * pfVar3[1]) + fStack_1e4) -
           ((fStack_184 * pfVar7[1] - fStack_1b4 * pfVar6[1]) + fStack_164)) * fVar13 + pfVar8[1];
      auVar40._8_4_ =
           (((pfVar3[2] * fStack_1d0 - pfVar2[2] * fStack_1c0) + fStack_e0) -
           ((pfVar6[2] * fStack_190 - pfVar5[2] * fStack_180) + (float)uStack_200)) * fVar22 +
           (((fStack_1a0 * pfVar2[2] - pfVar4[2] * fStack_1d0) + fStack_f0) -
           ((fStack_1b0 * pfVar5[2] - pfVar7[2] * fStack_190) + (float)uStack_1f0)) * fVar18 +
           (((fStack_1c0 * pfVar4[2] - fStack_1a0 * pfVar3[2]) + fStack_1e0) -
           ((fStack_180 * pfVar7[2] - fStack_1b0 * pfVar6[2]) + fStack_160)) * fVar14 + pfVar8[2];
      auVar40._12_4_ =
           (((pfVar3[3] * fStack_1cc - pfVar2[3] * fStack_1bc) + fStack_dc) -
           ((pfVar6[3] * fStack_18c - pfVar5[3] * fStack_17c) + uStack_200._4_4_)) * fVar23 +
           (((fStack_19c * pfVar2[3] - pfVar4[3] * fStack_1cc) + fStack_ec) -
           ((fStack_1ac * pfVar5[3] - pfVar7[3] * fStack_18c) + uStack_1f0._4_4_)) * fVar19 +
           (((fStack_1bc * pfVar4[3] - fStack_19c * pfVar3[3]) + fStack_1dc) -
           ((fStack_17c * pfVar7[3] - fStack_1ac * pfVar6[3]) + fStack_15c)) * fVar15 + pfVar8[3];
      auVar30._0_4_ = 0.0 - *param_5;
      auVar30._4_4_ = 0.0 - param_5[1];
      auVar30._8_4_ = 0.0 - param_5[2];
      auVar30._12_4_ = 0.0 - param_5[3];
      auVar41._4_4_ = -(uint)(auVar30._4_4_ < 0.0 && auVar40._4_4_ < auVar30._4_4_);
      auVar41._0_4_ = -(uint)(auVar30._0_4_ < 0.0 && auVar40._0_4_ < auVar30._0_4_);
      auVar41._8_4_ = -(uint)(auVar30._8_4_ < 0.0 && auVar40._8_4_ < auVar30._8_4_);
      auVar41._12_4_ = -(uint)(auVar30._12_4_ < 0.0 && auVar40._12_4_ < auVar30._12_4_);
      auVar41 = blendvps(auVar40,auVar30,auVar41);
      pfVar2 = (float *)(lVar9 + 0xb0 + lVar25);
      fVar26 = *pfVar2;
      fVar27 = pfVar2[1];
      fVar28 = pfVar2[2];
      fVar29 = pfVar2[3];
      puVar1 = (uint *)(lVar9 + lVar25);
      pfVar2 = (float *)(lVar9 + 0xc0 + lVar25);
      fVar36 = 0.0 - (float)param_1[0x14] * *pfVar2 *
                     (float)(-(uint)(0.0 < fVar26 || auVar41._0_4_ < 0.0) & *puVar1 &
                            (uint)auVar41._0_4_);
      fVar37 = 0.0 - (float)param_1[0x15] * pfVar2[1] *
                     (float)(-(uint)(0.0 < fVar27 || auVar41._4_4_ < 0.0) & puVar1[1] &
                            (uint)auVar41._4_4_);
      fVar38 = 0.0 - (float)param_1[0x16] * pfVar2[2] *
                     (float)(-(uint)(0.0 < fVar28 || auVar41._8_4_ < 0.0) & puVar1[2] &
                            (uint)auVar41._8_4_);
      fVar39 = 0.0 - (float)param_1[0x17] * pfVar2[3] *
                     (float)(-(uint)(0.0 < fVar29 || auVar41._12_4_ < 0.0) & puVar1[3] &
                            (uint)auVar41._12_4_);
      auVar31._0_4_ = 0.0 - fVar26;
      auVar31._4_4_ = 0.0 - fVar27;
      auVar31._8_4_ = 0.0 - fVar28;
      auVar31._12_4_ = 0.0 - fVar29;
      auVar10._4_4_ = -(uint)(0.0 < fVar27 + fVar37);
      auVar10._0_4_ = -(uint)(0.0 < fVar26 + fVar36);
      auVar10._8_4_ = -(uint)(0.0 < fVar28 + fVar38);
      auVar10._12_4_ = -(uint)(0.0 < fVar29 + fVar39);
      auVar11._4_4_ = fVar37;
      auVar11._0_4_ = fVar36;
      auVar11._8_4_ = fVar38;
      auVar11._12_4_ = fVar39;
      auVar41 = blendvps(auVar31,auVar11,auVar10);
      fVar36 = auVar41._0_4_;
      fVar37 = auVar41._4_4_;
      fVar38 = auVar41._8_4_;
      fVar39 = auVar41._12_4_;
      pfVar2 = (float *)(lVar9 + 0xb0 + lVar25);
      *pfVar2 = fVar26 + fVar36;
      pfVar2[1] = fVar27 + fVar37;
      pfVar2[2] = fVar28 + fVar38;
      pfVar2[3] = fVar29 + fVar39;
      fVar26 = (float)param_1[0x18] * fVar36;
      fVar27 = (float)param_1[0x19] * fVar37;
      fVar28 = (float)param_1[0x1a] * fVar38;
      fVar29 = (float)param_1[0x1b] * fVar39;
      fVar32 = (float)param_1[0x1c] * fVar36;
      fVar33 = (float)param_1[0x1d] * fVar37;
      fVar34 = (float)param_1[0x1e] * fVar38;
      fVar35 = (float)param_1[0x1f] * fVar39;
      local_108 = fVar12 * fVar26 + local_1e8;
      fStack_104 = fVar13 * fVar27 + fStack_1e4;
      fStack_100 = fVar14 * fVar28 + fStack_1e0;
      fStack_fc = fVar15 * fVar29 + fStack_1dc;
      local_f8 = fVar16 * fVar26 + local_f8;
      fStack_f4 = fVar17 * fVar27 + fStack_f4;
      fStack_f0 = fVar18 * fVar28 + fStack_f0;
      fStack_ec = fVar19 * fVar29 + fStack_ec;
      local_e8 = fVar26 * fVar20 + local_e8;
      fStack_e4 = fVar27 * fVar21 + fStack_e4;
      fStack_e0 = fVar28 * fVar22 + fStack_e0;
      fStack_dc = fVar29 * fVar23 + fStack_dc;
      pfVar2 = (float *)(lVar9 + 0xd0 + lVar25);
      local_138 = *pfVar2 * fVar36 + local_1d8;
      fStack_134 = pfVar2[1] * fVar37 + fStack_1d4;
      fStack_130 = pfVar2[2] * fVar38 + fStack_1d0;
      fStack_12c = pfVar2[3] * fVar39 + fStack_1cc;
      pfVar2 = (float *)(lVar9 + 0xe0 + lVar25);
      local_128 = *pfVar2 * fVar36 + local_1c8;
      fStack_124 = pfVar2[1] * fVar37 + fStack_1c4;
      fStack_120 = pfVar2[2] * fVar38 + fStack_1c0;
      fStack_11c = pfVar2[3] * fVar39 + fStack_1bc;
      pfVar2 = (float *)(lVar9 + 0xf0 + lVar25);
      local_118 = *pfVar2 * fVar36 + local_1a8;
      fStack_114 = pfVar2[1] * fVar37 + fStack_1a4;
      fStack_110 = pfVar2[2] * fVar38 + fStack_1a0;
      fStack_10c = pfVar2[3] * fVar39 + fStack_19c;
      local_168 = local_168 - fVar12 * fVar32;
      fStack_164 = fStack_164 - fVar13 * fVar33;
      fStack_160 = fStack_160 - fVar14 * fVar34;
      fStack_15c = fStack_15c - fVar15 * fVar35;
      local_1f8 = CONCAT44(local_1f8._4_4_ - fVar17 * fVar33,(float)local_1f8 - fVar16 * fVar32);
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_ - fVar19 * fVar35,(float)uStack_1f0 - fVar18 * fVar34);
      local_148 = (float)local_208 - fVar32 * fVar20;
      fStack_144 = local_208._4_4_ - fVar33 * fVar21;
      fStack_140 = (float)uStack_200 - fVar34 * fVar22;
      fStack_13c = uStack_200._4_4_ - fVar35 * fVar23;
      local_208 = CONCAT44(fStack_144,local_148);
      uStack_200 = CONCAT44(fStack_13c,fStack_140);
      pfVar2 = (float *)(lVar9 + 0x100 + lVar25);
      local_198 = local_198 - *pfVar2 * fVar36;
      fStack_194 = fStack_194 - pfVar2[1] * fVar37;
      fStack_190 = fStack_190 - pfVar2[2] * fVar38;
      fStack_18c = fStack_18c - pfVar2[3] * fVar39;
      pfVar2 = (float *)(lVar9 + 0x110 + lVar25);
      local_188 = local_188 - *pfVar2 * fVar36;
      fStack_184 = fStack_184 - pfVar2[1] * fVar37;
      fStack_180 = fStack_180 - pfVar2[2] * fVar38;
      fStack_17c = fStack_17c - pfVar2[3] * fVar39;
      pfVar2 = (float *)(lVar9 + 0x120 + lVar25);
      local_178 = local_1b8 - fVar36 * *pfVar2;
      fStack_174 = fStack_1b4 - fVar37 * pfVar2[1];
      fStack_170 = fStack_1b0 - fVar38 * pfVar2[2];
      fStack_16c = fStack_1ac - fVar39 * pfVar2[3];
      lVar24 = lVar24 + 1;
    } while ((int)lVar24 < *param_1);
    local_158 = local_1f8;
    uStack_150 = uStack_1f0;
  }
  local_218 = (float *)param_3;
  local_210 = (float *)param_4;
  FUN_146d74e3b(&local_108,&local_138,&local_168,&local_198);
  if ((local_d0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7079a FUN_146d7079a body=2701 status=ok
// SIG undefined FUN_146d7079a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d7079a(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,float *param_6)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar31;
  uint uVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  float *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined1 local_288 [8];
  undefined8 uStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
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
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
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
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_2c0 = &local_198;
  local_2c8 = &local_168;
  FUN_146d74d7f(param_3,param_4,&local_108,&local_138);
  if (0 < *param_1) {
    local_2b8 = local_168;
    uStack_2b0 = uStack_160;
    local_2a8 = local_148;
    uStack_2a0 = uStack_140;
    lVar26 = 0;
    _local_278 = ZEXT816(0);
    auVar62 = ZEXT816(0);
    do {
      fStack_21c = fStack_10c;
      fStack_220 = fStack_110;
      fStack_224 = fStack_114;
      local_228 = local_118;
      fStack_25c = fStack_ec;
      fStack_260 = fStack_f0;
      fStack_264 = fStack_f4;
      local_268 = local_f8;
      fStack_24c = fStack_fc;
      fStack_250 = fStack_100;
      fStack_254 = fStack_104;
      local_258 = local_108;
      fStack_23c = fStack_12c;
      fStack_240 = fStack_130;
      fStack_244 = fStack_134;
      local_248 = local_138;
      fStack_22c = fStack_11c;
      fStack_230 = fStack_120;
      fStack_234 = fStack_124;
      local_238 = local_128;
      fStack_28c = fStack_16c;
      fStack_290 = fStack_170;
      fStack_294 = fStack_174;
      local_298 = local_178;
      _local_288 = auVar62;
      lVar14 = *param_2;
      lVar27 = (param_1[1] + lVar26) * 0x300;
      pfVar2 = (float *)(lVar14 + 0x10 + lVar27);
      pfVar3 = (float *)(lVar14 + 0x20 + lVar27);
      pfVar4 = (float *)(lVar14 + 0x30 + lVar27);
      pfVar5 = (float *)(lVar14 + 0x40 + lVar27);
      pfVar6 = (float *)(lVar14 + 0x50 + lVar27);
      pfVar7 = (float *)(lVar14 + 0x60 + lVar27);
      pfVar8 = (float *)(lVar14 + 0x70 + lVar27);
      fVar17 = *pfVar8;
      fVar18 = pfVar8[1];
      fVar19 = pfVar8[2];
      fVar20 = pfVar8[3];
      pfVar8 = (float *)(lVar14 + 0x80 + lVar27);
      fVar21 = *pfVar8;
      fVar22 = pfVar8[1];
      fVar23 = pfVar8[2];
      fVar24 = pfVar8[3];
      pfVar8 = (float *)(lVar14 + 0x90 + lVar27);
      fVar46 = *pfVar8;
      fVar49 = pfVar8[1];
      fVar50 = pfVar8[2];
      fVar51 = pfVar8[3];
      pfVar8 = (float *)(lVar14 + 0xa0 + lVar27);
      auVar61._0_4_ =
           (((*pfVar3 * local_248 - *pfVar2 * local_238) + local_e8) -
           ((*pfVar6 * local_198 - *pfVar5 * local_188) + (float)local_2a8)) * fVar46 +
           (((local_228 * *pfVar2 - *pfVar4 * local_248) + local_268) -
           ((local_298 * *pfVar5 - *pfVar7 * local_198) + (float)local_158)) * fVar21 +
           (((local_238 * *pfVar4 - local_228 * *pfVar3) + local_258) -
           ((local_188 * *pfVar7 - local_298 * *pfVar6) + (float)local_2b8)) * fVar17 + *pfVar8;
      auVar61._4_4_ =
           (((pfVar3[1] * fStack_244 - pfVar2[1] * fStack_234) + fStack_e4) -
           ((pfVar6[1] * fStack_194 - pfVar5[1] * fStack_184) + local_2a8._4_4_)) * fVar49 +
           (((fStack_224 * pfVar2[1] - pfVar4[1] * fStack_244) + fStack_264) -
           ((fStack_294 * pfVar5[1] - pfVar7[1] * fStack_194) + local_158._4_4_)) * fVar22 +
           (((fStack_234 * pfVar4[1] - fStack_224 * pfVar3[1]) + fStack_254) -
           ((fStack_184 * pfVar7[1] - fStack_294 * pfVar6[1]) + local_2b8._4_4_)) * fVar18 +
           pfVar8[1];
      auVar61._8_4_ =
           (((pfVar3[2] * fStack_240 - pfVar2[2] * fStack_230) + fStack_e0) -
           ((pfVar6[2] * fStack_190 - pfVar5[2] * fStack_180) + (float)uStack_2a0)) * fVar50 +
           (((fStack_220 * pfVar2[2] - pfVar4[2] * fStack_240) + fStack_260) -
           ((fStack_290 * pfVar5[2] - pfVar7[2] * fStack_190) + (float)uStack_150)) * fVar23 +
           (((fStack_230 * pfVar4[2] - fStack_220 * pfVar3[2]) + fStack_250) -
           ((fStack_180 * pfVar7[2] - fStack_290 * pfVar6[2]) + (float)uStack_2b0)) * fVar19 +
           pfVar8[2];
      auVar61._12_4_ =
           (((pfVar3[3] * fStack_23c - pfVar2[3] * fStack_22c) + fStack_dc) -
           ((pfVar6[3] * fStack_18c - pfVar5[3] * fStack_17c) + uStack_2a0._4_4_)) * fVar51 +
           (((fStack_21c * pfVar2[3] - pfVar4[3] * fStack_23c) + fStack_25c) -
           ((fStack_28c * pfVar5[3] - pfVar7[3] * fStack_18c) + uStack_150._4_4_)) * fVar24 +
           (((fStack_22c * pfVar4[3] - fStack_21c * pfVar3[3]) + fStack_24c) -
           ((fStack_17c * pfVar7[3] - fStack_28c * pfVar6[3]) + uStack_2b0._4_4_)) * fVar20 +
           pfVar8[3];
      auVar65._0_4_ = 0.0 - *param_5;
      auVar65._4_4_ = 0.0 - param_5[1];
      auVar65._8_4_ = 0.0 - param_5[2];
      auVar65._12_4_ = 0.0 - param_5[3];
      auVar47._0_4_ = -(uint)(auVar61._0_4_ < auVar65._0_4_ && auVar65._0_4_ < 0.0);
      auVar47._4_4_ = -(uint)(auVar61._4_4_ < auVar65._4_4_ && auVar65._4_4_ < 0.0);
      auVar47._8_4_ = -(uint)(auVar61._8_4_ < auVar65._8_4_ && auVar65._8_4_ < 0.0);
      auVar47._12_4_ = -(uint)(auVar61._12_4_ < auVar65._12_4_ && auVar65._12_4_ < 0.0);
      auVar62 = blendvps(auVar61,auVar65,auVar47);
      pfVar2 = (float *)(lVar14 + 0xb0 + lVar27);
      fVar38 = *pfVar2;
      fVar40 = pfVar2[1];
      fVar41 = pfVar2[2];
      fVar42 = pfVar2[3];
      puVar1 = (uint *)(lVar14 + lVar27);
      pfVar2 = (float *)(lVar14 + 0xc0 + lVar27);
      auVar75._0_4_ =
           0.0 - (float)param_1[0x14] * *pfVar2 *
                 (float)(-(uint)(1e-08 < fVar38 || auVar62._0_4_ < 0.0) & *puVar1 &
                        (uint)auVar62._0_4_);
      auVar75._4_4_ =
           0.0 - (float)param_1[0x15] * pfVar2[1] *
                 (float)(-(uint)(1e-08 < fVar40 || auVar62._4_4_ < 0.0) & puVar1[1] &
                        (uint)auVar62._4_4_);
      auVar75._8_4_ =
           0.0 - (float)param_1[0x16] * pfVar2[2] *
                 (float)(-(uint)(1e-08 < fVar41 || auVar62._8_4_ < 0.0) & puVar1[2] &
                        (uint)auVar62._8_4_);
      auVar75._12_4_ =
           0.0 - (float)param_1[0x17] * pfVar2[3] *
                 (float)(-(uint)(1e-08 < fVar42 || auVar62._12_4_ < 0.0) & puVar1[3] &
                        (uint)auVar62._12_4_);
      auVar59._4_4_ = -(uint)(0.0 < fVar40 + auVar75._4_4_);
      auVar59._0_4_ = -(uint)(0.0 < fVar38 + auVar75._0_4_);
      auVar59._8_4_ = -(uint)(0.0 < fVar41 + auVar75._8_4_);
      auVar59._12_4_ = -(uint)(0.0 < fVar42 + auVar75._12_4_);
      auVar63._0_4_ = 0.0 - fVar38;
      auVar63._4_4_ = 0.0 - fVar40;
      auVar63._8_4_ = 0.0 - fVar41;
      auVar63._12_4_ = 0.0 - fVar42;
      auVar62 = blendvps(auVar63,auVar75,auVar59);
      fVar52 = auVar62._0_4_;
      fVar55 = auVar62._4_4_;
      fVar56 = auVar62._8_4_;
      fVar57 = auVar62._12_4_;
      pfVar2 = (float *)(lVar14 + 0xb0 + lVar27);
      *pfVar2 = fVar38 + fVar52;
      pfVar2[1] = fVar40 + fVar55;
      pfVar2[2] = fVar41 + fVar56;
      pfVar2[3] = fVar42 + fVar57;
      fVar70 = (float)param_1[0x18] * fVar52;
      fVar71 = (float)param_1[0x19] * fVar55;
      fVar72 = (float)param_1[0x1a] * fVar56;
      fVar73 = (float)param_1[0x1b] * fVar57;
      auVar62._4_4_ = fVar40 + fVar55 + local_278._4_4_;
      auVar62._0_4_ = fVar38 + fVar52 + local_278._0_4_;
      auVar62._8_4_ = fVar41 + fVar56 + local_278._8_4_;
      auVar62._12_4_ = fVar42 + fVar57 + local_278._12_4_;
      _local_278 = blendvps(_local_278,auVar62,auVar59);
      auVar39._0_4_ = local_288._0_4_ + 1.0;
      auVar39._4_4_ = local_288._4_4_ + 1.0;
      auVar39._8_4_ = local_288._8_4_ + 1.0;
      auVar39._12_4_ = local_288._12_4_ + 1.0;
      auVar62 = blendvps(_local_288,auVar39,auVar59);
      fVar38 = (float)param_1[0x1c] * fVar52;
      fVar40 = (float)param_1[0x1d] * fVar55;
      fVar41 = (float)param_1[0x1e] * fVar56;
      fVar42 = (float)param_1[0x1f] * fVar57;
      local_108 = fVar17 * fVar70 + local_258;
      fStack_104 = fVar18 * fVar71 + fStack_254;
      fStack_100 = fVar19 * fVar72 + fStack_250;
      fStack_fc = fVar20 * fVar73 + fStack_24c;
      local_f8 = fVar21 * fVar70 + local_268;
      fStack_f4 = fVar22 * fVar71 + fStack_264;
      fStack_f0 = fVar23 * fVar72 + fStack_260;
      fStack_ec = fVar24 * fVar73 + fStack_25c;
      local_e8 = fVar70 * fVar46 + local_e8;
      fStack_e4 = fVar71 * fVar49 + fStack_e4;
      fStack_e0 = fVar72 * fVar50 + fStack_e0;
      fStack_dc = fVar73 * fVar51 + fStack_dc;
      pfVar2 = (float *)(lVar14 + 0xd0 + lVar27);
      local_138 = *pfVar2 * fVar52 + local_248;
      fStack_134 = pfVar2[1] * fVar55 + fStack_244;
      fStack_130 = pfVar2[2] * fVar56 + fStack_240;
      fStack_12c = pfVar2[3] * fVar57 + fStack_23c;
      pfVar2 = (float *)(lVar14 + 0xe0 + lVar27);
      local_128 = *pfVar2 * fVar52 + local_238;
      fStack_124 = pfVar2[1] * fVar55 + fStack_234;
      fStack_120 = pfVar2[2] * fVar56 + fStack_230;
      fStack_11c = pfVar2[3] * fVar57 + fStack_22c;
      pfVar2 = (float *)(lVar14 + 0xf0 + lVar27);
      local_118 = *pfVar2 * fVar52 + local_228;
      fStack_114 = pfVar2[1] * fVar55 + fStack_224;
      fStack_110 = pfVar2[2] * fVar56 + fStack_220;
      fStack_10c = pfVar2[3] * fVar57 + fStack_21c;
      local_2b8 = CONCAT44(local_2b8._4_4_ - fVar18 * fVar40,(float)local_2b8 - fVar17 * fVar38);
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_ - fVar20 * fVar42,(float)uStack_2b0 - fVar19 * fVar41);
      local_158._0_4_ = (float)local_158 - fVar21 * fVar38;
      local_158._4_4_ = local_158._4_4_ - fVar22 * fVar40;
      uStack_150._0_4_ = (float)uStack_150 - fVar23 * fVar41;
      uStack_150._4_4_ = uStack_150._4_4_ - fVar24 * fVar42;
      local_2a8 = CONCAT44(local_2a8._4_4_ - fVar40 * fVar49,(float)local_2a8 - fVar38 * fVar46);
      uStack_2a0 = CONCAT44(uStack_2a0._4_4_ - fVar42 * fVar51,(float)uStack_2a0 - fVar41 * fVar50);
      pfVar2 = (float *)(lVar14 + 0x100 + lVar27);
      local_198 = local_198 - *pfVar2 * fVar52;
      fStack_194 = fStack_194 - pfVar2[1] * fVar55;
      fStack_190 = fStack_190 - pfVar2[2] * fVar56;
      fStack_18c = fStack_18c - pfVar2[3] * fVar57;
      pfVar2 = (float *)(lVar14 + 0x110 + lVar27);
      local_188 = local_188 - *pfVar2 * fVar52;
      fStack_184 = fStack_184 - pfVar2[1] * fVar55;
      fStack_180 = fStack_180 - pfVar2[2] * fVar56;
      fStack_17c = fStack_17c - pfVar2[3] * fVar57;
      pfVar2 = (float *)(lVar14 + 0x120 + lVar27);
      local_178 = local_298 - fVar52 * *pfVar2;
      fStack_174 = fStack_294 - fVar55 * pfVar2[1];
      fStack_170 = fStack_290 - fVar56 * pfVar2[2];
      fStack_16c = fStack_28c - fVar57 * pfVar2[3];
      lVar26 = lVar26 + 1;
    } while ((int)lVar26 < *param_1);
    local_168 = local_2b8;
    uStack_160 = uStack_2b0;
    local_148 = local_2a8;
    uStack_140 = uStack_2a0;
    if (0 < *param_1) {
      local_288._4_4_ = local_158._4_4_;
      local_288._0_4_ = (float)local_158;
      uStack_280._0_4_ = (float)uStack_150;
      uStack_280._4_4_ = uStack_150._4_4_;
      auVar47 = divps(_local_278,auVar62);
      local_278._0_4_ = auVar47._0_4_ & -(uint)(0.0 < auVar62._0_4_);
      local_278._4_4_ = auVar47._4_4_ & -(uint)(0.0 < auVar62._4_4_);
      fStack_270 = (float)(auVar47._8_4_ & -(uint)(0.0 < auVar62._8_4_));
      fStack_26c = (float)(auVar47._12_4_ & -(uint)(0.0 < auVar62._12_4_));
      lVar26 = 0;
      local_218 = -(uint)(0.0001 <= (float)local_278._0_4_);
      uStack_214 = -(uint)(0.0001 <= (float)local_278._4_4_);
      uStack_210 = -(uint)(0.0001 <= fStack_270);
      uStack_20c = -(uint)(0.0001 <= fStack_26c);
      do {
        fStack_23c = fStack_10c;
        fStack_240 = fStack_110;
        fStack_244 = fStack_114;
        local_248 = local_118;
        fStack_22c = fStack_18c;
        fStack_230 = fStack_190;
        fStack_234 = fStack_194;
        local_238 = local_198;
        fStack_19c = fStack_ec;
        fStack_1a0 = fStack_f0;
        fStack_1a4 = fStack_f4;
        local_1a8 = local_f8;
        fStack_1bc = fStack_fc;
        fStack_1c0 = fStack_100;
        fStack_1c4 = fStack_104;
        local_1c8 = local_108;
        fStack_1ac = fStack_dc;
        fStack_1b0 = fStack_e0;
        fStack_1b4 = fStack_e4;
        local_1b8 = local_e8;
        fStack_21c = fStack_17c;
        fStack_220 = fStack_180;
        fStack_224 = fStack_184;
        local_228 = local_188;
        fStack_25c = fStack_12c;
        fStack_260 = fStack_130;
        fStack_264 = fStack_134;
        local_268 = local_138;
        fStack_24c = fStack_11c;
        fStack_250 = fStack_120;
        fStack_254 = fStack_124;
        local_258 = local_128;
        fStack_28c = fStack_16c;
        fStack_290 = fStack_170;
        fStack_294 = fStack_174;
        local_298 = local_178;
        lVar14 = *param_2;
        lVar27 = (param_1[1] + lVar26) * 0x300;
        pfVar2 = (float *)(lVar14 + 0x10 + lVar27);
        pfVar3 = (float *)(lVar14 + 0x20 + lVar27);
        pfVar4 = (float *)(lVar14 + 0x30 + lVar27);
        pfVar5 = (float *)(lVar14 + 0x40 + lVar27);
        pfVar6 = (float *)(lVar14 + 0x50 + lVar27);
        pfVar7 = (float *)(lVar14 + 0x60 + lVar27);
        fVar52 = ((local_258 * *pfVar4 - local_248 * *pfVar3) + local_1c8) -
                 ((local_228 * *pfVar7 - local_298 * *pfVar6) + (float)local_2b8);
        fVar55 = ((fStack_254 * pfVar4[1] - fStack_244 * pfVar3[1]) + fStack_1c4) -
                 ((fStack_224 * pfVar7[1] - fStack_294 * pfVar6[1]) + local_2b8._4_4_);
        fVar56 = ((fStack_250 * pfVar4[2] - fStack_240 * pfVar3[2]) + fStack_1c0) -
                 ((fStack_220 * pfVar7[2] - fStack_290 * pfVar6[2]) + (float)uStack_2b0);
        fVar57 = ((fStack_24c * pfVar4[3] - fStack_23c * pfVar3[3]) + fStack_1bc) -
                 ((fStack_21c * pfVar7[3] - fStack_28c * pfVar6[3]) + uStack_2b0._4_4_);
        fVar70 = ((local_248 * *pfVar2 - *pfVar4 * local_268) + local_1a8) -
                 ((local_298 * *pfVar5 - *pfVar7 * local_238) + (float)local_288._0_4_);
        fVar71 = ((fStack_244 * pfVar2[1] - pfVar4[1] * fStack_264) + fStack_1a4) -
                 ((fStack_294 * pfVar5[1] - pfVar7[1] * fStack_234) + (float)local_288._4_4_);
        fVar72 = ((fStack_240 * pfVar2[2] - pfVar4[2] * fStack_260) + fStack_1a0) -
                 ((fStack_290 * pfVar5[2] - pfVar7[2] * fStack_230) + (float)uStack_280);
        fVar73 = ((fStack_23c * pfVar2[3] - pfVar4[3] * fStack_25c) + fStack_19c) -
                 ((fStack_28c * pfVar5[3] - pfVar7[3] * fStack_22c) + uStack_280._4_4_);
        fVar38 = ((*pfVar3 * local_268 - *pfVar2 * local_258) + local_1b8) -
                 ((*pfVar6 * local_238 - *pfVar5 * local_228) + (float)local_2a8);
        fVar40 = ((pfVar3[1] * fStack_264 - pfVar2[1] * fStack_254) + fStack_1b4) -
                 ((pfVar6[1] * fStack_234 - pfVar5[1] * fStack_224) + local_2a8._4_4_);
        fVar41 = ((pfVar3[2] * fStack_260 - pfVar2[2] * fStack_250) + fStack_1b0) -
                 ((pfVar6[2] * fStack_230 - pfVar5[2] * fStack_220) + (float)uStack_2a0);
        fVar42 = ((pfVar3[3] * fStack_25c - pfVar2[3] * fStack_24c) + fStack_1ac) -
                 ((pfVar6[3] * fStack_22c - pfVar5[3] * fStack_21c) + uStack_2a0._4_4_);
        pfVar2 = (float *)(lVar14 + 0x130 + lVar27);
        local_1f8 = *pfVar2;
        fStack_1f4 = pfVar2[1];
        fStack_1f0 = pfVar2[2];
        fStack_1ec = pfVar2[3];
        pfVar2 = (float *)(lVar14 + 0x140 + lVar27);
        local_1e8 = *pfVar2;
        fStack_1e4 = pfVar2[1];
        fStack_1e0 = pfVar2[2];
        fStack_1dc = pfVar2[3];
        pfVar2 = (float *)(lVar14 + 0x150 + lVar27);
        local_1d8 = *pfVar2;
        fStack_1d4 = pfVar2[1];
        fStack_1d0 = pfVar2[2];
        fStack_1cc = pfVar2[3];
        pfVar2 = (float *)(lVar14 + 0x160 + lVar27);
        fVar17 = *pfVar2;
        fVar18 = pfVar2[1];
        fVar19 = pfVar2[2];
        fVar20 = pfVar2[3];
        pfVar2 = (float *)(lVar14 + 0x170 + lVar27);
        fVar21 = *pfVar2;
        fVar22 = pfVar2[1];
        fVar23 = pfVar2[2];
        fVar24 = pfVar2[3];
        pfVar2 = (float *)(lVar14 + 0x180 + lVar27);
        local_208 = *pfVar2;
        fStack_204 = pfVar2[1];
        fStack_200 = pfVar2[2];
        fStack_1fc = pfVar2[3];
        pfVar2 = (float *)(lVar14 + 400 + lVar27);
        pfVar3 = (float *)(lVar14 + 0x1a0 + lVar27);
        pfVar4 = (float *)(lVar14 + 0x1e0 + lVar27);
        pfVar5 = (float *)(lVar14 + 0x1f0 + lVar27);
        pfVar6 = (float *)(lVar14 + 0x1b0 + lVar27);
        fVar46 = *pfVar6;
        fVar49 = pfVar6[1];
        fVar50 = pfVar6[2];
        fVar51 = pfVar6[3];
        auVar58._0_4_ =
             0.0 - (fVar38 * local_1d8 + fVar70 * local_1e8 + fVar52 * local_1f8 + *pfVar2) *
                   *pfVar4 * *param_6 * (float)param_1[0x14];
        auVar58._4_4_ =
             0.0 - (fVar40 * fStack_1d4 + fVar71 * fStack_1e4 + fVar55 * fStack_1f4 + pfVar2[1]) *
                   pfVar4[1] * param_6[1] * (float)param_1[0x15];
        auVar58._8_4_ =
             0.0 - (fVar41 * fStack_1d0 + fVar72 * fStack_1e0 + fVar56 * fStack_1f0 + pfVar2[2]) *
                   pfVar4[2] * param_6[2] * (float)param_1[0x16];
        auVar58._12_4_ =
             0.0 - (fVar42 * fStack_1cc + fVar73 * fStack_1dc + fVar57 * fStack_1ec + pfVar2[3]) *
                   pfVar4[3] * param_6[3] * (float)param_1[0x17];
        auVar48._0_4_ =
             0.0 - (fVar38 * local_208 + fVar70 * fVar21 + fVar52 * fVar17 + *pfVar3) * *pfVar5 *
                   *param_6 * (float)param_1[0x14];
        auVar48._4_4_ =
             0.0 - (fVar40 * fStack_204 + fVar71 * fVar22 + fVar55 * fVar18 + pfVar3[1]) * pfVar5[1]
                   * param_6[1] * (float)param_1[0x15];
        auVar48._8_4_ =
             0.0 - (fVar41 * fStack_200 + fVar72 * fVar23 + fVar56 * fVar19 + pfVar3[2]) * pfVar5[2]
                   * param_6[2] * (float)param_1[0x16];
        auVar48._12_4_ =
             0.0 - (fVar42 * fStack_1fc + fVar73 * fVar24 + fVar57 * fVar20 + pfVar3[3]) * pfVar5[3]
                   * param_6[3] * (float)param_1[0x17];
        auVar64._0_4_ = fVar46 + auVar58._0_4_;
        auVar64._4_4_ = fVar49 + auVar58._4_4_;
        auVar64._8_4_ = fVar50 + auVar58._8_4_;
        auVar64._12_4_ = fVar51 + auVar58._12_4_;
        pfVar2 = (float *)(lVar14 + 0x1c0 + lVar27);
        fVar38 = *pfVar2;
        fVar40 = pfVar2[1];
        fVar41 = pfVar2[2];
        fVar42 = pfVar2[3];
        auVar74._0_4_ = fVar38 + auVar48._0_4_;
        auVar74._4_4_ = fVar40 + auVar48._4_4_;
        auVar74._8_4_ = fVar41 + auVar48._8_4_;
        auVar74._12_4_ = fVar42 + auVar48._12_4_;
        auVar29._0_4_ = auVar74._0_4_ * auVar74._0_4_;
        auVar29._4_4_ = auVar74._4_4_ * auVar74._4_4_;
        auVar29._8_4_ = auVar74._8_4_ * auVar74._8_4_;
        auVar29._12_4_ = auVar74._12_4_ * auVar74._12_4_;
        auVar43._0_4_ = auVar64._0_4_ * auVar64._0_4_ + auVar29._0_4_;
        auVar43._4_4_ = auVar64._4_4_ * auVar64._4_4_ + auVar29._4_4_;
        auVar43._8_4_ = auVar64._8_4_ * auVar64._8_4_ + auVar29._8_4_;
        auVar43._12_4_ = auVar64._12_4_ * auVar64._12_4_ + auVar29._12_4_;
        auVar62 = sqrtps(auVar29,auVar43);
        auVar62 = divps(_DAT_1499314a0,auVar62);
        auVar53._0_4_ = auVar62._0_4_ * (float)param_1[0xc] * (float)local_278._0_4_;
        auVar53._4_4_ = auVar62._4_4_ * (float)param_1[0xd] * (float)local_278._4_4_;
        auVar53._8_4_ = auVar62._8_4_ * (float)param_1[0xe] * fStack_270;
        auVar53._12_4_ = auVar62._12_4_ * (float)param_1[0xf] * fStack_26c;
        fVar52 = (float)param_1[8] * (float)local_278._0_4_;
        fVar55 = (float)param_1[9] * (float)local_278._4_4_;
        fVar56 = (float)param_1[10] * fStack_270;
        fVar57 = (float)param_1[0xb] * fStack_26c;
        auVar25._4_4_ = uStack_214;
        auVar25._0_4_ = local_218;
        auVar25._8_4_ = uStack_210;
        auVar25._12_4_ = uStack_20c;
        auVar30._0_4_ = -(uint)(fVar52 * fVar52 < auVar43._0_4_ && 0.0001 <= (float)local_278._0_4_)
        ;
        auVar30._4_4_ = -(uint)(fVar55 * fVar55 < auVar43._4_4_ && 0.0001 <= (float)local_278._4_4_)
        ;
        auVar30._8_4_ = -(uint)(fVar56 * fVar56 < auVar43._8_4_ && 0.0001 <= fStack_270);
        auVar30._12_4_ = -(uint)(fVar57 * fVar57 < auVar43._12_4_ && 0.0001 <= fStack_26c);
        auVar44._0_4_ = auVar64._0_4_ * auVar53._0_4_ - fVar46;
        auVar44._4_4_ = auVar64._4_4_ * auVar53._4_4_ - fVar49;
        auVar44._8_4_ = auVar64._8_4_ * auVar53._8_4_ - fVar50;
        auVar44._12_4_ = auVar64._12_4_ * auVar53._12_4_ - fVar51;
        auVar59 = blendvps(auVar58,auVar44,auVar30);
        auVar45._0_4_ = auVar74._0_4_ * auVar53._0_4_ - fVar38;
        auVar45._4_4_ = auVar74._4_4_ * auVar53._4_4_ - fVar40;
        auVar45._8_4_ = auVar74._8_4_ * auVar53._8_4_ - fVar41;
        auVar45._12_4_ = auVar74._12_4_ * auVar53._12_4_ - fVar42;
        auVar47 = blendvps(auVar48,auVar45,auVar30);
        auVar15._4_4_ = auVar64._4_4_ * auVar53._4_4_;
        auVar15._0_4_ = auVar64._0_4_ * auVar53._0_4_;
        auVar15._8_4_ = auVar64._8_4_ * auVar53._8_4_;
        auVar15._12_4_ = auVar64._12_4_ * auVar53._12_4_;
        auVar65 = blendvps(auVar64,auVar15,auVar30);
        auVar16._4_4_ = auVar74._4_4_ * auVar53._4_4_;
        auVar16._0_4_ = auVar74._0_4_ * auVar53._0_4_;
        auVar16._8_4_ = auVar74._8_4_ * auVar53._8_4_;
        auVar16._12_4_ = auVar74._12_4_ * auVar53._12_4_;
        auVar75 = blendvps(auVar74,auVar16,auVar30);
        auVar62 = blendvps(_DAT_1499314a0,auVar53,auVar30);
        auVar54._0_4_ = 0.0 - fVar46;
        auVar54._4_4_ = 0.0 - fVar49;
        auVar54._8_4_ = 0.0 - fVar50;
        auVar54._12_4_ = 0.0 - fVar51;
        auVar59 = blendvps(auVar54,auVar59,auVar25);
        auVar60._0_4_ = 0.0 - fVar38;
        auVar60._4_4_ = 0.0 - fVar40;
        auVar60._8_4_ = 0.0 - fVar41;
        auVar60._12_4_ = 0.0 - fVar42;
        auVar47 = blendvps(auVar60,auVar47,auVar25);
        pfVar2 = (float *)(lVar14 + 0xb0 + lVar27);
        uVar28 = -(uint)(((fVar38 != 0.0 || fVar46 != 0.0) || 0.0 < *pfVar2) &&
                        0.0 < (float)param_1[8]);
        uVar31 = -(uint)(((fVar40 != 0.0 || fVar49 != 0.0) || 0.0 < pfVar2[1]) &&
                        0.0 < (float)param_1[9]);
        uVar32 = -(uint)(((fVar41 != 0.0 || fVar50 != 0.0) || 0.0 < pfVar2[2]) &&
                        0.0 < (float)param_1[10]);
        uVar33 = -(uint)(((fVar42 != 0.0 || fVar51 != 0.0) || 0.0 < pfVar2[3]) &&
                        0.0 < (float)param_1[0xb]);
        uVar34 = uVar28 & local_218;
        uVar35 = uVar31 & uStack_214;
        uVar36 = uVar32 & uStack_210;
        uVar37 = uVar33 & uStack_20c;
        fVar70 = (float)(auVar47._0_4_ & uVar28);
        fVar71 = (float)(auVar47._4_4_ & uVar31);
        fVar72 = (float)(auVar47._8_4_ & uVar32);
        fVar73 = (float)(auVar47._12_4_ & uVar33);
        fVar52 = (float)(auVar59._0_4_ & uVar28);
        fVar55 = (float)(auVar59._4_4_ & uVar31);
        fVar56 = (float)(auVar59._8_4_ & uVar32);
        fVar57 = (float)(auVar59._12_4_ & uVar33);
        puVar1 = (uint *)(lVar14 + 0x1b0 + lVar27);
        *puVar1 = auVar65._0_4_ & uVar34 | ~uVar28 & (uint)fVar46;
        puVar1[1] = auVar65._4_4_ & uVar35 | ~uVar31 & (uint)fVar49;
        puVar1[2] = auVar65._8_4_ & uVar36 | ~uVar32 & (uint)fVar50;
        puVar1[3] = auVar65._12_4_ & uVar37 | ~uVar33 & (uint)fVar51;
        puVar1 = (uint *)(lVar14 + 0x1c0 + lVar27);
        *puVar1 = auVar75._0_4_ & uVar34 | ~uVar28 & (uint)fVar38;
        puVar1[1] = auVar75._4_4_ & uVar35 | ~uVar31 & (uint)fVar40;
        puVar1[2] = auVar75._8_4_ & uVar36 | ~uVar32 & (uint)fVar41;
        puVar1[3] = auVar75._12_4_ & uVar37 | ~uVar33 & (uint)fVar42;
        puVar1 = (uint *)(lVar14 + 0x1d0 + lVar27);
        *puVar1 = uVar34 & auVar62._0_4_ | ~uVar28 & 0x3f800000;
        puVar1[1] = uVar35 & auVar62._4_4_ | ~uVar31 & 0x3f800000;
        puVar1[2] = uVar36 & auVar62._8_4_ | ~uVar32 & 0x3f800000;
        puVar1[3] = uVar37 & auVar62._12_4_ | ~uVar33 & 0x3f800000;
        fVar66 = local_1f8 * fVar52 + fVar17 * fVar70;
        fVar67 = fStack_1f4 * fVar55 + fVar18 * fVar71;
        fVar68 = fStack_1f0 * fVar56 + fVar19 * fVar72;
        fVar69 = fStack_1ec * fVar57 + fVar20 * fVar73;
        fVar38 = local_1e8 * fVar52 + fVar21 * fVar70;
        fVar40 = fStack_1e4 * fVar55 + fVar22 * fVar71;
        fVar41 = fStack_1e0 * fVar56 + fVar23 * fVar72;
        fVar42 = fStack_1dc * fVar57 + fVar24 * fVar73;
        fVar46 = local_1d8 * fVar52 + local_208 * fVar70;
        fVar49 = fStack_1d4 * fVar55 + fStack_204 * fVar71;
        fVar50 = fStack_1d0 * fVar56 + fStack_200 * fVar72;
        fVar51 = fStack_1cc * fVar57 + fStack_1fc * fVar73;
        fVar17 = (float)param_1[0x18];
        fVar18 = (float)param_1[0x19];
        fVar19 = (float)param_1[0x1a];
        fVar20 = (float)param_1[0x1b];
        fVar21 = (float)param_1[0x1c];
        fVar22 = (float)param_1[0x1d];
        fVar23 = (float)param_1[0x1e];
        fVar24 = (float)param_1[0x1f];
        pfVar2 = (float *)(lVar14 + 0x230 + lVar27);
        pfVar3 = (float *)(lVar14 + 0x200 + lVar27);
        pfVar4 = (float *)(lVar14 + 0x240 + lVar27);
        pfVar5 = (float *)(lVar14 + 0x210 + lVar27);
        pfVar6 = (float *)(lVar14 + 0x250 + lVar27);
        pfVar7 = (float *)(lVar14 + 0x220 + lVar27);
        pfVar8 = (float *)(lVar14 + 0x290 + lVar27);
        pfVar9 = (float *)(lVar14 + 0x260 + lVar27);
        pfVar10 = (float *)(lVar14 + 0x2a0 + lVar27);
        pfVar11 = (float *)(lVar14 + 0x270 + lVar27);
        pfVar12 = (float *)(lVar14 + 0x2b0 + lVar27);
        pfVar13 = (float *)(lVar14 + 0x280 + lVar27);
        local_108 = fVar17 * fVar66 + local_1c8;
        fStack_104 = fVar18 * fVar67 + fStack_1c4;
        fStack_100 = fVar19 * fVar68 + fStack_1c0;
        fStack_fc = fVar20 * fVar69 + fStack_1bc;
        local_e8 = fVar17 * fVar46 + local_1b8;
        fStack_e4 = fVar18 * fVar49 + fStack_1b4;
        fStack_e0 = fVar19 * fVar50 + fStack_1b0;
        fStack_dc = fVar20 * fVar51 + fStack_1ac;
        local_f8 = fVar17 * fVar38 + local_1a8;
        fStack_f4 = fVar18 * fVar40 + fStack_1a4;
        fStack_f0 = fVar19 * fVar41 + fStack_1a0;
        fStack_ec = fVar20 * fVar42 + fStack_19c;
        local_138 = *pfVar3 * fVar52 + *pfVar2 * fVar70 + local_268;
        fStack_134 = pfVar3[1] * fVar55 + pfVar2[1] * fVar71 + fStack_264;
        fStack_130 = pfVar3[2] * fVar56 + pfVar2[2] * fVar72 + fStack_260;
        fStack_12c = pfVar3[3] * fVar57 + pfVar2[3] * fVar73 + fStack_25c;
        local_128 = *pfVar5 * fVar52 + *pfVar4 * fVar70 + local_258;
        fStack_124 = pfVar5[1] * fVar55 + pfVar4[1] * fVar71 + fStack_254;
        fStack_120 = pfVar5[2] * fVar56 + pfVar4[2] * fVar72 + fStack_250;
        fStack_11c = pfVar5[3] * fVar57 + pfVar4[3] * fVar73 + fStack_24c;
        local_2b8 = CONCAT44(local_2b8._4_4_ - fVar67 * fVar22,(float)local_2b8 - fVar66 * fVar21);
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_ - fVar69 * fVar24,(float)uStack_2b0 - fVar68 * fVar23
                             );
        local_118 = *pfVar7 * fVar52 + *pfVar6 * fVar70 + local_248;
        fStack_114 = pfVar7[1] * fVar55 + pfVar6[1] * fVar71 + fStack_244;
        fStack_110 = pfVar7[2] * fVar56 + pfVar6[2] * fVar72 + fStack_240;
        fStack_10c = pfVar7[3] * fVar57 + pfVar6[3] * fVar73 + fStack_23c;
        local_288._4_4_ = (float)local_288._4_4_ - fVar40 * fVar22;
        local_288._0_4_ = (float)local_288._0_4_ - fVar38 * fVar21;
        uStack_280._0_4_ = (float)uStack_280 - fVar41 * fVar23;
        uStack_280._4_4_ = uStack_280._4_4_ - fVar42 * fVar24;
        local_2a8 = CONCAT44(local_2a8._4_4_ - fVar49 * fVar22,(float)local_2a8 - fVar46 * fVar21);
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_ - fVar51 * fVar24,(float)uStack_2a0 - fVar50 * fVar23
                             );
        local_198 = local_238 - (*pfVar9 * fVar52 + *pfVar8 * fVar70);
        fStack_194 = fStack_234 - (pfVar9[1] * fVar55 + pfVar8[1] * fVar71);
        fStack_190 = fStack_230 - (pfVar9[2] * fVar56 + pfVar8[2] * fVar72);
        fStack_18c = fStack_22c - (pfVar9[3] * fVar57 + pfVar8[3] * fVar73);
        local_188 = local_228 - (*pfVar11 * fVar52 + *pfVar10 * fVar70);
        fStack_184 = fStack_224 - (pfVar11[1] * fVar55 + pfVar10[1] * fVar71);
        fStack_180 = fStack_220 - (pfVar11[2] * fVar56 + pfVar10[2] * fVar72);
        fStack_17c = fStack_21c - (pfVar11[3] * fVar57 + pfVar10[3] * fVar73);
        local_178 = local_298 - (fVar52 * *pfVar13 + fVar70 * *pfVar12);
        fStack_174 = fStack_294 - (fVar55 * pfVar13[1] + fVar71 * pfVar12[1]);
        fStack_170 = fStack_290 - (fVar56 * pfVar13[2] + fVar72 * pfVar12[2]);
        fStack_16c = fStack_28c - (fVar57 * pfVar13[3] + fVar73 * pfVar12[3]);
        lVar26 = lVar26 + 1;
      } while ((int)lVar26 < *param_1);
      local_168 = local_2b8;
      uStack_160 = uStack_2b0;
      local_158 = local_288;
      uStack_150 = uStack_280;
      local_148 = local_2a8;
      uStack_140 = uStack_2a0;
    }
  }
  local_2c8 = (undefined8 *)param_3;
  local_2c0 = (float *)param_4;
  FUN_146d74e3b(&local_108,&local_138,&local_168,&local_198);
  if ((local_d0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d71228 FUN_146d71228 body=1290 status=ok
// SIG undefined FUN_146d71228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d71228(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 (*param_5) [16])

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  float *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
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
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_250 = &local_198;
  local_258 = &local_168;
  FUN_146d74ef7(param_3,param_4,&local_108,&local_138);
  if (0 < *param_1) {
    local_248 = local_168;
    uStack_240 = uStack_160;
    local_238 = local_158;
    uStack_230 = uStack_150;
    local_228 = CONCAT44(fStack_144,local_148);
    uStack_220 = CONCAT44(fStack_13c,fStack_140);
    lVar20 = 0;
    do {
      fStack_1bc = fStack_11c;
      fStack_1c0 = fStack_120;
      fStack_1c4 = fStack_124;
      local_1c8 = local_128;
      fStack_20c = fStack_16c;
      fStack_210 = fStack_170;
      fStack_214 = fStack_174;
      local_218 = local_178;
      fStack_19c = fStack_17c;
      fStack_1a0 = fStack_180;
      fStack_1a4 = fStack_184;
      local_1a8 = local_188;
      fStack_1ac = fStack_10c;
      fStack_1b0 = fStack_110;
      fStack_1b4 = fStack_114;
      local_1b8 = local_118;
      fStack_1ec = fStack_ec;
      fStack_1f0 = fStack_f0;
      fStack_1f4 = fStack_f4;
      local_1f8 = local_f8;
      fStack_1cc = fStack_12c;
      fStack_1d0 = fStack_130;
      fStack_1d4 = fStack_134;
      local_1d8 = local_138;
      fStack_1dc = fStack_18c;
      fStack_1e0 = fStack_190;
      fStack_1e4 = fStack_194;
      local_1e8 = local_198;
      lVar11 = *param_2;
      lVar21 = (param_1[1] + lVar20) * 0x300;
      pfVar8 = (float *)(lVar11 + 0xa0 + lVar21);
      pfVar9 = (float *)(lVar11 + 0xb0 + lVar21);
      local_208 = *pfVar9;
      fStack_204 = pfVar9[1];
      fStack_200 = pfVar9[2];
      fStack_1fc = pfVar9[3];
      pfVar9 = (float *)(lVar11 + 0x10 + lVar21);
      pfVar2 = (float *)(lVar11 + 0x20 + lVar21);
      pfVar3 = (float *)(lVar11 + 0x30 + lVar21);
      pfVar4 = (float *)(lVar11 + 0x40 + lVar21);
      pfVar5 = (float *)(lVar11 + 0x50 + lVar21);
      pfVar6 = (float *)(lVar11 + 0x60 + lVar21);
      puVar1 = (uint *)(lVar11 + lVar21);
      pfVar7 = (float *)(lVar11 + 0x70 + lVar21);
      fVar29 = *pfVar7;
      fVar30 = pfVar7[1];
      fVar31 = pfVar7[2];
      fVar32 = pfVar7[3];
      pfVar7 = (float *)(lVar11 + 0x80 + lVar21);
      fVar25 = *pfVar7;
      fVar26 = pfVar7[1];
      fVar27 = pfVar7[2];
      fVar28 = pfVar7[3];
      pfVar7 = (float *)(lVar11 + 0x90 + lVar21);
      fVar38 = *pfVar7;
      fVar39 = pfVar7[1];
      fVar40 = pfVar7[2];
      fVar41 = pfVar7[3];
      pfVar7 = (float *)(lVar11 + 0x2c0 + lVar21);
      pfVar10 = (float *)(lVar11 + 0xc0 + lVar21);
      auVar34._0_4_ =
           0.0 - (float)param_1[0x14] * *pfVar10 *
                 (((((*pfVar2 * local_1d8 - *pfVar9 * local_1c8) + local_e8) -
                   ((*pfVar5 * local_1e8 - *pfVar4 * local_1a8) + (float)local_228)) * fVar38 +
                  (((local_1b8 * *pfVar9 - *pfVar3 * local_1d8) + local_1f8) -
                  ((local_218 * *pfVar4 - *pfVar6 * local_1e8) + (float)local_238)) * fVar25 +
                  (((local_1c8 * *pfVar3 - local_1b8 * *pfVar2) + local_108) -
                  ((local_1a8 * *pfVar6 - local_218 * *pfVar5) + (float)local_248)) * fVar29) -
                 *pfVar7);
      auVar34._4_4_ =
           0.0 - (float)param_1[0x15] * pfVar10[1] *
                 (((((pfVar2[1] * fStack_1d4 - pfVar9[1] * fStack_1c4) + fStack_e4) -
                   ((pfVar5[1] * fStack_1e4 - pfVar4[1] * fStack_1a4) + local_228._4_4_)) * fVar39 +
                  (((fStack_1b4 * pfVar9[1] - pfVar3[1] * fStack_1d4) + fStack_1f4) -
                  ((fStack_214 * pfVar4[1] - pfVar6[1] * fStack_1e4) + local_238._4_4_)) * fVar26 +
                  (((fStack_1c4 * pfVar3[1] - fStack_1b4 * pfVar2[1]) + fStack_104) -
                  ((fStack_1a4 * pfVar6[1] - fStack_214 * pfVar5[1]) + local_248._4_4_)) * fVar30) -
                 pfVar7[1]);
      auVar34._8_4_ =
           0.0 - (float)param_1[0x16] * pfVar10[2] *
                 (((((pfVar2[2] * fStack_1d0 - pfVar9[2] * fStack_1c0) + fStack_e0) -
                   ((pfVar5[2] * fStack_1e0 - pfVar4[2] * fStack_1a0) + (float)uStack_220)) * fVar40
                  + (((fStack_1b0 * pfVar9[2] - pfVar3[2] * fStack_1d0) + fStack_1f0) -
                    ((fStack_210 * pfVar4[2] - pfVar6[2] * fStack_1e0) + (float)uStack_230)) *
                    fVar27 + (((fStack_1c0 * pfVar3[2] - fStack_1b0 * pfVar2[2]) + fStack_100) -
                             ((fStack_1a0 * pfVar6[2] - fStack_210 * pfVar5[2]) + (float)uStack_240)
                             ) * fVar31) - pfVar7[2]);
      auVar34._12_4_ =
           0.0 - (float)param_1[0x17] * pfVar10[3] *
                 (((((pfVar2[3] * fStack_1cc - pfVar9[3] * fStack_1bc) + fStack_dc) -
                   ((pfVar5[3] * fStack_1dc - pfVar4[3] * fStack_19c) + uStack_220._4_4_)) * fVar41
                  + (((fStack_1ac * pfVar9[3] - pfVar3[3] * fStack_1cc) + fStack_1ec) -
                    ((fStack_20c * pfVar4[3] - pfVar6[3] * fStack_1dc) + uStack_230._4_4_)) * fVar28
                    + (((fStack_1bc * pfVar3[3] - fStack_1ac * pfVar2[3]) + fStack_fc) -
                      ((fStack_19c * pfVar6[3] - fStack_20c * pfVar5[3]) + uStack_240._4_4_)) *
                      fVar32) - pfVar7[3]);
      auVar23._0_4_ = 0.0 - local_208;
      auVar23._4_4_ = 0.0 - fStack_204;
      auVar23._8_4_ = 0.0 - fStack_200;
      auVar23._12_4_ = 0.0 - fStack_1fc;
      auVar22 = divps(auVar23,*param_5);
      auVar23 = minps(auVar22,_DAT_149931140);
      pfVar9 = (float *)(lVar11 + 0x2d0 + lVar21);
      fVar12 = *pfVar9;
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fVar15 = pfVar9[3];
      auVar24._0_4_ = auVar23._0_4_ - fVar12;
      auVar24._4_4_ = auVar23._4_4_ - fVar13;
      auVar24._8_4_ = auVar23._8_4_ - fVar14;
      auVar24._12_4_ = auVar23._12_4_ - fVar15;
      auVar22._4_4_ = -(uint)(fVar13 + auVar34._4_4_ < auVar23._4_4_);
      auVar22._0_4_ = -(uint)(fVar12 + auVar34._0_4_ < auVar23._0_4_);
      auVar22._8_4_ = -(uint)(fVar14 + auVar34._8_4_ < auVar23._8_4_);
      auVar22._12_4_ = -(uint)(fVar15 + auVar34._12_4_ < auVar23._12_4_);
      auVar22 = blendvps(auVar34,auVar24,auVar22);
      fVar33 = (float)(auVar22._0_4_ & -(uint)(0.0 < local_208 || *pfVar8 < 0.0) & *puVar1);
      fVar35 = (float)(auVar22._4_4_ & -(uint)(0.0 < fStack_204 || pfVar8[1] < 0.0) & puVar1[1]);
      fVar36 = (float)(auVar22._8_4_ & -(uint)(0.0 < fStack_200 || pfVar8[2] < 0.0) & puVar1[2]);
      fVar37 = (float)(auVar22._12_4_ & -(uint)(0.0 < fStack_1fc || pfVar8[3] < 0.0) & puVar1[3]);
      pfVar9 = (float *)(lVar11 + 0x2d0 + lVar21);
      *pfVar9 = fVar12 + fVar33;
      pfVar9[1] = fVar13 + fVar35;
      pfVar9[2] = fVar14 + fVar36;
      pfVar9[3] = fVar15 + fVar37;
      fVar29 = fVar29 * fVar33;
      fVar30 = fVar30 * fVar35;
      fVar31 = fVar31 * fVar36;
      fVar32 = fVar32 * fVar37;
      fVar25 = fVar25 * fVar33;
      fVar26 = fVar26 * fVar35;
      fVar27 = fVar27 * fVar36;
      fVar28 = fVar28 * fVar37;
      fVar38 = fVar38 * fVar33;
      fVar39 = fVar39 * fVar35;
      fVar40 = fVar40 * fVar36;
      fVar41 = fVar41 * fVar37;
      fVar12 = (float)param_1[0x18];
      fVar13 = (float)param_1[0x19];
      fVar14 = (float)param_1[0x1a];
      fVar15 = (float)param_1[0x1b];
      fVar16 = (float)param_1[0x1c];
      fVar17 = (float)param_1[0x1d];
      fVar18 = (float)param_1[0x1e];
      fVar19 = (float)param_1[0x1f];
      local_108 = fVar12 * fVar29 + local_108;
      fStack_104 = fVar13 * fVar30 + fStack_104;
      fStack_100 = fVar14 * fVar31 + fStack_100;
      fStack_fc = fVar15 * fVar32 + fStack_fc;
      local_f8 = fVar12 * fVar25 + local_1f8;
      fStack_f4 = fVar13 * fVar26 + fStack_1f4;
      fStack_f0 = fVar14 * fVar27 + fStack_1f0;
      fStack_ec = fVar15 * fVar28 + fStack_1ec;
      local_e8 = fVar12 * fVar38 + local_e8;
      fStack_e4 = fVar13 * fVar39 + fStack_e4;
      fStack_e0 = fVar14 * fVar40 + fStack_e0;
      fStack_dc = fVar15 * fVar41 + fStack_dc;
      pfVar9 = (float *)(lVar11 + 0xd0 + lVar21);
      local_138 = *pfVar9 * fVar33 + local_1d8;
      fStack_134 = pfVar9[1] * fVar35 + fStack_1d4;
      fStack_130 = pfVar9[2] * fVar36 + fStack_1d0;
      fStack_12c = pfVar9[3] * fVar37 + fStack_1cc;
      pfVar9 = (float *)(lVar11 + 0xe0 + lVar21);
      local_128 = *pfVar9 * fVar33 + local_1c8;
      fStack_124 = pfVar9[1] * fVar35 + fStack_1c4;
      fStack_120 = pfVar9[2] * fVar36 + fStack_1c0;
      fStack_11c = pfVar9[3] * fVar37 + fStack_1bc;
      pfVar9 = (float *)(lVar11 + 0xf0 + lVar21);
      local_118 = *pfVar9 * fVar33 + local_1b8;
      fStack_114 = pfVar9[1] * fVar35 + fStack_1b4;
      fStack_110 = pfVar9[2] * fVar36 + fStack_1b0;
      fStack_10c = pfVar9[3] * fVar37 + fStack_1ac;
      local_248 = CONCAT44(local_248._4_4_ - fVar30 * fVar17,(float)local_248 - fVar29 * fVar16);
      uStack_240 = CONCAT44(uStack_240._4_4_ - fVar32 * fVar19,(float)uStack_240 - fVar31 * fVar18);
      local_238 = CONCAT44(local_238._4_4_ - fVar26 * fVar17,(float)local_238 - fVar25 * fVar16);
      uStack_230 = CONCAT44(uStack_230._4_4_ - fVar28 * fVar19,(float)uStack_230 - fVar27 * fVar18);
      local_148 = (float)local_228 - fVar38 * fVar16;
      fStack_144 = local_228._4_4_ - fVar39 * fVar17;
      fStack_140 = (float)uStack_220 - fVar40 * fVar18;
      fStack_13c = uStack_220._4_4_ - fVar41 * fVar19;
      local_228 = CONCAT44(fStack_144,local_148);
      uStack_220 = CONCAT44(fStack_13c,fStack_140);
      pfVar9 = (float *)(lVar11 + 0x100 + lVar21);
      local_198 = local_1e8 - *pfVar9 * fVar33;
      fStack_194 = fStack_1e4 - pfVar9[1] * fVar35;
      fStack_190 = fStack_1e0 - pfVar9[2] * fVar36;
      fStack_18c = fStack_1dc - pfVar9[3] * fVar37;
      pfVar9 = (float *)(lVar11 + 0x110 + lVar21);
      local_188 = local_1a8 - *pfVar9 * fVar33;
      fStack_184 = fStack_1a4 - pfVar9[1] * fVar35;
      fStack_180 = fStack_1a0 - pfVar9[2] * fVar36;
      fStack_17c = fStack_19c - pfVar9[3] * fVar37;
      pfVar9 = (float *)(lVar11 + 0x120 + lVar21);
      local_178 = local_218 - fVar33 * *pfVar9;
      fStack_174 = fStack_214 - fVar35 * pfVar9[1];
      fStack_170 = fStack_210 - fVar36 * pfVar9[2];
      fStack_16c = fStack_20c - fVar37 * pfVar9[3];
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < *param_1);
    local_168 = local_248;
    uStack_160 = uStack_240;
    local_158 = local_238;
    uStack_150 = uStack_230;
  }
  local_258 = (undefined8 *)param_3;
  local_250 = (float *)param_4;
  FUN_146d74fb5(&local_108,&local_138,&local_168,&local_198);
  if ((local_d0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d71733 FUN_146d71733 body=170 status=ok
// SIG undefined FUN_146d71733(void)

bool FUN_146d71733(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  longlong **local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_18;
  local_38 = &local_30;
  local_30 = param_8;
  local_28 = param_9;
  *param_8 = 0;
  local_40 = &local_19;
  local_50 = param_7;
  local_58 = param_6;
  local_18 = param_2;
  FUN_146d717de(param_7,param_3,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return *param_8 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d717de FUN_146d717de body=493 status=ok
// SIG undefined FUN_146d717de(void)

void FUN_146d717de(longlong *param_1,longlong *param_2,undefined4 *param_3,double *param_4,
                  undefined8 param_5,double param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined ***local_160;
  double local_150;
  double local_148;
  double local_140;
  undefined **local_138;
  longlong **local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong *local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  double *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (9.99999993922529e-09 <= param_6) {
    if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) != '\0') {
      local_80 = param_5;
      local_78 = &param_6;
      local_68 = param_7;
      local_60 = param_8;
      local_58 = param_9;
      plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
      local_128 = *param_4;
      dStack_120 = param_4[1];
      local_118 = param_4[2];
      dStack_110 = param_4[3];
      local_108 = *param_3;
      uStack_104 = param_3[1];
      uStack_100 = (undefined4)*(undefined8 *)(param_3 + 2);
      uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
      local_f8 = *(undefined8 *)(param_3 + 4);
      uStack_f0 = 0;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0x3ff0000000000000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      local_90 = param_2;
      local_88 = param_3;
      local_70 = param_4;
      (**(code **)(*plVar1 + 0x88))(plVar1,&local_c0,&local_128);
      local_150 = (local_a8 - local_c0) * 0.5;
      local_148 = (local_a0 - local_b8) * 0.5;
      local_140 = (local_98 - local_b0) * 0.5;
      local_118 = local_b0 + local_140;
      dStack_120 = local_b8 + local_148;
      local_128 = local_c0 + local_150;
      local_160 = &local_138;
      local_138 = &PTR_FUN_149f4f9c0;
      local_168 = &local_150;
      local_130 = &local_90;
      (**(code **)(*param_1 + 0x58))(param_1,&local_128,param_5,param_6);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d719cc FUN_146d719cc body=124 status=ok
// SIG undefined FUN_146d719cc(void)

undefined8
FUN_146d719cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1449437a2(param_3,local_88,param_5);
  FUN_1404c4420(param_1,param_2,param_4,local_88);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d71a4a FUN_146d71a4a body=272 status=ok
// SIG undefined FUN_146d71a4a(void)

void FUN_146d71a4a(undefined1 (*param_1) [16],longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar1 = *(longlong *)(param_2 + 0x88);
  dVar2 = ((*(double *)(lVar1 + 0x48) - *(double *)(lVar1 + 0x30)) * 0.5 + *(double *)(lVar1 + 0x30)
          ) * *(double *)(param_2 + 0x30);
  auVar5 = insertps(ZEXT416((uint)(float)(((*(double *)(lVar1 + 0x38) - *(double *)(lVar1 + 0x20)) *
                                           0.5 + *(double *)(lVar1 + 0x20)) *
                                         *(double *)(param_2 + 0x20))),
                    ZEXT416((uint)(float)(((*(double *)(lVar1 + 0x40) - *(double *)(lVar1 + 0x28)) *
                                           0.5 + *(double *)(lVar1 + 0x28)) *
                                         *(double *)(param_2 + 0x28))),0x1c);
  auVar6._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar6._0_4_ = (float)dVar2;
  auVar6._8_8_ = 0;
  auVar6 = insertps(auVar5,auVar6,0x28);
  *param_1 = auVar6;
  lVar1 = *(longlong *)(param_2 + 0x88);
  dVar2 = (*(double *)(param_2 + 0x28) + 9.99999993922529e-09) *
          (*(double *)(lVar1 + 0x40) - *(double *)(lVar1 + 0x28)) * 0.5;
  dVar3 = (*(double *)(param_2 + 0x20) + 9.99999993922529e-09) *
          (*(double *)(lVar1 + 0x38) - *(double *)(lVar1 + 0x20)) * 0.5;
  auVar4._0_4_ = (float)dVar3;
  auVar4._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar4._8_8_ = 0;
  auVar5._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar5._0_4_ = (float)dVar2;
  auVar5._8_8_ = 0;
  auVar6 = insertps(auVar4,auVar5,0x1c);
  auVar6 = insertps(auVar6,ZEXT416((uint)(float)((*(double *)(param_2 + 0x30) + 9.99999993922529e-09
                                                 ) * (*(double *)(lVar1 + 0x48) -
                                                     *(double *)(lVar1 + 0x30)) * 0.5)),0x28);
  param_1[1] = auVar6;
  return;
}



// FUNCTION 146d71b5a FUN_146d71b5a body=38 status=ok
// SIG undefined FUN_146d71b5a(void)

undefined8 FUN_146d71b5a(undefined8 param_1,int param_2)

{
  FUN_14026d15c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d71bc2 FUN_146d71bc2 body=38 status=ok
// SIG undefined FUN_146d71bc2(void)

undefined8 FUN_146d71bc2(undefined8 param_1,int param_2)

{
  FUN_146d69808();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d71bec FUN_146d71bec body=69 status=ok
// SIG undefined FUN_146d71bec(void)

undefined8 * FUN_146d71bec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f4f5b0;
  if (param_1[0x16e] != 0) {
    FUN_1400020a8();
  }
  FUN_146d6dd8e(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d71c32 FUN_146d71c32 body=122 status=ok
// SIG undefined FUN_146d71c32(void)

void FUN_146d71c32(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x1c,0);
      iVar2 = (int)(uVar1 / 0x1c);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_140210fba(param_1,0,iVar3,0x1c);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x7c) = param_3;
  return;
}



// FUNCTION 146d71cac FUN_146d71cac body=115 status=ok
// SIG undefined FUN_146d71cac(void)

void FUN_146d71cac(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x6c,0);
      iVar2 = (int)(uVar1 / 0x6c);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1404b24ba(param_1,0,iVar3,0x6c);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1bc) = param_3;
  return;
}



// FUNCTION 146d71d20 FUN_146d71d20 body=122 status=ok
// SIG undefined FUN_146d71d20(void)

void FUN_146d71d20(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x1c,0);
      iVar2 = (int)(uVar1 / 0x1c);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1402111b8(param_1,0,iVar3,0x1c);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x7c) = param_3;
  return;
}



// FUNCTION 146d71d9a FUN_146d71d9a body=108 status=ok
// SIG undefined FUN_146d71d9a(void)

void * FUN_146d71d9a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x70);
    if (*(void **)((longlong)param_2 + 0x70) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x78);
    *(int *)((longlong)param_1 + 0x78) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x7c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 4;
    }
    else {
      FUN_146d71c32(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x70);
        if (*(void **)((longlong)param_1 + 0x70) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 146d71e06 FUN_146d71e06 body=119 status=ok
// SIG undefined FUN_146d71e06(void)

void * FUN_146d71e06(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x1b0);
    if (*(void **)((longlong)param_2 + 0x1b0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x1b8);
    *(int *)((longlong)param_1 + 0x1b8) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1bc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1bc) = 4;
    }
    else {
      FUN_146d71cac(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x1b0);
        if (*(void **)((longlong)param_1 + 0x1b0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x6c);
      }
    }
  }
  return param_1;
}



// FUNCTION 146d71e7e FUN_146d71e7e body=108 status=ok
// SIG undefined FUN_146d71e7e(void)

void * FUN_146d71e7e(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x70);
    if (*(void **)((longlong)param_2 + 0x70) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x78);
    *(int *)((longlong)param_1 + 0x78) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x7c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 4;
    }
    else {
      FUN_146d71d20(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x70);
        if (*(void **)((longlong)param_1 + 0x70) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 146d71eea FUN_146d71eea body=58 status=ok
// SIG undefined FUN_146d71eea(void)

void FUN_146d71eea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d71f24(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  if (iVar1 == *(int *)(param_1 + 0x7c)) {
    return;
  }
  *(int *)(param_1 + 0x7c) = iVar1;
  FUN_1402111b8(param_1,*(undefined4 *)(param_1 + 0x78),iVar1,0x1c);
  return;
}



// FUNCTION 146d71f24 FUN_146d71f24 body=139 status=ok
// SIG undefined FUN_146d71f24(void)

ulonglong FUN_146d71f24(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x1c) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x1c,0);
      uVar1 = uVar1 / 0x1c;
    }
  }
  return uVar1;
}



// FUNCTION 146d71fb0 FUN_146d71fb0 body=139 status=ok
// SIG undefined FUN_146d71fb0(void)

void FUN_146d71fb0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x7c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x1c,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x1c)) {
        uVar4 = uVar3 / 0x1c & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x7c) = (int)uVar4;
    FUN_140210fba(param_1,param_2,uVar4,0x1c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146d7203c FUN_146d7203c body=2304 status=ok
// SIG undefined FUN_146d7203c(void)

void FUN_146d7203c(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_e0;
  
  lVar2 = *param_3;
  fVar9 = 0.0;
  fVar11 = 0.0;
  local_e0 = 0.0;
  if (1.1754944e-38 < *(float *)(param_3 + 1) * *(float *)(param_3 + 2) * *(float *)(lVar2 + 0x134))
  {
    lVar1 = (longlong)param_2 * 0xbc;
    fVar9 = *(float *)(param_1 + 0x20 + lVar1);
    fVar11 = *(float *)(param_1 + 4 + lVar1);
    fVar4 = *(float *)(param_1 + 8 + lVar1);
    fVar6 = *(float *)(param_1 + 0x1c + lVar1);
    fVar8 = fVar11 * fVar9 - fVar6 * fVar4;
    fVar7 = *(float *)(param_1 + 0xc + lVar1);
    fVar10 = *(float *)(param_1 + 0x24 + lVar1);
    fVar3 = fVar6 * fVar7 - fVar10 * fVar11;
    fVar12 = fVar10 * fVar4 - fVar9 * fVar7;
    fVar9 = *(float *)(param_1 + 0x2c + lVar1);
    fVar6 = *(float *)(param_1 + 0x28 + lVar1);
    fVar14 = fVar11 * fVar9 - fVar6 * fVar4;
    fVar10 = *(float *)(param_1 + 0x30 + lVar1);
    fVar5 = fVar6 * fVar7 - fVar10 * fVar11;
    fVar15 = fVar10 * fVar4 - fVar9 * fVar7;
    fVar9 = *(float *)(param_1 + 0x38 + lVar1);
    fVar6 = *(float *)(param_1 + 0x34 + lVar1);
    fVar16 = fVar11 * fVar9 - fVar6 * fVar4;
    fVar10 = *(float *)(param_1 + 0x3c + lVar1);
    fVar22 = fVar6 * fVar7 - fVar11 * fVar10;
    fVar18 = fVar4 * fVar10 - fVar9 * fVar7;
    fVar24 = *(float *)(param_3 + 2) * *(float *)((longlong)param_3 + 0xc);
    fVar6 = *(float *)(lVar2 + 0x68) * fVar24;
    fVar26 = *(float *)(lVar2 + 0x58) * fVar24;
    fVar21 = *(float *)(lVar2 + 0x54) * fVar24;
    fVar25 = *(float *)(lVar2 + 0x50) * fVar24;
    fVar9 = fVar26 * fVar8 + fVar25 * fVar12 + fVar3 * fVar21;
    fVar20 = *(float *)(lVar2 + 0x48) * fVar24;
    fVar19 = *(float *)(lVar2 + 100) * fVar24;
    fVar11 = *(float *)(lVar2 + 0x44) * fVar24;
    fVar17 = *(float *)(lVar2 + 0x60) * fVar24;
    fVar24 = fVar24 * *(float *)(lVar2 + 0x40);
    fVar13 = fVar20 * fVar8 + fVar24 * fVar12 + fVar3 * fVar11;
    *(float *)(param_1 + 0x50 + lVar1) = fVar13;
    *(float *)(param_1 + 0x54 + lVar1) = fVar9;
    fVar10 = fVar6 * fVar8 + fVar17 * fVar12 + fVar3 * fVar19;
    fVar4 = fVar26 * fVar14 + fVar25 * fVar15 + fVar5 * fVar21;
    fVar23 = fVar20 * fVar14 + fVar24 * fVar15 + fVar5 * fVar11;
    *(float *)(param_1 + 0x58 + lVar1) = fVar10;
    *(float *)(param_1 + 0x5c + lVar1) = fVar23;
    *(float *)(param_1 + 0x60 + lVar1) = fVar4;
    fVar7 = fVar6 * fVar14 + fVar17 * fVar15 + fVar5 * fVar19;
    fVar6 = fVar6 * fVar16 + fVar17 * fVar18 + fVar19 * fVar22;
    fVar17 = fVar26 * fVar16 + fVar25 * fVar18 + fVar21 * fVar22;
    fVar11 = fVar20 * fVar16 + fVar24 * fVar18 + fVar11 * fVar22;
    *(float *)(param_1 + 100 + lVar1) = fVar7;
    *(float *)(param_1 + 0x68 + lVar1) = fVar11;
    *(float *)(param_1 + 0x6c + lVar1) = fVar17;
    *(float *)(param_1 + 0x70 + lVar1) = fVar6;
    fVar9 = *(float *)(param_3 + 2) * *(float *)(param_3 + 1) * *(float *)(*param_3 + 0x134);
    fVar9 = fVar10 * fVar8 + fVar13 * fVar12 + fVar9 * fVar3 + fVar9 + 0.0;
    fVar11 = fVar7 * fVar14 + fVar23 * fVar15 + fVar4 * fVar5 + fVar9 + 0.0;
    local_e0 = fVar6 * fVar16 + fVar11 * fVar18 + fVar17 * fVar22 + fVar9 + 0.0;
  }
  lVar2 = *param_4;
  if (1.1754944e-38 < *(float *)(param_4 + 1) * *(float *)(param_4 + 2) * *(float *)(lVar2 + 0x134))
  {
    lVar1 = (longlong)param_2 * 0xbc;
    fVar4 = *(float *)(param_1 + 0x20 + lVar1);
    fVar6 = *(float *)(param_1 + 0x10 + lVar1);
    fVar7 = *(float *)(param_1 + 0x14 + lVar1);
    fVar10 = *(float *)(param_1 + 0x1c + lVar1);
    fVar8 = fVar6 * fVar4 - fVar10 * fVar7;
    fVar3 = *(float *)(param_1 + 0x18 + lVar1);
    fVar5 = *(float *)(param_1 + 0x24 + lVar1);
    fVar25 = fVar10 * fVar3 - fVar5 * fVar6;
    fVar12 = fVar5 * fVar7 - fVar4 * fVar3;
    fVar4 = *(float *)(param_1 + 0x2c + lVar1);
    fVar10 = *(float *)(param_1 + 0x28 + lVar1);
    fVar13 = fVar6 * fVar4 - fVar10 * fVar7;
    fVar5 = *(float *)(param_1 + 0x30 + lVar1);
    fVar17 = fVar10 * fVar3 - fVar5 * fVar6;
    fVar14 = fVar5 * fVar7 - fVar4 * fVar3;
    fVar4 = *(float *)(param_1 + 0x38 + lVar1);
    fVar10 = *(float *)(param_1 + 0x34 + lVar1);
    fVar15 = fVar6 * fVar4 - fVar10 * fVar7;
    fVar5 = *(float *)(param_1 + 0x3c + lVar1);
    fVar18 = fVar10 * fVar3 - fVar6 * fVar5;
    fVar6 = fVar7 * fVar5 - fVar4 * fVar3;
    fVar20 = *(float *)(param_4 + 2) * *(float *)((longlong)param_4 + 0xc);
    fVar10 = *(float *)(lVar2 + 0x68) * fVar20;
    fVar23 = *(float *)(lVar2 + 0x58) * fVar20;
    fVar27 = *(float *)(lVar2 + 0x54) * fVar20;
    fVar19 = *(float *)(lVar2 + 0x50) * fVar20;
    fVar16 = *(float *)(lVar2 + 0x48) * fVar20;
    fVar21 = *(float *)(lVar2 + 100) * fVar20;
    fVar3 = *(float *)(lVar2 + 0x44) * fVar20;
    fVar5 = *(float *)(lVar2 + 0x60) * fVar20;
    fVar20 = fVar20 * *(float *)(lVar2 + 0x40);
    fVar4 = fVar23 * fVar8 + fVar19 * fVar12 + fVar25 * fVar27;
    fVar7 = fVar16 * fVar8 + fVar20 * fVar12 + fVar25 * fVar3;
    *(float *)(param_1 + 0x74 + lVar1) = fVar7;
    *(float *)(param_1 + 0x78 + lVar1) = fVar4;
    fVar24 = fVar10 * fVar8 + fVar5 * fVar12 + fVar25 * fVar21;
    fVar26 = fVar23 * fVar13 + fVar19 * fVar14 + fVar17 * fVar27;
    fVar28 = fVar16 * fVar13 + fVar20 * fVar14 + fVar17 * fVar3;
    *(float *)(param_1 + 0x7c + lVar1) = fVar24;
    *(float *)(param_1 + 0x80 + lVar1) = fVar28;
    *(float *)(param_1 + 0x84 + lVar1) = fVar26;
    fVar22 = fVar10 * fVar13 + fVar5 * fVar14 + fVar17 * fVar21;
    fVar10 = fVar10 * fVar15 + fVar5 * fVar6 + fVar21 * fVar18;
    fVar5 = fVar23 * fVar15 + fVar19 * fVar6 + fVar27 * fVar18;
    fVar3 = fVar16 * fVar15 + fVar20 * fVar6 + fVar3 * fVar18;
    *(float *)(param_1 + 0x88 + lVar1) = fVar22;
    *(float *)(param_1 + 0x8c + lVar1) = fVar3;
    *(float *)(param_1 + 0x90 + lVar1) = fVar5;
    *(float *)(param_1 + 0x94 + lVar1) = fVar10;
    fVar9 = *(float *)(param_4 + 2) * *(float *)(param_4 + 1) * *(float *)(*param_4 + 0x134);
    fVar9 = fVar9 + fVar24 * fVar8 + fVar7 * fVar12 + fVar4 * fVar25 + fVar9;
    fVar11 = fVar11 + fVar22 * fVar13 + fVar28 * fVar14 + fVar26 * fVar17 + fVar9;
    local_e0 = local_e0 + fVar10 * fVar15 + fVar3 * fVar6 + fVar5 * fVar18 + fVar9;
  }
  lVar2 = (longlong)param_2 * 0xbc;
  *(uint *)(param_1 + 0x98 + lVar2) = -(uint)(1e-08 < fVar9) & (uint)(1.0 / fVar9);
  *(uint *)(param_1 + 0x9c + lVar2) = -(uint)(1e-08 < fVar11) & (uint)(1.0 / fVar11);
  *(uint *)(param_1 + 0xa0 + lVar2) = -(uint)(1e-08 < local_e0) & (uint)(1.0 / local_e0);
  return;
}



// FUNCTION 146d7293c FUN_146d7293c body=64 status=ok
// SIG undefined FUN_146d7293c(void)

void FUN_146d7293c(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x34);
    do {
      puVar1[-2] = 0xffffffff7f7fffff;
      *(undefined1 *)(puVar1 + -1) = 0;
      *(undefined1 *)((longlong)puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x6c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146d7297c FUN_146d7297c body=73 status=ok
// SIG undefined FUN_146d7297c(void)

void FUN_146d7297c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d729c6(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
  if (iVar1 == *(int *)(param_1 + 0x1bc)) {
    return;
  }
  *(int *)(param_1 + 0x1bc) = iVar1;
  FUN_1404b24ba(param_1,*(undefined4 *)(param_1 + 0x1b8),iVar1,0x6c);
  return;
}



// FUNCTION 146d729c6 FUN_146d729c6 body=121 status=ok
// SIG undefined FUN_146d729c6(void)

ulonglong FUN_146d729c6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x6c) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x6c,0);
      uVar1 = uVar1 / 0x6c;
    }
  }
  return uVar1;
}



// FUNCTION 146d72a40 FUN_146d72a40 body=124 status=ok
// SIG undefined FUN_146d72a40(void)

void FUN_146d72a40(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x1c,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0x1c)) {
        uVar2 = uVar1 / 0x1c & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x7c)) {
    *(int *)(param_1 + 0x7c) = (int)uVar2;
    FUN_1402111b8(param_1,*(undefined4 *)(param_1 + 0x78),uVar2,0x1c);
    return;
  }
  return;
}



// FUNCTION 146d72abc FUN_146d72abc body=115 status=ok
// SIG undefined FUN_146d72abc(void)

void FUN_146d72abc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x338,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x338)) {
      uVar2 = uVar1 / 0x338 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x338,8);
  }
  return;
}



// FUNCTION 146d72b30 FUN_146d72b30 body=150 status=ok
// SIG undefined FUN_146d72b30(void)

void FUN_146d72b30(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x338,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x338)) {
      uVar5 = uVar4 / 0x338 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x338,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d72bc8 FUN_146d72bc8 body=62 status=ok
// SIG undefined FUN_146d72bc8(void)

void FUN_146d72bc8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d72c06(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x338,8);
  }
  return;
}



// FUNCTION 146d72c06 FUN_146d72c06 body=114 status=ok
// SIG undefined FUN_146d72c06(void)

ulonglong FUN_146d72c06(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x338) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146d72c3f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x338,8);
      param_2 = param_2 / 0x338;
    }
  }
LAB_146d72c3f:
  return param_2 & 0xffffffff;
}



// FUNCTION 146d72c78 FUN_146d72c78 body=95 status=ok
// SIG undefined FUN_146d72c78(void)

void FUN_146d72c78(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146d72cd8 FUN_146d72cd8 body=95 status=ok
// SIG undefined FUN_146d72cd8(void)

void FUN_146d72cd8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 146d72d38 FUN_146d72d38 body=95 status=ok
// SIG undefined FUN_146d72d38(void)

void FUN_146d72d38(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 146d72d98 FUN_146d72d98 body=112 status=ok
// SIG undefined FUN_146d72d98(void)

void FUN_146d72d98(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x300,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x300)) {
      uVar2 = uVar1 / 0x300 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x300,0x10);
  }
  return;
}



// FUNCTION 146d72e08 FUN_146d72e08 body=95 status=ok
// SIG undefined FUN_146d72e08(void)

void FUN_146d72e08(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 146d72e68 FUN_146d72e68 body=132 status=ok
// SIG undefined FUN_146d72e68(void)

void FUN_146d72e68(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d72eee FUN_146d72eee body=132 status=ok
// SIG undefined FUN_146d72eee(void)

void FUN_146d72eee(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d72f74 FUN_146d72f74 body=132 status=ok
// SIG undefined FUN_146d72f74(void)

void FUN_146d72f74(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d72ffa FUN_146d72ffa body=147 status=ok
// SIG undefined FUN_146d72ffa(void)

void FUN_146d72ffa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x300,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x300)) {
      uVar5 = uVar4 / 0x300 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x300,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d7308e FUN_146d7308e body=132 status=ok
// SIG undefined FUN_146d7308e(void)

void FUN_146d7308e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d73113 FUN_146d73113 body=3540 status=ok
// SIG undefined FUN_146d73113(void)

void FUN_146d73113(int param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
                  float param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float local_280;
  float local_258;
  undefined1 local_248 [16];
  float local_238;
  double dStack_200;
  double local_1e8;
  double dStack_1e0;
  double dStack_1d0;
  double local_178;
  double dStack_170;
  double dVar7;
  
  lVar29 = -4;
  lVar30 = (longlong)param_1 * 0x6c;
  do {
    lVar9 = *(longlong *)(param_3 + 0x20 + lVar29 * 8);
    if (((lVar9 != 0) && ((*(byte *)(lVar9 + 0x374) & 2) == 0)) &&
       (param_1 < *(int *)(lVar9 + 0x5b0))) {
      lVar28 = lVar9 + 0x3f8;
      if (*(longlong *)(lVar9 + 0x5a8) != 0) {
        lVar28 = *(longlong *)(lVar9 + 0x5a8);
      }
      if ((*(byte *)(lVar28 + 0x30 + lVar30) & 1) == 0) {
        dVar12 = SUB168(*(undefined1 (*) [16])(lVar9 + 0x1e0),0);
        dVar6 = *(double *)(lVar9 + 0x1e8);
        dVar7 = *(double *)(lVar9 + 0x1e8);
        dVar24 = *(double *)(lVar9 + 0x1d0);
        dVar25 = *(double *)*(undefined1 (*) [12])(lVar9 + 0x1d8);
        auVar27 = *(undefined1 (*) [12])(lVar9 + 0x1d8);
        dVar13 = (double)*(float *)(lVar28 + 0x20 + lVar30);
        dVar38 = (double)*(float *)(lVar28 + 0x1c + lVar30);
        dVar14 = (double)*(float *)(lVar28 + 0x18 + lVar30);
        dVar39 = dVar38 * dVar24 - dVar25 * dVar14;
        dVar40 = dVar13 * dVar25 - dVar12 * dVar38;
        dVar53 = dVar14 * dVar12 - dVar13 * dVar24;
        dVar40 = dVar40 + dVar40;
        dVar53 = dVar53 + dVar53;
        dVar39 = dVar39 + dVar39;
        auVar19._12_4_ = SUB164(*(undefined1 (*) [16])(lVar9 + 0x1e0),4);
        auVar19._0_12_ = auVar27;
        auVar17._8_4_ = SUB84(dVar7,0);
        auVar17._0_8_ = dVar6;
        auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        fVar42 = (float)(dVar39 * dVar6 + dVar13 + (dVar53 * dVar24 - dVar40 * dVar25));
        fVar33 = (float)((dVar39 * dVar25 - dVar53 * dVar12) + dVar6 * dVar40 + dVar14);
        fVar61 = (float)((dVar12 * dVar40 - dVar24 * dVar39) + dVar7 * dVar53 + dVar38);
        fVar64 = fVar61 * 0.0 - fVar33;
        fVar34 = fVar33 * 0.0;
        local_238 = fVar42 * -0.0 + fVar34;
        fVar63 = fVar61 * -0.0 + fVar42;
        fVar47 = fVar64 * fVar64 + fVar63 * fVar63 + local_238 * local_238;
        if (fVar47 <= 0.0001) {
          fVar64 = fVar61 - fVar34;
          fVar34 = fVar34 - fVar42;
          fVar47 = fVar42 * 0.0 + fVar61 * -0.0;
          fVar63 = 1.0 / SQRT(fVar64 * fVar64 + fVar47 * fVar47 + fVar34 * fVar34);
          fVar64 = fVar64 * fVar63;
          local_238 = fVar34 * fVar63;
          fVar63 = fVar63 * fVar47;
        }
        else {
          fVar34 = 1.0 / SQRT(fVar47);
          fVar63 = fVar63 * fVar34;
          local_238 = local_238 * fVar34;
          fVar64 = fVar64 * fVar34;
        }
        local_258 = -fVar42;
        lVar10 = *(longlong *)(param_4 + 0x20 + lVar29 * 8);
        lVar11 = *(longlong *)(param_4 + 0x40 + lVar29 * 8);
        dVar16 = (double)*(float *)(lVar28 + 8 + lVar30);
        dVar38 = (double)*(float *)(lVar28 + 4 + lVar30);
        dVar49 = (double)*(float *)(lVar28 + lVar30);
        dVar22 = *(double *)(lVar9 + 0x170);
        dVar23 = *(double *)*(undefined1 (*) [12])(lVar9 + 0x178);
        auVar8 = *(undefined1 (*) [16])(lVar9 + 0x180);
        auVar26 = *(undefined1 (*) [12])(lVar9 + 0x178);
        dVar14 = auVar8._0_8_;
        dVar13 = *(double *)(lVar9 + 0x188);
        dVar7 = *(double *)(lVar9 + 0x188);
        dVar39 = dVar38 * dVar22 - dVar23 * dVar49;
        dVar40 = dVar16 * dVar23 - dVar14 * dVar38;
        dVar53 = dVar49 * dVar14 - dVar16 * dVar22;
        dVar40 = dVar40 + dVar40;
        dVar53 = dVar53 + dVar53;
        dVar39 = dVar39 + dVar39;
        auVar18._12_4_ = auVar8._4_4_;
        auVar18._0_12_ = auVar26;
        dVar58 = (dVar39 * dVar23 - dVar53 * dVar14) + dVar13 * dVar40 + dVar49 +
                 *(double *)(lVar9 + 400);
        dVar59 = (dVar14 * dVar40 - dVar22 * dVar39) + dVar7 * dVar53 + dVar38 +
                 *(double *)(lVar9 + 0x198);
        dVar16 = dVar39 * dVar13 + dVar16 + (dVar53 * dVar22 - dVar40 * dVar23) +
                 *(double *)(lVar9 + 0x1a0);
        dVar49 = (double)*(float *)(lVar28 + 0x14 + lVar30);
        dVar38 = (double)*(float *)(lVar28 + 0x10 + lVar30);
        dVar36 = (double)*(float *)(lVar28 + 0xc + lVar30);
        local_1e8 = auVar27._0_8_;
        dStack_1e0 = auVar19._8_8_;
        dVar39 = dVar38 * dVar24 - local_1e8 * dVar36;
        dVar40 = dVar49 * dVar25 - dStack_1e0 * dVar38;
        dVar53 = dVar36 * dVar12 - dVar49 * dVar24;
        dVar40 = dVar40 + dVar40;
        dVar53 = dVar53 + dVar53;
        dVar39 = dVar39 + dVar39;
        dStack_1d0 = auVar17._8_8_;
        fVar48 = fVar33 * local_238 - fVar63 * fVar61;
        fVar47 = fVar42 * fVar63 + -fVar33 * fVar64;
        fVar31 = fVar61 * fVar64 + local_258 * local_238;
        dVar36 = (dVar39 * dVar25 - dVar53 * dStack_1e0) + dVar6 * dVar40 + dVar36 +
                 *(double *)(lVar9 + 0x1f0);
        dVar21 = (dVar12 * dVar40 - dVar24 * dVar39) + dStack_1d0 * dVar53 + dVar38 +
                 *(double *)(lVar9 + 0x1f8);
        dVar39 = dVar39 * dVar6 + dVar49 + (dVar53 * dVar24 - dVar40 * local_1e8) +
                 *(double *)(lVar9 + 0x200);
        auVar20._8_4_ = SUB84(dVar21,0);
        auVar20._0_8_ = dVar36;
        auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        dVar40 = (dVar16 + dVar39) * 0.5;
        dVar38 = (dVar21 + dVar59) * 0.5;
        dVar53 = (dVar58 + dVar36) * 0.5;
        fVar41 = (float)(dVar40 - *(double *)(lVar10 + 0x120));
        fVar55 = (float)(dVar38 - *(double *)(lVar10 + 0x118));
        fVar60 = (float)(dVar53 - *(double *)(lVar10 + 0x110));
        fVar56 = (float)(dVar40 - *(double *)(lVar11 + 0x120));
        fVar62 = (float)(dVar38 - *(double *)(lVar11 + 0x118));
        lVar28 = lVar28 + lVar30;
        fVar35 = (float)(dVar53 - *(double *)(lVar11 + 0x110));
        fVar34 = *(float *)(lVar9 + 0x344);
        fVar65 = 0.0;
        if (0.0 < fVar34) {
LAB_146d73d02:
          fVar65 = ((*(float *)(lVar10 + 0x30) * fVar55 - fVar60 * *(float *)(lVar10 + 0x34)) +
                   *(float *)(lVar10 + 0x28)) -
                   ((*(float *)(lVar11 + 0x30) * fVar62 - fVar35 * *(float *)(lVar11 + 0x34)) +
                   *(float *)(lVar11 + 0x28));
          local_280 = ((*(float *)(lVar10 + 0x38) * fVar60 - fVar41 * *(float *)(lVar10 + 0x30)) +
                      *(float *)(lVar10 + 0x24)) -
                      ((*(float *)(lVar11 + 0x38) * fVar35 - fVar56 * *(float *)(lVar11 + 0x30)) +
                      *(float *)(lVar11 + 0x24));
          fVar45 = ((*(float *)(lVar10 + 0x34) * fVar41 - *(float *)(lVar10 + 0x38) * fVar55) +
                   *(float *)(lVar10 + 0x20)) -
                   ((*(float *)(lVar11 + 0x34) * fVar56 - *(float *)(lVar11 + 0x38) * fVar62) +
                   *(float *)(lVar11 + 0x20));
          local_248 = auVar8;
          if ((*(byte *)(lVar28 + 0x30) & 8) != 0) goto LAB_146d7360a;
          fVar32 = fVar65 * param_6;
          fVar57 = local_280 * param_6;
          local_248._4_12_ = auVar8._4_12_;
          local_248._0_4_ = fVar45;
          fVar45 = fVar45 * param_6;
        }
        else {
          local_280 = 0.0;
          fVar45 = 0.0;
          if ((*(byte *)(lVar28 + 0x30) & 8) == 0) goto LAB_146d73d02;
LAB_146d7360a:
          local_248._0_4_ = fVar45;
          dVar40 = (double)*(float *)(lVar28 + 0x44);
          dVar50 = (double)*(float *)(lVar28 + 0x40);
          dVar43 = (double)*(float *)(lVar28 + 0x3c);
          local_178 = auVar26._0_8_;
          dStack_170 = auVar18._8_8_;
          dVar51 = dVar50 * dVar22 - local_178 * dVar43;
          dVar54 = dVar40 * dVar23 - dStack_170 * dVar50;
          dVar37 = dVar43 * dVar14 - dVar40 * dVar22;
          dVar54 = dVar54 + dVar54;
          dVar37 = dVar37 + dVar37;
          dVar51 = dVar51 + dVar51;
          dVar38 = (double)*(float *)(lVar28 + 0x50);
          dVar53 = (double)*(float *)(lVar28 + 0x4c);
          dVar44 = (double)*(float *)(lVar28 + 0x48);
          dVar49 = dVar53 * dVar24 - local_1e8 * dVar44;
          dVar15 = dVar38 * dVar25 - dStack_1e0 * dVar53;
          dVar52 = dVar44 * dVar12 - dVar38 * dVar24;
          dVar15 = dVar15 + dVar15;
          dVar52 = dVar52 + dVar52;
          dVar49 = dVar49 + dVar49;
          dStack_200 = auVar20._8_8_;
          fVar32 = (float)((*(double *)(lVar9 + 0x1a0) +
                           dVar51 * dVar13 + dVar40 + (dVar37 * dVar22 - dVar54 * local_178)) -
                          dVar16) -
                   (float)((*(double *)(lVar9 + 0x200) +
                           dVar49 * dVar6 + dVar38 + (dVar52 * dVar24 - dVar15 * local_1e8)) -
                          dVar39);
          fVar57 = (float)((*(double *)(lVar9 + 0x198) +
                           (dVar14 * dVar54 - dVar22 * dVar51) + dVar7 * dVar37 + dVar50) - dVar59)
                   - (float)((*(double *)(lVar9 + 0x1f8) +
                             (dVar12 * dVar15 - dVar24 * dVar49) + dStack_1d0 * dVar52 + dVar53) -
                            dStack_200);
          fVar45 = (float)((*(double *)(lVar9 + 400) +
                           (dVar51 * dVar23 - dVar37 * dStack_170) + dVar13 * dVar54 + dVar43) -
                          dVar58) -
                   (float)((*(double *)(lVar9 + 0x1f0) +
                           (dVar49 * dVar25 - dVar52 * dStack_1e0) + dVar6 * dVar15 + dVar44) -
                          dVar36);
        }
        fVar57 = fVar57 + (float)(dVar59 - dVar21);
        fVar45 = fVar45 + (float)(dVar58 - dVar36);
        fVar32 = fVar32 + (float)(dVar16 - dVar39);
        uVar46 = 0;
        fVar1 = *(float *)(lVar28 + 0x34);
        if (0.0 < fVar34) {
          fVar65 = fVar65 * fVar42 + (float)local_248._0_4_ * fVar33 + local_280 * fVar61;
          uVar46 = -(uint)(fVar65 < -*(float *)(lVar9 + 0x348) * param_6) & (uint)(-fVar34 * fVar65)
          ;
        }
        lVar28 = ((longlong)*(int *)(param_2 + 4) + (longlong)param_1) * 0x300 + *param_5;
        uVar2 = *(undefined4 *)(lVar9 + 0x34c);
        uVar3 = *(undefined4 *)(lVar9 + 0x350);
        uVar4 = *(undefined4 *)(lVar9 + 0x354);
        uVar5 = *(undefined4 *)(lVar9 + 0x358);
        *(undefined4 *)(lVar28 + 0x10 + lVar29 * 4) = 0xffffffff;
        *(float *)(lVar28 + 0x20 + lVar29 * 4) = fVar60;
        *(float *)(lVar28 + 0x30 + lVar29 * 4) = fVar55;
        *(float *)(lVar28 + 0x40 + lVar29 * 4) = fVar41;
        *(float *)(lVar28 + 0x50 + lVar29 * 4) = fVar35;
        *(float *)(lVar28 + 0x60 + lVar29 * 4) = fVar62;
        *(float *)(lVar28 + 0x70 + lVar29 * 4) = fVar56;
        *(float *)(lVar28 + 0x80 + lVar29 * 4) = fVar33;
        *(float *)(lVar28 + 0x90 + lVar29 * 4) = fVar61;
        *(float *)(lVar28 + 0xa0 + lVar29 * 4) = fVar42;
        *(float *)(lVar28 + 0x140 + lVar29 * 4) = fVar63;
        *(float *)(lVar28 + 0x150 + lVar29 * 4) = local_238;
        *(float *)(lVar28 + 0x160 + lVar29 * 4) = fVar64;
        *(float *)(lVar28 + 0x170 + lVar29 * 4) = fVar31;
        *(float *)(lVar28 + 0x180 + lVar29 * 4) = fVar47;
        *(float *)(lVar28 + 400 + lVar29 * 4) = fVar48;
        *(float *)(lVar28 + 0xb0 + lVar29 * 4) =
             ((float)(dVar16 - dVar39) * fVar42 +
             (float)(dVar58 - dVar36) * fVar33 + (float)(dVar59 - dVar21) * fVar61) - fVar1;
        *(float *)(lVar28 + 0x1a0 + lVar29 * 4) =
             fVar32 * fVar64 + fVar45 * fVar63 + local_238 * fVar57;
        *(float *)(lVar28 + 0x1b0 + lVar29 * 4) =
             fVar32 * fVar48 + fVar45 * fVar31 + fVar57 * fVar47;
        *(uint *)(lVar28 + 0x2d0 + lVar29 * 4) = uVar46;
        FUN_146d73ee8(param_2,param_1,(int)lVar29 + 4,param_5,lVar10,lVar11,uVar2,uVar4,uVar3,uVar5)
        ;
      }
    }
    lVar29 = lVar29 + 1;
    if (lVar29 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 146d73ee8 FUN_146d73ee8 body=2769 status=ok
// SIG undefined FUN_146d73ee8(void)

void FUN_146d73ee8(longlong param_1,int param_2,int param_3,longlong *param_4,longlong param_5,
                  longlong param_6,float param_7,float param_8,float param_9,float param_10)

{
  longlong lVar1;
  longlong lVar2;
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
  float fVar21;
  float fVar22;
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
  float fVar33;
  float fVar34;
  
  lVar1 = ((longlong)param_2 + (longlong)*(int *)(param_1 + 4)) * 0x300 + *param_4;
  lVar2 = (longlong)param_3;
  if (*(int *)(lVar1 + lVar2 * 4) != 0) {
    *(undefined4 *)(param_1 + 0x60 + lVar2 * 4) = 0;
    *(undefined4 *)(param_1 + 0x70 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0xd0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0xe0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0xf0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x200 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x210 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x220 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x230 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x240 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x250 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x100 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x110 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x120 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x260 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x270 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x280 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x290 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x2a0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x2b0 + lVar2 * 4) = 0;
    fVar7 = *(float *)(lVar1 + 0x90 + lVar2 * 4);
    fVar8 = *(float *)(lVar1 + 0x70 + lVar2 * 4);
    fVar9 = *(float *)(lVar1 + 0x80 + lVar2 * 4);
    fVar14 = *(float *)(lVar1 + 0x150 + lVar2 * 4);
    fVar17 = *(float *)(lVar1 + 0x140 + lVar2 * 4);
    fVar18 = *(float *)(lVar1 + 0x130 + lVar2 * 4);
    fVar22 = *(float *)(lVar1 + 0x180 + lVar2 * 4);
    param_7 = param_7 * *(float *)(param_5 + 0x134);
    param_9 = param_9 * *(float *)(param_6 + 0x134);
    fVar24 = *(float *)(lVar1 + 0x170 + lVar2 * 4);
    fVar19 = *(float *)(lVar1 + 0x160 + lVar2 * 4);
    fVar20 = 0.0;
    fVar25 = 0.0;
    fVar15 = 0.0;
    if (0.0 < param_7) {
      fVar3 = *(float *)(param_5 + 0x68) * param_8;
      fVar4 = *(float *)(param_5 + 100) * param_8;
      fVar5 = *(float *)(param_5 + 0x60) * param_8;
      fVar15 = *(float *)(lVar1 + 0x30 + lVar2 * 4);
      fVar20 = *(float *)(lVar1 + 0x10 + lVar2 * 4);
      fVar25 = *(float *)(lVar1 + 0x20 + lVar2 * 4);
      fVar26 = fVar20 * fVar9 - fVar8 * fVar25;
      fVar10 = fVar15 * fVar8 - fVar7 * fVar20;
      fVar11 = fVar25 * fVar7 - fVar9 * fVar15;
      fVar12 = fVar20 * fVar17 - fVar18 * fVar25;
      fVar13 = fVar15 * fVar18 - fVar14 * fVar20;
      fVar6 = fVar25 * fVar14 - fVar17 * fVar15;
      fVar28 = fVar20 * fVar24 - fVar19 * fVar25;
      fVar33 = fVar15 * fVar19 - fVar22 * fVar20;
      fVar30 = fVar25 * fVar22 - fVar24 * fVar15;
      fVar15 = fVar3 * fVar26 + fVar5 * fVar11 + fVar4 * fVar10;
      fVar31 = *(float *)(param_5 + 0x54) * param_8;
      fVar25 = *(float *)(param_5 + 0x50) * param_8;
      fVar23 = *(float *)(param_5 + 0x58) * param_8;
      fVar20 = *(float *)(param_5 + 0x48) * param_8;
      fVar29 = *(float *)(param_5 + 0x44) * param_8;
      param_8 = param_8 * *(float *)(param_5 + 0x40);
      fVar34 = fVar23 * fVar26 + fVar25 * fVar11 + fVar31 * fVar10;
      fVar32 = fVar20 * fVar26 + param_8 * fVar11 + fVar29 * fVar10;
      fVar27 = fVar3 * fVar12 + fVar5 * fVar6 + fVar4 * fVar13;
      fVar16 = fVar23 * fVar12 + fVar25 * fVar6 + fVar31 * fVar13;
      fVar21 = fVar20 * fVar12 + param_8 * fVar6 + fVar29 * fVar13;
      fVar3 = fVar3 * fVar28 + fVar5 * fVar30 + fVar4 * fVar33;
      fVar25 = fVar23 * fVar28 + fVar25 * fVar30 + fVar31 * fVar33;
      fVar20 = fVar20 * fVar28 + param_8 * fVar30 + fVar29 * fVar33;
      *(float *)(param_1 + 0x60 + lVar2 * 4) = param_7;
      *(float *)(lVar1 + 0xd0 + lVar2 * 4) = fVar32;
      *(float *)(lVar1 + 0xe0 + lVar2 * 4) = fVar34;
      *(float *)(lVar1 + 0xf0 + lVar2 * 4) = fVar15;
      *(float *)(lVar1 + 0x200 + lVar2 * 4) = fVar21;
      *(float *)(lVar1 + 0x210 + lVar2 * 4) = fVar16;
      *(float *)(lVar1 + 0x220 + lVar2 * 4) = fVar27;
      *(float *)(lVar1 + 0x230 + lVar2 * 4) = fVar20;
      *(float *)(lVar1 + 0x240 + lVar2 * 4) = fVar25;
      *(float *)(lVar1 + 0x250 + lVar2 * 4) = fVar3;
      fVar15 = fVar15 * fVar26 + fVar32 * fVar11 + fVar34 * fVar10 + param_7;
      fVar20 = fVar27 * fVar12 + fVar21 * fVar6 + fVar16 * fVar13 + param_7;
      fVar25 = fVar3 * fVar28 + fVar20 * fVar30 + fVar25 * fVar33 + param_7;
    }
    if (0.0 < param_9) {
      fVar3 = *(float *)(lVar1 + 0x60 + lVar2 * 4);
      fVar4 = *(float *)(lVar1 + 0x40 + lVar2 * 4);
      fVar5 = *(float *)(lVar1 + 0x50 + lVar2 * 4);
      fVar6 = fVar4 * fVar9 - fVar8 * fVar5;
      fVar10 = fVar3 * fVar8 - fVar7 * fVar4;
      fVar7 = fVar5 * fVar7 - fVar9 * fVar3;
      fVar11 = fVar4 * fVar17 - fVar18 * fVar5;
      fVar12 = fVar3 * fVar18 - fVar14 * fVar4;
      fVar18 = *(float *)(param_6 + 0x68) * param_10;
      fVar13 = fVar5 * fVar14 - fVar17 * fVar3;
      fVar16 = fVar4 * fVar24 - fVar19 * fVar5;
      fVar28 = *(float *)(param_6 + 100) * param_10;
      fVar19 = fVar3 * fVar19 - fVar22 * fVar4;
      fVar4 = *(float *)(param_6 + 0x60) * param_10;
      fVar26 = fVar5 * fVar22 - fVar24 * fVar3;
      fVar21 = fVar18 * fVar6 + fVar4 * fVar7 + fVar28 * fVar10;
      fVar27 = *(float *)(param_6 + 0x54) * param_10;
      fVar17 = *(float *)(param_6 + 0x50) * param_10;
      fVar23 = *(float *)(param_6 + 0x58) * param_10;
      fVar8 = fVar23 * fVar6 + fVar17 * fVar7 + fVar27 * fVar10;
      fVar9 = *(float *)(param_6 + 0x48) * param_10;
      fVar14 = *(float *)(param_6 + 0x44) * param_10;
      param_10 = param_10 * *(float *)(param_6 + 0x40);
      fVar22 = fVar9 * fVar6 + param_10 * fVar7 + fVar14 * fVar10;
      fVar3 = fVar18 * fVar11 + fVar4 * fVar13 + fVar28 * fVar12;
      fVar24 = fVar23 * fVar11 + fVar17 * fVar13 + fVar27 * fVar12;
      fVar5 = fVar9 * fVar11 + param_10 * fVar13 + fVar14 * fVar12;
      fVar18 = fVar18 * fVar16 + fVar4 * fVar26 + fVar28 * fVar19;
      fVar17 = fVar23 * fVar16 + fVar17 * fVar26 + fVar27 * fVar19;
      fVar9 = fVar9 * fVar16 + param_10 * fVar26 + fVar14 * fVar19;
      *(float *)(param_1 + 0x70 + lVar2 * 4) = param_9;
      *(float *)(lVar1 + 0x100 + lVar2 * 4) = fVar22;
      *(float *)(lVar1 + 0x110 + lVar2 * 4) = fVar8;
      *(float *)(lVar1 + 0x120 + lVar2 * 4) = fVar21;
      fVar15 = fVar15 + fVar21 * fVar6 + fVar22 * fVar7 + fVar8 * fVar10 + param_9;
      *(float *)(lVar1 + 0x260 + lVar2 * 4) = fVar5;
      *(float *)(lVar1 + 0x270 + lVar2 * 4) = fVar24;
      *(float *)(lVar1 + 0x280 + lVar2 * 4) = fVar3;
      fVar20 = fVar20 + fVar3 * fVar11 + fVar5 * fVar13 + fVar24 * fVar12 + param_9;
      *(float *)(lVar1 + 0x290 + lVar2 * 4) = fVar9;
      *(float *)(lVar1 + 0x2a0 + lVar2 * 4) = fVar17;
      *(float *)(lVar1 + 0x2b0 + lVar2 * 4) = fVar18;
      fVar25 = fVar25 + fVar18 * fVar16 + fVar9 * fVar26 + fVar17 * fVar19 + param_9;
    }
    *(uint *)(lVar1 + 0xc0 + lVar2 * 4) = -(uint)(1e-08 < fVar15) & (uint)(1.0 / fVar15);
    *(uint *)(lVar1 + 0x1e0 + lVar2 * 4) = -(uint)(1e-08 < fVar20) & (uint)(1.0 / fVar20);
    *(uint *)(lVar1 + 0x1f0 + lVar2 * 4) = -(uint)(1e-08 < fVar25) & (uint)(1.0 / fVar25);
  }
  return;
}



// FUNCTION 146d749ba FUN_146d749ba body=965 status=ok
// SIG undefined FUN_146d749ba(void)

void FUN_146d749ba(longlong param_1,int param_2,int param_3,longlong *param_4,longlong param_5,
                  longlong param_6,float param_7,float param_8,float param_9,float param_10)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = ((longlong)param_2 + (longlong)*(int *)(param_1 + 4)) * 0x300 + *param_4;
  lVar2 = (longlong)param_3;
  if (*(int *)(lVar1 + lVar2 * 4) != 0) {
    *(undefined4 *)(param_1 + 0x60 + lVar2 * 4) = 0;
    *(undefined4 *)(param_1 + 0x70 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0xd0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0xe0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0xf0 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x100 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x110 + lVar2 * 4) = 0;
    *(undefined4 *)(lVar1 + 0x120 + lVar2 * 4) = 0;
    fVar4 = *(float *)(lVar1 + 0x90 + lVar2 * 4);
    fVar5 = *(float *)(lVar1 + 0x70 + lVar2 * 4);
    fVar6 = *(float *)(lVar1 + 0x80 + lVar2 * 4);
    param_7 = param_7 * *(float *)(param_5 + 0x134);
    param_9 = param_9 * *(float *)(param_6 + 0x134);
    fVar3 = 0.0;
    if (0.0 < param_7) {
      fVar3 = *(float *)(lVar1 + 0x30 + lVar2 * 4);
      fVar7 = *(float *)(lVar1 + 0x10 + lVar2 * 4);
      fVar8 = *(float *)(lVar1 + 0x20 + lVar2 * 4);
      fVar9 = fVar7 * fVar6 - fVar5 * fVar8;
      fVar10 = fVar3 * fVar5 - fVar4 * fVar7;
      fVar11 = fVar8 * fVar4 - fVar6 * fVar3;
      fVar3 = *(float *)(param_5 + 0x68) * param_8 * fVar9 +
              *(float *)(param_5 + 0x60) * param_8 * fVar11 +
              *(float *)(param_5 + 100) * param_8 * fVar10;
      fVar8 = *(float *)(param_5 + 0x58) * param_8 * fVar9 +
              *(float *)(param_5 + 0x50) * param_8 * fVar11 +
              *(float *)(param_5 + 0x54) * param_8 * fVar10;
      fVar7 = *(float *)(param_5 + 0x48) * param_8 * fVar9 +
              param_8 * *(float *)(param_5 + 0x40) * fVar11 +
              *(float *)(param_5 + 0x44) * param_8 * fVar10;
      *(float *)(param_1 + 0x60 + lVar2 * 4) = param_7;
      *(float *)(lVar1 + 0xd0 + lVar2 * 4) = fVar7;
      *(float *)(lVar1 + 0xe0 + lVar2 * 4) = fVar8;
      *(float *)(lVar1 + 0xf0 + lVar2 * 4) = fVar3;
      fVar3 = fVar3 * fVar9 + fVar7 * fVar11 + fVar8 * fVar10 + param_7;
    }
    if (0.0 < param_9) {
      fVar7 = *(float *)(lVar1 + 0x60 + lVar2 * 4);
      fVar8 = *(float *)(lVar1 + 0x40 + lVar2 * 4);
      fVar9 = *(float *)(lVar1 + 0x50 + lVar2 * 4);
      fVar10 = fVar8 * fVar6 - fVar5 * fVar9;
      fVar8 = fVar7 * fVar5 - fVar4 * fVar8;
      fVar7 = fVar9 * fVar4 - fVar6 * fVar7;
      fVar6 = *(float *)(param_6 + 0x68) * param_10 * fVar10 +
              *(float *)(param_6 + 0x60) * param_10 * fVar7 +
              *(float *)(param_6 + 100) * param_10 * fVar8;
      fVar5 = *(float *)(param_6 + 0x58) * param_10 * fVar10 +
              *(float *)(param_6 + 0x50) * param_10 * fVar7 +
              *(float *)(param_6 + 0x54) * param_10 * fVar8;
      fVar4 = *(float *)(param_6 + 0x48) * param_10 * fVar10 +
              param_10 * *(float *)(param_6 + 0x40) * fVar7 +
              *(float *)(param_6 + 0x44) * param_10 * fVar8;
      *(float *)(param_1 + 0x70 + lVar2 * 4) = param_9;
      *(float *)(lVar1 + 0x100 + lVar2 * 4) = fVar4;
      *(float *)(lVar1 + 0x110 + lVar2 * 4) = fVar5;
      *(float *)(lVar1 + 0x120 + lVar2 * 4) = fVar6;
      fVar3 = fVar3 + fVar6 * fVar10 + fVar4 * fVar7 + fVar5 * fVar8 + param_9;
    }
    *(uint *)(lVar1 + 0xc0 + lVar2 * 4) = -(uint)(1e-08 < fVar3) & (uint)(1.0 / fVar3);
  }
  return;
}



// FUNCTION 146d74d7f FUN_146d74d7f body=188 status=ok
// SIG undefined FUN_146d74d7f(void)

void FUN_146d74d7f(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = *(undefined4 **)(param_1 + lVar3 * 2);
    puVar2 = *(undefined4 **)(param_2 + lVar3 * 2);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(param_3 + lVar3) = *puVar1;
      *(undefined4 *)(param_3 + 0x10 + lVar3) = puVar1[1];
      *(undefined4 *)(param_3 + 0x20 + lVar3) = puVar1[2];
      *(undefined4 *)(param_4 + lVar3) = puVar1[4];
      *(undefined4 *)(param_4 + 0x10 + lVar3) = puVar1[5];
      *(undefined4 *)(param_4 + 0x20 + lVar3) = puVar1[6];
    }
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_5 + lVar3) = *puVar2;
      *(undefined4 *)(param_5 + 0x10 + lVar3) = puVar2[1];
      *(undefined4 *)(param_5 + 0x20 + lVar3) = puVar2[2];
      *(undefined4 *)(param_6 + lVar3) = puVar2[4];
      *(undefined4 *)(param_6 + 0x10 + lVar3) = puVar2[5];
      *(undefined4 *)(param_6 + 0x20 + lVar3) = puVar2[6];
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  return;
}



// FUNCTION 146d74e3b FUN_146d74e3b body=188 status=ok
// SIG undefined FUN_146d74e3b(void)

void FUN_146d74e3b(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    puVar3 = *(undefined4 **)(param_5 + lVar5 * 2);
    puVar4 = *(undefined4 **)(param_6 + lVar5 * 2);
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_1 + 0x10 + lVar5);
      *puVar3 = *(undefined4 *)(param_1 + lVar5);
      puVar3[1] = uVar2;
      puVar3[2] = uVar1;
      uVar1 = *(undefined4 *)(param_2 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_2 + 0x10 + lVar5);
      puVar3[4] = *(undefined4 *)(param_2 + lVar5);
      puVar3[5] = uVar2;
      puVar3[6] = uVar1;
    }
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_3 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_3 + 0x10 + lVar5);
      *puVar4 = *(undefined4 *)(param_3 + lVar5);
      puVar4[1] = uVar2;
      puVar4[2] = uVar1;
      uVar1 = *(undefined4 *)(param_4 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_4 + 0x10 + lVar5);
      puVar4[4] = *(undefined4 *)(param_4 + lVar5);
      puVar4[5] = uVar2;
      puVar4[6] = uVar1;
    }
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x10);
  return;
}



// FUNCTION 146d74ef7 FUN_146d74ef7 body=190 status=ok
// SIG undefined FUN_146d74ef7(void)

void FUN_146d74ef7(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + lVar3 * 2);
    lVar2 = *(longlong *)(param_2 + lVar3 * 2);
    if (lVar1 != 0) {
      *(undefined4 *)(param_3 + lVar3) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)(param_3 + 0x10 + lVar3) = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(param_3 + 0x20 + lVar3) = *(undefined4 *)(lVar1 + 0x28);
      *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(lVar1 + 0x30);
      *(undefined4 *)(param_4 + 0x10 + lVar3) = *(undefined4 *)(lVar1 + 0x34);
      *(undefined4 *)(param_4 + 0x20 + lVar3) = *(undefined4 *)(lVar1 + 0x38);
    }
    if (lVar2 != 0) {
      *(undefined4 *)(param_5 + lVar3) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(param_5 + 0x10 + lVar3) = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(param_5 + 0x20 + lVar3) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined4 *)(param_6 + lVar3) = *(undefined4 *)(lVar2 + 0x30);
      *(undefined4 *)(param_6 + 0x10 + lVar3) = *(undefined4 *)(lVar2 + 0x34);
      *(undefined4 *)(param_6 + 0x20 + lVar3) = *(undefined4 *)(lVar2 + 0x38);
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  return;
}



// FUNCTION 146d74fb5 FUN_146d74fb5 body=189 status=ok
// SIG undefined FUN_146d74fb5(void)

void FUN_146d74fb5(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar3 = *(longlong *)(param_5 + lVar5 * 2);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_6 + lVar5 * 2);
      uVar1 = *(undefined4 *)(param_1 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_1 + 0x10 + lVar5);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + lVar5);
      *(undefined4 *)(lVar3 + 0x24) = uVar2;
      *(undefined4 *)(lVar3 + 0x28) = uVar1;
      uVar1 = *(undefined4 *)(param_2 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_2 + 0x10 + lVar5);
      *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_2 + lVar5);
      *(undefined4 *)(lVar3 + 0x34) = uVar2;
      *(undefined4 *)(lVar3 + 0x38) = uVar1;
      uVar1 = *(undefined4 *)(param_3 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_3 + 0x10 + lVar5);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + lVar5);
      *(undefined4 *)(lVar4 + 0x24) = uVar2;
      *(undefined4 *)(lVar4 + 0x28) = uVar1;
      uVar1 = *(undefined4 *)(param_4 + 0x20 + lVar5);
      uVar2 = *(undefined4 *)(param_4 + 0x10 + lVar5);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(param_4 + lVar5);
      *(undefined4 *)(lVar4 + 0x34) = uVar2;
      *(undefined4 *)(lVar4 + 0x38) = uVar1;
    }
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x10);
  return;
}



// FUNCTION 146d75072 FUN_146d75072 body=1876 status=ok
// SIG undefined FUN_146d75072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d75072(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 (*param_5) [16],float *param_6)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
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
  longlong lVar45;
  longlong lVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar63 [16];
  float fVar67;
  uint uVar68;
  float fVar70;
  uint uVar71;
  float fVar72;
  uint uVar73;
  float fVar74;
  uint uVar75;
  undefined1 auVar69 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [16];
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  float *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
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
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_280 = &local_198;
  local_288 = &local_168;
  FUN_146d74ef7(param_3,param_4,&local_108,&local_138);
  if (0 < *param_1) {
    local_278 = local_168;
    uStack_270 = uStack_160;
    local_268 = local_158;
    uStack_260 = uStack_150;
    lVar45 = 0;
    do {
      fStack_1fc = fStack_fc;
      fStack_200 = fStack_100;
      fStack_204 = fStack_104;
      local_208 = local_108;
      fStack_22c = fStack_13c;
      fStack_230 = fStack_140;
      fStack_234 = fStack_144;
      local_238 = local_148;
      fStack_1bc = fStack_10c;
      fStack_1c0 = fStack_110;
      fStack_1c4 = fStack_114;
      local_1c8 = local_118;
      fStack_23c = fStack_dc;
      fStack_240 = fStack_e0;
      fStack_244 = fStack_e4;
      local_248 = local_e8;
      fStack_1cc = fStack_11c;
      fStack_1d0 = fStack_120;
      fStack_1d4 = fStack_124;
      local_1d8 = local_128;
      fStack_1dc = fStack_12c;
      fStack_1e0 = fStack_130;
      fStack_1e4 = fStack_134;
      local_1e8 = local_138;
      fStack_1ec = fStack_ec;
      fStack_1f0 = fStack_f0;
      fStack_1f4 = fStack_f4;
      local_1f8 = local_f8;
      fStack_1ac = fStack_18c;
      fStack_1b0 = fStack_190;
      fStack_1b4 = fStack_194;
      local_1b8 = local_198;
      fStack_19c = fStack_17c;
      fStack_1a0 = fStack_180;
      fStack_1a4 = fStack_184;
      local_1a8 = local_188;
      fStack_21c = fStack_16c;
      fStack_220 = fStack_170;
      fStack_224 = fStack_174;
      local_228 = local_178;
      lVar20 = *param_2;
      lVar46 = (param_1[1] + lVar45) * 0x300;
      pfVar2 = (float *)(lVar20 + 0x10 + lVar46);
      pfVar3 = (float *)(lVar20 + 0x20 + lVar46);
      pfVar4 = (float *)(lVar20 + 0x30 + lVar46);
      pfVar5 = (float *)(lVar20 + 0x40 + lVar46);
      pfVar6 = (float *)(lVar20 + 0x50 + lVar46);
      pfVar7 = (float *)(lVar20 + 0x60 + lVar46);
      fVar62 = ((local_1d8 * *pfVar4 - local_1c8 * *pfVar3) + local_208) -
               ((local_1a8 * *pfVar7 - local_228 * *pfVar6) + (float)local_278);
      fVar64 = ((fStack_1d4 * pfVar4[1] - fStack_1c4 * pfVar3[1]) + fStack_204) -
               ((fStack_1a4 * pfVar7[1] - fStack_224 * pfVar6[1]) + local_278._4_4_);
      fVar65 = ((fStack_1d0 * pfVar4[2] - fStack_1c0 * pfVar3[2]) + fStack_200) -
               ((fStack_1a0 * pfVar7[2] - fStack_220 * pfVar6[2]) + (float)uStack_270);
      fVar66 = ((fStack_1cc * pfVar4[3] - fStack_1bc * pfVar3[3]) + fStack_1fc) -
               ((fStack_19c * pfVar7[3] - fStack_21c * pfVar6[3]) + uStack_270._4_4_);
      fVar90 = ((local_1c8 * *pfVar2 - *pfVar4 * local_1e8) + local_1f8) -
               ((local_228 * *pfVar5 - *pfVar7 * local_1b8) + (float)local_268);
      fVar92 = ((fStack_1c4 * pfVar2[1] - pfVar4[1] * fStack_1e4) + fStack_1f4) -
               ((fStack_224 * pfVar5[1] - pfVar7[1] * fStack_1b4) + local_268._4_4_);
      fVar93 = ((fStack_1c0 * pfVar2[2] - pfVar4[2] * fStack_1e0) + fStack_1f0) -
               ((fStack_220 * pfVar5[2] - pfVar7[2] * fStack_1b0) + (float)uStack_260);
      fVar94 = ((fStack_1bc * pfVar2[3] - pfVar4[3] * fStack_1dc) + fStack_1ec) -
               ((fStack_21c * pfVar5[3] - pfVar7[3] * fStack_1ac) + uStack_260._4_4_);
      pfVar4 = (float *)(lVar20 + 0x70 + lVar46);
      fVar21 = *pfVar4;
      fVar22 = pfVar4[1];
      fVar23 = pfVar4[2];
      fVar24 = pfVar4[3];
      pfVar4 = (float *)(lVar20 + 0x80 + lVar46);
      local_218 = *pfVar4;
      fStack_214 = pfVar4[1];
      fStack_210 = pfVar4[2];
      fStack_20c = pfVar4[3];
      fVar67 = ((*pfVar3 * local_1e8 - *pfVar2 * local_1d8) + local_248) -
               ((*pfVar6 * local_1b8 - *pfVar5 * local_1a8) + local_238);
      fVar70 = ((pfVar3[1] * fStack_1e4 - pfVar2[1] * fStack_1d4) + fStack_244) -
               ((pfVar6[1] * fStack_1b4 - pfVar5[1] * fStack_1a4) + fStack_234);
      fVar72 = ((pfVar3[2] * fStack_1e0 - pfVar2[2] * fStack_1d0) + fStack_240) -
               ((pfVar6[2] * fStack_1b0 - pfVar5[2] * fStack_1a0) + fStack_230);
      fVar74 = ((pfVar3[3] * fStack_1dc - pfVar2[3] * fStack_1cc) + fStack_23c) -
               ((pfVar6[3] * fStack_1ac - pfVar5[3] * fStack_19c) + fStack_22c);
      pfVar2 = (float *)(lVar20 + 0x90 + lVar46);
      fVar25 = *pfVar2;
      fVar26 = pfVar2[1];
      fVar27 = pfVar2[2];
      fVar28 = pfVar2[3];
      fVar49 = *param_6 * (float)param_1[0x14];
      fVar50 = param_6[1] * (float)param_1[0x15];
      fVar51 = param_6[2] * (float)param_1[0x16];
      fVar52 = param_6[3] * (float)param_1[0x17];
      pfVar2 = (float *)(lVar20 + 0xc0 + lVar46);
      pfVar3 = (float *)(lVar20 + 0x2c0 + lVar46);
      auVar47 = *(undefined1 (*) [16])(lVar20 + 0xb0 + lVar46);
      auVar60._0_4_ =
           0.0 - (float)param_1[0x14] * *pfVar2 *
                 ((fVar67 * fVar25 + local_218 * fVar90 + fVar21 * fVar62) - *pfVar3);
      auVar60._4_4_ =
           0.0 - (float)param_1[0x15] * pfVar2[1] *
                 ((fVar70 * fVar26 + fStack_214 * fVar92 + fVar22 * fVar64) - pfVar3[1]);
      auVar60._8_4_ =
           0.0 - (float)param_1[0x16] * pfVar2[2] *
                 ((fVar72 * fVar27 + fStack_210 * fVar93 + fVar23 * fVar65) - pfVar3[2]);
      auVar60._12_4_ =
           0.0 - (float)param_1[0x17] * pfVar2[3] *
                 ((fVar74 * fVar28 + fStack_20c * fVar94 + fVar24 * fVar66) - pfVar3[3]);
      auVar88 = divps(auVar47,*param_5);
      auVar54._0_4_ = 0.0 - auVar88._0_4_;
      auVar54._4_4_ = 0.0 - auVar88._4_4_;
      auVar54._8_4_ = 0.0 - auVar88._8_4_;
      auVar54._12_4_ = 0.0 - auVar88._12_4_;
      auVar55 = minps(auVar54,ZEXT816(0));
      pfVar2 = (float *)(lVar20 + 0x2d0 + lVar46);
      fVar53 = *pfVar2;
      fVar57 = pfVar2[1];
      fVar58 = pfVar2[2];
      fVar59 = pfVar2[3];
      auVar61._4_4_ = -(uint)(auVar60._4_4_ + fVar57 < auVar55._4_4_);
      auVar61._0_4_ = -(uint)(auVar60._0_4_ + fVar53 < auVar55._0_4_);
      auVar61._8_4_ = -(uint)(auVar60._8_4_ + fVar58 < auVar55._8_4_);
      auVar61._12_4_ = -(uint)(auVar60._12_4_ + fVar59 < auVar55._12_4_);
      auVar56._0_4_ = auVar55._0_4_ - fVar53;
      auVar56._4_4_ = auVar55._4_4_ - fVar57;
      auVar56._8_4_ = auVar55._8_4_ - fVar58;
      auVar56._12_4_ = auVar55._12_4_ - fVar59;
      auVar61 = blendvps(auVar60,auVar56,auVar61);
      pfVar2 = (float *)(lVar20 + 0xa0 + lVar46);
      pfVar3 = (float *)(lVar20 + 0x130 + lVar46);
      fVar76 = *pfVar3;
      fVar77 = pfVar3[1];
      fVar78 = pfVar3[2];
      fVar79 = pfVar3[3];
      pfVar3 = (float *)(lVar20 + 0x140 + lVar46);
      fVar29 = *pfVar3;
      fVar30 = pfVar3[1];
      fVar31 = pfVar3[2];
      fVar32 = pfVar3[3];
      pfVar3 = (float *)(lVar20 + 0x150 + lVar46);
      fVar33 = *pfVar3;
      fVar34 = pfVar3[1];
      fVar35 = pfVar3[2];
      fVar36 = pfVar3[3];
      pfVar3 = (float *)(lVar20 + 0x160 + lVar46);
      fVar80 = *pfVar3;
      fVar81 = pfVar3[1];
      fVar82 = pfVar3[2];
      fVar83 = pfVar3[3];
      pfVar3 = (float *)(lVar20 + 0x170 + lVar46);
      fVar37 = *pfVar3;
      fVar38 = pfVar3[1];
      fVar39 = pfVar3[2];
      fVar40 = pfVar3[3];
      pfVar3 = (float *)(lVar20 + 0x180 + lVar46);
      fVar41 = *pfVar3;
      fVar42 = pfVar3[1];
      fVar43 = pfVar3[2];
      fVar44 = pfVar3[3];
      pfVar3 = (float *)(lVar20 + 0x1e0 + lVar46);
      pfVar4 = (float *)(lVar20 + 0x1f0 + lVar46);
      puVar1 = (uint *)(lVar20 + lVar46);
      uVar84 = -(uint)(0.0 < auVar47._0_4_ || *pfVar2 < 0.0) & *puVar1;
      uVar85 = -(uint)(0.0 < auVar47._4_4_ || pfVar2[1] < 0.0) & puVar1[1];
      uVar86 = -(uint)(0.0 < auVar47._8_4_ || pfVar2[2] < 0.0) & puVar1[2];
      uVar87 = -(uint)(0.0 < auVar47._12_4_ || pfVar2[3] < 0.0) & puVar1[3];
      uVar68 = -(uint)(0.0 < (float)param_1[0x10]) & uVar84;
      uVar71 = -(uint)(0.0 < (float)param_1[0x11]) & uVar85;
      uVar73 = -(uint)(0.0 < (float)param_1[0x12]) & uVar86;
      uVar75 = -(uint)(0.0 < (float)param_1[0x13]) & uVar87;
      auVar63._0_4_ =
           (float)((uint)(0.0 - *pfVar3 * fVar49 *
                                (fVar67 * fVar33 + fVar90 * fVar29 + fVar62 * fVar76)) & uVar68);
      auVar63._4_4_ =
           (float)((uint)(0.0 - pfVar3[1] * fVar50 *
                                (fVar70 * fVar34 + fVar92 * fVar30 + fVar64 * fVar77)) & uVar71);
      auVar63._8_4_ =
           (float)((uint)(0.0 - pfVar3[2] * fVar51 *
                                (fVar72 * fVar35 + fVar93 * fVar31 + fVar65 * fVar78)) & uVar73);
      auVar63._12_4_ =
           (float)((uint)(0.0 - pfVar3[3] * fVar52 *
                                (fVar74 * fVar36 + fVar94 * fVar32 + fVar66 * fVar79)) & uVar75);
      auVar69._0_4_ =
           (float)(uVar68 & (uint)(0.0 - fVar49 * *pfVar4 *
                                         (fVar67 * fVar41 + fVar90 * fVar37 + fVar62 * fVar80)));
      auVar69._4_4_ =
           (float)(uVar71 & (uint)(0.0 - fVar50 * pfVar4[1] *
                                         (fVar70 * fVar42 + fVar92 * fVar38 + fVar64 * fVar81)));
      auVar69._8_4_ =
           (float)(uVar73 & (uint)(0.0 - fVar51 * pfVar4[2] *
                                         (fVar72 * fVar43 + fVar93 * fVar39 + fVar65 * fVar82)));
      auVar69._12_4_ =
           (float)(uVar75 & (uint)(0.0 - fVar52 * pfVar4[3] *
                                         (fVar74 * fVar44 + fVar94 * fVar40 + fVar66 * fVar83)));
      auVar89._0_4_ = (auVar88._0_4_ + auVar61._0_4_ + fVar53) * (float)param_1[0x10];
      auVar89._4_4_ = (auVar88._4_4_ + auVar61._4_4_ + fVar57) * (float)param_1[0x11];
      auVar89._8_4_ = (auVar88._8_4_ + auVar61._8_4_ + fVar58) * (float)param_1[0x12];
      auVar89._12_4_ = (auVar88._12_4_ + auVar61._12_4_ + fVar59) * (float)param_1[0x13];
      auVar88._0_4_ = auVar69._0_4_ * auVar69._0_4_;
      auVar88._4_4_ = auVar69._4_4_ * auVar69._4_4_;
      auVar88._8_4_ = auVar69._8_4_ * auVar69._8_4_;
      auVar88._12_4_ = auVar69._12_4_ * auVar69._12_4_;
      fVar62 = auVar63._0_4_ * auVar63._0_4_ + auVar88._0_4_;
      fVar64 = auVar63._4_4_ * auVar63._4_4_ + auVar88._4_4_;
      fVar65 = auVar63._8_4_ * auVar63._8_4_ + auVar88._8_4_;
      fVar66 = auVar63._12_4_ * auVar63._12_4_ + auVar88._12_4_;
      auVar47._4_4_ = fVar64;
      auVar47._0_4_ = fVar62;
      auVar47._8_4_ = fVar65;
      auVar47._12_4_ = fVar66;
      auVar47 = sqrtps(auVar88,auVar47);
      auVar55 = divps(_DAT_1499314a0,auVar47);
      auVar47 = maxps(ZEXT816(0),auVar89);
      fVar49 = auVar47._0_4_;
      fVar67 = auVar55._0_4_ * fVar49;
      fVar50 = auVar47._4_4_;
      fVar70 = auVar55._4_4_ * fVar50;
      fVar51 = auVar47._8_4_;
      fVar72 = auVar55._8_4_ * fVar51;
      fVar52 = auVar47._12_4_;
      fVar74 = auVar55._12_4_ * fVar52;
      auVar48._4_4_ = -(uint)(fVar50 * fVar50 + 1e-08 < fVar64);
      auVar48._0_4_ = -(uint)(fVar49 * fVar49 + 1e-08 < fVar62);
      auVar48._8_4_ = -(uint)(fVar51 * fVar51 + 1e-08 < fVar65);
      auVar48._12_4_ = -(uint)(fVar52 * fVar52 + 1e-08 < fVar66);
      auVar55._4_4_ = fVar70 * auVar63._4_4_;
      auVar55._0_4_ = fVar67 * auVar63._0_4_;
      auVar55._8_4_ = fVar72 * auVar63._8_4_;
      auVar55._12_4_ = fVar74 * auVar63._12_4_;
      auVar47 = blendvps(auVar63,auVar55,auVar48);
      auVar91._0_4_ = fVar67 * auVar69._0_4_;
      auVar91._4_4_ = fVar70 * auVar69._4_4_;
      auVar91._8_4_ = fVar72 * auVar69._8_4_;
      auVar91._12_4_ = fVar74 * auVar69._12_4_;
      auVar55 = blendvps(auVar69,auVar91,auVar48);
      fVar49 = (float)((uint)auVar61._0_4_ & uVar84);
      fVar50 = (float)((uint)auVar61._4_4_ & uVar85);
      fVar51 = (float)((uint)auVar61._8_4_ & uVar86);
      fVar52 = (float)((uint)auVar61._12_4_ & uVar87);
      fVar62 = (float)(auVar47._0_4_ & uVar84);
      fVar64 = (float)(auVar47._4_4_ & uVar85);
      fVar65 = (float)(auVar47._8_4_ & uVar86);
      fVar66 = (float)(auVar47._12_4_ & uVar87);
      fVar67 = (float)(auVar55._0_4_ & uVar84);
      fVar70 = (float)(auVar55._4_4_ & uVar85);
      fVar72 = (float)(auVar55._8_4_ & uVar86);
      fVar74 = (float)(auVar55._12_4_ & uVar87);
      pfVar2 = (float *)(lVar20 + 0x2d0 + lVar46);
      *pfVar2 = fVar53 + fVar49;
      pfVar2[1] = fVar57 + fVar50;
      pfVar2[2] = fVar58 + fVar51;
      pfVar2[3] = fVar59 + fVar52;
      pfVar2 = (float *)(lVar20 + 0x2e0 + lVar46);
      fVar53 = *pfVar2;
      fVar57 = pfVar2[1];
      fVar58 = pfVar2[2];
      fVar59 = pfVar2[3];
      pfVar2 = (float *)(lVar20 + 0x2e0 + lVar46);
      *pfVar2 = fVar53 + fVar62;
      pfVar2[1] = fVar57 + fVar64;
      pfVar2[2] = fVar58 + fVar65;
      pfVar2[3] = fVar59 + fVar66;
      pfVar2 = (float *)(lVar20 + 0x2f0 + lVar46);
      *pfVar2 = fVar53 + fVar62 + fVar67;
      pfVar2[1] = fVar57 + fVar64 + fVar70;
      pfVar2[2] = fVar58 + fVar65 + fVar72;
      pfVar2[3] = fVar59 + fVar66 + fVar74;
      fVar80 = fVar21 * fVar49 + fVar76 * fVar62 + fVar80 * fVar67;
      fVar81 = fVar22 * fVar50 + fVar77 * fVar64 + fVar81 * fVar70;
      fVar82 = fVar23 * fVar51 + fVar78 * fVar65 + fVar82 * fVar72;
      fVar83 = fVar24 * fVar52 + fVar79 * fVar66 + fVar83 * fVar74;
      fVar76 = local_218 * fVar49 + fVar29 * fVar62 + fVar37 * fVar67;
      fVar77 = fStack_214 * fVar50 + fVar30 * fVar64 + fVar38 * fVar70;
      fVar78 = fStack_210 * fVar51 + fVar31 * fVar65 + fVar39 * fVar72;
      fVar79 = fStack_20c * fVar52 + fVar32 * fVar66 + fVar40 * fVar74;
      fVar21 = (float)param_1[0x18];
      fVar22 = (float)param_1[0x19];
      fVar23 = (float)param_1[0x1a];
      fVar24 = (float)param_1[0x1b];
      fVar53 = fVar25 * fVar49 + fVar33 * fVar62 + fVar41 * fVar67;
      fVar57 = fVar26 * fVar50 + fVar34 * fVar64 + fVar42 * fVar70;
      fVar58 = fVar27 * fVar51 + fVar35 * fVar65 + fVar43 * fVar72;
      fVar59 = fVar28 * fVar52 + fVar36 * fVar66 + fVar44 * fVar74;
      fVar25 = (float)param_1[0x1c];
      fVar26 = (float)param_1[0x1d];
      fVar27 = (float)param_1[0x1e];
      fVar28 = (float)param_1[0x1f];
      local_258 = fVar53 * fVar25;
      fStack_254 = fVar57 * fVar26;
      fStack_250 = fVar58 * fVar27;
      fStack_24c = fVar59 * fVar28;
      pfVar2 = (float *)(lVar20 + 0x230 + lVar46);
      pfVar3 = (float *)(lVar20 + 0x200 + lVar46);
      pfVar4 = (float *)(lVar20 + 0x240 + lVar46);
      pfVar5 = (float *)(lVar20 + 0x210 + lVar46);
      pfVar6 = (float *)(lVar20 + 0x250 + lVar46);
      pfVar7 = (float *)(lVar20 + 0x220 + lVar46);
      pfVar8 = (float *)(lVar20 + 0xd0 + lVar46);
      pfVar9 = (float *)(lVar20 + 0xe0 + lVar46);
      pfVar10 = (float *)(lVar20 + 0xf0 + lVar46);
      pfVar11 = (float *)(lVar20 + 0x290 + lVar46);
      pfVar12 = (float *)(lVar20 + 0x260 + lVar46);
      pfVar13 = (float *)(lVar20 + 0x2a0 + lVar46);
      pfVar14 = (float *)(lVar20 + 0x2b0 + lVar46);
      pfVar15 = (float *)(lVar20 + 0x270 + lVar46);
      pfVar16 = (float *)(lVar20 + 0x280 + lVar46);
      pfVar17 = (float *)(lVar20 + 0x100 + lVar46);
      pfVar18 = (float *)(lVar20 + 0x110 + lVar46);
      pfVar19 = (float *)(lVar20 + 0x120 + lVar46);
      local_108 = fVar21 * fVar80 + local_208;
      fStack_104 = fVar22 * fVar81 + fStack_204;
      fStack_100 = fVar23 * fVar82 + fStack_200;
      fStack_fc = fVar24 * fVar83 + fStack_1fc;
      local_e8 = fVar21 * fVar53 + local_248;
      fStack_e4 = fVar22 * fVar57 + fStack_244;
      fStack_e0 = fVar23 * fVar58 + fStack_240;
      fStack_dc = fVar24 * fVar59 + fStack_23c;
      local_f8 = fVar21 * fVar76 + local_1f8;
      fStack_f4 = fVar22 * fVar77 + fStack_1f4;
      fStack_f0 = fVar23 * fVar78 + fStack_1f0;
      fStack_ec = fVar24 * fVar79 + fStack_1ec;
      local_138 = *pfVar8 * fVar49 + *pfVar3 * fVar62 + *pfVar2 * fVar67 + local_1e8;
      fStack_134 = pfVar8[1] * fVar50 + pfVar3[1] * fVar64 + pfVar2[1] * fVar70 + fStack_1e4;
      fStack_130 = pfVar8[2] * fVar51 + pfVar3[2] * fVar65 + pfVar2[2] * fVar72 + fStack_1e0;
      fStack_12c = pfVar8[3] * fVar52 + pfVar3[3] * fVar66 + pfVar2[3] * fVar74 + fStack_1dc;
      local_128 = *pfVar9 * fVar49 + *pfVar5 * fVar62 + *pfVar4 * fVar67 + local_1d8;
      fStack_124 = pfVar9[1] * fVar50 + pfVar5[1] * fVar64 + pfVar4[1] * fVar70 + fStack_1d4;
      fStack_120 = pfVar9[2] * fVar51 + pfVar5[2] * fVar65 + pfVar4[2] * fVar72 + fStack_1d0;
      fStack_11c = pfVar9[3] * fVar52 + pfVar5[3] * fVar66 + pfVar4[3] * fVar74 + fStack_1cc;
      local_278 = CONCAT44(local_278._4_4_ - fVar81 * fVar26,(float)local_278 - fVar80 * fVar25);
      uStack_270 = CONCAT44(uStack_270._4_4_ - fVar83 * fVar28,(float)uStack_270 - fVar82 * fVar27);
      local_118 = *pfVar10 * fVar49 + *pfVar7 * fVar62 + *pfVar6 * fVar67 + local_1c8;
      fStack_114 = pfVar10[1] * fVar50 + pfVar7[1] * fVar64 + pfVar6[1] * fVar70 + fStack_1c4;
      fStack_110 = pfVar10[2] * fVar51 + pfVar7[2] * fVar65 + pfVar6[2] * fVar72 + fStack_1c0;
      fStack_10c = pfVar10[3] * fVar52 + pfVar7[3] * fVar66 + pfVar6[3] * fVar74 + fStack_1bc;
      local_268 = CONCAT44(local_268._4_4_ - fVar77 * fVar26,(float)local_268 - fVar76 * fVar25);
      uStack_260 = CONCAT44(uStack_260._4_4_ - fVar79 * fVar28,(float)uStack_260 - fVar78 * fVar27);
      local_148 = local_238 - local_258;
      fStack_144 = fStack_234 - fStack_254;
      fStack_140 = fStack_230 - fStack_250;
      fStack_13c = fStack_22c - fStack_24c;
      local_198 = local_1b8 - (*pfVar17 * fVar49 + *pfVar12 * fVar62 + *pfVar11 * fVar67);
      fStack_194 = fStack_1b4 - (pfVar17[1] * fVar50 + pfVar12[1] * fVar64 + pfVar11[1] * fVar70);
      fStack_190 = fStack_1b0 - (pfVar17[2] * fVar51 + pfVar12[2] * fVar65 + pfVar11[2] * fVar72);
      fStack_18c = fStack_1ac - (pfVar17[3] * fVar52 + pfVar12[3] * fVar66 + pfVar11[3] * fVar74);
      local_188 = local_1a8 - (*pfVar18 * fVar49 + *pfVar15 * fVar62 + *pfVar13 * fVar67);
      fStack_184 = fStack_1a4 - (pfVar18[1] * fVar50 + pfVar15[1] * fVar64 + pfVar13[1] * fVar70);
      fStack_180 = fStack_1a0 - (pfVar18[2] * fVar51 + pfVar15[2] * fVar65 + pfVar13[2] * fVar72);
      fStack_17c = fStack_19c - (pfVar18[3] * fVar52 + pfVar15[3] * fVar66 + pfVar13[3] * fVar74);
      local_178 = local_228 - (fVar49 * *pfVar19 + fVar62 * *pfVar16 + fVar67 * *pfVar14);
      fStack_174 = fStack_224 - (fVar50 * pfVar19[1] + fVar64 * pfVar16[1] + fVar70 * pfVar14[1]);
      fStack_170 = fStack_220 - (fVar51 * pfVar19[2] + fVar65 * pfVar16[2] + fVar72 * pfVar14[2]);
      fStack_16c = fStack_21c - (fVar52 * pfVar19[3] + fVar66 * pfVar16[3] + fVar74 * pfVar14[3]);
      lVar45 = lVar45 + 1;
    } while ((int)lVar45 < *param_1);
    local_168 = local_278;
    uStack_160 = uStack_270;
    local_158 = local_268;
    uStack_150 = uStack_260;
  }
  local_288 = (undefined8 *)param_3;
  local_280 = (float *)param_4;
  FUN_146d74fb5(&local_108,&local_138,&local_168,&local_198);
  if ((local_d0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d757c8 FUN_146d757c8 body=29 status=ok
// SIG undefined FUN_146d757c8(void)

undefined8 FUN_146d757c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d757e6 FUN_146d757e6 body=24 status=ok
// SIG undefined FUN_146d757e6(void)

undefined1 FUN_146d757e6(longlong param_1,longlong param_2)

{
  FUN_146d7582e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  return 1;
}



// FUNCTION 146d757fe FUN_146d757fe body=24 status=ok
// SIG undefined FUN_146d757fe(void)

undefined1 FUN_146d757fe(longlong param_1,longlong param_2)

{
  FUN_146d7582e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  return 1;
}



// FUNCTION 146d75816 FUN_146d75816 body=24 status=ok
// SIG undefined FUN_146d75816(void)

undefined1 FUN_146d75816(longlong param_1,longlong param_2)

{
  FUN_146d7582e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  return 1;
}



// FUNCTION 146d7582e FUN_146d7582e body=101 status=ok
// SIG undefined FUN_146d7582e(void)

void FUN_146d7582e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    cVar2 = FUN_144aa4622(lVar1,param_2,*(undefined8 *)param_1[5]);
    if (cVar2 != '\0') {
      FUN_146d75893(lVar1,param_2,param_1[1],param_1[4],param_1[2],*(undefined8 *)param_1[3],
                    param_1[7]);
    }
  }
  return;
}



// FUNCTION 146d75893 FUN_146d75893 body=960 status=ok
// SIG undefined FUN_146d75893(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146d75893(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,double param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  undefined1 *local_2d0;
  undefined8 local_2c8;
  double *local_2c0;
  double *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  double *local_290;
  undefined1 *local_288;
  undefined1 local_278 [96];
  undefined1 local_218 [104];
  longlong *local_1b0 [3];
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  double local_150;
  ulonglong local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78 [2];
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_d8 = *param_4;
  uStack_d0 = param_4[1];
  local_c8 = param_4[2];
  uStack_c0 = param_4[3];
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = (undefined4)*(undefined8 *)(param_3 + 2);
  uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  local_a8 = *(undefined8 *)(param_3 + 4);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x3ff00000;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  lVar11 = (longlong)(int)param_2[1];
  lVar6 = *(longlong *)(*param_2 + 0x28);
  lVar9 = *(longlong *)(*param_2 + 0x48);
  lVar12 = lVar11 * 0x10;
  dStack_120 = (double)*(float *)(lVar9 + 0xc + lVar12);
  local_128 = (double)*(float *)(lVar9 + 8 + lVar12);
  dVar13 = (double)*(float *)(lVar9 + 4 + lVar12);
  local_138._8_4_ = SUB84(dVar13,0);
  local_138._0_8_ = (double)*(float *)(lVar9 + lVar12);
  local_138._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  puVar1 = (undefined8 *)(lVar6 + lVar11 * 0x18);
  local_118 = *puVar1;
  uStack_110 = puVar1[1];
  local_108 = *(undefined8 *)(lVar6 + 0x10 + lVar11 * 0x18);
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0x3ff00000;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18);
  plVar8 = (longlong *)plVar2[1];
  if ((longlong *)plVar2[1] == (longlong *)0x0) {
    plVar8 = plVar2;
  }
  local_2e0 = param_2;
  local_1b0[0] = param_2;
  if ((longlong)(int)plVar2[2] != 0) {
    local_2e8 = plVar8 + (int)plVar2[2];
    do {
      if ((*(byte *)(*plVar8 + 8) & 3) == 0) {
        lVar6 = FUN_146e2259e();
      }
      else {
        lVar6 = FUN_144aa6588();
      }
      lVar9 = *plVar8;
      if ((*(byte *)(lVar9 + 8) & 3) == 0) {
        FUN_146e225aa(lVar9,local_278);
      }
      else {
        FUN_14172c0a0(lVar9,local_278);
      }
      FUN_1447dc19e(local_278,local_218,&local_d8);
      lVar9 = *(longlong *)(*local_2e0 + 0xf8) + (longlong)(int)local_2e0[1] * 0x18;
      lVar11 = *(longlong *)(lVar9 + 8);
      if (*(longlong *)(lVar9 + 8) == 0) {
        lVar11 = lVar9;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if ((longlong)iVar3 != 0) {
        lVar9 = 0;
        do {
          if ((*(byte *)(*(longlong *)(lVar11 + lVar9) + 8) & 3) == 0) {
            lVar12 = FUN_146e2259e();
          }
          else {
            lVar12 = FUN_144aa6588();
          }
          bVar10 = 7;
          bVar7 = 7;
          if (lVar6 != 0) {
            bVar7 = *(byte *)(lVar6 + 0x1c) & 0x1f;
          }
          if (lVar12 != 0) {
            bVar10 = *(byte *)(lVar12 + 0x1c) & 0x1f;
          }
          cVar5 = FUN_1400c6673(bVar7,*plVar8,bVar10,*(undefined8 *)(lVar11 + lVar9));
          if (cVar5 != '\0') {
            lVar4 = *(longlong *)(lVar11 + lVar9);
            if ((*(byte *)(lVar4 + 8) & 3) == 0) {
              FUN_146e225aa(lVar4,&local_2d8);
            }
            else {
              FUN_14172c0a0(lVar4,&local_2d8);
            }
            FUN_1447dc19e(&local_2d8,local_278,local_138);
            local_61 = 1;
            local_78[1] = 0.0;
            local_78[0] = param_6;
            local_2c8 = param_5;
            local_2c0 = local_78;
            local_2b8 = &local_150;
            local_2b0 = local_198;
            local_2a8 = local_180;
            local_2a0 = local_140;
            local_298 = local_168;
            local_290 = local_78 + 1;
            local_288 = &local_61;
            local_2d8 = lVar12;
            local_2d0 = local_278;
            cVar5 = FUN_146d75c54(lVar6,local_218,&local_2d8);
            if (cVar5 != '\0') {
              local_148 = (ulonglong)(local_150 / param_6) & -(ulonglong)(0.0 < local_150);
              FUN_146d82d58(param_7,param_5,local_1b0);
            }
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar3 * 8 != lVar9);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != local_2e8);
  }
  if ((local_60 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d75c54 FUN_146d75c54 body=373 status=ok
// SIG undefined FUN_146d75c54(void)

void FUN_146d75c54(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d75ce5_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d75ce5_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d75cab_caseD_82;
  case 3:
switchD_146d75ce5_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d75c54(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d75ce5_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d75ce5_caseD_0;
    case 0x41:
      goto switchD_146d75ce5_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d75ce5_caseD_3;
    case 0x48:
      goto switchD_146d75ce5_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d75cab_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d75e90(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d75e90 FUN_146d75e90 body=177 status=ok
// SIG undefined FUN_146d75e90(void)

void FUN_146d75e90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_144852885(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d75f42 FUN_146d75f42 body=177 status=ok
// SIG undefined FUN_146d75f42(void)

void FUN_146d75f42(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_140913240(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d75ff4 FUN_146d75ff4 body=177 status=ok
// SIG undefined FUN_146d75ff4(void)

void FUN_146d75ff4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_14496e94c(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d760a6 FUN_146d760a6 body=177 status=ok
// SIG undefined FUN_146d760a6(void)

void FUN_146d760a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1411e80d4(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76158 FUN_146d76158 body=177 status=ok
// SIG undefined FUN_146d76158(void)

void FUN_146d76158(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_146d7b150(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7620a FUN_146d7620a body=177 status=ok
// SIG undefined FUN_146d7620a(void)

void FUN_146d7620a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_146d7d1dc(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d762bc FUN_146d762bc body=177 status=ok
// SIG undefined FUN_146d762bc(void)

void FUN_146d762bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_146d7ef54(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7636e FUN_146d7636e body=177 status=ok
// SIG undefined FUN_146d7636e(void)

void FUN_146d7636e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = *(undefined1 *)param_1[10];
  local_a0 = *(undefined8 *)param_1[9];
  local_a8 = param_1[8];
  local_b8 = *(undefined4 *)(param_1 + 6);
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_b0 = *(undefined4 *)(param_1 + 7);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_c8 = *(undefined4 *)(param_1 + 4);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_c0 = *(undefined4 *)(param_1 + 5);
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_d8 = param_1[2];
  local_d0 = *(undefined8 *)param_1[3];
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_146d80fe0(*param_1,param_1[1],param_2);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76420 FUN_146d76420 body=555 status=ok
// SIG undefined FUN_146d76420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d76420(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  float local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  undefined1 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  float local_cc;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  pdVar1 = (double *)param_1[8];
  local_f0 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_110 = (float)*(double *)param_1[2];
  local_c0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_b8 = (float)*(double *)(local_c0 + 0x10);
  local_b0 = &LAB_144a386ca;
  local_d0 = (float)*(double *)(param_2 + 0x10);
  local_c8 = &LAB_144a386ca;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_e8 = local_68;
  local_68._4_4_ = (float)pdVar1[1];
  local_68._0_4_ = (float)*pdVar1;
  local_68._8_4_ = (float)pdVar1[2];
  local_68._12_4_ = 0;
  local_118 = local_78;
  local_78._4_4_ = (float)pdVar5[1];
  local_78._0_4_ = (float)*pdVar5;
  local_78._8_4_ = (float)pdVar5[2];
  local_78._12_4_ = 0;
  local_108 = &local_7c;
  local_7c = 0.0;
  local_f8 = &local_a8;
  local_100 = &local_98;
  local_d8 = param_2;
  local_cc = local_d0;
  local_b4 = local_b8;
  FUN_1448541f8();
  *pdVar4 = (double)local_7c;
  *pdVar2 = (double)local_a8;
  pdVar2[1] = (double)fStack_a4;
  pdVar2[2] = (double)fStack_a0;
  *pdVar3 = (double)local_98;
  pdVar3[1] = (double)fStack_94;
  pdVar3[2] = (double)fStack_90;
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7664c FUN_146d7664c body=564 status=ok
// SIG undefined FUN_146d7664c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d7664c(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_120 = (float)*(double *)param_1[2];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c0 = &LAB_144a386ca;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144857b9e;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_c4 = local_c8;
  FUN_1448541f8();
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76882 FUN_146d76882 body=564 status=ok
// SIG undefined FUN_146d76882(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d76882(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_120 = (float)*(double *)param_1[2];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c0 = &LAB_144a386ca;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_14172546a;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_c4 = local_c8;
  FUN_1448541f8();
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76ab8 FUN_146d76ab8 body=247 status=ok
// SIG undefined FUN_146d76ab8(void)

void FUN_146d76ab8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386ca;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76bb0 FUN_146d76bb0 body=223 status=ok
// SIG undefined FUN_146d76bb0(void)

void FUN_146d76bb0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386ca;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76c90 FUN_146d76c90 body=247 status=ok
// SIG undefined FUN_146d76c90(void)

void FUN_146d76c90(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386ca;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76d88 FUN_146d76d88 body=564 status=ok
// SIG undefined FUN_146d76d88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d76d88(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_120 = (float)*(double *)param_1[2];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c0 = &LAB_144a386ca;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144a12d46;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_c4 = local_c8;
  FUN_1448541f8();
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d76fbe FUN_146d76fbe body=233 status=ok
// SIG undefined FUN_146d76fbe(void)

void FUN_146d76fbe(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386ca;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5ef26;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d770a8 FUN_146d770a8 body=223 status=ok
// SIG undefined FUN_146d770a8(void)

void FUN_146d770a8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386ca;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77188 FUN_146d77188 body=233 status=ok
// SIG undefined FUN_146d77188(void)

void FUN_146d77188(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386ca;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5efe8;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77272 FUN_146d77272 body=371 status=ok
// SIG undefined FUN_146d77272(void)

void FUN_146d77272(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d772cf_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d772cf_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d772b9_caseD_42;
  case 3:
switchD_146d772cf_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d77272(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d772cf_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d772cf_caseD_0;
    case 0x41:
      goto switchD_146d772cf_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d772cf_caseD_3;
    case 0x48:
      goto switchD_146d772cf_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d772b9_caseD_42:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d76420(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d774b2 FUN_146d774b2 body=351 status=ok
// SIG undefined FUN_146d774b2(void)

undefined8 FUN_146d774b2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_144852885(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77612 FUN_146d77612 body=565 status=ok
// SIG undefined FUN_146d77612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d77612(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  float local_dc;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_120 = (float)*(double *)param_1[2];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c4 = 0;
  local_c0 = FUN_144857b9e;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_d8 = &LAB_144a386ca;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_dc = local_e0;
  FUN_1448541f8(&local_e8,&local_d0);
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77848 FUN_146d77848 body=557 status=ok
// SIG undefined FUN_146d77848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d77848(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_120 = (float)*(double *)param_1[2];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c4 = 0;
  local_c0 = FUN_144857b9e;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144857b9e;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  FUN_1448541f8(&local_e8,&local_d0);
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77a76 FUN_146d77a76 body=565 status=ok
// SIG undefined FUN_146d77a76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d77a76(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  float local_dc;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_120 = (float)*(double *)param_1[2];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c4 = 0;
  local_c0 = FUN_144857b9e;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_d8 = &LAB_144a386e2;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_dc = local_e0;
  FUN_1448541f8(&local_e8,&local_d0);
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77cac FUN_146d77cac body=564 status=ok
// SIG undefined FUN_146d77cac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d77cac(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_120 = (float)*(double *)param_1[2];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c4 = 0;
  local_c0 = FUN_144857b9e;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_14172546a;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  FUN_1448541f8(&local_e8,&local_d0);
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77ee2 FUN_146d77ee2 body=249 status=ok
// SIG undefined FUN_146d77ee2(void)

void FUN_146d77ee2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144857b9e;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d77fdc FUN_146d77fdc body=219 status=ok
// SIG undefined FUN_146d77fdc(void)

void FUN_146d77fdc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144857b9e;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d780b8 FUN_146d780b8 body=249 status=ok
// SIG undefined FUN_146d780b8(void)

void FUN_146d780b8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144857b9e;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d781b2 FUN_146d781b2 body=564 status=ok
// SIG undefined FUN_146d781b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d781b2(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_120 = (float)*(double *)param_1[2];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c4 = 0;
  local_c0 = FUN_144857b9e;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144a12d46;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  FUN_1448541f8(&local_e8,&local_d0);
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d783e8 FUN_146d783e8 body=235 status=ok
// SIG undefined FUN_146d783e8(void)

void FUN_146d783e8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144857b9e;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5ef26;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d784d4 FUN_146d784d4 body=219 status=ok
// SIG undefined FUN_146d784d4(void)

void FUN_146d784d4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144857b9e;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d785b0 FUN_146d785b0 body=235 status=ok
// SIG undefined FUN_146d785b0(void)

void FUN_146d785b0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144857b9e;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5efe8;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7869c FUN_146d7869c body=371 status=ok
// SIG undefined FUN_146d7869c(void)

void FUN_146d7869c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d786f9_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d786f9_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d786e3_caseD_42;
  case 3:
switchD_146d786f9_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d7869c(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d786f9_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d786f9_caseD_0;
    case 0x41:
      goto switchD_146d786f9_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d786f9_caseD_3;
    case 0x48:
      goto switchD_146d786f9_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d786e3_caseD_42:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d77612(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d788dc FUN_146d788dc body=351 status=ok
// SIG undefined FUN_146d788dc(void)

undefined8 FUN_146d788dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_140913240(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d78a3c FUN_146d78a3c body=562 status=ok
// SIG undefined FUN_146d78a3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d78a3c(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  float local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  undefined1 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  float local_cc;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  pdVar1 = (double *)param_1[8];
  local_f0 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_110 = (float)*(double *)param_1[2];
  local_c0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_b8 = (float)*(double *)(local_c0 + 0x10);
  local_b0 = &LAB_144a386e2;
  local_d0 = (float)*(double *)(param_2 + 0x10);
  local_c8 = &LAB_144a386ca;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_e8 = local_68;
  local_68._4_4_ = (float)pdVar1[1];
  local_68._0_4_ = (float)*pdVar1;
  local_68._8_4_ = (float)pdVar1[2];
  local_68._12_4_ = 0;
  local_118 = local_78;
  local_78._4_4_ = (float)pdVar5[1];
  local_78._0_4_ = (float)*pdVar5;
  local_78._8_4_ = (float)pdVar5[2];
  local_78._12_4_ = 0;
  local_108 = &local_7c;
  local_7c = 0.0;
  local_f8 = &local_a8;
  local_100 = &local_98;
  local_d8 = param_2;
  local_cc = local_d0;
  local_b4 = local_b8;
  FUN_1448541f8();
  *pdVar4 = (double)local_7c;
  *pdVar2 = (double)local_a8;
  pdVar2[1] = (double)fStack_a4;
  pdVar2[2] = (double)fStack_a0;
  *pdVar3 = (double)local_98;
  pdVar3[1] = (double)fStack_94;
  pdVar3[2] = (double)fStack_90;
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d78c70 FUN_146d78c70 body=564 status=ok
// SIG undefined FUN_146d78c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d78c70(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_120 = (float)*(double *)param_1[2];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c0 = &LAB_144a386e2;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144857b9e;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_c4 = local_c8;
  FUN_1448541f8();
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d78ea6 FUN_146d78ea6 body=555 status=ok
// SIG undefined FUN_146d78ea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d78ea6(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  float local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  undefined1 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  float local_cc;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  pdVar1 = (double *)param_1[8];
  local_f0 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_110 = (float)*(double *)param_1[2];
  local_c0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_b8 = (float)*(double *)(local_c0 + 0x10);
  local_b0 = &LAB_144a386e2;
  local_d0 = (float)*(double *)(param_2 + 0x10);
  local_c8 = &LAB_144a386e2;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_e8 = local_68;
  local_68._4_4_ = (float)pdVar1[1];
  local_68._0_4_ = (float)*pdVar1;
  local_68._8_4_ = (float)pdVar1[2];
  local_68._12_4_ = 0;
  local_118 = local_78;
  local_78._4_4_ = (float)pdVar5[1];
  local_78._0_4_ = (float)*pdVar5;
  local_78._8_4_ = (float)pdVar5[2];
  local_78._12_4_ = 0;
  local_108 = &local_7c;
  local_7c = 0.0;
  local_f8 = &local_a8;
  local_100 = &local_98;
  local_d8 = param_2;
  local_cc = local_d0;
  local_b4 = local_b8;
  FUN_1448541f8();
  *pdVar4 = (double)local_7c;
  *pdVar2 = (double)local_a8;
  pdVar2[1] = (double)fStack_a4;
  pdVar2[2] = (double)fStack_a0;
  *pdVar3 = (double)local_98;
  pdVar3[1] = (double)fStack_94;
  pdVar3[2] = (double)fStack_90;
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d790d2 FUN_146d790d2 body=564 status=ok
// SIG undefined FUN_146d790d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d790d2(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_120 = (float)*(double *)param_1[2];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c0 = &LAB_144a386e2;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_14172546a;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_c4 = local_c8;
  FUN_1448541f8();
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d79308 FUN_146d79308 body=247 status=ok
// SIG undefined FUN_146d79308(void)

void FUN_146d79308(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386e2;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d79400 FUN_146d79400 body=223 status=ok
// SIG undefined FUN_146d79400(void)

void FUN_146d79400(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386e2;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d794e0 FUN_146d794e0 body=247 status=ok
// SIG undefined FUN_146d794e0(void)

void FUN_146d794e0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386e2;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d795d8 FUN_146d795d8 body=564 status=ok
// SIG undefined FUN_146d795d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d795d8(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_120 = (float)*(double *)param_1[2];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c0 = &LAB_144a386e2;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144a12d46;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  local_c4 = local_c8;
  FUN_1448541f8();
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7980e FUN_146d7980e body=233 status=ok
// SIG undefined FUN_146d7980e(void)

void FUN_146d7980e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386e2;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5ef26;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d798f8 FUN_146d798f8 body=223 status=ok
// SIG undefined FUN_146d798f8(void)

void FUN_146d798f8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386e2;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d799d8 FUN_146d799d8 body=233 status=ok
// SIG undefined FUN_146d799d8(void)

void FUN_146d799d8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_20 = &LAB_144a386e2;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5efe8;
  local_50 = local_68;
  local_48 = param_2;
  local_24 = local_28;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d79ac2 FUN_146d79ac2 body=371 status=ok
// SIG undefined FUN_146d79ac2(void)

void FUN_146d79ac2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d79b1f_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d79b1f_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d79b09_caseD_42;
  case 3:
switchD_146d79b1f_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d79ac2(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d79b1f_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d79b1f_caseD_0;
    case 0x41:
      goto switchD_146d79b1f_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d79b1f_caseD_3;
    case 0x48:
      goto switchD_146d79b1f_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d79b09_caseD_42:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d78a3c(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d79d02 FUN_146d79d02 body=351 status=ok
// SIG undefined FUN_146d79d02(void)

undefined8 FUN_146d79d02(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_14496e94c(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d79e62 FUN_146d79e62 body=832 status=ok
// SIG undefined FUN_146d79e62(void)

undefined8
FUN_146d79e62(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1b8 [32];
  double local_198;
  double *local_190;
  double *local_188;
  double *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_198 = dVar4 * param_5;
    local_78 = dVar7 * dVar1;
    local_80 = dVar6 * dVar1;
    local_88 = dVar5 * dVar1;
    local_128 = *param_3;
    uStack_120 = param_3[1];
    local_f8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_100 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_118 = param_3[2];
    uStack_110 = param_3[3];
    local_108 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    local_138 = *(undefined8 *)(param_1 + 0x30);
    local_158 = &local_148;
    local_148 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x28);
    local_160 = param_12;
    local_168 = param_11;
    local_170 = param_10;
    local_178 = param_9;
    local_180 = &local_b8;
    local_188 = &local_a0;
    local_190 = &local_c0;
    cVar2 = FUN_146e3ca46(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_c0 < param_5)) {
      *param_6 = dVar1 * local_c0;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_a0;
      param_7[1] = dVar5 * local_98;
      param_7[2] = dVar6 * local_90;
      local_a8 = *(double *)(param_1 + 0x48) * local_a8;
      local_b0 = *(double *)(param_1 + 0x40) * local_b0;
      local_b8 = *(double *)(param_1 + 0x38) * local_b8;
      dVar6 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
      if (((dVar6 != 1.0) || (dVar5 = local_a8, dVar4 = local_b0, dVar7 = local_b8, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_a8 * dVar6;
        dVar4 = local_b0 * dVar6;
        dVar7 = local_b8 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_146d7a056;
    }
  }
  uVar3 = 0;
LAB_146d7a056:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146d7a1a4 FUN_146d7a1a4 body=223 status=ok
// SIG undefined FUN_146d7a1a4(void)

void FUN_146d7a1a4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386ca;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a284 FUN_146d7a284 body=564 status=ok
// SIG undefined FUN_146d7a284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d7a284(longlong *param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  undefined4 local_dc;
  code *local_d8;
  longlong local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)param_1[8];
  local_100 = *(undefined1 *)param_1[7];
  pdVar2 = (double *)param_1[5];
  pdVar3 = (double *)param_1[4];
  pdVar4 = (double *)param_1[3];
  local_d0 = *param_1;
  pdVar5 = (double *)param_1[1];
  local_120 = (float)*(double *)param_1[2];
  local_c8 = (float)*(double *)(local_d0 + 0x10);
  local_c4 = 0;
  local_c0 = FUN_14172546a;
  local_e0 = (float)*(double *)(param_2 + 0x10);
  local_dc = 0;
  local_d8 = FUN_144857b9e;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar11 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar12._0_4_ = fVar9 + fVar7;
  auVar12._4_4_ = fVar9 + fVar7;
  auVar12._8_4_ = fVar7 + fVar9;
  auVar12._12_4_ = fVar7 + fVar9;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar10;
  auVar14._4_4_ = auVar13._4_4_ * fVar11;
  auVar14._8_4_ = auVar13._8_4_ * fVar6;
  auVar14._12_4_ = auVar13._12_4_ * fVar8;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_f8 = local_78;
  local_78._4_4_ = (float)pdVar1[1];
  local_78._0_4_ = (float)*pdVar1;
  local_78._8_4_ = (float)pdVar1[2];
  local_78._12_4_ = 0;
  local_128 = local_88;
  local_88._4_4_ = (float)pdVar5[1];
  local_88._0_4_ = (float)*pdVar5;
  local_88._8_4_ = (float)pdVar5[2];
  local_88._12_4_ = 0;
  local_118 = &local_8c;
  local_8c = 0.0;
  local_108 = &local_b8;
  local_110 = &local_a8;
  local_e8 = param_2;
  FUN_1448541f8(&local_e8,&local_d0);
  *pdVar4 = (double)local_8c;
  *pdVar2 = (double)local_b8;
  pdVar2[1] = (double)fStack_b4;
  pdVar2[2] = (double)fStack_b0;
  *pdVar3 = (double)local_a8;
  pdVar3[1] = (double)fStack_a4;
  pdVar3[2] = (double)fStack_a0;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a4ba FUN_146d7a4ba body=223 status=ok
// SIG undefined FUN_146d7a4ba(void)

void FUN_146d7a4ba(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386e2;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a59a FUN_146d7a59a body=217 status=ok
// SIG undefined FUN_146d7a59a(void)

void FUN_146d7a59a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_50;
  float local_48;
  undefined4 local_44;
  code *local_40;
  longlong local_38;
  float local_30;
  undefined4 local_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(undefined8 *)param_1[6];
  local_68 = param_1[8];
  local_70 = *(undefined1 *)param_1[7];
  local_80 = param_1[5];
  local_90 = (undefined4)param_1[3];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_88 = (undefined4)param_1[4];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_98 = *(undefined8 *)param_1[2];
  local_38 = *param_1;
  local_30 = (float)*(double *)(local_38 + 0x10);
  local_2c = 0;
  local_28 = FUN_14172546a;
  local_48 = (float)*(double *)(param_2 + 0x10);
  local_44 = 0;
  local_40 = FUN_14172546a;
  local_60 = local_78;
  local_50 = param_2;
  FUN_1417283d7(&local_50,&local_38,local_98,param_1[1]);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a674 FUN_146d7a674 body=249 status=ok
// SIG undefined FUN_146d7a674(void)

void FUN_146d7a674(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a76e FUN_146d7a76e body=219 status=ok
// SIG undefined FUN_146d7a76e(void)

void FUN_146d7a76e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a84a FUN_146d7a84a body=249 status=ok
// SIG undefined FUN_146d7a84a(void)

void FUN_146d7a84a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7a944 FUN_146d7a944 body=219 status=ok
// SIG undefined FUN_146d7a944(void)

void FUN_146d7a944(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144a12d46;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7aa20 FUN_146d7aa20 body=235 status=ok
// SIG undefined FUN_146d7aa20(void)

void FUN_146d7aa20(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5ef26;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7ab0c FUN_146d7ab0c body=219 status=ok
// SIG undefined FUN_146d7ab0c(void)

void FUN_146d7ab0c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7abe8 FUN_146d7abe8 body=235 status=ok
// SIG undefined FUN_146d7abe8(void)

void FUN_146d7abe8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5efe8;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7acd4 FUN_146d7acd4 body=219 status=ok
// SIG undefined FUN_146d7acd4(void)

void FUN_146d7acd4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_14172546a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144b038b4;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7adb0 FUN_146d7adb0 body=371 status=ok
// SIG undefined FUN_146d7adb0(void)

void FUN_146d7adb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d7ae0d_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d7ae0d_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d7adf7_caseD_42;
  case 3:
switchD_146d7ae0d_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d7adb0(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d7ae0d_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d7ae0d_caseD_0;
    case 0x41:
      goto switchD_146d7ae0d_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d7ae0d_caseD_3;
    case 0x48:
      goto switchD_146d7ae0d_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d7adf7_caseD_42:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d7a1a4(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d7aff0 FUN_146d7aff0 body=351 status=ok
// SIG undefined FUN_146d7aff0(void)

undefined8 FUN_146d7aff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_1411e80d4(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7b150 FUN_146d7b150 body=3238 status=ok
// SIG undefined FUN_146d7b150(void)

ulonglong FUN_146d7b150(longlong *param_1,double *param_2,double param_3,longlong param_4,
                       double *param_5,double *param_6,double *param_7,double *param_8,
                       double *param_9,double *param_10,double *param_11,double *param_12,
                       char param_13)

{
  byte bVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
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
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  double **local_278;
  double *local_268;
  double *pdStack_260;
  double local_258;
  longlong local_250;
  double *local_248;
  double *local_240;
  double *local_238;
  double *local_230;
  double *local_228;
  double *local_220;
  double *local_218;
  double *local_210;
  char local_208;
  undefined1 *local_200;
  double **local_1f8;
  double *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double *local_1d0;
  undefined8 *local_1c8;
  double *local_1c0;
  double *local_1b8;
  double *local_1b0;
  undefined8 *local_1a8;
  char *local_1a0;
  double *local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [96];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  char local_b1;
  ulonglong local_b0;
  
  cVar6 = param_13;
  pdVar5 = param_12;
  pdVar4 = param_7;
  pdVar3 = param_6;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_b1 = param_13;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 6,&local_268,param_2);
    local_278 = (double **)CONCAT71(local_278._1_7_,cVar6);
    local_280 = pdVar5;
    local_288 = param_11;
    local_290 = param_10;
    local_298 = param_9;
    local_2a0 = param_8;
    local_2a8 = pdVar4;
    local_2b0 = pdVar3;
    local_2b8 = param_5;
    uVar7 = FUN_146d7b150(param_1[4],&local_268,param_3,param_4);
    goto LAB_146d7b399;
  }
  *(undefined4 *)param_10 = 0xffffffff;
  local_d8 = -1.79769313486232e+308;
  dStack_d0 = -1.79769313486232e+308;
  local_c8 = -1.79769313486232e+308;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = 0.0;
  FUN_1449437a2(param_4,local_158,param_2);
  dVar11 = *param_5;
  dVar15 = param_5[1];
  dVar9 = param_2[2] * -1.0;
  dVar10 = param_2[3] * 1.0;
  dVar12 = -*param_2;
  dVar13 = -param_2[1];
  dVar14 = dVar15 * dVar12 - dVar11 * dVar13;
  dVar16 = param_5[2] * dVar13 - dVar15 * dVar9;
  dVar18 = dVar11 * dVar9 - dVar12 * param_5[2];
  dVar16 = dVar16 + dVar16;
  dVar18 = dVar18 + dVar18;
  dVar14 = dVar14 + dVar14;
  local_168 = dVar10 * dVar14 + param_5[2] + (dVar18 * dVar12 - dVar16 * dVar13);
  local_178 = (dVar14 * dVar13 - dVar18 * dVar9) + dVar10 * dVar16 + dVar11;
  dStack_170 = *param_2 * dVar14 + dVar9 * dVar16 + dVar10 * dVar18 + dVar15;
  if ((char)param_1[3] == '\x01') {
    cVar2 = *(char *)((longlong)param_1 + 0x1c);
    if (((param_1 == (longlong *)0x0 || cVar2 != -0x78) || (0 < *(int *)(param_1[0x11] + 0x38))) &&
       ((param_3 == 0.0 ||
        ((*(char *)((longlong)param_3 + 0x1c) != -0x78 ||
         (0 < *(int *)(*(longlong *)((longlong)param_3 + 0x88) + 0x38))))))) {
      local_180 = param_2[6] - *(double *)(param_4 + 0x30);
      dVar11 = param_2[5] - *(double *)(param_4 + 0x28);
      local_198 = (double *)local_190;
      local_190._8_4_ = SUB84(dVar11,0);
      local_190._0_8_ = param_2[4] - *(double *)(param_4 + 0x20);
      local_190._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_1d0 = &local_178;
      local_1c8 = &param_6;
      local_1c0 = pdVar4;
      local_1b8 = &local_d8;
      local_1b0 = &local_f8;
      local_1a8 = &param_12;
      local_1a0 = &local_b1;
      local_1d8 = param_3;
      switch(cVar2) {
      case '\0':
      case '\x02':
      case '\x05':
      case '\x06':
      case '\a':
switchD_146d7baf9_caseD_82:
        cVar6 = FUN_146d7c13a(&local_1d8,param_1,local_158);
        break;
      case '\x01':
        cVar6 = FUN_146d7c236(&local_1d8,param_1,local_158);
        break;
      case '\x03':
        cVar6 = FUN_146d7c334(&local_1d8,param_1,local_158);
        break;
      case '\x04':
        FUN_1447dc19e(param_1 + 6,&local_268,local_158);
        cVar6 = FUN_146d7c925(param_1[4],&local_268,&local_1d8);
        break;
      case '\b':
        cVar6 = FUN_146d7c430(&local_1d8,param_1,local_158);
        break;
      default:
        switch(cVar2) {
        case '@':
          local_280 = pdVar5;
          local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
          local_298 = pdVar5;
          local_2b0 = pdVar4;
          local_2b8 = pdVar3;
          local_2a8 = local_1b8;
          local_2a0 = local_1b0;
          local_288 = local_198;
          cVar6 = FUN_146d7ce39(param_1,param_3,local_158,&local_178);
          break;
        case 'A':
          cVar6 = FUN_146d7c72a(&local_1d8,param_1,local_158);
          break;
        case 'B':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
          goto switchD_146d7baf9_caseD_82;
        case 'C':
          local_280 = pdVar5;
          local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
          local_298 = pdVar5;
          local_2b0 = pdVar4;
          local_2b8 = pdVar3;
          local_2a8 = local_1b8;
          local_2a0 = local_1b0;
          local_288 = local_198;
          cVar6 = FUN_146d7cf57(param_1,param_3,local_158,&local_178);
          break;
        case 'H':
          cVar6 = FUN_146d7c828(&local_1d8,param_1,local_158);
          break;
        default:
          switch(cVar2) {
          case -0x80:
            local_280 = pdVar5;
            local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
            local_298 = pdVar5;
            local_2b0 = pdVar4;
            local_2b8 = pdVar3;
            local_2a8 = local_1b8;
            local_2a0 = local_1b0;
            local_288 = local_198;
            cVar6 = FUN_146d7cbc9(param_1,param_3,local_158,&local_178);
            break;
          case -0x7f:
            cVar6 = FUN_146d7c52e(&local_1d8,param_1,local_158);
            break;
          default:
            goto switchD_146d7baf9_caseD_82;
          case -0x7d:
            local_280 = pdVar5;
            local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
            local_298 = pdVar5;
            local_2b0 = pdVar4;
            local_2b8 = pdVar3;
            local_2a8 = local_1b8;
            local_2a0 = local_1b0;
            local_288 = local_198;
            cVar6 = FUN_146d7cd07(param_1,param_3,local_158,&local_178);
            break;
          case -0x78:
            cVar6 = FUN_146d7c62c(&local_1d8,param_1,local_158);
          }
        }
      }
      goto LAB_146d7b62b;
    }
  }
  else {
    switch(bVar1) {
    case 5:
    case 0xf:
      local_268 = &local_1d8;
      local_1d8 = (double)((ulonglong)local_1d8 & 0xffffffffffffff00);
      *pdVar4 = 1.79769313486232e+308;
      local_1f8 = &local_268;
      local_248 = param_5;
      local_240 = pdVar3;
      local_238 = pdVar4;
      local_230 = param_8;
      local_228 = param_9;
      local_220 = param_10;
      local_218 = param_11;
      local_210 = pdVar5;
      local_208 = cVar6;
      local_200 = &LAB_146d7d076;
      pdStack_260 = param_2;
      local_258 = param_3;
      local_250 = param_4;
      FUN_146db006e(param_1);
      uVar7 = (ulonglong)local_1d8 & 0xff;
      goto LAB_146d7b399;
    case 6:
      local_288 = (double *)CONCAT71(local_288._1_7_,cVar6);
      local_290 = pdVar5;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = thunk_FUN_146dd5a18(param_1,param_3,local_158,&local_178);
      break;
    default:
      if (-1 < (char)bVar1) {
        if (bVar1 < 0x40) goto LAB_146d7b397;
        local_278 = &local_268;
        local_268 = (double *)&DAT_3ff0000000000000;
        pdStack_260 = (double *)&DAT_3ff0000000000000;
        local_258 = 1.0;
        plVar8 = (longlong *)param_1[5];
        goto LAB_146d7b623;
      }
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar6);
      local_288 = pdVar5;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = FUN_146d7bdf8(param_1,param_3,local_158,&local_178);
      break;
    case 0xb:
      local_278 = &local_1f0;
      local_1f0 = (double *)0x3ff0000000000000;
      local_1e8 = 0x3ff0000000000000;
      local_1e0 = 0x3ff0000000000000;
      plVar8 = param_1;
LAB_146d7b623:
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar6);
      local_288 = pdVar5;
      local_290 = param_11;
      local_298 = param_10;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = FUN_146e3cda4(plVar8,param_3,local_158,&local_178);
      break;
    case 0xc:
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar6);
      local_288 = pdVar5;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = FUN_146d94ab2(param_1,param_3,local_158,&local_178);
    }
LAB_146d7b62b:
    if (cVar6 != '\0') {
      if ((0.0 < *pdVar4) || (uVar7 = 1, local_b1 == '\x01')) {
        dVar10 = *param_2;
        dVar12 = param_2[1];
        dVar13 = param_2[2];
        dVar11 = param_2[3];
        dVar15 = dStack_f0 * dVar10 - local_f8 * dVar12;
        dVar14 = local_e8 * dVar12 - dStack_f0 * dVar13;
        dVar16 = local_f8 * dVar13 - dVar10 * local_e8;
        dVar14 = dVar14 + dVar14;
        dVar16 = dVar16 + dVar16;
        dVar15 = dVar15 + dVar15;
        dVar9 = dVar15 * dVar11 + local_e8 + (dVar16 * dVar10 - dVar14 * dVar12);
        dVar12 = (dVar15 * dVar12 - dVar16 * dVar13) + dVar11 * dVar14 + local_f8;
        dVar11 = (dVar13 * dVar14 - dVar10 * dVar15) + param_2[3] * dVar16 + dStack_f0;
        dVar15 = dVar9 * dVar9 + dVar12 * dVar12 + dVar11 * dVar11;
        if ((dVar15 != 1.0) || (NAN(dVar15))) {
          if (9.999999747378752e-05 <= dVar15) {
            dVar15 = 1.0 / SQRT(dVar15);
            dVar9 = dVar9 * dVar15;
            dVar11 = dVar11 * dVar15;
            dVar12 = dVar15 * dVar12;
          }
          else {
            dVar9 = 0.0;
            dVar12 = 1.0;
            dVar11 = 0.0;
          }
        }
        *param_9 = dVar12;
        param_9[1] = dVar11;
        param_9[2] = dVar9;
        dVar13 = *param_2;
        dVar14 = param_2[1];
        dVar16 = param_2[2];
        dVar15 = param_2[3];
        dVar11 = param_2[3];
        dVar12 = dStack_d0 * dVar13 - local_d8 * dVar14;
        dVar18 = local_c8 * dVar14 - dStack_d0 * dVar16;
        dVar17 = local_d8 * dVar16 - dVar13 * local_c8;
        dVar18 = dVar18 + dVar18;
        dVar17 = dVar17 + dVar17;
        dVar12 = dVar12 + dVar12;
        dVar10 = param_2[5];
        dVar9 = param_2[6];
        *param_8 = (dVar12 * dVar14 - dVar17 * dVar16) + dVar15 * dVar18 + local_d8 + param_2[4];
        param_8[1] = (dVar16 * dVar18 - dVar13 * dVar12) + dVar11 * dVar17 + dStack_d0 + dVar10;
        param_8[2] = dVar12 * dVar15 + local_c8 + (dVar17 * dVar13 - dVar18 * dVar14) + dVar9;
        local_2b8 = param_9;
        (**(code **)(*param_1 + 0xc0))(param_1,&local_268,&local_178,*(undefined4 *)param_10);
        dVar10 = *param_2;
        dVar12 = param_2[1];
        dVar13 = param_2[2];
        dVar11 = param_2[3];
        dVar15 = param_2[3];
        dVar9 = (double)pdStack_260 * dVar10 - (double)local_268 * dVar12;
        dVar14 = local_258 * dVar12 - (double)pdStack_260 * dVar13;
        dVar16 = (double)local_268 * dVar13 - dVar10 * local_258;
        dVar14 = dVar14 + dVar14;
        dVar16 = dVar16 + dVar16;
        dVar9 = dVar9 + dVar9;
        *param_11 = (dVar9 * dVar12 - dVar16 * dVar13) + dVar11 * dVar14 + (double)local_268;
        param_11[1] = (dVar13 * dVar14 - dVar10 * dVar9) + dVar15 * dVar16 + (double)pdStack_260;
        param_11[2] = dVar9 * dVar11 + local_258 + (dVar16 * dVar10 - dVar14 * dVar12);
        uVar7 = 1;
      }
      goto LAB_146d7b399;
    }
  }
LAB_146d7b397:
  uVar7 = 0;
LAB_146d7b399:
  if ((local_b0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7bdf8 FUN_146d7bdf8 body=832 status=ok
// SIG undefined FUN_146d7bdf8(void)

undefined8
FUN_146d7bdf8(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1b8 [32];
  double local_198;
  double *local_190;
  double *local_188;
  double *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_198 = dVar4 * param_5;
    local_78 = dVar7 * dVar1;
    local_80 = dVar6 * dVar1;
    local_88 = dVar5 * dVar1;
    local_128 = *param_3;
    uStack_120 = param_3[1];
    local_f8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_100 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_118 = param_3[2];
    uStack_110 = param_3[3];
    local_108 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    local_138 = *(undefined8 *)(param_1 + 0x30);
    local_158 = &local_148;
    local_148 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x28);
    local_160 = param_12;
    local_168 = param_11;
    local_170 = param_10;
    local_178 = param_9;
    local_180 = &local_b8;
    local_188 = &local_a0;
    local_190 = &local_c0;
    cVar2 = FUN_146e3cda4(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_c0 < param_5)) {
      *param_6 = dVar1 * local_c0;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_a0;
      param_7[1] = dVar5 * local_98;
      param_7[2] = dVar6 * local_90;
      local_a8 = *(double *)(param_1 + 0x48) * local_a8;
      local_b0 = *(double *)(param_1 + 0x40) * local_b0;
      local_b8 = *(double *)(param_1 + 0x38) * local_b8;
      dVar6 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
      if (((dVar6 != 1.0) || (dVar5 = local_a8, dVar4 = local_b0, dVar7 = local_b8, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_a8 * dVar6;
        dVar4 = local_b0 * dVar6;
        dVar7 = local_b8 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_146d7bfec;
    }
  }
  uVar3 = 0;
LAB_146d7bfec:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146d7c13a FUN_146d7c13a body=250 status=ok
// SIG undefined FUN_146d7c13a(void)

void FUN_146d7c13a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386ca;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c236 FUN_146d7c236 body=252 status=ok
// SIG undefined FUN_146d7c236(void)

void FUN_146d7c236(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144857b9e;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c334 FUN_146d7c334 body=250 status=ok
// SIG undefined FUN_146d7c334(void)

void FUN_146d7c334(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386e2;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c430 FUN_146d7c430 body=252 status=ok
// SIG undefined FUN_146d7c430(void)

void FUN_146d7c430(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_14172546a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c52e FUN_146d7c52e body=252 status=ok
// SIG undefined FUN_146d7c52e(void)

void FUN_146d7c52e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c62c FUN_146d7c62c body=252 status=ok
// SIG undefined FUN_146d7c62c(void)

void FUN_146d7c62c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144a12d46;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c72a FUN_146d7c72a body=252 status=ok
// SIG undefined FUN_146d7c72a(void)

void FUN_146d7c72a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c828 FUN_146d7c828 body=252 status=ok
// SIG undefined FUN_146d7c828(void)

void FUN_146d7c828(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = &LAB_146cc500a;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144b038b4;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7c925 FUN_146d7c925 body=530 status=ok
// SIG undefined FUN_146d7c925(void)

void FUN_146d7c925(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    goto switchD_146d7c9eb_caseD_0;
  case 1:
switchD_146d7c9eb_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  case 2:
  case 5:
  case 6:
  case 7:
switchD_146d7c980_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d7c13a(param_3,param_1,param_2);
    return;
  case 3:
switchD_146d7c9eb_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d7c925(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_146d7ca10;
  case 8:
switchD_146d7c9eb_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  default:
    switch(uVar1) {
    case 0x40:
      break;
    case 0x41:
      goto switchD_146d7c9eb_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_146d7c980_caseD_82;
    case 0x43:
      goto switchD_146d7c9eb_caseD_3;
    case 0x48:
      goto switchD_146d7c9eb_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = *(undefined8 *)param_3[6];
        local_98 = param_3[8];
        local_a0 = *(undefined1 *)param_3[7];
        local_b0 = param_3[5];
        local_c0 = *(undefined4 *)(param_3 + 3);
        uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
        uStack_b8 = *(undefined4 *)(param_3 + 4);
        uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
        local_c8 = *(undefined8 *)param_3[2];
        local_90 = local_a8;
        FUN_146d7cbc9(param_1,*param_3,param_2,param_3[1]);
        break;
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
      default:
        goto switchD_146d7c980_caseD_82;
      case 0x83:
        local_a8 = *(undefined8 *)param_3[6];
        local_98 = param_3[8];
        local_a0 = *(undefined1 *)param_3[7];
        local_b0 = param_3[5];
        local_c0 = *(undefined4 *)(param_3 + 3);
        uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
        uStack_b8 = *(undefined4 *)(param_3 + 4);
        uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
        local_c8 = *(undefined8 *)param_3[2];
        local_90 = local_a8;
        FUN_146d7cd07(param_1,*param_3,param_2,param_3[1]);
        break;
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
      }
LAB_146d7ca10:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
    }
switchD_146d7c9eb_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  }
}



// FUNCTION 146d7cbc9 FUN_146d7cbc9 body=317 status=ok
// SIG undefined FUN_146d7cbc9(void)

void FUN_146d7cbc9(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_60;
  float local_58;
  float local_54;
  undefined1 *local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_58 = (float)*(double *)(param_1 + 0x10);
  local_54 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_50 = &LAB_146cc500a;
  local_70 = param_12;
  local_78 = param_11;
  local_80 = param_10;
  local_88 = param_9;
  local_90 = param_8;
  local_a0 = param_6;
  uStack_98 = param_7;
  local_a8 = param_5;
  local_60 = param_1;
  local_48 = param_2;
  FUN_1417283d7(&local_60);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7cd07 FUN_146d7cd07 body=305 status=ok
// SIG undefined FUN_146d7cd07(void)

void FUN_146d7cd07(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  float local_38;
  float local_34;
  code *local_30;
  longlong local_28;
  float local_20;
  float local_1c;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = (float)*(double *)(param_2 + 0x10);
  local_1c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_18 = &LAB_146cc500a;
  local_38 = (float)*(double *)(param_1 + 0x10);
  local_34 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_30 = FUN_146cc5596;
  local_50 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_80 = param_6;
  uStack_78 = param_7;
  local_88 = param_5;
  local_40 = param_1;
  local_28 = param_2;
  FUN_1417283d7(&local_40);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7ce39 FUN_146d7ce39 body=285 status=ok
// SIG undefined FUN_146d7ce39(void)

void FUN_146d7ce39(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  float local_38;
  float local_34;
  undefined1 *local_30;
  longlong local_28;
  float local_20;
  float local_1c;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = (float)*(double *)(param_2 + 0x10);
  local_1c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_18 = &LAB_146cc500a;
  local_38 = (float)*(double *)(param_1 + 0x10);
  local_34 = (float)*(double *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_30 = &LAB_146d5ef26;
  local_50 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_80 = param_6;
  uStack_78 = param_7;
  local_88 = param_5;
  local_40 = param_1;
  local_28 = param_2;
  FUN_1417283d7(&local_40);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7cf57 FUN_146d7cf57 body=285 status=ok
// SIG undefined FUN_146d7cf57(void)

void FUN_146d7cf57(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  float local_38;
  float local_34;
  undefined1 *local_30;
  longlong local_28;
  float local_20;
  float local_1c;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = (float)*(double *)(param_2 + 0x10);
  local_1c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_18 = &LAB_146cc500a;
  local_38 = (float)*(double *)(param_1 + 0x10);
  local_34 = (float)*(double *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_30 = &LAB_146d5efe8;
  local_50 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_80 = param_6;
  uStack_78 = param_7;
  local_88 = param_5;
  local_40 = param_1;
  local_28 = param_2;
  FUN_1417283d7(&local_40);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7d07c FUN_146d7d07c body=351 status=ok
// SIG undefined FUN_146d7d07c(void)

undefined8 FUN_146d7d07c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_146d7b150(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7d1dc FUN_146d7d1dc body=3040 status=ok
// SIG undefined FUN_146d7d1dc(void)

ulonglong FUN_146d7d1dc(longlong *param_1,double *param_2,double param_3,longlong param_4,
                       double *param_5,double *param_6,double *param_7,double *param_8,
                       double *param_9,double *param_10,double *param_11,double *param_12,
                       char param_13)

{
  byte bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
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
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  double **local_278;
  double *local_268;
  double *pdStack_260;
  double local_258;
  longlong local_250;
  double *local_248;
  double *local_240;
  double *local_238;
  double *local_230;
  double *local_228;
  double *local_220;
  double *local_218;
  double *local_210;
  char local_208;
  undefined1 *local_200;
  double **local_1f8;
  double *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double *local_1d0;
  undefined8 *local_1c8;
  double *local_1c0;
  double *local_1b8;
  double *local_1b0;
  undefined8 *local_1a8;
  char *local_1a0;
  undefined1 *local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [96];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  char local_b1;
  ulonglong local_b0;
  
  cVar5 = param_13;
  pdVar4 = param_12;
  pdVar3 = param_7;
  pdVar2 = param_6;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_b1 = param_13;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 6,&local_268,param_2);
    local_278 = (double **)CONCAT71(local_278._1_7_,cVar5);
    local_280 = pdVar4;
    local_288 = param_11;
    local_290 = param_10;
    local_298 = param_9;
    local_2a0 = param_8;
    local_2a8 = pdVar3;
    local_2b0 = pdVar2;
    local_2b8 = param_5;
    uVar6 = FUN_146d7d1dc(param_1[4],&local_268,param_3,param_4);
    goto LAB_146d7d424;
  }
  *(undefined4 *)param_10 = 0xffffffff;
  local_d8 = -1.79769313486232e+308;
  dStack_d0 = -1.79769313486232e+308;
  local_c8 = -1.79769313486232e+308;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = 0.0;
  FUN_1449437a2(param_4,local_158,param_2);
  dVar10 = *param_5;
  dVar14 = param_5[1];
  dVar8 = param_2[2] * -1.0;
  dVar9 = param_2[3] * 1.0;
  dVar11 = -*param_2;
  dVar12 = -param_2[1];
  dVar13 = dVar14 * dVar11 - dVar10 * dVar12;
  dVar15 = param_5[2] * dVar12 - dVar14 * dVar8;
  dVar17 = dVar10 * dVar8 - dVar11 * param_5[2];
  dVar15 = dVar15 + dVar15;
  dVar17 = dVar17 + dVar17;
  dVar13 = dVar13 + dVar13;
  local_168 = dVar9 * dVar13 + param_5[2] + (dVar17 * dVar11 - dVar15 * dVar12);
  local_178 = (dVar13 * dVar12 - dVar17 * dVar8) + dVar9 * dVar15 + dVar10;
  dStack_170 = *param_2 * dVar13 + dVar8 * dVar15 + dVar9 * dVar17 + dVar14;
  if ((char)param_1[3] == '\x01') {
    cVar5 = *(char *)((longlong)param_1 + 0x1c);
    if (((param_1 == (longlong *)0x0 || cVar5 != -0x78) || (0 < *(int *)(param_1[0x11] + 0x38))) &&
       ((param_3 == 0.0 ||
        ((*(char *)((longlong)param_3 + 0x1c) != -0x78 ||
         (0 < *(int *)(*(longlong *)((longlong)param_3 + 0x88) + 0x38))))))) {
      local_180 = param_2[6] - *(double *)(param_4 + 0x30);
      dVar10 = param_2[5] - *(double *)(param_4 + 0x28);
      local_198 = local_190;
      local_190._8_4_ = SUB84(dVar10,0);
      local_190._0_8_ = param_2[4] - *(double *)(param_4 + 0x20);
      local_190._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_1d0 = &local_178;
      local_1c8 = &param_6;
      local_1c0 = pdVar3;
      local_1b8 = &local_d8;
      local_1b0 = &local_f8;
      local_1a8 = &param_12;
      local_1a0 = &local_b1;
      local_1d8 = param_3;
      switch(cVar5) {
      case '\0':
      case '\x02':
      case '\x05':
      case '\x06':
      case '\a':
switchD_146d7db78_caseD_82:
        cVar5 = FUN_146d7e100(&local_1d8,param_1,local_158);
        break;
      case '\x01':
        cVar5 = FUN_146d7e1e0(&local_1d8,param_1,local_158);
        break;
      case '\x03':
        cVar5 = FUN_146d7e2bc(&local_1d8,param_1,local_158);
        break;
      case '\x04':
        FUN_1447dc19e(param_1 + 6,&local_268,local_158);
        cVar5 = FUN_146d7ebb2(param_1[4],&local_268,&local_1d8);
        break;
      case '\b':
        cVar5 = FUN_146d7e39c(&local_1d8,param_1,local_158);
        break;
      default:
        switch(cVar5) {
        case '@':
          cVar5 = FUN_146d7e822(&local_1d8,param_1,local_158);
          break;
        case 'A':
          cVar5 = FUN_146d7e90e(&local_1d8,param_1,local_158);
          break;
        case 'B':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
          goto switchD_146d7db78_caseD_82;
        case 'C':
          cVar5 = FUN_146d7e9ea(&local_1d8,param_1,local_158);
          break;
        case 'H':
          cVar5 = FUN_146d7ead6(&local_1d8,param_1,local_158);
          break;
        default:
          switch(cVar5) {
          case -0x80:
            cVar5 = FUN_146d7e478(&local_1d8,param_1,local_158);
            break;
          case -0x7f:
            cVar5 = FUN_146d7e572(&local_1d8,param_1,local_158);
            break;
          default:
            goto switchD_146d7db78_caseD_82;
          case -0x7d:
            cVar5 = FUN_146d7e64c(&local_1d8,param_1,local_158);
            break;
          case -0x78:
            cVar5 = FUN_146d7e746(&local_1d8,param_1,local_158);
          }
        }
      }
      goto LAB_146d7d6b6;
    }
  }
  else {
    switch(bVar1) {
    case 5:
    case 0xf:
      local_268 = &local_1d8;
      local_1d8 = (double)((ulonglong)local_1d8 & 0xffffffffffffff00);
      *pdVar3 = 1.79769313486232e+308;
      local_1f8 = &local_268;
      local_248 = param_5;
      local_240 = pdVar2;
      local_238 = pdVar3;
      local_230 = param_8;
      local_228 = param_9;
      local_220 = param_10;
      local_218 = param_11;
      local_210 = pdVar4;
      local_208 = cVar5;
      local_200 = &LAB_146d7edee;
      pdStack_260 = param_2;
      local_258 = param_3;
      local_250 = param_4;
      FUN_146db006e(param_1);
      uVar6 = (ulonglong)local_1d8 & 0xff;
      goto LAB_146d7d424;
    case 6:
      local_288 = (double *)CONCAT71(local_288._1_7_,cVar5);
      local_290 = pdVar4;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = thunk_FUN_146dd5d0a(param_1,param_3,local_158,&local_178);
      break;
    default:
      if (-1 < (char)bVar1) {
        if (bVar1 < 0x40) goto LAB_146d7d422;
        local_278 = &local_268;
        local_268 = (double *)&DAT_3ff0000000000000;
        pdStack_260 = (double *)&DAT_3ff0000000000000;
        local_258 = 1.0;
        plVar7 = (longlong *)param_1[5];
        goto LAB_146d7d6ae;
      }
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar5);
      local_288 = pdVar4;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = FUN_146d7ddbe(param_1,param_3,local_158,&local_178);
      break;
    case 0xb:
      local_278 = &local_1f0;
      local_1f0 = (double *)0x3ff0000000000000;
      local_1e8 = 0x3ff0000000000000;
      local_1e0 = 0x3ff0000000000000;
      plVar7 = param_1;
LAB_146d7d6ae:
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar5);
      local_288 = pdVar4;
      local_290 = param_11;
      local_298 = param_10;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = FUN_146e3d102(plVar7,param_3,local_158,&local_178);
      break;
    case 0xc:
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar5);
      local_288 = pdVar4;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = FUN_146d94ea2(param_1,param_3,local_158,&local_178);
    }
LAB_146d7d6b6:
    if (cVar5 != '\0') {
      if ((0.0 < *pdVar3) || (uVar6 = 1, local_b1 == '\x01')) {
        dVar9 = *param_2;
        dVar11 = param_2[1];
        dVar12 = param_2[2];
        dVar10 = param_2[3];
        dVar14 = dStack_f0 * dVar9 - local_f8 * dVar11;
        dVar13 = local_e8 * dVar11 - dStack_f0 * dVar12;
        dVar15 = local_f8 * dVar12 - dVar9 * local_e8;
        dVar13 = dVar13 + dVar13;
        dVar15 = dVar15 + dVar15;
        dVar14 = dVar14 + dVar14;
        dVar8 = dVar14 * dVar10 + local_e8 + (dVar15 * dVar9 - dVar13 * dVar11);
        dVar11 = (dVar14 * dVar11 - dVar15 * dVar12) + dVar10 * dVar13 + local_f8;
        dVar10 = (dVar12 * dVar13 - dVar9 * dVar14) + param_2[3] * dVar15 + dStack_f0;
        dVar14 = dVar8 * dVar8 + dVar11 * dVar11 + dVar10 * dVar10;
        if ((dVar14 != 1.0) || (NAN(dVar14))) {
          if (9.999999747378752e-05 <= dVar14) {
            dVar14 = 1.0 / SQRT(dVar14);
            dVar8 = dVar8 * dVar14;
            dVar10 = dVar10 * dVar14;
            dVar11 = dVar14 * dVar11;
          }
          else {
            dVar8 = 0.0;
            dVar11 = 1.0;
            dVar10 = 0.0;
          }
        }
        *param_9 = dVar11;
        param_9[1] = dVar10;
        param_9[2] = dVar8;
        dVar12 = *param_2;
        dVar13 = param_2[1];
        dVar15 = param_2[2];
        dVar14 = param_2[3];
        dVar10 = param_2[3];
        dVar11 = dStack_d0 * dVar12 - local_d8 * dVar13;
        dVar17 = local_c8 * dVar13 - dStack_d0 * dVar15;
        dVar16 = local_d8 * dVar15 - dVar12 * local_c8;
        dVar17 = dVar17 + dVar17;
        dVar16 = dVar16 + dVar16;
        dVar11 = dVar11 + dVar11;
        dVar9 = param_2[5];
        dVar8 = param_2[6];
        *param_8 = (dVar11 * dVar13 - dVar16 * dVar15) + dVar14 * dVar17 + local_d8 + param_2[4];
        param_8[1] = (dVar15 * dVar17 - dVar12 * dVar11) + dVar10 * dVar16 + dStack_d0 + dVar9;
        param_8[2] = dVar11 * dVar14 + local_c8 + (dVar16 * dVar12 - dVar17 * dVar13) + dVar8;
        local_2b8 = param_9;
        (**(code **)(*param_1 + 0xc0))(param_1,&local_268,&local_178,*(undefined4 *)param_10);
        dVar9 = *param_2;
        dVar11 = param_2[1];
        dVar12 = param_2[2];
        dVar10 = param_2[3];
        dVar14 = param_2[3];
        dVar8 = (double)pdStack_260 * dVar9 - (double)local_268 * dVar11;
        dVar13 = local_258 * dVar11 - (double)pdStack_260 * dVar12;
        dVar15 = (double)local_268 * dVar12 - dVar9 * local_258;
        dVar13 = dVar13 + dVar13;
        dVar15 = dVar15 + dVar15;
        dVar8 = dVar8 + dVar8;
        *param_11 = (dVar8 * dVar11 - dVar15 * dVar12) + dVar10 * dVar13 + (double)local_268;
        param_11[1] = (dVar12 * dVar13 - dVar9 * dVar8) + dVar14 * dVar15 + (double)pdStack_260;
        param_11[2] = dVar8 * dVar10 + local_258 + (dVar15 * dVar9 - dVar13 * dVar11);
        uVar6 = 1;
      }
      goto LAB_146d7d424;
    }
  }
LAB_146d7d422:
  uVar6 = 0;
LAB_146d7d424:
  if ((local_b0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7ddbe FUN_146d7ddbe body=832 status=ok
// SIG undefined FUN_146d7ddbe(void)

undefined8
FUN_146d7ddbe(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1b8 [32];
  double local_198;
  double *local_190;
  double *local_188;
  double *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_198 = dVar4 * param_5;
    local_78 = dVar7 * dVar1;
    local_80 = dVar6 * dVar1;
    local_88 = dVar5 * dVar1;
    local_128 = *param_3;
    uStack_120 = param_3[1];
    local_f8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_100 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_118 = param_3[2];
    uStack_110 = param_3[3];
    local_108 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    local_138 = *(undefined8 *)(param_1 + 0x30);
    local_158 = &local_148;
    local_148 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x28);
    local_160 = param_12;
    local_168 = param_11;
    local_170 = param_10;
    local_178 = param_9;
    local_180 = &local_b8;
    local_188 = &local_a0;
    local_190 = &local_c0;
    cVar2 = FUN_146e3d102(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_c0 < param_5)) {
      *param_6 = dVar1 * local_c0;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_a0;
      param_7[1] = dVar5 * local_98;
      param_7[2] = dVar6 * local_90;
      local_a8 = *(double *)(param_1 + 0x48) * local_a8;
      local_b0 = *(double *)(param_1 + 0x40) * local_b0;
      local_b8 = *(double *)(param_1 + 0x38) * local_b8;
      dVar6 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
      if (((dVar6 != 1.0) || (dVar5 = local_a8, dVar4 = local_b0, dVar7 = local_b8, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_a8 * dVar6;
        dVar4 = local_b0 * dVar6;
        dVar7 = local_b8 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_146d7dfb2;
    }
  }
  uVar3 = 0;
LAB_146d7dfb2:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146d7e100 FUN_146d7e100 body=223 status=ok
// SIG undefined FUN_146d7e100(void)

void FUN_146d7e100(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386ca;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e1e0 FUN_146d7e1e0 body=219 status=ok
// SIG undefined FUN_146d7e1e0(void)

void FUN_146d7e1e0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144857b9e;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e2bc FUN_146d7e2bc body=223 status=ok
// SIG undefined FUN_146d7e2bc(void)

void FUN_146d7e2bc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386e2;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e39c FUN_146d7e39c body=219 status=ok
// SIG undefined FUN_146d7e39c(void)

void FUN_146d7e39c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_14172546a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e478 FUN_146d7e478 body=249 status=ok
// SIG undefined FUN_146d7e478(void)

void FUN_146d7e478(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e572 FUN_146d7e572 body=217 status=ok
// SIG undefined FUN_146d7e572(void)

void FUN_146d7e572(longlong *param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_50;
  float local_48;
  undefined4 local_44;
  code *local_40;
  longlong local_38;
  float local_30;
  undefined4 local_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(undefined8 *)param_1[6];
  local_68 = param_1[8];
  local_70 = *(undefined1 *)param_1[7];
  local_80 = param_1[5];
  local_90 = (undefined4)param_1[3];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_88 = (undefined4)param_1[4];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_98 = *(undefined8 *)param_1[2];
  local_38 = *param_1;
  local_30 = (float)*(double *)(local_38 + 0x10);
  local_2c = 0;
  local_28 = FUN_146cc5264;
  local_48 = (float)*(double *)(param_2 + 0x10);
  local_44 = 0;
  local_40 = FUN_146cc5264;
  local_60 = local_78;
  local_50 = param_2;
  FUN_1417283d7(&local_50,&local_38,local_98,param_1[1]);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e64c FUN_146d7e64c body=249 status=ok
// SIG undefined FUN_146d7e64c(void)

void FUN_146d7e64c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e746 FUN_146d7e746 body=219 status=ok
// SIG undefined FUN_146d7e746(void)

void FUN_146d7e746(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144a12d46;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e822 FUN_146d7e822 body=235 status=ok
// SIG undefined FUN_146d7e822(void)

void FUN_146d7e822(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5ef26;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e90e FUN_146d7e90e body=219 status=ok
// SIG undefined FUN_146d7e90e(void)

void FUN_146d7e90e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7e9ea FUN_146d7e9ea body=235 status=ok
// SIG undefined FUN_146d7e9ea(void)

void FUN_146d7e9ea(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5efe8;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7ead6 FUN_146d7ead6 body=219 status=ok
// SIG undefined FUN_146d7ead6(void)

void FUN_146d7ead6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_146cc5264;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144b038b4;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7ebb2 FUN_146d7ebb2 body=373 status=ok
// SIG undefined FUN_146d7ebb2(void)

void FUN_146d7ebb2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d7ec43_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d7ec43_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d7ec09_caseD_82;
  case 3:
switchD_146d7ec43_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d7ebb2(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d7ec43_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d7ec43_caseD_0;
    case 0x41:
      goto switchD_146d7ec43_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d7ec43_caseD_3;
    case 0x48:
      goto switchD_146d7ec43_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d7ec09_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d7e100(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d7edf4 FUN_146d7edf4 body=351 status=ok
// SIG undefined FUN_146d7edf4(void)

undefined8 FUN_146d7edf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_146d7d1dc(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7ef54 FUN_146d7ef54 body=3238 status=ok
// SIG undefined FUN_146d7ef54(void)

ulonglong FUN_146d7ef54(longlong *param_1,double *param_2,double param_3,longlong param_4,
                       double *param_5,double *param_6,double *param_7,double *param_8,
                       double *param_9,double *param_10,double *param_11,double *param_12,
                       char param_13)

{
  byte bVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
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
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  double **local_278;
  double *local_268;
  double *pdStack_260;
  double local_258;
  longlong local_250;
  double *local_248;
  double *local_240;
  double *local_238;
  double *local_230;
  double *local_228;
  double *local_220;
  double *local_218;
  double *local_210;
  char local_208;
  undefined1 *local_200;
  double **local_1f8;
  double *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double *local_1d0;
  undefined8 *local_1c8;
  double *local_1c0;
  double *local_1b8;
  double *local_1b0;
  undefined8 *local_1a8;
  char *local_1a0;
  double *local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [96];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  char local_b1;
  ulonglong local_b0;
  
  cVar6 = param_13;
  pdVar5 = param_12;
  pdVar4 = param_7;
  pdVar3 = param_6;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_b1 = param_13;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 6,&local_268,param_2);
    local_278 = (double **)CONCAT71(local_278._1_7_,cVar6);
    local_280 = pdVar5;
    local_288 = param_11;
    local_290 = param_10;
    local_298 = param_9;
    local_2a0 = param_8;
    local_2a8 = pdVar4;
    local_2b0 = pdVar3;
    local_2b8 = param_5;
    uVar7 = FUN_146d7ef54(param_1[4],&local_268,param_3,param_4);
    goto LAB_146d7f19d;
  }
  *(undefined4 *)param_10 = 0xffffffff;
  local_d8 = -1.79769313486232e+308;
  dStack_d0 = -1.79769313486232e+308;
  local_c8 = -1.79769313486232e+308;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = 0.0;
  FUN_1449437a2(param_4,local_158,param_2);
  dVar11 = *param_5;
  dVar15 = param_5[1];
  dVar9 = param_2[2] * -1.0;
  dVar10 = param_2[3] * 1.0;
  dVar12 = -*param_2;
  dVar13 = -param_2[1];
  dVar14 = dVar15 * dVar12 - dVar11 * dVar13;
  dVar16 = param_5[2] * dVar13 - dVar15 * dVar9;
  dVar18 = dVar11 * dVar9 - dVar12 * param_5[2];
  dVar16 = dVar16 + dVar16;
  dVar18 = dVar18 + dVar18;
  dVar14 = dVar14 + dVar14;
  local_168 = dVar10 * dVar14 + param_5[2] + (dVar18 * dVar12 - dVar16 * dVar13);
  local_178 = (dVar14 * dVar13 - dVar18 * dVar9) + dVar10 * dVar16 + dVar11;
  dStack_170 = *param_2 * dVar14 + dVar9 * dVar16 + dVar10 * dVar18 + dVar15;
  if ((char)param_1[3] == '\x01') {
    cVar2 = *(char *)((longlong)param_1 + 0x1c);
    if (((param_1 == (longlong *)0x0 || cVar2 != -0x78) || (0 < *(int *)(param_1[0x11] + 0x38))) &&
       ((param_3 == 0.0 ||
        ((*(char *)((longlong)param_3 + 0x1c) != -0x78 ||
         (0 < *(int *)(*(longlong *)((longlong)param_3 + 0x88) + 0x38))))))) {
      local_180 = param_2[6] - *(double *)(param_4 + 0x30);
      dVar11 = param_2[5] - *(double *)(param_4 + 0x28);
      local_198 = (double *)local_190;
      local_190._8_4_ = SUB84(dVar11,0);
      local_190._0_8_ = param_2[4] - *(double *)(param_4 + 0x20);
      local_190._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_1d0 = &local_178;
      local_1c8 = &param_6;
      local_1c0 = pdVar4;
      local_1b8 = &local_d8;
      local_1b0 = &local_f8;
      local_1a8 = &param_12;
      local_1a0 = &local_b1;
      local_1d8 = param_3;
      switch(cVar2) {
      case '\0':
      case '\x02':
      case '\x05':
      case '\x06':
      case '\a':
switchD_146d7f8fd_caseD_82:
        cVar6 = FUN_146d7ff3e(&local_1d8,param_1,local_158);
        break;
      case '\x01':
        cVar6 = FUN_146d8003a(&local_1d8,param_1,local_158);
        break;
      case '\x03':
        cVar6 = FUN_146d80138(&local_1d8,param_1,local_158);
        break;
      case '\x04':
        FUN_1447dc19e(param_1 + 6,&local_268,local_158);
        cVar6 = FUN_146d80729(param_1[4],&local_268,&local_1d8);
        break;
      case '\b':
        cVar6 = FUN_146d80234(&local_1d8,param_1,local_158);
        break;
      default:
        switch(cVar2) {
        case '@':
          local_280 = pdVar5;
          local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
          local_298 = pdVar5;
          local_2b0 = pdVar4;
          local_2b8 = pdVar3;
          local_2a8 = local_1b8;
          local_2a0 = local_1b0;
          local_288 = local_198;
          cVar6 = FUN_146d80c3d(param_1,param_3,local_158,&local_178);
          break;
        case 'A':
          cVar6 = FUN_146d8052e(&local_1d8,param_1,local_158);
          break;
        case 'B':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
          goto switchD_146d7f8fd_caseD_82;
        case 'C':
          local_280 = pdVar5;
          local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
          local_298 = pdVar5;
          local_2b0 = pdVar4;
          local_2b8 = pdVar3;
          local_2a8 = local_1b8;
          local_2a0 = local_1b0;
          local_288 = local_198;
          cVar6 = FUN_146d80d5b(param_1,param_3,local_158,&local_178);
          break;
        case 'H':
          cVar6 = FUN_146d8062c(&local_1d8,param_1,local_158);
          break;
        default:
          switch(cVar2) {
          case -0x80:
            local_280 = pdVar5;
            local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
            local_298 = pdVar5;
            local_2b0 = pdVar4;
            local_2b8 = pdVar3;
            local_2a8 = local_1b8;
            local_2a0 = local_1b0;
            local_288 = local_198;
            cVar6 = FUN_146d809cd(param_1,param_3,local_158,&local_178);
            break;
          case -0x7f:
            cVar6 = FUN_146d80332(&local_1d8,param_1,local_158);
            break;
          default:
            goto switchD_146d7f8fd_caseD_82;
          case -0x7d:
            local_280 = pdVar5;
            local_290 = (double *)CONCAT71(local_290._1_7_,cVar6);
            local_298 = pdVar5;
            local_2b0 = pdVar4;
            local_2b8 = pdVar3;
            local_2a8 = local_1b8;
            local_2a0 = local_1b0;
            local_288 = local_198;
            cVar6 = FUN_146d80aff(param_1,param_3,local_158,&local_178);
            break;
          case -0x78:
            cVar6 = FUN_146d80430(&local_1d8,param_1,local_158);
          }
        }
      }
      goto LAB_146d7f42f;
    }
  }
  else {
    switch(bVar1) {
    case 5:
    case 0xf:
      local_268 = &local_1d8;
      local_1d8 = (double)((ulonglong)local_1d8 & 0xffffffffffffff00);
      *pdVar4 = 1.79769313486232e+308;
      local_1f8 = &local_268;
      local_248 = param_5;
      local_240 = pdVar3;
      local_238 = pdVar4;
      local_230 = param_8;
      local_228 = param_9;
      local_220 = param_10;
      local_218 = param_11;
      local_210 = pdVar5;
      local_208 = cVar6;
      local_200 = &LAB_146d80e7a;
      pdStack_260 = param_2;
      local_258 = param_3;
      local_250 = param_4;
      FUN_146db006e(param_1);
      uVar7 = (ulonglong)local_1d8 & 0xff;
      goto LAB_146d7f19d;
    case 6:
      local_288 = (double *)CONCAT71(local_288._1_7_,cVar6);
      local_290 = pdVar5;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = thunk_FUN_146dd5ffc(param_1,param_3,local_158,&local_178);
      break;
    default:
      if (-1 < (char)bVar1) {
        if (bVar1 < 0x40) goto LAB_146d7f19b;
        local_278 = &local_268;
        local_268 = (double *)&DAT_3ff0000000000000;
        pdStack_260 = (double *)&DAT_3ff0000000000000;
        local_258 = 1.0;
        plVar8 = (longlong *)param_1[5];
        goto LAB_146d7f427;
      }
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar6);
      local_288 = pdVar5;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = FUN_146d7fbfc(param_1,param_3,local_158,&local_178);
      break;
    case 0xb:
      local_278 = &local_1f0;
      local_1f0 = (double *)0x3ff0000000000000;
      local_1e8 = 0x3ff0000000000000;
      local_1e0 = 0x3ff0000000000000;
      plVar8 = param_1;
LAB_146d7f427:
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar6);
      local_288 = pdVar5;
      local_290 = param_11;
      local_298 = param_10;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = FUN_146e3d460(plVar8,param_3,local_158,&local_178);
      break;
    case 0xc:
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar6);
      local_288 = pdVar5;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar4;
      local_2b8 = pdVar3;
      cVar6 = FUN_146d95292(param_1,param_3,local_158,&local_178);
    }
LAB_146d7f42f:
    if (cVar6 != '\0') {
      if ((0.0 < *pdVar4) || (uVar7 = 1, local_b1 == '\x01')) {
        dVar10 = *param_2;
        dVar12 = param_2[1];
        dVar13 = param_2[2];
        dVar11 = param_2[3];
        dVar15 = dStack_f0 * dVar10 - local_f8 * dVar12;
        dVar14 = local_e8 * dVar12 - dStack_f0 * dVar13;
        dVar16 = local_f8 * dVar13 - dVar10 * local_e8;
        dVar14 = dVar14 + dVar14;
        dVar16 = dVar16 + dVar16;
        dVar15 = dVar15 + dVar15;
        dVar9 = dVar15 * dVar11 + local_e8 + (dVar16 * dVar10 - dVar14 * dVar12);
        dVar12 = (dVar15 * dVar12 - dVar16 * dVar13) + dVar11 * dVar14 + local_f8;
        dVar11 = (dVar13 * dVar14 - dVar10 * dVar15) + param_2[3] * dVar16 + dStack_f0;
        dVar15 = dVar9 * dVar9 + dVar12 * dVar12 + dVar11 * dVar11;
        if ((dVar15 != 1.0) || (NAN(dVar15))) {
          if (9.999999747378752e-05 <= dVar15) {
            dVar15 = 1.0 / SQRT(dVar15);
            dVar9 = dVar9 * dVar15;
            dVar11 = dVar11 * dVar15;
            dVar12 = dVar15 * dVar12;
          }
          else {
            dVar9 = 0.0;
            dVar12 = 1.0;
            dVar11 = 0.0;
          }
        }
        *param_9 = dVar12;
        param_9[1] = dVar11;
        param_9[2] = dVar9;
        dVar13 = *param_2;
        dVar14 = param_2[1];
        dVar16 = param_2[2];
        dVar15 = param_2[3];
        dVar11 = param_2[3];
        dVar12 = dStack_d0 * dVar13 - local_d8 * dVar14;
        dVar18 = local_c8 * dVar14 - dStack_d0 * dVar16;
        dVar17 = local_d8 * dVar16 - dVar13 * local_c8;
        dVar18 = dVar18 + dVar18;
        dVar17 = dVar17 + dVar17;
        dVar12 = dVar12 + dVar12;
        dVar10 = param_2[5];
        dVar9 = param_2[6];
        *param_8 = (dVar12 * dVar14 - dVar17 * dVar16) + dVar15 * dVar18 + local_d8 + param_2[4];
        param_8[1] = (dVar16 * dVar18 - dVar13 * dVar12) + dVar11 * dVar17 + dStack_d0 + dVar10;
        param_8[2] = dVar12 * dVar15 + local_c8 + (dVar17 * dVar13 - dVar18 * dVar14) + dVar9;
        local_2b8 = param_9;
        (**(code **)(*param_1 + 0xc0))(param_1,&local_268,&local_178,*(undefined4 *)param_10);
        dVar10 = *param_2;
        dVar12 = param_2[1];
        dVar13 = param_2[2];
        dVar11 = param_2[3];
        dVar15 = param_2[3];
        dVar9 = (double)pdStack_260 * dVar10 - (double)local_268 * dVar12;
        dVar14 = local_258 * dVar12 - (double)pdStack_260 * dVar13;
        dVar16 = (double)local_268 * dVar13 - dVar10 * local_258;
        dVar14 = dVar14 + dVar14;
        dVar16 = dVar16 + dVar16;
        dVar9 = dVar9 + dVar9;
        *param_11 = (dVar9 * dVar12 - dVar16 * dVar13) + dVar11 * dVar14 + (double)local_268;
        param_11[1] = (dVar13 * dVar14 - dVar10 * dVar9) + dVar15 * dVar16 + (double)pdStack_260;
        param_11[2] = dVar9 * dVar11 + local_258 + (dVar16 * dVar10 - dVar14 * dVar12);
        uVar7 = 1;
      }
      goto LAB_146d7f19d;
    }
  }
LAB_146d7f19b:
  uVar7 = 0;
LAB_146d7f19d:
  if ((local_b0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d7fbfc FUN_146d7fbfc body=832 status=ok
// SIG undefined FUN_146d7fbfc(void)

undefined8
FUN_146d7fbfc(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1b8 [32];
  double local_198;
  double *local_190;
  double *local_188;
  double *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_198 = dVar4 * param_5;
    local_78 = dVar7 * dVar1;
    local_80 = dVar6 * dVar1;
    local_88 = dVar5 * dVar1;
    local_128 = *param_3;
    uStack_120 = param_3[1];
    local_f8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_100 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_118 = param_3[2];
    uStack_110 = param_3[3];
    local_108 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    local_138 = *(undefined8 *)(param_1 + 0x30);
    local_158 = &local_148;
    local_148 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x28);
    local_160 = param_12;
    local_168 = param_11;
    local_170 = param_10;
    local_178 = param_9;
    local_180 = &local_b8;
    local_188 = &local_a0;
    local_190 = &local_c0;
    cVar2 = FUN_146e3d460(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_c0 < param_5)) {
      *param_6 = dVar1 * local_c0;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_a0;
      param_7[1] = dVar5 * local_98;
      param_7[2] = dVar6 * local_90;
      local_a8 = *(double *)(param_1 + 0x48) * local_a8;
      local_b0 = *(double *)(param_1 + 0x40) * local_b0;
      local_b8 = *(double *)(param_1 + 0x38) * local_b8;
      dVar6 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
      if (((dVar6 != 1.0) || (dVar5 = local_a8, dVar4 = local_b0, dVar7 = local_b8, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_a8 * dVar6;
        dVar4 = local_b0 * dVar6;
        dVar7 = local_b8 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_146d7fdf0;
    }
  }
  uVar3 = 0;
LAB_146d7fdf0:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146d7ff3e FUN_146d7ff3e body=250 status=ok
// SIG undefined FUN_146d7ff3e(void)

void FUN_146d7ff3e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386ca;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8003a FUN_146d8003a body=252 status=ok
// SIG undefined FUN_146d8003a(void)

void FUN_146d8003a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144857b9e;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80138 FUN_146d80138 body=250 status=ok
// SIG undefined FUN_146d80138(void)

void FUN_146d80138(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386e2;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80234 FUN_146d80234 body=252 status=ok
// SIG undefined FUN_146d80234(void)

void FUN_146d80234(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_14172546a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80332 FUN_146d80332 body=252 status=ok
// SIG undefined FUN_146d80332(void)

void FUN_146d80332(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80430 FUN_146d80430 body=252 status=ok
// SIG undefined FUN_146d80430(void)

void FUN_146d80430(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144a12d46;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8052e FUN_146d8052e body=252 status=ok
// SIG undefined FUN_146d8052e(void)

void FUN_146d8052e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8062c FUN_146d8062c body=252 status=ok
// SIG undefined FUN_146d8062c(void)

void FUN_146d8062c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  float local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_30 + 0x88) + 0x10))
                            & (ulonglong)*(double *)(local_30 + 0x10));
  local_20 = FUN_146cc5596;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144b038b4;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80729 FUN_146d80729 body=530 status=ok
// SIG undefined FUN_146d80729(void)

void FUN_146d80729(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    goto switchD_146d807ef_caseD_0;
  case 1:
switchD_146d807ef_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  case 2:
  case 5:
  case 6:
  case 7:
switchD_146d80784_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d7ff3e(param_3,param_1,param_2);
    return;
  case 3:
switchD_146d807ef_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d80729(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_146d80814;
  case 8:
switchD_146d807ef_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  default:
    switch(uVar1) {
    case 0x40:
      break;
    case 0x41:
      goto switchD_146d807ef_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_146d80784_caseD_82;
    case 0x43:
      goto switchD_146d807ef_caseD_3;
    case 0x48:
      goto switchD_146d807ef_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = *(undefined8 *)param_3[6];
        local_98 = param_3[8];
        local_a0 = *(undefined1 *)param_3[7];
        local_b0 = param_3[5];
        local_c0 = *(undefined4 *)(param_3 + 3);
        uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
        uStack_b8 = *(undefined4 *)(param_3 + 4);
        uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
        local_c8 = *(undefined8 *)param_3[2];
        local_90 = local_a8;
        FUN_146d809cd(param_1,*param_3,param_2,param_3[1]);
        break;
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
      default:
        goto switchD_146d80784_caseD_82;
      case 0x83:
        local_a8 = *(undefined8 *)param_3[6];
        local_98 = param_3[8];
        local_a0 = *(undefined1 *)param_3[7];
        local_b0 = param_3[5];
        local_c0 = *(undefined4 *)(param_3 + 3);
        uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
        uStack_b8 = *(undefined4 *)(param_3 + 4);
        uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
        local_c8 = *(undefined8 *)param_3[2];
        local_90 = local_a8;
        FUN_146d80aff(param_1,*param_3,param_2,param_3[1]);
        break;
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
      }
LAB_146d80814:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
    }
switchD_146d807ef_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  }
}



// FUNCTION 146d809cd FUN_146d809cd body=305 status=ok
// SIG undefined FUN_146d809cd(void)

void FUN_146d809cd(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  float local_38;
  float local_34;
  undefined1 *local_30;
  longlong local_28;
  float local_20;
  float local_1c;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = (float)*(double *)(param_2 + 0x10);
  local_1c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_18 = FUN_146cc5596;
  local_38 = (float)*(double *)(param_1 + 0x10);
  local_34 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_30 = &LAB_146cc500a;
  local_50 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_80 = param_6;
  uStack_78 = param_7;
  local_88 = param_5;
  local_40 = param_1;
  local_28 = param_2;
  FUN_1417283d7(&local_40);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80aff FUN_146d80aff body=317 status=ok
// SIG undefined FUN_146d80aff(void)

void FUN_146d80aff(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_60;
  float local_58;
  float local_54;
  code *local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_58 = (float)*(double *)(param_1 + 0x10);
  local_54 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_50 = FUN_146cc5596;
  local_70 = param_12;
  local_78 = param_11;
  local_80 = param_10;
  local_88 = param_9;
  local_90 = param_8;
  local_a0 = param_6;
  uStack_98 = param_7;
  local_a8 = param_5;
  local_60 = param_1;
  local_48 = param_2;
  FUN_1417283d7(&local_60);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80c3d FUN_146d80c3d body=285 status=ok
// SIG undefined FUN_146d80c3d(void)

void FUN_146d80c3d(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  float local_38;
  float local_34;
  undefined1 *local_30;
  longlong local_28;
  float local_20;
  float local_1c;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = (float)*(double *)(param_2 + 0x10);
  local_1c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_18 = FUN_146cc5596;
  local_38 = (float)*(double *)(param_1 + 0x10);
  local_34 = (float)*(double *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_30 = &LAB_146d5ef26;
  local_50 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_80 = param_6;
  uStack_78 = param_7;
  local_88 = param_5;
  local_40 = param_1;
  local_28 = param_2;
  FUN_1417283d7(&local_40);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80d5b FUN_146d80d5b body=285 status=ok
// SIG undefined FUN_146d80d5b(void)

void FUN_146d80d5b(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  float local_38;
  float local_34;
  undefined1 *local_30;
  longlong local_28;
  float local_20;
  float local_1c;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = (float)*(double *)(param_2 + 0x10);
  local_1c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_18 = FUN_146cc5596;
  local_38 = (float)*(double *)(param_1 + 0x10);
  local_34 = (float)*(double *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_30 = &LAB_146d5efe8;
  local_50 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_80 = param_6;
  uStack_78 = param_7;
  local_88 = param_5;
  local_40 = param_1;
  local_28 = param_2;
  FUN_1417283d7(&local_40);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80e80 FUN_146d80e80 body=351 status=ok
// SIG undefined FUN_146d80e80(void)

undefined8 FUN_146d80e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_146d7ef54(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d80fe0 FUN_146d80fe0 body=3040 status=ok
// SIG undefined FUN_146d80fe0(void)

ulonglong FUN_146d80fe0(longlong *param_1,double *param_2,double param_3,longlong param_4,
                       double *param_5,double *param_6,double *param_7,double *param_8,
                       double *param_9,double *param_10,double *param_11,double *param_12,
                       char param_13)

{
  byte bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
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
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  double **local_278;
  double *local_268;
  double *pdStack_260;
  double local_258;
  longlong local_250;
  double *local_248;
  double *local_240;
  double *local_238;
  double *local_230;
  double *local_228;
  double *local_220;
  double *local_218;
  double *local_210;
  char local_208;
  undefined1 *local_200;
  double **local_1f8;
  double *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double *local_1d0;
  undefined8 *local_1c8;
  double *local_1c0;
  double *local_1b8;
  double *local_1b0;
  undefined8 *local_1a8;
  char *local_1a0;
  undefined1 *local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [96];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  char local_b1;
  ulonglong local_b0;
  
  cVar5 = param_13;
  pdVar4 = param_12;
  pdVar3 = param_7;
  pdVar2 = param_6;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_b1 = param_13;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 6,&local_268,param_2);
    local_278 = (double **)CONCAT71(local_278._1_7_,cVar5);
    local_280 = pdVar4;
    local_288 = param_11;
    local_290 = param_10;
    local_298 = param_9;
    local_2a0 = param_8;
    local_2a8 = pdVar3;
    local_2b0 = pdVar2;
    local_2b8 = param_5;
    uVar6 = FUN_146d80fe0(param_1[4],&local_268,param_3,param_4);
    goto LAB_146d81228;
  }
  *(undefined4 *)param_10 = 0xffffffff;
  local_d8 = -1.79769313486232e+308;
  dStack_d0 = -1.79769313486232e+308;
  local_c8 = -1.79769313486232e+308;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = 0.0;
  FUN_1449437a2(param_4,local_158,param_2);
  dVar10 = *param_5;
  dVar14 = param_5[1];
  dVar8 = param_2[2] * -1.0;
  dVar9 = param_2[3] * 1.0;
  dVar11 = -*param_2;
  dVar12 = -param_2[1];
  dVar13 = dVar14 * dVar11 - dVar10 * dVar12;
  dVar15 = param_5[2] * dVar12 - dVar14 * dVar8;
  dVar17 = dVar10 * dVar8 - dVar11 * param_5[2];
  dVar15 = dVar15 + dVar15;
  dVar17 = dVar17 + dVar17;
  dVar13 = dVar13 + dVar13;
  local_168 = dVar9 * dVar13 + param_5[2] + (dVar17 * dVar11 - dVar15 * dVar12);
  local_178 = (dVar13 * dVar12 - dVar17 * dVar8) + dVar9 * dVar15 + dVar10;
  dStack_170 = *param_2 * dVar13 + dVar8 * dVar15 + dVar9 * dVar17 + dVar14;
  if ((char)param_1[3] == '\x01') {
    cVar5 = *(char *)((longlong)param_1 + 0x1c);
    if (((param_1 == (longlong *)0x0 || cVar5 != -0x78) || (0 < *(int *)(param_1[0x11] + 0x38))) &&
       ((param_3 == 0.0 ||
        ((*(char *)((longlong)param_3 + 0x1c) != -0x78 ||
         (0 < *(int *)(*(longlong *)((longlong)param_3 + 0x88) + 0x38))))))) {
      local_180 = param_2[6] - *(double *)(param_4 + 0x30);
      dVar10 = param_2[5] - *(double *)(param_4 + 0x28);
      local_198 = local_190;
      local_190._8_4_ = SUB84(dVar10,0);
      local_190._0_8_ = param_2[4] - *(double *)(param_4 + 0x20);
      local_190._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_1d0 = &local_178;
      local_1c8 = &param_6;
      local_1c0 = pdVar3;
      local_1b8 = &local_d8;
      local_1b0 = &local_f8;
      local_1a8 = &param_12;
      local_1a0 = &local_b1;
      local_1d8 = param_3;
      switch(cVar5) {
      case '\0':
      case '\x02':
      case '\x05':
      case '\x06':
      case '\a':
switchD_146d8197c_caseD_82:
        cVar5 = FUN_146d81f04(&local_1d8,param_1,local_158);
        break;
      case '\x01':
        cVar5 = FUN_146d81fe4(&local_1d8,param_1,local_158);
        break;
      case '\x03':
        cVar5 = FUN_146d820c0(&local_1d8,param_1,local_158);
        break;
      case '\x04':
        FUN_1447dc19e(param_1 + 6,&local_268,local_158);
        cVar5 = FUN_146d829b6(param_1[4],&local_268,&local_1d8);
        break;
      case '\b':
        cVar5 = FUN_146d821a0(&local_1d8,param_1,local_158);
        break;
      default:
        switch(cVar5) {
        case '@':
          cVar5 = FUN_146d82626(&local_1d8,param_1,local_158);
          break;
        case 'A':
          cVar5 = FUN_146d82712(&local_1d8,param_1,local_158);
          break;
        case 'B':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
          goto switchD_146d8197c_caseD_82;
        case 'C':
          cVar5 = FUN_146d827ee(&local_1d8,param_1,local_158);
          break;
        case 'H':
          cVar5 = FUN_146d828da(&local_1d8,param_1,local_158);
          break;
        default:
          switch(cVar5) {
          case -0x80:
            cVar5 = FUN_146d8227c(&local_1d8,param_1,local_158);
            break;
          case -0x7f:
            cVar5 = FUN_146d82376(&local_1d8,param_1,local_158);
            break;
          default:
            goto switchD_146d8197c_caseD_82;
          case -0x7d:
            cVar5 = FUN_146d82452(&local_1d8,param_1,local_158);
            break;
          case -0x78:
            cVar5 = FUN_146d8254c(&local_1d8,param_1,local_158);
          }
        }
      }
      goto LAB_146d814ba;
    }
  }
  else {
    switch(bVar1) {
    case 5:
    case 0xf:
      local_268 = &local_1d8;
      local_1d8 = (double)((ulonglong)local_1d8 & 0xffffffffffffff00);
      *pdVar3 = 1.79769313486232e+308;
      local_1f8 = &local_268;
      local_248 = param_5;
      local_240 = pdVar2;
      local_238 = pdVar3;
      local_230 = param_8;
      local_228 = param_9;
      local_220 = param_10;
      local_218 = param_11;
      local_210 = pdVar4;
      local_208 = cVar5;
      local_200 = &LAB_146d82bf2;
      pdStack_260 = param_2;
      local_258 = param_3;
      local_250 = param_4;
      FUN_146db006e(param_1);
      uVar6 = (ulonglong)local_1d8 & 0xff;
      goto LAB_146d81228;
    case 6:
      local_288 = (double *)CONCAT71(local_288._1_7_,cVar5);
      local_290 = pdVar4;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = thunk_FUN_146dd62ee(param_1,param_3,local_158,&local_178);
      break;
    default:
      if (-1 < (char)bVar1) {
        if (bVar1 < 0x40) goto LAB_146d81226;
        local_278 = &local_268;
        local_268 = (double *)&DAT_3ff0000000000000;
        pdStack_260 = (double *)&DAT_3ff0000000000000;
        local_258 = 1.0;
        plVar7 = (longlong *)param_1[5];
        goto LAB_146d814b2;
      }
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar5);
      local_288 = pdVar4;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = FUN_146d81bc2(param_1,param_3,local_158,&local_178);
      break;
    case 0xb:
      local_278 = &local_1f0;
      local_1f0 = (double *)0x3ff0000000000000;
      local_1e8 = 0x3ff0000000000000;
      local_1e0 = 0x3ff0000000000000;
      plVar7 = param_1;
LAB_146d814b2:
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar5);
      local_288 = pdVar4;
      local_290 = param_11;
      local_298 = param_10;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = FUN_146e3d7be(plVar7,param_3,local_158,&local_178);
      break;
    case 0xc:
      local_280 = (double *)CONCAT71(local_280._1_7_,cVar5);
      local_288 = pdVar4;
      local_290 = param_11;
      local_298 = param_10;
      local_2a0 = &local_f8;
      local_2a8 = &local_d8;
      local_2b0 = pdVar3;
      local_2b8 = pdVar2;
      cVar5 = FUN_146d95682(param_1,param_3,local_158,&local_178);
    }
LAB_146d814ba:
    if (cVar5 != '\0') {
      if ((0.0 < *pdVar3) || (uVar6 = 1, local_b1 == '\x01')) {
        dVar9 = *param_2;
        dVar11 = param_2[1];
        dVar12 = param_2[2];
        dVar10 = param_2[3];
        dVar14 = dStack_f0 * dVar9 - local_f8 * dVar11;
        dVar13 = local_e8 * dVar11 - dStack_f0 * dVar12;
        dVar15 = local_f8 * dVar12 - dVar9 * local_e8;
        dVar13 = dVar13 + dVar13;
        dVar15 = dVar15 + dVar15;
        dVar14 = dVar14 + dVar14;
        dVar8 = dVar14 * dVar10 + local_e8 + (dVar15 * dVar9 - dVar13 * dVar11);
        dVar11 = (dVar14 * dVar11 - dVar15 * dVar12) + dVar10 * dVar13 + local_f8;
        dVar10 = (dVar12 * dVar13 - dVar9 * dVar14) + param_2[3] * dVar15 + dStack_f0;
        dVar14 = dVar8 * dVar8 + dVar11 * dVar11 + dVar10 * dVar10;
        if ((dVar14 != 1.0) || (NAN(dVar14))) {
          if (9.999999747378752e-05 <= dVar14) {
            dVar14 = 1.0 / SQRT(dVar14);
            dVar8 = dVar8 * dVar14;
            dVar10 = dVar10 * dVar14;
            dVar11 = dVar14 * dVar11;
          }
          else {
            dVar8 = 0.0;
            dVar11 = 1.0;
            dVar10 = 0.0;
          }
        }
        *param_9 = dVar11;
        param_9[1] = dVar10;
        param_9[2] = dVar8;
        dVar12 = *param_2;
        dVar13 = param_2[1];
        dVar15 = param_2[2];
        dVar14 = param_2[3];
        dVar10 = param_2[3];
        dVar11 = dStack_d0 * dVar12 - local_d8 * dVar13;
        dVar17 = local_c8 * dVar13 - dStack_d0 * dVar15;
        dVar16 = local_d8 * dVar15 - dVar12 * local_c8;
        dVar17 = dVar17 + dVar17;
        dVar16 = dVar16 + dVar16;
        dVar11 = dVar11 + dVar11;
        dVar9 = param_2[5];
        dVar8 = param_2[6];
        *param_8 = (dVar11 * dVar13 - dVar16 * dVar15) + dVar14 * dVar17 + local_d8 + param_2[4];
        param_8[1] = (dVar15 * dVar17 - dVar12 * dVar11) + dVar10 * dVar16 + dStack_d0 + dVar9;
        param_8[2] = dVar11 * dVar14 + local_c8 + (dVar16 * dVar12 - dVar17 * dVar13) + dVar8;
        local_2b8 = param_9;
        (**(code **)(*param_1 + 0xc0))(param_1,&local_268,&local_178,*(undefined4 *)param_10);
        dVar9 = *param_2;
        dVar11 = param_2[1];
        dVar12 = param_2[2];
        dVar10 = param_2[3];
        dVar14 = param_2[3];
        dVar8 = (double)pdStack_260 * dVar9 - (double)local_268 * dVar11;
        dVar13 = local_258 * dVar11 - (double)pdStack_260 * dVar12;
        dVar15 = (double)local_268 * dVar12 - dVar9 * local_258;
        dVar13 = dVar13 + dVar13;
        dVar15 = dVar15 + dVar15;
        dVar8 = dVar8 + dVar8;
        *param_11 = (dVar8 * dVar11 - dVar15 * dVar12) + dVar10 * dVar13 + (double)local_268;
        param_11[1] = (dVar12 * dVar13 - dVar9 * dVar8) + dVar14 * dVar15 + (double)pdStack_260;
        param_11[2] = dVar8 * dVar10 + local_258 + (dVar15 * dVar9 - dVar13 * dVar11);
        uVar6 = 1;
      }
      goto LAB_146d81228;
    }
  }
LAB_146d81226:
  uVar6 = 0;
LAB_146d81228:
  if ((local_b0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d81bc2 FUN_146d81bc2 body=832 status=ok
// SIG undefined FUN_146d81bc2(void)

undefined8
FUN_146d81bc2(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1b8 [32];
  double local_198;
  double *local_190;
  double *local_188;
  double *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_198 = dVar4 * param_5;
    local_78 = dVar7 * dVar1;
    local_80 = dVar6 * dVar1;
    local_88 = dVar5 * dVar1;
    local_128 = *param_3;
    uStack_120 = param_3[1];
    local_f8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_100 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_118 = param_3[2];
    uStack_110 = param_3[3];
    local_108 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    local_138 = *(undefined8 *)(param_1 + 0x30);
    local_158 = &local_148;
    local_148 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x28);
    local_160 = param_12;
    local_168 = param_11;
    local_170 = param_10;
    local_178 = param_9;
    local_180 = &local_b8;
    local_188 = &local_a0;
    local_190 = &local_c0;
    cVar2 = FUN_146e3d7be(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_c0 < param_5)) {
      *param_6 = dVar1 * local_c0;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_a0;
      param_7[1] = dVar5 * local_98;
      param_7[2] = dVar6 * local_90;
      local_a8 = *(double *)(param_1 + 0x48) * local_a8;
      local_b0 = *(double *)(param_1 + 0x40) * local_b0;
      local_b8 = *(double *)(param_1 + 0x38) * local_b8;
      dVar6 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
      if (((dVar6 != 1.0) || (dVar5 = local_a8, dVar4 = local_b0, dVar7 = local_b8, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_a8 * dVar6;
        dVar4 = local_b0 * dVar6;
        dVar7 = local_b8 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_146d81db6;
    }
  }
  uVar3 = 0;
LAB_146d81db6:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146d81f04 FUN_146d81f04 body=223 status=ok
// SIG undefined FUN_146d81f04(void)

void FUN_146d81f04(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386ca;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d81fe4 FUN_146d81fe4 body=219 status=ok
// SIG undefined FUN_146d81fe4(void)

void FUN_146d81fe4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144857b9e;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d820c0 FUN_146d820c0 body=223 status=ok
// SIG undefined FUN_146d820c0(void)

void FUN_146d820c0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_38 = &LAB_144a386e2;
  local_50 = local_68;
  local_48 = param_2;
  local_3c = local_40;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d821a0 FUN_146d821a0 body=219 status=ok
// SIG undefined FUN_146d821a0(void)

void FUN_146d821a0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_14172546a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8227c FUN_146d8227c body=249 status=ok
// SIG undefined FUN_146d8227c(void)

void FUN_146d8227c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = &LAB_146cc500a;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d82376 FUN_146d82376 body=219 status=ok
// SIG undefined FUN_146d82376(void)

void FUN_146d82376(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146cc5264;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d82452 FUN_146d82452 body=249 status=ok
// SIG undefined FUN_146d82452(void)

void FUN_146d82452(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_2 + 0x10));
  local_38 = FUN_146cc5596;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8254c FUN_146d8254c body=217 status=ok
// SIG undefined FUN_146d8254c(void)

void FUN_146d8254c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_50;
  float local_48;
  undefined4 local_44;
  code *local_40;
  longlong local_38;
  float local_30;
  undefined4 local_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(undefined8 *)param_1[6];
  local_68 = param_1[8];
  local_70 = *(undefined1 *)param_1[7];
  local_80 = param_1[5];
  local_90 = (undefined4)param_1[3];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_88 = (undefined4)param_1[4];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_98 = *(undefined8 *)param_1[2];
  local_38 = *param_1;
  local_30 = (float)*(double *)(local_38 + 0x10);
  local_2c = 0;
  local_28 = FUN_144a12d46;
  local_48 = (float)*(double *)(param_2 + 0x10);
  local_44 = 0;
  local_40 = FUN_144a12d46;
  local_60 = local_78;
  local_50 = param_2;
  FUN_1417283d7(&local_50,&local_38,local_98,param_1[1]);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d82626 FUN_146d82626 body=235 status=ok
// SIG undefined FUN_146d82626(void)

void FUN_146d82626(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5ef26;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d82712 FUN_146d82712 body=219 status=ok
// SIG undefined FUN_146d82712(void)

void FUN_146d82712(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_146d5ef42;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d827ee FUN_146d827ee body=235 status=ok
// SIG undefined FUN_146d827ee(void)

void FUN_146d827ee(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
  local_38 = &LAB_146d5efe8;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d828da FUN_146d828da body=219 status=ok
// SIG undefined FUN_146d828da(void)

void FUN_146d828da(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  float local_40;
  undefined4 local_3c;
  code *local_38;
  longlong local_30;
  float local_28;
  undefined4 local_24;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *(undefined8 *)param_1[6];
  local_58 = param_1[8];
  local_60 = *(undefined1 *)param_1[7];
  local_70 = param_1[5];
  local_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_88 = *(undefined8 *)param_1[2];
  local_30 = *param_1;
  local_28 = (float)*(double *)(local_30 + 0x10);
  local_24 = 0;
  local_20 = FUN_144a12d46;
  local_40 = (float)*(double *)(param_2 + 0x10);
  local_3c = 0;
  local_38 = FUN_144b038b4;
  local_50 = local_68;
  local_48 = param_2;
  FUN_1417283d7(&local_48,&local_30,local_88,param_1[1]);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d829b6 FUN_146d829b6 body=373 status=ok
// SIG undefined FUN_146d829b6(void)

void FUN_146d829b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146d82a47_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146d82a47_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146d82a0d_caseD_82;
  case 3:
switchD_146d82a47_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146d829b6(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146d82a47_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146d82a47_caseD_0;
    case 0x41:
      goto switchD_146d82a47_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146d82a47_caseD_3;
    case 0x48:
      goto switchD_146d82a47_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146d82a0d_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146d81f04(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146d82bf8 FUN_146d82bf8 body=351 status=ok
// SIG undefined FUN_146d82bf8(void)

undefined8 FUN_146d82bf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_118 = &local_90;
  local_90 = 0.0;
  local_e8 = *(undefined1 *)(param_1 + 0xc);
  local_f0 = param_1[0xb];
  local_120 = param_1[5];
  local_128 = param_1[4];
  local_f8 = &local_e0;
  local_100 = &local_c4;
  local_108 = &local_c0;
  local_110 = &local_a8;
  cVar3 = FUN_146d80fe0(param_2,local_88,param_1[2],param_1[3]);
  if (cVar3 != '\0') {
    *(undefined1 *)*param_1 = 1;
    if (local_90 < *(double *)param_1[6]) {
      *(double *)param_1[6] = local_90;
      puVar1 = (undefined8 *)param_1[7];
      puVar1[2] = local_98;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      puVar1 = (undefined8 *)param_1[8];
      puVar1[2] = local_b0;
      *puVar1 = local_c0;
      puVar1[1] = uStack_b8;
      *(undefined4 *)param_1[9] = local_c4;
      puVar2 = (undefined4 *)param_1[10];
      *(undefined8 *)(puVar2 + 4) = local_d0;
      *puVar2 = local_e0;
      puVar2[1] = uStack_dc;
      puVar2[2] = uStack_d8;
      puVar2[3] = uStack_d4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d82d58 FUN_146d82d58 body=220 status=ok
// SIG undefined FUN_146d82d58(void)

void FUN_146d82d58(undefined8 *param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  dVar1 = (double)param_3[0xc];
  if (*plVar3 != 0) {
    if ((double)param_1[1] + (double)plVar3[0xc] <= dVar1) {
      return;
    }
    if (ABS(dVar1 - (double)plVar3[0xc]) <= 1e-08) {
      if ((double)plVar3[8] * param_2[2] +
          (double)plVar3[6] * *param_2 + (double)plVar3[7] * param_2[1] <=
          param_2[2] * (double)param_3[8] +
          *param_2 * (double)param_3[6] + param_2[1] * (double)param_3[7]) {
        return;
      }
      goto LAB_146d82dd3;
    }
  }
  if ((dVar1 <= 0.0) &&
     (0.0 <= (double)param_3[8] * param_2[2] +
             (double)param_3[6] * *param_2 + (double)param_3[7] * param_2[1])) {
    return;
  }
LAB_146d82dd3:
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = *param_3;
    param_3 = param_3 + 1;
    plVar3 = plVar3 + 1;
  }
  return;
}



// FUNCTION 146d82e34 FUN_146d82e34 body=318 status=ok
// SIG undefined FUN_146d82e34(void)

undefined8 FUN_146d82e34(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  
  uVar4 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x28);
  if (0 < (longlong)uVar4) {
    pfVar7 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) + 0x14);
    uVar6 = 0xffffffff;
    dVar9 = -1.79769313486232e+308;
    uVar8 = 0;
    do {
      dVar10 = (*param_2 - (double)pfVar7[-5]) * (double)pfVar7[-2] +
               (param_2[1] - (double)pfVar7[-4]) * (double)pfVar7[-1] +
               (param_2[2] - (double)pfVar7[-3]) * (double)*pfVar7;
      if (dVar9 < dVar10) {
        uVar6 = uVar8 & 0xffffffff;
        dVar9 = dVar10;
      }
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 6;
    } while (uVar4 != uVar8);
    if ((int)uVar6 != -1) {
      *param_4 = dVar9;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
      lVar5 = (longlong)(int)uVar6;
      fVar1 = *(float *)(lVar3 + 0x14 + lVar5 * 0x18);
      fVar2 = *(float *)(lVar3 + 0x10 + lVar5 * 0x18);
      *param_3 = (double)*(float *)(lVar3 + 0xc + lVar5 * 0x18);
      param_3[1] = (double)fVar2;
      param_3[2] = (double)fVar1;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 146d82f82 FUN_146d82f82 body=826 status=ok
// SIG undefined FUN_146d82f82(void)

ulonglong FUN_146d82f82(longlong param_1,double *param_2,longlong *param_3,double param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  uint local_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 < 1) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = 0xffffffff;
    uVar11 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (ABS((param_2[1] - (double)*(float *)(lVar10 + 4 + uVar11 * 0x18)) *
              (double)*(float *)(lVar10 + 0x10 + uVar11 * 0x18) +
              (*param_2 - (double)*(float *)(lVar10 + uVar11 * 0x18)) *
              (double)*(float *)(lVar10 + 0xc + uVar11 * 0x18) +
              (param_2[2] - (double)*(float *)(lVar10 + 8 + uVar11 * 0x18)) *
              (double)*(float *)(lVar10 + 0x14 + uVar11 * 0x18)) < param_4) {
        local_10c = 0;
        iVar5 = *(int *)(param_1 + 0x38);
        if (0 < iVar5) {
          pfVar1 = (float *)(lVar10 + uVar11 * 0x18);
          do {
            if ((int)uStack_100 != local_d4) {
              puVar7 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar7 = local_d0;
              }
              for (iVar6 = *(int *)(puVar7 + (ulonglong)(local_c0 - 1U & local_10c) * 4);
                  iVar6 != -1; iVar6 = *(int *)(local_108 + (longlong)iVar6 * 0xc + 4)) {
                if (*(uint *)(local_108 + (longlong)iVar6 * 0xc) == local_10c) goto LAB_146d831c0;
              }
            }
            lVar10 = *(longlong *)(param_1 + 0x30);
            lVar8 = (longlong)(int)local_10c;
            fVar2 = *(float *)(lVar10 + 8 + lVar8 * 0xc);
            fVar3 = *(float *)(lVar10 + 4 + lVar8 * 0xc);
            fVar4 = *(float *)(lVar10 + lVar8 * 0xc);
            if ((double)ABS((fVar2 - pfVar1[2]) * pfVar1[5] +
                            (fVar4 - *pfVar1) * pfVar1[3] + (fVar3 - pfVar1[1]) * pfVar1[4]) <
                param_4) {
              iVar6 = (int)param_3[1];
              lVar10 = (longlong)iVar6;
              *(uint *)(param_3 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
                FUN_14026a4e8(param_3,iVar6);
              }
              lVar8 = *param_3;
              *(double *)(lVar8 + lVar10 * 0x18) = (double)fVar4;
              *(double *)(lVar8 + 8 + lVar10 * 0x18) = (double)fVar3;
              *(double *)(lVar8 + 0x10 + lVar10 * 0x18) = (double)fVar2;
              FUN_1447cbafe(&local_108,local_110,&local_10c,0);
              iVar5 = *(int *)(param_1 + 0x38);
            }
LAB_146d831c0:
            local_10c = local_10c + 1;
          } while ((int)local_10c < iVar5);
          iVar6 = *(int *)(param_1 + 0x28);
        }
        uVar9 = uVar11 & 0xffffffff;
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar6);
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(&local_108);
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d832be FUN_146d832be body=84 status=ok
// SIG undefined FUN_146d832be(void)

undefined8 FUN_146d832be(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    local_20[0] = param_2;
    local_18 = param_3;
    local_10 = param_4;
    uVar1 = FUN_146d87808(param_1 + 0x58,local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d83314 FUN_146d83314 body=403 status=ok
// SIG undefined FUN_146d83314(void)

undefined8 * FUN_146d83314(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x808;
  *param_1 = &PTR_FUN_149f51c30;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 9) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xff7fffff;
  param_1[10] = &DAT_ff7fffffff7fffff;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar1 = param_1 + 4;
    puVar2 = param_1 + 6;
    local_78 = param_1 + 8;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = param_4;
    FUN_1429916f2(param_2,puVar1,&local_68,puVar2);
    thunk_FUN_146dd8ccd(puVar2,&local_68,param_1 + 0xd,(longlong)param_1 + 0x6c);
    if (param_4 != 3) {
      FUN_146d8696c(puVar1,&local_68,puVar2,0x3f800000);
      FUN_146d86cc6(puVar1,&local_68,puVar2,0x358637bd);
    }
    FUN_146cd0c9c(param_1 + 0xb,&local_68,*(undefined4 *)(param_1 + 7),0);
    FUN_1429a5e5c(param_1,SUB84((double)*(float *)(param_1 + 0xd),0));
    param_1[2] = param_3;
    FUN_144716727(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d834a8 FUN_146d834a8 body=283 status=ok
// SIG undefined FUN_146d834a8(void)

longlong FUN_146d834a8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  return param_1;
}



// FUNCTION 146d835c4 FUN_146d835c4 body=130 status=ok
// SIG undefined FUN_146d835c4(void)

undefined4 FUN_146d835c4(undefined8 *param_1)

{
  undefined1 auStack_38 [38];
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1[0xb] != 0) {
    FUN_1401fa6bc(param_1 + 0xb,&local_12,&local_11);
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0xb] = 0;
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f553e0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return *(undefined4 *)(param_1 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d83648 FUN_146d83648 body=445 status=ok
// SIG undefined FUN_146d83648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_146d83648(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *param_1 = (undefined1  [16])0x0;
  pauVar2 = (undefined1 (*) [16])FUN_14001cc68(0x10,0x10);
  auVar7._8_8_ = extraout_XMM0_Qb;
  auVar7._0_8_ = extraout_XMM0_Qa;
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined1 (**) [16])param_1[1] = pauVar2;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0x100000000;
  *(undefined8 *)param_1[5] = 0;
  *(undefined4 *)(param_1[5] + 8) = 0;
  param_1[3] = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[5] + 0xc) = 0xffffffff00000080;
  *(undefined4 *)(param_1[6] + 4) = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)(param_1[7] + 8) = 0;
  param_1[0xc] = (undefined1  [16])0x0;
  param_1[0xb] = (undefined1  [16])0x0;
  param_1[10] = (undefined1  [16])0x0;
  param_1[9] = (undefined1  [16])0x0;
  param_1[8] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0xd] = 0;
  auVar1 = _DAT_149931e80;
  auVar4 = pmovsxbq(auVar7,0x302);
  auVar6 = pmovsxbq(in_XMM1,0x100);
  lVar3 = 0x25;
  auVar7 = pmovsxbq(in_XMM4,0x404);
  do {
    auVar8 = auVar6 ^ auVar1;
    if (auVar8._0_8_ < -0x7fffffffffffffee) {
      *(undefined4 *)(param_1[-1] + lVar3 * 4 + 4) = 0xff7fffff;
    }
    if (auVar8._8_8_ < -0x7fffffffffffffee) {
      *(undefined4 *)(param_1[-1] + lVar3 * 4 + 8) = 0xff7fffff;
    }
    auVar8 = auVar4 ^ auVar1;
    if (auVar8._0_8_ < -0x7fffffffffffffee) {
      *(undefined4 *)(param_1[-1] + lVar3 * 4 + 0xc) = 0xff7fffff;
    }
    if (auVar8._8_8_ < -0x7fffffffffffffee) {
      *(undefined4 *)(*param_1 + lVar3 * 4) = 0xff7fffff;
    }
    lVar5 = auVar6._8_8_;
    auVar6._0_8_ = auVar6._0_8_ + auVar7._0_8_;
    auVar6._8_8_ = lVar5 + auVar7._8_8_;
    lVar5 = auVar4._8_8_;
    auVar4._0_8_ = auVar4._0_8_ + auVar7._0_8_;
    auVar4._8_8_ = lVar5 + auVar7._8_8_;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x39);
  *(undefined8 *)(param_1[0xd] + 8) = 0;
  *(undefined8 *)param_1[0xe] = 0xffffffff;
  param_1[0xe][8] = 1;
  param_1[0x11] = (undefined1  [16])0x0;
  param_1[0x12] = (undefined1  [16])0x0;
  param_1[0xf] = (undefined1  [16])0x0;
  param_1[0x10] = (undefined1  [16])0x0;
  param_1[0x13] = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x11] + 0xc) = 0x80;
  *(undefined4 *)param_1[0x12] = 0xffffffff;
  *(undefined4 *)param_1[0x14] = 0;
  *(undefined4 *)(param_1[0x14] + 8) = 0;
  return param_1;
}



// FUNCTION 146d83806 FUN_146d83806 body=159 status=ok
// SIG undefined FUN_146d83806(void)

void FUN_146d83806(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_146d838a6(param_1 + 0x11);
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_1400baf84(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_146d87ac4(param_1 + 6);
  FUN_14006c82c(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  FUN_144756766(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d838a6 FUN_146d838a6 body=96 status=ok
// SIG undefined FUN_146d838a6(void)

void FUN_146d838a6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_146d87a36(param_1 + 0x68);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146d83903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 146d843d0 FUN_146d843d0 body=69 status=ok
// SIG undefined FUN_146d843d0(void)

void FUN_146d843d0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x14)) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar1 = param_1;
    }
    FUN_144760452(lVar1,*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  FUN_146d8acac(param_1);
  return;
}



// FUNCTION 146d84416 FUN_146d84416 body=249 status=ok
// SIG undefined FUN_146d84416(void)

undefined8 FUN_146d84416(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146d84510 FUN_146d84510 body=143 status=ok
// SIG undefined FUN_146d84510(void)

void FUN_146d84510(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d8b2f2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146d8b1f0(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d8b250(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d845a0 FUN_146d845a0 body=116 status=ok
// SIG undefined FUN_146d845a0(void)

void FUN_146d845a0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403412ae(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8b55a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d84614 FUN_146d84614 body=249 status=ok
// SIG undefined FUN_146d84614(void)

undefined8 FUN_146d84614(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146d8470e FUN_146d8470e body=249 status=ok
// SIG undefined FUN_146d8470e(void)

undefined8 FUN_146d8470e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146d84808 FUN_146d84808 body=249 status=ok
// SIG undefined FUN_146d84808(void)

undefined8 FUN_146d84808(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146d84902 FUN_146d84902 body=116 status=ok
// SIG undefined FUN_146d84902(void)

void FUN_146d84902(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141087970(param_1,iVar1);
    }
    FUN_146d8b5fb((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d8b5fc(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d84978 FUN_146d84978 body=249 status=ok
// SIG undefined FUN_146d84978(void)

undefined8 FUN_146d84978(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146d84a72 FUN_146d84a72 body=498 status=ok
// SIG undefined FUN_146d84a72(void)

void FUN_146d84a72(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x32c);
  FUN_140b4d39b(*(undefined8 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x328));
  *(undefined4 *)(param_1 + 0x328) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x32c) != 0)) {
    FUN_146d8ab08(param_1 + 800,0);
  }
  iVar1 = *(int *)(param_1 + 0x354);
  FUN_140b4d39b(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x350));
  *(undefined4 *)(param_1 + 0x350) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x354) != 0)) {
    FUN_146d8ab08(param_1 + 0x348,0);
  }
  iVar1 = *(int *)(param_1 + 0x37c);
  FUN_140b4d39b(*(undefined8 *)(param_1 + 0x370),*(undefined4 *)(param_1 + 0x378));
  *(undefined4 *)(param_1 + 0x378) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x37c) != 0)) {
    FUN_146d8ab08(param_1 + 0x370,0);
  }
  iVar1 = *(int *)(param_1 + 0x3a4);
  FUN_140b4d39b(*(undefined8 *)(param_1 + 0x398));
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3a4) != 0)) {
    FUN_146d8ab08(param_1 + 0x398);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x340)) {
    lVar3 = *(longlong *)(param_1 + 0x338);
    lVar2 = 0;
    do {
      if (*(int *)(lVar3 + lVar2 * 4) != 0) {
        FUN_144a1a59e((longlong *)(param_1 + 0x338),lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1))
        ;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x340) != lVar2);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x368)) {
    lVar3 = *(longlong *)(param_1 + 0x360);
    lVar2 = 0;
    do {
      if (*(int *)(lVar3 + lVar2 * 4) != 0) {
        FUN_144a1a59e((longlong *)(param_1 + 0x360),lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1))
        ;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x368) != lVar2);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x390)) {
    lVar3 = *(longlong *)(param_1 + 0x388);
    lVar2 = 0;
    do {
      if (*(int *)(lVar3 + lVar2 * 4) != 0) {
        FUN_144a1a59e((longlong *)(param_1 + 0x388),lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1))
        ;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x390) != lVar2);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x3b8)) {
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x3b0) + lVar3 * 4) != 0) {
        FUN_144a1a59e((longlong *)(param_1 + 0x3b0),lVar3,1);
        return;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x3b8) != lVar3);
  }
  return;
}



// FUNCTION 146d84c64 FUN_146d84c64 body=227 status=ok
// SIG undefined FUN_146d84c64(void)

undefined8 FUN_146d84c64(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_146d84c70;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146d84c70:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 146d84d72 FUN_146d84d72 body=85 status=ok
// SIG undefined FUN_146d84d72(void)

undefined8 FUN_146d84d72(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Planes %d, Vertices %d",*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x38));
  if (0 < DAT_14c992ef4) {
    thunk_FUN_14047a987(param_2,", [Simplifying]",0xf);
    FUN_146d86568(param_1);
  }
  return param_2;
}



// FUNCTION 146d84dc8 FUN_146d84dc8 body=22 status=ok
// SIG undefined FUN_146d84dc8(void)

undefined8 FUN_146d84dc8(undefined8 param_1,undefined8 param_2)

{
  FUN_146ccf42e();
  return param_2;
}



// FUNCTION 146d84dde FUN_146d84dde body=1267 status=ok
// SIG undefined FUN_146d84dde(void)

void FUN_146d84dde(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined **local_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  int local_70;
  undefined **local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  FUN_14004b8ea(param_1,param_2);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x1f) {
    local_88 = (undefined **)0x0;
    uStack_80 = 0;
    FUN_146ccf65c(param_2,&local_88);
    FUN_146ccf482(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x28)) {
      ppuVar10 = local_88 + 4;
      lVar12 = 0;
      lVar11 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x20);
        *(undefined **)(lVar2 + 0x10 + lVar12) = ppuVar10[2];
        uVar4 = *(undefined4 *)((longlong)ppuVar10 + 4);
        uVar5 = *(undefined4 *)(ppuVar10 + 1);
        uVar6 = *(undefined4 *)((longlong)ppuVar10 + 0xc);
        puVar1 = (undefined4 *)(lVar2 + lVar12);
        *puVar1 = *(undefined4 *)ppuVar10;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x18;
        ppuVar10 = ppuVar10 + 7;
      } while (lVar11 < *(int *)(param_1 + 0x28));
    }
    FUN_146ccf84e(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_144739d1e(param_2,param_1 + 0x20);
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (((iVar7 < 9) && (iVar8 < 0x1a)) && (iVar9 < 0x2e)) {
    uStack_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_149f4c0d8;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = &PTR_LAB_149f4c0e0;
    local_50 = 0;
    FUN_14062dc0c(&local_88);
    FUN_1406274a0(&local_88,param_2);
    lVar12 = (longlong)local_70;
    FUN_140627580((longlong *)(param_1 + 0x30),local_70,1);
    if (0 < lVar12) {
      lVar11 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x30);
        *(undefined4 *)(lVar2 + 8 + lVar11) = *(undefined4 *)(local_60 + 8 + lVar11);
        *(undefined8 *)(lVar2 + lVar11) = *(undefined8 *)(local_60 + lVar11);
        lVar11 = lVar11 + 0xc;
      } while (lVar12 * 0xc != lVar11);
    }
    FUN_1407fbce0(&local_88);
  }
  else {
    FUN_1447396de(param_2,param_1 + 0x30);
  }
  FUN_14004b71e(param_2,param_1 + 0x40);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x14) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_88 = (undefined **)0x0;
      uStack_80 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_a0 = 0;
      local_a8 = param_1 + 0x40;
      FUN_1429916f2(param_1 + 0x30,param_1 + 0x20,&local_88,local_98);
      thunk_FUN_146dd8ccd(param_1 + 0x30,&local_88,param_1 + 0x68,param_1 + 0x6c);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(local_88,uStack_80 & 0xffffffff);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x68));
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_88);
      }
    }
    else {
      local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    *(float *)(param_1 + 0x68) = local_88._0_4_;
    iVar7 = _isnan((double)local_88._0_4_);
    if ((iVar7 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    FUN_144aa3513(param_2,param_1 + 0x6c);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar7) {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,(float)*(double *)(param_1 + 0x10));
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_88);
      }
    }
    else {
      local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    *(double *)(param_1 + 0x10) = (double)local_88._0_4_;
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (iVar7 < 0x26) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_88 = (undefined **)0x0;
      uStack_80 = 0;
      FUN_146ccf4fa(param_1 + 0x20,param_1 + 0x30,&local_88,0x3a83126f);
      FUN_146cd0c9c(param_1 + 0x58,&local_88,*(undefined4 *)(param_1 + 0x38),0);
      FUN_144716727(local_88,uStack_80 & 0xffffffff);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_14004b05e(param_1 + 0x58,param_2);
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar7 < 0x22) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1429a5e5c(param_1,(double)*(float *)(param_1 + 0x68));
    }
  }
  else {
    FUN_141724e7a(param_2,param_1 + 0x78);
    FUN_1400f4f7e(param_2,param_1 + 0x90);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d852d2 FUN_146d852d2 body=610 status=ok
// SIG undefined FUN_146d852d2(void)

undefined8 *
FUN_146d852d2(longlong param_1,undefined8 *param_2,double *param_3,undefined8 param_4,double param_5
             )

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  double local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  char local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(uint *)(param_1 + 0x28);
  iVar11 = (int)((double)(int)uVar1 * 0.1);
  iVar9 = 0x10;
  if (iVar11 < 0x10) {
    iVar9 = iVar11;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  local_f0 = param_2;
  if (iVar11 != 0) {
    FUN_146d8721a(&local_a8,iVar9);
  }
  if (0 < (int)uVar1) {
    lVar13 = 0;
    do {
      local_f8 = param_5;
      FUN_146ca6658(*(longlong *)(param_1 + 0x20) + lVar13,&local_c8,param_3,param_4);
      uVar8 = uStack_a0;
      if (local_b0 == '\x01') {
        dVar15 = local_b8 - param_3[2];
        dVar3 = (double)CONCAT44(uStack_bc,uStack_c0) - param_3[1];
        dVar2 = (double)CONCAT44(uStack_c4,local_c8) - *param_3;
        local_e8 = local_c8;
        uStack_e4 = uStack_c4;
        uStack_e0 = uStack_c0;
        uStack_dc = uStack_bc;
        local_d8 = local_b8;
        lVar14 = (longlong)(int)uStack_a0;
        uVar10 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
        if (uStack_a0._4_4_ < uVar10) {
          FUN_146ca6182(&local_a8,uVar8 & 0xffffffff);
        }
        lVar14 = lVar14 * 0x20;
        *(double *)(local_a8 + lVar14) = dVar15 * dVar15 + dVar2 * dVar2 + dVar3 * dVar3;
        puVar12 = (undefined4 *)(local_a8 + 8 + lVar14);
        *puVar12 = local_e8;
        puVar12[1] = uStack_e4;
        puVar12[2] = uStack_e0;
        puVar12[3] = uStack_dc;
        *(double *)(local_a8 + 0x18 + lVar14) = local_d8;
      }
      lVar13 = lVar13 + 0x18;
    } while ((ulonglong)uVar1 * 0x18 != lVar13);
  }
  FUN_146d8727a(local_a8,uStack_a0 & 0xffffffff);
  puVar7 = local_f0;
  if ((longlong)(int)uStack_a0 != 0) {
    puVar12 = (undefined4 *)(local_a8 + 8);
    lVar13 = (longlong)(int)uStack_a0 << 5;
    do {
      dVar15 = (double)FUN_146dae118(param_1,puVar12);
      if (dVar15 < param_5 + 0.0001) {
        puVar7[2] = *(undefined8 *)(puVar12 + 4);
        uVar4 = puVar12[1];
        uVar5 = puVar12[2];
        uVar6 = puVar12[3];
        *(undefined4 *)puVar7 = *puVar12;
        *(undefined4 *)((longlong)puVar7 + 4) = uVar4;
        *(undefined4 *)(puVar7 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar7 + 0xc) = uVar6;
        *(undefined1 *)(puVar7 + 3) = 1;
        goto LAB_146d854b6;
      }
      puVar12 = puVar12 + 8;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  *(undefined8 *)((longlong)puVar7 + 9) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x11) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
LAB_146d854b6:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d85536 FUN_146d85536 body=397 status=ok
// SIG undefined FUN_146d85536(void)

undefined8 * FUN_146d85536(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146d856c4(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146d85726(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_146d8579a(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_146d857fc(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 146d856c4 FUN_146d856c4 body=98 status=ok
// SIG undefined FUN_146d856c4(void)

void FUN_146d856c4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d85726 FUN_146d85726 body=115 status=ok
// SIG undefined FUN_146d85726(void)

void FUN_146d85726(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d8579a FUN_146d8579a body=98 status=ok
// SIG undefined FUN_146d8579a(void)

void FUN_146d8579a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d857fc FUN_146d857fc body=98 status=ok
// SIG undefined FUN_146d857fc(void)

void FUN_146d857fc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146d8585e FUN_146d8585e body=3337 status=ok
// SIG undefined FUN_146d8585e(void)

double FUN_146d8585e(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
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
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  uint uVar26;
  ulonglong uVar27;
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
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  double local_1b8;
  double local_1b0;
  double local_190;
  double local_120;
  double local_118;
  double local_110;
  
  uVar26 = *(uint *)(param_1 + 0x28);
  if ((ulonglong)uVar26 == 0) {
    local_1b0 = 3.4028234663852886e+38;
  }
  else if ((int)uVar26 < 1) {
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 1.0;
    local_1b0 = -1.79769313486232e+308;
  }
  else {
    pfVar25 = (float *)(*(longlong *)(param_1 + 0x20) + 0x14);
    dVar3 = 0.0;
    dVar28 = 1.0;
    uVar27 = 0;
    local_1b0 = -1.79769313486232e+308;
    uVar21 = 0;
    dVar36 = 0.0;
    do {
      fVar47 = *pfVar25 / (float)param_3[2];
      fVar49 = pfVar25[-1] / (float)param_3[1];
      fVar48 = pfVar25[-2] / (float)*param_3;
      fVar50 = 1.0 / SQRT(fVar47 * fVar47 + fVar48 * fVar48 + fVar49 * fVar49);
      dVar46 = (param_2[2] - (double)(pfVar25[-3] * (float)param_3[2])) * (double)(fVar47 * fVar50)
               + (*param_2 - (double)(pfVar25[-5] * (float)*param_3)) * (double)(fVar50 * fVar48) +
                 (param_2[1] - (double)(pfVar25[-4] * (float)param_3[1])) *
                 (double)(fVar49 * fVar50);
      if (local_1b0 < dVar46) {
        uVar21 = uVar27 & 0xffffffff;
        dVar28 = (double)(fVar47 * fVar50);
        dVar36 = (double)(fVar50 * fVar48);
        dVar3 = (double)(fVar49 * fVar50);
        local_1b0 = dVar46;
      }
      uVar27 = uVar27 + 1;
      pfVar25 = pfVar25 + 6;
    } while (uVar26 != uVar27);
    *param_4 = dVar36;
    param_4[1] = dVar3;
    param_4[2] = dVar28;
    if (0.0 <= local_1b0) {
      lVar17 = (longlong)(int)uVar21;
      plVar5 = *(longlong **)(param_1 + 0x58);
      uVar26 = 0;
      if (plVar5 != (longlong *)0x0) {
        cVar4 = *(char *)(param_1 + 0x60);
        if (cVar4 == '\x01') {
          uVar26 = (uint)*(byte *)(*plVar5 + 1 + lVar17 * 2);
        }
        else if (cVar4 == '\x02') {
          uVar26 = (int)*(short *)(*plVar5 + 2 + lVar17 * 4);
        }
        else {
          uVar26 = 0;
          if (cVar4 == '\x03') {
            uVar26 = *(uint *)(*plVar5 + 4 + lVar17 * 8);
          }
        }
      }
      dVar46 = param_2[2];
      dVar1 = *param_2;
      dVar2 = param_2[1];
      if (2 < (int)uVar26) {
        dVar39 = dVar46 - dVar28 * local_1b0;
        dVar14 = dVar2 - dVar3 * local_1b0;
        dVar29 = dVar1 - dVar36 * local_1b0;
        lVar6 = *(longlong *)(param_1 + 0x30);
        dVar3 = param_3[2];
        dVar28 = *param_3;
        dVar36 = param_3[1];
        dVar30 = 1.79769313486232e+308;
        lVar22 = 2;
        do {
          uVar23 = 0xffffffff;
          uVar18 = 0xffffffff;
          if (plVar5 != (longlong *)0x0) {
            cVar4 = *(char *)(param_1 + 0x60);
            if (cVar4 == '\x01') {
              uVar18 = (uint)*(byte *)(plVar5[2] + 1 +
                                      (ulonglong)*(byte *)(*plVar5 + lVar17 * 2) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar18 = (uint)*(short *)(plVar5[2] + 2 +
                                       (longlong)*(short *)(*plVar5 + lVar17 * 4) * 6);
            }
            else if (cVar4 == '\x03') {
              uVar18 = *(uint *)(plVar5[2] + 4 + (longlong)*(int *)(*plVar5 + lVar17 * 8) * 0xc);
            }
          }
          if (plVar5 != (longlong *)0x0) {
            cVar4 = *(char *)(param_1 + 0x60);
            if (cVar4 == '\x01') {
              uVar23 = (uint)*(byte *)(plVar5[2] + -2 +
                                      ((ulonglong)*(byte *)(*plVar5 + lVar17 * 2) + lVar22) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar23 = (uint)*(short *)(plVar5[2] + -4 +
                                       (*(short *)(*plVar5 + lVar17 * 4) + lVar22) * 6);
            }
            else if (cVar4 == '\x03') {
              uVar23 = *(uint *)(plVar5[2] + -8 + (*(int *)(*plVar5 + lVar17 * 8) + lVar22) * 0xc);
            }
          }
          uVar20 = 0xffffffff;
          if (plVar5 != (longlong *)0x0) {
            cVar4 = *(char *)(param_1 + 0x60);
            if (cVar4 == '\x01') {
              uVar20 = (uint)*(byte *)(plVar5[2] + 1 +
                                      ((ulonglong)*(byte *)(*plVar5 + lVar17 * 2) + lVar22) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar20 = (uint)*(short *)(plVar5[2] + 2 +
                                       (*(short *)(*plVar5 + lVar17 * 4) + lVar22) * 6);
            }
            else if (cVar4 == '\x03') {
              uVar20 = *(uint *)(plVar5[2] + 4 + (*(int *)(*plVar5 + lVar17 * 8) + lVar22) * 0xc);
            }
          }
          lVar19 = (longlong)(int)uVar18;
          dVar33 = (double)*(float *)(lVar6 + 8 + lVar19 * 0xc) * dVar3;
          dVar11 = (double)*(float *)(lVar6 + 4 + lVar19 * 0xc) * dVar36;
          dVar44 = (double)*(float *)(lVar6 + lVar19 * 0xc) * dVar28;
          lVar19 = (longlong)(int)uVar23;
          dVar7 = (double)*(float *)(lVar6 + 8 + lVar19 * 0xc) * dVar3;
          dVar13 = (double)*(float *)(lVar6 + 4 + lVar19 * 0xc) * dVar36;
          lVar24 = (longlong)(int)uVar20;
          dVar15 = (double)*(float *)(lVar6 + lVar19 * 0xc) * dVar28;
          dVar40 = (double)*(float *)(lVar6 + 4 + lVar24 * 0xc) * dVar36;
          dVar34 = (double)*(float *)(lVar6 + lVar24 * 0xc) * dVar28;
          dVar8 = dVar7 - dVar33;
          dVar38 = dVar13 - dVar11;
          dVar16 = dVar15 - dVar44;
          dVar43 = dVar40 - dVar11;
          dVar9 = dVar34 - dVar44;
          dVar32 = dVar8 * dVar8 + dVar16 * dVar16 + dVar38 * dVar38;
          dVar41 = (double)*(float *)(lVar6 + 8 + lVar24 * 0xc) * dVar3;
          dVar42 = dVar41 - dVar33;
          dVar10 = dVar42 * dVar42 + dVar9 * dVar9 + dVar43 * dVar43;
          dVar31 = dVar8 * dVar42 + dVar16 * dVar9 + dVar38 * dVar43;
          dVar12 = (dVar39 - dVar33) * dVar8 +
                   (dVar29 - dVar44) * dVar16 + (dVar14 - dVar11) * dVar38;
          dVar35 = (dVar39 - dVar33) * dVar42 +
                   (dVar29 - dVar44) * dVar9 + (dVar14 - dVar11) * dVar43;
          dVar37 = dVar32 * dVar10 - dVar31 * dVar31;
          dVar45 = (dVar10 * dVar12 - dVar35 * dVar31) / dVar37;
          if ((((dVar45 < -9.999999747378752e-05) || (1.0000999999974738 < dVar45)) ||
              (dVar37 = (dVar35 * dVar32 + dVar12 * -dVar31) / dVar37,
              dVar37 < -9.999999747378752e-05)) ||
             ((1.0000999999974738 < dVar37 ||
              (dVar35 = dVar14, dVar12 = dVar29, local_1b8 = dVar39,
              1.0000999999974738 < dVar45 + dVar37)))) {
            dVar12 = dVar44;
            dVar35 = dVar11;
            local_1b8 = dVar33;
            if ((0.0001 <= dVar32) &&
               ((dVar37 = dVar8 * (dVar46 - dVar33) +
                          dVar16 * (dVar1 - dVar44) + (dVar2 - dVar11) * dVar38, 0.0 <= dVar37 &&
                (dVar37 = dVar37 / dVar32, dVar12 = dVar15, dVar35 = dVar13, local_1b8 = dVar7,
                dVar37 <= 1.0)))) {
              local_1b8 = dVar8 * dVar37 + dVar33;
              dVar35 = dVar38 * dVar37 + dVar11;
              dVar12 = dVar16 * dVar37 + dVar44;
            }
            dVar37 = dVar33;
            dVar8 = dVar44;
            local_190 = dVar11;
            if (((0.0001 <= dVar10) &&
                (dVar32 = (dVar46 - dVar33) * dVar42 +
                          (dVar1 - dVar44) * dVar9 + (dVar2 - dVar11) * dVar43, 0.0 <= dVar32)) &&
               (dVar32 = dVar32 / dVar10, dVar37 = dVar41, dVar8 = dVar34, local_190 = dVar40,
               dVar32 <= 1.0)) {
              dVar37 = dVar33 + dVar42 * dVar32;
              dVar8 = dVar44 + dVar9 * dVar32;
              local_190 = dVar11 + dVar43 * dVar32;
            }
            dVar9 = dVar41 - dVar7;
            dVar33 = dVar40 - dVar13;
            dVar38 = dVar34 - dVar15;
            dVar43 = (dVar46 - dVar7) * dVar9 +
                     (dVar1 - dVar15) * dVar38 + (dVar2 - dVar13) * dVar33;
            dVar32 = dVar7;
            dVar10 = dVar13;
            dVar11 = dVar15;
            if (((0.0 <= dVar43) &&
                (dVar45 = dVar9 * dVar9 + dVar38 * dVar38 + dVar33 * dVar33, 0.0001 <= dVar45)) &&
               (dVar43 = dVar43 / dVar45, dVar32 = dVar41, dVar10 = dVar40, dVar11 = dVar34,
               dVar43 <= 1.0)) {
              dVar32 = dVar7 + dVar9 * dVar43;
              dVar10 = dVar13 + dVar33 * dVar43;
              dVar11 = dVar15 + dVar38 * dVar43;
            }
            dVar7 = (dVar46 - local_1b8) * (dVar46 - local_1b8) +
                    (dVar1 - dVar12) * (dVar1 - dVar12) + (dVar2 - dVar35) * (dVar2 - dVar35);
            dVar34 = (dVar46 - dVar37) * (dVar46 - dVar37) +
                     (dVar1 - dVar8) * (dVar1 - dVar8) + (dVar2 - local_190) * (dVar2 - local_190);
            if (dVar34 <= dVar7) {
              dVar12 = dVar8;
              dVar35 = local_190;
              local_1b8 = dVar37;
              dVar7 = dVar34;
            }
            if ((dVar46 - dVar32) * (dVar46 - dVar32) +
                (dVar1 - dVar11) * (dVar1 - dVar11) + (dVar2 - dVar10) * (dVar2 - dVar10) <= dVar7)
            {
              dVar35 = dVar10;
              dVar12 = dVar11;
              local_1b8 = dVar32;
            }
          }
          if (dVar39 == dVar46 && (dVar29 == dVar1 && dVar14 == dVar2)) {
            return local_1b0;
          }
          dVar37 = SQRT((local_1b8 - dVar39) * (local_1b8 - dVar39) +
                        (dVar12 - dVar29) * (dVar12 - dVar29) +
                        (dVar35 - dVar14) * (dVar35 - dVar14));
          if (dVar37 < dVar30) {
            local_120 = local_1b8;
            dVar30 = dVar37;
            local_118 = dVar35;
            local_110 = dVar12;
          }
          lVar22 = lVar22 + 1;
        } while (uVar26 != (uint)lVar22);
      }
      dVar46 = dVar46 - local_120;
      dVar2 = dVar2 - local_118;
      dVar1 = dVar1 - local_110;
      dVar3 = SQRT(dVar46 * dVar46 + dVar1 * dVar1 + dVar2 * dVar2);
      if (9.99999993922529e-09 < dVar3) {
        *param_4 = dVar1 / dVar3;
        param_4[1] = dVar2 / dVar3;
        param_4[2] = dVar46 / dVar3;
        local_1b0 = dVar3;
      }
    }
  }
  return local_1b0;
}



// FUNCTION 146d86568 FUN_146d86568 body=186 status=ok
// SIG undefined FUN_146d86568(void)

void FUN_146d86568(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x30;
  lVar2 = param_1 + 0x20;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146d86624(lVar2,&local_38,lVar1,param_1 + 0x40);
  FUN_146d8696c(lVar2,&local_38,lVar1,0x3f800000);
  FUN_146d86cc6(lVar2,&local_38,lVar1,0x358637bd);
  FUN_146cd0c9c(param_1 + 0x58,&local_38,*(undefined4 *)(param_1 + 0x38),0);
  FUN_144716727(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d86624 FUN_146d86624 body=838 status=ok
// SIG undefined FUN_146d86624(void)

void FUN_146d86624(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [3];
  void *local_90;
  uint local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = *(uint *)(param_3 + 1);
  iVar8 = uVar5 - DAT_14c75f080;
  local_90 = (void *)0x0;
  _Src = (void *)*param_3;
  local_d0 = param_4;
  local_c8 = param_1;
  local_c0 = param_2;
  local_88 = uVar5;
  if ((longlong)(int)uVar5 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1405161ea(&local_90,uVar5,0);
    memcpy(local_90,_Src,(longlong)(int)uVar5 * 0xc);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_b8 = local_b8 & 0xffffffffffffff00;
  FUN_14475e60e(local_a8,&local_b8,uVar5);
  if (0 < iVar8) {
    iVar6 = 0;
    do {
      if (1 < (int)uVar5) {
        pfVar7 = (float *)((longlong)local_90 + 0x14);
        uVar9 = 0xffffffff;
        uVar16 = 1;
        uVar15 = 0;
        fVar19 = 3.4028235e+38;
        uVar13 = 0xffffffff;
        do {
          if (*(char *)(local_a8[0] + uVar15) == '\0') {
            pfVar1 = (float *)((longlong)local_90 + uVar15 * 0xc);
            pfVar12 = pfVar7;
            uVar18 = uVar16;
            do {
              if ((*(char *)(local_a8[0] + uVar18) == '\0') &&
                 (fVar20 = (pfVar1[2] - *pfVar12) * (pfVar1[2] - *pfVar12) +
                           (*pfVar1 - pfVar12[-2]) * (*pfVar1 - pfVar12[-2]) +
                           (pfVar1[1] - pfVar12[-1]) * (pfVar1[1] - pfVar12[-1]), fVar20 < fVar19))
              {
                uVar13 = uVar15 & 0xffffffff;
                uVar9 = uVar18 & 0xffffffff;
                fVar19 = fVar20;
              }
              uVar18 = uVar18 + 1;
              pfVar12 = pfVar12 + 3;
            } while (uVar5 != uVar18);
          }
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 + 1;
          pfVar7 = pfVar7 + 3;
        } while (uVar15 != uVar5 - 1);
        if ((int)uVar13 != -1) {
          lVar11 = (longlong)(int)uVar13;
          lVar10 = (longlong)(int)uVar9;
          fVar19 = *(float *)((longlong)local_90 + lVar10 * 0xc + 8);
          fVar20 = *(float *)((longlong)local_90 + lVar11 * 0xc + 8);
          fVar2 = *(float *)((longlong)local_90 + lVar10 * 0xc + 4);
          fVar3 = *(float *)((longlong)local_90 + lVar11 * 0xc);
          fVar4 = *(float *)((longlong)local_90 + lVar11 * 0xc + 4);
          *(float *)((longlong)local_90 + lVar11 * 0xc) =
               (*(float *)((longlong)local_90 + lVar10 * 0xc) - fVar3) * 0.5 + fVar3;
          *(float *)((longlong)local_90 + lVar11 * 0xc + 4) = (fVar2 - fVar4) * 0.5 + fVar4;
          *(float *)((longlong)local_90 + lVar11 * 0xc + 8) = (fVar19 - fVar20) * 0.5 + fVar20;
          *(undefined1 *)(local_a8[0] + lVar10) = 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar8);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  if (0 < (int)local_88) {
    lVar11 = 0;
    lVar10 = 0;
    uVar5 = local_88;
    do {
      uVar9 = uStack_b0;
      if (*(char *)(local_a8[0] + lVar10) == '\0') {
        puVar17 = (undefined8 *)((longlong)local_90 + lVar11);
        lVar14 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_140aacb36(&local_b8,uVar9 & 0xffffffff);
        }
        *(undefined4 *)(local_b8 + 8 + lVar14 * 0xc) = *(undefined4 *)(puVar17 + 1);
        *(undefined8 *)(local_b8 + lVar14 * 0xc) = *puVar17;
        uVar5 = local_88;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0xc;
    } while (lVar10 < (int)uVar5);
  }
  local_e8 = local_d0;
  local_e0 = 0;
  FUN_1429916f2(&local_b8,local_c8,local_c0,param_3);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d8696c FUN_146d8696c body=858 status=ok
// SIG undefined FUN_146d8696c(void)

void FUN_146d8696c(longlong *param_1,longlong *param_2,longlong *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    uVar7 = 0;
    do {
      uVar8 = uVar7 + 1;
      lVar6 = (longlong)iVar5;
      if ((longlong)uVar8 < lVar6) {
        pfVar13 = (float *)(uVar7 * 0x18 + *param_1);
        plVar14 = (longlong *)(uVar7 * 0x10 + *param_2);
        uVar7 = uVar8 & 0xffffffff;
        do {
          lVar6 = *param_1;
          uVar9 = (uint)uVar7;
          lVar15 = (longlong)(int)uVar9;
          fVar2 = *(float *)(lVar6 + 0xc + lVar15 * 0x18);
          fVar3 = *(float *)(lVar6 + 0x10 + lVar15 * 0x18);
          fVar4 = *(float *)(lVar6 + 0x14 + lVar15 * 0x18);
          if (0.9999 < pfVar13[5] * fVar4 + pfVar13[3] * fVar2 + pfVar13[4] * fVar3) {
            plVar16 = (longlong *)(lVar15 * 0x10 + *param_2);
            if ((longlong)(int)plVar14[1] != 0) {
              pfVar1 = (float *)(lVar6 + lVar15 * 0x18);
              lVar6 = *param_3;
              lVar11 = 0;
              do {
                lVar12 = (longlong)*(int *)(*plVar14 + lVar11);
                if (param_4 < ABS((pfVar1[2] - *(float *)(lVar6 + 8 + lVar12 * 0xc)) * fVar4 +
                                  (*pfVar1 - *(float *)(lVar6 + lVar12 * 0xc)) * fVar2 +
                                  (pfVar1[1] - *(float *)(lVar6 + 4 + lVar12 * 0xc)) * fVar3))
                goto LAB_146d86c15;
                lVar11 = lVar11 + 4;
              } while ((longlong)(int)plVar14[1] * 4 != lVar11);
            }
            iVar10 = (int)plVar16[1];
            if ((longlong)iVar10 != 0) {
              lVar6 = *param_3;
              lVar11 = 0;
              do {
                lVar12 = (longlong)*(int *)(*plVar16 + lVar11);
                if (param_4 < ABS((pfVar13[2] - *(float *)(lVar6 + 8 + lVar12 * 0xc)) * pfVar13[5] +
                                  (*pfVar13 - *(float *)(lVar6 + lVar12 * 0xc)) * pfVar13[3] +
                                  (pfVar13[1] - *(float *)(lVar6 + 4 + lVar12 * 0xc)) * pfVar13[4]))
                goto LAB_146d86c15;
                lVar11 = lVar11 + 4;
              } while ((longlong)iVar10 * 4 - lVar11 != 0);
              if (0 < iVar10) {
                lVar6 = 0;
                lVar11 = 0;
                do {
                  FUN_1449e3bb0(plVar14,*plVar16 + lVar6);
                  lVar11 = lVar11 + 1;
                  lVar6 = lVar6 + 4;
                } while (lVar11 < (int)plVar16[1]);
                iVar5 = (int)param_1[1];
              }
            }
            iVar10 = ~uVar9 + iVar5;
            if (iVar10 != 0) {
              if (0 < iVar10) {
                iVar10 = 1;
              }
              memmove((void *)(*param_1 + lVar15 * 0x18),
                      (void *)(*param_1 + (longlong)(iVar5 - iVar10) * 0x18),(longlong)iVar10 * 0x18
                     );
              iVar5 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar5 + -1;
            FUN_146cd5462(param_2,uVar7);
            uVar9 = uVar9 - 1;
            iVar5 = (int)param_1[1];
          }
LAB_146d86c15:
          uVar7 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < iVar5);
        lVar6 = (longlong)iVar5;
      }
      uVar7 = uVar8;
    } while ((longlong)uVar8 < lVar6);
    if (0 < iVar5) {
      lVar15 = 0;
      lVar11 = 0;
      lVar6 = 0;
      do {
        FUN_146cd45aa(*param_1 + lVar11,*param_2 + lVar15,param_3);
        lVar6 = lVar6 + 1;
        lVar11 = lVar11 + 0x18;
        lVar15 = lVar15 + 0x10;
      } while (lVar6 < (int)param_1[1]);
    }
  }
  FUN_146cd4680(param_1,param_2);
  return;
}



// FUNCTION 146d86cc6 FUN_146d86cc6 body=1274 status=ok
// SIG undefined FUN_146d86cc6(void)

void FUN_146d86cc6(longlong *param_1,longlong *param_2,longlong *param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_f8 [44];
  int local_cc;
  longlong *local_c8;
  int local_bc;
  void *local_b8;
  undefined8 uStack_b0;
  int *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  uVar6 = (ulonglong)*(uint *)(param_3 + 1);
  local_c8 = param_1;
  FUN_144a1a59e(&local_b8,uVar6,1);
  if ((longlong)(int)uStack_b0 != 0) {
    memset(local_b8,(int)CONCAT71((int7)(uVar6 >> 8),0xff),(longlong)(int)uStack_b0 << 2);
  }
  iVar7 = (int)param_2[1];
  if (0 < iVar7) {
    lVar4 = 0;
    do {
      uVar6 = (ulonglong)*(int *)(*param_2 + 8 + lVar4 * 0x10);
      if (2 < (longlong)uVar6) {
        plVar5 = (longlong *)(*param_2 + lVar4 * 0x10);
        lVar8 = 0;
        iVar7 = *(int *)(*plVar5 + -8 + uVar6 * 4);
        iVar11 = *(int *)(*plVar5 + -4 + uVar6 * 4);
        do {
          lVar12 = (longlong)iVar7;
          lVar9 = *param_3;
          lVar10 = (longlong)iVar11;
          fVar21 = *(float *)(lVar9 + 8 + lVar10 * 0xc);
          fVar13 = fVar21 - *(float *)(lVar9 + 8 + lVar12 * 0xc);
          fVar19 = *(float *)(lVar9 + lVar10 * 0xc);
          fVar22 = *(float *)(lVar9 + 4 + lVar10 * 0xc);
          fVar17 = fVar22 - *(float *)(lVar9 + 4 + lVar12 * 0xc);
          fVar15 = fVar19 - *(float *)(lVar9 + lVar12 * 0xc);
          fVar20 = fVar13 * fVar13 + fVar15 * fVar15 + fVar17 * fVar17;
          if (((fVar20 != 1.0) || (fVar14 = fVar13, fVar18 = fVar17, fVar16 = fVar15, NAN(fVar20)))
             && (fVar14 = DAT_14c846338, fVar18 = DAT_14c846330._4_4_, fVar16 = (float)DAT_14c846330
                , 1e-08 <= fVar20)) {
            fVar20 = 1.0 / SQRT(fVar20);
            fVar14 = fVar13 * fVar20;
            fVar18 = fVar17 * fVar20;
            fVar16 = fVar15 * fVar20;
          }
          iVar1 = *(int *)(*plVar5 + lVar8 * 4);
          lVar12 = (longlong)iVar1;
          fVar21 = *(float *)(lVar9 + 8 + lVar12 * 0xc) - fVar21;
          fVar22 = *(float *)(lVar9 + 4 + lVar12 * 0xc) - fVar22;
          fVar19 = *(float *)(lVar9 + lVar12 * 0xc) - fVar19;
          fVar13 = fVar21 * fVar21 + fVar19 * fVar19 + fVar22 * fVar22;
          if (((fVar13 != 1.0) || (fVar15 = fVar19, fVar17 = fVar21, fVar20 = fVar22, NAN(fVar13)))
             && (fVar15 = (float)DAT_14c846330, fVar17 = DAT_14c846338, fVar20 = DAT_14c846330._4_4_
                , 1e-08 <= fVar13)) {
            fVar13 = 1.0 / SQRT(fVar13);
            fVar15 = fVar19 * fVar13;
            fVar17 = fVar21 * fVar13;
            fVar20 = fVar22 * fVar13;
          }
          if (fVar15 * fVar16 + fVar20 * fVar18 + fVar17 * fVar14 < 1.0 - param_4) {
            *(int *)((longlong)local_b8 + lVar10 * 4) = iVar11;
            uVar6 = (ulonglong)*(uint *)(plVar5 + 1);
          }
          lVar8 = lVar8 + 1;
          iVar7 = iVar11;
          iVar11 = iVar1;
        } while (lVar8 < (int)uVar6);
        iVar7 = (int)param_2[1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar7);
  }
  local_bc = 0;
  if (0 < (int)param_3[1]) {
    iVar7 = 0;
    do {
      if (*(int *)((longlong)local_b8 + (longlong)local_bc * 4) == -1) {
        uVar6 = (ulonglong)(int)param_2[1];
        local_cc = iVar7;
        if (0 < (longlong)uVar6) {
          iVar7 = -(int)param_2[1];
          lVar4 = uVar6 * 0x18;
          lVar8 = uVar6 << 4;
          do {
            lVar8 = lVar8 + -0x10;
            local_a8 = &local_bc;
            FUN_144a9d2f8(*param_2 + lVar8,&local_a8);
            if (*(int *)(*param_2 + 8 + lVar8) < 3) {
              FUN_146d871c2(param_2,(int)uVar6 + -1);
              FUN_1467b1020(param_2);
              uVar3 = *(uint *)(local_c8 + 1);
              if (uVar6 != uVar3) {
                memmove((void *)(*local_c8 + lVar4 + -0x18),(void *)(*local_c8 + lVar4),
                        (longlong)(int)(uVar3 + iVar7) * 0x18);
                uVar3 = *(uint *)(local_c8 + 1);
              }
              *(uint *)(local_c8 + 1) = uVar3 - 1;
              FUN_146ccfa2e();
            }
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + -0x18;
            bVar2 = 1 < uVar6;
            uVar6 = uVar6 - 1;
          } while (bVar2);
        }
        iVar7 = local_cc + 1;
      }
      else {
        *(int *)((longlong)local_b8 + (longlong)local_bc * 4) = local_bc - iVar7;
      }
      local_bc = local_bc + 1;
      uVar3 = *(uint *)(param_3 + 1);
    } while (local_bc < (int)uVar3);
    if (0 < iVar7) {
      if (0 < (int)uVar3) {
        iVar7 = -uVar3;
        lVar4 = (ulonglong)uVar3 * 0xc;
        uVar6 = (ulonglong)uVar3;
        do {
          if (*(int *)((longlong)local_b8 + uVar6 * 4 + -4) == -1) {
            uVar3 = *(uint *)(param_3 + 1);
            if (uVar6 != uVar3) {
              memmove((void *)(*param_3 + lVar4 + -0xc),(void *)(*param_3 + lVar4),
                      (longlong)(int)(uVar3 + iVar7) * 0xc);
              uVar3 = *(uint *)(param_3 + 1);
            }
            *(uint *)(param_3 + 1) = uVar3 - 1;
            FUN_140aacd98(param_3);
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + -0xc;
          bVar2 = 1 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar2);
      }
      iVar7 = (int)param_2[1];
      if (0 < iVar7) {
        lVar4 = 0;
        do {
          lVar8 = *param_2;
          lVar9 = (longlong)*(int *)(lVar8 + 8 + lVar4 * 0x10);
          if (0 < lVar9) {
            uVar6 = lVar9 + 1;
            do {
              lVar9 = *(longlong *)(lVar8 + lVar4 * 0x10);
              *(undefined4 *)(lVar9 + -8 + uVar6 * 4) =
                   *(undefined4 *)
                    ((longlong)local_b8 + (longlong)*(int *)(lVar9 + -8 + uVar6 * 4) * 4);
              uVar6 = uVar6 - 1;
            } while (1 < uVar6);
            iVar7 = (int)param_2[1];
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar7);
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d871c2 FUN_146d871c2 body=87 status=ok
// SIG undefined FUN_146d871c2(void)

void FUN_146d871c2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar2) << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146d8721a FUN_146d8721a body=96 status=ok
// SIG undefined FUN_146d8721a(void)

void FUN_146d8721a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 146d8727a FUN_146d8727a body=816 status=ok
// SIG undefined FUN_146d8727a(void)

void FUN_146d8727a(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double *pdVar11;
  double *pdVar12;
  uint uVar13;
  ulonglong uVar14;
  double *pdVar15;
  double *pdVar16;
  longlong *plVar17;
  double *pdVar18;
  int iVar19;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  double *pdVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      pdVar11 = (double *)*plVar17;
      pdVar18 = (double *)plVar17[1];
      iVar19 = (int)plVar17[2];
      uVar13 = (int)((ulonglong)((longlong)pdVar18 - (longlong)pdVar11) >> 5) + 1;
      pdVar16 = pdVar18;
      pdVar20 = pdVar18;
      pdVar21 = pdVar11;
      if (iVar19 != 0) {
LAB_146d87344:
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          dVar1 = pdVar11[uVar14 * 4];
          dVar2 = (pdVar11 + uVar14 * 4)[1];
          dVar3 = pdVar11[uVar14 * 4 + 2];
          dVar4 = (pdVar11 + uVar14 * 4 + 2)[1];
          dVar5 = *pdVar11;
          dVar6 = pdVar11[1];
          dVar7 = pdVar11[3];
          pdVar11[uVar14 * 4 + 2] = pdVar11[2];
          (pdVar11 + uVar14 * 4 + 2)[1] = dVar7;
          pdVar11[uVar14 * 4] = dVar5;
          (pdVar11 + uVar14 * 4)[1] = dVar6;
          pdVar11[2] = dVar3;
          pdVar11[3] = dVar4;
          *pdVar11 = dVar1;
          pdVar11[1] = dVar2;
          pdVar15 = pdVar18 + 4;
          pdVar12 = pdVar11;
          do {
            pdVar16 = pdVar12 + 4;
            pdVar8 = pdVar12 + 4;
            do {
              pdVar22 = pdVar8;
              pdVar12 = pdVar16;
              if (pdVar18 < pdVar12) break;
              pdVar16 = pdVar12 + 4;
              pdVar8 = pdVar22 + 4;
            } while (*pdVar12 < *pdVar11 || *pdVar12 == *pdVar11);
            pdVar8 = pdVar15 + -8;
            do {
              pdVar16 = pdVar15;
              pdVar23 = pdVar8;
              pdVar15 = pdVar16 + -4;
              if (pdVar15 <= pdVar11) break;
              pdVar8 = pdVar23 + -4;
            } while (*pdVar11 < *pdVar15 || *pdVar11 == *pdVar15);
            if (pdVar15 < pdVar12) goto LAB_146d87435;
            dVar1 = *pdVar12;
            dVar2 = pdVar12[1];
            dVar3 = pdVar12[2];
            dVar4 = pdVar12[3];
            dVar5 = *pdVar15;
            dVar6 = pdVar16[-3];
            dVar7 = pdVar16[-1];
            pdVar12[2] = pdVar16[-2];
            pdVar12[3] = dVar7;
            *pdVar12 = dVar5;
            pdVar12[1] = dVar6;
            pdVar16[-2] = dVar3;
            pdVar16[-1] = dVar4;
            *pdVar15 = dVar1;
            pdVar16[-3] = dVar2;
          } while( true );
        }
        if (pdVar11 < pdVar18) {
          do {
            pdVar16 = pdVar11;
            if (pdVar11 + 4 <= pdVar18) {
              uVar25 = SUB84(*pdVar11,0);
              uVar26 = (undefined4)((ulonglong)*pdVar11 >> 0x20);
              pdVar20 = pdVar11 + 4;
              do {
                dVar1 = *pdVar20;
                if ((double)CONCAT44(uVar26,uVar25) <= dVar1 &&
                    dVar1 != (double)CONCAT44(uVar26,uVar25)) {
                  pdVar16 = pdVar20;
                }
                uVar9 = SUB84(dVar1,0);
                uVar10 = (int)((ulonglong)dVar1 >> 0x20);
                if (dVar1 <= (double)CONCAT44(uVar26,uVar25)) {
                  uVar9 = uVar25;
                  uVar10 = uVar26;
                }
                uVar26 = uVar10;
                uVar25 = uVar9;
                pdVar20 = pdVar20 + 4;
              } while (pdVar20 <= pdVar18);
            }
            local_68 = *pdVar16;
            uStack_60 = pdVar16[1];
            local_58 = pdVar16[2];
            dStack_50 = pdVar16[3];
            dVar4 = local_68;
            dVar5 = uStack_60;
            dVar1 = *pdVar18;
            dVar2 = pdVar18[1];
            dVar3 = pdVar18[3];
            pdVar16[2] = pdVar18[2];
            pdVar16[3] = dVar3;
            *pdVar16 = dVar1;
            pdVar16[1] = dVar2;
            local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
            pdVar18[2] = local_58;
            pdVar18[3] = dStack_50;
            *(undefined4 *)pdVar18 = (undefined4)local_68;
            *(undefined4 *)((longlong)pdVar18 + 4) = local_68._4_4_;
            *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_60._4_4_;
            pdVar18 = pdVar18 + -4;
            local_68 = dVar4;
            uStack_60 = dVar5;
          } while (pdVar11 < pdVar18);
        }
        goto LAB_146d87586;
      }
LAB_146d8759b:
      FUN_146d875ab(pdVar11,uVar13,pdVar16,param_4);
LAB_146d87586:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146d87435:
  local_68 = *pdVar11;
  uStack_60 = pdVar11[1];
  local_58 = pdVar11[2];
  dStack_50 = pdVar11[3];
  dVar4 = local_68;
  dVar5 = uStack_60;
  dVar1 = *pdVar15;
  dVar2 = pdVar16[-3];
  dVar3 = pdVar16[-1];
  pdVar11[2] = pdVar16[-2];
  pdVar11[3] = dVar3;
  *pdVar11 = dVar1;
  pdVar11[1] = dVar2;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  pdVar16[-2] = local_58;
  pdVar16[-1] = dStack_50;
  *(undefined4 *)pdVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)pdVar16 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(pdVar16 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)pdVar16 + -0x14) = uStack_60._4_4_;
  iVar19 = iVar19 + -1;
  pdVar16 = pdVar16 + -8;
  local_68 = dVar4;
  uStack_60 = dVar5;
  if ((longlong)pdVar23 - (longlong)pdVar21 < (longlong)pdVar20 - (longlong)pdVar22) {
    if (pdVar12 < pdVar18) {
      *plVar17 = (longlong)pdVar12;
      plVar17[1] = (longlong)pdVar18;
      *(int *)(plVar17 + 2) = iVar19;
      plVar17 = plVar17 + 3;
    }
    pdVar22 = pdVar11;
    if (pdVar15 <= pdVar11 + 4) goto LAB_146d87586;
  }
  else {
    if (pdVar11 + 4 < pdVar15) {
      *plVar17 = (longlong)pdVar11;
      plVar17[1] = (longlong)pdVar16;
      *(int *)(plVar17 + 2) = iVar19;
      plVar17 = plVar17 + 3;
    }
    pdVar11 = pdVar12;
    pdVar16 = pdVar18;
    pdVar23 = pdVar18;
    if (pdVar18 <= pdVar12) goto LAB_146d87586;
  }
  uVar13 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar22) >> 5) + 1;
  pdVar18 = pdVar16;
  pdVar20 = pdVar23;
  pdVar21 = pdVar22;
  if (iVar19 == 0) goto LAB_146d8759b;
  goto LAB_146d87344;
}



// FUNCTION 146d875ab FUN_146d875ab body=603 status=ok
// SIG undefined FUN_146d875ab(void)

void FUN_146d875ab(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x000146d875df:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar13 * 4] ||
            (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar13 * 4])) {
          iVar12 = iVar13;
        }
        if ((double)param_1[(longlong)iVar9 * 4] <= (double)param_1[(longlong)iVar12 * 4] &&
            (double)param_1[(longlong)iVar12 * 4] != (double)param_1[(longlong)iVar9 * 4]) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146d875df;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar9 * 4] ||
                (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar9 * 4])) {
              iVar13 = iVar9;
            }
            if ((double)param_1[(longlong)iVar13 * 4] < (double)param_1[(longlong)iVar14 * 4] ||
                (double)param_1[(longlong)iVar13 * 4] == (double)param_1[(longlong)iVar14 * 4])
            break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d87808 FUN_146d87808 body=266 status=ok
// SIG undefined FUN_146d87808(void)

undefined4 FUN_146d87808(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x03') {
    local_14 = 0;
    uVar2 = 0;
    if (0 < (int)param_2[4]) {
      local_20 = &local_14;
      local_38 = *param_1;
      local_30 = *(undefined8 *)(param_2 + 2);
      local_28 = param_2[4];
      FUN_146d879a8(*param_1,*param_2);
      uVar2 = local_14;
    }
  }
  else if (cVar1 == '\x02') {
    local_14 = 0;
    uVar2 = 0;
    if (0 < (int)param_2[4]) {
      local_20 = &local_14;
      local_38 = *param_1;
      local_30 = *(undefined8 *)(param_2 + 2);
      local_28 = param_2[4];
      FUN_146cb0e1a(*param_1,*param_2);
      uVar2 = local_14;
    }
  }
  else {
    uVar2 = 0;
    if (cVar1 == '\x01') {
      local_14 = 0;
      uVar2 = 0;
      if (0 < (int)param_2[4]) {
        local_20 = &local_14;
        local_38 = *param_1;
        local_30 = *(undefined8 *)(param_2 + 2);
        local_28 = param_2[4];
        FUN_146d87914(*param_1,*param_2);
        uVar2 = local_14;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146d87914 FUN_146d87914 body=148 status=ok
// SIG undefined FUN_146d87914(void)

void FUN_146d87914(longlong *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1[4] + (longlong)param_2);
  uVar5 = (uint)bVar1;
  if (uVar5 != 0xff) {
    piVar7 = (int *)param_3[3];
    iVar8 = *piVar7;
    while( true ) {
      lVar3 = param_3[1];
      bVar2 = *(byte *)(*(longlong *)(*param_3 + 0x10) + (longlong)(int)uVar5 * 3);
      *piVar7 = iVar8 + 1;
      *(uint *)(lVar3 + (longlong)iVar8 * 4) = (uint)bVar2;
      bVar2 = *(byte *)(param_1[2] + 2 + (longlong)(int)uVar5 * 3);
      if (bVar2 == 0xff) break;
      piVar7 = (int *)param_3[3];
      iVar8 = *piVar7;
      if ((int)param_3[2] <= iVar8) {
        return;
      }
      uVar6 = (ulonglong)*(byte *)(param_1[2] + (ulonglong)(uint)bVar2 * 3);
      uVar5 = (uint)*(byte *)(*param_1 + uVar6 * 2);
      uVar4 = (bVar2 - uVar5) + 1;
      uVar5 = (int)(short)((int)((uint)(ushort)((short)uVar4 >> 0xf) << 0x10 | uVar4 & 0xffff) %
                          (int)(short)(ushort)*(byte *)(*param_1 + 1 + uVar6 * 2)) + uVar5;
      if (uVar5 == bVar1) {
        return;
      }
      if (uVar5 == 0xff) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146d879a8 FUN_146d879a8 body=141 status=ok
// SIG undefined FUN_146d879a8(void)

ulonglong FUN_146d879a8(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1[4] + (longlong)param_2 * 4);
  uVar5 = (ulonglong)(uint)-iVar1;
  if (!SBORROW4(0,iVar1)) {
    piVar8 = (int *)param_3[3];
    iVar9 = *piVar8;
    iVar6 = iVar1;
    while( true ) {
      lVar7 = param_3[1];
      uVar2 = *(undefined4 *)(*(longlong *)(*param_3 + 0x10) + (longlong)iVar6 * 0xc);
      *piVar8 = iVar9 + 1;
      *(undefined4 *)(lVar7 + (longlong)iVar9 * 4) = uVar2;
      iVar3 = *(int *)(param_1[2] + 8 + (longlong)iVar6 * 0xc);
      uVar5 = (ulonglong)iVar3;
      if (uVar5 == 0xffffffff80000000) break;
      piVar8 = (int *)param_3[3];
      iVar9 = *piVar8;
      if ((int)param_3[2] <= iVar9) {
        return uVar5;
      }
      lVar7 = (longlong)*(int *)(param_1[2] + uVar5 * 0xc);
      iVar6 = *(int *)(*param_1 + lVar7 * 8);
      iVar4 = (iVar3 - iVar6) + 1;
      iVar3 = *(int *)(*param_1 + 4 + lVar7 * 8);
      iVar6 = iVar4 % iVar3 + iVar6;
      if (iVar6 == iVar1) {
        return (longlong)iVar4 / (longlong)iVar3 & 0xffffffff;
      }
      if (SBORROW4(0,iVar6)) {
        return (ulonglong)(uint)-iVar6;
      }
    }
  }
  return uVar5;
}



// FUNCTION 146d87a36 FUN_146d87a36 body=52 status=ok
// SIG undefined FUN_146d87a36(void)

void FUN_146d87a36(longlong *param_1)

{
  FUN_146d87a6a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d87a6a FUN_146d87a6a body=89 status=ok
// SIG undefined FUN_146d87a6a(void)

void FUN_146d87a6a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146d87ac4 FUN_146d87ac4 body=52 status=ok
// SIG undefined FUN_146d87ac4(void)

void FUN_146d87ac4(longlong *param_1)

{
  FUN_146d87af8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d87af8 FUN_146d87af8 body=315 status=ok
// SIG undefined FUN_146d87af8(void)

void FUN_146d87af8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_146d838a6(*local_68 + (longlong)iStack_4c * 0xd0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145c8a91a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d87c3c FUN_146d87c3c body=735 status=ok
// SIG undefined FUN_146d87c3c(void)

void FUN_146d87c3c(undefined8 *param_1,longlong param_2,double *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_register_00001344 [12];
  undefined1 auStack_88 [32];
  int local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(uint *)param_1[3];
  lVar8 = *(longlong *)(param_1[5] + 0x10);
  if (lVar8 == 0) {
    lVar8 = param_1[5];
  }
  uVar7 = uVar3 + 0x1f;
  if (-1 < (int)uVar3) {
    uVar7 = uVar3;
  }
  if ((*(uint *)(lVar8 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0) {
LAB_146d87cc8:
    local_68 = *(int *)param_1[4];
    *(int *)param_1[4] = local_68 + 1;
    FUN_14482d6a4(param_2,param_3,*(undefined4 *)param_1[3],*(undefined8 *)*param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  cVar2 = *(char *)(param_2 + 0x1c);
  auVar20._4_12_ = in_XMM0._4_12_;
  auVar17._4_12_ = in_XMM1._4_12_;
  auVar16._4_12_ = in_XMM2._4_12_;
  auVar21._4_12_ = in_XMM3._4_12_;
  auVar24._4_12_ = in_XMM4._4_12_;
  if (param_2 == 0 || cVar2 != '\b') {
    if (cVar2 == -0x78 && param_2 != 0) {
      if (*(char *)param_1[2] != '\0') goto LAB_146d87d89;
      dVar9 = param_3[10] * *(double *)(param_2 + 0x30);
      dVar15 = param_3[9] * *(double *)(param_2 + 0x28);
      dVar12 = param_3[8] * *(double *)(param_2 + 0x20);
      auVar10._0_4_ = (float)dVar9;
      auVar10._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar10._8_8_ = 0;
      auVar18._0_4_ = (float)dVar15;
      auVar18._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar18._8_8_ = 0;
      auVar13._0_4_ = (float)dVar12;
      auVar13._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar13._8_8_ = 0;
      auVar22._0_4_ = (float)param_3[3];
      auVar22._4_12_ = auVar21._4_12_;
      auVar25._0_4_ = (float)param_3[2];
      auVar25._4_12_ = auVar24._4_12_;
      auVar20 = insertps(auVar13,auVar18,0x1c);
      local_38 = insertps(auVar20,auVar10,0x28);
      auVar20 = insertps(ZEXT416((uint)(float)*param_3),ZEXT416((uint)(float)param_3[1]),0x10);
      auVar20 = insertps(auVar20,auVar25,0x20);
      local_58 = insertps(auVar20,auVar22,0x30);
      auVar20 = insertps(ZEXT416((uint)(float)param_3[4]),ZEXT416((uint)(float)param_3[5]),0x1c);
      local_48 = insertps(auVar20,ZEXT416((uint)(float)param_3[6]),0x28);
      uVar6 = param_1[1];
      param_2 = *(longlong *)(param_2 + 0x88);
    }
    else {
      if (cVar2 != 'H' || param_2 == 0) goto LAB_146d87cc8;
      if (*(char *)param_1[2] != '\0') goto LAB_146d87d89;
      auVar11._0_4_ = (float)param_3[6];
      auVar11._4_12_ = auVar20._4_12_;
      auVar14._0_4_ = (float)param_3[5];
      auVar14._4_12_ = auVar17._4_12_;
      auVar19._0_4_ = (float)param_3[4];
      auVar19._4_12_ = auVar16._4_12_;
      auVar23._0_4_ = (float)param_3[3];
      auVar23._4_12_ = auVar21._4_12_;
      auVar26._0_4_ = (float)param_3[2];
      auVar26._4_12_ = auVar24._4_12_;
      auVar20 = insertps(auVar19,auVar14,0x1c);
      local_48 = insertps(auVar20,auVar11,0x28);
      auVar5._4_12_ = in_register_00001344;
      auVar5._0_4_ = (float)param_3[1];
      auVar20 = insertps(ZEXT416((uint)(float)*param_3),auVar5,0x10);
      auVar20 = insertps(auVar20,auVar26,0x20);
      local_58 = insertps(auVar20,auVar23,0x30);
      local_38._8_8_ = 0x3f800000;
      local_38._0_8_ = &DAT_3f8000003f800000;
      uVar6 = param_1[1];
      puVar4 = *(undefined8 **)(param_2 + 0x28);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
        FUN_1429e6bbc(uVar6,puVar4,local_58);
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
        goto LAB_146d87d89;
      }
      param_2 = 0;
    }
  }
  else {
    if (*(char *)param_1[2] != '\0') goto LAB_146d87d89;
    auVar20._0_4_ = (float)param_3[6];
    auVar17._0_4_ = (float)param_3[5];
    auVar16._0_4_ = (float)param_3[4];
    auVar21._0_4_ = (float)param_3[3];
    auVar17 = insertps(auVar16,auVar17,0x1c);
    local_48 = insertps(auVar17,auVar20,0x28);
    auVar24._0_4_ = (float)*param_3;
    auVar20 = insertps(auVar24,ZEXT416((uint)(float)param_3[1]),0x10);
    auVar20 = insertps(auVar20,ZEXT416((uint)(float)param_3[2]),0x20);
    local_58 = insertps(auVar20,auVar21,0x30);
    local_38._8_8_ = 0x3f800000;
    local_38._0_8_ = &DAT_3f8000003f800000;
    uVar6 = param_1[1];
  }
  FUN_1429e6bbc(uVar6,param_2,local_58);
LAB_146d87d89:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d87f1c FUN_146d87f1c body=340 status=ok
// SIG undefined FUN_146d87f1c(void)

undefined4 * FUN_146d87f1c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146d88072(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  FUN_146d88204(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x19) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146d88160(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0xcc) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x19) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146d88410(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d88072 FUN_146d88072 body=237 status=ok
// SIG undefined FUN_146d88072(void)

int * FUN_146d88072(longlong *param_1,int *param_2)

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
      FUN_145820760(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xd0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xd0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xd0 + *param_1;
  return param_2;
}



// FUNCTION 146d88160 FUN_146d88160 body=164 status=ok
// SIG undefined FUN_146d88160(void)

undefined8 FUN_146d88160(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xd0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xd0) == *param_3) {
          FUN_146d838a6((longlong)_Dst + 8);
          memmove(_Dst,param_3,200);
          FUN_146d88396(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 200);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146d88204 FUN_146d88204 body=132 status=ok
// SIG undefined FUN_146d88204(void)

undefined8 * FUN_146d88204(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = 0;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1 * 4) = *(undefined4 *)(param_2 + lVar1 * 4);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x12);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  FUN_146d88288(param_1 + 0xd,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 146d88288 FUN_146d88288 body=123 status=ok
// SIG undefined FUN_146d88288(void)

undefined8 * FUN_146d88288(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146d88304();
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



// FUNCTION 146d88304 FUN_146d88304 body=146 status=ok
// SIG undefined FUN_146d88304(void)

longlong * FUN_146d88304(longlong *param_1,longlong *param_2)

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



// FUNCTION 146d88396 FUN_146d88396 body=122 status=ok
// SIG undefined FUN_146d88396(void)

void FUN_146d88396(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xd0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0 + 4) = uVar5;
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



// FUNCTION 146d88410 FUN_146d88410 body=483 status=ok
// SIG undefined FUN_146d88410(void)

void FUN_146d88410(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0xd0;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xcc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 200 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d885f4 FUN_146d885f4 body=132 status=ok
// SIG undefined FUN_146d885f4(void)

void FUN_146d885f4(longlong param_1,int param_2)

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



// FUNCTION 146d8867a FUN_146d8867a body=96 status=ok
// SIG undefined FUN_146d8867a(void)

void FUN_146d8867a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146d886da FUN_146d886da body=132 status=ok
// SIG undefined FUN_146d886da(void)

void FUN_146d886da(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_146d8875e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146d8875e FUN_146d8875e body=87 status=ok
// SIG undefined FUN_146d8875e(void)

void FUN_146d8875e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146d887b6();
  return;
}



// FUNCTION 146d887b6 FUN_146d887b6 body=114 status=ok
// SIG undefined FUN_146d887b6(void)

void FUN_146d887b6(longlong *param_1,int param_2)

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



// FUNCTION 146d88828 FUN_146d88828 body=138 status=ok
// SIG undefined FUN_146d88828(void)

void FUN_146d88828(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0xd0) == param_2) {
          FUN_146d888b2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0xd0 + *param_1 + 200);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146d888b2 FUN_146d888b2 body=138 status=ok
// SIG undefined FUN_146d888b2(void)

void FUN_146d888b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xd0;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xcc + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 200 + lVar6 * 0xd0);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xd0 + 200);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 200);
  FUN_146d838a6(*param_1 + lVar2 + 8);
  FUN_146d88396(param_1,param_2);
  return;
}



// FUNCTION 146d8893c FUN_146d8893c body=324 status=ok
// SIG undefined FUN_146d8893c(void)

undefined4 * FUN_146d8893c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146d88a82(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146d88b68(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146d88be8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d88a82 FUN_146d88a82 body=230 status=ok
// SIG undefined FUN_146d88a82(void)

int * FUN_146d88a82(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146d88b68 FUN_146d88b68 body=128 status=ok
// SIG undefined FUN_146d88b68(void)

undefined8 FUN_146d88b68(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146d887b6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146d88be8 FUN_146d88be8 body=474 status=ok
// SIG undefined FUN_146d88be8(void)

void FUN_146d88be8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d88dc4 FUN_146d88dc4 body=38 status=ok
// SIG undefined FUN_146d88dc4(void)

undefined8 FUN_146d88dc4(undefined8 param_1,int param_2)

{
  FUN_14062c814();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d88dea FUN_146d88dea body=68 status=ok
// SIG undefined FUN_146d88dea(void)

undefined8 * FUN_146d88dea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f51a28;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1407fbc7e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


