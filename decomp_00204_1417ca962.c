// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417ca962 FUN_1417ca962 body=93 status=ok
// SIG undefined FUN_1417ca962(void)

void FUN_1417ca962(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a920210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9201a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1417ca9bf FUN_1417ca9bf body=49 status=ok
// SIG undefined FUN_1417ca9bf(void)

longlong FUN_1417ca9bf(void)

{
  if (DAT_14cae4a90 == 0) {
    FUN_14073dd9a(&DAT_14cae4a90,&PTR_LAB_14a9238b0);
  }
  return DAT_14cae4a90;
}



// FUNCTION 1417ca9f0 FUN_1417ca9f0 body=3049 status=ok
// SIG undefined FUN_1417ca9f0(void)

void FUN_1417ca9f0(int param_1,undefined1 param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  bool bVar16;
  byte bVar17;
  byte *pbVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  int local_64;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_70 = (longlong *)CONCAT71(local_70._1_7_,param_2);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = *param_3;
  local_80 = param_3;
  local_64 = param_1;
  if (lVar10 != 0) {
    bVar13 = *(byte *)((longlong)param_3 + 0xd);
    lVar3 = param_3[1];
    bVar14 = *(byte *)((longlong)param_3 + 0xf);
    bVar17 = *(byte *)((longlong)param_3 + 0xe);
    bVar1 = *(byte *)((longlong)param_3 + 0xc);
    lVar11 = *(longlong *)(param_6 + 0x80);
    lVar9 = lVar11;
    if (lVar11 == 0) {
      lVar9 = param_6;
    }
    iVar15 = *(int *)(param_6 + 0x88);
    uVar20 = (ulonglong)iVar15;
    if (uVar20 != 0) {
      lVar19 = 0;
      iVar12 = 0;
      do {
        if ((((*(longlong *)(lVar9 + lVar19) == lVar10) &&
             (*(ushort *)(lVar9 + 0xc + lVar19) == (ushort)bVar13)) &&
            (*(int *)(lVar9 + 8 + lVar19) == (int)lVar3)) &&
           (*(byte *)(lVar9 + 0xe + lVar19) == bVar14)) {
          if (iVar12 != 1) {
            uVar20 = (ulonglong)(uint)-iVar12;
            goto LAB_1417cab15;
          }
          break;
        }
        iVar12 = iVar12 + -1;
        lVar19 = lVar19 + 0x10;
      } while (uVar20 << 4 != lVar19);
    }
    *(uint *)(param_6 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_6 + 0x8c) < iVar15 + 1U) {
      local_78 = param_4;
      FUN_14472e0ae(param_6,iVar15);
      lVar11 = *(longlong *)(param_6 + 0x80);
      param_4 = local_78;
    }
    if (lVar11 == 0) {
      lVar11 = param_6;
    }
    lVar9 = uVar20 * 0x10;
    *(longlong *)(lVar11 + lVar9) = lVar10;
    *(int *)(lVar11 + 8 + lVar9) = (int)lVar3;
    *(ushort *)(lVar11 + 0xc + lVar9) = (ushort)bVar13;
    *(byte *)(lVar11 + 0xe + lVar9) = bVar14;
    *(undefined1 *)(lVar11 + 0xf + lVar9) = 0;
LAB_1417cab15:
    iVar15 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
      FUN_14738ac8a(param_5,iVar15);
    }
    *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
         uVar20 & 0xff |
         (ulonglong)bVar1 << 8 |
         (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30;
  }
  if ((char)local_70 != '\0') goto LAB_1417cab64;
  local_70 = local_80 + 2;
  lVar10 = 0;
  bVar4 = true;
  local_78 = param_4;
  do {
    bVar16 = bVar4;
    local_58 = (undefined8 *)local_70[lVar10 * 2];
    if (local_58 != (undefined8 *)0x0) {
      bVar13 = (&DAT_14a9260a4)[lVar10];
      bVar14 = *(byte *)((longlong)local_70 + lVar10 * 0x10 + 0xd);
      bVar17 = *(byte *)((longlong)local_70 + lVar10 * 0x10 + 0xf);
      local_50._0_7_ = CONCAT16(bVar17,(uint6)CONCAT14(bVar14,(int)local_70[lVar10 * 2 + 1]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar1 = *(byte *)((longlong)local_70 + lVar10 * 0x10 + 0xe);
      bVar2 = *(byte *)((longlong)local_70 + lVar10 * 0x10 + 0xc);
      uVar6 = FUN_14472dff0(param_6,&local_58);
      iVar15 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar15 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
        FUN_14738ac8a(param_5,iVar15);
      }
      *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar2 << 8 |
           (ulonglong)bVar1 << 0x10 |
           (ulonglong)bVar13 << 0x18 | (ulonglong)bVar14 << 0x20 | (ulonglong)(bVar17 & 1) << 0x30;
    }
    lVar10 = 1;
    bVar4 = false;
  } while (bVar16);
  if (local_80[0x16] == 0) {
    local_80[0x16] = DAT_14ca94db0;
    *(undefined4 *)(local_80 + 0x17) = 0;
  }
  local_58 = (undefined8 *)local_80[0x11];
  if (local_58 == (undefined8 *)0x0) {
    local_50 = 0x4000000000000;
    local_58 = &DAT_14ca94d98;
    uVar6 = FUN_14472dff0(param_6);
    iVar15 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
      FUN_14738ac8a(param_5,iVar15);
    }
    uVar20 = (ulonglong)(uVar6 & 0xff | 0x3080000);
  }
  else {
    bVar13 = *(byte *)((longlong)local_80 + 0x95);
    bVar14 = *(byte *)((longlong)local_80 + 0x97);
    local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,(int)local_80[0x12]));
    local_50 = (ulonglong)(uint7)local_50;
    bVar17 = *(byte *)((longlong)local_80 + 0x96);
    bVar1 = *(byte *)((longlong)local_80 + 0x94);
    uVar6 = FUN_14472dff0(param_6);
    iVar15 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
      FUN_14738ac8a(param_5,iVar15);
    }
    uVar20 = (ulonglong)uVar6 & 0xff |
             (ulonglong)bVar1 << 8 |
             (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30
             | 0x3000000;
  }
  *(ulonglong *)(param_5 + (longlong)iVar15 * 8) = uVar20;
  local_60 = local_80 + 6;
  iVar15 = (int)local_80[0xe];
  if (iVar15 != 0) {
    if (0 < iVar15) {
      pbVar18 = (byte *)((longlong)local_80 + 0x3f);
      uVar6 = 0x4000000;
      lVar10 = 0;
      do {
        local_58 = *(undefined8 **)(pbVar18 + -0xf);
        bVar13 = pbVar18[-2];
        bVar14 = *pbVar18;
        local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,*(undefined4 *)(pbVar18 + -7)));
        local_50 = (ulonglong)(uint7)local_50;
        bVar17 = pbVar18[-1];
        bVar1 = pbVar18[-3];
        uVar7 = FUN_14472dff0(param_6,&local_58);
        local_70 = (longlong *)CONCAT44(local_70._4_4_,uVar7);
        iVar15 = *(int *)(param_5 + 0x88);
        *(uint *)(param_5 + 0x88) = iVar15 + 1U;
        if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
          FUN_14738ac8a(param_5,iVar15);
        }
        *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
             (ulonglong)local_70 & 0xff |
             (ulonglong)bVar1 << 8 |
             (ulonglong)bVar17 << 0x10 |
             (ulonglong)uVar6 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30;
        lVar10 = lVar10 + 1;
        iVar15 = (int)local_80[0xe];
        uVar6 = uVar6 + 0x1000000;
        pbVar18 = pbVar18 + 0x10;
      } while (lVar10 < iVar15);
      if (3 < iVar15) goto LAB_1417cb30f;
    }
    uVar6 = iVar15 * 0x1000000 + 0x4000000;
    iVar15 = iVar15 + -4;
    do {
      lVar10 = (longlong)(int)local_80[0xe];
      lVar11 = lVar10 * 0x10;
      local_58 = (undefined8 *)local_60[lVar10 * 2 + -2];
      bVar13 = *(byte *)((longlong)local_60 + lVar11 + -3);
      bVar14 = *(byte *)((longlong)local_60 + lVar11 + -1);
      local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,(int)local_60[lVar10 * 2 + -1]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar17 = *(byte *)((longlong)local_60 + lVar11 + -2);
      bVar1 = *(byte *)((longlong)local_60 + lVar11 + -4);
      uVar8 = FUN_14472dff0(param_6,&local_58);
      iVar12 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar12 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar12 + 1U) {
        FUN_14738ac8a(param_5,iVar12);
      }
      *(ulonglong *)(param_5 + (longlong)iVar12 * 8) =
           (ulonglong)uVar8 & 0xff | (ulonglong)bVar1 << 8 | (ulonglong)bVar17 << 0x10 |
           (ulonglong)uVar6 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30;
      uVar6 = uVar6 + 0x1000000;
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0);
  }
LAB_1417cb30f:
  cVar5 = FUN_147430c75(DAT_14ca85550);
  if (cVar5 != '\0') {
    local_50 = 0;
    local_58 = &DAT_14ca8c098;
    uVar6 = FUN_14472dff0(param_6);
    iVar15 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
      FUN_14738ac8a(param_5,iVar15);
    }
    *(ulonglong *)(param_5 + (longlong)iVar15 * 8) = (ulonglong)(uVar6 & 0xff | 0xe040000);
  }
  if ((undefined8 *)local_80[0xf] == (undefined8 *)0x0) {
    param_4 = local_78;
    if ((int)local_80[0xe] == 0) goto LAB_1417cab64;
    local_58 = (undefined8 *)local_80[6];
    uVar20 = (ulonglong)*(byte *)((longlong)local_80 + 0x3d);
    local_50._0_6_ = (uint6)CONCAT14(*(byte *)((longlong)local_80 + 0x3d),(int)local_80[7]);
    local_50._0_7_ = CONCAT16(*(byte *)((longlong)local_80 + 0x3f),(uint6)local_50);
    local_50 = (ulonglong)(uint7)local_50;
    bVar17 = *(byte *)((longlong)local_80 + 0x3f) & 1;
    bVar13 = *(byte *)((longlong)local_80 + 0x3c);
    bVar14 = *(byte *)((longlong)local_80 + 0x3e);
    uVar6 = FUN_14472dff0(param_6);
    uVar21 = (ulonglong)uVar6;
    iVar15 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) goto LAB_1417cb54f;
  }
  else {
    uVar20 = (ulonglong)*(byte *)((longlong)local_80 + 0x85);
    local_50._0_6_ = (uint6)CONCAT14(*(byte *)((longlong)local_80 + 0x85),(int)local_80[0x10]);
    local_50._0_7_ = CONCAT16(*(byte *)((longlong)local_80 + 0x87),(uint6)local_50);
    local_50 = (ulonglong)(uint7)local_50;
    bVar17 = *(byte *)((longlong)local_80 + 0x87) & 1;
    bVar13 = *(byte *)((longlong)local_80 + 0x84);
    bVar14 = *(byte *)((longlong)local_80 + 0x86);
    local_58 = (undefined8 *)local_80[0xf];
    uVar6 = FUN_14472dff0(param_6);
    uVar21 = (ulonglong)uVar6;
    iVar15 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
LAB_1417cb54f:
      FUN_14738ac8a(param_5,iVar15);
    }
  }
  *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
       (uVar21 & 0xff) +
       ((ulonglong)bVar13 << 8 |
       (ulonglong)bVar14 << 0x10 | uVar20 << 0x20 | (ulonglong)bVar17 << 0x30) + 0xf000000;
  param_4 = local_78;
LAB_1417cab64:
  if ((1 < local_64) || (DAT_14ca96500 == '\0')) {
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      bVar13 = *(byte *)((longlong)param_4 + 0xd);
      bVar14 = *(byte *)((longlong)param_4 + 0xf);
      local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,*(undefined4 *)(param_4 + 1)));
      local_50 = (ulonglong)(uint7)local_50;
      bVar17 = *(byte *)((longlong)param_4 + 0xe);
      bVar1 = *(byte *)((longlong)param_4 + 0xc);
      local_78 = param_4;
      local_58 = (undefined8 *)*param_4;
      uVar6 = FUN_14472dff0(param_6);
      iVar15 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar15 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
        FUN_14738ac8a(param_5,iVar15);
      }
      *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar1 << 8 |
           (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30 |
           0x8000000;
      param_4 = local_78;
    }
    if ((undefined8 *)param_4[2] != (undefined8 *)0x0) {
      bVar13 = *(byte *)((longlong)param_4 + 0x1d);
      bVar14 = *(byte *)((longlong)param_4 + 0x1f);
      local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,*(undefined4 *)(param_4 + 3)));
      local_50 = (ulonglong)(uint7)local_50;
      bVar17 = *(byte *)((longlong)param_4 + 0x1e);
      bVar1 = *(byte *)((longlong)param_4 + 0x1c);
      local_78 = param_4;
      local_58 = (undefined8 *)param_4[2];
      uVar6 = FUN_14472dff0(param_6);
      iVar15 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar15 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
        FUN_14738ac8a(param_5,iVar15);
      }
      *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar1 << 8 |
           (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30 |
           0x9000000;
      local_58 = (undefined8 *)local_78[4];
      bVar13 = *(byte *)((longlong)local_78 + 0x2d);
      bVar14 = *(byte *)((longlong)local_78 + 0x2f);
      local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,*(undefined4 *)(local_78 + 5)));
      local_50 = (ulonglong)(uint7)local_50;
      bVar17 = *(byte *)((longlong)local_78 + 0x2e);
      bVar1 = *(byte *)((longlong)local_78 + 0x2c);
      uVar6 = FUN_14472dff0(param_6);
      iVar15 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar15 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
        FUN_14738ac8a(param_5,iVar15);
      }
      *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar1 << 8 |
           (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30 |
           0xa000000;
      local_58 = (undefined8 *)local_78[6];
      bVar13 = *(byte *)((longlong)local_78 + 0x3d);
      bVar14 = *(byte *)((longlong)local_78 + 0x3f);
      local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,*(undefined4 *)(local_78 + 7)));
      local_50 = (ulonglong)(uint7)local_50;
      bVar17 = *(byte *)((longlong)local_78 + 0x3e);
      bVar1 = *(byte *)((longlong)local_78 + 0x3c);
      uVar6 = FUN_14472dff0(param_6);
      iVar15 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar15 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
        FUN_14738ac8a(param_5,iVar15);
      }
      *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar1 << 8 |
           (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30 |
           0xb000000;
      param_4 = local_78;
    }
    if ((undefined8 *)param_4[8] != (undefined8 *)0x0) {
      bVar13 = *(byte *)((longlong)param_4 + 0x4d);
      bVar14 = *(byte *)((longlong)param_4 + 0x4f);
      local_50._0_7_ = CONCAT16(bVar14,(uint6)CONCAT14(bVar13,*(undefined4 *)(param_4 + 9)));
      local_50 = (ulonglong)(uint7)local_50;
      bVar17 = *(byte *)((longlong)param_4 + 0x4e);
      bVar1 = *(byte *)((longlong)param_4 + 0x4c);
      local_58 = (undefined8 *)param_4[8];
      uVar6 = FUN_14472dff0(param_6);
      iVar15 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar15 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar15 + 1U) {
        FUN_14738ac8a(param_5,iVar15);
      }
      *(ulonglong *)(param_5 + (longlong)iVar15 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar1 << 8 |
           (ulonglong)bVar17 << 0x10 | (ulonglong)bVar13 << 0x20 | (ulonglong)(bVar14 & 1) << 0x30 |
           0xc000000;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417cb5da FUN_1417cb5da body=345 status=ok
// SIG undefined FUN_1417cb5da(void)

bool FUN_1417cb5da(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if ((((DAT_14c76152c == '\x01') && (*(char *)((longlong)param_1 + 0x1fc) != '\0')) &&
      ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
     ((((*(byte *)(lVar4 + 0x152) == 1 || (*(byte *)(lVar4 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar4 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) {
      return false;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x7d4) & 4) != 0) ||
     ((((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0 &&
       (((int)param_1[0x13] != 1 || (cVar2 = (**(code **)param_1[6])(param_1 + 6), cVar2 == '\0'))))
      || ((*(byte *)((longlong)param_1 + 0x9f) & 0x40) != 0)))) {
    return false;
  }
  lVar4 = param_1[0xcc];
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar4 = param_1[0xcc];
  }
  else if (lVar4 == 0) {
    return false;
  }
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 4) != 0) {
    return true;
  }
  iVar3 = (**(code **)(*param_1 + 0x570))(param_1);
  return iVar3 != 0;
}



// FUNCTION 1417cb734 FUN_1417cb734 body=64 status=ok
// SIG undefined FUN_1417cb734(void)

void FUN_1417cb734(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x40) != 0) {
    cVar1 = (**(code **)(*param_1 + 0xbd0))(param_1);
    if (cVar1 != '\0') {
      FUN_1401a1c0e(param_1);
    }
  }
  FUN_1447c0e7a(param_1);
  *(byte *)((longlong)param_1 + 0x674) = *(byte *)((longlong)param_1 + 0x674) & 0xf7;
  return;
}



// FUNCTION 1417cb774 FUN_1417cb774 body=1323 status=ok
// SIG undefined FUN_1417cb774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1417cb774(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  byte bVar20;
  double *pdVar21;
  double *pdVar22;
  undefined4 *puVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 *local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8 [2];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined6 local_13e;
  undefined2 uStack_138;
  undefined8 uStack_136;
  undefined1 local_128 [32];
  undefined1 *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined1 *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  ulonglong local_d0;
  
  uVar14 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar18 = param_1;
  local_d0 = uVar14;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    plVar18 = param_2;
    uVar14 = FUN_1417bb680(param_2,0);
  }
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x52);
  lVar24 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
  auVar26._8_4_ = (int)lVar24;
  auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
  auVar26._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
  iVar13 = movmskpd((int)uVar14,auVar26);
  lVar24 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar28._8_4_ = (int)lVar24;
  auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar28._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
  uVar16 = movmskpd((int)plVar18,auVar28);
  if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
    pdVar21 = (double *)&DAT_14c846480;
    pdVar22 = local_1b8;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *pdVar22 = *pdVar21;
      pdVar21 = pdVar21 + 1;
      pdVar22 = pdVar22 + 1;
    }
  }
  else {
    auVar28 = divpd(_DAT_149934d80,auVar1);
    auVar26 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar28._0_8_);
    dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar28._8_8_);
    local_168 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar26._0_8_);
    local_1b8[0] = -(double)param_1[0x48];
    local_1b8[1] = -(double)param_1[0x49];
    dVar7 = (double)param_1[0x4a] * -1.0;
    dVar8 = (double)param_1[0x4b] * 1.0;
    dVar25 = (double)param_1[0x4c] * dVar4;
    dVar27 = (double)param_1[0x4d] * dVar5;
    dVar6 = (double)param_1[0x4e] * local_168;
    local_1a8._8_4_ = SUB84(dVar8,0);
    local_1a8._0_8_ = dVar7;
    local_1a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar10 = dVar27 * local_1b8[0] - local_1b8[1] * dVar25;
    dVar11 = dVar6 * local_1b8[1] - dVar7 * dVar27;
    dVar9 = dVar25 * dVar7 - local_1b8[0] * dVar6;
    dVar11 = dVar11 + dVar11;
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar10 + dVar10;
    local_198 = 0.0 - ((dVar10 * local_1b8[1] - dVar9 * dVar7) + dVar8 * dVar11 + dVar25);
    dStack_190 = 0.0 - (dVar10 * (double)param_1[0x48] + dVar7 * dVar11 + dVar8 * dVar9 + dVar27);
    local_188 = 0.0 - (dVar8 * dVar10 + dVar6 + (dVar9 * local_1b8[0] - dVar11 * local_1b8[1]));
    uStack_180 = 0;
    local_178._8_4_ = SUB84(dVar5,0);
    local_178._0_8_ = dVar4;
    local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_160 = 0;
  }
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x558))(param_1);
  local_1d8 = *puVar15;
  uStack_1d0 = puVar15[1];
  local_1c8 = puVar15[2];
  uStack_1c0 = puVar15[3];
  local_158 = *param_7;
  uStack_154 = param_7[1];
  uStack_150 = param_7[2];
  uStack_14c = param_7[3];
  uStack_148 = *(undefined8 *)(param_7 + 4);
  uStack_136 = *(undefined8 *)((longlong)param_7 + 0x22);
  uStack_138 = (undefined2)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x1a) >> 0x30);
  uStack_140 = (undefined2)*(undefined8 *)(param_7 + 6);
  local_13e = (undefined6)((ulonglong)*(undefined8 *)(param_7 + 6) >> 0x10);
  local_108 = (undefined1 *)0x0;
  local_100 = param_7[0x16];
  lVar24 = (longlong)local_100;
  if (lVar24 == 0) {
    local_fc = 8;
  }
  else {
    puVar23 = param_7 + 0xc;
    if (*(undefined4 **)(param_7 + 0x14) != (undefined4 *)0x0) {
      puVar23 = *(undefined4 **)(param_7 + 0x14);
    }
    FUN_14470be6c(local_128,local_100,0);
    puVar17 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar17 = local_128;
    }
    memcpy(puVar17,puVar23,lVar24 << 2);
  }
  local_e8 = (undefined1 *)0x0;
  local_e0 = param_7[0x1e];
  lVar24 = (longlong)local_e0;
  if (lVar24 == 0) {
    local_dc = 4;
  }
  else {
    puVar23 = param_7 + 0x18;
    if (*(undefined4 **)(param_7 + 0x1c) != (undefined4 *)0x0) {
      puVar23 = *(undefined4 **)(param_7 + 0x1c);
    }
    FUN_1447163e6(local_f8,local_e0,0);
    puVar17 = local_e8;
    if (local_e8 == (undefined1 *)0x0) {
      puVar17 = local_f8;
    }
    memcpy(puVar17,puVar23,lVar24 << 2);
  }
  local_d8 = *(undefined1 *)(param_7 + 0x20);
  FUN_140870e92(&local_158,param_1);
  lVar24 = param_1[0x108];
  if ((longlong)(int)lVar24 == 0) {
    bVar20 = 0;
  }
  else {
    lVar3 = param_1[0x107];
    lVar19 = 0;
    bVar20 = 0;
    local_1e0 = param_3;
    do {
      if (*(longlong *)(lVar3 + lVar19) != 0) {
        local_1f0 = param_8;
        local_1f8 = &local_1d8;
        local_208 = param_6;
        local_210 = param_5;
        local_218 = param_4;
        local_200 = &local_158;
        bVar12 = FUN_14019b68c(*(longlong *)(lVar3 + lVar19),param_2,local_1e0,local_1b8);
        bVar20 = bVar20 | bVar12;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)(int)lVar24 * 8 != lVar19);
  }
  if (local_e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar20 & 1;
}



// FUNCTION 1417cbca0 FUN_1417cbca0 body=1319 status=ok
// SIG undefined FUN_1417cbca0(void)

void FUN_1417cbca0(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
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
  uint uVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  longlong *plVar29;
  ulonglong uVar30;
  int iVar31;
  uint local_11c;
  ulonglong uVar24;
  
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  plVar1 = (longlong *)(param_1 + 0xb0);
  iVar28 = *(int *)(param_1 + 0x1b0);
  if ((*(char *)(param_1 + 0x90) == '\0' && *(char *)(param_1 + 0x91) == '\0') &&
     (iVar21 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x80), iVar21 != iVar28)) {
    if (iVar21 == 0) {
LAB_1417cc0d8:
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (-1 < *(int *)(param_1 + 0xbc)) {
        return;
      }
      FUN_140250e1e(plVar1,0);
      return;
    }
    plVar29 = (longlong *)(param_1 + 0x40);
    FUN_140250dc8(plVar1);
    uVar17 = *(uint *)(param_1 + 0x48);
    uVar25 = (ulonglong)uVar17;
    iVar28 = *(int *)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x78)) {
      iVar28 = *(int *)(param_1 + 0x70);
    }
    iVar21 = iVar28 + 7;
    if (-1 < iVar28) {
      iVar21 = iVar28;
    }
    uVar23 = iVar21 >> 3;
    uVar24 = (ulonglong)uVar23;
    iVar21 = iVar28 % 8;
    local_11c = 0;
    if (-8 < iVar28 && (int)uVar23 < (int)uVar17) {
      local_11c = *(uint *)(*plVar29 + (longlong)(int)uVar23 * 4) & 0x33333333;
    }
    local_11c = local_11c >> ((char)iVar21 * '\x04' & 0x1fU);
    if ((int)uVar23 < (int)uVar17) {
      if (local_11c == 0) {
        uVar30 = (longlong)(int)uVar23;
        do {
          if ((longlong)(int)uVar17 - 1U == uVar30) {
            local_11c = 0;
            iVar21 = 0;
            goto LAB_1417cc179;
          }
          uVar24 = uVar30 + 1;
          local_11c = *(uint *)(*plVar29 + 4 + uVar30 * 4) & 0x33333333;
          uVar30 = uVar24;
        } while (local_11c == 0);
        iVar21 = 0;
      }
      uVar17 = 0;
      if (local_11c != 0) {
        for (; (local_11c >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
        }
      }
      iVar21 = (uVar17 >> 2) + iVar21;
      local_11c = local_11c >> ((byte)uVar17 & 0x1c);
      uVar25 = uVar24 & 0xffffffff;
    }
    else {
      uVar25 = (ulonglong)uVar23;
    }
LAB_1417cc179:
    iVar28 = 0;
    bVar20 = false;
  }
  else {
    if (iVar28 == 0) goto LAB_1417cc0d8;
    FUN_140250dc8(plVar1,iVar28);
    plVar29 = (longlong *)0x0;
    bVar20 = true;
    uVar25 = 0;
    iVar21 = 0;
  }
  iVar31 = 0;
LAB_1417cbd69:
  do {
    do {
      iVar19 = (int)uVar25;
      if (bVar20) {
        iVar22 = iVar31;
        if (iVar28 <= iVar31) {
          return;
        }
      }
      else {
        iVar22 = iVar21 + iVar19 * 8;
        iVar26 = *(int *)((longlong)plVar29 + 0x3c) + 1;
        if ((int)plVar29[6] < iVar26) {
          iVar26 = (int)plVar29[6];
        }
        if (iVar26 <= iVar22) {
          return;
        }
      }
      lVar18 = *param_2;
      lVar27 = (longlong)(int)param_2[1] * (longlong)iVar22;
      dVar5 = *(double *)(lVar18 + 0x10 + lVar27);
      dVar6 = *(double *)(lVar18 + 8 + lVar27);
      dVar7 = *(double *)(lVar18 + 0x60 + lVar27);
      dVar8 = *(double *)(lVar18 + lVar27);
      dVar9 = *(double *)(lVar18 + 0x30 + lVar27);
      dVar10 = *(double *)(lVar18 + 0x68 + lVar27);
      dVar11 = *(double *)(lVar18 + 0x28 + lVar27);
      dVar12 = *(double *)(lVar18 + 0x20 + lVar27);
      dVar13 = *(double *)(lVar18 + 0x70 + lVar27);
      dVar14 = *(double *)(lVar18 + 0x50 + lVar27);
      dVar15 = *(double *)(lVar18 + 0x48 + lVar27);
      dVar16 = *(double *)(lVar18 + 0x40 + lVar27);
      iVar22 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar22 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar22 + 1U) {
        FUN_14026f43e(plVar1,iVar22);
      }
      lVar18 = *plVar1;
      lVar27 = (longlong)iVar22 * 0x30;
      *(float *)(lVar18 + lVar27) = (float)dVar8;
      *(float *)(lVar18 + 4 + lVar27) = (float)dVar6;
      *(float *)(lVar18 + 8 + lVar27) = (float)dVar5;
      *(float *)(lVar18 + 0xc + lVar27) = (float)dVar12;
      *(float *)(lVar18 + 0x10 + lVar27) = (float)dVar11;
      *(float *)(lVar18 + 0x14 + lVar27) = (float)dVar9;
      *(float *)(lVar18 + 0x18 + lVar27) = (float)dVar16;
      *(float *)(lVar18 + 0x1c + lVar27) = (float)dVar15;
      *(float *)(lVar18 + 0x20 + lVar27) = (float)dVar14;
      *(float *)(lVar18 + 0x24 + lVar27) = (float)(dVar7 + dVar2);
      *(float *)(lVar18 + 0x28 + lVar27) = (float)(dVar10 + dVar3);
      *(float *)(lVar18 + 0x2c + lVar27) = (float)(dVar13 + dVar4);
      iVar31 = iVar31 + 1;
    } while ((bVar20) || (uVar17 = *(uint *)(plVar29 + 1), (int)uVar17 <= iVar19));
    uVar25 = (ulonglong)iVar19;
    local_11c = local_11c & 0xfffffffc;
    if (local_11c == 0) {
      uVar24 = uVar25;
      do {
        if ((longlong)(int)uVar17 - 1U == uVar24) {
          local_11c = 0;
          uVar25 = (ulonglong)uVar17;
          iVar21 = 0;
          goto LAB_1417cbd69;
        }
        uVar25 = uVar24 + 1;
        local_11c = *(uint *)(*plVar29 + 4 + uVar24 * 4) & 0x33333333;
        uVar24 = uVar25;
      } while (local_11c == 0);
      iVar21 = 0;
    }
    uVar17 = 0;
    if (local_11c != 0) {
      for (; (local_11c >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
      }
    }
    iVar21 = (uVar17 >> 2) + iVar21;
    local_11c = local_11c >> ((byte)uVar17 & 0x1c);
  } while( true );
}



// FUNCTION 1417cc1c7 FUN_1417cc1c7 body=39 status=ok
// SIG undefined FUN_1417cc1c7(void)

void FUN_1417cc1c7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140eacc52(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a92b720;
  *(byte *)((longlong)puVar1 + 0x61) = *(byte *)((longlong)puVar1 + 0x61) & 0xf7;
  return;
}



// FUNCTION 1417cc1ee FUN_1417cc1ee body=49 status=ok
// SIG undefined FUN_1417cc1ee(void)

longlong FUN_1417cc1ee(void)

{
  if (DAT_14cae5318 == 0) {
    FUN_14073dd9a(&DAT_14cae5318,&PTR_LAB_14a92ee30);
  }
  return DAT_14cae5318;
}



// FUNCTION 1417cc220 FUN_1417cc220 body=2046 status=ok
// SIG undefined FUN_1417cc220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417cc220(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined2 uVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *_Dst;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *_Dst_00;
  longlong **pplVar14;
  byte bVar15;
  int *piVar16;
  undefined *puVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  size_t sVar20;
  longlong lVar21;
  bool bVar22;
  longlong *aplStack_98 [3];
  int *local_80;
  size_t local_78;
  byte local_69;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar10,param_2,0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar10,param_2,0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar4)(uVar10,param_2,0);
    }
  }
  pplVar14 = aplStack_98;
  lVar12 = *(longlong *)(param_2 + 0x30);
  local_80 = param_3;
  if (lVar12 == 0) {
LAB_1417cc85e:
    *(undefined1 *)(param_2 + 0xa0) = 1;
    goto LAB_1417cc4bd;
  }
  puVar5 = *(ulonglong **)(param_2 + 0x38);
  puVar17 = *(undefined **)(lVar12 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar22 = puVar17 != (undefined *)0x0;
    if (puVar17 != &DAT_14c951a90 && bVar22) {
      do {
        puVar17 = *(undefined **)(puVar17 + 0x30);
        bVar22 = puVar17 != (undefined *)0x0;
        if (puVar17 == &DAT_14c951a90) break;
      } while (puVar17 != (undefined *)0x0);
    }
    if (!bVar22) goto LAB_1417cc85e;
  }
  else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951a98) == 0) goto LAB_1417cc85e;
  plVar6 = *(longlong **)(lVar12 + 0x78);
  sVar20 = (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34);
  if ((int)sVar20 == 0) {
    _Dst_00 = (undefined8 *)0x0;
    pplVar14 = aplStack_98;
  }
  else {
    lVar21 = -(sVar20 + 0x1e & 0xfffffffffffffff0);
    _Dst_00 = (undefined8 *)((longlong)aplStack_98 + lVar21);
    pplVar14 = (longlong **)((longlong)aplStack_98 + lVar21);
  }
  if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
    pcVar4 = *(code **)(*plVar6 + 0x160);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc885;
    (*pcVar4)(plVar6,_Dst_00);
  }
  else {
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc38e;
    memset(_Dst_00,0,sVar20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc77f;
    FUN_144b3d300(&DAT_14c951a88);
    if (DAT_14c951a88 == -1) {
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc799;
      uVar10 = FUN_140342cba();
      *(code **)((longlong)pplVar14 + -8) = FUN_1468c7f1e;
      *(undefined8 *)((longlong)pplVar14 + -0x10) = uVar10;
      *(undefined8 *)((longlong)pplVar14 + -0x18) = 0;
      *(undefined8 *)((longlong)pplVar14 + -0x20) = 0x8001;
      *(undefined8 *)((longlong)pplVar14 + -0x48) = 0x1417cc7dc;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc7ec;
      atexit(FUN_14280c819);
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc7f8;
      _Init_thread_footer(&DAT_14c951a88);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc8ab;
    FUN_144a5ded6(param_2,_Dst_00);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar4 == FUN_14002ddda) {
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc42e;
      FUN_14002ddda(uVar10,param_2,_Dst_00);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc5c7;
      FUN_14002dfbe(uVar10,param_2,_Dst_00);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar10 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
      *_Dst_00 = uVar10;
    }
    else {
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc41d;
      (*pcVar4)(uVar10,param_2,_Dst_00);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(lVar12 + 0x38) & 0x20) != 0) {
    pcVar4 = *(code **)(**(longlong **)(param_2 + 0x18) + 0x280);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc8c1;
    uVar11 = (*pcVar4)();
    uVar1 = *(undefined2 *)(lVar12 + 0x40);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc8db;
    FUN_144a62f0c(uVar10,uVar11,uVar1);
  }
  aplStack_98[1] = plVar6;
  aplStack_98[2] = _Dst_00;
  if (puVar5 == (ulonglong *)0x0) {
LAB_1417cc4a4:
    iVar8 = -1;
    plVar13 = aplStack_98[2];
    piVar16 = local_80;
  }
  else {
    bVar15 = *(byte *)(lVar12 + 0x70);
    pcVar4 = *(code **)(**(longlong **)(lVar12 + 0x78) + 0x178);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc478;
    uVar7 = (*pcVar4)();
    plVar13 = aplStack_98[2];
    plVar6 = *(longlong **)(lVar12 + 0x78);
    iVar2 = *(int *)((longlong)plVar6 + 0x34);
    sVar20 = (size_t)iVar2;
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc49b;
    iVar8 = FUN_140cf774c(puVar5,lVar12,plVar13);
    uVar10 = DAT_14cae7098;
    if (iVar8 != -1) goto LAB_1417cc4a4;
    iVar8 = (int)puVar5[1];
    lVar21 = (longlong)iVar8;
    local_78 = sVar20;
    local_69 = bVar15;
    if (lVar21 == 0x7fffffff) {
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc91b;
      FUN_1400021e4(lVar12 + 0x20,&local_68);
      puVar18 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar18 = local_68;
      }
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc94a;
      FUN_140002266(&local_58,
                    L"Attempted add to array \'%s\' beyond the maximum supported capacity!",puVar18)
      ;
      puVar18 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar18 = local_58;
      }
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc96a;
      FUN_1415b7ec4(puVar18,3,uVar10);
      if (local_58 != (undefined2 *)0x0) {
        *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc980;
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc996;
        FUN_1400020a8();
      }
      goto LAB_1417cc4a4;
    }
    iVar9 = iVar8 + 1;
    *(int *)(puVar5 + 1) = iVar9;
    if ((bVar15 & 1) == 0) {
      if (*(int *)((longlong)puVar5 + 0xc) <= iVar8) {
        *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc628;
        FUN_14097bbd2(puVar5,iVar8,iVar2,uVar7);
        iVar9 = (int)puVar5[1];
      }
      if (iVar9 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        uVar19 = *puVar5;
LAB_1417cc534:
        _Dst = (void *)(lVar21 * sVar20 + uVar19);
      }
    }
    else {
      if (*(int *)((longlong)puVar5 + 0xc) <= iVar8) {
        *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cca0a;
        FUN_1468c03c2(puVar5,iVar8,sVar20,uVar7);
        iVar9 = (int)puVar5[1];
        sVar20 = local_78;
        bVar15 = local_69;
      }
      local_78 = sVar20;
      local_69 = bVar15;
      if (iVar9 != 0) {
        uVar19 = *puVar5;
        if ((uVar19 & 1) != 0) {
          uVar19 = ((longlong)uVar19 >> 0x18) + (longlong)puVar5;
        }
        goto LAB_1417cc534;
      }
      _Dst = (void *)0x0;
    }
    if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
      pcVar4 = *(code **)(*plVar6 + 0x160);
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc55a;
      (*pcVar4)(plVar6);
    }
    else {
      *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc60e;
      memset(_Dst,0,sVar20);
    }
    piVar16 = local_80;
    plVar13 = aplStack_98[2];
    if ((int)puVar5[1] == 0) {
      lVar12 = 0;
    }
    else {
      if ((bVar15 & 1) == 0) {
        uVar19 = *puVar5;
      }
      else {
        uVar19 = *puVar5;
        sVar20 = local_78;
        if ((uVar19 & 1) != 0) {
          uVar19 = (longlong)puVar5 + ((longlong)uVar19 >> 0x18);
        }
      }
      lVar12 = lVar21 * sVar20 + uVar19;
    }
    pcVar4 = *(code **)(*plVar6 + 0x110);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc59b;
    (*pcVar4)(plVar6,lVar12,plVar13);
  }
  plVar6 = aplStack_98[1];
  *piVar16 = iVar8;
  if ((*(byte *)((longlong)aplStack_98[1] + 0x3c) & 0x10) == 0) {
    pcVar4 = *(code **)(*aplStack_98[1] + 0x148);
    *(undefined8 *)((longlong)pplVar14 + -0x28) = 0x1417cc8f4;
    (*pcVar4)(plVar6,plVar13);
  }
LAB_1417cc4bd:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)pplVar14 + -0x28) = &UNK_1417cc4e7;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417cca24 FUN_1417cca24 body=964 status=ok
// SIG undefined FUN_1417cca24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417cca24(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puVar11;
  ulonglong uVar12;
  bool bVar13;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar9,param_2,0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar9,param_2,0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar4)(uVar9,param_2,0);
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 == 0) {
LAB_1417ccd78:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    puVar6 = *(ulonglong **)(param_2 + 0x38);
    puVar11 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar13 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c951a90 && bVar13) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar13 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c951a90) break;
        } while (puVar11 != (undefined *)0x0);
      }
      if (!bVar13) goto LAB_1417ccd78;
    }
    else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a98) == 0) goto LAB_1417ccd78;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if ((*(byte *)(lVar5 + 0x38) & 0x20) != 0) {
      uVar9 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
      FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar9,*(undefined2 *)(lVar5 + 0x40));
    }
    if (puVar6 != (ulonglong *)0x0) {
      bVar1 = *(byte *)(lVar5 + 0x70);
      uVar8 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
      iVar10 = (int)puVar6[1];
      if (iVar10 != 0) {
        plVar7 = *(longlong **)(lVar5 + 0x78);
        iVar2 = *(int *)((longlong)plVar7 + 0x34);
        if ((0 < iVar10) && ((plVar7[7] & 0x1040000000U) == 0)) {
          if ((bVar1 & 1) == 0) {
            uVar12 = *puVar6;
          }
          else {
            uVar12 = *puVar6;
            if ((uVar12 & 1) != 0) {
              uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar6;
            }
          }
          do {
            if ((plVar7[7] & 0x1000000000U) == 0) {
              (**(code **)(*plVar7 + 0x148))(plVar7,uVar12);
            }
            uVar12 = uVar12 + (longlong)iVar2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        *(undefined4 *)(puVar6 + 1) = 0;
        if ((bVar1 & 1) == 0) {
          if (*(int *)((longlong)puVar6 + 0xc) != 0) {
            FUN_14474d398(puVar6,0,iVar2,uVar8);
            return;
          }
        }
        else if (*(int *)((longlong)puVar6 + 0xc) != 0) {
          FUN_1468c0360(puVar6,0,iVar2,uVar8);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1417ccde8 FUN_1417ccde8 body=715 status=ok
// SIG undefined FUN_1417ccde8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417ccde8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined *puVar7;
  bool bVar8;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,0);
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
LAB_1417cd0a0:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x38);
    puVar7 = *(undefined **)(lVar4 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951ae0) {
      FUN_144b3d300(&DAT_14c951ae0);
      if (DAT_14c951ae0 == -1) {
        FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                      FUN_140b31576);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
    }
    if (DAT_14c951a98 == 0) {
      bVar8 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c951a90 && bVar8) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar8 = puVar7 != (undefined *)0x0;
          if (puVar7 == &DAT_14c951a90) break;
        } while (puVar7 != (undefined *)0x0);
      }
      if (!bVar8) goto LAB_1417cd0a0;
    }
    else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c951a98) == 0) goto LAB_1417cd0a0;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x178))();
      uVar6 = *(undefined4 *)(lVar5 + 8);
    }
    *param_3 = uVar6;
  }
  return;
}



// FUNCTION 1417cd0b4 FUN_1417cd0b4 body=1743 status=ok
// SIG undefined FUN_1417cd0b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417cd0b4(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong *puVar7;
  void *_Dst;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_60 = FUN_140b31576;
    local_68 = &DAT_14c951a38;
    local_70 = 0;
    local_78 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar6 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar6 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,0);
    }
    else if (pcVar6 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,0);
    }
    else if (pcVar6 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar6)(uVar5,param_2,0);
    }
  }
  lVar16 = *(longlong *)(param_2 + 0x30);
  if (lVar16 == 0) {
LAB_1417cd695:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    puVar7 = *(ulonglong **)(param_2 + 0x38);
    puVar15 = *(undefined **)(lVar16 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_60 = FUN_140b31576;
      local_68 = &DAT_14c951a38;
      local_70 = 0;
      local_78 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar17 = puVar15 != (undefined *)0x0;
      if (puVar15 != &DAT_14c951a90 && bVar17) {
        do {
          puVar15 = *(undefined **)(puVar15 + 0x30);
          bVar17 = puVar15 != (undefined *)0x0;
          if (puVar15 == &DAT_14c951a90) break;
        } while (puVar15 != (undefined *)0x0);
      }
      if (!bVar17) goto LAB_1417cd695;
    }
    else if ((*(ulonglong *)(puVar15 + 0x18) & DAT_14c951a98) == 0) goto LAB_1417cd695;
    *(undefined8 *)(param_2 + 0x30) = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_68 = (undefined *)FUN_140342cba();
      local_60 = FUN_1468c7f1e;
      local_70 = 0;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    pbVar4 = *(byte **)(param_2 + 0x20);
    if (pbVar4 == (byte *)0x0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      *(byte **)(param_2 + 0x20) = pbVar4 + 1;
      pcVar6 = (code *)(&DAT_14c962c70)[*pbVar4];
      if (pcVar6 == FUN_14002ddda) {
        FUN_14002ddda(uVar5,param_2,0);
      }
      else if (pcVar6 == FUN_14002dfbe) {
        FUN_14002dfbe(uVar5,param_2,0);
      }
      else if (pcVar6 == (code *)&LAB_1428293cc) {
        _DAT_00000000 = *(undefined8 *)(pbVar4 + 1);
        *(byte **)(param_2 + 0x20) = pbVar4 + 9;
      }
      else {
        (*pcVar6)(uVar5,param_2,0);
      }
    }
    _Dst = *(void **)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x30) = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_68 = (undefined *)FUN_140342cba();
      local_60 = FUN_1468c7f1e;
      local_70 = 0;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    pbVar4 = *(byte **)(param_2 + 0x20);
    if (pbVar4 == (byte *)0x0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2,0);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      *(byte **)(param_2 + 0x20) = pbVar4 + 1;
      pcVar6 = (code *)(&DAT_14c962c70)[*pbVar4];
      if (pcVar6 == FUN_14002ddda) {
        FUN_14002ddda(uVar5,param_2,0);
      }
      else if (pcVar6 == FUN_14002dfbe) {
        FUN_14002dfbe(uVar5,param_2,0);
      }
      else if (pcVar6 == (code *)&LAB_1428293cc) {
        _DAT_00000000 = *(undefined8 *)(pbVar4 + 1);
        *(byte **)(param_2 + 0x20) = pbVar4 + 9;
      }
      else {
        (*pcVar6)(uVar5,param_2,0);
      }
    }
    piVar8 = *(int **)(param_2 + 0x38);
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    *piVar8 = -1;
    if (puVar7 != (ulonglong *)0x0) {
      bVar1 = *(byte *)(lVar16 + 0x70);
      (**(code **)(**(longlong **)(lVar16 + 0x78) + 0x178))();
      uVar5 = DAT_14cae5358;
      plVar9 = *(longlong **)(lVar16 + 0x78);
      iVar2 = (int)puVar7[1];
      if (iVar2 < 1) {
        FUN_140002266(&local_58,L"Attempted to access random index from empty array!");
        puVar13 = local_58;
        if (local_50 == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        FUN_1415b7ec4(puVar13,3,uVar5);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
          (**(code **)(*plVar9 + 0x160))(plVar9,_Dst);
        }
        else {
          memset(_Dst,0,(longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
        }
      }
      else {
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        uVar11 = rand();
        iVar12 = (int)((float)iVar2 * ((float)(uVar11 & 0x7fff) / 32767.0));
        iVar10 = iVar2 + -1;
        if (iVar12 < iVar2 + -1) {
          iVar10 = iVar12;
        }
        if ((int)puVar7[1] == 0) {
          lVar16 = 0;
        }
        else {
          if ((bVar1 & 1) == 0) {
            uVar14 = *puVar7;
          }
          else {
            uVar14 = *puVar7;
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar7 + ((longlong)uVar14 >> 0x18);
            }
          }
          lVar16 = (longlong)iVar10 * (longlong)iVar3 + uVar14;
        }
        (**(code **)(*plVar9 + 0x110))(plVar9,_Dst,lVar16);
        *piVar8 = iVar10;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417cd784 FUN_1417cd784 body=49 status=ok
// SIG undefined FUN_1417cd784(void)

longlong FUN_1417cd784(void)

{
  if (DAT_14cae5598 == 0) {
    FUN_14073dd9a(&DAT_14cae5598,&PTR_LAB_14a934300);
  }
  return DAT_14cae5598;
}



// FUNCTION 1417cd7b5 FUN_1417cd7b5 body=49 status=ok
// SIG undefined FUN_1417cd7b5(void)

longlong FUN_1417cd7b5(void)

{
  if (DAT_14cae6e28 == 0) {
    FUN_14073dd9a(&DAT_14cae6e28,&PTR_LAB_14a971680);
  }
  return DAT_14cae6e28;
}



// FUNCTION 1417cd7e6 FUN_1417cd7e6 body=819 status=ok
// SIG undefined FUN_1417cd7e6(void)

void FUN_1417cd7e6(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_28 + local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cdb1a FUN_1417cdb1a body=797 status=ok
// SIG undefined FUN_1417cdb1a(void)

void FUN_1417cdb1a(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = iStack_1c + local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cde38 FUN_1417cde38 body=814 status=ok
// SIG undefined FUN_1417cde38(void)

void FUN_1417cde38(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_48 + local_30;
  param_3[1] = local_40 + local_28;
  param_3[2] = local_38 + local_20;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ce168 FUN_1417ce168 body=786 status=ok
// SIG undefined FUN_1417ce168(void)

void FUN_1417ce168(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_24 = (int)uVar2;
      local_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_24);
    }
  }
  iVar4 = iStack_24;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (int)uVar2;
      iStack_24 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = iVar4 == 0 && local_28 == 0;
  if ((CONCAT44(uStack_1c,local_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ce47c FUN_1417ce47c body=1105 status=ok
// SIG undefined FUN_1417ce47c(void)

void FUN_1417ce47c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  float *pfVar3;
  byte *pbVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  float local_4c;
  float local_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
LAB_1417ce529:
    pbVar4 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_1417ce529;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_1417ce529;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_1417ce529;
    }
    uVar1 = *(undefined8 *)(pbVar4 + 1);
    pbVar4 = pbVar4 + 9;
    *(byte **)(param_2 + 0x20) = pbVar4;
    local_40 = (undefined4)uVar1;
    uStack_3c = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  fStack_44 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&fStack_44);
LAB_1417ce5a9:
    pbVar4 = *(byte **)(param_2 + 0x20);
    pfVar6 = *(float **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&fStack_44);
      goto LAB_1417ce5a9;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&fStack_44);
      goto LAB_1417ce5a9;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&fStack_44);
      goto LAB_1417ce5a9;
    }
    uVar1 = *(undefined8 *)(pbVar4 + 1);
    pbVar4 = pbVar4 + 9;
    *(byte **)(param_2 + 0x20) = pbVar4;
    fStack_44 = (float)uVar1;
    local_40 = (undefined4)((ulonglong)uVar1 >> 0x20);
    pfVar6 = (float *)0x0;
  }
  local_48 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        *(byte **)(param_2 + 0x20) = pbVar4;
        local_48 = (float)uVar1;
        fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
        pfVar5 = (float *)0x0;
        goto LAB_1417ce630;
      }
      (*pcVar2)(uVar1,param_2,&local_48);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  pfVar5 = *(float **)(param_2 + 0x38);
LAB_1417ce630:
  local_4c = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_4c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_4c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_4c);
    }
  }
  pfVar3 = &local_48;
  if (pfVar5 != (float *)0x0) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &fStack_44;
  if (pfVar6 != (float *)0x0) {
    pfVar5 = pfVar6;
  }
  pfVar6 = &local_4c;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar6 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pfVar3 = (float)(double)CONCAT44(uStack_3c,local_40);
  *pfVar6 = (float)local_38;
  *pfVar5 = (float)local_30;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ce8ce FUN_1417ce8ce body=1102 status=ok
// SIG undefined FUN_1417ce8ce(void)

void FUN_1417ce8ce(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [40];
  undefined8 local_120 [3];
  undefined8 local_108 [3];
  undefined8 local_f0 [3];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x3ff00000;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  puVar9 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
LAB_1417ce9af:
    pbVar8 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_d8);
      goto LAB_1417ce9af;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_d8);
      goto LAB_1417ce9af;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_d8);
      goto LAB_1417ce9af;
    }
    local_d8 = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    puVar10 = (undefined8 *)0x0;
  }
  *puVar9 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
LAB_1417cea26:
    pbVar8 = *(byte **)(param_2 + 0x20);
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_f0);
      goto LAB_1417cea26;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_f0);
      goto LAB_1417cea26;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_f0);
      goto LAB_1417cea26;
    }
    local_f0[0] = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    puVar11 = (undefined8 *)0x0;
  }
  *puVar9 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_108);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_108);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_108[0] = *(undefined8 *)(pbVar8 + 1);
        pbVar8 = pbVar8 + 9;
        *(byte **)(param_2 + 0x20) = pbVar8;
        puVar7 = (undefined8 *)0x0;
        goto LAB_1417ceaa5;
      }
      (*pcVar2)(uVar1,param_2,local_108);
    }
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  puVar7 = *(undefined8 **)(param_2 + 0x38);
LAB_1417ceaa5:
  *puVar9 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_120);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_120);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_120[0] = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_120);
    }
  }
  puVar9 = local_108;
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = puVar7;
  }
  puVar7 = local_f0;
  if (puVar11 != (undefined8 *)0x0) {
    puVar7 = puVar11;
  }
  puVar11 = &local_d8;
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = puVar10;
  }
  puVar10 = local_120;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = puVar11[5];
  uVar1 = puVar11[6];
  *puVar7 = puVar11[4];
  puVar7[1] = uVar6;
  puVar7[2] = uVar1;
  local_58 = *puVar11;
  uStack_50 = puVar11[1];
  local_48 = *(undefined4 *)(puVar11 + 2);
  uStack_44 = *(undefined4 *)((longlong)puVar11 + 0x14);
  uStack_40 = *(undefined4 *)(puVar11 + 3);
  uStack_3c = *(undefined4 *)((longlong)puVar11 + 0x1c);
  FUN_1448052ee(&local_58,&local_70);
  puVar9[2] = local_60;
  *puVar9 = local_70;
  puVar9[1] = uStack_68;
  uVar3 = *(undefined4 *)((longlong)puVar11 + 0x44);
  uVar4 = *(undefined4 *)(puVar11 + 9);
  uVar5 = *(undefined4 *)((longlong)puVar11 + 0x4c);
  uVar1 = puVar11[10];
  *(undefined4 *)puVar10 = *(undefined4 *)(puVar11 + 8);
  *(undefined4 *)((longlong)puVar10 + 4) = uVar3;
  *(undefined4 *)(puVar10 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
  puVar10[2] = uVar1;
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ced1e FUN_1417ced1e body=1176 status=ok
// SIG undefined FUN_1417ced1e(void)

void FUN_1417ced1e(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_24;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  iStack_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_20 = (int)uVar2;
      local_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      iStack_20 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar4 = local_24;
  if (local_1c < local_24) {
    iVar4 = local_1c;
  }
  if (iVar4 < iStack_20) {
    iVar4 = iStack_20;
  }
  *param_3 = iVar4;
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cf1b8 FUN_1417cf1b8 body=509 status=ok
// SIG undefined FUN_1417cf1b8(void)

void FUN_1417cf1b8(undefined8 param_1,longlong param_2,float *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_34 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (float)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = (double)FUN_144719204((double)local_34);
  *param_3 = (float)(double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                            (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
  if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cf3b6 FUN_1417cf3b6 body=1780 status=ok
// SIG undefined FUN_1417cf3b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417cf3b6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  code *local_160;
  double local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_168 = FUN_1446ddbd2();
      local_160 = FUN_1403a682c;
      local_170 = 0;
      local_178 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_108);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_108);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_108 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_108);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_168 = FUN_1446ddbd2();
      local_160 = FUN_1403a682c;
      local_170 = 0;
      local_178 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_128 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_128);
    }
  }
  dVar15 = local_128;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar9 = _DAT_1499387d0;
  auVar19._8_8_ = dStack_120;
  auVar19._0_8_ = local_128;
  auVar18._8_8_ = dStack_100;
  auVar18._0_8_ = local_108;
  dVar6 = (double)DAT_1499387d0;
  dVar7 = DAT_1499387d0._8_8_;
  auVar18 = divpd(auVar18,_DAT_1499387d0);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_f8;
  auVar20 = divpd(auVar20,_DAT_1499387d0);
  auVar18 = roundpd(auVar18,auVar18,3);
  auVar20 = roundpd(auVar20,auVar20,3);
  dVar4 = (local_108 - auVar18._0_8_ * dVar6) * 0.008726646259971648;
  dVar5 = (dStack_100 - auVar18._8_8_ * dVar7) * 0.008726646259971648;
  dVar14 = (local_f8 - auVar20._0_8_ * dVar6) * 0.008726646259971648;
  dVar16 = (0.0 - auVar20._8_8_ * dVar7) * 0.008726646259971648;
  local_158 = sin(dVar4);
  dVar10 = sin(dVar5);
  dVar11 = sin(dVar14);
  sin(dVar16);
  dVar12 = cos(dVar4);
  dVar13 = cos(dVar5);
  dVar14 = cos(dVar14);
  cos(dVar16);
  dVar4 = -(dVar13 * local_158 * dVar11) + dVar10 * dVar12 * dVar14;
  dVar5 = dVar10 * local_158 * dVar11 + dVar13 * dVar12 * dVar14;
  dVar8 = local_158 * dVar10 * dVar14 - dVar12 * dVar13 * dVar11;
  dVar10 = -(local_158 * dVar13 * dVar14) - dVar12 * dVar10 * dVar11;
  auVar19 = divpd(auVar19,auVar9);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_118;
  auVar18 = divpd(auVar21,auVar9);
  auVar19 = roundpd(auVar19,auVar19,3);
  auVar18 = roundpd(auVar18,auVar18,3);
  dVar14 = (dVar15 - auVar19._0_8_ * dVar6) * 0.008726646259971648;
  dVar16 = (dStack_120 - auVar19._8_8_ * dVar7) * 0.008726646259971648;
  dVar6 = (local_118 - auVar18._0_8_ * dVar6) * 0.008726646259971648;
  dVar7 = (0.0 - auVar18._8_8_ * dVar7) * 0.008726646259971648;
  dVar15 = sin(dVar14);
  dVar11 = sin(dVar16);
  dVar12 = sin(dVar6);
  sin(dVar7);
  dVar14 = cos(dVar14);
  dVar16 = cos(dVar16);
  dVar13 = cos(dVar6);
  cos(dVar7);
  dVar6 = -(dVar16 * dVar15 * dVar12) + dVar11 * dVar14 * dVar13;
  dVar7 = dVar11 * dVar15 * dVar12 + dVar16 * dVar14 * dVar13;
  dVar17 = dVar15 * dVar11 * dVar13 - dVar14 * dVar16 * dVar12;
  dVar14 = -(dVar15 * dVar16 * dVar13) - dVar14 * dVar11 * dVar12;
  local_e8 = dVar10 * dVar6 * -1.0 + dVar4 * dVar14 + dVar5 * dVar17 * 1.0 + dVar8 * dVar7;
  dStack_e0 = dVar8 * dVar6 * 1.0 + dVar5 * dVar14 + dVar4 * dVar17 * -1.0 + dVar10 * dVar7;
  local_d8 = dVar5 * dVar6 * 1.0 + ((dVar17 * dVar10 * 1.0 + dVar7 * dVar4) - dVar14 * dVar8);
  dStack_d0 = dVar4 * dVar6 * -1.0 + ((dVar17 * dVar8 * -1.0 + dVar7 * dVar5) - dVar14 * dVar10);
  FUN_1448052ee(&local_e8,&local_140);
  param_3[2] = local_130;
  *param_3 = local_140;
  param_3[1] = uStack_138;
  if ((local_c0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cfaac FUN_1417cfaac body=447 status=ok
// SIG undefined FUN_1417cfaac(void)

void FUN_1417cfaac(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  param_3[1] = local_20;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cfc6c FUN_1417cfc6c body=432 status=ok
// SIG undefined FUN_1417cfc6c(void)

void FUN_1417cfc6c(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_1c;
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cfe1e FUN_1417cfe1e body=454 status=ok
// SIG undefined FUN_1417cfe1e(void)

void FUN_1417cfe1e(undefined8 param_1,longlong param_2,float *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)local_30;
  param_3[1] = (float)local_28;
  param_3[2] = (float)local_20;
  param_3[3] = 1.0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417cffe6 FUN_1417cffe6 body=635 status=ok
// SIG undefined FUN_1417cffe6(void)

void FUN_1417cffe6(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double _X;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_78 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_78);
    }
  }
  dVar5 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = 0.0;
  if ((((local_78 != 0.0) || (NAN(local_78))) || (local_70 != 0.0)) || (NAN(local_70))) {
    dVar4 = atan2(local_70,local_78);
    dVar4 = dVar4 * 57.29577951308232;
  }
  _X = SQRT(dVar5 * dVar5 + local_70 * local_70);
  dVar5 = 0.0;
  if (((local_68 != 0.0) || (NAN(local_68))) || ((_X != 0.0 || (NAN(_X))))) {
    dVar5 = atan2(local_68,_X);
    dVar5 = dVar5 * 57.29577951308232;
  }
  *param_3 = dVar5;
  param_3[1] = dVar4;
  param_3[2] = 0.0;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d0262 FUN_1417d0262 body=474 status=ok
// SIG undefined FUN_1417d0262(void)

void FUN_1417d0262(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)((longlong)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined4 *)((longlong)param_3 + 0x1c) = 0x3ff00000;
  param_3[4] = local_38;
  param_3[5] = uStack_30;
  param_3[6] = local_28;
  param_3[7] = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)((longlong)param_3 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_3 + 9) = 0;
  *(undefined4 *)((longlong)param_3 + 0x4c) = 0x3ff00000;
  param_3[10] = 0x3ff0000000000000;
  param_3[0xb] = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d043e FUN_1417d043e body=809 status=ok
// SIG undefined FUN_1417d043e(void)

void FUN_1417d043e(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 * local_38 + local_30 * local_48 + local_40 * local_28;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d0768 FUN_1417d0768 body=829 status=ok
// SIG undefined FUN_1417d0768(void)

void FUN_1417d0768(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d0aa6 FUN_1417d0aa6 body=798 status=ok
// SIG undefined FUN_1417d0aa6(void)

void FUN_1417d0aa6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = iStack_1c == local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d0dc6 FUN_1417d0dc6 body=788 status=ok
// SIG undefined FUN_1417d0dc6(void)

void FUN_1417d0dc6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d10dc FUN_1417d10dc body=788 status=ok
// SIG undefined FUN_1417d10dc(void)

void FUN_1417d10dc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d13f2 FUN_1417d13f2 body=455 status=ok
// SIG undefined FUN_1417d13f2(void)

void FUN_1417d13f2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (int)((ulonglong)(longlong)ROUND(local_20 + local_20 + -0.5) >> 1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d15ba FUN_1417d15ba body=1168 status=ok
// SIG undefined FUN_1417d15ba(void)

void FUN_1417d15ba(undefined8 param_1,longlong param_2,int *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_50 = FUN_14079c5e4;
      local_58 = &DAT_14c9520b8;
      local_68 = 0x101008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_38);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_38);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_38 = *(double *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar7,param_2,&local_38);
    }
  }
  local_40 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_50 = FUN_14079c5e4;
      local_58 = &DAT_14c9520b8;
      local_68 = 0x101008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_40);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_40);
    }
    else {
      if (pcVar1 == (code *)&LAB_1428293cc) {
        local_40 = *(double *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        goto LAB_1417d1716;
      }
      (*pcVar1)(uVar7,param_2,&local_40);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
LAB_1417d1716:
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_48);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_48);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar1)(uVar7,param_2,&local_48);
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar9 = 0;
  uVar10 = 0;
  if ((local_40 != 0.0) || (NAN(local_40))) {
    dVar8 = ABS(local_38 / local_40);
    iVar3 = (int)ROUND(dVar8 + dVar8 + -0.5) >> 1;
    iVar6 = -iVar3;
    if (0.0 <= local_38 / local_40) {
      iVar6 = iVar3;
    }
    uVar7 = FUN_144719204();
    uVar9 = (undefined4)uVar7;
    uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  else {
    FUN_1415b7ec4(L"Attempted modulo 0 - returning 0.",3,DAT_14cae6e38);
    iVar6 = 0;
  }
  puVar4 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = CONCAT44(uVar10,uVar9);
  *param_3 = iVar6;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d1a4c FUN_1417d1a4c body=436 status=ok
// SIG undefined FUN_1417d1a4c(void)

void FUN_1417d1a4c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (int)(longlong)local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d1c02 FUN_1417d1c02 body=933 status=ok
// SIG undefined FUN_1417d1c02(void)

void FUN_1417d1c02(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1403a682c;
    local_60 = 0;
    local_68 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1403a682c;
    local_60 = 0;
    local_68 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar8 = local_38 - local_20;
  dVar6 = local_40 - local_28;
  dVar4 = local_48 - local_30;
  dVar10 = dVar8 * dVar8 + dVar4 * dVar4 + dVar6 * dVar6;
  if (((dVar10 != 1.0) || (dVar5 = dVar4, dVar7 = dVar6, dVar9 = dVar8, NAN(dVar10))) &&
     (dVar5 = DAT_14c8464e0, dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar5 = dVar4 * dVar10;
    dVar7 = dVar6 * dVar10;
    dVar9 = dVar8 * dVar10;
  }
  *param_3 = dVar5;
  param_3[1] = dVar7;
  param_3[2] = dVar9;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417d1fa8 FUN_1417d1fa8 body=818 status=ok
// SIG undefined FUN_1417d1fa8(void)

void FUN_1417d1fa8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_28 < local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d22dc FUN_1417d22dc body=798 status=ok
// SIG undefined FUN_1417d22dc(void)

void FUN_1417d22dc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 < iStack_1c;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d25fc FUN_1417d25fc body=818 status=ok
// SIG undefined FUN_1417d25fc(void)

void FUN_1417d25fc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_28 <= local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d2930 FUN_1417d2930 body=798 status=ok
// SIG undefined FUN_1417d2930(void)

void FUN_1417d2930(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 <= iStack_1c;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d2c50 FUN_1417d2c50 body=818 status=ok
// SIG undefined FUN_1417d2c50(void)

void FUN_1417d2c50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 < local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d2f84 FUN_1417d2f84 body=798 status=ok
// SIG undefined FUN_1417d2f84(void)

void FUN_1417d2f84(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = iStack_1c < local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d32a4 FUN_1417d32a4 body=818 status=ok
// SIG undefined FUN_1417d32a4(void)

void FUN_1417d32a4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 <= local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d35d8 FUN_1417d35d8 body=798 status=ok
// SIG undefined FUN_1417d35d8(void)

void FUN_1417d35d8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = iStack_1c <= local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d38f8 FUN_1417d38f8 body=1190 status=ok
// SIG undefined FUN_1417d38f8(void)

void FUN_1417d38f8(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  float local_24;
  float fStack_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (float)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  fStack_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&fStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&fStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&fStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      fStack_20 = (float)uVar2;
      local_1c = (float)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&fStack_20);
    }
  }
  local_24 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (float)uVar2;
      fStack_20 = (float)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)fStack_20;
  param_3[1] = (double)local_24;
  param_3[2] = (double)local_1c;
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d3da0 FUN_1417d3da0 body=1708 status=ok
// SIG undefined FUN_1417d3da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417d3da0(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  code *local_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_148 = FUN_1446ddbd2();
      local_140 = FUN_1403a682c;
      local_150 = 0;
      local_158 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_d8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_d8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_d8 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_148 = FUN_1446ddbd2();
      local_140 = FUN_1403a682c;
      local_150 = 0;
      local_158 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_f8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_f8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_f8 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_148 = FUN_1446ddbd2();
      local_140 = FUN_1403a682c;
      local_150 = 0;
      local_158 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_118 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_118);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = local_118;
  uStack_120 = uStack_110;
  auVar13._8_8_ = dStack_f0;
  auVar13._0_8_ = local_f8;
  local_138 = local_d8;
  dStack_130 = dStack_d0;
  auVar11 = divpd(auVar13,_DAT_1499387d0);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_e8;
  auVar13 = divpd(auVar12,_DAT_1499387d0);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar13 = roundpd(auVar13,auVar13,3);
  dVar9 = (local_f8 - auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar10 = (dStack_f0 - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = (local_e8 - auVar13._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar8 = (0.0 - auVar13._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar4 = sin(dVar9);
  dVar5 = sin(dVar10);
  dVar6 = sin(dVar7);
  sin(dVar8);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
  *param_3 = dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
  param_3[1] = -(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
  auVar11._8_4_ = SUB84(dVar8,0);
  auVar11._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 2) = auVar11;
  param_3[4] = local_138;
  param_3[5] = dStack_130;
  param_3[6] = local_c8;
  param_3[7] = 0.0;
  *(undefined4 *)(param_3 + 8) = (undefined4)local_128;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_128._4_4_;
  *(undefined4 *)(param_3 + 9) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uStack_120._4_4_;
  param_3[10] = local_108;
  param_3[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d444e FUN_1417d444e body=1211 status=ok
// SIG undefined FUN_1417d444e(void)

void FUN_1417d444e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  param_3[1] = local_28;
  param_3[2] = local_30;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d490a FUN_1417d490a body=2079 status=ok
// SIG undefined FUN_1417d490a(void)

void FUN_1417d490a(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_70 = FUN_14079c5e4;
      local_78 = &DAT_14c9520b8;
      local_88 = 0x101008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  local_50 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_70 = FUN_14079c5e4;
      local_78 = &DAT_14c9520b8;
      local_88 = 0x101008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  local_58 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_70 = FUN_14079c5e4;
      local_78 = &DAT_14c9520b8;
      local_88 = 0x101008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  local_60 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_70 = FUN_14079c5e4;
      local_78 = &DAT_14c9520b8;
      local_88 = 0x101008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  local_68 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_70 = FUN_14079c5e4;
      local_78 = &DAT_14c9520b8;
      local_88 = 0x101008001;
      local_80 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ABS(local_58 - local_50) <= 1e-08) {
    dVar4 = (double)(-(ulonglong)(local_58 <= local_48) & 0x3ff0000000000000);
  }
  else {
    dVar4 = (local_48 - local_50) / (local_58 - local_50);
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  *param_3 = (local_68 - local_60) * dVar4 + local_60;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d512a FUN_1417d512a body=802 status=ok
// SIG undefined FUN_1417d512a(void)

void FUN_1417d512a(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar4 = iStack_1c;
  if (iStack_1c < local_20) {
    iVar4 = local_20;
  }
  *param_3 = iVar4;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d544e FUN_1417d544e body=802 status=ok
// SIG undefined FUN_1417d544e(void)

void FUN_1417d544e(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar4 = local_20;
  if (iStack_1c < local_20) {
    iVar4 = iStack_1c;
  }
  *param_3 = iVar4;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d5772 FUN_1417d5772 body=798 status=ok
// SIG undefined FUN_1417d5772(void)

void FUN_1417d5772(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = iStack_1c * local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d5a92 FUN_1417d5a92 body=814 status=ok
// SIG undefined FUN_1417d5a92(void)

void FUN_1417d5a92(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_48 * local_30;
  param_3[1] = local_40 * local_28;
  param_3[2] = local_38 * local_20;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d5dc2 FUN_1417d5dc2 body=931 status=ok
// SIG undefined FUN_1417d5dc2(void)

void FUN_1417d5dc2(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_48 = (undefined *)FUN_1446ddbd2();
    local_40 = FUN_1403a682c;
    local_50 = 0;
    local_58 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_34 = 0.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_40 = FUN_1408a629c;
    local_48 = &DAT_14c9520b8;
    local_50 = 0;
    local_58 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (float)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = (double)CONCAT44(uStack_2c,uStack_30);
  dVar8 = local_20 * local_20 + dVar4 * dVar4 + local_28 * local_28;
  if (((dVar8 != 1.0) || (dVar5 = dVar4, dVar6 = local_28, dVar7 = local_20, NAN(dVar8))) &&
     (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464f0, (double)local_34 <= dVar8
     )) {
    dVar8 = 1.0 / SQRT(dVar8);
    dVar7 = local_20 * dVar8;
    dVar6 = local_28 * dVar8;
    dVar5 = dVar4 * dVar8;
  }
  *param_3 = dVar5;
  param_3[1] = dVar6;
  param_3[2] = dVar7;
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417d6166 FUN_1417d6166 body=792 status=ok
// SIG undefined FUN_1417d6166(void)

void FUN_1417d6166(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  char local_1a;
  char cStack_19;
  undefined6 uStack_18;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_18 = (undefined6)uVar4;
  uStack_12 = (undefined1)(uVar4 >> 0x30);
  uStack_11 = (undefined1)(uVar4 >> 0x38);
  cStack_19 = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&cStack_19);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&cStack_19);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&cStack_19);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      cStack_19 = (char)uVar2;
      uStack_18 = (undefined6)((ulonglong)uVar2 >> 8);
      uStack_12 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&cStack_19);
    }
  }
  local_1a = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1a);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1a);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1a = (char)uVar2;
      cStack_19 = (char)((ulonglong)uVar2 >> 8);
      uStack_18 = (undefined6)((ulonglong)uVar2 >> 0x10);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1a);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = cStack_19 != local_1a;
  if ((CONCAT17(uStack_11,CONCAT16(uStack_12,uStack_18)) ^ (ulonglong)auStack_68) == DAT_14c707940)
  {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d6480 FUN_1417d6480 body=798 status=ok
// SIG undefined FUN_1417d6480(void)

void FUN_1417d6480(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = iStack_1c != local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d67a0 FUN_1417d67a0 body=788 status=ok
// SIG undefined FUN_1417d67a0(void)

void FUN_1417d67a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d6ab6 FUN_1417d6ab6 body=788 status=ok
// SIG undefined FUN_1417d6ab6(void)

void FUN_1417d6ab6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d6dcc FUN_1417d6dcc body=499 status=ok
// SIG undefined FUN_1417d6dcc(void)

void FUN_1417d6dcc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_34 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (float)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  fVar4 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_34 <= 0.0) {
    bVar5 = false;
  }
  else {
    uVar6 = rand();
    bVar5 = (float)(uVar6 & 0x7fff) / 32767.0 <= fVar4;
  }
  *(bool *)param_3 = bVar5;
  if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d6fc0 FUN_1417d6fc0 body=894 status=ok
// SIG undefined FUN_1417d6fc0(void)

void FUN_1417d6fc0(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_60 = FUN_14079c5e4;
      local_68 = &DAT_14c9520b8;
      local_78 = 0x101008001;
      local_70 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  local_50 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_60 = FUN_14079c5e4;
      local_68 = &DAT_14c9520b8;
      local_78 = 0x101008001;
      local_70 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  dVar5 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = local_50 - local_48;
  uVar6 = rand();
  *param_3 = (double)((float)(uVar6 & 0x7fff) / 32767.0) * dVar4 + dVar5;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d7340 FUN_1417d7340 body=871 status=ok
// SIG undefined FUN_1417d7340(void)

void FUN_1417d7340(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  iStack_2c = 0;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_2c = (int)uVar2;
      local_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_2c);
    }
  }
  local_30 = 0;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_30 = (int)uVar2;
      iStack_2c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  iVar4 = iStack_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar7 = local_30 - iStack_2c;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = rand();
    iVar6 = (int)((float)(iVar7 + 1) * ((float)(uVar5 & 0x7fff) / 32767.0));
    if (iVar6 < iVar7) {
      iVar7 = iVar6;
    }
  }
  *param_3 = iVar7 + iVar4;
  if ((CONCAT44(uStack_24,local_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d76a8 FUN_1417d76a8 body=455 status=ok
// SIG undefined FUN_1417d76a8(void)

void FUN_1417d76a8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (int)((ulonglong)(longlong)ROUND(local_20 + local_20 + 0.5) >> 1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d7870 FUN_1417d7870 body=1188 status=ok
// SIG undefined FUN_1417d7870(void)

void FUN_1417d7870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_20;
  if (local_2c == 0) {
    puVar4 = (undefined8 *)&uStack_28;
  }
  *param_3 = *puVar4;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d7d16 FUN_1417d7d16 body=1168 status=ok
// SIG undefined FUN_1417d7d16(void)

void FUN_1417d7d16(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (undefined4)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  uStack_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      local_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_1c;
  if (local_24 == 0) {
    puVar4 = &uStack_20;
  }
  *param_3 = *puVar4;
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d81a8 FUN_1417d81a8 body=1158 status=ok
// SIG undefined FUN_1417d81a8(void)

void FUN_1417d81a8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_20;
  if (local_2c == 0) {
    puVar4 = (undefined8 *)&uStack_28;
  }
  *param_3 = *puVar4;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d8630 FUN_1417d8630 body=797 status=ok
// SIG undefined FUN_1417d8630(void)

void FUN_1417d8630(undefined8 param_1,longlong param_2,int *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_1c = (int)uVar2;
      local_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_1c);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = iStack_1c - local_20;
  if ((CONCAT44(uStack_14,local_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d894e FUN_1417d894e body=814 status=ok
// SIG undefined FUN_1417d894e(void)

void FUN_1417d894e(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30 - local_48;
  param_3[1] = local_28 - local_40;
  param_3[2] = local_20 - local_38;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d8c7e FUN_1417d8c7e body=808 status=ok
// SIG undefined FUN_1417d8c7e(void)

void FUN_1417d8c7e(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  double local_48;
  double local_40;
  double local_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = SQRT((local_40 - local_28) * (local_40 - local_28) +
                  (local_48 - local_30) * (local_48 - local_30));
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d8fa8 FUN_1417d8fa8 body=435 status=ok
// SIG undefined FUN_1417d8fa8(void)

void FUN_1417d8fa8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined4 uStack_28;
  uint uStack_24;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (undefined4)local_30;
  param_3[1] = local_30._4_4_ & 0x7fffffff;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24 & 0x7fffffff;
  *(ulonglong *)(param_3 + 4) = local_20 & 0x7fffffffffffffff;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417d915c FUN_1417d915c body=40 status=ok
// SIG undefined FUN_1417d915c(void)

undefined8 FUN_1417d915c(undefined8 param_1,int param_2)

{
  FUN_14006df30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417d9184 FUN_1417d9184 body=40 status=ok
// SIG undefined FUN_1417d9184(void)

undefined8 FUN_1417d9184(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417d91ac FUN_1417d91ac body=1850 status=ok
// SIG undefined FUN_1417d91ac(void)

ulonglong FUN_1417d91ac(undefined8 param_1,undefined8 ***param_2,undefined8 param_3,
                       undefined8 param_4)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  char cVar4;
  undefined8 ***pppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 unaff_RBX;
  undefined8 ******ppppppuVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  bool bVar14;
  longlong lVar15;
  undefined1 auStack_178 [32];
  undefined8 *****local_158;
  int local_150;
  uint local_148;
  uint local_140;
  uint local_138;
  uint local_130;
  undefined4 local_128;
  undefined4 local_120;
  int local_110;
  byte local_109;
  ulonglong local_108;
  uint local_100;
  uint local_fc;
  undefined8 *****local_f8;
  int local_f0;
  undefined8 *****local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  undefined1 *local_c8;
  undefined8 *****local_c0;
  longlong local_b8 [3];
  uint local_9c;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 ****local_88;
  int local_80;
  uint local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_70 = param_3;
  cVar4 = FUN_140988638(&local_70,L"LIST ISM PHYSICS",1);
  if (cVar4 == '\0') {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    cVar4 = FUN_140988638(&local_70,L"LIST ISM",1);
    if (cVar4 == '\0') {
      uVar9 = 0;
    }
    else if (param_2 != (undefined8 ***)0x0) {
      FUN_1468161aa(param_4,
                    L"Name, Num Instances, Has Previous Transform, Num Custom Floats, Has Random, Has Custom Data, Has Dynamic Data, Has LMSMUVBias, Has LocalBounds, Has Instance Hiearchy Offset"
                   );
      local_fc = (uint)*(byte *)(param_2 + 0x2a);
      FUN_147b49842(&local_88);
      uVar11 = (ulonglong)local_78;
      if ((-1 < (int)local_78) && ((int)local_78 < local_80)) {
        do {
          ppppuVar2 = (undefined8 ****)local_88[uVar11 & 0xffffffff];
          pppuVar5 = ppppuVar2[0x16];
          if (pppuVar5 == (undefined8 ***)0x0) {
            pppuVar5 = (undefined8 ***)FUN_1448abda6(ppppuVar2);
          }
          if ((pppuVar5 == param_2) &&
             ((bVar13 = *(byte *)((longlong)pppuVar5 + 0x152), bVar13 == 1 ||
              ((bVar13 < 7 && ((0x68U >> (bVar13 & 0x1f) & 1) != 0)))))) {
            pppuVar5 = ppppuVar2[0xcc];
            if ((DAT_14c950c29 == '\x01') && (pppuVar5 != (undefined8 ***)0x0)) {
              FUN_1456cec3c(pppuVar5);
            }
            FUN_144a6c088(ppppuVar2,&local_e8);
            local_108 = CONCAT44(local_108._4_4_,(uint)uStack_e0._7_1_);
            iVar1 = *(int *)(ppppuVar2 + 0xf4);
            bVar13 = iVar1 != 0 & uStack_e0._6_1_;
            local_100 = (uint)DAT_14c760e18;
            local_110 = *(int *)(ppppuVar2 + 0xe5);
            iVar8 = *(int *)(ppppuVar2 + 0xe7);
            bVar14 = iVar8 == local_110 && 0 < iVar8;
            if (pppuVar5 == (undefined8 ***)0x0) {
              local_120 = 0;
              local_128 = 0;
              local_138 = (uint)bVar14;
              local_140 = (uint)bVar13;
              local_158 = (undefined8 *****)CONCAT44(local_158._4_4_,(uint)(0 < iVar8));
              local_150 = iVar1;
              local_148 = (uint)uStack_e0._7_1_;
              local_130 = local_100;
              FUN_140047918(param_4,L"%s, %d, %d, %d, %d, %d, %d, %d, %d, %d",&DAT_149dfb77a,
                            local_110);
            }
            else {
              local_109 = 0 < iVar8;
              FUN_144750a86(pppuVar5,&local_98,0,0);
              puVar10 = &DAT_149dfb77a;
              if ((int)uStack_90 != 0) {
                puVar10 = local_98;
              }
              local_120 = 0;
              local_128 = 0;
              local_130 = local_100;
              local_138 = (uint)bVar14;
              local_140 = (uint)bVar13;
              local_148 = (uint)local_108;
              local_158 = (undefined8 *****)CONCAT44(local_158._4_4_,(uint)local_109);
              local_150 = iVar1;
              FUN_140047918(param_4,L"%s, %d, %d, %d, %d, %d, %d, %d, %d, %d",puVar10);
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          uVar11 = (longlong)(int)local_78;
          do {
            uVar12 = uVar11;
            uVar11 = uVar12 + 1;
            local_78 = (uint)uVar11;
            if ((longlong)local_80 <= (longlong)uVar11) break;
          } while ((undefined8 ****)local_88[uVar11] == (undefined8 ****)0x0);
        } while ((-2 < (longlong)uVar12) && ((int)local_78 < local_80));
      }
      if ((undefined8 *****)local_88 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_1468161aa(param_4,L"----- BEGIN ISM PHYSICS LISTING -------------------------");
    FUN_1468161aa(param_4,L"Component Name, Component Class Name, Mesh Name, Num Bodies, Num Shapes"
                 );
    ppppppuVar7 = (undefined8 ******)&local_88;
    FUN_147b49842(ppppppuVar7);
    uVar9 = (ulonglong)local_78;
    local_110 = 0;
    if (((int)local_78 < 0) || (local_80 <= (int)local_78)) {
      local_108 = 0;
    }
    else {
      local_108 = 0;
      local_110 = 0;
      do {
        ppppuVar2 = (undefined8 ****)local_88[uVar9 & 0xffffffff];
        pppuVar5 = ppppuVar2[0x16];
        if (pppuVar5 == (undefined8 ***)0x0) {
          pppuVar5 = (undefined8 ***)FUN_1448abda6(ppppuVar2);
        }
        if ((pppuVar5 != (undefined8 ***)0x0 && pppuVar5 == param_2) &&
           ((bVar13 = *(byte *)((longlong)pppuVar5 + 0x152), bVar13 == 1 ||
            ((bVar13 < 7 && ((0x68U >> (bVar13 & 0x1f) & 1) != 0)))))) {
          local_98 = (undefined2 *)0x0;
          uStack_90 = 0;
          FUN_1401031ac(ppppuVar2,ppppuVar2[0x15][4],&local_98);
          cVar4 = (*(code *)(*ppppuVar2)[0x6b])(ppppuVar2);
          if (cVar4 != '\0') {
            iVar1 = *(int *)(ppppuVar2 + 0x108);
            ppppppuVar7 = (undefined8 ******)0x0;
            if ((longlong)iVar1 != 0) {
              local_9c = 0;
              local_b8[0] = 0;
              local_b8[1] = 0;
              pppuVar5 = ppppuVar2[0x107];
              lVar15 = 0;
              iVar8 = 0;
              do {
                local_f8 = *(undefined8 ******)((longlong)pppuVar5 + lVar15);
                if ((undefined8 ******)local_f8 != (undefined8 ******)0x0) {
                  iVar8 = iVar8 + 1;
                  uStack_e0 = local_b8;
                  local_d8 = &local_9c;
                  local_c0 = &local_e8;
                  local_c8 = &LAB_147b498ae;
                  local_e8 = &local_f8;
                  FUN_1448e6002(local_f8 + 0x27,&local_c8);
                }
                uVar3 = local_9c;
                lVar15 = lVar15 + 8;
              } while ((longlong)iVar1 * 8 != lVar15);
              pppuVar5 = ppppuVar2[0xcc];
              if ((DAT_14c950c29 == '\x01') && (pppuVar5 != (undefined8 ***)0x0)) {
                FUN_1456cec3c(pppuVar5);
LAB_1417d940e:
                uVar3 = local_9c;
                local_e8 = (undefined8 ******)0x0;
                uStack_e0 = (longlong *)0x0;
                FUN_1401031ac(pppuVar5,0,&local_e8);
                ppppppuVar7 = (undefined8 ******)&DAT_149dfb77a;
                if ((int)uStack_e0 != 0) {
                  ppppppuVar7 = (undefined8 ******)local_e8;
                }
                local_68 = ppppuVar2[2][3];
                FUN_1400021e4(&local_68,&local_f8);
                ppppppuVar6 = (undefined8 ******)&DAT_149dfb77a;
                if (local_f0 != 0) {
                  ppppppuVar6 = (undefined8 ******)local_f8;
                }
                puVar10 = &DAT_149dfb77a;
                if ((int)uStack_90 != 0) {
                  puVar10 = local_98;
                }
                local_158 = ppppppuVar7;
                local_150 = iVar8;
                local_148 = uVar3;
                FUN_140047918(param_4,L"%s, %s, %s, %d, %d",puVar10,ppppppuVar6);
                ppppppuVar6 = (undefined8 ******)local_e8;
                if ((undefined8 ******)local_f8 != (undefined8 ******)0x0) {
                  FUN_1400020a8();
                  ppppppuVar6 = (undefined8 ******)local_e8;
                }
              }
              else {
                if (pppuVar5 != (undefined8 ***)0x0) goto LAB_1417d940e;
                local_e8 = (undefined8 *****)ppppuVar2[2][3];
                FUN_1400021e4(&local_e8,&local_f8);
                ppppppuVar7 = (undefined8 ******)&DAT_149dfb77a;
                if (local_f0 != 0) {
                  ppppppuVar7 = (undefined8 ******)local_f8;
                }
                puVar10 = &DAT_149dfb77a;
                if ((int)uStack_90 != 0) {
                  puVar10 = local_98;
                }
                local_148 = uVar3;
                local_158 = (undefined8 *****)&DAT_149e01fe8;
                local_150 = iVar8;
                FUN_140047918(param_4,L"%s, %s, %s, %d, %d",puVar10,ppppppuVar7);
                ppppppuVar7 = (undefined8 ******)0x0;
                ppppppuVar6 = (undefined8 ******)local_f8;
              }
              if (ppppppuVar6 != (undefined8 ******)0x0) {
                FUN_1400020a8();
              }
              local_110 = local_110 + local_9c;
              if (local_b8[0] != 0) {
                FUN_1400020a8();
              }
              local_108 = (ulonglong)(uint)((int)local_108 + iVar8);
            }
          }
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar9 = (longlong)(int)local_78;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
          local_78 = (uint)uVar9;
          if ((longlong)local_80 <= (longlong)uVar9) break;
        } while ((undefined8 ****)local_88[uVar9] == (undefined8 ****)0x0);
      } while ((-2 < (longlong)uVar11) && ((int)local_78 < local_80));
    }
    if ((undefined8 *****)local_88 != (undefined8 *****)0x0) {
      FUN_1400020a8();
    }
    FUN_140047918(param_4,L"\nTotal Bodies, Total Shapes\n%d, %d",local_108,local_110);
    FUN_1468161aa(param_4,L"----- END ISM PHYSICS LISTING ---------------------------");
    uVar9 = CONCAT71((int7)((ulonglong)ppppppuVar7 >> 8),1);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1417d98e8 FUN_1417d98e8 body=178 status=ok
// SIG undefined FUN_1417d98e8(void)

undefined8 * FUN_1417d98e8(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a973820;
  if (param_1[0x53] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x53] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417d999a FUN_1417d999a body=29 status=ok
// SIG undefined FUN_1417d999a(void)

undefined8 FUN_1417d999a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417d99b8 FUN_1417d99b8 body=29 status=ok
// SIG undefined FUN_1417d99b8(void)

undefined8 FUN_1417d99b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417d99d6 FUN_1417d99d6 body=1200 status=ok
// SIG undefined FUN_1417d99d6(void)

void FUN_1417d99d6(undefined8 param_1,longlong param_2,void **param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  uStack_39 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = (undefined *)FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_40 = (undefined7)uVar2;
      uStack_39 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_40);
    }
  }
  local_41 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
    FUN_14475b26a();
    local_60 = FUN_1409f1a5c;
    local_68 = &DAT_14c9520b8;
    local_70 = 0;
    local_78 = 0x1008041;
    FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
    atexit(FUN_14281201f);
    _Init_thread_footer(&DAT_14c951d78);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_41);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_41);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_41 = (byte)uVar2;
      uStack_40 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_41);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = (longlong *)CONCAT17(uStack_39,uStack_40);
  if (plVar4 == (longlong *)0x0) {
    local_38[0] = (longlong *)0x0;
    FUN_1400021e4(local_38,&local_58);
  }
  else {
    uVar6 = 0xffffffff;
    if (0 < (longlong)(int)plVar4[9]) {
      puVar7 = (ulonglong *)(plVar4[8] + 8);
      uVar8 = 0;
      do {
        if (*puVar7 == (ulonglong)local_41) {
          uVar6 = uVar8 & 0xffffffff;
          break;
        }
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 2;
      } while ((longlong)(int)plVar4[9] != uVar8);
    }
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_38,uVar6);
    plVar4 = local_38[0];
    if (*(code **)(*local_38[0] + 0x50) != FUN_144828418) {
      plVar4 = (longlong *)(**(code **)(*local_38[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar4);
    pcVar3 = *(code **)(*local_38[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar4 = local_38[0] + 3;
      if (local_38[0][5] != 0) {
        plVar4 = (longlong *)(local_38[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar4 = local_38[0] + 2;
    }
    else {
      plVar4 = (longlong *)(*pcVar3)(local_38[0]);
    }
    local_58 = (void *)0x0;
    local_50 = (int)plVar4[1];
    lVar5 = (longlong)local_50;
    _Src = (void *)*plVar4;
    if (lVar5 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar5 * 2);
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
  }
  if (&local_58 == param_3) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    *(int *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417d9e87 FUN_1417d9e87 body=49 status=ok
// SIG undefined FUN_1417d9e87(void)

longlong FUN_1417d9e87(void)

{
  if (DAT_14cae7290 == 0) {
    FUN_14073dd9a(&DAT_14cae7290,&PTR_LAB_14a97ae20);
  }
  return DAT_14cae7290;
}



// FUNCTION 1417d9eb8 FUN_1417d9eb8 body=49 status=ok
// SIG undefined FUN_1417d9eb8(void)

longlong FUN_1417d9eb8(void)

{
  if (DAT_14cae7540 == 0) {
    FUN_14073dd9a(&DAT_14cae7540,&PTR_LAB_14a982e80);
  }
  return DAT_14cae7540;
}



// FUNCTION 1417d9eea FUN_1417d9eea body=998 status=ok
// SIG undefined FUN_1417d9eea(void)

void FUN_1417d9eea(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    iVar4 = 0;
  }
  FUN_14005eb28(&local_58,(int)uStack_30 + (uint)((int)uStack_30 == 0) + iVar4);
  iVar4 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_58,local_38,iVar4);
  iVar4 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_58,local_48,iVar4);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417da2d2 FUN_1417da2d2 body=533 status=ok
// SIG undefined FUN_1417da2d2(void)

void FUN_1417da2d2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406112c4(&local_30,local_20,1);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417da4e8 FUN_1417da4e8 body=484 status=ok
// SIG undefined FUN_1417da4e8(void)

void FUN_1417da4e8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    local_48 = FUN_1446ddbd2();
    local_40 = FUN_140dafe7a;
    local_50 = 0;
    local_58 = 0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined2 **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_28;
  if ((int)uStack_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar4,1);
  *param_3 = local_30;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417da6ce FUN_1417da6ce body=564 status=ok
// SIG undefined FUN_1417da6ce(void)

void FUN_1417da6ce(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x38);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  plVar4 = &local_40;
  if (plVar5 != (longlong *)0x0) {
    plVar4 = plVar5;
  }
  plVar5 = &local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = (int)plVar4[1] == (int)plVar5[1] && *plVar4 == *plVar5;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417da904 FUN_1417da904 body=862 status=ok
// SIG undefined FUN_1417da904(void)

void FUN_1417da904(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  wchar_t *pwVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(wchar_t **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(wchar_t **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  pwVar6 = local_38;
  pwVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  _Str2 = local_48;
  if ((int)uStack_40 == 0) {
    _Str2 = L"";
  }
  _Str1 = L"";
  if ((int)uStack_30 != 0) {
    _Str1 = local_38;
  }
  iVar5 = wcscmp(_Str1,_Str2);
  *(bool *)param_3 = iVar5 == 0;
  if (pwVar4 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar4);
    pwVar6 = local_38;
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417dac64 FUN_1417dac64 body=862 status=ok
// SIG undefined FUN_1417dac64(void)

void FUN_1417dac64(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  wchar_t *pwVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(wchar_t **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(wchar_t **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  pwVar6 = local_38;
  pwVar4 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  _Str2 = local_48;
  if ((int)uStack_40 == 0) {
    _Str2 = L"";
  }
  _Str1 = L"";
  if ((int)uStack_30 != 0) {
    _Str1 = local_38;
  }
  iVar5 = wcscmp(_Str1,_Str2);
  *(bool *)param_3 = iVar5 != 0;
  if (pwVar4 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar4);
    pwVar6 = local_38;
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417dafc3 FUN_1417dafc3 body=49 status=ok
// SIG undefined FUN_1417dafc3(void)

longlong FUN_1417dafc3(void)

{
  if (DAT_14cae75b0 == 0) {
    FUN_1409ce572(&DAT_14cae75b0,&PTR_FUN_14a983fe0);
  }
  return DAT_14cae75b0;
}



// FUNCTION 1417daff4 FUN_1417daff4 body=49 status=ok
// SIG undefined FUN_1417daff4(void)

longlong FUN_1417daff4(void)

{
  if (DAT_14cae7f20 == 0) {
    FUN_14073dd9a(&DAT_14cae7f20,&PTR_LAB_14a9a0a80);
  }
  return DAT_14cae7f20;
}



// FUNCTION 1417db025 FUN_1417db025 body=49 status=ok
// SIG undefined FUN_1417db025(void)

longlong FUN_1417db025(void)

{
  if (DAT_14cae8918 == 0) {
    FUN_14086a14e(&DAT_14cae8918,&PTR_FUN_14a9ac738);
  }
  return DAT_14cae8918;
}



// FUNCTION 1417db056 FUN_1417db056 body=551 status=ok
// SIG undefined FUN_1417db056(void)

void FUN_1417db056(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    FUN_140056680(&local_38,&DAT_149e01fe8);
  }
  else {
    local_20 = *(undefined8 *)(local_28 + 0x18);
    FUN_1400021e4(&local_20,&local_38);
  }
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417db27e FUN_1417db27e body=439 status=ok
// SIG undefined FUN_1417db27e(void)

void FUN_1417db27e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(local_20 + 8) >> 0x1e & 1) == 0;
  }
  *param_3 = bVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417db436 FUN_1417db436 body=821 status=ok
// SIG undefined FUN_1417db436(void)

void FUN_1417db436(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_20);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_20 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        goto LAB_1417db4ed;
      }
      (*pcVar2)(uVar1,param_2,&local_20);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
LAB_1417db4ed:
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_28);
    }
  }
  plVar8 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*plVar8 != 0) {
    lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        plVar6 = (longlong *)(lVar4 + 0x458);
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        lVar3 = *plVar6;
        uVar7 = (uint)lVar4;
        if ((int)(uVar7 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
          lVar9 = lVar3 + 0x18;
          if (*(longlong *)(lVar3 + 0x28) != 0) {
            lVar9 = *(longlong *)(lVar3 + 0x28);
          }
          if ((*(uint *)(lVar9 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) !=
              0) {
            lVar3 = *(longlong *)(lVar3 + 8);
            lVar9 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
            if (((lVar3 + lVar9 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar9) == lVar4)) &&
               (*(char *)(lVar3 + 1 + lVar9) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *plVar8 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417db76c FUN_1417db76c body=3117 status=ok
// SIG undefined FUN_1417db76c(void)

void FUN_1417db76c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  void *_Src;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 uStack_a8;
  int local_a4;
  int iStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong uStack_90;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_80 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_d8 = (undefined *)FUN_1446ddbd2();
    local_d0 = FUN_1468d96f0;
    local_e0 = 0;
    local_e8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_80);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_80);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_80 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_80);
    }
  }
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    local_d8 = (undefined *)FUN_1446ddbd2();
    local_d0 = FUN_140dafe7a;
    local_e0 = 0;
    local_e8 = 0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_98 = (undefined4)uVar2;
      uStack_94 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_98);
    }
  }
  local_9c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_d0 = FUN_1408a629c;
    local_d8 = &DAT_14c9520b8;
    local_e0 = 0;
    local_e8 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_9c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_9c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_9c = (undefined4)uVar2;
      uStack_98 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_9c);
    }
  }
  iStack_a0 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_d8 = (undefined *)FUN_1446ddbd2();
    local_d0 = FUN_14067a048;
    local_e0 = 0;
    local_e8 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_a0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_a0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_a0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_a0 = (int)uVar2;
      local_9c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_a0);
    }
  }
  iVar7 = iStack_a0;
  local_a4 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_d8 = (undefined *)FUN_1446ddbd2();
    local_d0 = FUN_14067a048;
    local_e0 = 0;
    local_e8 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_a4);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a4);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_a4 = (int)uVar2;
      iStack_a0 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a4);
    }
  }
  iVar6 = local_a4;
  uStack_a8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_d0 = FUN_1408a629c;
    local_d8 = &DAT_14c9520b8;
    local_e0 = 0;
    local_e8 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_a8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_a8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_a8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_a8 = (undefined4)uVar2;
      local_a4 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_a8);
    }
  }
  local_ac = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_d0 = FUN_1408a629c;
    local_d8 = &DAT_14c9520b8;
    local_e0 = 0;
    local_e8 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_ac);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_ac);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_ac = (undefined4)uVar2;
      uStack_a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_ac);
    }
  }
  uVar8 = local_9c;
  uVar5 = uStack_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = (undefined2 *)0x0;
  lVar15 = (longlong)(int)uStack_90;
  _Src = (void *)CONCAT44(uStack_94,uStack_98);
  local_c0 = (int)uStack_90;
  if (lVar15 == 0) {
    local_bc = 0;
    puVar12 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_c8,uStack_90 & 0xffffffff,0);
    memcpy(local_c8,_Src,lVar15 * 2);
    puVar12 = local_c8;
    if (local_c0 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
  }
  lVar15 = local_80;
  FUN_1446f470e(&local_68,puVar12,1);
  if (lVar15 == 0) {
    uVar13 = 0;
    uVar11 = 0;
  }
  else {
    lVar10 = FUN_1400796d0(*(undefined8 *)(lVar15 + 0x10),local_68,1);
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0xb6) != 0)) {
      local_b8 = 0;
      goto LAB_1417dbd60;
    }
    uVar13 = *(uint *)(lVar15 + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar11 = (ulonglong)*(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar14);
      }
      LOCK();
      uVar9 = *(uint *)(lVar15 + 0x10);
      bVar16 = uVar9 == 0;
      if (bVar16) {
        *(uint *)(lVar15 + 0x10) = uVar14;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar9 = uVar14;
      }
      uVar11 = (ulonglong)uVar9;
    }
  }
  local_78 = (ulonglong)uVar13 | uVar11 << 0x20;
  local_70 = local_68;
  local_e8 = CONCAT71(local_e8._1_7_,iVar6 != 0);
  local_e0 = CONCAT44(local_e0._4_4_,uVar5);
  local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140e61630(&local_b8,&local_78,uVar8,iVar7 != 0);
LAB_1417dbd60:
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = local_b8;
  if (CONCAT44(uStack_94,uStack_98) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417dc39a FUN_1417dc39a body=750 status=ok
// SIG undefined FUN_1417dc39a(void)

void FUN_1417dc39a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38 [2];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_28 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963ee0) {
    FUN_144b3d300(&DAT_14c963ee0);
    if (DAT_14c963ee0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140fb5c52;
      local_60 = 0;
      local_68 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_40 = local_20;
  FUN_14023423e(local_38,&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417dc68a FUN_1417dc68a body=2580 status=ok
// SIG undefined FUN_1417dc68a(void)

void FUN_1417dc68a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  uStack_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_2c = (undefined4)uVar2;
      local_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_2c);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_40 = (undefined4)uVar2;
      uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_40);
    }
  }
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_60 = FUN_1408a629c;
      local_68 = &DAT_14c9520b8;
      local_70 = 0;
      local_78 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (undefined4)uVar2;
      uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_4c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (CONCAT44(uStack_24,local_28) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417dd0a0 FUN_1417dd0a0 body=323 status=ok
// SIG undefined FUN_1417dd0a0(void)

ulonglong FUN_1417dd0a0(ulonglong param_1)

{
  undefined2 **ppuVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined2 **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_1;
  if ((param_1 >> 0x3e & 1) != 0) {
    ppuVar9 = &local_40;
    FUN_14029eeae(&local_30,ppuVar9);
    uVar5 = local_38 - 1;
    if (local_38 == 0) {
      uVar5 = 0;
    }
    bVar4 = true;
    if (0x17 < (int)uVar5) {
      puVar6 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar6 = local_40;
      }
      lVar10 = 6;
      lVar11 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar6 + lVar11 + (ulonglong)uVar5 * 2 + -0x30);
        ppuVar9 = (undefined2 **)(ulonglong)uVar2;
        uVar8 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)&DAT_14a9b0260 + lVar11);
        uVar7 = (uint)uVar3;
        if (uVar2 != uVar3) break;
        if (uVar2 == 0) goto LAB_1417dd185;
LAB_1417dd15a:
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) goto LAB_1417dd185;
        lVar11 = lVar11 + 2;
      }
      if ((uVar3 | uVar2) < 0x80) {
        ppuVar1 = ppuVar9 + 0x293c0bb4;
        ppuVar9 = (undefined2 **)0x0;
        uVar8 = (uint)*(byte *)ppuVar1;
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if (*(byte *)ppuVar1 == (&DAT_149e05da0)[uVar3]) goto LAB_1417dd15a;
      }
      ppuVar9 = (undefined2 **)(ulonglong)(uVar8 - uVar7);
      if (uVar8 - uVar7 != 0) goto LAB_1417dd1bc;
LAB_1417dd185:
      lVar10 = -1;
      do {
        uVar2 = local_40[(ulonglong)uVar5 + lVar10];
        if (((9 < (ushort)(uVar2 - 0x30)) && (5 < uVar2 - 0x41)) && (5 < uVar2 - 0x61)) {
          ppuVar9 = (undefined2 **)0x0;
          goto LAB_1417dd1ba;
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != -0x13);
      ppuVar9 = (undefined2 **)CONCAT71((int7)((ulonglong)ppuVar9 >> 8),1);
LAB_1417dd1ba:
      bVar4 = false;
    }
LAB_1417dd1bc:
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar4) goto LAB_1417dd0c5;
  }
  ppuVar9 = (undefined2 **)0x0;
LAB_1417dd0c5:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar9 & 0xffffff01;
}



// FUNCTION 1417dd1e4 FUN_1417dd1e4 body=49 status=ok
// SIG undefined FUN_1417dd1e4(void)

longlong FUN_1417dd1e4(void)

{
  if (DAT_14cae83e0 == 0) {
    FUN_14073dd9a(&DAT_14cae83e0,&PTR_LAB_14a9a6760);
  }
  return DAT_14cae83e0;
}



// FUNCTION 1417dd215 FUN_1417dd215 body=49 status=ok
// SIG undefined FUN_1417dd215(void)

longlong FUN_1417dd215(void)

{
  if (DAT_14cae85a0 == 0) {
    FUN_14073dd9a(&DAT_14cae85a0,&PTR_LAB_14a9aa740);
  }
  return DAT_14cae85a0;
}



// FUNCTION 1417dd246 FUN_1417dd246 body=80 status=ok
// SIG undefined FUN_1417dd246(void)

int FUN_1417dd246(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  lVar2 = FUN_140633c48(param_1,&local_10);
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 8) - *(int *)(lVar2 + 0x34);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417dd298 FUN_1417dd298 body=321 status=ok
// SIG undefined FUN_1417dd298(void)

longlong FUN_1417dd298(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x1000000000;
  uVar2 = DAT_14ca8b9f8;
  if ((int)DAT_14ca8b9f8 < 1) {
    if ((int)DAT_14ca8b9f8 < 0) {
LAB_1417dd3a8:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(DAT_14ca8b9f8);
    }
  }
  else {
    *(uint *)(param_2 + 0x48) = DAT_14ca8b9f8;
    if (uVar2 < 0x11) {
      lVar3 = 0;
    }
    else {
      FUN_1472ddbf0(param_2,0);
      lVar3 = *(longlong *)(param_2 + 0x40);
    }
    if (lVar3 == 0) {
      lVar3 = param_2;
    }
    FUN_1448b6b1e(lVar3,uVar2);
    uVar2 = DAT_14ca8b9f8;
    iVar1 = *(int *)(param_2 + 0x48);
    if (iVar1 < (int)DAT_14ca8b9f8) {
      *(uint *)(param_2 + 0x48) = DAT_14ca8b9f8;
      if ((uint)(*(int *)(param_2 + 0x4c) - iVar1) < uVar2 - iVar1) {
        FUN_1472ddbf0(param_2,iVar1);
      }
      lVar3 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar3 = param_2;
      }
      FUN_1448b6b1e(lVar3 + (longlong)iVar1 * 4,uVar2 - iVar1);
    }
    else {
      if ((int)DAT_14ca8b9f8 < 0) goto LAB_1417dd3a8;
      if ((int)DAT_14ca8b9f8 < iVar1) {
        *(uint *)(param_2 + 0x48) = DAT_14ca8b9f8;
        FUN_1472ddc66(param_2);
      }
    }
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar4 = param_2;
      }
      *(undefined4 *)(lVar4 + lVar3 * 4) = 0x3f800000;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 0x48));
  }
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x4f) & 2) != 0) {
    fVar5 = *(float *)(param_1 + 0x10);
    if (4.0 <= fVar5) {
      fVar5 = 4.0;
    }
    if (fVar5 <= 0.01) {
      fVar5 = 0.01;
    }
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar3 = param_2;
    }
    *(float *)(lVar3 + (longlong)DAT_14cad82fc * 4) = fVar5;
  }
  return param_2;
}



// FUNCTION 1417dd3da FUN_1417dd3da body=56 status=ok
// SIG undefined FUN_1417dd3da(void)

void FUN_1417dd3da(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9ad940;
  puVar2[1] = param_2;
  puVar2[2] = uVar1;
  return;
}



// FUNCTION 1417dd412 FUN_1417dd412 body=459 status=ok
// SIG undefined FUN_1417dd412(void)

ulonglong FUN_1417dd412(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0xa0);
  uVar4 = (undefined7)((ulonglong)plVar1 >> 8);
  if (param_3 == '\0') {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar2 + 1U) {
      FUN_140b51998(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
    uVar3 = CONCAT71(uVar4,1);
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa8);
    local_40 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_140b518ec(plVar1,&local_40);
    uVar3 = CONCAT71(uVar4,*(int *)(param_1 + 0xa8) != iVar2);
  }
  if ((DAT_14c761598 == 0) || ((*(byte *)(param_1 + 0x242) & 0x40) != 0)) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    if (param_3 == '\0') {
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
        FUN_140b51998(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
    }
    else {
      local_40 = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      FUN_140b518ec(plVar1,&local_40);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417dd5ea FUN_1417dd5ea body=120 status=ok
// SIG undefined FUN_1417dd5ea(void)

void FUN_1417dd5ea(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (lVar1 != 0) {
    FUN_147cb0926(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x238) = 0;
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 1417dd662 FUN_1417dd662 body=636 status=ok
// SIG undefined FUN_1417dd662(void)

void FUN_1417dd662(longlong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  iVar6 = FUN_14490d72a(*(undefined8 *)(param_1 + 0xc0));
  iVar7 = *(int *)(param_1 + 0xa8);
  if (0 < iVar7) {
    lVar20 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar20 * 8);
      if (lVar5 != 0) {
        if (((*(byte *)(lVar5 + 100) & 2) == 0) && ((*(byte *)(lVar5 + 99) & 4) == 0)) {
          if ((*(byte *)(lVar5 + 0x61) & 8) != 0) {
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 2;
            iVar7 = *(int *)(lVar5 + 0x268);
            if (iVar7 == 0) {
              uVar13 = 0;
              uVar15 = 1;
              iVar9 = 0;
              iVar8 = 0;
            }
            else {
              puVar14 = *(uint **)(lVar5 + 0x260);
              if (*(uint **)(lVar5 + 0x260) == (uint *)0x0) {
                puVar14 = (uint *)(lVar5 + 0x250);
              }
              uVar17 = *puVar14;
              if (uVar17 == 0) {
                iVar9 = iVar7 + 0x1e;
                if (-1 < iVar7 + -1) {
                  iVar9 = iVar7 + -1;
                }
                uVar13 = 0;
                uVar15 = (ulonglong)(uint)(iVar9 >> 5);
                if (iVar9 >> 5 < 1) {
                  uVar15 = uVar13;
                }
                iVar8 = 0;
                do {
                  if (uVar15 == uVar13) goto LAB_1417dd82c;
                  iVar8 = iVar8 + 0x20;
                  uVar17 = puVar14[uVar13 + 1];
                  uVar13 = uVar13 + 1;
                } while (uVar17 == 0);
              }
              else {
                uVar13 = 0;
                iVar8 = 0;
              }
              uVar15 = (ulonglong)(-uVar17 & uVar17);
              uVar2 = uVar15 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar9 = (iVar8 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar9) {
                iVar9 = iVar7;
              }
            }
            if (iVar9 != iVar7) {
              uVar17 = 0xffffffff;
              iVar16 = iVar7;
              do {
                lVar18 = *(longlong *)(*(longlong *)(lVar5 + 0x240) + (longlong)iVar9 * 0x10);
                if (lVar18 != 0) {
                  pbVar1 = (byte *)(lVar18 + 0xb8);
                  *pbVar1 = *pbVar1 | 1;
                  iVar16 = *(int *)(lVar5 + 0x268);
                }
                uVar17 = uVar17 & ~(uint)uVar15;
                puVar14 = *(uint **)(lVar5 + 0x260);
                if (*(uint **)(lVar5 + 0x260) == (uint *)0x0) {
                  puVar14 = (uint *)(lVar5 + 0x250);
                }
                iVar9 = (int)uVar13;
                lVar18 = (longlong)iVar9;
                uVar10 = puVar14[lVar18] & uVar17;
                if (uVar10 == 0) {
                  iVar11 = iVar16 + 0x1e;
                  if (-1 < iVar16 + -1) {
                    iVar11 = iVar16 + -1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar8 = iVar8 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar9) {
                    iVar12 = iVar9;
                  }
                  if (iVar9 < iVar11) {
                    lVar19 = 0;
                    do {
                      uVar10 = puVar14[lVar18 + lVar19 + 1];
                      if (uVar10 != 0) {
                        uVar13 = (ulonglong)(iVar9 + (int)lVar19 + 1);
                        uVar17 = 0xffffffff;
                        goto LAB_1417dd7fc;
                      }
                      iVar8 = iVar8 + 0x20;
                      lVar19 = lVar19 + 1;
                    } while (iVar12 - lVar18 != lVar19);
                    uVar17 = 0xffffffff;
                    lVar18 = (longlong)iVar12;
                  }
                  uVar13 = lVar18 + 1U & 0xffffffff;
                  iVar9 = iVar16;
                }
                else {
LAB_1417dd7fc:
                  uVar15 = (ulonglong)(-uVar10 & uVar10);
                  uVar2 = uVar15 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar9 = (iVar8 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if (iVar16 <= iVar9) {
                    iVar9 = iVar16;
                  }
                }
              } while (iVar9 != iVar7);
            }
          }
LAB_1417dd82c:
          if (iVar6 == 3) {
            bVar3 = *(byte *)(lVar5 + 0x61);
            if ((bVar3 & 8) == 0) {
              FUN_140aeefbc(lVar5);
            }
            else if ((bVar3 & 4) == 0) {
              uVar4 = *(undefined1 *)(lVar5 + 0x178);
              *(undefined1 *)(lVar5 + 0x178) = *(undefined1 *)(lVar5 + 0x68);
              *(undefined1 *)(lVar5 + 0x68) = uVar4;
              *(byte *)(lVar5 + 0x61) = bVar3 | 4;
            }
          }
        }
        *(byte *)(lVar5 + 99) = *(byte *)(lVar5 + 99) & 0xfb;
        iVar7 = *(int *)(param_1 + 0xa8);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar7);
  }
  *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) | 0xc;
  return;
}



// FUNCTION 1417dd8de FUN_1417dd8de body=29 status=ok
// SIG undefined FUN_1417dd8de(void)

undefined8 FUN_1417dd8de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417dd8fc FUN_1417dd8fc body=29 status=ok
// SIG undefined FUN_1417dd8fc(void)

undefined8 FUN_1417dd8fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417dd91a FUN_1417dd91a body=652 status=ok
// SIG undefined FUN_1417dd91a(void)

void FUN_1417dd91a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
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
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_1417dd95f:
    uVar3 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_1417dda51;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar7) goto LAB_1417dd95f;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_1417dda23;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_1417dda23:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar4 = (longlong)local_3c;
      uVar10 = *(ulonglong *)(lVar2 + lVar4 * 0x18);
      uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x14 + lVar4 * 0x18) = iVar8;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1417dda51:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417ddba8 FUN_1417ddba8 body=652 status=ok
// SIG undefined FUN_1417ddba8(void)

void FUN_1417ddba8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
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
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_1417ddbed:
    uVar3 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_1417ddcdf;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar7) goto LAB_1417ddbed;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_1417ddcb1;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_1417ddcb1:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar4 = (longlong)local_3c;
      uVar10 = *(ulonglong *)(lVar2 + lVar4 * 0x18);
      uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x14 + lVar4 * 0x18) = iVar8;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1417ddcdf:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417dde36 FUN_1417dde36 body=29 status=ok
// SIG undefined FUN_1417dde36(void)

undefined8 FUN_1417dde36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417dde54 FUN_1417dde54 body=29 status=ok
// SIG undefined FUN_1417dde54(void)

undefined8 FUN_1417dde54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417dde72 FUN_1417dde72 body=149 status=ok
// SIG undefined FUN_1417dde72(void)

void FUN_1417dde72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 0x3a0) = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x3ac) = uVar3;
  *(undefined4 *)(param_1 + 0x3b0) = uVar4;
  *(undefined4 *)(param_1 + 0x3b4) = uVar5;
  plVar1 = (longlong *)(param_1 + 0x3b8);
  if (plVar1 != param_2 + 3) {
    iVar2 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 0x3c0) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x3c4) == 0) {
      *(undefined4 *)(param_1 + 0x3c4) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  if (param_2[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417ddf07 FUN_1417ddf07 body=57 status=ok
// SIG undefined FUN_1417ddf07(void)

void FUN_1417ddf07(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9b37d0;
  puVar1[5] = &PTR_FUN_14a9b3db0;
  puVar1[6] = &PTR_LAB_14a9b3df0;
  return;
}



// FUNCTION 1417ddf40 FUN_1417ddf40 body=122 status=ok
// SIG undefined FUN_1417ddf40(void)

void FUN_1417ddf40(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      if (*(longlong *)(lVar3 + 8) != 0) {
        cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
        if (cVar1 != '\0') {
          FUN_140a10a18(lVar2,param_1,1);
          return;
        }
      }
      cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001417ddfae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x58))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417ddfba FUN_1417ddfba body=59 status=ok
// SIG undefined FUN_1417ddfba(void)

void FUN_1417ddfba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1403c12a8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9b6030;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  return;
}



// FUNCTION 1417ddff5 FUN_1417ddff5 body=49 status=ok
// SIG undefined FUN_1417ddff5(void)

longlong FUN_1417ddff5(void)

{
  if (DAT_14cae8fb0 == 0) {
    FUN_14073dd9a(&DAT_14cae8fb0,&PTR_LAB_14a9b8b70);
  }
  return DAT_14cae8fb0;
}



// FUNCTION 1417de026 FUN_1417de026 body=184 status=ok
// SIG undefined FUN_1417de026(void)

void FUN_1417de026(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined ****local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
LAB_1417de076:
    lVar2 = param_1;
    lVar1 = lVar2;
    if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001417de085;
    goto LAB_1417de090;
  }
LAB_1417de09b:
  if ((local_18 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001417de085:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) goto LAB_1417de076;
  lVar1 = FUN_142840154(lVar2);
LAB_1417de090:
  if (lVar1 == 0) {
    param_1 = *(longlong *)(lVar2 + 0x20);
    goto LAB_1417de076;
  }
  if ((*(byte *)(lVar1 + 0x2e) & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
  }
  goto LAB_1417de09b;
}



// FUNCTION 1417de0f0 FUN_1417de0f0 body=348 status=ok
// SIG undefined FUN_1417de0f0(void)

void FUN_1417de0f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  if ((*(longlong *)(param_1 + 0x30) == param_2[1]) && (*(longlong *)(param_1 + 0x38) == param_2[2])
     ) {
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 == *(int *)(param_2 + 4)) {
      if (iVar2 < 2) {
        return;
      }
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*(longlong *)(param_1 + 0x40) + lVar6);
        uVar8 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(param_2[3] + lVar6);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) {
          return;
        }
LAB_1417de1ff:
        lVar6 = lVar6 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1417de1ff;
      }
      if (uVar7 == uVar9) {
        return;
      }
    }
    else if (*(int *)(param_2 + 4) + iVar2 == 1) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != param_2 + 3) {
    iVar2 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x4c) == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xf9;
  lVar6 = param_1;
  if (*(char *)(param_1 + 0x108) == '\x02') {
    FUN_140191f3c(param_1,1);
  }
  for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x20)) {
    if ((*(uint *)(lVar6 + 8) & 0x30) != 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_140399198(*(longlong *)(param_1 + 0x20),param_1);
  return;
}



// FUNCTION 1417de24c FUN_1417de24c body=262 status=ok
// SIG undefined FUN_1417de24c(void)

undefined8
FUN_1417de24c(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417de354 FUN_1417de354 body=219 status=ok
// SIG undefined FUN_1417de354(void)

undefined8 FUN_1417de354(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((((*(longlong *)(param_1 + 0x30) == 0) ||
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar4 == 0)) ||
       (*(longlong *)(lVar4 + 0x588) == 0)) ||
      (*(double *)(param_1 + 0x6d0) < *(double *)(param_1 + 0x708))) &&
     (((*(byte *)(param_1 + 0x154) & 0x40) == 0 || (iVar2 = FUN_14490d72a(param_1), iVar2 != 3)))) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
        if (*(longlong *)(lVar1 + 0x360) == param_1) {
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) goto LAB_1417de3d2;
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    }
    if (*(char *)(param_1 + 0x152) != '\x03') {
      return 1;
    }
    if (-1 < *(char *)(param_1 + 0x155)) {
      return 1;
    }
  }
LAB_1417de3d2:
  if ((*(byte *)(param_1 + 0x156) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      uVar3 = FUN_147a5faf8();
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1417de42f FUN_1417de42f body=49 status=ok
// SIG undefined FUN_1417de42f(void)

longlong FUN_1417de42f(void)

{
  if (DAT_14cae9248 == 0) {
    FUN_14073dd9a(&DAT_14cae9248,&PTR_LAB_14a9ba720);
  }
  return DAT_14cae9248;
}



// FUNCTION 1417de460 FUN_1417de460 body=40 status=ok
// SIG undefined FUN_1417de460(void)

undefined8 FUN_1417de460(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417de488 FUN_1417de488 body=70 status=ok
// SIG undefined FUN_1417de488(void)

undefined8 * FUN_1417de488(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9b6030;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1402beb54(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417de4ce FUN_1417de4ce body=74 status=ok
// SIG undefined FUN_1417de4ce(void)

void FUN_1417de4ce(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
      FUN_140031cf0(param_2,(int)param_2[1]);
      puVar2 = (undefined8 *)*param_2;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417de500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1417de518 FUN_1417de518 body=93 status=ok
// SIG undefined FUN_1417de518(void)

void FUN_1417de518(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9bb640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1417de576 FUN_1417de576 body=96 status=ok
// SIG undefined FUN_1417de576(void)

void FUN_1417de576(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1417de5d6 FUN_1417de5d6 body=353 status=ok
// SIG undefined FUN_1417de5d6(void)

void FUN_1417de5d6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417de65d;
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
LAB_1417de65d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417de738 FUN_1417de738 body=100 status=ok
// SIG undefined FUN_1417de738(void)

void FUN_1417de738(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar4 != 0);
  }
  FUN_140754fec(param_1 + 0x138,param_1,param_2);
  return;
}



// FUNCTION 1417de79c FUN_1417de79c body=2195 status=ok
// SIG undefined FUN_1417de79c(void)

void FUN_1417de79c(undefined8 param_1,undefined8 param_2,char param_3,longlong *param_4,
                  longlong param_5,longlong param_6,uint *param_7)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ushort uVar13;
  byte *pbVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  int iVar19;
  byte bVar20;
  ulonglong uVar21;
  byte bVar22;
  bool bVar23;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *param_4;
  local_70 = param_4;
  if (lVar9 != 0) {
    local_68 = (longlong *)CONCAT71(local_68._1_7_,param_3);
    bVar18 = *(byte *)((longlong)param_4 + 0xd);
    lVar4 = param_4[1];
    bVar22 = *(byte *)((longlong)param_4 + 0xf);
    bVar20 = *(byte *)((longlong)param_4 + 0xe);
    bVar1 = *(byte *)((longlong)param_4 + 0xc);
    lVar10 = *(longlong *)(param_6 + 0x80);
    lVar12 = lVar10;
    if (lVar10 == 0) {
      lVar12 = param_6;
    }
    iVar19 = *(int *)(param_6 + 0x88);
    uVar21 = (ulonglong)iVar19;
    if (uVar21 != 0) {
      lVar17 = 0;
      iVar11 = 0;
      do {
        if ((((*(longlong *)(lVar12 + lVar17) == lVar9) &&
             (*(ushort *)(lVar12 + 0xc + lVar17) == (ushort)bVar18)) &&
            (*(int *)(lVar12 + 8 + lVar17) == (int)lVar4)) &&
           (*(byte *)(lVar12 + 0xe + lVar17) == bVar22)) {
          if (iVar11 != 1) {
            uVar21 = (ulonglong)(uint)-iVar11;
            goto LAB_1417de898;
          }
          break;
        }
        iVar11 = iVar11 + -1;
        lVar17 = lVar17 + 0x10;
      } while (uVar21 << 4 != lVar17);
    }
    *(uint *)(param_6 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_6 + 0x8c) < iVar19 + 1U) {
      FUN_14472e0ae(param_6,iVar19);
      lVar10 = *(longlong *)(param_6 + 0x80);
    }
    if (lVar10 == 0) {
      lVar10 = param_6;
    }
    lVar12 = uVar21 * 0x10;
    *(longlong *)(lVar10 + lVar12) = lVar9;
    *(int *)(lVar10 + 8 + lVar12) = (int)lVar4;
    *(ushort *)(lVar10 + 0xc + lVar12) = (ushort)bVar18;
    *(byte *)(lVar10 + 0xe + lVar12) = bVar22;
    *(undefined1 *)(lVar10 + 0xf + lVar12) = 0;
LAB_1417de898:
    iVar19 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
      FUN_14738ac8a(param_5,iVar19);
    }
    *(ulonglong *)(param_5 + (longlong)iVar19 * 8) =
         uVar21 & 0xff |
         (ulonglong)bVar1 << 8 |
         (ulonglong)bVar20 << 0x10 | (ulonglong)bVar18 << 0x20 | (ulonglong)(bVar22 & 1) << 0x30;
    param_3 = (char)local_68;
  }
  if (param_3 != '\0') goto LAB_1417de8eb;
  local_68 = local_70 + 2;
  lVar9 = 0;
  bVar23 = true;
  do {
    bVar15 = bVar23;
    local_58 = (undefined8 *)local_68[lVar9 * 2];
    if (local_58 != (undefined8 *)0x0) {
      bVar18 = (&DAT_14a9c0a42)[lVar9];
      bVar22 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xd);
      bVar20 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xf);
      local_50._0_7_ = CONCAT16(bVar20,(uint6)CONCAT14(bVar22,(int)local_68[lVar9 * 2 + 1]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar1 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xe);
      bVar2 = *(byte *)((longlong)local_68 + lVar9 * 0x10 + 0xc);
      uVar6 = FUN_14472dff0(param_6,&local_58);
      iVar19 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar19 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
        FUN_14738ac8a(param_5,iVar19);
      }
      *(ulonglong *)(param_5 + (longlong)iVar19 * 8) =
           (ulonglong)uVar6 & 0xff |
           (ulonglong)bVar2 << 8 |
           (ulonglong)bVar1 << 0x10 |
           (ulonglong)bVar18 << 0x18 | (ulonglong)bVar22 << 0x20 | (ulonglong)(bVar20 & 1) << 0x30;
    }
    lVar9 = 1;
    bVar23 = false;
  } while (bVar15);
  if (local_70[0x16] == 0) {
    local_70[0x16] = DAT_14ca94db0;
    *(undefined4 *)(local_70 + 0x17) = 0;
  }
  local_58 = (undefined8 *)local_70[0x11];
  if (local_58 == (undefined8 *)0x0) {
    local_50 = 0x4000000000000;
    local_58 = &DAT_14ca94d98;
    uVar6 = FUN_14472dff0(param_6);
    iVar19 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
      FUN_14738ac8a(param_5,iVar19);
    }
    uVar21 = (ulonglong)(uVar6 & 0xff | 0x3080000);
  }
  else {
    bVar18 = *(byte *)((longlong)local_70 + 0x95);
    bVar22 = *(byte *)((longlong)local_70 + 0x97);
    local_50._0_7_ = CONCAT16(bVar22,(uint6)CONCAT14(bVar18,(int)local_70[0x12]));
    local_50 = (ulonglong)(uint7)local_50;
    bVar20 = *(byte *)((longlong)local_70 + 0x96);
    bVar1 = *(byte *)((longlong)local_70 + 0x94);
    uVar6 = FUN_14472dff0(param_6);
    iVar19 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
      FUN_14738ac8a(param_5,iVar19);
    }
    uVar21 = (ulonglong)uVar6 & 0xff |
             (ulonglong)bVar1 << 8 |
             (ulonglong)bVar20 << 0x10 | (ulonglong)bVar18 << 0x20 | (ulonglong)(bVar22 & 1) << 0x30
             | 0x3000000;
  }
  *(ulonglong *)(param_5 + (longlong)iVar19 * 8) = uVar21;
  *param_7 = (uint)*(byte *)(param_5 + (longlong)(*(int *)(param_5 + 0x88) + -1) * 8);
  local_60 = local_70 + 6;
  iVar19 = (int)local_70[0xe];
  if (iVar19 != 0) {
    if (0 < iVar19) {
      pbVar14 = (byte *)((longlong)local_70 + 0x3f);
      uVar6 = 0x4000000;
      lVar9 = 0;
      do {
        local_58 = *(undefined8 **)(pbVar14 + -0xf);
        bVar18 = pbVar14[-2];
        bVar22 = *pbVar14;
        local_50._0_7_ = CONCAT16(bVar22,(uint6)CONCAT14(bVar18,*(undefined4 *)(pbVar14 + -7)));
        local_50 = (ulonglong)(uint7)local_50;
        bVar20 = pbVar14[-1];
        bVar1 = pbVar14[-3];
        uVar7 = FUN_14472dff0(param_6,&local_58);
        local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar7);
        iVar19 = *(int *)(param_5 + 0x88);
        *(uint *)(param_5 + 0x88) = iVar19 + 1U;
        if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
          FUN_14738ac8a(param_5,iVar19);
        }
        *(ulonglong *)(param_5 + (longlong)iVar19 * 8) =
             (ulonglong)local_68 & 0xff |
             (ulonglong)bVar1 << 8 |
             (ulonglong)bVar20 << 0x10 |
             (ulonglong)uVar6 | (ulonglong)bVar18 << 0x20 | (ulonglong)(bVar22 & 1) << 0x30;
        lVar9 = lVar9 + 1;
        iVar19 = (int)local_70[0xe];
        uVar6 = uVar6 + 0x1000000;
        pbVar14 = pbVar14 + 0x10;
      } while (lVar9 < iVar19);
      if (3 < iVar19) goto LAB_1417ded43;
    }
    uVar6 = iVar19 * 0x1000000 + 0x4000000;
    iVar19 = iVar19 + -4;
    do {
      lVar9 = (longlong)(int)local_70[0xe];
      lVar10 = lVar9 * 0x10;
      local_58 = (undefined8 *)local_60[lVar9 * 2 + -2];
      bVar18 = *(byte *)((longlong)local_60 + lVar10 + -3);
      bVar22 = *(byte *)((longlong)local_60 + lVar10 + -1);
      local_50._0_7_ = CONCAT16(bVar22,(uint6)CONCAT14(bVar18,(int)local_60[lVar9 * 2 + -1]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar20 = *(byte *)((longlong)local_60 + lVar10 + -2);
      bVar1 = *(byte *)((longlong)local_60 + lVar10 + -4);
      uVar8 = FUN_14472dff0(param_6,&local_58);
      iVar11 = *(int *)(param_5 + 0x88);
      *(uint *)(param_5 + 0x88) = iVar11 + 1U;
      if (*(uint *)(param_5 + 0x8c) < iVar11 + 1U) {
        FUN_14738ac8a(param_5,iVar11);
      }
      *(ulonglong *)(param_5 + (longlong)iVar11 * 8) =
           (ulonglong)uVar8 & 0xff | (ulonglong)bVar1 << 8 | (ulonglong)bVar20 << 0x10 |
           (ulonglong)uVar6 | (ulonglong)bVar18 << 0x20 | (ulonglong)(bVar22 & 1) << 0x30;
      uVar6 = uVar6 + 0x1000000;
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0);
  }
LAB_1417ded43:
  cVar5 = FUN_147430c75(DAT_14ca85550);
  if (cVar5 != '\0') {
    puVar3 = (undefined8 *)local_70[0x18];
    bVar23 = puVar3 != (undefined8 *)0x0;
    local_58 = &DAT_14ca8c098;
    if (bVar23) {
      local_58 = puVar3;
    }
    uVar13 = (ushort)*(byte *)((longlong)local_70 + 0xcd);
    if (!bVar23) {
      uVar13 = 0;
    }
    uVar7 = (undefined4)local_70[0x19];
    if (!bVar23) {
      uVar7 = 0;
    }
    bVar18 = *(byte *)((longlong)local_70 + 0xcf);
    if (!bVar23) {
      bVar18 = 0;
    }
    local_50._0_7_ = CONCAT16(bVar18,CONCAT24(uVar13,uVar7));
    local_50 = (ulonglong)(uint7)local_50;
    bVar22 = *(byte *)((longlong)local_70 + 0xce);
    bVar20 = *(byte *)((longlong)local_70 + 0xcc);
    uVar6 = FUN_14472dff0(param_6);
    iVar19 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
      FUN_14738ac8a(param_5,iVar19);
    }
    uVar21 = (ulonglong)bVar22 << 0x10;
    uVar16 = (ulonglong)bVar20 << 8;
    if (puVar3 == (undefined8 *)0x0) {
      uVar16 = 0;
      uVar21 = 0x40000;
    }
    *(ulonglong *)(param_5 + (longlong)iVar19 * 8) =
         (ulonglong)uVar6 & 0xff | uVar16 |
         uVar21 | (ulonglong)uVar13 << 0x20 | (ulonglong)(bVar18 & 1) << 0x30 | 0xe000000;
  }
  if ((undefined8 *)local_70[0xf] == (undefined8 *)0x0) {
    if ((int)local_70[0xe] == 0) goto LAB_1417de8eb;
    local_58 = (undefined8 *)local_70[6];
    uVar21 = (ulonglong)*(byte *)((longlong)local_70 + 0x3d);
    local_50._0_6_ = (uint6)CONCAT14(*(byte *)((longlong)local_70 + 0x3d),(int)local_70[7]);
    local_50._0_7_ = CONCAT16(*(byte *)((longlong)local_70 + 0x3f),(uint6)local_50);
    local_50 = (ulonglong)(uint7)local_50;
    bVar20 = *(byte *)((longlong)local_70 + 0x3f) & 1;
    bVar18 = *(byte *)((longlong)local_70 + 0x3c);
    bVar22 = *(byte *)((longlong)local_70 + 0x3e);
    uVar6 = FUN_14472dff0(param_6);
    uVar16 = (ulonglong)uVar6;
    iVar19 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) goto LAB_1417deff5;
  }
  else {
    uVar21 = (ulonglong)*(byte *)((longlong)local_70 + 0x85);
    local_50._0_6_ = (uint6)CONCAT14(*(byte *)((longlong)local_70 + 0x85),(int)local_70[0x10]);
    local_50._0_7_ = CONCAT16(*(byte *)((longlong)local_70 + 0x87),(uint6)local_50);
    local_50 = (ulonglong)(uint7)local_50;
    bVar20 = *(byte *)((longlong)local_70 + 0x87) & 1;
    bVar18 = *(byte *)((longlong)local_70 + 0x84);
    bVar22 = *(byte *)((longlong)local_70 + 0x86);
    local_58 = (undefined8 *)local_70[0xf];
    uVar6 = FUN_14472dff0(param_6);
    uVar16 = (ulonglong)uVar6;
    iVar19 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar19 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar19 + 1U) {
LAB_1417deff5:
      FUN_14738ac8a(param_5,iVar19);
    }
  }
  *(ulonglong *)(param_5 + (longlong)iVar19 * 8) =
       (uVar16 & 0xff) +
       ((ulonglong)bVar18 << 8 |
       (ulonglong)bVar22 << 0x10 | uVar21 << 0x20 | (ulonglong)bVar20 << 0x30) + 0xf000000;
LAB_1417de8eb:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417df030 FUN_1417df030 body=49 status=ok
// SIG undefined FUN_1417df030(void)

longlong FUN_1417df030(void)

{
  if (DAT_14cae9f70 == 0) {
    FUN_14086a14e(&DAT_14cae9f70,&PTR_FUN_14a9c4e98);
  }
  return DAT_14cae9f70;
}



// FUNCTION 1417df061 FUN_1417df061 body=620 status=ok
// SIG undefined FUN_1417df061(void)

void FUN_1417df061(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1401cf906(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9c9130;
  puVar1[5] = &PTR_FUN_14a9c96e0;
  puVar1[6] = &DAT_14a9c9700;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
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
  *(undefined1 *)(puVar1 + 0x26) = 1;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0x3f00000040800000;
  puVar1[0x2e] = 0x3f80000040800000;
  *(undefined2 *)((longlong)puVar1 + 0x17a) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1fe) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1ff) = 0xff;
  *(undefined4 *)(puVar1 + 0x42) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x21e) = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0xffffffff;
  *(undefined8 *)((longlong)puVar1 + 0x224) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x22c) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x129) = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 1;
  *(undefined2 *)((longlong)puVar1 + 0x17a) = 2;
  *(undefined1 *)((longlong)puVar1 + 0x18b) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x194) = 0x3f0000003f800000;
  *(undefined8 *)((longlong)puVar1 + 0x19c) = 0x4120000040000000;
  *(undefined8 *)((longlong)puVar1 + 0x1a4) = 0x41f0000000000000;
  *(undefined8 *)((longlong)puVar1 + 0x1ac) = 0x3f553f7d3f800000;
  *(undefined8 *)((longlong)puVar1 + 0x1b4) = 0x3f8000003f16872b;
  *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0x42c80000;
  *(undefined4 *)((longlong)puVar1 + 0x17c) = 0x3eaaa64c;
  *(byte *)((longlong)puVar1 + 0x179) = *(byte *)((longlong)puVar1 + 0x179) & 0xfe;
  *(byte *)((longlong)puVar1 + 0x1c1) = *(byte *)((longlong)puVar1 + 0x1c1) & 0x7f;
  *(byte *)((longlong)puVar1 + 0x18c) = *(byte *)((longlong)puVar1 + 0x18c) & 0xfe;
  *(undefined1 *)((longlong)puVar1 + 0x189) = 1;
  *(byte *)(puVar1 + 0x30) = *(byte *)(puVar1 + 0x30) & 0xf0 | 1;
  *(byte *)((longlong)puVar1 + 0x1ca) = *(byte *)((longlong)puVar1 + 0x1ca) | 1;
  *(byte *)(puVar1 + 0x3a) = *(byte *)(puVar1 + 0x3a) | 0x20;
  *(byte *)(puVar1 + 0x31) = *(byte *)(puVar1 + 0x31) & 0xf7;
  *(byte *)((longlong)puVar1 + 0x1c4) = *(byte *)((longlong)puVar1 + 0x1c4) & 0x9e;
  *(undefined1 *)(puVar1 + 0x3b) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x204) = 0;
  *(byte *)((longlong)puVar1 + 0x1d9) = *(byte *)((longlong)puVar1 + 0x1d9) & 0xfe;
  *(byte *)(puVar1 + 0x41) = *(byte *)(puVar1 + 0x41) | 1;
  *(undefined2 *)((longlong)puVar1 + 0x20a) = 0;
  *(byte *)((longlong)puVar1 + 500) = *(byte *)((longlong)puVar1 + 500) & 0xfe;
  *(byte *)((longlong)puVar1 + 0x1fc) = *(byte *)((longlong)puVar1 + 0x1fc) & 0xfe;
  *(byte *)(puVar1 + 0x38) = *(byte *)(puVar1 + 0x38) & 0xe7 | 8;
  *(undefined4 *)((longlong)puVar1 + 0x214) = 0;
  *(undefined1 *)((longlong)puVar1 + 299) = 9;
  *(undefined2 *)((longlong)puVar1 + 0x21e) = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0xffffffff;
  *(byte *)((longlong)puVar1 + 0x1d7) = *(byte *)((longlong)puVar1 + 0x1d7) & 0x98 | 0x21;
  *(undefined2 *)((longlong)puVar1 + 0x201) = 0x103;
  *(undefined1 *)((longlong)puVar1 + 0x203) = 1;
  *(byte *)((longlong)puVar1 + 0x1d2) = *(byte *)((longlong)puVar1 + 0x1d2) | 1;
  *(byte *)((longlong)puVar1 + 0x1d6) = *(byte *)((longlong)puVar1 + 0x1d6) & 99 | 0x80;
  *(undefined1 *)((longlong)puVar1 + 0x1c9) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(byte *)((longlong)puVar1 + 0x184) = *(byte *)((longlong)puVar1 + 0x184) & 0xf8;
  *(byte *)(puVar1 + 0x3f) = *(byte *)(puVar1 + 0x3f) & 0xfe;
  *(byte *)((longlong)puVar1 + 0x18a) = *(byte *)((longlong)puVar1 + 0x18a) & 0xf8;
  *(byte *)(puVar1 + 0x39) = *(byte *)(puVar1 + 0x39) & 0xe4;
  return;
}



// FUNCTION 1417df2d2 FUN_1417df2d2 body=58 status=ok
// SIG undefined FUN_1417df2d2(void)

void FUN_1417df2d2(longlong param_1,undefined4 param_2)

{
  if (DAT_14c872ba8 == '\0') {
    FUN_14003fbd6();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1403ba3b2(*(longlong *)(param_1 + 0x238),param_2);
    return;
  }
  return;
}



// FUNCTION 1417df30c FUN_1417df30c body=80 status=ok
// SIG undefined FUN_1417df30c(void)

undefined8 FUN_1417df30c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x460) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_14043ea4a(param_2,lVar1 + 0x3f8);
    FUN_14043ea4a(param_2 + 0x10,lVar1 + 0x408);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1417df35c FUN_1417df35c body=45 status=ok
// SIG undefined FUN_1417df35c(void)

undefined4 FUN_1417df35c(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1447fa3ae(param_1 + 0x80);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x260) >> 8),*(int *)(param_1 + 0x260) != 0);
  }
  return uVar2;
}



// FUNCTION 1417df38a FUN_1417df38a body=1306 status=ok
// SIG undefined FUN_1417df38a(void)

void FUN_1417df38a(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined1 param_6,undefined4 param_7,char param_8,
                  undefined8 param_9)

{
  void *_Dst;
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined7 uStack_57;
  char cStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  local_98 = *param_5;
  uStack_94 = param_5[1];
  uStack_90 = param_5[2];
  uStack_8c = param_5[3];
  local_88 = param_5[4];
  uStack_84 = param_5[5];
  uStack_80 = param_5[6];
  uStack_7c = param_5[7];
  local_78 = (void *)0x0;
  uVar12 = *(uint *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  local_70 = CONCAT44(local_70._4_4_,uVar12);
  local_b0 = param_1;
  if ((longlong)(int)uVar12 == 0) {
    local_70 = (ulonglong)uVar12;
  }
  else {
    FUN_1446dd670(&local_78,uVar12,0);
    memcpy(local_78,pvVar2,(longlong)(int)uVar12 * 2);
  }
  iVar15 = DAT_14caea150;
  iVar8 = DAT_14caea128;
  uStack_60 = CONCAT31(uStack_60._1_3_,param_6);
  uStack_5c = param_7;
  uStack_58 = (undefined1)param_9;
  uStack_57 = (undefined7)((ulonglong)param_9 >> 8);
  cStack_50 = param_8;
  local_68 = param_3;
  uStack_64 = param_4;
  if (DAT_14caea154 == 0) {
    iVar15 = DAT_14caea128 + 1;
    bVar19 = DAT_14caea12c == DAT_14caea128;
    DAT_14caea128 = iVar15;
    if (bVar19) {
      FUN_14045f6dc(&DAT_14caea120,iVar8);
    }
    iVar15 = DAT_14caea148;
    if (DAT_14caea148 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = DAT_14caea148 + 0x1e;
      if (-1 < DAT_14caea148 + -1) {
        iVar7 = DAT_14caea148 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    iVar13 = DAT_14caea148 + 1;
    iVar18 = DAT_14caea148 + 0x1f;
    if (-1 < DAT_14caea148) {
      iVar18 = DAT_14caea148;
    }
    if (iVar18 >> 5 != iVar7) {
      if (DAT_14caea14c <= DAT_14caea148) {
        if (DAT_14caea148 + 0x20U < 0xa0) {
          DAT_14caea14c = 0x80;
        }
        else {
          uVar12 = DAT_14caea148 + 0x20U >> 5;
          if (DAT_14caea14c + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar12) {
              uVar16 = uVar12;
            }
          }
          else {
            uVar16 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar16 << 2,0);
          iVar7 = (int)(uVar9 >> 2);
          DAT_14caea14c = -0x20;
          if ((int)uVar12 <= iVar7) {
            DAT_14caea14c = iVar7 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14caea130,DAT_14caea148);
        iVar13 = DAT_14caea148 + 1;
      }
      iVar7 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar7 = iVar13;
      }
      if (iVar13 % 0x20 != 0) {
        puVar17 = &DAT_14caea130;
        if (DAT_14caea140 != (undefined4 *)0x0) {
          puVar17 = DAT_14caea140;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        DAT_14caea148 = iVar13;
        puVar17[iVar7 >> 5] = (uint)(puVar17[iVar7 >> 5] << (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
        iVar13 = DAT_14caea148;
      }
    }
    DAT_14caea148 = iVar13;
    lVar14 = (longlong)iVar8;
    puVar17 = &DAT_14caea130;
    if (DAT_14caea140 != (undefined4 *)0x0) {
      puVar17 = DAT_14caea140;
    }
    bVar11 = (byte)iVar15 & 0x1f;
    puVar17[iVar18 >> 5] = puVar17[iVar18 >> 5] & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
    iVar15 = iVar8;
  }
  else {
    lVar14 = (longlong)DAT_14caea150;
    DAT_14caea150 = *(int *)(DAT_14caea120 + 4 + lVar14 * 0x80);
    DAT_14caea154 = DAT_14caea154 + -1;
    if (DAT_14caea154 != 0) {
      *(undefined4 *)(DAT_14caea120 + (longlong)DAT_14caea150 * 0x80) = 0xffffffff;
    }
  }
  iVar8 = 1;
  puVar17 = &DAT_14caea130;
  if (DAT_14caea140 != (undefined4 *)0x0) {
    puVar17 = DAT_14caea140;
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar17[iVar7 >> 5] = puVar17[iVar7 >> 5] | 1 << ((byte)iVar15 & 0x1f);
  lVar6 = DAT_14caea120;
  lVar14 = lVar14 * 0x80;
  pvVar2 = (void *)(DAT_14caea120 + lVar14);
  *(undefined4 *)(DAT_14caea120 + lVar14) = param_3;
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar14);
  *puVar1 = local_a8;
  puVar1[1] = uStack_a0;
  puVar17 = (undefined4 *)(lVar6 + 0x20 + lVar14);
  *puVar17 = local_98;
  puVar17[1] = uStack_94;
  puVar17[2] = uStack_90;
  puVar17[3] = uStack_8c;
  puVar17 = (undefined4 *)(lVar6 + 0x30 + lVar14);
  *puVar17 = local_88;
  puVar17[1] = uStack_84;
  puVar17[2] = uStack_80;
  puVar17[3] = uStack_7c;
  *(void **)(lVar6 + 0x40 + lVar14) = local_78;
  local_78 = (void *)0x0;
  *(undefined4 *)(lVar6 + 0x48 + lVar14) = (undefined4)local_70;
  *(undefined4 *)(lVar6 + 0x4c + lVar14) = local_70._4_4_;
  local_70 = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x59 + lVar14);
  *puVar1 = CONCAT17(uStack_58,CONCAT43(uStack_5c,uStack_60._1_3_));
  puVar1[1] = CONCAT17(cStack_50,uStack_57);
  puVar17 = (undefined4 *)(lVar6 + 0x50 + lVar14);
  *puVar17 = local_68;
  puVar17[1] = uStack_64;
  puVar17[2] = uStack_60;
  puVar17[3] = uStack_5c;
  *(undefined4 *)(lVar6 + 0x70 + lVar14) = 0xffffffff;
  uVar12 = *(uint *)(lVar6 + lVar14);
  uVar16 = DAT_14caea128 - DAT_14caea154;
  if ((uVar16 != 0) && (uVar16 != 1)) {
    puVar10 = &DAT_14caea158;
    if (DAT_14caea160 != (undefined *)0x0) {
      puVar10 = DAT_14caea160;
    }
    iVar7 = *(int *)(puVar10 + (ulonglong)(DAT_14caea168 - 1U & uVar12) * 4);
    while (iVar7 != -1) {
      _Dst = (void *)(DAT_14caea120 + (longlong)iVar7 * 0x80);
      if (*(uint *)(DAT_14caea120 + (longlong)iVar7 * 0x80) == uVar12) {
        if (*(longlong *)((longlong)_Dst + 0x40) != 0) {
          FUN_1400020a8();
        }
        memmove(_Dst,pvVar2,0x70);
        FUN_147bb2722(iVar15);
        goto LAB_1417df661;
      }
      iVar7 = *(int *)((longlong)_Dst + 0x70);
    }
  }
  if (3 < uVar16) {
    uVar9 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar8 <= DAT_14caea168)) {
    uVar12 = DAT_14caea168 - 1U & uVar12;
    *(uint *)((longlong)pvVar2 + 0x74) = uVar12;
    puVar10 = DAT_14caea160;
    if (DAT_14caea160 == (undefined *)0x0) {
      puVar10 = &DAT_14caea158;
    }
    *(undefined4 *)((longlong)pvVar2 + 0x70) =
         *(undefined4 *)(puVar10 + ((longlong)DAT_14caea168 - 1U & (longlong)(int)uVar12) * 4);
    puVar10 = DAT_14caea160;
    if (DAT_14caea160 == (undefined *)0x0) {
      puVar10 = &DAT_14caea158;
    }
    *(int *)(puVar10 + ((longlong)DAT_14caea168 - 1U & (longlong)(int)uVar12) * 4) = iVar15;
  }
  else {
    DAT_14caea168 = iVar8;
    FUN_14165e2b2();
  }
LAB_1417df661:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar12 = DAT_14caea188;
  if (param_8 == '\0') {
    lVar14 = (longlong)(int)DAT_14caea188;
    DAT_14caea188 = DAT_14caea188 + 1;
    if (DAT_14caea18c < DAT_14caea188) {
      FUN_140c60952(&DAT_14caea180,uVar12);
    }
    uVar3 = *(undefined4 *)((longlong)local_b0 + 4);
    uVar4 = *(undefined4 *)(local_b0 + 1);
    uVar5 = *(undefined4 *)((longlong)local_b0 + 0xc);
    puVar17 = (undefined4 *)(DAT_14caea180 + lVar14 * 0x10);
    *puVar17 = *(undefined4 *)local_b0;
    puVar17[1] = uVar3;
    puVar17[2] = uVar4;
    puVar17[3] = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417df8a6 FUN_1417df8a6 body=38 status=ok
// SIG undefined FUN_1417df8a6(void)

undefined8 FUN_1417df8a6(undefined8 param_1,int param_2)

{
  FUN_1401fc4ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417df8cc FUN_1417df8cc body=38 status=ok
// SIG undefined FUN_1417df8cc(void)

undefined8 FUN_1417df8cc(undefined8 param_1,int param_2)

{
  FUN_140430b1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417df8f2 FUN_1417df8f2 body=99 status=ok
// SIG undefined FUN_1417df8f2(void)

void FUN_1417df8f2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417df956 FUN_1417df956 body=120 status=ok
// SIG undefined FUN_1417df956(void)

void FUN_1417df956(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 0x150) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2d0), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x2c8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x4d0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1448c07d4(*(longlong *)(param_1 + 0xc0),param_2);
  return;
}



// FUNCTION 1417df9ce FUN_1417df9ce body=215 status=ok
// SIG undefined FUN_1417df9ce(void)

undefined8 FUN_1417df9ce(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((DAT_14c86a9f8 == 1) && (*(int *)(lVar1 + 0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
  if (plVar4 != (longlong *)0x0) {
    if (*(code **)(*plVar4 + 0x2b8) != FUN_14497e05a) {
                    /* WARNING: Could not recover jumptable at 0x0001417dfa6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
      return uVar3;
    }
    bVar2 = DAT_14c86a9f8;
    while( true ) {
      if (((bVar2 & 1) != 0) && (*(int *)(lVar1 + 0xc60) == 1)) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        bVar2 = DAT_14c86a9f8;
      }
      plVar4 = (longlong *)plVar4[0x22];
      if (plVar4 == (longlong *)0x0) break;
      if (*(code **)(*plVar4 + 0x2b8) != FUN_14497e05a) {
                    /* WARNING: Could not recover jumptable at 0x0001417dfa5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
        return uVar3;
      }
    }
  }
  FUN_14003fbd6();
  return DAT_14caea080;
}



// FUNCTION 1417dfac0 FUN_1417dfac0 body=57 status=ok
// SIG undefined FUN_1417dfac0(void)

undefined8 * FUN_1417dfac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_1401c22be(puVar1);
  *puVar1 = &PTR_FUN_14a9c9e70;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return puVar1;
}



// FUNCTION 1417dfafa FUN_1417dfafa body=44 status=ok
// SIG undefined FUN_1417dfafa(void)

bool FUN_1417dfafa(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1447fa3ae(param_1 + 0x80);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x2d8) == 0;
  }
  return bVar2;
}



// FUNCTION 1417dfb26 FUN_1417dfb26 body=373 status=ok
// SIG undefined FUN_1417dfb26(void)

void FUN_1417dfb26(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417dfbaf;
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
LAB_1417dfbaf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1417dfc9c FUN_1417dfc9c body=255 status=ok
// SIG undefined FUN_1417dfc9c(void)

void FUN_1417dfc9c(longlong param_1,int param_2)

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



// FUNCTION 1417dfd9c FUN_1417dfd9c body=337 status=ok
// SIG undefined FUN_1417dfd9c(void)

void FUN_1417dfd9c(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417dfe09;
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
LAB_1417dfe09:
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



// FUNCTION 1417dfeee FUN_1417dfeee body=370 status=ok
// SIG undefined FUN_1417dfeee(void)

void FUN_1417dfeee(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417dff77;
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
LAB_1417dff77:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1417e0060 FUN_1417e0060 body=337 status=ok
// SIG undefined FUN_1417e0060(void)

void FUN_1417e0060(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417e00cd;
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
LAB_1417e00cd:
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



// FUNCTION 1417e01b2 FUN_1417e01b2 body=337 status=ok
// SIG undefined FUN_1417e01b2(void)

void FUN_1417e01b2(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417e021f;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1417e021f:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x14)) {
      uVar3 = uVar4 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
  }
  return;
}



// FUNCTION 1417e0304 FUN_1417e0304 body=113 status=ok
// SIG undefined FUN_1417e0304(void)

void FUN_1417e0304(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 1417e0376 FUN_1417e0376 body=113 status=ok
// SIG undefined FUN_1417e0376(void)

void FUN_1417e0376(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,4);
  }
  return;
}



// FUNCTION 1417e03e8 FUN_1417e03e8 body=370 status=ok
// SIG undefined FUN_1417e03e8(void)

void FUN_1417e03e8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417e0471;
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
LAB_1417e0471:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1417e055a FUN_1417e055a body=68 status=ok
// SIG undefined FUN_1417e055a(void)

void FUN_1417e055a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1401cf74e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9d4fc0;
  puVar1[5] = &PTR_FUN_14a9d5570;
  puVar1[6] = &PTR_FUN_14a9d5590;
  puVar1[0x5c] = 0;
  return;
}



// FUNCTION 1417e059e FUN_1417e059e body=49 status=ok
// SIG undefined FUN_1417e059e(void)

longlong FUN_1417e059e(void)

{
  if (DAT_14caec478 == 0) {
    FUN_14073dd9a(&DAT_14caec478,&PTR_LAB_14a9d6de0);
  }
  return DAT_14caec478;
}



// FUNCTION 1417e05d0 FUN_1417e05d0 body=102 status=ok
// SIG undefined FUN_1417e05d0(void)

void FUN_1417e05d0(void)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = local_60;
  local_60[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_140042bb4();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e0638 FUN_1417e0638 body=680 status=ok
// SIG undefined FUN_1417e0638(void)

void FUN_1417e0638(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 2;
  local_3c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  puVar5 = &local_48;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  FUN_14016d7a8(param_1,puVar5);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e08e2 FUN_1417e08e2 body=64 status=ok
// SIG undefined FUN_1417e08e2(void)

void FUN_1417e08e2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

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
  FUN_14016d7a8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e0924 FUN_1417e0924 body=10 status=ok
// SIG undefined FUN_1417e0924(void)

void FUN_1417e0924(undefined8 param_1)

{
  FUN_1406a5d86(param_1,3);
  return;
}



// FUNCTION 1417e0938 FUN_1417e0938 body=35 status=ok
// SIG undefined FUN_1417e0938(void)

void FUN_1417e0938(longlong param_1)

{
  FUN_1400fb146(param_1 + 0x80,0);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1417e095c FUN_1417e095c body=2471 status=ok
// SIG undefined FUN_1417e095c(void)

bool FUN_1417e095c(longlong *param_1,uint *param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  undefined *puVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_1b8 [32];
  uint local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined4 local_13c;
  ulonglong *local_138;
  undefined1 *local_130;
  longlong local_128;
  code *local_120;
  ulonglong local_118 [4];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  longlong *local_e8;
  undefined *puStack_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_f8 = 0xff;
  local_f0 = 0xffffffff;
  local_ec = 0;
  uVar12 = (uint)param_4 & 0xff ^ 3;
  pcVar4 = *(code **)(*param_1 + 0x3c0);
  local_138 = param_3;
  if (pcVar4 == FUN_144989384) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1000000000;
    local_e8 = (longlong *)0x0;
    puStack_e0 = (undefined *)0x0;
    pcVar4 = *(code **)(*param_1 + 0x2c8);
    if (pcVar4 == FUN_144b24fbc) {
      do {
        uVar11 = local_50;
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_d8;
        }
        lVar24 = (longlong)(int)local_50;
        if (lVar24 != 0) {
          lVar18 = 0;
          do {
            if (*(longlong **)(puVar7 + lVar18) == param_1) goto LAB_1417e123a;
            lVar18 = lVar18 + 8;
          } while (lVar24 * 8 - lVar18 != 0);
        }
        uVar8 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar8);
        if (local_50._4_4_ < uVar8) {
          FUN_147bba0a6(local_d8,uVar11 & 0xffffffff);
        }
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_d8;
        }
        *(longlong **)(puVar7 + lVar24 * 8) = param_1;
        if (puStack_e0 == (undefined *)0x0) {
          puStack_e0 = (undefined *)param_1[0x18];
        }
        param_1 = (longlong *)param_1[0x22];
        if (param_1 == (longlong *)0x0) {
LAB_1417e123a:
          plVar16 = (longlong *)FUN_1447277f0(0);
          (**(code **)(*plVar16 + 0x2c8))(plVar16,&local_e8);
          goto LAB_1417e0ace;
        }
        pcVar4 = *(code **)(*param_1 + 0x2c8);
      } while (pcVar4 == FUN_144b24fbc);
      if (pcVar4 == (code *)&LAB_147bae246) {
        local_e8 = param_1;
        if (puStack_e0 == (undefined *)0x0) {
          puStack_e0 = &DAT_14caea5a0;
          if ((undefined *)param_1[0x18] != (undefined *)0x0) {
            puStack_e0 = (undefined *)param_1[0x18];
          }
        }
      }
      else {
        (*pcVar4)(param_1,&local_e8);
      }
    }
    else {
      (*pcVar4)(param_1,&local_e8);
    }
LAB_1417e0ace:
    uVar8 = *param_2;
    if (((uVar12 & 1) != 0) && (*(int *)(puStack_e0 + 0xf8) != *(int *)(puStack_e0 + 0x124))) {
      uVar12 = param_2[3];
      bVar3 = (byte)param_2[4];
      param_4 = (ulonglong)bVar3;
      uVar20 = uVar12 >> 0xd ^
               (uVar8 * 0x10000 + param_2[2] + (uVar8 & 0xffff) +
                ((uVar8 >> 0x10) << 0x13 | uVar8 >> 0x10) + ((uVar8 & 0xffff) >> 4)) - uVar12;
      uVar13 = uVar20 << 8 ^ (-0x61c88647 - uVar12) - uVar20;
      uVar17 = uVar13 >> 0xd ^ (uVar12 - uVar20) - uVar13;
      uVar20 = uVar17 >> 0xc ^ (uVar20 - uVar13) - uVar17;
      uVar23 = uVar20 << 0x10 ^ (uVar13 - uVar17) - uVar20;
      uVar13 = uVar23 >> 5 ^ (uVar17 - uVar20) - uVar23;
      uVar17 = uVar13 >> 3 ^ (uVar20 - uVar23) - uVar13;
      uVar20 = uVar17 << 10 ^ (uVar23 - uVar13) - uVar17;
      uVar13 = uVar20 >> 0xf ^ uVar13 - (uVar17 + uVar20);
      iVar21 = uVar13 - bVar3;
      uVar13 = iVar21 * 0x100 ^ 0x9e3779b9 - uVar13;
      uVar20 = uVar13 >> 0xd ^ ((uint)bVar3 - iVar21) - uVar13;
      uVar17 = uVar20 >> 0xc ^ (iVar21 - uVar13) - uVar20;
      uVar23 = uVar17 << 0x10 ^ (uVar13 - uVar20) - uVar17;
      uVar13 = uVar23 >> 5 ^ (uVar20 - uVar17) - uVar23;
      uVar20 = uVar13 >> 3 ^ (uVar17 - uVar23) - uVar13;
      uVar17 = uVar20 << 10 ^ (uVar23 - uVar13) - uVar20;
      puVar19 = puStack_e0 + 0x128;
      if (*(undefined **)(puStack_e0 + 0x130) != (undefined *)0x0) {
        puVar19 = *(undefined **)(puStack_e0 + 0x130);
      }
      iVar21 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)(puStack_e0 + 0x138) - 1U &
                       (uVar17 >> 0xf ^ uVar13 - (uVar20 + uVar17))) * 4);
      if (iVar21 != -1) {
        lVar24 = *(longlong *)(puStack_e0 + 0xf0);
        do {
          lVar18 = (longlong)iVar21;
          if ((((*(uint *)(lVar24 + lVar18 * 0x18) == uVar8) &&
               (*(uint *)(lVar24 + 4 + lVar18 * 0x18) == param_2[2])) &&
              (lVar1 = lVar24 + lVar18 * 0x18, *(byte *)(lVar1 + 8) == bVar3)) &&
             (*(uint *)(lVar1 + 0xc) == uVar12)) {
            pcVar9 = (char *)(lVar18 * 5);
            puVar2 = (uint *)(*(longlong *)(puStack_e0 + 0x340) + lVar18 * 0x28);
            if (puVar2[1] == 0) {
LAB_1417e0f0a:
              if (*(longlong *)(puVar2 + 2) != 0) {
                pcVar10 = (char *)(puVar2 + 2);
                pcVar9 = pcVar10;
                param_4 = FUN_140007850();
                cVar6 = (*(code *)PTR_FUN_14c758760)();
                if ((param_4 == 0) || (cVar6 == '\0')) {
                  if (param_4 != 0) {
                    uVar12 = *(uint *)(param_4 + 0xc);
                    *puVar2 = uVar12;
                    if ((int)uVar12 < DAT_14c9647dc) {
                      pcVar9 = (char *)(ulonglong)(uVar12 & 0xffff);
                      lVar24 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                    }
                    else {
                      lVar24 = 0;
                    }
                    uVar12 = *(uint *)(lVar24 + 0x10);
                    if (*(uint *)(lVar24 + 0x10) == 0) {
                      LOCK();
                      iVar21 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar8 = DAT_14c964868 + 1;
                      bVar25 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar21;
                      if (bVar25) {
                        pcVar9 = ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp";
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar8);
                      }
                      LOCK();
                      uVar12 = *(uint *)(lVar24 + 0x10);
                      bVar25 = uVar12 == 0;
                      if (bVar25) {
                        *(uint *)(lVar24 + 0x10) = uVar8;
                        uVar12 = 0;
                      }
                      UNLOCK();
                      if (bVar25) {
                        uVar12 = uVar8;
                      }
                    }
                    puVar2[1] = uVar12;
                    goto LAB_1417e0f79;
                  }
                  puVar2[0] = 0;
                  puVar2[1] = 0;
                }
                else {
                  uVar12 = *(uint *)(param_4 + 0xc);
                  if ((int)uVar12 < DAT_14c9647dc) {
                    pcVar9 = (char *)((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8))
                    ;
                  }
                  else {
                    pcVar9 = (char *)0x0;
                  }
                  if ((*(uint *)((longlong)pcVar9 + 8) & 0x8400000) == 0) {
                    pcVar9 = (char *)puVar2;
                    FUN_14485c47a(puVar2,param_4);
                  }
LAB_1417e0f79:
                  if ((*(uint *)(param_4 + 8) >> 0x1e & 1) == 0) goto LAB_1417e0d10;
                }
                if (*(longlong *)pcVar10 != 0) {
                  pcVar9 = pcVar10;
                  FUN_140081d40(pcVar10,0);
                  if (puVar2[1] != 0) {
                    uVar12 = *puVar2;
                    pcVar9 = (char *)(ulonglong)uVar12;
                    if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                      pcVar9 = (char *)(ulonglong)(uVar12 >> 0x10);
                      puVar15 = (ulonglong *)
                                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (longlong)pcVar9 * 8));
                      if ((puVar15 != (ulonglong *)0x0) &&
                         ((((uint)puVar15[2] == puVar2[1] && ((puVar15[1] & 0x10200000) == 0)) &&
                          (param_4 = *puVar15, param_4 != 0)))) goto LAB_1417e0d10;
                    }
                  }
                  if (*(longlong *)pcVar10 != 0) {
                    param_4 = FUN_140007850();
                    cVar6 = (*(code *)PTR_FUN_14c758760)();
                    if ((param_4 == 0) || (cVar6 == '\0')) {
                      if (param_4 != 0) {
                        uVar12 = *(uint *)(param_4 + 0xc);
                        goto LAB_1417e102a;
                      }
                      puVar2[0] = 0;
                      puVar2[1] = 0;
                      pcVar9 = pcVar10;
                    }
                    else {
                      uVar12 = *(uint *)(param_4 + 0xc);
                      if ((int)uVar12 < DAT_14c9647dc) {
                        lVar24 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                      }
                      else {
                        lVar24 = 0;
                      }
                      pcVar10 = (char *)(ulonglong)*(uint *)(lVar24 + 8);
                      if ((*(uint *)(lVar24 + 8) & 0x8400000) == 0) {
LAB_1417e102a:
                        *puVar2 = uVar12;
                        if ((int)uVar12 < DAT_14c9647dc) {
                          pcVar10 = (char *)(ulonglong)(uVar12 & 0xffff);
                          lVar24 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                        }
                        else {
                          lVar24 = 0;
                        }
                        uVar12 = *(uint *)(lVar24 + 0x10);
                        if (*(uint *)(lVar24 + 0x10) == 0) {
                          LOCK();
                          iVar21 = DAT_14c964868 + 1;
                          UNLOCK();
                          uVar8 = DAT_14c964868 + 1;
                          bVar25 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar21;
                          if (bVar25) {
                            pcVar10 = ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp";
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,uVar8);
                          }
                          LOCK();
                          uVar12 = *(uint *)(lVar24 + 0x10);
                          bVar25 = uVar12 == 0;
                          if (bVar25) {
                            *(uint *)(lVar24 + 0x10) = uVar8;
                            uVar12 = 0;
                          }
                          UNLOCK();
                          if (bVar25) {
                            uVar12 = uVar8;
                          }
                        }
                        puVar2[1] = uVar12;
                      }
                      pcVar9 = pcVar10;
                      if ((*(uint *)(param_4 + 8) >> 0x1e & 1) == 0) goto LAB_1417e0d10;
                    }
                  }
                }
              }
LAB_1417e10e2:
              param_4 = 0;
            }
            else {
              uVar12 = *puVar2;
              pcVar9 = (char *)(ulonglong)uVar12;
              if (((int)uVar12 < 0) || (DAT_14c9647dc <= (int)uVar12)) goto LAB_1417e0f0a;
              pcVar9 = (char *)(ulonglong)(uVar12 >> 0x10);
              puVar15 = (ulonglong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (longlong)pcVar9 * 8));
              if (((puVar15 == (ulonglong *)0x0) ||
                  (((uint)puVar15[2] != puVar2[1] || ((puVar15[1] & 0x10200000) != 0)))) ||
                 (param_4 = *puVar15, param_4 == 0)) goto LAB_1417e0f0a;
LAB_1417e0d10:
              if (DAT_14cb0b430 == 0) {
                local_160 = &local_120;
                local_120 = FUN_1449e2820;
                local_150 = FUN_14081d0ea;
                local_158 = &LAB_145892f94;
                local_168 = &LAB_147d6dbf3;
                local_170 = &LAB_1464081e0;
                local_178 = L"Engine";
                local_180 = 0;
                local_188 = 0x10000001;
                local_190 = 8;
                local_198 = 0x138;
                FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
              }
              pcVar9 = *(char **)(param_4 + 0x10);
              if (((int)*(uint *)((longlong)pcVar9 + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
                 (pcVar9 = *(char **)((longlong)pcVar9 + 0x30),
                 *(longlong *)((longlong)pcVar9 + (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 2 * 4)
                 != DAT_14cb0b430 + 0x30)) goto LAB_1417e10e2;
            }
            uVar8 = *param_2;
            local_13c = (undefined4)CONCAT71((int7)((ulonglong)pcVar9 >> 8),1);
            goto LAB_1417e0d4b;
          }
          iVar21 = *(int *)(lVar24 + 0x10 + lVar18 * 0x18);
        } while (iVar21 != -1);
      }
    }
    local_13c = 0;
LAB_1417e0d4b:
    local_128 = (longlong)(int)local_50;
    local_130 = local_58;
    uVar14 = local_13c;
    if (0 < local_128) {
      cVar6 = (char)param_2[4];
      uVar12 = param_2[3];
      puVar7 = local_d8;
      if (local_58 != (undefined1 *)0x0) {
        puVar7 = local_58;
      }
      lVar24 = 0;
      do {
        lVar18 = *(longlong *)(puVar7 + lVar24 * 8);
        uVar11 = (ulonglong)*(int *)(lVar18 + 0x1b8);
        if (0 < (longlong)uVar11) {
          puVar15 = (ulonglong *)(*(longlong *)(lVar18 + 0x1b0) + 0x10);
          bVar25 = true;
          uVar22 = 1;
          do {
            uVar5 = *puVar15;
            if ((((uVar5 != 0) && (uVar8 == (uint)puVar15[-2])) &&
                (param_2[2] == (uint)(puVar15[-2] >> 0x20))) &&
               ((*(uint *)((longlong)puVar15 + -4) == uVar12 && ((char)puVar15[-1] == cVar6)))) {
              param_4 = uVar5;
              uVar14 = 1;
              if (bVar25) goto LAB_1417e0e93;
              break;
            }
            bVar25 = uVar22 < uVar11;
            puVar15 = puVar15 + 5;
            bVar26 = uVar22 != uVar11;
            uVar22 = uVar22 + 1;
          } while (bVar26);
        }
        plVar16 = *(longlong **)(lVar18 + 0x2b0);
        if (plVar16 == (longlong *)0x0) {
          plVar16 = &DAT_14caec320;
        }
        if (cVar6 != '\x02') {
          if (cVar6 == '\x01') {
            uVar14 = local_13c;
            if ((((int)uVar12 < -1) || ((int)plVar16[1] <= (int)(uVar12 + 1))) ||
               (iVar21 = *(int *)(*plVar16 + 4 + (longlong)(int)uVar12 * 4), iVar21 == -1)) break;
            uVar12 = iVar21 - 1;
          }
          else {
            uVar14 = local_13c;
            if (((cVar6 != '\0') || ((int)uVar12 < 0)) ||
               (((int)plVar16[1] <= (int)uVar12 ||
                (uVar12 = *(uint *)(*plVar16 + (ulonglong)uVar12 * 4), uVar12 == 0xffffffff))))
            break;
          }
        }
        lVar24 = lVar24 + 1;
        uVar14 = local_13c;
      } while (lVar24 != local_128);
    }
LAB_1417e0e93:
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    cVar6 = (char)uVar14;
    local_118[0] = param_4;
  }
  else {
    local_198 = uVar12;
    cVar6 = (*pcVar4)(param_1,0x144989303,param_2,local_118);
  }
  if (cVar6 != '\0') {
    *local_138 = local_118[0];
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar6 != '\0';
}



// FUNCTION 1417e1304 FUN_1417e1304 body=21 status=ok
// SIG undefined FUN_1417e1304(void)

void FUN_1417e1304(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001417e1316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 1417e131a FUN_1417e131a body=102 status=ok
// SIG undefined FUN_1417e131a(void)

undefined8 * FUN_1417e131a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = (**(code **)(*param_3 + 0x410))(param_3);
  if (iVar2 != 3) {
    cVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
    if ((param_3 != (longlong *)0x0) && (cVar1 == '\0')) {
      *param_2 = CONCAT44(*(undefined4 *)(*(longlong *)(param_3[3] + 0x28) + 0x264),
                          *(undefined4 *)(*(longlong *)(param_3[3] + 0x28) + 0x25c));
    }
  }
  return param_2;
}



// FUNCTION 1417e138e FUN_1417e138e body=189 status=ok
// SIG undefined FUN_1417e138e(void)

char FUN_1417e138e(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x30))();
  pcVar1 = (char *)((longlong)param_1 + 0xad);
  LOCK();
  bVar4 = *(char *)((longlong)param_1 + 0xad) == '\0';
  if (bVar4) {
    *(char *)((longlong)param_1 + 0xad) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1447d2058();
  }
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != param_1[9])) {
    FUN_14490df4a();
    local_30 = 0;
    local_48 = 0;
    local_40 = param_1;
    local_38 = lVar3;
    FUN_140e663a2(param_1,&DAT_14ca85100,param_1 + 2);
  }
  LOCK();
  cVar2 = *pcVar1;
  bVar4 = cVar2 == '\x01';
  if (bVar4) {
    *pcVar1 = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    cVar2 = FUN_14008cdb0(pcVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e144c FUN_1417e144c body=65 status=ok
// SIG undefined FUN_1417e144c(void)

void FUN_1417e144c(longlong param_1)

{
  longlong *plVar1;
  
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 4;
  FUN_144725486();
  if ((*(byte *)(param_1 + 0xac) & 8) != 0) {
    plVar1 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar1 + 0x160))(plVar1,param_1);
    *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xf7;
  }
  return;
}



// FUNCTION 1417e148e FUN_1417e148e body=41 status=ok
// SIG undefined FUN_1417e148e(void)

void FUN_1417e148e(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x178))();
  FUN_1447e4184(param_1,param_2,uVar1 ^ 1);
  return;
}



// FUNCTION 1417e14b8 FUN_1417e14b8 body=111 status=ok
// SIG undefined FUN_1417e14b8(void)

undefined8 FUN_1417e14b8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e152a FUN_1417e152a body=120 status=ok
// SIG undefined FUN_1417e152a(void)

undefined8 FUN_1417e152a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 == 0) && (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 == 0)) {
    FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_18 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e15a6 FUN_1417e15a6 body=40 status=ok
// SIG undefined FUN_1417e15a6(void)

undefined1 FUN_1417e15a6(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x30))();
  if (iVar2 == 4) {
    uVar1 = *(undefined1 *)(param_1[8] + 0x1fe);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1417e15ce FUN_1417e15ce body=43 status=ok
// SIG undefined FUN_1417e15ce(void)

int FUN_1417e15ce(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 4) {
    iVar1 = (int)*(char *)(param_1[8] + 0x1ff);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 1417e15fa FUN_1417e15fa body=101 status=ok
// SIG undefined FUN_1417e15fa(void)

void FUN_1417e15fa(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0xb8) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x1a0))();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14041e0ea(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417e165c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 1417e1660 FUN_1417e1660 body=40 status=ok
// SIG undefined FUN_1417e1660(void)

undefined8 FUN_1417e1660(undefined8 param_1,int param_2)

{
  FUN_1401fc27a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417e1688 FUN_1417e1688 body=38 status=ok
// SIG undefined FUN_1417e1688(void)

undefined8 FUN_1417e1688(undefined8 param_1,int param_2)

{
  FUN_140430b1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417e16ae FUN_1417e16ae body=61 status=ok
// SIG undefined FUN_1417e16ae(void)

void FUN_1417e16ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *puVar1 = &PTR_FUN_14a388270;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1417e16ec FUN_1417e16ec body=411 status=ok
// SIG undefined FUN_1417e16ec(void)

bool FUN_1417e16ec(undefined8 param_1,longlong *param_2,byte *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cbc8);
  if (iVar4 < 0xb) {
    (**(code **)(*param_2 + 0x130))(param_2,param_3 + 0x10);
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_30 = CONCAT44(local_30._4_4_,(uint)*param_3);
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      if (1 < (uint)local_30) {
        FUN_14572541c(param_2);
      }
      *param_3 = (uint)local_30 != 0;
    }
    else {
      *param_3 = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else {
    uVar5 = 0;
    if (param_2[0xd] != 0) {
      uVar5 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_30 = CONCAT44(local_30._4_4_,uVar5);
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      uVar5 = (uint)local_30;
      if (1 < (uint)local_30) {
        FUN_14572541c(param_2);
        uVar5 = (uint)local_30;
      }
    }
    else {
      uVar5 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) goto LAB_1417e177c;
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      local_30 = *(ulonglong *)(param_3 + 8);
      (**(code **)(*param_2 + 0x150))(param_2);
      goto LAB_1417e177c;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_3 + 8);
LAB_1417e177c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4 < 0xb;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e1888 FUN_1417e1888 body=198 status=ok
// SIG undefined FUN_1417e1888(void)

undefined8 FUN_1417e1888(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x28);
    do {
      *(undefined1 *)(puVar6 + -5) = *(undefined1 *)param_3;
      lVar5 = param_3[1];
      if (DAT_14c950c29 == '\x01') {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar5 = param_3[1];
        }
      }
      puVar6[-4] = lVar5;
      puVar6[-3] = param_3[2];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar3 = *(undefined4 *)(param_3 + 4);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
      *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(param_3 + 3);
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar2;
      *(undefined4 *)(puVar6 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar6 + -4) = uVar4;
      if (puVar6 + -5 != param_3) {
        iVar1 = *(int *)(param_3 + 6);
        _Src = (void *)param_3[5];
        *(int *)(puVar6 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar6,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 7;
      puVar6 = puVar6 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417e194e FUN_1417e194e body=116 status=ok
// SIG undefined FUN_1417e194e(void)

void FUN_1417e194e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  CoCreateGuid((GUID *)(param_2 + 1));
  *(undefined4 *)(param_2 + 3) = 0;
  FUN_1446f470e(&local_20,L"Scalar",1);
  *param_2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e19c4 FUN_1417e19c4 body=123 status=ok
// SIG undefined FUN_1417e19c4(void)

void FUN_1417e19c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  CoCreateGuid((GUID *)(param_2 + 1));
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1446f470e(&local_38,L"Vector",1);
  *param_2 = local_38;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e1a40 FUN_1417e1a40 body=262 status=ok
// SIG undefined FUN_1417e1a40(void)

void FUN_1417e1a40(longlong param_1,int param_2)

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



// FUNCTION 1417e1b48 FUN_1417e1b48 body=275 status=ok
// SIG undefined FUN_1417e1b48(void)

void FUN_1417e1b48(longlong param_1,int param_2)

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



// FUNCTION 1417e1c5c FUN_1417e1c5c body=306 status=ok
// SIG undefined FUN_1417e1c5c(void)

void FUN_1417e1c5c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1417e1cbe;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1417e1cbe:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 1417e1d8e FUN_1417e1d8e body=230 status=ok
// SIG undefined FUN_1417e1d8e(void)

void FUN_1417e1d8e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x130;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
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
    if (param_2 <= (int)(uVar1 / 0x130)) {
      uVar2 = uVar1 / 0x130 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x130,8);
  }
  return;
}



// FUNCTION 1417e1e74 FUN_1417e1e74 body=536 status=ok
// SIG undefined FUN_1417e1e74(void)

void FUN_1417e1e74(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x38;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x34 + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x30 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1417e2047;
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
LAB_1417e2047:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e208e FUN_1417e208e body=320 status=ok
// SIG undefined FUN_1417e208e(void)

void FUN_1417e208e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417e20f7;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1417e20f7:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 1417e21ce FUN_1417e21ce body=79 status=ok
// SIG undefined FUN_1417e21ce(void)

void FUN_1417e21ce(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  
  if (param_2 < *(int *)(param_1 + 0x88)) {
    uVar1 = *(ulonglong *)(param_1 + 0x80);
    if ((uVar1 & 1) != 0) {
      uVar1 = ((longlong)uVar1 >> 0x18) + param_1 + 0x80;
    }
    FUN_14013e320(param_3,uVar1 + (longlong)param_2 * 0x1c,
                  *(undefined4 *)(uVar1 + 0x14 + (longlong)param_2 * 0x1c));
    return;
  }
  *param_5 = 0;
  return;
}



// FUNCTION 1417e221e FUN_1417e221e body=186 status=ok
// SIG undefined FUN_1417e221e(void)

void FUN_1417e221e(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 == '\0') {
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x38);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x1c;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
  }
  else if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x48);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (lVar4 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 1417e22d8 FUN_1417e22d8 body=382 status=ok
// SIG undefined FUN_1417e22d8(void)

void FUN_1417e22d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar8 = *(int *)(param_1 + 0x40) + 3;
  iVar7 = *(int *)(param_1 + 0x40) + 6;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  iVar8 = (iVar7 >> 2) + *(int *)(param_1 + 0x50);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar8) {
    FUN_14499148c(param_2,iVar8);
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar10 = 0x18;
    uVar11 = 0;
    do {
      lVar12 = *(longlong *)(param_1 + 0x38);
      iVar8 = (int)param_2[1];
      if ((uVar11 & 3) == 0) {
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_1449e2712(param_2,iVar8);
        }
        puVar1 = (undefined8 *)(*param_2 + (longlong)iVar8 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        iVar8 = (int)param_2[1];
      }
      *(undefined4 *)((longlong)(iVar8 + -1) * 0x10 + *param_2 + (uVar11 & 3) * 4) =
           *(undefined4 *)(lVar12 + lVar10);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x1c;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x40));
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar10 = 0x24;
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x48);
      uVar2 = *(undefined4 *)(lVar6 + -0xc + lVar10);
      uVar3 = *(undefined4 *)(lVar6 + -8 + lVar10);
      uVar4 = *(undefined4 *)(lVar6 + -4 + lVar10);
      uVar5 = *(undefined4 *)(lVar6 + lVar10);
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_1449e2712(param_2,iVar8);
      }
      lVar6 = *param_2;
      lVar9 = (longlong)iVar8 * 0x10;
      *(undefined4 *)(lVar6 + lVar9) = uVar2;
      *(undefined4 *)(lVar6 + 4 + lVar9) = uVar3;
      *(undefined4 *)(lVar6 + 8 + lVar9) = uVar4;
      *(undefined4 *)(lVar6 + 0xc + lVar9) = uVar5;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x28;
    } while (lVar12 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 1417e2458 FUN_1417e2458 body=411 status=ok
// SIG undefined FUN_1417e2458(void)

void FUN_1417e2458(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar2 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return;
      }
      bVar2 = DAT_14c8442b8 & 1;
    }
    if (bVar2 == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined8 **)(param_1 + 0xe0) = puVar3;
    }
  }
  return;
}



// FUNCTION 1417e25f3 FUN_1417e25f3 body=24 status=ok
// SIG undefined FUN_1417e25f3(void)

bool FUN_1417e25f3(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x408))();
  return uVar1 < 2;
}



// FUNCTION 1417e2618 FUN_1417e2618 body=740 status=ok
// SIG undefined FUN_1417e2618(void)

double * FUN_1417e2618(longlong param_1,double *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x628);
  if (lVar2 == 0) {
    dVar14 = *(double *)(param_3 + 0x28);
    dVar13 = *(double *)(param_3 + 0x30);
    *param_2 = *(double *)(param_3 + 0x20);
    param_2[1] = dVar14;
    param_2[2] = dVar13;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar12 = (undefined4)DAT_14c8464e8;
    uVar11 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar11;
    *(undefined4 *)(param_2 + 4) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
    param_2[5] = DAT_14c8464f0;
    param_2[6] = 0.0;
  }
  else {
    local_78 = 0.0;
    dStack_70 = 0.0;
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_98 = 0.0;
    dStack_90 = 0.0;
    local_68 = 0;
    if (0 < (longlong)*(int *)(param_1 + 0x648)) {
      uVar11 = 0;
      uVar12 = 0;
      lVar8 = 0;
      bVar5 = false;
      dVar13 = 0.0;
      dVar14 = 0.0;
      do {
        lVar7 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x640) + lVar8 * 2) * 0x40;
        bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x28) + 0x36 + lVar7);
        if (bVar1 == 0) {
          dVar17 = (double)CONCAT44(uVar12,uVar11);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + 0x58);
          lVar9 = 0;
          dVar4 = (double)CONCAT44(uVar12,uVar11);
          do {
            lVar10 = (longlong)
                     *(int *)((longlong)*(int *)(lVar7 + *(longlong *)(lVar2 + 0x28) + 0x10) * 0x18
                              + *(longlong *)(lVar2 + 0x38) + lVar9);
            dVar15 = (double)*(float *)(lVar3 + 8 + lVar10 * 0xc);
            dVar16 = (double)*(float *)(lVar3 + 4 + lVar10 * 0xc);
            dVar17 = (double)*(float *)(lVar3 + lVar10 * 0xc);
            if (bVar5) {
              if (dVar17 <= local_98) {
                local_98 = dVar17;
              }
              if (dVar16 <= dStack_90) {
                dStack_90 = dVar16;
              }
              if (dVar15 <= local_88) {
                local_88 = dVar15;
              }
              if (dVar4 <= dVar17) {
                dVar4 = dVar17;
              }
              dVar17 = dVar4;
              if (dVar13 <= dVar16) {
                dVar13 = dVar16;
              }
              if (dVar14 <= dVar15) {
                dVar14 = dVar15;
              }
            }
            else {
              local_68 = 1;
              dVar14 = dVar15;
              dVar13 = dVar16;
              local_98 = dVar17;
              dStack_90 = dVar16;
              local_88 = dVar15;
            }
            lVar9 = lVar9 + 0x18;
            bVar5 = true;
            dVar4 = dVar17;
            dStack_80 = dVar17;
            local_78 = dVar13;
            dStack_70 = dVar14;
          } while ((ulonglong)bVar1 * 0x18 != lVar9);
        }
        lVar8 = lVar8 + 1;
        uVar11 = SUB84(dVar17,0);
        uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
      } while (lVar8 != *(int *)(param_1 + 0x648));
    }
    FUN_144a1c3a2(&local_98,&local_d0);
    dVar13 = (local_a8 - local_c0) * 0.5;
    dVar14 = (local_b0 - local_c8) * 0.5;
    dVar17 = (local_b8 - local_d0) * 0.5;
    *param_2 = local_d0 + dVar17;
    param_2[1] = local_c8 + dVar14;
    param_2[2] = local_c0 + dVar13;
    param_2[3] = dVar17;
    param_2[4] = dVar14;
    param_2[5] = dVar13;
    param_2[6] = SQRT(dVar13 * dVar13 + dVar17 * dVar17 + dVar14 * dVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417e28fe FUN_1417e28fe body=136 status=ok
// SIG undefined FUN_1417e28fe(void)

void FUN_1417e28fe(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x58) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x840) == 0)) {
    if (*(longlong *)(param_1 + 0x14a8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    FUN_140325a06(param_1 + 0x14e0,local_24,param_2 + 0x28,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e299a FUN_1417e299a body=1261 status=ok
// SIG undefined FUN_1417e299a(void)

void FUN_1417e299a(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_188 [40];
  ulonglong *local_160;
  ulonglong local_158;
  undefined8 *local_150;
  int local_144;
  ulonglong *local_140;
  longlong local_138;
  longlong *local_130;
  ulonglong local_128;
  longlong *local_120;
  undefined4 local_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1000000000;
    plVar1 = (longlong *)(param_1 + 0x15d0);
    local_140 = (ulonglong *)(param_1 + 0x15e0);
    local_f8 = &DAT_100000000;
    local_e8 = 0xffffffff;
    uStack_e0 = 0;
    uStack_f0 = local_140;
    if (*(int *)(param_1 + 0x15f8) == 0) {
      local_144 = 0;
    }
    else {
      FUN_1449c0562(&local_f8);
      local_144 = *(int *)(param_1 + 0x15f8);
    }
    uStack_100 = CONCAT44(uStack_dc,uStack_e0);
    local_108 = local_e8;
    uVar4 = local_108;
    local_118 = (undefined4)local_f8;
    uStack_114 = local_f8._4_4_;
    uStack_110 = (undefined4)uStack_f0;
    uStack_10c = uStack_f0._4_4_;
    local_108._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
    iVar5 = local_108._4_4_;
    local_138 = param_1;
    local_130 = plVar1;
    local_120 = plVar1;
    if ((local_108._4_4_ != local_144) || (local_108 = uVar4, uStack_f0 != local_140)) {
      do {
        local_108 = uVar4;
        local_150 = (undefined8 *)*local_120;
        puVar19 = local_150 + (longlong)iVar5 * 0xc;
        puVar12 = puVar19 + 3;
        local_158 = *puVar19;
        local_f8 = (undefined1 *)0x100000000;
        local_e8 = 0xffffffff;
        uStack_e0 = 0;
        local_160 = puVar12;
        if ((int)puVar19[6] == 0) {
          uVar16 = 0;
          uVar6 = 0;
          uVar21 = 0xffffffff;
          uVar14 = 1;
          uVar13 = 0;
        }
        else {
          uStack_f0 = puVar12;
          FUN_1449c0562(&local_f8);
          uVar13 = (ulonglong)local_f8 & 0xffffffff;
          uVar14 = (ulonglong)local_f8 >> 0x20;
          puVar12 = uStack_f0;
          uVar21 = (uint)local_e8;
          uVar6 = local_e8._4_4_;
          uVar16 = uStack_e0;
        }
        puVar17 = local_150 + (longlong)iVar5 * 0xc;
        uVar11 = *(uint *)(puVar17 + 6);
        local_f8 = (undefined1 *)CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
        uStack_f0 = local_160;
        local_e8 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
        uStack_e0 = uVar11 & 0xffffffe0;
        if (*(uint *)(puVar17 + 6) != uVar11) {
          FUN_1449c0562(&local_f8);
          uVar11 = local_e8._4_4_;
        }
        if (uVar6 != uVar11 || puVar12 != uStack_f0) {
          local_128 = local_158 >> 0x20;
          uVar18 = local_158;
          puVar19 = uStack_f0;
          do {
            uVar2 = local_50;
            iVar5 = (int)uVar13;
            lVar20 = puVar17[1] + (longlong)(int)uVar6 * 0x20;
            if ((*(int *)(puVar17[1] + (longlong)(int)uVar6 * 0x20) != (int)uVar18) ||
               (*(int *)(lVar20 + 4) != (int)local_128)) {
              uVar4 = *(undefined8 *)(*(longlong *)(lVar20 + 8) + 0xd8);
              lVar20 = (longlong)(int)local_50;
              uVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar6);
              if (local_50._4_4_ < uVar6) {
                local_160 = puVar19;
                local_150 = puVar17;
                FUN_1457a2cc6(local_d8,uVar2 & 0xffffffff);
                puVar17 = local_150;
                uVar18 = local_158;
                puVar19 = local_160;
              }
              puVar9 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar9 = local_d8;
              }
              *(undefined8 *)(puVar9 + lVar20 * 8) = uVar4;
            }
            uVar21 = uVar21 & ~(uint)uVar14;
            puVar15 = (ulonglong *)puVar12[2];
            if ((ulonglong *)puVar12[2] == (ulonglong *)0x0) {
              puVar15 = puVar12;
            }
            uVar3 = (uint)puVar12[3];
            lVar20 = (longlong)iVar5;
            uVar6 = *(uint *)((longlong)puVar15 + lVar20 * 4) & uVar21;
            if (uVar6 == 0) {
              iVar7 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar7 = uVar3 - 1;
              }
              iVar7 = iVar7 >> 5;
              uVar16 = uVar16 + 0x20;
              iVar8 = iVar7;
              if (iVar7 < iVar5) {
                iVar8 = iVar5;
              }
              if (iVar5 < iVar7) {
                lVar10 = 0;
                do {
                  uVar6 = *(uint *)((longlong)puVar15 + lVar10 * 4 + lVar20 * 4 + 4);
                  if (uVar6 != 0) {
                    uVar13 = (ulonglong)(iVar5 + (int)lVar10 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_1417e2c7d;
                  }
                  uVar16 = uVar16 + 0x20;
                  lVar10 = lVar10 + 1;
                } while (iVar8 - lVar20 != lVar10);
                uVar21 = 0xffffffff;
                iVar5 = iVar8;
              }
              uVar13 = (ulonglong)(iVar5 + 1);
              uVar18 = local_158;
              uVar6 = uVar3;
            }
            else {
LAB_1417e2c7d:
              uVar14 = (ulonglong)(-uVar6 & uVar6);
              uVar2 = uVar14 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar6 = (uVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar6) {
                uVar6 = uVar3;
              }
            }
          } while ((uVar6 != uVar11) || (puVar12 != puVar19));
        }
        if ((int)local_50 != 0) {
          local_f8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            local_f8 = local_d8;
          }
          uStack_f0 = (ulonglong *)CONCAT44(uStack_f0._4_4_,(int)local_50);
          FUN_1403cc6be(*(undefined8 *)(*(longlong *)(local_138 + 0x58) + 0x858),*puVar17);
          bVar22 = (longlong)local_50 < 0;
          local_50 = local_50 & 0xffffffff00000000;
          if (bVar22) {
            FUN_147a4fa6c(local_d8,0);
          }
        }
        local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~uStack_114);
        FUN_1449c0562(&local_118);
        iVar5 = local_108._4_4_;
        uVar4 = local_108;
      } while (local_120 != local_130 ||
               ((ulonglong *)CONCAT44(uStack_10c,uStack_110) != local_140 ||
               local_108._4_4_ != local_144));
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417e2e88 FUN_1417e2e88 body=625 status=ok
// SIG undefined FUN_1417e2e88(void)

void FUN_1417e2e88(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
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
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0);
    }
LAB_1417e2ecd:
    uVar4 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    if (uVar8 == 0) goto LAB_1417e2fbf;
    FUN_1446efa72(plVar6,0);
    if (0 < (int)uVar8) goto LAB_1417e2ecd;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar9 = (int)param_1[5];
  local_4c = 1;
  if (iVar9 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = local_48;
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar12 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar12 = iVar9 + -1;
      }
      uVar7 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar7;
      }
      local_50 = (int)uVar11 + 1;
      local_38 = (int)uVar11 * 0x20 + 0x20;
      iVar12 = 0;
      do {
        local_3c = iVar9;
        if (uVar11 == uVar7) goto LAB_1417e2f91;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar10[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
      local_50 = (int)uVar7;
      local_38 = iVar12;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar8 & uVar8;
    uVar11 = (ulonglong)local_4c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar9 <= local_3c) {
      local_3c = iVar9;
    }
  }
LAB_1417e2f91:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar9) {
    do {
      lVar3 = *local_58;
      lVar5 = (longlong)local_3c;
      uVar2 = *(undefined8 *)(lVar3 + lVar5 * 0x18);
      uVar11 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar11;
      *(int *)(lVar3 + 0x14 + lVar5 * 0x18) = iVar9;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1417e2fbf:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417e30fa FUN_1417e30fa body=425 status=ok
// SIG undefined FUN_1417e30fa(void)

void FUN_1417e30fa(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1417e32a4 FUN_1417e32a4 body=196 status=ok
// SIG undefined FUN_1417e32a4(void)

void FUN_1417e32a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_140325ea4(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_1403263ea(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_140325a06(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e336a FUN_1417e336a body=292 status=ok
// SIG undefined FUN_1417e336a(void)

void FUN_1417e336a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    plVar4 = (longlong *)FUN_140489acc();
    iVar3 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(param_1 + 0x1a8));
    if ((iVar3 != 0) &&
       (plVar4 = (longlong *)FUN_147bcd080(*(undefined8 *)(param_1 + 0xf0)),
       0 < iVar3 && plVar4 != (longlong *)0x0)) {
      iVar6 = 0;
      do {
        plVar5 = (longlong *)FUN_140489acc();
        (**(code **)(*plVar5 + 0x360))(plVar5,&local_50,*(undefined8 *)(param_1 + 0x1a8),iVar6);
        if (local_50 != 0) {
          local_60 = local_50;
          local_58 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar4 + 0x350))(plVar4,&local_60);
        }
        plVar5 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417e3490 FUN_1417e3490 body=597 status=ok
// SIG undefined FUN_1417e3490(void)

void FUN_1417e3490(longlong param_1,float param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = *(longlong **)(param_1 + 0x858);
  local_98 = plVar3 + 2;
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  local_88 = 0;
  local_a8 = param_1;
  if ((int)plVar3[5] == 0) {
    uVar13 = 1;
    local_90._0_4_ = 0xffffffff;
    local_90._4_4_ = 0;
    local_a0._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_a0);
    uVar13 = local_a0 >> 0x20;
  }
  plVar5 = local_98;
  iVar15 = (int)local_a0;
  uVar16 = (uint)local_90;
  iVar8 = local_90._4_4_;
  iVar12 = local_88;
  if (local_90._4_4_ < (int)local_98[3]) {
    do {
      lVar14 = *(longlong *)(*plVar3 + (longlong)iVar8 * 0x18);
      if ((((((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) &&
            (uVar7 = *(uint *)(lVar14 + 8), -1 < (int)uVar7)) &&
           (((int)uVar7 < DAT_14c9647dc &&
            (puVar9 = (ulonglong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
            puVar9 != (ulonglong *)0x0)))) &&
          (((int)puVar9[2] == *(int *)(lVar14 + 0xc) &&
           (((puVar9[1] & 0x10200000) == 0 && (*puVar9 != 0)))))) &&
         (local_a0 = *puVar9, cVar6 = (*(code *)*param_3)(param_3[1],&local_a0), cVar6 != '\0')) {
        dVar17 = *(double *)(*(longlong *)(local_a8 + 0x1a8) + 0x6d0);
        uVar7 = rand();
        dVar17 = (double)(((float)(uVar7 & 0x7fff) / 32767.0) * param_2) + dVar17;
        dVar18 = *(double *)(lVar14 + 0x10);
        if (dVar17 <= *(double *)(lVar14 + 0x10)) {
          dVar18 = dVar17;
        }
        *(double *)(lVar14 + 0x10) = dVar18;
      }
      uVar16 = uVar16 & ~(uint)uVar13;
      plVar10 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar10 = plVar5;
      }
      iVar2 = (int)plVar5[3];
      lVar14 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar10 + lVar14 * 4) & uVar16;
      if (uVar7 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar4 = iVar8;
        if (iVar8 < iVar15) {
          iVar4 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar14 * 4 + 4);
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar4 - lVar14 == lVar11) goto LAB_1417e3694;
        }
        iVar15 = iVar15 + (int)lVar11 + 1;
        uVar16 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar2);
  }
LAB_1417e3694:
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e36e6 FUN_1417e36e6 body=546 status=ok
// SIG undefined FUN_1417e36e6(void)

longlong * FUN_1417e36e6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar11 = *(longlong *)(param_2 + 0x98);
    param_1[1] = lVar11;
    if ((lVar11 != 0 & DAT_14c950c29) != 1) goto LAB_1417e3755;
  }
  else {
    param_1[1] = *(longlong *)(param_2 + 0x30);
    if (DAT_14c950c29 == 0) goto LAB_1417e3755;
  }
  FUN_1456cec3c();
LAB_1417e3755:
  bVar9 = DAT_14c950c29;
  lVar11 = *(longlong *)(param_2 + 0x90);
  param_1[2] = lVar11;
  if ((lVar11 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    lVar11 = param_1[2];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar1 = *(longlong **)(param_2 + 0x30);
  lVar11 = *(longlong *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    puVar10 = &DAT_14c8464e0;
    uVar12 = (undefined4)DAT_14c8464f0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
    puVar10 = (undefined8 *)(lVar11 + 0x260);
  }
  uVar6 = *(undefined4 *)((longlong)puVar10 + 4);
  uVar7 = *(undefined4 *)(puVar10 + 1);
  uVar8 = *(undefined4 *)((longlong)puVar10 + 0xc);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)puVar10;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  param_1[5] = CONCAT44(uVar13,uVar12);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x680))(plVar1,local_88);
    (**(code **)(*plVar1 + 0x718))(plVar1,param_1 + 3,local_88);
    dVar5 = (double)FUN_144719204(local_88[0],0);
    dVar4 = (double)FUN_144719204(local_80,0);
    dVar2 = sin(dVar5 * 0.017453292519943295);
    dVar5 = cos(dVar5 * 0.017453292519943295);
    dVar3 = sin(dVar4 * 0.017453292519943295);
    dVar4 = cos(dVar4 * 0.017453292519943295);
    param_1[6] = (longlong)(dVar4 * dVar5);
    param_1[7] = (longlong)(dVar3 * dVar5);
    param_1[8] = (longlong)dVar2;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e390a FUN_1417e390a body=239 status=ok
// SIG undefined FUN_1417e390a(void)

void FUN_1417e390a(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(*param_1 + 0x3c0))();
  if ((param_2 != 0) && (cVar4 == '\0')) {
    uVar1 = *(undefined1 *)(param_2 + 0x179);
    *(undefined1 *)(param_2 + 0x179) = 2;
    if ((param_1[0x35] != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
        if (*(longlong *)(lVar6 + 0x360) == param_1[0x35]) {
          if (lVar6 == 0) {
            return;
          }
          iVar2 = *(int *)(lVar6 + 0x2b8);
          if ((longlong)iVar2 == 0) {
            return;
          }
          lVar5 = *(longlong *)(lVar6 + 0x2b0);
          lVar6 = 0;
          do {
            plVar3 = *(longlong **)(lVar5 + lVar6);
            if ((plVar3 != param_1 && plVar3 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar3 + 0x440))(plVar3,param_2), cVar4 != '\0')) {
              plVar3 = *(longlong **)(lVar5 + lVar6);
              (**(code **)(*plVar3 + 0x380))(plVar3,param_2,uVar1);
            }
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar6);
          return;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 1417e39fa FUN_1417e39fa body=291 status=ok
// SIG undefined FUN_1417e39fa(void)

undefined8 FUN_1417e39fa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    uVar5 = (ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
    }
    uVar3 = (ulonglong)uVar2 << 0x20;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c998000) && (FUN_144b3d300(&DAT_14c998000), DAT_14c998000 == -1)) {
    FUN_145984cc0(&DAT_14c997f90);
    atexit((_func_5014 *)&LAB_142a64008);
    _Init_thread_footer(&DAT_14c998000);
  }
  FUN_1448ef508(&DAT_14c997f90,param_2,uVar5 | uVar3);
  return param_2;
}



// FUNCTION 1417e3b1e FUN_1417e3b1e body=20 status=ok
// SIG undefined FUN_1417e3b1e(void)

ulonglong FUN_1417e3b1e(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x3c0))();
  return uVar1 ^ 1;
}



// FUNCTION 1417e3b32 FUN_1417e3b32 body=45 status=ok
// SIG undefined FUN_1417e3b32(void)

bool FUN_1417e3b32(longlong *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x3c0))();
  return (bVar1 & (*param_4 & 1) == 0) == 0 && (*param_4 & 0x20) == 0;
}



// FUNCTION 1417e3b60 FUN_1417e3b60 body=165 status=ok
// SIG undefined FUN_1417e3b60(void)

void FUN_1417e3b60(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  int local_48;
  code *local_40;
  undefined1 *local_38;
  int local_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0xf) {
    FUN_14020496a(&local_30,param_1);
    if (iStack_2c != 0 || local_30 != 0) {
      lVar1 = FUN_1447210f0(param_1);
      if (lVar1 != 0) {
        local_38 = local_58;
        local_40 = FUN_1435a68f2;
        local_50 = param_2;
        local_48 = param_3;
        FUN_1405f17cf(DAT_14cb0d2b0,lVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e3c06 FUN_1417e3c06 body=879 status=ok
// SIG undefined FUN_1417e3c06(void)

longlong FUN_1417e3c06(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [36];
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    uVar3 = 0;
    local_a0._4_4_ = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    local_a0._4_4_ = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      local_a0._4_4_ = *(uint *)(lVar12 + 0x10);
      bVar13 = local_a0._4_4_ == 0;
      if (bVar13) {
        *(uint *)(lVar12 + 0x10) = uVar4;
        local_a0._4_4_ = 0;
      }
      UNLOCK();
      if (bVar13) {
        local_a0._4_4_ = uVar4;
      }
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar4 = local_a0._4_4_ >> 0xd ^ uVar3 - local_a0._4_4_;
  uVar8 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - local_a0._4_4_;
  uVar10 = uVar8 >> 0xd ^ (local_a0._4_4_ - uVar4) - uVar8;
  uVar7 = uVar10 >> 0xc ^ (uVar4 - uVar8) - uVar10;
  uVar4 = uVar7 << 0x10 ^ (uVar8 - uVar10) - uVar7;
  uVar8 = uVar4 >> 5 ^ (uVar10 - uVar7) - uVar4;
  uVar7 = uVar8 >> 3 ^ (uVar7 - uVar4) - uVar8;
  uVar4 = uVar7 << 10 ^ (uVar4 - uVar8) - uVar7;
  local_a0._0_4_ = uVar3;
  lVar12 = FUN_140dc7c72(param_1,uVar4 >> 0xf ^ uVar8 - (uVar7 + uVar4),&local_a0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140dc7a18(&local_98);
  if (param_3 == 0) {
    local_a0 = 0;
  }
  else {
    uVar3 = *(uint *)(param_3 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar5 = iVar9;
      }
    }
    local_a0 = CONCAT44(iVar5,uVar3);
  }
  plVar6 = (longlong *)FUN_14001cc68(0xf0);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a8bce40;
  plVar6[2] = 0;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = 0x80;
  plVar6[0x17] = 0;
  *(undefined4 *)(plVar6 + 0x18) = 0;
  memset(plVar6 + 4,0,0x88);
  *(undefined8 *)((longlong)plVar6 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0xcc) = 0;
  plVar6[0x1b] = 0;
  *(undefined4 *)(plVar6 + 0x1c) = 0;
  plVar6[0x1d] = 0;
  local_98 = plVar6 + 2;
  plStack_90 = plVar6;
  FUN_140dc8046((longlong *)(lVar12 + 8),&local_a4,&local_a0,param_4);
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)local_a4 * 0x20 + *(longlong *)(lVar12 + 8) + 8;
}



// FUNCTION 1417e3f76 FUN_1417e3f76 body=146 status=ok
// SIG undefined FUN_1417e3f76(void)

void FUN_1417e3f76(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0x2c) != 0) {
    FUN_14472eb64((longlong *)(param_2 + 0x20),0);
  }
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (0x80 < *(uint *)(param_2 + 0x4c)) {
    *(undefined4 *)(param_2 + 0x4c) = 0x80;
    FUN_1446efbd8(param_2 + 0x30,0);
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417e4008 FUN_1417e4008 body=115 status=ok
// SIG undefined FUN_1417e4008(void)

undefined8 FUN_1417e4008(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *param_2 = *(undefined4 *)(param_3 + -0x20);
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      lVar4 = *(longlong *)(param_3 + -0x10);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_3 + -0x10);
        }
      }
      *(longlong *)(param_2 + 4) = lVar4;
      param_2[6] = *(undefined4 *)(param_3 + -8);
      *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_3 + -4);
      FUN_144881636(param_2 + 8,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x1c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417e407c FUN_1417e407c body=485 status=ok
// SIG undefined FUN_1417e407c(void)

void FUN_1417e407c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x80;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x7c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar7) =
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



// FUNCTION 1417e4262 FUN_1417e4262 body=315 status=ok
// SIG undefined FUN_1417e4262(void)

undefined4 * FUN_1417e4262(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14066d2a8(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_14066d212(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
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
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14066d476(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e439e FUN_1417e439e body=594 status=ok
// SIG undefined FUN_1417e439e(void)

void FUN_1417e439e(longlong *param_1)

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
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1417e45a7;
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
LAB_1417e45a7:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e45f2 FUN_1417e45f2 body=317 status=ok
// SIG undefined FUN_1417e45f2(void)

void FUN_1417e45f2(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417e4660;
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
LAB_1417e4660:
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



// FUNCTION 1417e4730 FUN_1417e4730 body=320 status=ok
// SIG undefined FUN_1417e4730(void)

void FUN_1417e4730(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417e4799;
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
LAB_1417e4799:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1417e4870 FUN_1417e4870 body=370 status=ok
// SIG undefined FUN_1417e4870(void)

void FUN_1417e4870(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417e48f9;
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
LAB_1417e48f9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1417e49e2 FUN_1417e49e2 body=29 status=ok
// SIG undefined FUN_1417e49e2(void)

undefined8 FUN_1417e49e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417e49ff FUN_1417e49ff body=39 status=ok
// SIG undefined FUN_1417e49ff(void)

void FUN_1417e49ff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a9f0990;
  return;
}



// FUNCTION 1417e4a26 FUN_1417e4a26 body=49 status=ok
// SIG undefined FUN_1417e4a26(void)

longlong FUN_1417e4a26(void)

{
  if (DAT_14caf2a88 == 0) {
    FUN_14000fc22(&DAT_14caf2a88,&PTR_FUN_14a9f48e8);
  }
  return DAT_14caf2a88;
}



// FUNCTION 1417e4a57 FUN_1417e4a57 body=49 status=ok
// SIG undefined FUN_1417e4a57(void)

longlong FUN_1417e4a57(void)

{
  if (DAT_14caf2ac8 == 0) {
    FUN_14086a14e(&DAT_14caf2ac8,&PTR_FUN_14a9f53d0);
  }
  return DAT_14caf2ac8;
}



// FUNCTION 1417e4b24 FUN_1417e4b24 body=35 status=ok
// SIG undefined FUN_1417e4b24(void)

ulonglong FUN_1417e4b24(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1400fcfc4();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14493c216(lVar1,0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 1417e4b48 FUN_1417e4b48 body=66 status=ok
// SIG undefined FUN_1417e4b48(void)

void FUN_1417e4b48(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  FUN_1402d084a(param_1,param_2);
  FUN_140528391(param_2,param_1 + 0x3d8);
  return;
}



// FUNCTION 1417e4b8a FUN_1417e4b8a body=257 status=ok
// SIG undefined FUN_1417e4b8a(void)

void FUN_1417e4b8a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x300);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  if (*(char *)(param_1 + 0x50) == -1) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar1 + 0x40;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < 0x40) {
      FUN_1447403be(param_1 + 0x30);
    }
    iVar1 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar1 + 0x40;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < 0x40) {
      FUN_1447403be((longlong *)(param_1 + 0x40));
    }
    lVar2 = 0;
    do {
      iVar1 = rand();
      *(char *)(*(longlong *)(param_1 + 0x40) + lVar2) =
           ((char)(uint)((ulonglong)((longlong)iVar1 * 0x80808081) >> 0x27) - (char)(iVar1 >> 0x1f))
           + (char)iVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x40);
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x50) == '\0';
  }
  *(bool *)(param_1 + 0x50) = bVar3;
  lVar2 = 0;
  do {
    iVar1 = rand();
    *(char *)(*(longlong *)(param_1 + (ulonglong)bVar3 * 0x10 + 0x30) + lVar2) =
         ((char)(uint)((ulonglong)((longlong)iVar1 * 0x80808081) >> 0x27) - (char)(iVar1 >> 0x1f)) +
         (char)iVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x40);
  return;
}



// FUNCTION 1417e4c8c FUN_1417e4c8c body=40 status=ok
// SIG undefined FUN_1417e4c8c(void)

undefined8 FUN_1417e4c8c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417e4cb4 FUN_1417e4cb4 body=910 status=ok
// SIG undefined FUN_1417e4cb4(void)

void FUN_1417e4cb4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  undefined8 **ppuVar8;
  undefined1 auStack_98 [40];
  undefined8 *local_70 [4];
  undefined8 **local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
    if (DAT_14c872bf1 != '\x01') goto LAB_1417e4e2e;
    bVar6 = DAT_14c8442b8 & 1;
  }
  if (bVar6 == 0) {
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
      if (DAT_14c872bf1 != '\x01') goto LAB_1417e4e2e;
      bVar6 = DAT_14c8442b8 & 1;
    }
    if (bVar6 == 0) {
      if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
        cVar7 = FUN_1406917e6();
        if ((param_2 == 0) || (cVar7 == '\0')) goto LAB_1417e4e2e;
      }
      else if (param_2 == 0) goto LAB_1417e4e2e;
      if (DAT_14c76194c != 0) {
        puVar5 = *(undefined8 **)(param_2 + 0x38);
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
          UNLOCK();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
        plVar2 = (longlong *)(param_1 + 0x318);
        *(undefined4 *)(param_1 + 800) = 0;
        if (*(int *)(param_1 + 0x324) != 0) {
          FUN_14480809c(plVar2,0);
        }
        *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xcf;
        if (puVar5 == (undefined8 *)0x0) {
          local_50 = (undefined8 **)0x0;
          local_48 = 0x400000000;
        }
        else {
          local_50 = (undefined8 **)0x0;
          local_48 = 0x400000000;
          if ((*(byte *)(puVar5 + 0x14) & 1) == 0) {
            uVar3 = *(uint *)(param_2 + 0x48);
            if ((longlong)(int)uVar3 != 0) {
              iVar4 = *(int *)(param_1 + 800);
              *(uint *)(param_1 + 800) = uVar3 + iVar4;
              if ((uint)(*(int *)(param_1 + 0x324) - iVar4) < uVar3) {
                FUN_1447808da(plVar2,iVar4);
              }
              memcpy((void *)((longlong)iVar4 * 4 + *plVar2),*(void **)(param_2 + 0x40),
                     (longlong)(int)uVar3 << 2);
            }
            local_48 = CONCAT44(local_48._4_4_,1);
            LOCK();
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            UNLOCK();
            local_70[0] = puVar5;
          }
        }
        FUN_1401a0c3e(param_1,local_70);
        *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
        ppuVar8 = local_50;
        if (local_50 == (undefined8 **)0x0) {
          ppuVar8 = local_70;
        }
        FUN_144717c65(ppuVar8,local_48 & 0xffffffff);
        if (local_50 != (undefined8 **)0x0) {
          FUN_1400020a8();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
    }
  }
LAB_1417e4e2e:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417e5043 FUN_1417e5043 body=38 status=ok
// SIG undefined FUN_1417e5043(void)

void FUN_1417e5043(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144760f98(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1417e5069 FUN_1417e5069 body=49 status=ok
// SIG undefined FUN_1417e5069(void)

longlong FUN_1417e5069(void)

{
  if (DAT_14caf64c0 == 0) {
    FUN_14073dd9a(&DAT_14caf64c0,&PTR_LAB_14aa0a860);
  }
  return DAT_14caf64c0;
}



// FUNCTION 1417e50b4 FUN_1417e50b4 body=590 status=ok
// SIG undefined FUN_1417e50b4(void)

undefined4 * FUN_1417e50b4(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  dVar10 = (double)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  plVar16 = *(longlong **)(param_1 + 0x3c0);
  local_50 = dVar10;
  if (plVar16 == (longlong *)0x0) {
    uVar18 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      lVar17 = param_1;
      lVar11 = FUN_1447210f0();
      uVar18 = (undefined4)lVar17;
      dVar10 = (double)(ulonglong)*(uint *)(lVar11 + 0x238);
      if (0 < (int)*(uint *)(lVar11 + 0x238)) {
        lVar17 = 0;
        do {
          uVar14 = *(uint *)(*(longlong *)(lVar11 + 0x230) + 4 + lVar17 * 8);
          uVar15 = (ulonglong)uVar14;
          if (((((uVar14 != 0) &&
                (uVar1 = *(uint *)(*(longlong *)(lVar11 + 0x230) + lVar17 * 8), -1 < (int)uVar1)) &&
               ((int)uVar1 < DAT_14c9647dc)) &&
              ((plVar16 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar16 != (longlong *)0x0 && (*(uint *)(plVar16 + 2) == uVar14)))) &&
             ((uVar15 = (ulonglong)*(uint *)(plVar16 + 1),
              (*(uint *)(plVar16 + 1) & 0x10200000) == 0 &&
              ((lVar2 = *plVar16, lVar2 != 0 &&
               (uVar15 = *(ulonglong *)(lVar2 + 0x448), uVar15 != 0)))))) {
            lVar12 = FUN_14024ef60();
            if (lVar12 == param_1) {
              *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar2 + 0x488);
              uVar18 = *(undefined4 *)(lVar2 + 0x478);
              uVar19 = *(undefined4 *)(lVar2 + 0x47c);
              uVar20 = *(undefined4 *)(lVar2 + 0x480);
              uVar21 = *(undefined4 *)(lVar2 + 0x484);
              goto LAB_1417e5193;
            }
            dVar10 = (double)(ulonglong)*(uint *)(lVar11 + 0x238);
          }
          uVar18 = (undefined4)uVar15;
          lVar17 = lVar17 + 1;
        } while ((int)lVar17 < SUB84(dVar10,0));
      }
    }
    lVar17 = *(longlong *)(param_1 + 0x1c8);
    if (lVar17 == 0) {
      *(double *)(param_2 + 4) = DAT_14c846508;
      uVar20 = DAT_14c846500._4_4_;
      uVar19 = (undefined4)DAT_14c846500;
      uVar18 = DAT_14c8464f8._4_4_;
      *param_2 = (undefined4)DAT_14c8464f8;
      param_2[1] = uVar18;
      param_2[2] = uVar19;
      param_2[3] = uVar20;
      if (((ulonglong)local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    dVar5 = *(double *)(lVar17 + 0x240);
    dVar6 = *(double *)(lVar17 + 0x248);
    dVar7 = *(double *)(lVar17 + 0x250);
    dVar8 = *(double *)(lVar17 + 600);
    pdVar13 = *(double **)(lVar17 + 0x228);
    local_88 = dVar5;
    uStack_80 = dVar6;
    local_78 = dVar7;
    uStack_70 = dVar8;
    if (pdVar13 == (double *)0x0) {
      uVar18 = 0x40;
      pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar13[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar13[6] = DAT_14c846508;
      *(double **)(lVar17 + 0x228) = pdVar13;
    }
    auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar13[1]);
    auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar13);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar13[1]) >> 0x20);
    iVar9 = movmskpd(SUB84(dVar10,0),auVar3);
    auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar13[3]);
    auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar13[2]);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar13[3]) >> 0x20);
    uVar14 = movmskpd(uVar18,auVar4);
    if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
      *(undefined4 *)(pdVar13 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar13 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar13 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar13 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar13[6] = local_58;
      pdVar13[4] = local_68;
      pdVar13[5] = dStack_60;
    }
    *(double *)(param_2 + 4) = pdVar13[6];
    uVar18 = *(undefined4 *)(pdVar13 + 4);
    uVar19 = *(undefined4 *)((longlong)pdVar13 + 0x24);
    uVar20 = *(undefined4 *)(pdVar13 + 5);
    uVar21 = *(undefined4 *)((longlong)pdVar13 + 0x2c);
LAB_1417e5193:
    *param_2 = uVar18;
    param_2[1] = uVar19;
    param_2[2] = uVar20;
    param_2[3] = uVar21;
  }
  else {
    (**(code **)(*plVar16 + 0x680))(plVar16,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((ulonglong)local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1417e5304 FUN_1417e5304 body=45 status=ok
// SIG undefined FUN_1417e5304(void)

void FUN_1417e5304(longlong *param_1,char param_2)

{
  longlong *plVar1;
  
  if (param_2 == '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x638))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417e5324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x570))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1417e5331 FUN_1417e5331 body=49 status=ok
// SIG undefined FUN_1417e5331(void)

longlong FUN_1417e5331(void)

{
  if (DAT_14caf66b0 == 0) {
    FUN_14086a14e(&DAT_14caf66b0,&PTR_FUN_14aa0e128);
  }
  return DAT_14caf66b0;
}



// FUNCTION 1417e5362 FUN_1417e5362 body=13 status=ok
// SIG undefined FUN_1417e5362(void)

void FUN_1417e5362(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  FUN_14034b25c();
  return;
}



// FUNCTION 1417e5370 FUN_1417e5370 body=115 status=ok
// SIG undefined FUN_1417e5370(void)

void FUN_1417e5370(longlong param_1,char param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  char *local_38;
  code *local_30;
  longlong *local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_19 = param_2;
  if (*(char *)(param_1 + 0x16) != param_2) {
    local_28 = &local_40;
    local_38 = &local_19;
    local_30 = FUN_14361ad2e;
    local_40 = param_1;
    FUN_144966906(param_1 + 0x138);
    *(char *)(param_1 + 0x16) = local_19;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e53e4 FUN_1417e53e4 body=910 status=ok
// SIG undefined FUN_1417e53e4(void)

void FUN_1417e53e4(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  byte *pbVar6;
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
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar4 = DAT_14caf84d0;
  lVar3 = DAT_14caf84d0[0x22];
  if (lVar3 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar3 = plVar4[0x22];
  }
  if (*(char *)(lVar3 + 0x164) != '\x01') goto LAB_1417e556c;
  iVar5 = *(int *)(param_1 + 0x144);
  if (iVar5 == 0) {
LAB_1417e553e:
    pbVar6 = (byte *)(param_1 + 0x17);
LAB_1417e5542:
    uVar1 = (uint)*pbVar6;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x140);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_1417e54b6:
      uVar1 = *(uint *)(param_1 + 0x140);
      if ((((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
           (plVar4 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar4 == (longlong *)0x0)) ||
          (((int)plVar4[2] != iVar5 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) ||
         (lVar3 = *plVar4, lVar3 == 0)) goto LAB_1417e553e;
      if ((*(longlong *)(lVar3 + 0xa8) != 0) &&
         ((*(byte *)(*(longlong *)(lVar3 + 0xa8) + 0x65) & 1) == 0)) {
        uVar1 = 0;
        goto LAB_1417e5545;
      }
      if (DAT_14cad2858 == 0) {
        local_40 = &local_20;
        local_20 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
      goto LAB_1417e553e;
      pbVar6 = (byte *)(lVar3 + 0x427);
      goto LAB_1417e5542;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar2 == (undefined8 *)0x0) ||
       ((*(int *)(puVar2 + 2) != iVar5 || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0))))
    goto LAB_1417e54b6;
    if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
      plVar4 = (longlong *)*puVar2;
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    lVar3 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
    iVar5 = *(int *)(param_1 + 0x144);
    if (lVar3 == param_1) {
      if (iVar5 == 0) goto LAB_1417e553e;
      goto LAB_1417e54b6;
    }
    if (iVar5 == 0) {
LAB_1417e55ee:
      plVar4 = (longlong *)0x0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x140);
      plVar4 = (longlong *)0x0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar2 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar2 == (undefined8 *)0x0) ||
           ((*(int *)(puVar2 + 2) != iVar5 || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0))))
        goto LAB_1417e55ee;
        plVar4 = (longlong *)*puVar2;
      }
    }
    uVar1 = (**(code **)(*plVar4 + 0x570))();
  }
LAB_1417e5545:
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xdf | ((uVar1 & 0xfffffffe) == 2) << 5;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1417e53e4();
    *(byte *)(param_1 + 0x3d) =
         *(byte *)(param_1 + 0x3d) | *(byte *)(*(longlong *)(param_1 + 0x108) + 0x3d) & 0x20;
  }
LAB_1417e556c:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5774 FUN_1417e5774 body=97 status=ok
// SIG undefined FUN_1417e5774(void)

undefined1 FUN_1417e5774(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_11;
  local_11 = 0;
  local_20 = &local_30;
  local_28 = &LAB_143622136;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e57d6 FUN_1417e57d6 body=120 status=ok
// SIG undefined FUN_1417e57d6(void)

undefined8 * FUN_1417e57d6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = &local_38;
  local_30 = FUN_14362045c;
  local_38 = param_2;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5850 FUN_1417e5850 body=114 status=ok
// SIG undefined FUN_1417e5850(void)

undefined4 * FUN_1417e5850(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined1 *local_20;
  undefined4 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_18 = &local_28;
  local_20 = &LAB_143620548;
  local_28 = param_2;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e58c4 FUN_1417e58c4 body=111 status=ok
// SIG undefined FUN_1417e58c4(void)

undefined8 * FUN_1417e58c4(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  local_18 = &local_28;
  local_20 = FUN_1436205a2;
  local_28 = param_2;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5934 FUN_1417e5934 body=82 status=ok
// SIG undefined FUN_1417e5934(void)

void FUN_1417e5934(longlong param_1)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = &LAB_14362218a;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5988 FUN_1417e5988 body=97 status=ok
// SIG undefined FUN_1417e5988(void)

void FUN_1417e5988(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 *local_28;
  code *local_20;
  undefined8 *local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_9;
  local_18 = &local_30;
  local_20 = FUN_14362224a;
  local_30 = param_2;
  local_9 = param_3;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e59ea FUN_1417e59ea body=97 status=ok
// SIG undefined FUN_1417e59ea(void)

void FUN_1417e59ea(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 *local_28;
  code *local_20;
  undefined8 *local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_9;
  local_18 = &local_30;
  local_20 = FUN_143622336;
  local_30 = param_2;
  local_9 = param_3;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5a4c FUN_1417e5a4c body=97 status=ok
// SIG undefined FUN_1417e5a4c(void)

undefined1 FUN_1417e5a4c(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_11;
  local_11 = 0;
  local_20 = &local_30;
  local_28 = &LAB_143622f9e;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5aae FUN_1417e5aae body=143 status=ok
// SIG undefined FUN_1417e5aae(void)

void FUN_1417e5aae(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined8 *local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = &local_9;
  local_9 = param_6;
  local_40 = &local_10;
  local_48 = &local_14;
  local_20 = &local_50;
  local_38 = (undefined1 *)&param_5;
  local_28 = FUN_143622fc2;
  local_50 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5b44 FUN_1417e5b44 body=112 status=ok
// SIG undefined FUN_1417e5b44(void)

void FUN_1417e5b44(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401841e8();
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0xe8) = local_28.Data1;
  *(undefined4 *)(param_1 + 0xec) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0xf0) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0xf4) = local_28.Data4._4_4_;
  if ((*(byte *)(param_1 + 0xb8) & 0x20) == 0) {
    FUN_1400d7c38(param_1 + 0xd8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5bb6 FUN_1417e5bb6 body=30 status=ok
// SIG undefined FUN_1417e5bb6(void)

void FUN_1417e5bb6(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_1401842de(param_1 + 0x38);
  return;
}



// FUNCTION 1417e5bd4 FUN_1417e5bd4 body=631 status=ok
// SIG undefined FUN_1417e5bd4(void)

undefined8 * FUN_1417e5bd4(longlong param_1,undefined8 *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0 [24];
  float local_a8;
  undefined1 local_a4 [4];
  ulonglong local_a0;
  double dVar5;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar15 = param_4[8];
  dVar16 = param_4[9];
  dVar8 = param_4[10];
  dVar1 = param_3[2];
  local_c8 = dVar1 * dVar8;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d0 = param_4[9] * dVar3;
  local_d8 = dVar15 * dVar2;
  FUN_140493462(&local_d8,local_a4,&local_a8,local_c0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xfe | *(byte *)(param_1 + 0x18) & 1;
  *(undefined1 *)((longlong)param_2 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  *(undefined4 *)(param_2 + 4) = 6;
  param_2[5] = param_2;
  *param_2 = &PTR_FUN_14a418310;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((longlong)param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((longlong)param_2 + 0x44) = uVar14;
  param_2[6] = uVar12;
  param_2[7] = uVar13;
  *(float *)(param_2 + 9) = local_a8 * *(float *)(param_2 + 9);
  dVar15 = *(double *)(param_1 + 0x30) * dVar15;
  dVar16 = *(double *)(param_1 + 0x38) * dVar16;
  dVar8 = *(double *)(param_1 + 0x40) * dVar8;
  dVar9 = *param_4;
  dVar10 = param_4[1];
  dVar11 = param_4[2];
  dVar4 = param_4[3];
  dVar5 = param_4[3];
  dVar17 = dVar16 * dVar9 - dVar15 * dVar10;
  dVar18 = dVar8 * dVar10 - dVar16 * dVar11;
  dVar19 = dVar15 * dVar11 - dVar9 * dVar8;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar17 = dVar17 + dVar17;
  dVar7 = param_4[5];
  dVar6 = param_4[6];
  param_2[6] = dVar2 * ((dVar17 * dVar10 - dVar19 * dVar11) + dVar4 * dVar18 + dVar15 + param_4[4]);
  param_2[7] = ((dVar11 * dVar18 - dVar9 * dVar17) + dVar5 * dVar19 + dVar16 + dVar7) * dVar3;
  param_2[8] = (dVar17 * dVar4 + dVar8 + (dVar19 * dVar9 - dVar18 * dVar10) + dVar6) * dVar1;
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e5e4c FUN_1417e5e4c body=3059 status=ok
// SIG undefined FUN_1417e5e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1417e5e4c(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16],double *param_4)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 extraout_EAX;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  double *pdVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_348 [40];
  double local_320;
  double local_318;
  double dStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xfe | *(byte *)(param_1 + 0x18) & 1;
  *(undefined1 *)((longlong)param_2 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  *(undefined4 *)(param_2 + 4) = 6;
  param_2[5] = param_2;
  *param_2 = &PTR_FUN_14a1dee70;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[7] = uVar7;
  param_2[8] = uVar8;
  param_2[9] = uVar9;
  param_2[10] = uVar10;
  param_2[0xb] = uVar11;
  local_320 = *(double *)param_3[1];
  local_2b0 = param_4[10] * local_320;
  local_2b8 = param_4[9] * *(double *)(*param_3 + 8);
  local_2c0 = param_4[8] * *(double *)*param_3;
  auVar41 = *param_3;
  dVar24 = auVar41._0_8_;
  dVar26 = auVar41._8_8_;
  local_2f8 = *(double *)param_3[1];
  uStack_2f0 = 0;
  pdVar16 = &local_2c0;
  FUN_140493462(pdVar16,local_28c,local_290,&local_2a8);
  uVar14 = SUB84(pdVar16,0);
  dVar18 = ABS(local_2a8);
  if (ABS(local_2a8) <= ABS(local_2a0)) {
    dVar18 = ABS(local_2a0);
  }
  fVar1 = *(float *)(param_1 + 0x60);
  fVar23 = (float)((double)(fVar1 + fVar1 + *(float *)(param_1 + 100)) * ABS(local_298) * 0.5);
  if (fVar23 <= 0.1) {
    fVar23 = 0.1;
  }
  fVar3 = (float)dVar18 * fVar1;
  if (fVar23 <= (float)dVar18 * fVar1) {
    fVar3 = fVar23;
  }
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  *(float *)(param_2 + 0xc) = fVar3;
  fVar23 = (fVar23 - fVar3) + (fVar23 - fVar3);
  fVar1 = 0.1;
  if (0.1 <= fVar23) {
    fVar1 = fVar23;
  }
  *(float *)((longlong)param_2 + 100) = fVar1;
  dVar48 = DAT_14c8463d8;
  dVar47 = DAT_14c8463d0;
  local_318 = DAT_14c8463e0;
  dStack_310 = DAT_14c8463e8;
  local_2d8 = DAT_14c8464f0;
  uStack_2d0 = 0;
  local_2e8 = DAT_14c8464e8;
  uStack_2e0 = 0;
  local_308 = DAT_14c8464e0;
  uStack_300 = DAT_14c8464e8;
  auVar25 = divpd(*(undefined1 (*) [16])(param_2 + 9),_DAT_1499387d0);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[0xb];
  auVar27 = divpd(auVar27,_DAT_1499387d0);
  auVar25 = roundpd(auVar25,auVar25,3);
  auVar27 = roundpd(auVar27,auVar27,3);
  dVar33 = (*(double *)*(undefined1 (*) [16])(param_2 + 9) - auVar25._0_8_ * (double)DAT_1499387d0)
           * 0.008726646259971648;
  dVar35 = ((double)param_2[10] - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar37 = ((double)param_2[0xb] - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar39 = (0.0 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar18 = sin(dVar33);
  dVar19 = sin(dVar35);
  dVar20 = sin(dVar37);
  sin(dVar39);
  dVar33 = cos(dVar33);
  dVar35 = cos(dVar35);
  dVar37 = cos(dVar37);
  cos(dVar39);
  dVar34 = -(dVar35 * dVar18 * dVar20) + dVar19 * dVar33 * dVar37;
  dVar36 = dVar19 * dVar18 * dVar20 + dVar35 * dVar33 * dVar37;
  dVar39 = dVar18 * dVar19 * dVar37 - dVar33 * dVar35 * dVar20;
  dVar37 = -(dVar18 * dVar35 * dVar37) - dVar33 * dVar19 * dVar20;
  dVar18 = *(double *)param_3[1];
  dVar33 = *(double *)*param_3;
  dVar35 = *(double *)(*param_3 + 8);
  dVar19 = *(double *)(*param_3 + 8);
  dVar20 = *(double *)param_3[1];
  auVar25 = minpd(*param_3,auVar41);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = dVar20;
  auVar41._8_8_ = uStack_2f0;
  auVar41._0_8_ = local_2f8;
  auVar41 = minpd(auVar40,auVar41);
  auVar32._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar13 = movmskpd(extraout_EAX,auVar32);
  auVar25._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
  uVar15 = movmskpd(uVar14,auVar25);
  if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
    dVar24 = dVar37 * local_318 * -1.0 +
             dVar34 * dVar48 + dVar47 * dVar36 * 1.0 + dStack_310 * dVar39;
    dVar26 = dVar39 * local_318 * 1.0 +
             dVar36 * dVar48 + dVar47 * dVar34 * -1.0 + dStack_310 * dVar37;
    auVar38._0_8_ =
         dVar36 * local_318 * 1.0 +
         ((dVar47 * dVar37 * 1.0 + dStack_310 * dVar34) - dVar48 * dVar39);
    auVar38._8_8_ =
         dVar34 * local_318 * -1.0 +
         ((dVar47 * dVar39 * -1.0 + dStack_310 * dVar36) - dVar48 * dVar37);
  }
  else {
    uStack_300 = local_2e8;
    local_320 = local_320 * dVar18;
    dVar28 = dVar48 + dVar48;
    dVar43 = local_318 + local_318;
    dVar18 = dVar47 * (dVar47 + dVar47);
    dVar45 = (dVar47 + dVar47) * dStack_310;
    local_198 = (1.0 - (dVar18 + dVar48 * dVar28)) * local_2f8;
    local_1c8 = (dVar28 * dVar47 - dVar43 * dStack_310) * dVar26;
    dVar35 = (dVar43 * dVar48 - dVar45) * local_2f8;
    local_1e8 = (1.0 - (local_318 * dVar43 + dVar48 * dVar28)) * dVar24;
    dStack_1c0 = (1.0 - (local_318 * dVar43 + dVar18)) * dVar26;
    dStack_1e0 = (dVar28 * dVar47 + dVar43 * dStack_310) * dVar24;
    local_1b8 = (dVar43 * dVar48 + dVar45) * dVar26;
    local_1d8 = (dVar47 * dVar43 - dVar28 * dStack_310) * dVar24;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar35,0);
    local_1a8._0_8_ = (dVar28 * dStack_310 + dVar47 * dVar43) * local_2f8;
    local_1a8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uStack_190 = 0;
    auVar12._8_8_ = uStack_2d0;
    auVar12._0_8_ = local_2d8;
    local_178 = blendps(auVar12,_DAT_149935300,0xc);
    local_188 = local_308;
    uStack_180 = local_2e8;
    dVar35 = dVar37 + dVar37;
    dVar47 = dVar34 + dVar34;
    dVar18 = dVar39 * (dVar39 + dVar39);
    local_218 = (1.0 - (dVar18 + dVar37 * dVar35)) * dVar20;
    dVar48 = (dVar39 + dVar39) * dVar36;
    local_228 = (dVar35 * dVar36 + dVar39 * dVar47) * dVar20;
    local_248 = (dVar35 * dVar39 - dVar47 * dVar36) * dVar19;
    dStack_220 = (dVar47 * dVar37 - dVar48) * dVar20;
    local_318 = dVar24 * dVar33;
    dStack_310 = dVar26 * dVar19;
    local_268 = (1.0 - (dVar34 * dVar47 + dVar37 * dVar35)) * dVar33;
    dStack_240 = (1.0 - (dVar34 * dVar47 + dVar18)) * dVar19;
    dStack_260 = (dVar35 * dVar39 + dVar47 * dVar36) * dVar33;
    local_238 = (dVar47 * dVar37 + dVar48) * dVar19;
    local_258 = (dVar39 * dVar47 - dVar35 * dVar36) * dVar33;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = DAT_14c8464e0;
    uStack_200 = DAT_14c8464e8;
    uStack_1f0 = DAT_149935300._8_8_;
    local_1f8 = DAT_14c8464f0;
    FUN_1447fea8d(&local_168);
    auVar41 = _DAT_149934d80;
    local_2f8 = local_158;
    dVar26 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
    dVar18 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    dVar24 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    uVar17 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar17);
    uVar17 = -(ulonglong)(0.0 <= dVar18 + -9.99999993922529e-09);
    dVar18 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar18)) & uVar17);
    uVar17 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
    dVar19 = (double)(~uVar17 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar17);
    auVar21._8_8_ = -(ulonglong)(0.0 <= dStack_310);
    auVar21._0_8_ = -(ulonglong)(0.0 <= local_318);
    auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
    dVar24 = (double)(~-(ulonglong)(0.0 <= local_320) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_320) & 0x3ff0000000000000);
    dVar20 = auVar25._0_8_;
    local_168 = local_168 * dVar26 * dVar20;
    dStack_160 = dStack_160 * dVar26 * dVar20;
    local_158 = dVar26 * local_158 * dVar20;
    dVar26 = auVar25._8_8_;
    local_138 = dVar18 * local_138 * dVar26;
    local_140 = local_140 * dVar18 * dVar26;
    local_148 = dVar26 * local_148 * dVar18;
    local_118 = dVar19 * local_118 * dVar24;
    local_120 = local_120 * dVar19 * dVar24;
    local_128 = dVar24 * local_128 * dVar19;
    FUN_14481fd10(&local_288,&local_168);
    dVar24 = local_278 * local_278 + local_288 * local_288;
    dVar26 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar29._0_8_ = dVar24 + dVar26;
    auVar29._8_8_ = dVar24 + dVar26;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar25 = sqrtpd(auVar29,auVar29);
    auVar41 = divpd(auVar41,auVar25);
    auVar30._0_8_ = auVar41._0_8_ * local_278;
    auVar30._8_8_ = auVar41._8_8_ * dStack_270;
    auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar22);
    dVar24 = (double)((ulonglong)(local_288 * auVar41._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
    dVar26 = (double)((ulonglong)(dStack_280 * auVar41._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
    dVar18 = *(double *)param_3[1];
    dVar33 = *(double *)*param_3;
    dVar35 = *(double *)(*param_3 + 8);
  }
  dVar45 = *(double *)(param_1 + 0x30) * param_4[8];
  dVar2 = *(double *)(param_1 + 0x38) * param_4[9];
  dVar31 = *(double *)(param_1 + 0x40) * param_4[10];
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar6 = param_4[2];
  dVar19 = param_4[3];
  dVar20 = param_4[3];
  dVar42 = dVar2 * dVar4 - dVar45 * dVar5;
  dVar44 = dVar31 * dVar5 - dVar2 * dVar6;
  dVar46 = dVar45 * dVar6 - dVar4 * dVar31;
  dVar44 = dVar44 + dVar44;
  dVar46 = dVar46 + dVar46;
  dVar42 = dVar42 + dVar42;
  dVar43 = param_4[5];
  dVar47 = param_4[6];
  dVar48 = *param_4;
  dVar37 = *param_4;
  dVar34 = param_4[1];
  dVar39 = param_4[1];
  dVar28 = param_4[2];
  dVar36 = param_4[2];
  param_2[6] = dVar33 * ((dVar42 * dVar5 - dVar46 * dVar6) + dVar19 * dVar44 + dVar45 + param_4[4]);
  param_2[7] = ((dVar6 * dVar44 - dVar4 * dVar42) + dVar20 * dVar46 + dVar2 + dVar43) * dVar35;
  param_2[8] = (dVar42 * dVar19 + dVar31 + (dVar46 * dVar4 - dVar44 * dVar5) + dVar47) * dVar18;
  dVar18 = auVar38._0_8_;
  dVar33 = auVar38._8_8_;
  local_168 = dVar26 * dVar28 * -1.0 + dVar18 * dVar34 + dVar33 * dVar48 * 1.0 + dVar24 * dVar19;
  dStack_160 = dVar24 * dVar36 * 1.0 + dVar33 * dVar39 + dVar18 * dVar37 * -1.0 + dVar26 * dVar20;
  local_158 = dVar33 * dVar28 * 1.0 + ((dVar48 * dVar26 * 1.0 + dVar19 * dVar18) - dVar24 * dVar34);
  dStack_150 = dVar18 * dVar36 * -1.0 +
               ((dVar37 * dVar24 * -1.0 + dVar20 * dVar33) - dVar26 * dVar39);
  FUN_1448052ee(&local_168,&local_1e8);
  param_2[0xb] = local_1d8;
  param_2[9] = local_1e8;
  param_2[10] = dStack_1e0;
  if ((local_e0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e6a40 FUN_1417e6a40 body=49 status=ok
// SIG undefined FUN_1417e6a40(void)

longlong FUN_1417e6a40(void)

{
  if (DAT_14caf6b60 == 0) {
    FUN_14086a14e(&DAT_14caf6b60,&PTR_FUN_14aa15c30);
  }
  return DAT_14caf6b60;
}



// FUNCTION 1417e6a71 FUN_1417e6a71 body=49 status=ok
// SIG undefined FUN_1417e6a71(void)

longlong FUN_1417e6a71(void)

{
  if (DAT_14caf6dc0 == 0) {
    FUN_14073dd9a(&DAT_14caf6dc0,&PTR_LAB_14aa1b240);
  }
  return DAT_14caf6dc0;
}



// FUNCTION 1417e6aa2 FUN_1417e6aa2 body=1319 status=ok
// SIG undefined FUN_1417e6aa2(void)

undefined8 FUN_1417e6aa2(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (ulonglong *)param_2[1];
  if (puVar3[1] < *puVar3 + 4) {
    local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_3 + 0x10),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x10) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar1 = (longlong *)(param_3 + 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_3 + 0x20) << 4,(longlong)*(int *)(param_3 + 0x24) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_3 + 0x40) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_3 + 0x44) + 0x1fU >> 3 & 0xfffffffc);
  uVar8 = local_58._4_4_;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_5c = *(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x4c);
    puVar3 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
      }
      else {
        FUN_14572512c(param_2,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
    local_50 = param_3 + 0x28;
    local_58 = (undefined8 *)&DAT_100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (*(int *)(param_3 + 0x40) != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_58;
    local_78 = local_50;
    local_70 = local_48;
    uVar7 = local_70;
    local_68 = local_40;
    local_64 = local_3c;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_88 = plVar1;
    if (local_70._4_4_ < *(int *)(local_50 + 0x18)) {
      iVar11 = local_70._4_4_;
      do {
        local_70 = uVar7;
        puVar12 = (undefined4 *)((longlong)iVar11 * 0x10 + *local_88);
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar12,4);
          }
          else {
            FUN_14572512c(param_2,puVar12);
          }
        }
        else {
          *puVar12 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar12 = puVar12 + 1;
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar12,4);
          }
          else {
            FUN_14572512c(param_2,puVar12);
          }
        }
        else {
          *puVar12 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        uVar7 = local_70;
        iVar11 = local_70._4_4_;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  else {
    local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        FUN_14572512c(param_2,&local_58);
      }
      iVar11 = (int)local_58;
    }
    else {
      iVar11 = *(int *)*puVar3;
      local_58 = (undefined8 *)CONCAT44(uVar8,iVar11);
      *puVar3 = (ulonglong)piVar2;
    }
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (*(int *)(param_3 + 0x24) != iVar11) {
      FUN_14472eb64(plVar1,iVar11);
    }
    *(undefined8 *)(param_3 + 0x48) = 0xffffffff;
    uVar8 = iVar11 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_3 + 0x40) = 0;
    if ((*(int *)(param_3 + 0x44) < (int)uVar8) || (0x80 < *(int *)(param_3 + 0x44))) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar9 = uVar8;
      }
      *(uint *)(param_3 + 0x44) = uVar9;
      FUN_1446efbd8(param_3 + 0x28,0);
    }
    uVar7 = local_70;
    if (0 < (int)local_58) {
      iVar11 = 0;
      do {
        FUN_1405dc782(plVar1,&local_88);
        puVar6 = local_80;
        *local_80 = 0;
        *(undefined4 *)(local_80 + 1) = 0xffffffff;
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_80,4);
          }
          else {
            FUN_14572512c(param_2,local_80);
          }
        }
        else {
          *(undefined4 *)local_80 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar12 = (undefined4 *)((longlong)puVar6 + 4);
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar12,4);
          }
          else {
            FUN_14572512c(param_2,puVar12);
          }
        }
        else {
          *puVar12 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        iVar11 = iVar11 + 1;
        uVar7 = local_70;
      } while (iVar11 < (int)local_58);
    }
  }
  local_70 = uVar7;
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) == 0 && ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_3 + 0x58) != 0) {
      FUN_1446efa72(param_3 + 0x58,0,0,4);
    }
    *(undefined4 *)(param_3 + 0x60) = 0;
    uVar8 = *(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x4c);
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((0 < (int)uVar8) && (0 < iVar11)) {
      *(int *)(param_3 + 0x60) = iVar11;
      FUN_140264164(plVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1417e6fca FUN_1417e6fca body=1207 status=ok
// SIG undefined FUN_1417e6fca(void)

undefined8 FUN_1417e6fca(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (ulonglong *)param_2[1];
  if (puVar3[1] < *puVar3 + 4) {
    local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_3 + 0x10),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x10) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar1 = (longlong *)(param_3 + 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_3 + 0x20) << 4,(longlong)*(int *)(param_3 + 0x24) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_3 + 0x40) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_3 + 0x44) + 0x1fU >> 3 & 0xfffffffc);
  uVar8 = local_58._4_4_;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_5c = *(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x4c);
    puVar3 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
      }
      else {
        FUN_14572512c(param_2,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
    local_50 = param_3 + 0x28;
    local_58 = (undefined8 *)&DAT_100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (*(int *)(param_3 + 0x40) != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_58;
    local_78 = local_50;
    local_70 = local_48;
    uVar7 = local_70;
    local_68 = local_40;
    local_64 = local_3c;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_88 = plVar1;
    if (local_70._4_4_ < *(int *)(local_50 + 0x18)) {
      iVar10 = local_70._4_4_;
      do {
        local_70 = uVar7;
        puVar11 = (undefined4 *)((longlong)iVar10 * 0x10 + *local_88);
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar11,4);
          }
          else {
            FUN_14572512c(param_2,puVar11);
          }
        }
        else {
          *puVar11 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar11 = puVar11 + 1;
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar11,4);
          }
          else {
            FUN_14572512c(param_2,puVar11);
          }
        }
        else {
          *puVar11 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        uVar7 = local_70;
        iVar10 = local_70._4_4_;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  else {
    local_58 = (undefined8 *)((ulonglong)local_58._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_2[1];
    puVar4 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = (undefined8 *)CONCAT44(uVar8,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar4;
    }
    FUN_1407b13ba(plVar1,(ulonglong)local_58 & 0xffffffff);
    uVar7 = local_70;
    if (0 < (int)local_58) {
      iVar10 = 0;
      do {
        FUN_140ad3aa0(plVar1,&local_88);
        puVar6 = local_80;
        *local_80 = 0;
        *(undefined4 *)(local_80 + 1) = 0xffffffff;
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_80,4);
          }
          else {
            FUN_14572512c(param_2,local_80);
          }
        }
        else {
          *(undefined4 *)local_80 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar11 = (undefined4 *)((longlong)puVar6 + 4);
        puVar4 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar11,4);
          }
          else {
            FUN_14572512c(param_2,puVar11);
          }
        }
        else {
          *puVar11 = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        iVar10 = iVar10 + 1;
        uVar7 = local_70;
      } while (iVar10 < (int)local_58);
    }
  }
  local_70 = uVar7;
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((*(byte *)(param_2 + 5) & 4) == 0 && ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_3 + 0x58) != 0) {
      FUN_1446efa72(param_3 + 0x58,0,0,4);
    }
    *(undefined4 *)(param_3 + 0x60) = 0;
    uVar8 = *(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x4c);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((0 < (int)uVar8) && (0 < iVar10)) {
      *(int *)(param_3 + 0x60) = iVar10;
      FUN_140ad3d14(plVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1417e7482 FUN_1417e7482 body=147 status=ok
// SIG undefined FUN_1417e7482(void)

undefined8 FUN_1417e7482(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_2 + 0x20);
    do {
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar7 = *(undefined4 *)(param_3 + 3);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined4 *)(puVar9 + -2) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar6;
      *(undefined4 *)(puVar9 + -1) = uVar7;
      *(undefined4 *)((longlong)puVar9 + -4) = uVar8;
      *(undefined4 *)(puVar9 + -4) = uVar2;
      *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar3;
      *(undefined4 *)(puVar9 + -3) = uVar4;
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar5;
      if (puVar9 + -4 != param_3) {
        iVar1 = *(int *)(param_3 + 5);
        _Src = (void *)param_3[4];
        *(int *)(puVar9 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar9 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        }
        else {
          FUN_1447ce8be(puVar9,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar9,_Src,(longlong)iVar1 * 0xc);
          }
        }
      }
      param_3 = param_3 + 6;
      puVar9 = puVar9 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417e7516 FUN_1417e7516 body=269 status=ok
// SIG undefined FUN_1417e7516(void)

void FUN_1417e7516(longlong param_1,int param_2)

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



// FUNCTION 1417e7624 FUN_1417e7624 body=143 status=ok
// SIG undefined FUN_1417e7624(void)

void FUN_1417e7624(longlong param_1)

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



// FUNCTION 1417e76b4 FUN_1417e76b4 body=161 status=ok
// SIG undefined FUN_1417e76b4(void)

void FUN_1417e76b4(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  char local_38 [8];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (*param_2 != 0)) {
    local_38[0] = '\0';
    local_28 = 1;
    if ((*(longlong *)(param_1 + 0x138) == 0) ||
       ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 8), lVar1 == 0 ||
        (lVar1 = *(longlong *)(lVar1 + 0x260), lVar1 == 0)))) {
      local_30 = 0;
    }
    else {
      local_30 = *(undefined8 *)(lVar1 + 0x38);
    }
    FUN_1447e649a(local_38);
    (*(code *)*param_3)(param_3[1],param_2);
    if (local_38[0] == '\x01') {
      FUN_1447e63de(local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e7756 FUN_1417e7756 body=652 status=ok
// SIG undefined FUN_1417e7756(void)

longlong FUN_1417e7756(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_288 [44];
  uint local_25c;
  undefined1 local_258 [512];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar7 = FUN_14489198c();
  uVar11 = (ulonglong)param_3;
  if ((param_3 == 0xffffffff) || (lVar7 == 0)) goto LAB_1417e78a0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  if (*(longlong *)(lVar7 + 0x138) == 0) {
LAB_1417e78e8:
    local_50._0_4_ = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x138) + 0x40);
    uVar6 = *(uint *)(lVar1 + 0x88);
    uVar9 = (ulonglong)uVar6;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
    if (uVar6 < 0x21) {
      if (uVar9 == 0) goto LAB_1417e78e8;
    }
    else {
      FUN_140e4bc70(local_258,uVar6);
    }
    uVar11 = (ulonglong)param_3;
    uVar13 = 0;
    do {
      uVar5 = local_50;
      lVar14 = *(longlong *)(lVar1 + 0x80);
      if (*(longlong *)(lVar1 + 0x80) == 0) {
        lVar14 = lVar1 + 0x78;
      }
      uVar2 = *(undefined8 *)(lVar14 + uVar13 * 8);
      uVar3 = *(undefined8 *)(lVar7 + 0x138);
      lVar14 = (longlong)(int)local_50;
      uVar6 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar6);
      if (local_50._4_4_ < uVar6) {
        local_25c = (uint)uVar11;
        FUN_146ef97fe(local_258,uVar5 & 0xffffffff);
        uVar11 = (ulonglong)local_25c;
      }
      puVar8 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar8 = local_258;
      }
      *(undefined8 *)(puVar8 + lVar14 * 0x10) = uVar2;
      *(undefined8 *)(puVar8 + lVar14 * 0x10 + 8) = uVar3;
      uVar13 = uVar13 + 1;
    } while (uVar9 != uVar13);
  }
  if ((-1 < (int)uVar11) && ((int)uVar11 < (int)local_50)) {
    puVar8 = local_258;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (*(longlong *)(lVar7 + 0x108) != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x108);
    }
    plVar4 = *(longlong **)(lVar7 + 0x170);
    if ((plVar4 != (longlong *)0x0) && ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
      uVar11 = *(ulonglong *)(puVar8 + uVar11 * 0x10);
      uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar12 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar4[8];
      }
      iVar10 = *(int *)((longlong)plVar12 +
                       (ulonglong)((int)plVar4[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar10 * 0x90;
          if (*(ulonglong *)(*plVar4 + (longlong)iVar10 * 0x90) == uVar11) {
            if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0 && lVar1 != 0) {
              lVar7 = *(longlong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x80);
        } while (iVar10 != -1);
      }
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1417e78a0:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1417e79e4 FUN_1417e79e4 body=256 status=ok
// SIG undefined FUN_1417e79e4(void)

void FUN_1417e79e4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(longlong *)(param_1 + 0x150) == 0) || (*(longlong *)(param_1 + 0x178) == 0)) ||
     (*(longlong *)(param_1 + 0x130) == 0)) goto LAB_1417e7a66;
  lVar2 = FUN_14496b220();
  if (lVar2 == 0) goto LAB_1417e7a66;
  ppuVar4 = (undefined8 **)(lVar2 + 0x78);
  plVar3 = *(longlong **)(lVar2 + 0x78);
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
              (*(longlong **)(param_1 + 0x178),&local_28,*(undefined2 *)(param_1 + 0x188));
    if (ppuVar4 == &local_28) {
LAB_1417e7acf:
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    else {
      puVar1 = *ppuVar4;
      *ppuVar4 = local_28;
      local_28 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        goto LAB_1417e7acf;
      }
    }
    plVar3 = *ppuVar4;
  }
  (**(code **)(*plVar3 + 0x100))();
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x78))
            (*(longlong **)(param_1 + 0x130),*ppuVar4,1,1);
LAB_1417e7a66:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417e7ae6 FUN_1417e7ae6 body=371 status=ok
// SIG undefined FUN_1417e7ae6(void)

void FUN_1417e7ae6(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 **ppuVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((param_1[0x2a] == 0) || (param_1[0x30] == 0)) || (param_1[0x28] == 0)) goto LAB_1417e7b74;
  lVar3 = FUN_14496b220();
  if (lVar3 != 0) {
    ppuVar5 = (undefined8 **)(lVar3 + 0x80);
    plVar4 = *(longlong **)(lVar3 + 0x80);
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x30] + 0x18))
                ((longlong *)param_1[0x30],&local_28,*(undefined2 *)((longlong)param_1 + 0x18a));
      if (ppuVar5 == &local_28) {
LAB_1417e7c41:
        if (local_28 != (undefined8 *)0x0) {
          (**(code **)*local_28)(local_28,1);
        }
      }
      else {
        puVar1 = *ppuVar5;
        *ppuVar5 = local_28;
        local_28 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
          goto LAB_1417e7c41;
        }
      }
      plVar4 = *ppuVar5;
    }
    (**(code **)(*plVar4 + 0x100))();
    (**(code **)(*(longlong *)param_1[0x28] + 0x78))((longlong *)param_1[0x28],*ppuVar5,1,1);
  }
  if (DAT_14caf7720 == '\x01') {
    lVar3 = (**(code **)(*param_1 + 0x4a0))(param_1);
    if (lVar3 == 0) {
      lVar3 = param_1[0x16];
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
      lVar3 = FUN_140636ec6(lVar3);
      if (lVar3 == 0) goto LAB_1417e7b74;
    }
    cVar2 = FUN_140a8394a(param_1);
    if (cVar2 == '\0') {
      FUN_147c6e556(param_1,*(undefined4 *)(lVar3 + 0x914));
    }
  }
LAB_1417e7b74:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417e7c60 FUN_1417e7c60 body=417 status=ok
// SIG undefined FUN_1417e7c60(void)

longlong * FUN_1417e7c60(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1400d7bbd(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147c7e1a8(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_147c7e208(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_147c7e16e(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_141724806(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_147c7e208(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}


