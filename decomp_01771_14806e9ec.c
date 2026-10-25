// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14806e9ec FUN_14806e9ec body=178 status=ok
// SIG undefined FUN_14806e9ec(void)

longlong FUN_14806e9ec(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  uVar6 = (longlong)(iVar1 + 3) & 0xfffffffffffffffc;
  iVar4 = (int)uVar6 + 0x24;
  *(int *)(plVar2 + 1) = iVar4;
  uVar5 = iVar4 - iVar1;
  if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar5) {
    FUN_1447403be(plVar2);
  }
  memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar5);
  lVar3 = **(longlong **)(param_1 + 0x10);
  *(undefined4 *)(lVar3 + 0x20 + uVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + uVar6) = 0;
  *(undefined4 *)(lVar3 + 8 + uVar6) = DAT_14cb331a8;
  *(undefined8 *)(lVar3 + uVar6) = DAT_14cb331a0;
  *(undefined8 *)(lVar3 + 0xc + uVar6) = DAT_14c846350;
  *(undefined4 *)(lVar3 + 0x14 + uVar6) = DAT_14c846358;
  *(undefined8 *)(lVar3 + 0x18 + uVar6) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x20 + uVar6) = 0xffffffff;
  return lVar3 + uVar6;
}



// FUNCTION 14806ea9e FUN_14806ea9e body=169 status=ok
// SIG undefined FUN_14806ea9e(void)

uint * FUN_14806ea9e(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = FUN_1482029d2(param_1,param_3 + 0xc);
    if (-1 < (int)uVar1) {
      *param_2 = uVar1 | *param_2 & 0xc0000000 | 0x20000000;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
    }
  }
  else {
    local_28 = param_3 + 0x28;
    local_20 = *(undefined8 *)(param_3 + 0x18);
    local_18 = *(undefined4 *)(param_3 + 0x20);
    FUN_14806d882(param_1,param_2,*(int *)(param_3 + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806eb48 FUN_14806eb48 body=977 status=ok
// SIG undefined FUN_14806eb48(void)

void FUN_14806eb48(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  float *pfVar21;
  ulonglong *puVar22;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  longlong local_120;
  float local_114;
  float local_110;
  float local_10c;
  ulonglong local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar13 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar13 + 0x24;
  lVar8 = *(longlong *)(param_1 + 0xf8);
  pfVar21 = (float *)(lVar8 + uVar13 + 0xc);
  iVar19 = *(int *)(lVar8 + uVar13 + 0x18);
  uVar20 = (ulonglong)(uint)(iVar19 * 4);
  lVar9 = *(longlong *)(param_1 + 0x130);
  pfVar14 = (float *)(lVar8 + 0x10 + uVar13);
  pfVar17 = (float *)(lVar8 + 0x14 + uVar13);
  if (-1 < iVar19) {
    pfVar17 = (float *)(lVar9 + 8 + uVar20);
    pfVar14 = (float *)(lVar9 + 4 + uVar20);
    pfVar21 = (float *)(lVar9 + uVar20);
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar22 = (ulonglong *)(lVar8 + uVar13);
    local_120 = *(longlong *)(param_1 + 0x48);
    lVar9 = *(longlong *)(param_1 + 0x58);
    local_124 = *pfVar17;
    local_128 = *pfVar14;
    fVar1 = *pfVar21;
    lVar8 = param_1 + 0x68;
    uVar13 = 0;
    do {
      local_100 = (undefined4)puVar22[1];
      local_108 = *puVar22;
      local_f4 = 0;
      local_fc = 0;
      iVar19 = (int)uVar13;
      if ((local_108 & 0x40000000) != 0) {
        FUN_148200430(param_1,&local_fc,uVar13 & 0xffffffff,0);
      }
      pfVar17 = (float *)&DAT_14c846350;
      pfVar14 = (float *)((longlong)&DAT_14c846350 + 4);
      pfVar21 = (float *)&DAT_14c846358;
      if (-1 < (longlong)*(int *)((longlong)puVar22 + 0x1c)) {
        lVar15 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar15 = lVar8;
        }
        pfVar17 = (float *)((longlong)iVar19 * 4 +
                           *(longlong *)(lVar15 + (longlong)*(int *)((longlong)puVar22 + 0x1c) * 8))
        ;
        pfVar21 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar17);
        pfVar14 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar17);
      }
      fVar2 = *pfVar21;
      fVar3 = *pfVar14;
      fVar4 = *pfVar17;
      pfVar17 = (float *)&DAT_14c846350;
      pfVar14 = (float *)((longlong)&DAT_14c846350 + 4);
      pfVar21 = (float *)&DAT_14c846358;
      if (-1 < (longlong)(int)puVar22[4]) {
        lVar15 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar15 = lVar8;
        }
        pfVar17 = (float *)((longlong)iVar19 * 4 +
                           *(longlong *)(lVar15 + (longlong)(int)puVar22[4] * 8));
        pfVar21 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar17);
        pfVar14 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar17);
      }
      fVar5 = *pfVar21;
      fVar6 = *pfVar14;
      fVar7 = *pfVar17;
      FUN_14806d446(&local_108,&local_114,param_1,*(undefined4 *)(local_120 + uVar13 * 4));
      fVar12 = local_10c;
      fVar11 = local_110;
      fVar10 = local_114;
      FUN_14806d446(&local_108,&local_114,param_1,*(undefined4 *)(lVar9 + uVar13 * 4));
      lVar15 = (longlong)*(int *)((longlong)puVar22 + 0x1c);
      if (-1 < lVar15) {
        lVar16 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar16 = lVar8;
        }
        lVar18 = (longlong)iVar19;
        *(float *)(*(longlong *)(lVar16 + lVar15 * 8) + lVar18 * 4) = fVar4 * fVar10 * fVar1;
        lVar16 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar16 = lVar8;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar16 + lVar15 * 8) +
                  lVar18 * 4) = fVar3 * fVar11 * local_128;
        lVar16 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar16 = lVar8;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar16 + lVar15 * 8) + lVar18 * 4) = fVar2 * fVar12 * local_124;
      }
      lVar15 = (longlong)(int)puVar22[4];
      if (-1 < lVar15) {
        lVar16 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar16 = lVar8;
        }
        lVar18 = (longlong)iVar19;
        *(float *)(*(longlong *)(lVar16 + lVar15 * 8) + lVar18 * 4) = fVar7 * local_114 * fVar1;
        lVar16 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar16 = lVar8;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar16 + lVar15 * 8) +
                  lVar18 * 4) = fVar6 * local_110 * local_128;
        lVar16 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar16 = lVar8;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar16 + lVar15 * 8) + lVar18 * 4) = fVar5 * local_10c * local_124;
      }
      uVar13 = uVar13 + 1;
    } while ((uint)uVar13 < *(uint *)(param_1 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806ef1a FUN_14806ef1a body=167 status=ok
// SIG undefined FUN_14806ef1a(void)

longlong FUN_14806ef1a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  uVar6 = (longlong)(iVar1 + 3) & 0xfffffffffffffffc;
  iVar4 = (int)uVar6 + 0x20;
  *(int *)(plVar2 + 1) = iVar4;
  uVar5 = iVar4 - iVar1;
  if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar5) {
    FUN_1447403be(plVar2);
  }
  memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar5);
  lVar3 = **(longlong **)(param_1 + 0x10);
  *(undefined4 *)(lVar3 + 0x1c + uVar6) = 0;
  *(undefined8 *)(lVar3 + 0x14 + uVar6) = 0;
  *(undefined4 *)(lVar3 + 8 + uVar6) = DAT_14cb331a8;
  *(undefined8 *)(lVar3 + uVar6) = DAT_14cb331a0;
  *(undefined8 *)(lVar3 + 0xc + uVar6) = DAT_14c8461b4;
  *(undefined8 *)(lVar3 + 0x14 + uVar6) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x1c + uVar6) = 0xffffffff;
  return lVar3 + uVar6;
}



// FUNCTION 14806efc2 FUN_14806efc2 body=169 status=ok
// SIG undefined FUN_14806efc2(void)

uint * FUN_14806efc2(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = FUN_1482029d2(param_1,param_3 + 0xc);
    if (-1 < (int)uVar1) {
      *param_2 = uVar1 | *param_2 & 0xc0000000 | 0x20000000;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
    }
  }
  else {
    local_28 = param_3 + 0x28;
    local_20 = *(undefined8 *)(param_3 + 0x18);
    local_18 = *(undefined4 *)(param_3 + 0x20);
    FUN_14806f37e(param_1,param_2,*(int *)(param_3 + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806f06c FUN_14806f06c body=785 status=ok
// SIG undefined FUN_14806f06c(void)

void FUN_14806f06c(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  ulonglong *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar12 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar12 + 0x20;
  lVar1 = *(longlong *)(param_1 + 0xf8) + uVar12;
  iVar16 = *(int *)(lVar1 + 0x14);
  pfVar13 = (float *)((ulonglong)(uint)(iVar16 * 4) + *(longlong *)(param_1 + 0x130));
  if (iVar16 < 0) {
    pfVar13 = (float *)(lVar1 + 0xc);
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar17 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + uVar12);
    fVar2 = *pfVar13;
    fVar3 = pfVar13[1];
    local_108 = *(longlong *)(param_1 + 0x48);
    local_110 = *(longlong *)(param_1 + 0x58);
    lVar1 = param_1 + 0x68;
    uVar12 = 0;
    do {
      local_f8 = *puVar17;
      local_f0 = (undefined4)puVar17[1];
      local_ec = 0;
      iVar16 = (int)uVar12;
      if ((local_f8 & 0x40000000) != 0) {
        FUN_1482047de(param_1,&local_ec,uVar12 & 0xffffffff,0);
      }
      uVar4 = *(undefined4 *)(local_110 + uVar12 * 4);
      uVar9 = puVar17[3];
      lVar18 = (longlong)(int)uVar9;
      pfVar15 = (float *)&DAT_14c84635c;
      pfVar13 = (float *)((longlong)&DAT_14c84635c + 4);
      if (-1 < lVar18) {
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar14 = lVar1;
        }
        pfVar15 = (float *)((longlong)iVar16 * 4 + *(longlong *)(lVar14 + lVar18 * 8));
        pfVar13 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar15);
      }
      fVar5 = *pfVar13;
      fVar6 = *pfVar15;
      uVar19 = *(uint *)((longlong)puVar17 + 0x1c);
      pfVar15 = (float *)&DAT_14c84635c;
      pfVar13 = (float *)((longlong)&DAT_14c84635c + 4);
      if (-1 < (longlong)(int)uVar19) {
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar14 = lVar1;
        }
        pfVar15 = (float *)((longlong)iVar16 * 4 + *(longlong *)(lVar14 + (longlong)(int)uVar19 * 8)
                           );
        pfVar13 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar15);
      }
      fVar7 = *pfVar13;
      fVar8 = *pfVar15;
      FUN_14806f46e(&local_f8,&local_100,param_1,*(undefined4 *)(local_108 + uVar12 * 4));
      fVar11 = local_fc;
      fVar10 = local_100;
      FUN_14806f46e(&local_f8,&local_100,param_1,uVar4);
      if (-1 < (int)uVar9) {
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar14 = lVar1;
        }
        *(float *)(*(longlong *)(lVar14 + lVar18 * 8) + (longlong)iVar16 * 4) =
             fVar6 * fVar10 * fVar2;
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar14 = lVar1;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar14 + lVar18 * 8) +
                  (longlong)iVar16 * 4) = fVar5 * fVar11 * fVar3;
        uVar19 = *(uint *)((longlong)puVar17 + 0x1c);
      }
      if (-1 < (int)uVar19) {
        lVar18 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar18 = lVar1;
        }
        *(float *)(*(longlong *)(lVar18 + (ulonglong)uVar19 * 8) + (longlong)iVar16 * 4) =
             fVar8 * local_100 * fVar2;
        lVar18 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar18 = lVar1;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) +
                   *(longlong *)(lVar18 + (ulonglong)uVar19 * 8) + (longlong)iVar16 * 4) =
             fVar7 * local_fc * fVar3;
      }
      uVar12 = uVar12 + 1;
    } while ((uint)uVar12 < *(uint *)(param_1 + 8));
  }
  if ((local_e0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806f37e FUN_14806f37e body=238 status=ok
// SIG undefined FUN_14806f37e(void)

uint * FUN_14806f37e(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4,
                    float *param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  iVar3 = param_4[2];
  if (0 < iVar3) {
    uVar4 = *param_2;
    switch(param_3) {
    case 1:
    case 3:
      uVar4 = uVar4 | 0xc0000000;
      break;
    case 2:
    case 4:
      uVar4 = uVar4 | 0x40000000;
      break;
    case 5:
      uVar4 = uVar4 | 0x80000000;
    }
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar2 = FUN_1482028fa();
    iVar3 = iVar3 + -1;
    *param_2 = iVar3 * 0x100000 | uVar2 & 0xe00fffff | uVar4 & 0xe0000000;
    fVar1 = *param_5;
    fVar5 = param_5[1];
    param_2[1] = (uint)fVar1;
    uVar4 = 0;
    if (iVar3 != 0) {
      fVar5 = fVar5 - fVar1;
      uVar4 = -(uint)(0.0 < fVar5) & (uint)((float)iVar3 / fVar5);
    }
    param_2[2] = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14806f46e FUN_14806f46e body=327 status=ok
// SIG undefined FUN_14806f46e(void)

void FUN_14806f46e(uint *param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  float fVar7;
  float fVar8;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 in_XMM5 [16];
  undefined1 auVar9 [16];
  ulonglong uVar6;
  
  uVar4 = *param_1;
  uVar5 = uVar4 & 0xfffff;
  uVar6 = (ulonglong)uVar5;
  if ((uVar4 >> 0x1d & 1) != 0) {
    *(undefined8 *)param_2 = *(undefined8 *)(*(longlong *)(param_3 + 0x130) + uVar6 * 4);
    return;
  }
  if ((uVar4 >> 0x1e & 1) == 0) {
    fVar7 = (float)(uVar4 >> 0x14 & 0x1ff);
    fVar8 = ((float)param_4 - (float)param_1[1]) * (float)param_1[2];
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    uVar4 = (int)ROUND(fVar8 + fVar8 + -0.5) & 0xfffffffe;
    lVar3 = *(longlong *)(param_3 + 0x120);
    fVar7 = *(float *)(lVar3 + (longlong)(int)(uVar4 + uVar5 + 1) * 4);
    fVar1 = *(float *)(lVar3 + (longlong)(int)(uVar4 + uVar5) * 4);
    uVar4 = (int)ROUND(-0.5 - (fVar8 + fVar8)) & 0xfffffffe;
    fVar2 = *(float *)(lVar3 + (longlong)(int)((uVar5 - uVar4) + 1) * 4);
    auVar9._4_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar9._0_4_ = fVar8;
    auVar9._8_4_ = in_XMM3_Dc;
    auVar9._12_4_ = in_XMM3_Dd;
    auVar9 = roundss(in_XMM5,auVar9,0xb);
    fVar8 = fVar8 - auVar9._0_4_;
    *param_2 = (*(float *)(lVar3 + (longlong)(int)(uVar5 - uVar4) * 4) - fVar1) * fVar8 + fVar1;
    param_2[1] = (fVar2 - fVar7) * fVar8 + fVar7;
    return;
  }
  lVar3 = *(longlong *)(param_3 + 0x120);
  fVar8 = *(float *)(lVar3 + uVar6 * 4);
  fVar8 = (*(float *)(lVar3 + 8 + uVar6 * 4) - fVar8) * (float)param_1[3] + fVar8;
  if (-1 < (int)uVar4) {
    fVar7 = *(float *)(lVar3 + 4 + uVar6 * 4);
    fVar1 = *(float *)(lVar3 + 0xc + uVar6 * 4);
    fVar2 = (float)param_1[4];
    *param_2 = fVar8;
    param_2[1] = (fVar1 - fVar7) * fVar2 + fVar7;
    return;
  }
  *param_2 = fVar8;
  param_2[1] = fVar8;
  return;
}



// FUNCTION 14806f5b6 FUN_14806f5b6 body=142 status=ok
// SIG undefined FUN_14806f5b6(void)

void * FUN_14806f5b6(longlong param_1)

{
  void *_Dst;
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar6 = iVar2 + 0xfU & 0xfffffff0;
  *(uint *)(plVar3 + 1) = uVar6 + 0x120;
  uVar5 = (uVar6 + 0x120) - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar5) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar5);
  lVar4 = **(longlong **)(param_1 + 0x10);
  _Dst = (void *)(lVar4 + (int)uVar6);
  memset(_Dst,0,0x120);
  FUN_14806c322(_Dst);
  puVar1 = (undefined4 *)(lVar4 + 0x110 + (longlong)(int)uVar6);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  return _Dst;
}



// FUNCTION 14806f644 FUN_14806f644 body=2656 status=ok
// SIG undefined FUN_14806f644(void)

void FUN_14806f644(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar14;
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
  undefined1 auStack_1b8 [32];
  float *local_198;
  float *local_190;
  float *local_188;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  ulonglong uVar13;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar14 = (longlong)(*(int *)(param_1 + 0x108) + 0xf) & 0xfffffffffffffff0;
  *(int *)(param_1 + 0x108) = (int)uVar14 + 0x120;
  lVar3 = *(longlong *)(param_1 + 0xf8);
  uVar12 = *(int *)(param_1 + 0x118) + 0xfU & 0xfffffff0;
  uVar13 = (ulonglong)uVar12;
  lVar1 = FUN_145de160c();
  *(uint *)(param_1 + 0x118) = *(int *)(lVar1 + 0x3c) + uVar12;
  if (*(int *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x110);
    local_128 = *(longlong *)(param_1 + 0x40);
    local_130 = *(longlong *)(param_1 + 0x50);
    fVar15 = *(float *)(param_1 + 0x10);
    local_138 = param_1 + 0x68;
    uVar8 = 0;
    local_174 = fVar15;
    local_148 = uVar14;
    local_140 = lVar3;
    do {
      lVar5 = local_138;
      lVar3 = local_140;
      uVar14 = local_148;
      local_158 = *(float *)(lVar1 + uVar13);
      local_154 = *(float *)(lVar1 + 4 + uVar13);
      iVar7 = (int)uVar8;
      local_14c = (float)FUN_148204758(param_1,uVar8 & 0xffffffff,0);
      local_160 = *(float *)(lVar1 + 8 + uVar13);
      local_15c = *(float *)(lVar1 + 0xc + uVar13);
      local_150 = (float)FUN_148204758(param_1,uVar8 & 0xffffffff,1);
      FUN_148200430(param_1,&local_fc,uVar8 & 0xffffffff,2);
      fVar24 = local_f4 * *(float *)(lVar1 + 0x18 + uVar13) + *(float *)(lVar1 + 0x28 + uVar13);
      fVar23 = local_f8 * *(float *)(lVar1 + 0x14 + uVar13) + *(float *)(lVar1 + 0x24 + uVar13);
      fVar27 = local_fc * *(float *)(lVar1 + 0x10 + uVar13) + *(float *)(lVar1 + 0x20 + uVar13);
      local_108 = fVar27;
      local_104 = fVar23;
      local_100 = fVar24;
      FUN_148200430(param_1,&local_fc,uVar8 & 0xffffffff,3);
      local_10c = local_f4 * *(float *)(lVar1 + 0x38 + uVar13) + *(float *)(lVar1 + 0x48 + uVar13);
      local_110 = local_f8 * *(float *)(lVar1 + 0x34 + uVar13) + *(float *)(lVar1 + 0x44 + uVar13);
      local_114 = local_fc * *(float *)(lVar1 + 0x30 + uVar13) + *(float *)(lVar1 + 0x40 + uVar13);
      FUN_148200430(param_1,&local_fc,uVar8 & 0xffffffff,4);
      local_118 = local_f4 * *(float *)(lVar1 + 0x58 + uVar13) + *(float *)(lVar1 + 0x68 + uVar13);
      local_11c = local_f8 * *(float *)(lVar1 + 0x54 + uVar13) + *(float *)(lVar1 + 100 + uVar13);
      local_120 = local_fc * *(float *)(lVar1 + 0x50 + uVar13) + *(float *)(lVar1 + 0x60 + uVar13);
      lVar4 = (longlong)*(int *)(lVar3 + 0x110 + uVar14);
      pfVar6 = (float *)&DAT_14c846330;
      pfVar2 = (float *)((longlong)&DAT_14c846330 + 4);
      pfVar9 = (float *)&DAT_14c846338;
      if (-1 < lVar4) {
        lVar11 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar11 = lVar5;
        }
        pfVar6 = (float *)((longlong)iVar7 * 4 + *(longlong *)(lVar11 + lVar4 * 8));
        pfVar9 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar6);
        pfVar2 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar6);
      }
      local_178 = *pfVar2;
      fVar28 = *pfVar6;
      lVar4 = (longlong)*(int *)(lVar3 + 0x118 + uVar14);
      pfVar6 = (float *)&DAT_14c846330;
      pfVar2 = (float *)((longlong)&DAT_14c846330 + 4);
      pfVar10 = (float *)&DAT_14c846338;
      if (-1 < lVar4) {
        lVar11 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar11 = lVar5;
        }
        pfVar6 = (float *)((longlong)iVar7 * 4 + *(longlong *)(lVar11 + lVar4 * 8));
        pfVar10 = (float *)((ulonglong)(*(uint *)(param_1 + 0x1c) * 2) + (longlong)pfVar6);
        pfVar2 = (float *)((ulonglong)*(uint *)(param_1 + 0x1c) + (longlong)pfVar6);
      }
      local_16c = *pfVar10;
      local_168 = *pfVar2;
      local_164 = *pfVar6;
      fVar25 = *pfVar9;
      if (*(char *)(lVar3 + 0x94 + uVar14) == '\x01') {
        fVar15 = *(float *)(lVar1 + 0x88 + uVar13);
        fVar25 = *(float *)(lVar1 + 0x8c + uVar13);
        local_17c = fVar24;
        local_170 = *pfVar9;
        fVar24 = (float)FUN_148204758(param_1,uVar8 & 0xffffffff,5);
        fVar25 = fVar24 * fVar15 + fVar25;
        fVar15 = (float)FUN_148204758(param_1,uVar8 & 0xffffffff,6);
        fVar16 = cosf(fVar25);
        fVar24 = sinf(fVar25);
        fVar25 = cosf(fVar15 * 6.2831855);
        fVar17 = sinf(fVar15 * 6.2831855);
        fVar25 = fVar25 * fVar24;
        fVar17 = fVar17 * fVar24;
        fVar15 = *(float *)(lVar1 + 0x80 + uVar13);
        fVar24 = *(float *)(lVar1 + 0x84 + uVar13);
        fVar18 = (float)FUN_148204758(param_1,uVar8 & 0xffffffff,7);
        fVar24 = fVar18 * fVar15 + fVar24;
        if (*(char *)(lVar3 + 0x94 + uVar14) == '\x01') {
          fVar15 = fVar16;
          if (1.0 <= fVar16) {
            fVar15 = 1.0;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          fVar15 = powf(fVar15,*(float *)(lVar1 + 0x90 + uVar13) * 10.0);
          fVar24 = fVar24 * ((fVar15 + -1.0) * *(float *)(lVar1 + 0x90 + uVar13) + 1.0);
        }
        fVar15 = *(float *)(lVar3 + 0xa8 + uVar14);
        fVar18 = *(float *)(lVar3 + 0xa0 + uVar14);
        fVar19 = *(float *)(lVar3 + 0xa4 + uVar14);
        fVar20 = fVar18 * fVar25 - fVar17 * fVar19;
        fVar21 = fVar15 * fVar17 - fVar16 * fVar18;
        fVar22 = fVar19 * fVar16 - fVar25 * fVar15;
        fVar20 = fVar20 + fVar20;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar26 = *(float *)(lVar3 + 0xac + uVar14);
        fVar27 = fVar27 + ((fVar19 * fVar20 - fVar21 * fVar15) + fVar22 * fVar26 + fVar17) * fVar24;
        fVar23 = fVar23 + ((fVar15 * fVar22 - fVar20 * fVar18) + fVar26 * fVar21 + fVar25) * fVar24;
        fVar24 = local_17c +
                 ((fVar18 * fVar21 - fVar22 * fVar19) + fVar26 * fVar20 + fVar16) * fVar24;
        fVar15 = local_174;
        fVar25 = local_170;
        local_108 = fVar27;
        local_104 = fVar23;
        local_100 = fVar24;
      }
      fVar16 = local_178;
      if (*(char *)(lVar3 + 200 + uVar14) == '\x01') {
        local_17c = fVar24;
        FUN_1480700a6(param_1,&local_fc,uVar8 & 0xffffffff,8);
        fVar26 = fVar25 - *(float *)(lVar1 + 0xa8 + uVar13);
        fVar16 = fVar16 - *(float *)(lVar1 + 0xa4 + uVar13);
        fVar20 = fVar28 - *(float *)(lVar1 + 0xa0 + uVar13);
        fVar19 = fVar26 * fVar26 + fVar20 * fVar20 + fVar16 * fVar16;
        fVar24 = local_f4;
        fVar17 = local_f8;
        fVar18 = local_fc;
        if (0.0001 <= fVar19) {
          fVar18 = 1.0 / SQRT(fVar19);
          fVar24 = fVar26 * fVar18;
          fVar17 = fVar16 * fVar18;
          fVar18 = fVar20 * fVar18;
        }
        fVar16 = *(float *)(lVar1 + 0x98 + uVar13);
        fVar19 = *(float *)(lVar1 + 0x9c + uVar13);
        fVar26 = (float)FUN_148204758(param_1,uVar8 & 0xffffffff,9);
        fVar19 = fVar26 * fVar16 + fVar19;
        local_100 = fVar24 * fVar19 + local_17c;
        local_104 = fVar17 * fVar19 + fVar23;
        local_108 = fVar27 + fVar19 * fVar18;
      }
      fVar23 = local_178;
      fVar24 = local_14c * local_158 + local_154;
      fVar27 = local_150 * local_160 + local_15c;
      local_198 = &local_108;
      local_190 = &local_114;
      local_188 = &local_120;
      FUN_14807016e(&local_fc,*(undefined4 *)(local_128 + uVar8 * 4),fVar24,fVar27);
      fVar28 = fVar28 + local_fc;
      fVar23 = fVar23 + local_f8;
      fVar25 = fVar25 + local_f4;
      local_198 = &local_108;
      local_190 = &local_114;
      local_188 = &local_120;
      FUN_14807016e(&local_fc,*(undefined4 *)(local_130 + uVar8 * 4),fVar24,fVar27);
      lVar3 = (longlong)*(int *)(local_140 + 0x110 + local_148);
      if (-1 < lVar3) {
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        lVar4 = (longlong)iVar7;
        *(float *)(*(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = fVar28;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar5 + lVar3 * 8) +
                  lVar4 * 4) = fVar23;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = fVar25;
      }
      lVar3 = (longlong)*(int *)(local_140 + 0x118 + local_148);
      if (-1 < lVar3) {
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        lVar4 = (longlong)iVar7;
        *(float *)(*(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = local_164 + local_fc;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar5 + lVar3 * 8) +
                  lVar4 * 4) = local_168 + local_f8;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = local_16c + local_f4;
      }
      fVar24 = (fVar25 - (local_16c + local_f4)) * fVar15;
      fVar23 = (fVar23 - (local_168 + local_f8)) * fVar15;
      fVar27 = (fVar28 - (local_164 + local_fc)) * fVar15;
      lVar3 = (longlong)*(int *)(local_140 + 0x114 + local_148);
      if (-1 < lVar3) {
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        lVar4 = (longlong)iVar7;
        *(float *)(*(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = fVar27;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar5 + lVar3 * 8) +
                  lVar4 * 4) = fVar23;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = fVar24;
      }
      lVar3 = (longlong)*(int *)(local_140 + 0x11c + local_148);
      if (-1 < lVar3) {
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        lVar4 = (longlong)iVar7;
        *(float *)(*(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = fVar27;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar5 + lVar3 * 8) +
                  lVar4 * 4) = fVar23;
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = local_138;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar5 + lVar3 * 8) + lVar4 * 4) = fVar24;
      }
      uVar8 = uVar8 + 1;
    } while ((uint)uVar8 < *(uint *)(param_1 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480700a6 FUN_1480700a6 body=199 status=ok
// SIG undefined FUN_1480700a6(void)

float * FUN_1480700a6(undefined8 param_1,float *param_2)

{
  float fVar1;
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148200430(param_1,&local_24);
  local_1c = local_1c + -0.5;
  local_20 = local_20 + -0.5;
  local_24 = local_24 + -0.5;
  fVar1 = local_1c * local_1c + local_24 * local_24 + local_20 * local_20;
  if (0.0001 <= fVar1) {
    fVar1 = 1.0 / SQRT(fVar1);
    local_1c = local_1c * fVar1;
    local_20 = local_20 * fVar1;
    local_24 = local_24 * fVar1;
  }
  else {
    local_20 = 0.0;
    local_24 = 1.0;
    local_1c = 0.0;
  }
  *param_2 = local_24;
  param_2[1] = local_20;
  param_2[2] = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807016e FUN_14807016e body=361 status=ok
// SIG undefined FUN_14807016e(void)

float * FUN_14807016e(float *param_1,float param_2,float param_3,float param_4,float *param_5,
                     float *param_6,float *param_7)

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
  float fVar10;
  
  fVar1 = param_5[2];
  fVar2 = param_6[2];
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = *param_6;
  fVar6 = param_6[1];
  param_4 = (1.0 / param_3) * param_4;
  if (param_4 <= 0.0001) {
    param_4 = 0.0001;
  }
  fVar8 = expf(-param_4 * param_2);
  fVar9 = (1.0 - fVar8) / param_4;
  param_4 = 1.0 / param_4;
  fVar8 = param_7[2];
  fVar7 = param_7[1];
  fVar10 = param_2 - fVar9;
  *param_1 = fVar10 * param_4 * *param_7 + (fVar5 * param_2 * param_2 + (fVar3 - fVar5)) * fVar9;
  param_1[1] = fVar7 * param_4 * fVar10 + (fVar6 * param_2 * param_2 + (fVar4 - fVar6)) * fVar9;
  param_1[2] = fVar8 * param_4 * fVar10 + (fVar2 * param_2 * param_2 + (fVar1 - fVar2)) * fVar9;
  return param_1;
}



// FUNCTION 1480702d8 FUN_1480702d8 body=251 status=ok
// SIG undefined FUN_1480702d8(void)

void FUN_1480702d8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14377947a(param_1 + 1);
  *(longlong *)(*param_1 + 0xd0) = lVar1;
  *(undefined8 *)(*param_1 + 0xd8) = DAT_14c9c9d38;
  lVar2 = *param_1;
  if (*(uint *)(lVar2 + 0xe0) < 2) {
    fVar3 = 1.0;
    fVar4 = 1.0;
    fVar5 = 1.0;
    if (lVar1 != 0) {
      FUN_144b15a3c(lVar1,&local_3c);
      fVar5 = (float)local_3c;
      fVar4 = (float)local_38;
      lVar2 = *param_1;
      fVar3 = (float)local_34;
    }
    *(float *)(lVar2 + 0xc0) = (1.0 / fVar5) * *(float *)(lVar2 + 0xc0);
    *(float *)(*param_1 + 0xc4) = (1.0 / fVar4) * *(float *)(*param_1 + 0xc4);
    *(float *)(*param_1 + 200) = (1.0 / fVar3) * *(float *)(*param_1 + 200);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480703e4 FUN_1480703e4 body=12 status=ok
// SIG undefined FUN_1480703e4(void)

void FUN_1480703e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001480703ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1480703f0 FUN_1480703f0 body=52 status=ok
// SIG undefined FUN_1480703f0(void)

undefined8 * FUN_1480703f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad7a520;
  FUN_1417f83cc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148070424 FUN_148070424 body=113 status=ok
// SIG undefined FUN_148070424(void)

void FUN_148070424(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480702d8(0xa8);
    FUN_1417f83cc(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480702d8(param_1 + 0x15);
  FUN_1417f83cc(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014807048b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148070496 FUN_148070496 body=154 status=ok
// SIG undefined FUN_148070496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_148070496(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  iVar3 = (int)plVar4[1];
  uVar7 = iVar3 + 3U & 0xfffffffc;
  iVar1 = uVar7 + 0x28;
  *(int *)(plVar4 + 1) = iVar1;
  uVar6 = iVar1 - iVar3;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar3) < uVar6) {
    FUN_1447403be(plVar4);
  }
  lVar8 = (longlong)(int)uVar7;
  memset((void *)((longlong)iVar3 + *plVar4),0,(longlong)(int)uVar6);
  lVar5 = **(longlong **)(param_1 + 0x10);
  *(undefined4 *)(lVar5 + 8 + lVar8) = DAT_14c846384;
  *(undefined8 *)(lVar5 + lVar8) = _DAT_14c84637c;
  *(undefined4 *)(lVar5 + 0x14 + lVar8) = DAT_14c846378;
  *(undefined8 *)(lVar5 + 0xc + lVar8) = DAT_14c846370;
  puVar2 = (undefined4 *)(lVar5 + 0x18 + lVar8);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  return lVar5 + lVar8;
}



// FUNCTION 148070530 FUN_148070530 body=138 status=ok
// SIG undefined FUN_148070530(void)

void FUN_148070530(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(int *)(param_1 + 0x108) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x108) = uVar1 + 0x28;
  if (*(int *)(param_1 + 8) != 0) {
    lVar2 = (longlong)(int)uVar1 + *(longlong *)(param_1 + 0xf8);
    uVar1 = 0;
    do {
      FUN_14806d6f8(param_1,*(undefined4 *)(lVar2 + 0x18),uVar1,lVar2);
      FUN_14806d6f8(param_1,*(undefined4 *)(lVar2 + 0x1c),uVar1,lVar2);
      FUN_14806d6f8(param_1,*(undefined4 *)(lVar2 + 0x20),uVar1,lVar2 + 0xc);
      FUN_14806d6f8(param_1,*(undefined4 *)(lVar2 + 0x24),uVar1,lVar2 + 0xc);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1480705ba FUN_1480705ba body=118 status=ok
// SIG undefined FUN_1480705ba(void)

longlong FUN_1480705ba(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  uVar6 = (longlong)(iVar1 + 3) & 0xfffffffffffffffc;
  iVar4 = (int)uVar6 + 0x14;
  *(int *)(plVar2 + 1) = iVar4;
  uVar5 = iVar4 - iVar1;
  if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar5) {
    FUN_1447403be(plVar2);
  }
  memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar5);
  lVar3 = **(longlong **)(param_1 + 0x10);
  *(undefined8 *)(lVar3 + uVar6) = 0xffffffff;
  ((undefined8 *)(lVar3 + uVar6))[1] = 0xffffffff00000000;
  *(undefined4 *)(lVar3 + 0x10 + uVar6) = 0xffffffff;
  return lVar3 + uVar6;
}



// FUNCTION 148070630 FUN_148070630 body=376 status=ok
// SIG undefined FUN_148070630(void)

void FUN_148070630(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar11 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar11 + 0x14;
  lVar3 = *(longlong *)(param_1 + 0xf8);
  uVar14 = *(int *)(param_1 + 0x118) + 0xfU & 0xfffffff0;
  lVar7 = FUN_145e33e42();
  *(uint *)(param_1 + 0x118) = *(int *)(lVar7 + 0x3c) + uVar14;
  if (*(int *)(param_1 + 8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x110);
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar6 = *(longlong *)(param_1 + 0x50);
    lVar7 = param_1 + 0x68;
    uVar13 = 0;
    do {
      fVar1 = *(float *)(lVar4 + (ulonglong)uVar14);
      fVar16 = *(float *)(lVar4 + 4 + (ulonglong)uVar14);
      iVar12 = (int)uVar13;
      fVar15 = (float)FUN_148204758(param_1,uVar13 & 0xffffffff,0);
      iVar2 = *(int *)(lVar3 + 0xc + uVar11);
      lVar8 = (longlong)iVar2;
      fVar17 = 0.0;
      fVar18 = 0.0;
      if (-1 < lVar8) {
        lVar10 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar10 = lVar7;
        }
        fVar18 = *(float *)(*(longlong *)(lVar10 + lVar8 * 8) + (longlong)iVar12 * 4);
      }
      uVar9 = *(uint *)(lVar3 + 0x10 + uVar11);
      if (-1 < (longlong)(int)uVar9) {
        lVar10 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar10 = lVar7;
        }
        fVar17 = *(float *)(*(longlong *)(lVar10 + (longlong)(int)uVar9 * 8) + (longlong)iVar12 * 4)
        ;
      }
      fVar16 = fVar15 * fVar1 + fVar16;
      fVar1 = *(float *)(lVar6 + uVar13 * 4);
      if (-1 < iVar2) {
        lVar10 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar10 = lVar7;
        }
        *(float *)(*(longlong *)(lVar10 + lVar8 * 8) + (longlong)iVar12 * 4) =
             fVar16 * *(float *)(lVar5 + uVar13 * 4) + fVar18;
        uVar9 = *(uint *)(lVar3 + 0x10 + uVar11);
      }
      if (-1 < (int)uVar9) {
        lVar8 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar8 = lVar7;
        }
        *(float *)(*(longlong *)(lVar8 + (ulonglong)uVar9 * 8) + (longlong)iVar12 * 4) =
             fVar1 * fVar16 + fVar17;
      }
      uVar13 = uVar13 + 1;
    } while ((uint)uVar13 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1480707a8 FUN_1480707a8 body=120 status=ok
// SIG undefined FUN_1480707a8(void)

longlong FUN_1480707a8(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar7 = (longlong)(iVar2 + 3) & 0xfffffffffffffffc;
  iVar5 = (int)uVar7 + 0x24;
  *(int *)(plVar3 + 1) = iVar5;
  uVar6 = iVar5 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar6) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar6);
  lVar4 = **(longlong **)(param_1 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + uVar7) = 0;
  ((undefined8 *)(lVar4 + uVar7))[1] = 0;
  *(undefined4 *)(lVar4 + 0x20 + uVar7) = 0xffffffff;
  return lVar4 + uVar7;
}



// FUNCTION 148070820 FUN_148070820 body=353 status=ok
// SIG undefined FUN_148070820(void)

void FUN_148070820(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  uVar8 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar8 + 0x24;
  if (*(int *)(param_1 + 8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar5 = *(longlong *)(param_1 + 0x48);
    uVar9 = 0;
    do {
      fVar1 = *(float *)(lVar4 + uVar9 * 4);
      fVar2 = *(float *)(lVar5 + uVar9 * 4);
      fVar10 = (float)FUN_148204758(param_1,uVar9 & 0xffffffff,
                                    (longlong)(*(float *)(lVar3 + 0x10 + uVar8) * fVar1));
      fVar10 = fVar10 * *(float *)(lVar3 + 8 + uVar8) + *(float *)(lVar3 + 0xc + uVar8);
      if (*(int *)(lVar3 + uVar8) == 1) {
        fVar10 = fVar2 * *(float *)(lVar3 + 0x1c + uVar8) * *(float *)(lVar3 + 0x18 + uVar8) +
                 fVar10 + *(float *)(lVar3 + 0x14 + uVar8);
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      else if (*(int *)(lVar3 + uVar8) == 0) {
        fVar10 = fVar1 * *(float *)(lVar3 + 0x1c + uVar8) * *(float *)(lVar3 + 0x18 + uVar8) +
                 fVar10 + *(float *)(lVar3 + 0x14 + uVar8);
        auVar11 = roundss(ZEXT416(0),ZEXT416((uint)fVar10),0xb);
        fVar10 = fVar10 - auVar11._0_4_;
      }
      lVar6 = (longlong)*(int *)(lVar3 + 0x20 + uVar8);
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = param_1 + 0x68;
        }
        *(float *)(*(longlong *)(lVar7 + lVar6 * 8) + (longlong)(int)uVar9 * 4) =
             fVar10 * *(float *)(lVar3 + 4 + uVar8);
      }
      uVar9 = uVar9 + 1;
    } while ((uint)uVar9 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 148070982 FUN_148070982 body=247 status=ok
// SIG undefined FUN_148070982(void)

void FUN_148070982(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_1401cb356();
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_28 = *(longlong *)(param_1 + 0x30);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  lVar3 = FUN_14479d2ce(param_1);
  if (lVar3 != 0) {
    FUN_1481e592a(lVar3,0);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 2;
  FUN_14019d794(&local_48,param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_148086488(&local_48,lVar3);
  FUN_144760e21(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148070a7a FUN_148070a7a body=703 status=ok
// SIG undefined FUN_148070a7a(void)

void FUN_148070a7a(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined1 local_e8 [88];
  undefined1 local_90 [88];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14485c47a();
  FUN_14485c47a(param_1 + 8,param_4);
  uVar10 = param_5[1];
  uVar3 = *(undefined4 *)((longlong)param_5 + 0xc);
  uVar4 = *(undefined4 *)(param_5 + 2);
  uVar5 = *(undefined4 *)((longlong)param_5 + 0x14);
  uVar6 = *(undefined4 *)(param_5 + 3);
  *(undefined8 *)(param_1 + 0x38) = *param_5;
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  iVar8 = *(int *)(param_1 + 0x3c);
  iVar11 = *(int *)(param_1 + 0x40);
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  *(int *)(param_1 + 0x3c) = iVar8;
  if (iVar11 < 2) {
    iVar11 = 1;
  }
  *(int *)(param_1 + 0x40) = iVar11;
  iVar8 = 1;
  if (1 < *(int *)(param_1 + 0x48)) {
    iVar8 = *(int *)(param_1 + 0x48);
  }
  *(int *)(param_1 + 0x48) = iVar8;
  fVar13 = *(float *)(param_1 + 0x50);
  if (fVar13 <= 0.0001) {
    fVar13 = 0.0001;
  }
  *(float *)(param_1 + 0x50) = fVar13;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_2 != 0 && param_4 != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      FUN_148070d3a(local_e8,param_3);
      FUN_1481e29bc(param_2,local_e8,param_4);
    }
    else {
      FUN_148070d3a(local_90,param_3);
      FUN_1481e449e(param_2,local_90,param_4);
    }
    if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
      while (cVar7 = FUN_148070ed2(param_1 + 8), cVar7 == '\0') {
        FUN_14810c162(param_4,1,*(undefined4 *)(param_1 + 0x50));
        FUN_1438ffc2c(param_1);
      }
      goto LAB_148070b31;
    }
    if ((*(longlong *)(param_4 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(param_4), lVar9 != 0)) {
      uVar10 = FUN_1401cb356();
      local_108 = (undefined8 *)0x0;
      local_100 = 0;
      FUN_1446efa72(&local_108,0,3,0x10);
      local_100 = 3;
      *local_108 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_108[2] = lVar12;
      *local_108 = &PTR_FUN_14ad7fa70;
      local_108[3] = param_1;
      local_108[4] = FUN_1438ffc2c;
      local_118 = 0;
      FUN_1405f67fc(uVar10,&local_f8,&local_108,L"FNiagaraSimCacheCapture_HandleTicker");
      if ((undefined8 *)(param_1 + 0x28) != &local_f8) {
        *(undefined8 *)(param_1 + 0x28) = local_f8;
        local_f8 = 0;
        plVar2 = *(longlong **)(param_1 + 0x30);
        *(longlong **)(param_1 + 0x30) = local_f0;
        local_f0 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))();
        }
      }
      FUN_1449db362(&local_108);
    }
    if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) goto LAB_148070b31;
  }
  FUN_148070982(param_1);
LAB_148070b31:
  FUN_1459becf2(param_3);
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148070d3a FUN_148070d3a body=407 status=ok
// SIG undefined FUN_148070d3a(void)

undefined4 * FUN_148070d3a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 148070ed2 FUN_148070ed2 body=16 status=ok
// SIG undefined FUN_148070ed2(void)

byte FUN_148070ed2(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 148070ee2 FUN_148070ee2 body=207 status=ok
// SIG undefined FUN_148070ee2(void)

ulonglong FUN_148070ee2(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       longlong *param_5,char param_6,undefined4 param_7)

{
  ulonglong uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0 || param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_6 != '\0') {
      FUN_14810c162(param_4,1,param_7);
    }
    FUN_148070d3a(local_88,param_3);
    FUN_1481e29bc(param_2,local_88,param_4);
    FUN_1481e480a(param_2,param_4);
    FUN_1481e592a(param_2,0);
    uVar1 = CONCAT71((int7)((ulonglong)param_4 >> 8),*(longlong *)(param_2 + 0x40) != 0);
  }
  *param_5 = param_2;
  FUN_1459becf2(param_3);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148070fbb FUN_148070fbb body=251 status=ok
// SIG undefined FUN_148070fbb(void)

undefined8 FUN_148070fbb(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 == 0) || (FUN_144a7d35a(param_1,&local_30), (int)local_28 < 0)) {
LAB_148071093:
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      if ((int)local_30[1] <= (int)local_28) break;
      lVar6 = FUN_14479d2ce((ulonglong)local_28 * 8 + *local_30);
      if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x430) != 0)) {
        lVar7 = FUN_1449db7f2();
        plVar2 = *(longlong **)(lVar6 + 0x430);
        if (((plVar2 != (longlong *)0x0) &&
            (((lVar7 != 0 && (lVar3 = plVar2[2], lVar3 != 0)) &&
             (*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
           ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30 && (iVar5 = (**(code **)(*plVar2 + 0x328))(), iVar5 == param_2)))) {
          if (*(longlong *)(lVar6 + 0x3d0) == 0) goto LAB_148071093;
          uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x3d0) + 0x1c8);
          break;
        }
      }
      uVar1 = local_28 + 1;
      bVar4 = -2 < (int)local_28;
      local_28 = uVar1;
    } while (bVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1480710b8 FUN_1480710b8 body=605 status=ok
// SIG undefined FUN_1480710b8(void)

longlong FUN_1480710b8(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar5 = FUN_14479d2ce(param_2 + 0x48);
LAB_1480711a7:
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  else if (*(char *)(param_1 + 0x38) == '\x02') {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    uVar6 = FUN_144af310c(param_2);
    uVar6 = FUN_144b39016(uVar6);
    lVar5 = FUN_148070fbb(uVar6,uVar2);
    goto LAB_1480711a7;
  }
  uVar1 = *param_3;
  if (((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
      ((int)uVar1 < *(int *)(*(longlong *)(param_3 + 2) + 0x48))) &&
     (lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 2) + 0x40) + (ulonglong)uVar1 * 8)
     , lVar5 != 0)) {
    lVar4 = FUN_144a78d6a();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      return lVar5;
    }
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_148071303;
  }
  lVar4 = param_1 + 0x40;
  lVar5 = FUN_14479d2ce(lVar4);
  if (lVar5 == 0) {
    if (((*(int *)(param_1 + 0x4c) == 0 && *(int *)(param_1 + 0x48) == 0) &&
        *(int *)(param_1 + 0x50) == 0) && *(int *)(param_1 + 0x54) == 0) {
      return 0;
    }
    lVar5 = thunk_FUN_140971090();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(lVar4,lVar5);
      if (lVar5 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar5 = FUN_14479d2ce(lVar4);
  if (lVar5 == 0) {
    if (((*(int *)(param_1 + 0x4c) != 0 || *(int *)(param_1 + 0x48) != 0) ||
        *(int *)(param_1 + 0x50) != 0) || *(int *)(param_1 + 0x54) != 0) {
      lVar5 = thunk_FUN_140971090();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar3 == '\0')) {
        FUN_14485c47a(lVar4,lVar5);
        if (lVar5 == 0) goto LAB_148071301;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar4,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_14807116e;
    }
  }
  else {
LAB_14807116e:
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_148071303;
  }
LAB_148071301:
  lVar5 = 0;
LAB_148071303:
  return *(longlong *)(lVar5 + 0x1c8);
}



// FUNCTION 148071316 FUN_148071316 body=490 status=ok
// SIG undefined FUN_148071316(void)

void FUN_148071316(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb36e08) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad7fae0;
  }
  else if (lVar1 == DAT_14cb36e10) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad7fb50;
  }
  else {
    if (lVar1 != DAT_14cb36e18) goto LAB_1480713c5;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad7fbc0;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_1480713c5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148071524 FUN_148071524 body=780 status=ok
// SIG undefined FUN_148071524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148071524(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
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
  int iVar16;
  longlong lVar17;
  uint uVar18;
  double dVar20;
  double dVar21;
  ulonglong uVar19;
  
  lVar5 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar17 = lVar5 + 0x48;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      lVar17 = *(longlong *)(lVar5 + 0x50);
    }
    iVar16 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(lVar5 + 0x58) - 1U &
                               (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar16 != -1) {
      do {
        lVar17 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar16 * 0xa0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar16 * 0xa0) == lVar6)
        goto LAB_1480715a9;
        iVar16 = *(int *)(lVar17 + 0x90);
      } while (iVar16 != -1);
    }
  }
  lVar17 = 0;
LAB_1480715a9:
  uVar18 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar19 = (ulonglong)uVar18;
  FUN_14808676a();
  *(uint *)(param_2 + 0x50) = uVar18 + _DAT_14cb37b34;
  lVar5 = *(longlong *)(param_2 + 0x38);
  *(uint *)(lVar5 + uVar19) = (uint)*(byte *)(lVar17 + 0x10);
  dVar10 = *(double *)(lVar17 + 0x20);
  dVar11 = *(double *)(lVar17 + 0x28);
  dVar12 = *(double *)(lVar17 + 0x30);
  dVar20 = dVar11 + dVar11;
  dVar21 = dVar12 + dVar12;
  dVar7 = dVar10 * (dVar10 + dVar10);
  dVar13 = *(double *)(lVar17 + 0x60);
  dVar14 = *(double *)(lVar17 + 0x68);
  dVar15 = *(double *)(lVar17 + 0x70);
  dVar8 = *(double *)(lVar17 + 0x20) * dVar21;
  dVar1 = *(double *)(lVar17 + 0x38);
  dVar9 = dVar1 * (dVar10 + dVar10);
  dVar2 = *(double *)(lVar17 + 0x40);
  dVar3 = *(double *)(lVar17 + 0x48);
  dVar4 = *(double *)(lVar17 + 0x50);
  *(float *)(lVar5 + 0x10 + uVar19) = (float)((1.0 - (dVar12 * dVar21 + dVar11 * dVar20)) * dVar13);
  *(float *)(lVar5 + 0x14 + uVar19) = (float)((dVar20 * dVar10 + dVar1 * dVar21) * dVar13);
  *(float *)(lVar5 + 0x18 + uVar19) = (float)((dVar8 - dVar20 * dVar1) * dVar13);
  *(undefined4 *)(lVar5 + 0x1c + uVar19) = 0;
  *(float *)(lVar5 + 0x20 + uVar19) = (float)((dVar20 * dVar10 - dVar1 * dVar21) * dVar14);
  *(float *)(lVar5 + 0x24 + uVar19) = (float)((1.0 - (dVar12 * dVar21 + dVar7)) * dVar14);
  *(float *)(lVar5 + 0x28 + uVar19) = (float)((dVar21 * dVar11 + dVar9) * dVar14);
  *(undefined4 *)(lVar5 + 0x2c + uVar19) = 0;
  *(float *)(lVar5 + 0x30 + uVar19) = (float)((dVar20 * dVar1 + dVar8) * dVar15);
  *(float *)(lVar5 + 0x34 + uVar19) = (float)((dVar21 * dVar11 - dVar9) * dVar15);
  *(float *)(lVar5 + 0x38 + uVar19) = (float)((1.0 - (dVar7 + dVar11 * dVar20)) * dVar15);
  *(undefined4 *)(lVar5 + 0x3c + uVar19) = 0;
  *(float *)(lVar5 + 0x40 + uVar19) = (float)dVar2;
  *(float *)(lVar5 + 0x44 + uVar19) = (float)dVar3;
  *(float *)(lVar5 + 0x48 + uVar19) = (float)dVar4;
  *(undefined4 *)(lVar5 + 0x4c + uVar19) = 0x3f800000;
  dVar1 = *(double *)(lVar17 + 0x38);
  dVar2 = *(double *)(lVar17 + 0x30);
  dVar3 = *(double *)(lVar17 + 0x28);
  *(float *)(lVar5 + 0x50 + uVar19) = (float)*(double *)(lVar17 + 0x20);
  *(float *)(lVar5 + 0x54 + uVar19) = (float)dVar3;
  *(float *)(lVar5 + 0x58 + uVar19) = (float)dVar2;
  *(float *)(lVar5 + 0x5c + uVar19) = (float)dVar1;
  dVar1 = *(double *)(lVar17 + 0x70);
  dVar2 = *(double *)(lVar17 + 0x68);
  *(float *)(lVar5 + 0x60 + uVar19) = (float)*(double *)(lVar17 + 0x60);
  *(float *)(lVar5 + 100 + uVar19) = (float)dVar2;
  *(float *)(lVar5 + 0x68 + uVar19) = (float)dVar1;
  *(undefined4 *)(lVar5 + 0x78 + uVar19) = *(undefined4 *)(lVar17 + 0x88);
  *(undefined8 *)(lVar5 + 0x70 + uVar19) = *(undefined8 *)(lVar17 + 0x80);
  return;
}



// FUNCTION 148071830 FUN_148071830 body=191 status=ok
// SIG undefined FUN_148071830(void)

undefined8 FUN_148071830(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uVar1 = FUN_144830b78(param_2 + 6,&DAT_14cb42160);
  param_2[6] = uVar1;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = (undefined8 *)(param_2 + 0x10);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_2[0x2a] = DAT_14c846338;
  *(undefined8 *)(param_2 + 0x28) = DAT_14c846330;
  *(undefined8 *)(param_2 + 0x2b) = 0;
  FUN_1404e5848(param_2,param_3 + 0x1e8,param_1 + 0x58);
  uVar2 = FUN_1480710b8(param_1,param_3,param_2);
  FUN_14485c47a(param_2 + 0x2b,uVar2);
  return 1;
}



// FUNCTION 1480718f6 FUN_1480718f6 body=619 status=ok
// SIG undefined FUN_1480718f6(void)

bool FUN_1480718f6(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_14807191d;
  *(undefined1 *)(param_2 + 0x38) = 0;
  puVar10 = (undefined8 *)(param_2 + 0x40);
  puVar8 = &DAT_14c846480;
  puVar9 = puVar10;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_2 + 0xa8) = DAT_14c846338;
  *(undefined8 *)(param_2 + 0xa0) = DAT_14c846330;
  lVar7 = FUN_1480710b8(param_1,param_3,param_2);
  if (lVar7 != 0) {
    lVar6 = FUN_144a799b0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) {
      plVar2 = *(longlong **)(lVar7 + 0xa8);
      if (plVar2 == (longlong *)0x0) goto LAB_148071a83;
      *(undefined1 *)(param_2 + 0x38) = 1;
      puVar8 = (undefined8 *)(plVar2[0x39] + 0x240);
      if (plVar2[0x39] == 0) {
        puVar8 = &DAT_14c846480;
      }
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      fVar1 = *(float *)(param_3 + 0x14);
      dVar5 = (double)*(float *)(param_3 + 0x10) * -65536.0 + *(double *)(param_2 + 0x68);
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = (double)*(float *)(param_3 + 0xc) * -65536.0 + *(double *)(param_2 + 0x60);
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x60) = auVar3;
      *(double *)(param_2 + 0x70) = (double)fVar1 * -65536.0 + *(double *)(param_2 + 0x70);
      *(double *)(param_2 + 0x78) = *(double *)(param_2 + 0x78) + 0.0;
      (**(code **)(*plVar2 + 0x328))(plVar2,&local_60);
    }
    else {
      *(undefined1 *)(param_2 + 0x38) = 1;
      puVar8 = (undefined8 *)(lVar7 + 0x240);
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      fVar1 = *(float *)(param_3 + 0x14);
      dVar5 = (double)*(float *)(param_3 + 0x10) * -65536.0 + *(double *)(param_2 + 0x68);
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = (double)*(float *)(param_3 + 0xc) * -65536.0 + *(double *)(param_2 + 0x60);
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x60) = auVar4;
      *(double *)(param_2 + 0x70) = (double)fVar1 * -65536.0 + *(double *)(param_2 + 0x70);
      *(double *)(param_2 + 0x78) = *(double *)(param_2 + 0x78) + 0.0;
      plVar2 = *(longlong **)(lVar7 + 0xa8);
      if (plVar2 == (longlong *)0x0) {
        lVar6 = FUN_144a3a302();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_148071a83;
        FUN_14083167e(lVar7,&local_60,0);
      }
      else {
        (**(code **)(*plVar2 + 0x328))(plVar2,&local_60);
      }
    }
    *(float *)(param_2 + 0xa0) = (float)local_60;
    *(float *)(param_2 + 0xa4) = (float)local_58;
    *(float *)(param_2 + 0xa8) = (float)local_50;
  }
LAB_148071a83:
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_14485c47a(param_2 + 0xac,lVar7);
  }
LAB_14807191d:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148071b62 FUN_148071b62 body=48 status=ok
// SIG undefined FUN_148071b62(void)

void FUN_148071b62(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = *(undefined1 *)(param_3 + 0x38);
  puVar2 = (undefined8 *)(param_3 + 0x40);
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0xa8);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_3 + 0xa0);
  return;
}



// FUNCTION 148071b92 FUN_148071b92 body=73 status=ok
// SIG undefined FUN_148071b92(void)

char FUN_148071b92(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  cVar3 = '\0';
  if ((param_2 != 0) && (*(char *)(param_1 + 0x78) != '\0')) {
    lVar2 = FUN_14479d2ce(param_2 + 0xac);
    if (lVar2 != 0) {
      bVar1 = (byte)*(undefined4 *)(lVar2 + 0x48);
      if (bVar1 < *(byte *)(lVar2 + 0x49)) {
        bVar1 = *(byte *)(lVar2 + 0x49);
      }
      bVar4 = 5;
      if (bVar1 < 5) {
        bVar4 = bVar1;
      }
      cVar3 = bVar4 + 1;
    }
  }
  return cVar3;
}



// FUNCTION 148071bdc FUN_148071bdc body=109 status=ok
// SIG undefined FUN_148071bdc(void)

undefined4 FUN_148071bdc(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1481192e4();
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x48)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x4c) != *(int *)(param_1 + 0x4c)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x50) != *(int *)(param_1 + 0x50)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x54) != *(int *)(param_1 + 0x54)) {
      return 0;
    }
    if ((((*(longlong *)(param_1 + 0x58) == *(longlong *)(param_2 + 0x58)) &&
         (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60))) &&
        (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) &&
       (*(int *)(param_2 + 0x3c) == *(int *)(param_1 + 0x3c))) {
      return CONCAT31((int3)((uint)*(int *)(param_2 + 0x3c) >> 8),
                      *(char *)(param_2 + 0x78) == *(char *)(param_1 + 0x78));
    }
  }
  return 0;
}



// FUNCTION 148071c4a FUN_148071c4a body=95 status=ok
// SIG undefined FUN_148071c4a(void)

undefined4 FUN_148071c4a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1414db5a0();
  if ((char)uVar4 != '\0') {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = uVar1;
    *(undefined4 *)(param_2 + 0x48) = uVar2;
    *(undefined4 *)(param_2 + 0x4c) = uVar3;
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    FUN_1447a122a(param_2 + 0x68,param_1 + 0x68);
    *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(param_1 + 0x78);
  }
  return uVar4;
}



// FUNCTION 148071caa FUN_148071caa body=1333 status=ok
// SIG undefined FUN_148071caa(void)

void FUN_148071caa(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
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
  double dVar27;
  double dVar28;
  double dVar29;
  int *piVar30;
  int iVar31;
  int *piVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_1b8 [40];
  float *local_190;
  int local_188;
  float *local_180;
  int local_178;
  float *local_170;
  int local_168;
  undefined4 *local_160;
  int local_158;
  float *local_150;
  int local_148;
  float *local_140;
  int local_138;
  float *local_130;
  int local_128;
  undefined4 *local_120;
  int local_118;
  float *local_110;
  int local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  undefined4 *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  undefined4 *local_a0;
  int local_98;
  int *local_90;
  int local_88;
  undefined1 local_80 [8];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1480721e0(local_80,param_1);
  FUN_140126e42(&local_90,param_1);
  FUN_144a76c20(&local_190,param_1);
  FUN_144a76c20(&local_180,param_1);
  FUN_144a76c20(&local_170,param_1);
  FUN_144a76c20(&local_160,param_1);
  FUN_144a76c20(&local_150,param_1);
  FUN_144a76c20(&local_140,param_1);
  FUN_144a76c20(&local_130,param_1);
  FUN_144a76c20(&local_120,param_1);
  FUN_144a76c20(&local_110,param_1);
  FUN_144a76c20(&local_100,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_b0,param_1);
  FUN_144a76c20(&local_a0);
  piVar30 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar30 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar30) {
    dVar24 = *(double *)(local_78 + 0x40);
    dVar25 = *(double *)(local_78 + 0x48);
    dVar26 = *(double *)(local_78 + 0x50);
    dVar27 = *(double *)(local_78 + 0x80);
    dVar28 = *(double *)(local_78 + 0x88);
    dVar29 = *(double *)(local_78 + 0x90);
    dVar21 = dVar25 + dVar25;
    dVar22 = dVar26 + dVar26;
    dVar23 = dVar24 * (dVar24 + dVar24);
    dVar17 = *(double *)(local_78 + 0x58);
    dVar33 = dVar22 * dVar17;
    dVar34 = (dVar24 + dVar24) * *(double *)(local_78 + 0x58);
    dVar17 = dVar21 * dVar17;
    dVar18 = *(double *)(local_78 + 0x60);
    dVar19 = *(double *)(local_78 + 0x68);
    dVar20 = *(double *)(local_78 + 0x70);
    iVar31 = 0;
    do {
      piVar30 = local_90 + local_88;
      *local_90 = -(uint)*(byte *)(local_78 + 0x38);
      pfVar1 = local_190 + local_188;
      *local_190 = (float)((1.0 - (dVar26 * dVar22 + dVar25 * dVar21)) * dVar27);
      pfVar2 = local_180 + local_178;
      *local_180 = (float)((dVar21 * dVar24 + dVar33) * dVar27);
      pfVar3 = local_170 + local_168;
      *local_170 = (float)((dVar22 * dVar24 - dVar17) * dVar27);
      puVar4 = local_160 + local_158;
      *local_160 = 0;
      pfVar5 = local_150 + local_148;
      *local_150 = (float)((dVar21 * dVar24 - dVar33) * dVar28);
      pfVar6 = local_140 + local_138;
      *local_140 = (float)((1.0 - (dVar26 * dVar22 + dVar23)) * dVar28);
      pfVar7 = local_130 + local_128;
      *local_130 = (float)((dVar22 * dVar25 + dVar34) * dVar28);
      puVar8 = local_120 + local_118;
      *local_120 = 0;
      pfVar9 = local_110 + local_108;
      *local_110 = (float)((dVar17 + dVar22 * dVar24) * dVar29);
      pfVar10 = local_100 + local_f8;
      *local_100 = (float)((dVar22 * dVar25 - dVar34) * dVar29);
      pfVar11 = local_f0 + local_e8;
      *local_f0 = (float)((1.0 - (dVar23 + dVar25 * dVar21)) * dVar29);
      puVar12 = local_e0 + local_d8;
      *local_e0 = 0;
      pfVar13 = local_d0 + local_c8;
      *local_d0 = (float)dVar18;
      pfVar14 = local_c0 + local_b8;
      *local_c0 = (float)dVar19;
      pfVar15 = local_b0 + local_a8;
      *local_b0 = (float)dVar20;
      puVar16 = local_a0 + local_98;
      *local_a0 = 0x3f800000;
      iVar31 = iVar31 + 1;
      piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar32 = (int *)(param_1 + 0x3c);
      }
      local_190 = pfVar1;
      local_180 = pfVar2;
      local_170 = pfVar3;
      local_160 = puVar4;
      local_150 = pfVar5;
      local_140 = pfVar6;
      local_130 = pfVar7;
      local_120 = puVar8;
      local_110 = pfVar9;
      local_100 = pfVar10;
      local_f0 = pfVar11;
      local_e0 = puVar12;
      local_d0 = pfVar13;
      local_c0 = pfVar14;
      local_b0 = pfVar15;
      local_a0 = puVar16;
      local_90 = piVar30;
    } while (iVar31 < *piVar32);
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480721e0 FUN_1480721e0 body=148 status=ok
// SIG undefined FUN_1480721e0(void)

void FUN_1480721e0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148072274 FUN_148072274 body=723 status=ok
// SIG undefined FUN_148072274(void)

void FUN_148072274(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined1 auStack_f8 [40];
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1480721e0(local_20,param_1);
  FUN_140126e42(&local_30,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_50,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_a0,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_b0,param_1);
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar14 = 0;
    do {
      piVar15 = local_30 + local_28;
      *local_30 = -(uint)*(byte *)(local_18 + 0x38);
      dVar11 = *(double *)(local_18 + 0x68);
      pfVar1 = local_60 + local_58;
      dVar12 = *(double *)(local_18 + 0x70);
      *local_60 = (float)*(double *)(local_18 + 0x60);
      pfVar2 = local_50 + local_48;
      *local_50 = (float)dVar11;
      pfVar3 = local_40 + local_38;
      *local_40 = (float)dVar12;
      dVar11 = *(double *)(local_18 + 0x58);
      dVar12 = *(double *)(local_18 + 0x50);
      dVar13 = *(double *)(local_18 + 0x48);
      pfVar4 = local_a0 + local_98;
      *local_a0 = (float)*(double *)(local_18 + 0x40);
      pfVar5 = local_90 + local_88;
      *local_90 = (float)dVar13;
      pfVar6 = local_80 + local_78;
      *local_80 = (float)dVar12;
      pfVar7 = local_70 + local_68;
      *local_70 = (float)dVar11;
      dVar11 = *(double *)(local_18 + 0x90);
      dVar12 = *(double *)(local_18 + 0x88);
      pfVar8 = local_d0 + local_c8;
      *local_d0 = (float)*(double *)(local_18 + 0x80);
      pfVar9 = local_c0 + local_b8;
      *local_c0 = (float)dVar12;
      pfVar10 = local_b0 + local_a8;
      *local_b0 = (float)dVar11;
      iVar14 = iVar14 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_d0 = pfVar8;
      local_c0 = pfVar9;
      local_b0 = pfVar10;
      local_a0 = pfVar4;
      local_90 = pfVar5;
      local_80 = pfVar6;
      local_70 = pfVar7;
      local_60 = pfVar1;
      local_50 = pfVar2;
      local_40 = pfVar3;
      local_30 = piVar15;
    } while (iVar14 < *piVar16);
  }
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148072548 FUN_148072548 body=314 status=ok
// SIG undefined FUN_148072548(void)

void FUN_148072548(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  int local_58;
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  int *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1480721e0(local_20,param_1);
  FUN_140126e42(&local_30,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_50,param_1);
  FUN_144a76c20(&local_40,param_1);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar6 = 0;
    do {
      piVar7 = local_30 + local_28;
      *local_30 = -(uint)*(byte *)(local_18 + 0x38);
      uVar4 = *(undefined4 *)(local_18 + 0xa4);
      uVar5 = *(undefined4 *)(local_18 + 0xa8);
      puVar1 = local_60 + local_58;
      *local_60 = *(undefined4 *)(local_18 + 0xa0);
      puVar2 = local_50 + local_48;
      *local_50 = uVar4;
      puVar3 = local_40 + local_38;
      *local_40 = uVar5;
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_60 = puVar1;
      local_50 = puVar2;
      local_40 = puVar3;
      local_30 = piVar7;
    } while (iVar6 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480726a2 FUN_1480726a2 body=467 status=ok
// SIG undefined FUN_1480726a2(void)

void FUN_1480726a2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  ulonglong uVar12;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar11 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar12 = (ulonglong)uVar11;
  FUN_145c672d8();
  *(uint *)(param_2 + 0x50) = DAT_14cb37bc4 + uVar11;
  lVar2 = *(longlong *)(param_2 + 0x38);
  lVar1 = lVar2 + uVar12;
  FUN_144b34a0e(param_2,&local_4c);
  *(undefined4 *)((undefined8 *)(lVar2 + uVar12) + 1) = local_44;
  *(undefined8 *)(lVar2 + uVar12) = local_4c;
  bVar4 = FUN_144b34a28(param_2);
  bVar5 = FUN_144b34a28(param_2,lVar2 + uVar12 + 0x20);
  bVar6 = FUN_144b34a28(param_2,lVar2 + uVar12 + 0x30);
  if ((byte)(bVar5 | bVar6 | bVar4) == 1) {
    lVar2 = *(longlong *)(param_2 + 0x48);
    if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
      lVar10 = lVar2 + 0x48;
      if (*(longlong *)(lVar2 + 0x50) != 0) {
        lVar10 = *(longlong *)(lVar2 + 0x50);
      }
      iVar9 = *(int *)(lVar10 + (ulonglong)
                                (*(int *)(lVar2 + 0x58) - 1U &
                                (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
      if (iVar9 != -1) {
        do {
          lVar10 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x20;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x20) == lVar3)
          goto LAB_148072758;
          iVar9 = *(int *)(lVar10 + 0x18);
        } while (iVar9 != -1);
      }
    }
    lVar10 = 0;
LAB_148072758:
    uVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x110))();
    if ((lVar10 == 0) || (*(int *)(lVar10 + 8) < 1)) {
      plVar8 = (longlong *)FUN_1480d7c30(uVar7);
    }
    else {
      plVar8 = (longlong *)FUN_1480d7b94(uVar7,lVar2);
    }
    *(int *)(lVar1 + 0xc) = (int)plVar8[8];
    if (bVar4 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(*plVar8 + 8);
      *(int *)(lVar1 + 0x18) = (int)plVar8[1];
    }
    if (bVar5 != 0) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(plVar8[4] + 0x10);
      *(int *)(lVar1 + 0x28) = (int)plVar8[5];
    }
    if (bVar6 != 0) {
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(plVar8[6] + 8);
      *(int *)(lVar1 + 0x38) = (int)plVar8[7];
    }
  }
  else {
    *(undefined4 *)(lVar1 + 0xc) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148072876 FUN_148072876 body=57 status=ok
// SIG undefined FUN_148072876(void)

undefined4 FUN_148072876(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if (((cVar1 == '\0') || (*(int *)(param_2 + 0x38) != *(int *)(param_1 + 0x38))) ||
     (*(int *)(param_2 + 0x3c) != *(int *)(param_1 + 0x3c))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x3c) >> 8),
                     *(char *)(param_2 + 0x40) == *(char *)(param_1 + 0x40));
  }
  return uVar2;
}



// FUNCTION 1480728b0 FUN_1480728b0 body=85 status=ok
// SIG undefined FUN_1480728b0(void)

undefined4 FUN_1480728b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1414db5a0();
  if ((char)uVar2 != '\0') {
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 0x40);
    uVar1 = *(uint *)(param_2 + 6);
    *(uint *)(param_2 + 6) = uVar1 | 1;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return uVar2;
}



// FUNCTION 14807290a FUN_14807290a body=548 status=ok
// SIG undefined FUN_14807290a(void)

undefined8 FUN_14807290a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(byte *)(param_1 + 0x30) & 4) != 0) && ((longlong)*(int *)(param_3 + 0x110) != 0)) {
    local_78 = param_2 + 8;
    plVar13 = *(longlong **)(param_3 + 0x108);
    plVar8 = plVar13 + (longlong)*(int *)(param_3 + 0x110) * 2;
    local_68 = plVar8;
    local_58 = param_1;
    do {
      lVar5 = *plVar13;
      if (((*(int *)(lVar5 + 0xd4) != 4) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
         (*(char *)(lVar5 + 0xd1) == '\x01')) {
        lVar5 = *(longlong *)(lVar5 + 0x18);
        local_70 = *(longlong **)(*(longlong *)(lVar5 + 0x60) + 0x20);
        local_60 = *(longlong **)(*(longlong *)(lVar5 + 0x60) + 0x28);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (0 < *(int *)(lVar5 + 0xb0)) {
          lVar9 = 0;
          do {
            if ((*(longlong *)(*(longlong *)(lVar5 + 0xa8) + lVar9 * 8) == param_1) &&
               (lVar9 < (int)local_70[1])) {
              lVar14 = *local_70;
              uVar3 = *(uint *)(lVar14 + 0x30 + lVar9 * 0x38);
              iVar4 = *(int *)(param_2 + 9);
              *(uint *)(param_2 + 9) = uVar3 + iVar4;
              if ((uint)(*(int *)((longlong)param_2 + 0x4c) - iVar4) < uVar3) {
                FUN_148087490(local_78);
              }
              lVar14 = lVar14 + lVar9 * 0x38;
              memset((void *)((longlong)iVar4 * 8 + *local_78),0,(longlong)(int)uVar3 << 3);
              param_1 = local_58;
              if (0 < *(int *)(lVar14 + 0x30)) {
                lVar11 = 4;
                lVar12 = 0;
                do {
                  lVar6 = *(longlong *)(lVar14 + 0x28);
                  if (*(int *)(lVar6 + lVar11 * 8) < 1) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = *(undefined8 *)(*(longlong *)(lVar6 + -8 + lVar11 * 8) + 8);
                  }
                  FUN_148072b30(param_2,&local_50,*(undefined8 *)(lVar6 + -0x20 + lVar11 * 8),uVar10
                               );
                  *(undefined8 *)(param_2[8] + lVar12 * 8) = local_50;
                  lVar12 = lVar12 + 1;
                  lVar11 = lVar11 + 10;
                } while (lVar12 < *(int *)(lVar14 + 0x30));
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar5 + 0xb0));
        }
        plVar7 = local_60;
        plVar8 = local_68;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
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
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148072b30 FUN_148072b30 body=800 status=ok
// SIG undefined FUN_148072b30(void)

char * FUN_148072b30(longlong *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_4;
  if (DAT_14cb36eb0 == param_3) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar3 = DAT_14c8407a8;
    FUN_1400021e4(&local_48,&local_58);
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 200))(plVar3,puVar4,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (plVar3 == (longlong *)0x0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
    }
    iVar6 = (int)param_1[7];
    *(int *)(param_1 + 7) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x3c) == iVar6) {
      FUN_1447808da(param_1 + 6,iVar6);
    }
    *(undefined4 *)(param_1[6] + (longlong)iVar6 * 4) = 0;
    if (cVar2 == '\0') goto LAB_148072d72;
    iVar7 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    plVar5 = param_1;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_1480847c0(param_1,iVar7);
    }
  }
  else if (DAT_14cb36eb8 == param_3) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar3 = DAT_14c8407a8;
    FUN_1400021e4(&local_48,&local_58);
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 200))(plVar3,puVar4,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (plVar3 == (longlong *)0x0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    iVar6 = (int)param_1[7];
    *(int *)(param_1 + 7) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x3c) == iVar6) {
      FUN_1447808da(param_1 + 6,iVar6);
    }
    *(undefined4 *)(param_1[6] + (longlong)iVar6 * 4) = 0;
    if (cVar2 == '\0') goto LAB_148072d72;
    plVar5 = param_1 + 2;
    iVar7 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar7 + 1U) {
LAB_148072e3d:
      FUN_1480847c0(plVar5,iVar7);
    }
  }
  else {
    if (DAT_14cb36ec0 != param_3) {
      iVar6 = -1;
      cVar2 = '\0';
      goto LAB_148072d72;
    }
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar3 = DAT_14c8407a8;
    FUN_1400021e4(&local_48,&local_58);
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 200))(plVar3,puVar4,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (plVar3 == (longlong *)0x0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    iVar6 = (int)param_1[7];
    *(int *)(param_1 + 7) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x3c) == iVar6) {
      FUN_1447808da(param_1 + 6,iVar6);
    }
    *(undefined4 *)(param_1[6] + (longlong)iVar6 * 4) = 0;
    if (cVar2 == '\0') goto LAB_148072d72;
    plVar5 = param_1 + 4;
    iVar7 = (int)param_1[5];
    *(uint *)(param_1 + 5) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2c) < iVar7 + 1U) goto LAB_148072e3d;
  }
  lVar1 = *plVar5;
  *(longlong **)(lVar1 + (longlong)iVar7 * 0x10) = plVar3;
  *(int *)(lVar1 + 8 + (longlong)iVar7 * 0x10) = iVar6;
LAB_148072d72:
  *param_2 = cVar2;
  *(int *)(param_2 + 4) = iVar6;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148072e52 FUN_148072e52 body=89 status=ok
// SIG undefined FUN_148072e52(void)

void FUN_148072e52(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148072ebe FUN_148072ebe body=132 status=ok
// SIG undefined FUN_148072ebe(void)

void FUN_148072ebe(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  iVar4 = 1;
  if (1 < iVar1) {
    iVar4 = iVar1;
  }
  *(int *)(param_1 + 1) = iVar4 * 2;
  FUN_1447808da();
  memset((void *)*param_1,0,(ulonglong)(uint)(iVar4 * 2) << 2);
  if (0 < (longlong)iVar1) {
    lVar2 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x40) + 4 + lVar2 * 8);
      *(uint *)(*param_1 + lVar2 * 8) = (uint)*(byte *)(*(longlong *)(param_2 + 0x40) + lVar2 * 8);
      if (lVar3 != -1) {
        *(undefined4 *)(*param_1 + 4 + lVar2 * 8) =
             *(undefined4 *)(*(longlong *)(param_2 + 0x30) + lVar3 * 4);
      }
      lVar2 = lVar2 + 1;
    } while (iVar1 != lVar2);
  }
  return;
}



// FUNCTION 148072f42 FUN_148072f42 body=177 status=ok
// SIG undefined FUN_148072f42(void)

undefined8 FUN_148072f42(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  if ((longlong)(int)param_2[1] != 0) {
    puVar2 = (undefined8 *)*param_2;
    puVar3 = puVar2 + (longlong)(int)param_2[1] * 2;
    do {
      uVar4 = (**(code **)(*(longlong *)*puVar2 + 0xb8))();
      *(undefined4 *)(param_2[6] + (longlong)*(int *)(puVar2 + 1) * 4) = uVar4;
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar3);
  }
  if ((longlong)(int)param_2[3] != 0) {
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = puVar2 + (longlong)(int)param_2[3] * 2;
    do {
      uVar4 = (**(code **)(*(longlong *)*puVar2 + 0xb0))();
      *(undefined4 *)(param_2[6] + (longlong)*(int *)(puVar2 + 1) * 4) = uVar4;
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar3);
  }
  if ((longlong)(int)param_2[5] != 0) {
    puVar2 = (undefined8 *)param_2[4];
    puVar3 = puVar2 + (longlong)(int)param_2[5] * 2;
    do {
      uVar1 = (**(code **)(*(longlong *)*puVar2 + 0xa8))();
      *(undefined1 *)(param_2[6] + (longlong)*(int *)(puVar2 + 1) * 4) = uVar1;
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar3);
  }
  return 0;
}



// FUNCTION 148072ff4 FUN_148072ff4 body=1095 status=ok
// SIG undefined FUN_148072ff4(void)

void FUN_148072ff4(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = DAT_14c8407a8;
  FUN_1400021e4(param_2[5] + 8,&local_58);
  puVar7 = local_58;
  if (local_50 == 0) {
    puVar7 = (undefined8 *)&DAT_149dfb77a;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 200))(plVar5,puVar7,1);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *param_2;
  if (lVar3 == DAT_14cb36eb0) {
    if (plVar5 == (longlong *)0x0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    uVar1 = *(uint *)(param_3 + 7);
    *(uint *)(param_3 + 7) = uVar1 + 1;
    if (*(uint *)((longlong)param_3 + 0x3c) == uVar1) {
      FUN_1447808da(param_3 + 6,uVar1);
    }
    *(undefined4 *)(param_3[6] + (longlong)(int)uVar1 * 4) = 0;
    if (cVar4 == '\0') {
      uVar9 = 0;
    }
    else {
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1480847c0(param_3,iVar2);
      }
      uVar9 = 0x100000000;
      lVar3 = *param_3;
      *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar5;
      *(uint *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = uVar1;
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    *local_58 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[2] = lVar8;
    *local_58 = &PTR_FUN_14ad7fee0;
    local_58[3] = uVar9 | uVar1;
  }
  else {
    if (lVar3 == DAT_14cb36eb8) {
      if (plVar5 == (longlong *)0x0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
      }
      uVar1 = *(uint *)(param_3 + 7);
      *(uint *)(param_3 + 7) = uVar1 + 1;
      if (*(uint *)((longlong)param_3 + 0x3c) == uVar1) {
        FUN_1447808da(param_3 + 6,uVar1);
      }
      *(undefined4 *)(param_3[6] + (longlong)(int)uVar1 * 4) = 0;
      if (cVar4 == '\0') {
        uVar9 = 0;
      }
      else {
        iVar2 = (int)param_3[3];
        *(uint *)(param_3 + 3) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0x1c) < iVar2 + 1U) {
          FUN_1480847c0(param_3 + 2,iVar2);
        }
        uVar9 = 0x100000000;
        lVar3 = param_3[2];
        *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar5;
        *(uint *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = uVar1;
      }
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      *local_58 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_58[2] = lVar8;
      ppuVar6 = &PTR_FUN_14ad7ff50;
    }
    else {
      if (lVar3 != DAT_14cb36ec0) goto LAB_14807322c;
      if (plVar5 == (longlong *)0x0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
      }
      uVar1 = *(uint *)(param_3 + 7);
      *(uint *)(param_3 + 7) = uVar1 + 1;
      if (*(uint *)((longlong)param_3 + 0x3c) == uVar1) {
        FUN_1447808da(param_3 + 6,uVar1);
      }
      *(undefined4 *)(param_3[6] + (longlong)(int)uVar1 * 4) = 0;
      if (cVar4 == '\0') {
        uVar9 = 0;
      }
      else {
        iVar2 = (int)param_3[5];
        *(uint *)(param_3 + 5) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0x2c) < iVar2 + 1U) {
          FUN_1480847c0(param_3 + 4,iVar2);
        }
        uVar9 = 0x100000000;
        lVar3 = param_3[4];
        *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar5;
        *(uint *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = uVar1;
      }
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      *local_58 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_58[2] = lVar8;
      ppuVar6 = &PTR_FUN_14ad7ffc0;
    }
    *local_58 = ppuVar6;
    local_58[3] = uVar9 | uVar1;
  }
  local_50 = 2;
  FUN_144a450dc(param_4,&local_58);
  FUN_1449db362(&local_58);
LAB_14807322c:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807345e FUN_14807345e body=163 status=ok
// SIG undefined FUN_14807345e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14807345e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x50);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0x28);
        if (*plVar5 == lVar2) goto LAB_1480734b6;
        iVar3 = (int)plVar5[4];
      } while (iVar3 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1480734b6:
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1480879bc();
  *(uint *)(param_2 + 0x50) = uVar4 + _DAT_14cb37c54;
  *(longlong *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar4) = plVar5[2];
  return;
}



// FUNCTION 148073502 FUN_148073502 body=164 status=ok
// SIG undefined FUN_148073502(void)

undefined8 * FUN_148073502(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1480735a7(param_2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  uVar1 = FUN_148073748(param_3);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_148087c2a(param_1);
  }
  local_40 = param_3;
  local_38 = param_1;
  FUN_143901932(&local_40,param_2 + 8);
  FUN_143901932(&local_40,param_2 + 0x18);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480735a7 FUN_1480735a7 body=417 status=ok
// SIG undefined FUN_1480735a7(void)

int FUN_1480735a7(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  
  uVar3 = *param_1;
  uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar5 = (uint)uVar3 & 0xffff;
  iVar9 = ((uint)uVar3 << 0x10 | uVar5) + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4);
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    puVar10 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((longlong)puVar10 + (longlong)*(int *)(param_1 + 2) * 0xc);
    do {
      uVar3 = *puVar10;
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar8 = (uint)uVar3 & 0xffff;
      puVar7 = (ulonglong *)FUN_144741050(puVar10 + 1);
      uVar2 = *(undefined1 *)((longlong)puVar7 + 10);
      uVar5 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar6 = FUN_144a78877(uVar5 >> 0x10 ^ uVar5,(short)puVar7[1]);
      uVar6 = FUN_144a78877(uVar6,uVar2);
      uVar6 = FUN_144a78877(uVar6,((uint)uVar3 << 0x10 | uVar8) + (int)((ulonglong)uVar3 >> 0x20) +
                                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4));
      iVar9 = FUN_144a78877(iVar9,uVar6);
      puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
    } while (puVar10 != puVar1);
  }
  if ((longlong)*(int *)(param_1 + 4) != 0) {
    puVar10 = (undefined8 *)param_1[3];
    puVar1 = (undefined8 *)((longlong)puVar10 + (longlong)*(int *)(param_1 + 4) * 0xc);
    do {
      uVar3 = *puVar10;
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar8 = (uint)uVar3 & 0xffff;
      puVar7 = (ulonglong *)FUN_144741050(puVar10 + 1);
      uVar2 = *(undefined1 *)((longlong)puVar7 + 10);
      uVar5 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar6 = FUN_144a78877(uVar5 >> 0x10 ^ uVar5,(short)puVar7[1]);
      uVar6 = FUN_144a78877(uVar6,uVar2);
      uVar6 = FUN_144a78877(uVar6,((uint)uVar3 << 0x10 | uVar8) + (int)((ulonglong)uVar3 >> 0x20) +
                                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4));
      iVar9 = FUN_144a78877(iVar9,uVar6);
      puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
    } while (puVar10 != puVar1);
  }
  return iVar9;
}



// FUNCTION 148073748 FUN_148073748 body=226 status=ok
// SIG undefined FUN_148073748(void)

ulonglong FUN_148073748(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) == 0xffffffff) {
    *(undefined4 *)(param_1 + 8) = 0;
    if ((longlong)(int)param_1[1] == 0) {
      uVar8 = 0;
    }
    else {
      puVar10 = (undefined8 *)*param_1;
      puVar1 = (undefined8 *)((longlong)puVar10 + (longlong)(int)param_1[1] * 0xc);
      do {
        uVar3 = *puVar10;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar9 = (uint)uVar3 & 0xffff;
        puVar7 = (ulonglong *)FUN_144741050(puVar10 + 1);
        uVar2 = *(undefined1 *)((longlong)puVar7 + 10);
        uVar5 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar6 = FUN_144a78877(uVar5 >> 0x10 ^ uVar5,(short)puVar7[1]);
        uVar6 = FUN_144a78877(uVar6,uVar2);
        uVar6 = FUN_144a78877(uVar6,((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20)
                                    + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4));
        uVar8 = FUN_144a78877((int)param_1[8],uVar6);
        *(int *)(param_1 + 8) = (int)uVar8;
        puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
      } while (puVar10 != puVar1);
    }
  }
  return uVar8;
}



// FUNCTION 14807382a FUN_14807382a body=1072 status=ok
// SIG undefined FUN_14807382a(void)

void FUN_14807382a(longlong *param_1,longlong param_2,uint *param_3,uint *param_4,uint *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  uint *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_2 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  local_60 = param_2;
  FUN_144a2daf0(&local_60);
  if (local_58 != 0) {
    do {
      lVar3 = local_58;
      lVar2 = FUN_144a64e42();
      lVar8 = *(longlong *)(lVar3 + 8);
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar9 = lVar8 != 0;
        if (lVar8 != lVar2 && bVar9) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar9 = lVar8 != 0;
            if (lVar8 == lVar2) break;
          } while (lVar8 != 0);
        }
        if (bVar9) goto LAB_1480738bf;
LAB_148073963:
        lVar2 = FUN_140e98e1a();
        lVar8 = *(longlong *)(lVar3 + 8);
        if (*(ulonglong *)(lVar2 + 8) == 0) {
          bVar9 = lVar8 != 0;
          if (lVar8 != lVar2 && bVar9) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              bVar9 = lVar8 != 0;
              if (lVar8 == lVar2) break;
            } while (lVar8 != 0);
          }
          if (bVar9) goto LAB_14807397f;
        }
        else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_14807397f:
          if (*param_8 == -1) {
            iVar6 = -1;
          }
          else {
            iVar6 = *param_7;
            *param_7 = iVar6 + 1;
          }
          uVar7 = *param_5;
          *param_5 = uVar7 + 1;
          iVar1 = (int)param_1[1];
          lVar8 = (longlong)iVar1;
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_148087c5a(param_1,iVar1);
          }
          lVar3 = *param_1;
          *(int *)(lVar3 + lVar8 * 8) = iVar6;
          uVar7 = uVar7 & 0x3fffffff;
          goto LAB_148073903;
        }
        lVar2 = FUN_144a7452c();
        lVar8 = *(longlong *)(lVar3 + 8);
        if (*(ulonglong *)(lVar2 + 8) == 0) {
          bVar9 = lVar8 != 0;
          if (lVar8 != lVar2 && bVar9) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              bVar9 = lVar8 != 0;
              if (lVar8 == lVar2) break;
            } while (lVar8 != 0);
          }
          if (bVar9) goto LAB_148073a28;
        }
        else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_148073a28:
          iVar6 = *param_7;
          if (iVar6 != -1) {
            *param_7 = iVar6 + 1;
          }
          uVar7 = *param_4;
          *param_4 = uVar7 + 1;
          iVar1 = (int)param_1[1];
          lVar8 = (longlong)iVar1;
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_148087c5a(param_1,iVar1);
          }
          lVar3 = *param_1;
          *(int *)(lVar3 + lVar8 * 8) = iVar6;
          uVar7 = uVar7 & 0x3fffffff | 0x80000000;
          goto LAB_148073903;
        }
        lVar2 = FUN_144a5ab96();
        lVar8 = *(longlong *)(lVar3 + 8);
        if (*(ulonglong *)(lVar2 + 8) == 0) {
          bVar9 = lVar8 != 0;
          lVar5 = lVar8;
          if (lVar8 != lVar2 && bVar9) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar9 = lVar5 != 0;
              if (lVar5 == lVar2) break;
            } while (lVar5 != 0);
          }
          if (bVar9) goto LAB_148073ad1;
        }
        else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_148073ad1:
          iVar6 = *param_7;
          if (iVar6 != -1) {
            *param_7 = iVar6 + 1;
          }
          uVar7 = *param_4;
          *param_4 = uVar7 + 1;
          iVar1 = (int)param_1[1];
          lVar8 = (longlong)iVar1;
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_148087c5a(param_1,iVar1);
          }
          lVar3 = *param_1;
          *(int *)(lVar3 + lVar8 * 8) = iVar6;
          uVar7 = uVar7 | 0xc0000000;
          goto LAB_148073903;
        }
        lVar2 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar2 + 8) == 0) {
          bVar9 = lVar8 != 0;
          if (lVar8 != lVar2 && bVar9) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              bVar9 = lVar8 != 0;
              if (lVar8 == lVar2) break;
            } while (lVar8 != 0);
          }
          if (!bVar9) goto LAB_148073c05;
        }
        else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
LAB_148073c05:
          *(undefined4 *)(param_1 + 4) = 0;
          break;
        }
        uVar4 = FUN_140c6c286(*(undefined8 *)(lVar3 + 0x70),1);
        local_70 = param_8;
        local_78 = param_7;
        local_80 = param_6;
        local_88 = param_5;
        FUN_14807382a(param_1,uVar4,param_3,param_4);
      }
      else {
        if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_148073963;
LAB_1480738bf:
        iVar6 = *param_6;
        if (iVar6 != -1) {
          *param_6 = iVar6 + 1;
        }
        uVar7 = *param_3;
        *param_3 = uVar7 + 1;
        iVar1 = (int)param_1[1];
        lVar8 = (longlong)iVar1;
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_148087c5a(param_1,iVar1);
        }
        lVar3 = *param_1;
        *(int *)(lVar3 + lVar8 * 8) = iVar6;
        uVar7 = uVar7 & 0x3fffffff | 0x40000000;
LAB_148073903:
        *(uint *)(lVar3 + 4 + lVar8 * 8) = uVar7;
      }
      local_58 = *(longlong *)(local_58 + 0x18);
      FUN_144a2daf0(&local_60);
    } while (local_58 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148073c5c FUN_148073c5c body=188 status=ok
// SIG undefined FUN_148073c5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_148073c5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37d00) {
    FUN_144b3d300(&DAT_14cb37d00);
    if (DAT_14cb37d00 == -1) {
      _DAT_14cb37cc0 = 0;
      _DAT_14cb37cc8 = 0;
      _DAT_14cb37ca0 = 0;
      uRam000000014cb37ca8 = 0;
      _DAT_14cb37ccc = 0xffffffff00000080;
      _DAT_14cb37cd4 = 0;
      _DAT_14cb37ce0 = 0;
      _DAT_14cb37ce8 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb37cf0);
      DAT_14cb37cf8 = &DAT_14cb37ca0;
      atexit((_func_5014 *)&LAB_14390b2ae);
      _Init_thread_footer(&DAT_14cb37d00);
    }
  }
  return DAT_14cb37cf8;
}



// FUNCTION 148073d18 FUN_148073d18 body=64 status=ok
// SIG undefined FUN_148073d18(void)

void FUN_148073d18(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148087e6c(param_1);
    FUN_148087fb0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148073d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  return;
}



// FUNCTION 148073d58 FUN_148073d58 body=556 status=ok
// SIG undefined FUN_148073d58(void)

longlong * FUN_148073d58(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [44];
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_148073748(param_4);
  uVar4 = FUN_1480735a7(param_3);
  uVar5 = FUN_144a78877(uVar4,uVar3);
  SRWLock = (PSRWLOCK)(param_1 + 10);
  local_5c = uVar5;
  AcquireSRWLockShared(SRWLock);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar6 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar6 * 0x20) == uVar5) {
          if (((lVar1 != 0) && ((longlong *)(lVar1 + 8) != (longlong *)0x0)) &&
             (lVar9 = *(longlong *)(lVar1 + 8), lVar9 != 0)) {
            *param_2 = lVar9;
            lVar1 = *(longlong *)(lVar1 + 0x10);
            param_2[1] = lVar1;
            if (lVar1 != 0) {
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
            }
            ReleaseSRWLockShared(SRWLock);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockExclusive(SRWLock);
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ad800c0;
  plVar7 = plVar8 + 2;
  FUN_148073502(plVar7,param_3,param_4);
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    plVar7 = (longlong *)*param_2;
  }
  if (plVar7 == (longlong *)0x0) {
    local_58 = &local_5c;
    FUN_148088114(param_1,&local_4c);
    lVar9 = (longlong)local_4c * 0x20 + *param_1;
    lVar1 = param_2[1];
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar9 + 0x10);
    *(undefined8 *)(lVar9 + 8) = 0;
    *(longlong *)(lVar9 + 0x10) = lVar1;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148073f86 FUN_148073f86 body=154 status=ok
// SIG undefined FUN_148073f86(void)

ulonglong FUN_148073f86(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[1]) {
    lVar4 = 0x20;
    uVar3 = 0;
    do {
      lVar1 = *param_1;
      if ((((*(longlong *)(lVar1 + -0x20 + lVar4) == param_2) &&
           (*(int *)(param_3 + 1) == *(int *)(lVar1 + -0x10 + lVar4))) &&
          (cVar2 = FUN_143909b4c(*param_3,*(undefined8 *)(lVar1 + -0x18 + lVar4)), cVar2 != '\0'))
         && ((*(int *)(param_4 + 1) == *(int *)(lVar1 + lVar4) &&
             (cVar2 = FUN_143909b4c(*param_4,*(undefined8 *)(lVar1 + -8 + lVar4)), cVar2 != '\0'))))
      {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x28;
    } while ((longlong)uVar3 < (longlong)(int)param_1[1]);
  }
  return 0xffffffff;
}



// FUNCTION 148074020 FUN_148074020 body=573 status=ok
// SIG undefined FUN_148074020(void)

void FUN_148074020(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 uStack_28;
  longlong *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb370a0) {
    FUN_144b3d300(&DAT_14cb370a0);
    if (DAT_14cb370a0 == -1) {
      FUN_14807425e(&DAT_14cb37008);
      atexit((_func_5014 *)&LAB_143902115);
      _Init_thread_footer(&DAT_14cb370a0);
    }
  }
  if ((DAT_14cb37008 == 0) || ((DAT_14cb37018 < 1 && ((int)DAT_14cb37028 < 1)))) {
    FUN_1446f470e(&local_40,&DAT_14a1c72e4,1);
    DAT_14cb37008 = local_40;
    DAT_14cb37038 = DAT_14cb37038 | 4;
    FUN_144a5dc74(local_20);
    FUN_1446f470e(&local_48,L"DataChannel interface",1);
    local_58 = FUN_145b69f42();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    local_50 = 1;
    local_4e = 0;
    local_4c = 0xffffffff;
    local_40 = local_48;
    local_38[0] = FUN_144830b78(local_38);
    local_30 = 0;
    uStack_28 = 0;
    FUN_1480742ba(&DAT_14cb37008,&local_40,local_20);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x10))();
    }
    FUN_144a5dc74(local_20);
    FUN_1446f470e(&local_58,&DAT_14a1c72e4,1);
    local_40 = local_58;
    local_38[0] = FUN_144830b78(local_38,&DAT_14cb420d0);
    uVar2 = DAT_14cb37028;
    local_30 = 0;
    uStack_28 = 0;
    lVar3 = (longlong)(int)DAT_14cb37028;
    DAT_14cb37028 = DAT_14cb37028 + 1;
    if (DAT_14cb3702c < DAT_14cb37028) {
      FUN_14024cd4c(&DAT_14cb37020,uVar2);
    }
    lVar1 = DAT_14cb37020;
    *(undefined4 *)(DAT_14cb37020 + 8 + lVar3 * 0xc) = local_38[0];
    *(longlong *)(lVar1 + lVar3 * 0xc) = local_40;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807425e FUN_14807425e body=92 status=ok
// SIG undefined FUN_14807425e(void)

void FUN_14807425e(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffff800 | 0x30;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffffffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 1480742ba FUN_1480742ba body=147 status=ok
// SIG undefined FUN_1480742ba(void)

void FUN_1480742ba(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146469efe((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)iVar1 * 0x20;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(lVar2 + 0x18 + lVar3) = iVar1;
  if ((longlong)iVar1 != 0) {
    puVar4 = (undefined8 *)(lVar3 + lVar2 + 0x10);
    FUN_1447a127e(puVar4,iVar1,0);
    memcpy((void *)*puVar4,_Src,(longlong)iVar1);
    return;
  }
  *(undefined4 *)(lVar2 + lVar3 + 0x1c) = 0;
  return;
}



// FUNCTION 14807434d FUN_14807434d body=1680 status=ok
// SIG undefined FUN_14807434d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14807434d(void)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  wchar_t *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  wchar_t *local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37140) {
    FUN_144b3d300(&DAT_14cb37140);
    if (DAT_14cb37140 == -1) {
      FUN_14807425e(&DAT_14cb370a8);
      atexit((_func_5014 *)&LAB_143902121);
      _Init_thread_footer(&DAT_14cb37140);
    }
  }
  if ((DAT_14cb370a8 == 0) || ((DAT_14cb370b8 < 1 && ((int)DAT_14cb370c8 < 1)))) {
    DAT_14cb370a8 = DAT_14cb36ed8;
    DAT_14cb370d8 = DAT_14cb370d8 | 4;
    _DAT_14cb370dc = 0x1ff;
    FUN_144a5dc74(local_50);
    FUN_1446f470e(&local_78,L"DataChannel interface",1);
    local_88 = (wchar_t *)FUN_145b69f42();
    if ((local_88 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 1;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb370a8,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"EmitterIDDesc";
    local_68[0] = 0xd;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_90,&local_70);
    FUN_140208bae(local_50,local_90,&local_8c,
                  L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                 );
    FUN_1446f470e(&local_78,L"Emitter ID",1);
    pwVar3 = (wchar_t *)FUN_14647ae5a();
    local_88 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(pwVar3);
    }
    local_80 = 2;
    local_7e = 0;
    local_7c = 0xffffffff;
    FUN_140c6c26c(pwVar3,0);
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68,&local_88);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480749de(&DAT_14cb370a8,&local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"GetNDCSpawnData_InExecIndexDesc";
    local_68[0] = 0x1f;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,L"The execution index of the spawned particle.");
    local_8c = 0;
    FUN_1446f470e(local_50,L"Spawned Particle Exec Index",1);
    local_b0 = local_50[0];
    local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb420d0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_148074a72(&DAT_14cb370a8,&local_b0,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"GetNDCSpawnData_OutNDCIndexDesc";
    local_68[0] = 0x1f;
    FUN_1446e940c(&local_78,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_8c,&local_70);
    FUN_140208bae(local_50,&local_8c,&local_78,
                  L"Index of the NDC item that spawned this particle. Can be used to read the NDC data and initialize the spawning particle with data from the NDC."
                 );
    FUN_1446f470e(&local_88,L"NDC Index",1);
    local_70 = local_88;
    local_68[0] = FUN_144830b78(local_68,&DAT_14cb420d0);
    uVar2 = DAT_14cb370c8;
    local_60 = 0;
    uStack_58 = 0;
    lVar4 = (longlong)(int)DAT_14cb370c8;
    DAT_14cb370c8 = DAT_14cb370c8 + 1;
    if (DAT_14cb370cc < DAT_14cb370c8) {
      FUN_14024cd4c(&DAT_14cb370c0,uVar2);
    }
    lVar1 = DAT_14cb370c0;
    *(undefined4 *)(DAT_14cb370c0 + 8 + lVar4 * 0xc) = local_68[0];
    *(wchar_t **)(lVar1 + lVar4 * 0xc) = local_70;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"GetNDCSpawnData_OutNDCSpawnIndexDesc";
    local_68[0] = 0x24;
    FUN_1446e940c(&local_78,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_8c,&local_70);
    FUN_140208bae(local_50,&local_8c,&local_78,
                  L"The index of this particle in relation to all the particle spawned by the same NDC item. Similar to Exec Index but for particles spawned by the same NDC item."
                 );
    FUN_1446f470e(&local_88,L"NDC Spawn Index",1);
    local_70 = local_88;
    local_68[0] = FUN_144830b78(local_68,&DAT_14cb420d0);
    uVar2 = DAT_14cb370c8;
    local_60 = 0;
    uStack_58 = 0;
    lVar4 = (longlong)(int)DAT_14cb370c8;
    DAT_14cb370c8 = DAT_14cb370c8 + 1;
    if (DAT_14cb370cc < DAT_14cb370c8) {
      FUN_14024cd4c(&DAT_14cb370c0,uVar2);
    }
    lVar1 = DAT_14cb370c0;
    *(undefined4 *)(DAT_14cb370c0 + 8 + lVar4 * 0xc) = local_68[0];
    *(wchar_t **)(lVar1 + lVar4 * 0xc) = local_70;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"GetNDCSpawnData_OutNDCSpawnCountDesc";
    local_68[0] = 0x24;
    FUN_1446e940c(&local_78,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_8c,&local_70);
    FUN_140208bae(local_50,&local_8c,&local_78,
                  L"The number of particles spawned by the same NDC item.");
    FUN_1446f470e(&local_88,L"NDC Spawn Count",1);
    local_70 = local_88;
    local_68[0] = FUN_144830b78(local_68,&DAT_14cb420d0);
    uVar2 = DAT_14cb370c8;
    local_60 = 0;
    uStack_58 = 0;
    lVar4 = (longlong)(int)DAT_14cb370c8;
    DAT_14cb370c8 = DAT_14cb370c8 + 1;
    if (DAT_14cb370cc < DAT_14cb370c8) {
      FUN_14024cd4c(&DAT_14cb370c0,uVar2);
    }
    lVar1 = DAT_14cb370c0;
    *(undefined4 *)(DAT_14cb370c0 + 8 + lVar4 * 0xc) = local_68[0];
    *(wchar_t **)(lVar1 + lVar4 * 0xc) = local_70;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480749de FUN_1480749de body=147 status=ok
// SIG undefined FUN_1480749de(void)

void FUN_1480749de(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146469efe((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)iVar1 * 0x20;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(lVar2 + 0x18 + lVar3) = iVar1;
  if ((longlong)iVar1 != 0) {
    puVar4 = (undefined8 *)(lVar3 + lVar2 + 0x10);
    FUN_1447a127e(puVar4,iVar1,0);
    memcpy((void *)*puVar4,_Src,(longlong)iVar1);
    return;
  }
  *(undefined4 *)(lVar2 + lVar3 + 0x1c) = 0;
  return;
}



// FUNCTION 148074a72 FUN_148074a72 body=221 status=ok
// SIG undefined FUN_148074a72(void)

void FUN_148074a72(longlong param_1,undefined8 *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_146469efe((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)iVar2 * 0x20;
  lVar1 = lVar3 + lVar4;
  *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + lVar4) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(lVar3 + 0x18 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar1 + 0x1c) = 0;
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + lVar3 + 0x10);
    FUN_1447a127e(puVar5,iVar2,0);
    memcpy((void *)*puVar5,_Src,(longlong)iVar2);
  }
  FUN_140121138(lVar1);
  memcpy(*(void **)(lVar1 + 0x10),param_3,(longlong)*(int *)(lVar1 + 0x18));
  if (param_2[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148074b4f FUN_148074b4f body=921 status=ok
// SIG undefined FUN_148074b4f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148074b4f(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  wchar_t *local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb371e0) {
    FUN_144b3d300(&DAT_14cb371e0);
    if (DAT_14cb371e0 == -1) {
      FUN_14807425e(&DAT_14cb37148);
      atexit((_func_5014 *)&LAB_14390212d);
      _Init_thread_footer(&DAT_14cb371e0);
    }
  }
  if ((DAT_14cb37148 == (wchar_t *)0x0) || ((DAT_14cb37158 < 1 && ((int)DAT_14cb37168 < 1)))) {
    FUN_1446f470e(&local_70,L"Read",1);
    DAT_14cb37148 = local_70;
    DAT_14cb37178 = DAT_14cb37178 | 0x84;
    FUN_144a5dc74(local_50);
    FUN_1446f470e(&local_78,L"DataChannel interface",1);
    local_88 = (wchar_t *)FUN_145b69f42();
    if ((local_88 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 1;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb37148,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"ConsumeIndexInputDesc";
    local_68[0] = 0x15;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,L"The index to read.");
    local_8c = 0;
    FUN_1446f470e(local_50,L"Index",1);
    local_b0 = local_50[0];
    local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb420d0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_148074a72(&DAT_14cb37148,&local_b0,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"ConsumeSuccessOutputDesc";
    local_68[0] = 0x18;
    FUN_1446e940c(&local_78,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_8c,&local_70);
    FUN_140208bae(local_50,&local_8c,&local_78,L"True if all reads succeeded.");
    FUN_1446f470e(&local_88,L"Success",1);
    local_70 = local_88;
    local_68[0] = FUN_144830b78(local_68,&DAT_14cb420e0);
    uVar2 = DAT_14cb37168;
    local_60 = 0;
    uStack_58 = 0;
    lVar3 = (longlong)(int)DAT_14cb37168;
    DAT_14cb37168 = DAT_14cb37168 + 1;
    if (DAT_14cb3716c < DAT_14cb37168) {
      FUN_14024cd4c(&DAT_14cb37160,uVar2);
    }
    lVar1 = DAT_14cb37160;
    *(undefined4 *)(DAT_14cb37160 + 8 + lVar3 * 0xc) = local_68[0];
    *(wchar_t **)(lVar1 + lVar3 * 0xc) = local_70;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    _DAT_14cb3718a = (undefined2)DAT_14cb37168;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148074ee9 FUN_148074ee9 body=1177 status=ok
// SIG undefined FUN_148074ee9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148074ee9(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  wchar_t *local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37280) {
    FUN_144b3d300(&DAT_14cb37280);
    if (DAT_14cb37280 == -1) {
      FUN_14807425e(&DAT_14cb371e8);
      atexit((_func_5014 *)&LAB_143902139);
      _Init_thread_footer(&DAT_14cb37280);
    }
  }
  if ((DAT_14cb371e8 == (wchar_t *)0x0) || ((DAT_14cb371f8 < 1 && ((int)DAT_14cb37208 < 1)))) {
    FUN_1446f470e(&local_70,L"Consume",1);
    DAT_14cb371e8 = local_70;
    DAT_14cb37218 = DAT_14cb37218 | 0x84;
    FUN_144a5dc74(local_50);
    FUN_1446f470e(&local_78,L"DataChannel interface",1);
    local_88 = (wchar_t *)FUN_145b69f42();
    if ((local_88 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 1;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb371e8,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"ConsumeInputDesc";
    local_68[0] = 0x10;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"True if this instance (particle/emitter etc) should consume data from the Data Channel in this call."
                 );
    local_8c = 0xffffffff;
    FUN_1446f470e(local_50,L"Consume",1);
    local_b0 = local_50[0];
    local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb420e0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_148075384(&DAT_14cb371e8,&local_b0,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"ConsumeSuccessOutputDesc";
    local_68[0] = 0x18;
    FUN_1446e940c(&local_78,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_8c,&local_70);
    FUN_140208bae(local_50,&local_8c,&local_78,L"True if all reads succeeded.");
    FUN_1446f470e(&local_88,L"Success",1);
    local_70 = local_88;
    local_68[0] = FUN_144830b78(local_68,&DAT_14cb420e0);
    uVar2 = DAT_14cb37208;
    local_60 = 0;
    uStack_58 = 0;
    lVar3 = (longlong)(int)DAT_14cb37208;
    DAT_14cb37208 = DAT_14cb37208 + 1;
    if (DAT_14cb3720c < DAT_14cb37208) {
      FUN_14024cd4c(&DAT_14cb37200,uVar2);
    }
    lVar1 = DAT_14cb37200;
    *(undefined4 *)(DAT_14cb37200 + 8 + lVar3 * 0xc) = local_68[0];
    *(wchar_t **)(lVar1 + lVar3 * 0xc) = local_70;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"ConsumeIndexOutputDesc";
    local_68[0] = 0x16;
    FUN_1446e940c(&local_78,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_8c,&local_70);
    FUN_140208bae(local_50,&local_8c,&local_78,
                  L"The index we actually read from. If reading failed this can be -1. This allows subsequent reads of the Data Channel at this index."
                 );
    FUN_1446f470e(&local_88,L"Index",1);
    local_70 = local_88;
    local_68[0] = FUN_144830b78(local_68,&DAT_14cb420d0);
    uVar2 = DAT_14cb37208;
    local_60 = 0;
    uStack_58 = 0;
    lVar3 = (longlong)(int)DAT_14cb37208;
    DAT_14cb37208 = DAT_14cb37208 + 1;
    if (DAT_14cb3720c < DAT_14cb37208) {
      FUN_14024cd4c(&DAT_14cb37200,uVar2);
    }
    lVar1 = DAT_14cb37200;
    *(undefined4 *)(DAT_14cb37200 + 8 + lVar3 * 0xc) = local_68[0];
    *(wchar_t **)(lVar1 + lVar3 * 0xc) = local_70;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    _DAT_14cb3722a = (undefined2)DAT_14cb37208;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148075384 FUN_148075384 body=221 status=ok
// SIG undefined FUN_148075384(void)

void FUN_148075384(longlong param_1,undefined8 *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_146469efe((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)iVar2 * 0x20;
  lVar1 = lVar3 + lVar4;
  *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + lVar4) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(lVar3 + 0x18 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar1 + 0x1c) = 0;
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + lVar3 + 0x10);
    FUN_1447a127e(puVar5,iVar2,0);
    memcpy((void *)*puVar5,_Src,(longlong)iVar2);
  }
  FUN_140121138(lVar1);
  memcpy(*(void **)(lVar1 + 0x10),param_3,(longlong)*(int *)(lVar1 + 0x18));
  if (param_2[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148075461 FUN_148075461 body=2026 status=ok
// SIG undefined FUN_148075461(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148075461(void)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b4 [4];
  longlong *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  longlong local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  wchar_t *local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37320) {
    FUN_144b3d300(&DAT_14cb37320);
    if (DAT_14cb37320 == -1) {
      FUN_14807425e(&DAT_14cb37288);
      atexit((_func_5014 *)&LAB_143902145);
      _Init_thread_footer(&DAT_14cb37320);
    }
  }
  if ((DAT_14cb37288 == (wchar_t *)0x0) || ((DAT_14cb37298 < 1 && (DAT_14cb372a8 < 1)))) {
    FUN_1446f470e(&local_70,L"SpawnConditional",1);
    DAT_14cb37288 = local_70;
    DAT_14cb372b8 = DAT_14cb372b8 | 6;
    _DAT_14cb372bc = 0x1e07;
    FUN_144a5dc74(local_50);
    FUN_1446f470e(&local_78,L"DataChannel interface",1);
    local_88 = FUN_145b69f42();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 1;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb37288,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnEnableInputDesc";
    local_68[0] = 0x14;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Enable or disable this function call. If false, this call with have no effect.")
    ;
    local_8c = 0xffffffff;
    FUN_1446f470e(local_50,L"Enable",1);
    local_b0 = local_50[0];
    local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb420e0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_148075384(&DAT_14cb37288,&local_b0,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"EmitterIDDesc";
    local_68[0] = 0xd;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                 );
    FUN_1446f470e(&local_78,L"Emitter ID",1);
    lVar1 = FUN_14647ae5a();
    local_88 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    local_80 = 2;
    local_7e = 0;
    local_7c = 0xffffffff;
    FUN_140c6c26c(lVar1,0);
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68,&local_88);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480749de(&DAT_14cb37288,&local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnCondModeInputDesc";
    local_68[0] = 0x16;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"Controls how this function will interact with other calls to spawn functions. Spawn counts for each NDC can be accumulated or overwritten."
                 );
    FUN_1446f470e(&local_78,L"Mode",1);
    local_88 = FUN_1480636cf();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 3;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb37288,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnCondOpInputDesc";
    local_68[0] = 0x14;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"Compare the input against the Data Channel value:\n\n[Input] [Condition] [Data Channel Value]\n\nFor example:\nSpawn if [100] is [greater than] [Data Channel \'Height\' Variable]"
                 );
    FUN_1446f470e(&local_78,L"Operator",1);
    local_88 = FUN_14805d103();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 3;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb37288,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"MinSpawnCountInputDesc";
    local_68[0] = 0x16;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Minimum number of particles to spawn for each element in the Data Channel.");
    local_8c = 1;
    FUN_1446f470e(local_50,L"Min Spawn Count",1);
    local_d8 = local_50[0];
    local_d0[0] = FUN_144830b78(local_d0,&DAT_14cb420d0);
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_148074a72(&DAT_14cb37288,&local_d8,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"MaxSpawnCountInputDesc";
    local_68[0] = 0x16;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Maximum number of particles to spawn for each element in the Data Channel.");
    local_8c = 1;
    FUN_1446f470e(local_50,L"Max Spawn Count",1);
    local_f8 = local_50[0];
    local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb420d0);
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_148074a72(&DAT_14cb37288,&local_f8,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    _DAT_14cb372c8 = (undefined2)DAT_14cb37298;
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148075c4c FUN_148075c4c body=2267 status=ok
// SIG undefined FUN_148075c4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148075c4c(void)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined4 local_130 [2];
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b4 [4];
  longlong *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  longlong local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  wchar_t *local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb373c0) {
    FUN_144b3d300(&DAT_14cb373c0);
    if (DAT_14cb373c0 == -1) {
      FUN_14807425e(&DAT_14cb37328);
      atexit((_func_5014 *)&LAB_143902151);
      _Init_thread_footer(&DAT_14cb373c0);
    }
  }
  if ((DAT_14cb37328 == (wchar_t *)0x0) || ((DAT_14cb37338 < 1 && (DAT_14cb37348 < 1)))) {
    FUN_1446f470e(&local_70,L"SpawnDirect",1);
    DAT_14cb37328 = local_70;
    local_70 = (wchar_t *)&DAT_14cb36ff8;
    FUN_148088676(&DAT_14cb37370,local_50,&local_70,0);
    local_70 = (wchar_t *)&DAT_14cb37000;
    FUN_148088676(&DAT_14cb37370,local_50,&local_70,0);
    DAT_14cb37358 = DAT_14cb37358 | 6;
    _DAT_14cb3735c = 0x1e07;
    FUN_144a5dc74(local_50);
    FUN_1446f470e(&local_78,L"DataChannel interface",1);
    local_88 = FUN_145b69f42();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 1;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb37328,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnEnableInputDesc";
    local_68[0] = 0x14;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Enable or disable this function call. If false, this call with have no effect.")
    ;
    local_8c = 0xffffffff;
    FUN_1446f470e(local_50,L"Enable",1);
    local_b0 = local_50[0];
    local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb420e0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_148075384(&DAT_14cb37328,&local_b0,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"EmitterIDDesc";
    local_68[0] = 0xd;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                 );
    FUN_1446f470e(&local_78,L"Emitter ID",1);
    lVar1 = FUN_14647ae5a();
    local_88 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    local_80 = 2;
    local_7e = 0;
    local_7c = 0xffffffff;
    FUN_140c6c26c(lVar1,0);
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68,&local_88);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480749de(&DAT_14cb37328,&local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnCondModeInputDesc";
    local_68[0] = 0x16;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"Controls how this function will interact with other calls to spawn functions. Spawn counts for each NDC can be accumulated or overwritten."
                 );
    FUN_1446f470e(&local_78,L"Mode",1);
    local_88 = FUN_1480636cf();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 3;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb37328,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnDirectRandomScaleMinInputDesc";
    local_68[0] = 0x22;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Minimum value for an additional random scale applied to each NDC spawn count.");
    local_8c = 0x3f800000;
    FUN_1446f470e(local_50,L"RandomScaleMin",1);
    local_d8 = local_50[0];
    local_d0[0] = FUN_144830b78(local_d0,&DAT_14cb420f0);
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_148076528(&DAT_14cb37328,&local_d8,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"SpawnDirectRandomScaleMaxInputDesc";
    local_68[0] = 0x22;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Maximum value for an additional random scale applied to each NDC spawn count.");
    local_8c = 0x3f800000;
    FUN_1446f470e(local_50,L"RandomScaleMax",1);
    local_f8 = local_50[0];
    local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb420f0);
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_148076528(&DAT_14cb37328,&local_f8,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"SpawnDirectClampMinInputDesc";
    local_68[0] = 0x1c;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Minimum Spawn Count to use after random scale is applied.");
    local_8c = 0;
    FUN_1446f470e(local_50,L"ClampMin",1);
    local_118 = local_50[0];
    local_110[0] = FUN_144830b78(local_110,&DAT_14cb420d0);
    local_108 = 0;
    uStack_100 = 0;
    FUN_148074a72(&DAT_14cb37328,&local_118,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"SpawnDirectClampMaxInputDesc";
    local_68[0] = 0x1c;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Maximum Spawn Count to use after random scale is applied. If < 0, No max clamp is applied."
                 );
    local_8c = 1;
    FUN_1446f470e(local_50,L"ClampMax",1);
    local_138 = local_50[0];
    local_130[0] = FUN_144830b78(local_130,&DAT_14cb420d0);
    local_128 = 0;
    uStack_120 = 0;
    FUN_148074a72(&DAT_14cb37328,&local_138,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148076528 FUN_148076528 body=221 status=ok
// SIG undefined FUN_148076528(void)

void FUN_148076528(longlong param_1,undefined8 *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_146469efe((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)iVar2 * 0x20;
  lVar1 = lVar3 + lVar4;
  *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + lVar4) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(lVar3 + 0x18 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar1 + 0x1c) = 0;
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + lVar3 + 0x10);
    FUN_1447a127e(puVar5,iVar2,0);
    memcpy((void *)*puVar5,_Src,(longlong)iVar2);
  }
  FUN_140121138(lVar1);
  memcpy(*(void **)(lVar1 + 0x10),param_3,(longlong)*(int *)(lVar1 + 0x18));
  if (param_2[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148076605 FUN_148076605 body=2267 status=ok
// SIG undefined FUN_148076605(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148076605(void)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined4 local_130 [2];
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b4 [4];
  longlong *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  longlong local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  wchar_t *local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37460) {
    FUN_144b3d300(&DAT_14cb37460);
    if (DAT_14cb37460 == -1) {
      FUN_14807425e(&DAT_14cb373c8);
      atexit((_func_5014 *)&LAB_14390215d);
      _Init_thread_footer(&DAT_14cb37460);
    }
  }
  if ((DAT_14cb373c8 == (wchar_t *)0x0) || ((DAT_14cb373d8 < 1 && (DAT_14cb373e8 < 1)))) {
    FUN_1446f470e(&local_70,L"ScaleSpawnCount",1);
    DAT_14cb373c8 = local_70;
    local_70 = (wchar_t *)&DAT_14cb36ff8;
    FUN_148088676(&DAT_14cb37410,local_50,&local_70,0);
    local_70 = (wchar_t *)&DAT_14cb37000;
    FUN_148088676(&DAT_14cb37410,local_50,&local_70,0);
    DAT_14cb373f8 = DAT_14cb373f8 | 6;
    _DAT_14cb373fc = 0x1e07;
    FUN_144a5dc74(local_50);
    FUN_1446f470e(&local_78,L"DataChannel interface",1);
    local_88 = FUN_145b69f42();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 1;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb373c8,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnEnableInputDesc";
    local_68[0] = 0x14;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Enable or disable this function call. If false, this call with have no effect.")
    ;
    local_8c = 0xffffffff;
    FUN_1446f470e(local_50,L"Enable",1);
    local_b0 = local_50[0];
    local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb420e0);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_148075384(&DAT_14cb373c8,&local_b0,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"EmitterIDDesc";
    local_68[0] = 0xd;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"ID of the emitter we\'d like to spawn into. This can be obtained from Engine.Emitter.ID."
                 );
    FUN_1446f470e(&local_78,L"Emitter ID",1);
    lVar1 = FUN_14647ae5a();
    local_88 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    local_80 = 2;
    local_7e = 0;
    local_7c = 0xffffffff;
    FUN_140c6c26c(lVar1,0);
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68,&local_88);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480749de(&DAT_14cb373c8,&local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"SpawnScaleModeInputDesc";
    local_68[0] = 0x17;
    FUN_1446e940c(&local_8c,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(local_b4,&local_70);
    FUN_140208bae(local_50,local_b4,&local_8c,
                  L"Control whether to override or combine this scale with previously set scales when calling this function multiple times."
                 );
    FUN_1446f470e(&local_78,L"Mode",1);
    local_88 = FUN_148063706();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    local_80 = 3;
    local_7e = 0;
    local_7c = 0xffffffff;
    local_70 = local_78;
    local_68[0] = FUN_144830b78(local_68);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1480742ba(&DAT_14cb373c8,&local_70,local_50);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    local_70 = L"ScaleSpawnCountRandomScaleMinInputDesc";
    local_68[0] = 0x26;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Minimum value for a random additional scale applied to each NDC spawn.");
    local_8c = 0x3f800000;
    FUN_1446f470e(local_50,L"RandomScaleMin",1);
    local_d8 = local_50[0];
    local_d0[0] = FUN_144830b78(local_d0,&DAT_14cb420f0);
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_148076528(&DAT_14cb373c8,&local_d8,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"ScaleSpawnCountRandomScaleMaxInputDesc";
    local_68[0] = 0x26;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"Maximum value for a random additional scale applied to each NDC spawn.");
    local_8c = 0x3f800000;
    FUN_1446f470e(local_50,L"RandomScaleMax",1);
    local_f8 = local_50[0];
    local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb420f0);
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_148076528(&DAT_14cb373c8,&local_f8,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"ScaleSpawnCountClampMinInputDesc";
    local_68[0] = 0x20;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"A minimum value for the scale value. If < 0 then no minimum is applied to the final scale."
                 );
    local_8c = 0;
    FUN_1446f470e(local_50,L"ClampMin",1);
    local_118 = local_50[0];
    local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
    local_108 = 0;
    uStack_100 = 0;
    FUN_148076528(&DAT_14cb373c8,&local_118,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
    local_70 = L"ScaleSpawnCountClampMaxInputDesc";
    local_68[0] = 0x20;
    FUN_1446e940c(&local_88,&local_70);
    local_70 = L"NiagaraDataInterfaceDataChannelRead";
    local_68[0] = 0x23;
    FUN_1446e940c(&local_78,&local_70);
    FUN_140208bae(&local_70,&local_78,&local_88,
                  L"A maximum value for the scale value. If < 0 then no maximum is applied to the final scale."
                 );
    local_8c = 0x3f800000;
    FUN_1446f470e(local_50,L"ClampMax",1);
    local_138 = local_50[0];
    local_130[0] = FUN_144830b78(local_130,&DAT_14cb420f0);
    local_128 = 0;
    uStack_120 = 0;
    FUN_148076528(&DAT_14cb373c8,&local_138,&local_8c);
    if (local_70 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_70 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148076ee2 FUN_148076ee2 body=123 status=ok
// SIG undefined FUN_148076ee2(void)

void FUN_148076ee2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad7d4c8;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_148084846(param_1 + 0x19);
  FUN_148076f5e(param_1 + 6);
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
                    /* WARNING: Could not recover jumptable at 0x000148076f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148076f5e FUN_148076f5e body=62 status=ok
// SIG undefined FUN_148076f5e(void)

void FUN_148076f5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_14808571a(lVar1,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148076f9c FUN_148076f9c body=187 status=ok
// SIG undefined FUN_148076f9c(void)

void FUN_148076f9c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar5 = *param_2;
  if (lVar3 != lVar5) {
    if ((*(char *)(param_3 + 0xad) == '\x01') && (*(char *)(param_3 + 0xaf) == '\x01')) {
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 200) = *(int *)(lVar3 + 200) + -1;
        UNLOCK();
        lVar5 = *param_2;
      }
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        LOCK();
        *(int *)(lVar5 + 200) = *(int *)(lVar5 + 200) + 1;
        UNLOCK();
        lVar5 = *param_2;
      }
    }
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar5;
    *(longlong *)(param_1 + 0x18) = lVar3;
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
  }
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
                    /* WARNING: Could not recover jumptable at 0x000148077047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148077058 FUN_148077058 body=87 status=ok
// SIG undefined FUN_148077058(void)

void FUN_148077058(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_1480849ce(param_1 + 0x50);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1480770b0 FUN_1480770b0 body=153 status=ok
// SIG undefined FUN_1480770b0(void)

void FUN_1480770b0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1480858a8(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1480887d0(param_1,param_2,iVar1 - param_2);
    FUN_148088840(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14807714a FUN_14807714a body=73 status=ok
// SIG undefined FUN_14807714a(void)

void FUN_14807714a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  iVar1 = FUN_1448332aa(param_2,&DAT_14ad42464);
  if (iVar1 < 0x56) {
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 148077238 FUN_148077238 body=1081 status=ok
// SIG undefined FUN_148077238(void)

void FUN_148077238(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_f8 [44];
  int local_cc;
  longlong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_2 + 8);
  *(undefined4 *)(lVar6 + 0xc4) = 0xffffffff;
  plVar18 = (longlong *)(lVar6 + 200);
  uVar10 = lVar6 + 0xd8;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  local_c8 = param_1;
  uStack_80 = uVar10;
  if (*(int *)(lVar6 + 0xf0) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar14 = *(int *)(lVar6 + 0xf0);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (int)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_b0 = plVar18;
  if ((iStack_74 != iVar14) || (uStack_80 != uVar10)) {
    do {
      plVar1 = (longlong *)(*local_b0 + (longlong)iStack_94 * 0x70);
      plVar13 = plVar1 + 1;
      plVar1 = (longlong *)*plVar1;
      if (plVar1 == (longlong *)0x0) {
        FUN_148077058(plVar13);
      }
      else {
        lVar17 = *local_b0 + (longlong)iStack_94 * 0x70;
        if (*(int *)(lVar6 + 0xc4) == -1) {
          *(undefined4 *)(lVar6 + 0xc4) = *(undefined4 *)(lVar17 + 0x60);
        }
        local_88 = 0;
        uStack_80 = 0;
        iVar5 = *(int *)(lVar17 + 0x60);
        local_cc = iVar14;
        local_b8 = uVar10;
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (iVar5 != 0) {
          FUN_14480809c(&local_88);
          if ((longlong)*(int *)(lVar17 + 0x60) != 0) {
            puVar15 = *(uint **)(lVar17 + 0x58);
            puVar2 = puVar15 + (longlong)*(int *)(lVar17 + 0x60) * 2;
            do {
              uVar9 = *puVar15;
              fVar4 = (float)puVar15[1];
              lVar19 = (longlong)(int)uStack_80;
              uVar8 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
              if (uStack_80._4_4_ < uVar8) {
                FUN_1447808da(&local_88);
              }
              fVar21 = 2.1474836e+09;
              if ((float)uVar9 * fVar4 <= 2.1474836e+09) {
                fVar21 = (float)uVar9 * fVar4;
              }
              *(int *)(local_88 + lVar19 * 4) = (int)(longlong)fVar21;
              puVar15 = puVar15 + 2;
            } while (puVar15 != puVar2);
          }
        }
        local_c0 = plVar18;
        FUN_148077058(plVar13);
        lVar19 = (**(code **)(*plVar1 + 0x68))(plVar1);
        if (lVar19 != 0) {
          uVar10 = uStack_80 & 0xffffffff;
          if (*(char *)(local_c8 + 0x42) == '\0') {
            if ((int)uStack_80 < 1) {
              iVar14 = 0;
            }
            else {
              uVar12 = 0;
              iVar14 = 0;
              do {
                iVar14 = iVar14 + *(int *)(local_88 + uVar12 * 4);
                uVar12 = uVar12 + 1;
              } while (uVar10 != uVar12);
            }
            iVar5 = *(int *)(lVar19 + 0x198);
            uVar9 = iVar5 + 1;
            *(uint *)(lVar19 + 0x198) = uVar9;
            if (*(uint *)(lVar19 + 0x19c) < uVar9) {
              FUN_14181d9ee();
            }
            lVar19 = *(longlong *)(lVar19 + 400);
            lVar16 = (longlong)iVar5 * 0x10;
            *(int *)(lVar19 + lVar16) = iVar14;
            *(undefined8 *)(lVar19 + 4 + lVar16) = 0;
            *(undefined4 *)(lVar19 + 0xc + lVar16) = 0;
          }
          else if (0 < (int)uStack_80) {
            lVar16 = 0;
            do {
              iVar14 = *(int *)(local_88 + lVar16 * 4);
              if (iVar14 != 0) {
                iVar5 = *(int *)(lVar19 + 0x198);
                uVar9 = iVar5 + 1;
                *(uint *)(lVar19 + 0x198) = uVar9;
                if (*(uint *)(lVar19 + 0x19c) < uVar9) {
                  FUN_14181d9ee((longlong *)(lVar19 + 400));
                }
                lVar7 = *(longlong *)(lVar19 + 400);
                lVar20 = (longlong)iVar5 * 0x10;
                *(int *)(lVar7 + lVar20) = iVar14;
                *(undefined8 *)(lVar7 + 4 + lVar20) = 0;
                *(int *)(lVar7 + 0xc + lVar20) = (int)lVar16;
                uVar10 = uStack_80 & 0xffffffff;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)uVar10);
          }
          if (*(char *)(local_c8 + 0xae) == '\x01') {
            uVar10 = uStack_80 & 0xffffffff;
            if (0 < (int)uStack_80) {
              lVar19 = 0;
              do {
                uVar9 = *(uint *)(local_88 + lVar19 * 4);
                iVar14 = *(int *)(lVar17 + 0x10);
                uVar8 = iVar14 + 1;
                *(uint *)(lVar17 + 0x10) = uVar8;
                if (*(uint *)(lVar17 + 0x14) < uVar8) {
                  FUN_1446f48e2();
                }
                *(uint *)(*plVar13 + (longlong)iVar14 * 4) = uVar9;
                lVar16 = 0;
                do {
                  bVar11 = (byte)lVar16;
                  piVar3 = (int *)(lVar17 + 0x18 + lVar16 * 4);
                  *piVar3 = *piVar3 + (-0x8000 >> (bVar11 & 0x1f) & uVar9) /
                                      (0x8000U >> (bVar11 & 0x1f));
                  lVar16 = lVar16 + 1;
                  uVar9 = uVar9 & 0x7fffU >> (bVar11 & 0x1f);
                } while (lVar16 != 0x10);
                lVar19 = lVar19 + 1;
                uVar10 = (ulonglong)(int)uStack_80;
              } while (lVar19 < (longlong)uVar10);
            }
            iVar14 = 0;
            do {
              uVar9 = 0x8000 >> ((byte)iVar14 & 0x1f);
              if (0 < (int)uVar10) {
                lVar19 = 0;
                do {
                  lVar16 = local_88;
                  uVar8 = *(uint *)(local_88 + lVar19 * 4);
                  if (uVar9 <= uVar8) {
                    do {
                      *(uint *)(lVar16 + lVar19 * 4) = uVar8 - uVar9;
                      iVar5 = *(int *)(lVar17 + 0x10);
                      *(uint *)(lVar17 + 0x10) = iVar5 + 1U;
                      if (*(uint *)(lVar17 + 0x14) < iVar5 + 1U) {
                        FUN_1446f48e2(plVar13,iVar5);
                      }
                      *(int *)(*plVar13 + (longlong)iVar5 * 4) = (int)lVar19;
                      uVar8 = *(uint *)(lVar16 + lVar19 * 4);
                    } while (uVar9 <= uVar8);
                    uVar10 = uStack_80 & 0xffffffff;
                  }
                  lVar19 = lVar19 + 1;
                } while (lVar19 < (int)uVar10);
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0x10);
          }
        }
        uVar10 = local_b8;
        plVar18 = local_c0;
        iVar14 = local_cc;
        if (local_88 != 0) {
          FUN_1400020a8();
          uVar10 = local_b8;
          plVar18 = local_c0;
          iVar14 = local_cc;
        }
      }
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar18 || (CONCAT44(uStack_9c,uStack_a0) != uVar10 || iStack_94 != iVar14)
            );
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148077674 FUN_148077674 body=1309 status=ok
// SIG undefined FUN_148077674(void)

void FUN_148077674(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = 0;
  local_a8 = param_3;
  memset(param_2,0,0xa8);
  param_2[3] = &PTR_FUN_14a355380;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  *(undefined1 *)(param_2 + 0x11) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  lVar5 = *(longlong *)(param_3 + 0x10);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + 0x48);
    plVar8 = *(longlong **)(lVar5 + 0x50);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar4 = (longlong *)param_2[1];
      *param_2 = uVar6;
      if (plVar8 == plVar4) {
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 != 0) goto LAB_148077749;
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) goto LAB_148077749;
        lVar5 = *plVar8;
      }
      else {
        param_2[1] = plVar8;
        if (plVar4 == (longlong *)0x0) goto LAB_148077749;
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 != 0) goto LAB_148077749;
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) goto LAB_148077749;
        lVar5 = *plVar4;
        plVar8 = plVar4;
      }
      (**(code **)(lVar5 + 0x10))(plVar8);
      goto LAB_148077749;
    }
  }
  *param_2 = uVar6;
LAB_148077749:
  uVar7 = 1;
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar7 = DAT_14cb36ff0;
  }
  *(undefined1 *)(param_2 + 2) = uVar7;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(local_a8 + 0xc4);
  if ((*(char *)(local_a8 + 0x28) == '\x01') && (DAT_14c76292d == '\x01')) {
    *(undefined1 *)(local_a8 + 0x28) = 0;
    lVar5 = FUN_14479d2ce(local_a8 + 8);
    uVar6 = FUN_14479d2ce(lVar5 + 0x28);
    FUN_148112dec(uVar6,&local_90);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    FUN_148077b92(param_2 + 3,param_1 + 0x48,local_90 + 0xb);
  }
  lVar13 = local_a8;
  plVar8 = (longlong *)(local_a8 + 200);
  lVar5 = local_a8 + 0xd8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar9 = 0;
  local_60 = lVar5;
  if (*(int *)(local_a8 + 0xf0) != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(lVar13 + 0xf0);
  }
  plVar4 = param_2 + 0x12;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = (longlong *)local_68;
  local_80 = local_60;
  local_90 = plVar8;
  if ((iStack_54 != iVar9) || (uVar12 = 1, local_60 != lVar5)) {
    iVar11 = 0;
    do {
      lVar13 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x70);
      if ((lVar13 != 0) && (iVar2 = *(int *)(lVar13 + 200), iVar11 < iVar2)) {
        iVar11 = iVar2;
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar8 || (local_80 != lVar5 || iStack_74 != iVar9));
    uVar12 = (ulonglong)(iVar11 + 1);
    lVar13 = local_a8;
  }
  FUN_144a9ff88(plVar4);
  iVar9 = *(int *)(param_2 + 0x13);
  *(uint *)(param_2 + 0x13) = iVar9 + (uint)uVar12;
  if ((uint)(*(int *)((longlong)param_2 + 0x9c) - iVar9) < (uint)uVar12) {
    FUN_1446f48e2(plVar4);
  }
  iVar11 = 0;
  memset((void *)((longlong)iVar9 * 4 + param_2[0x12]),0,uVar12 << 2);
  local_a0 = (ulonglong)*(uint *)(param_2 + 0x13);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar5;
  if (*(int *)(lVar13 + 0xf0) != 0) {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(lVar13 + 0xf0);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = (longlong *)local_68;
  local_80 = local_60;
  local_98 = plVar8;
  local_90 = plVar8;
  if ((iStack_54 != iVar11) || (local_60 != lVar5)) {
    do {
      lVar13 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x70);
      if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x18) != 0)) {
        lVar10 = *local_90 + (longlong)iStack_74 * 0x70;
        iVar9 = *(int *)(lVar10 + 0x10);
        *(int *)(*plVar4 + (longlong)*(int *)(lVar13 + 200) * 4) = (int)local_a0;
        lVar13 = 0;
        do {
          iVar2 = *(int *)(param_2 + 0x13);
          *(uint *)(param_2 + 0x13) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar2 + 1U) {
            FUN_1446f48e2(plVar4,iVar2);
          }
          *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) =
               *(undefined4 *)(lVar10 + 0x18 + lVar13 * 4);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x10);
        local_a0 = (ulonglong)((int)local_a0 + iVar9 + 0x10);
        uVar3 = *(uint *)(lVar10 + 0x10);
        plVar8 = local_98;
        if ((longlong)(int)uVar3 != 0) {
          iVar9 = *(int *)(param_2 + 0x13);
          *(uint *)(param_2 + 0x13) = iVar9 + uVar3;
          if ((uint)(*(int *)((longlong)param_2 + 0x9c) - iVar9) < uVar3) {
            FUN_1446f48e2(plVar4,iVar9);
          }
          memcpy((void *)((longlong)iVar9 * 4 + *plVar4),*(void **)(lVar10 + 8),
                 (longlong)(int)uVar3 << 2);
          plVar8 = local_98;
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar8 || (local_80 != lVar5 || iStack_74 != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148077b92 FUN_148077b92 body=713 status=ok
// SIG undefined FUN_148077b92(void)

void FUN_148077b92(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x70) = 1;
  lVar14 = param_1 + 0x20;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    FUN_148084c5a(lVar14);
    FUN_148084d9e(lVar14);
  }
  puVar1 = (ulonglong *)(param_1 + 8);
  FUN_148084c30(puVar1,*(int *)(param_2 + 0x60) * 3);
  local_a0 = (longlong *)(param_2 + 0x10);
  local_a8 = param_2 + 0x20;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = local_a8;
  if (*(int *)(param_2 + 0x38) == 0) {
    local_ac = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_ac = *(int *)(param_2 + 0x38);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_98 = lVar14;
  local_90 = local_a0;
  if ((iStack_54 != local_ac) || (uStack_60 != local_a8)) {
    do {
      lVar4 = local_98;
      lVar12 = *local_90;
      lVar6 = (longlong)iStack_74;
      lVar14 = lVar12 + lVar6 * 0x28;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_1480423fa(lVar14);
      puVar7 = (undefined4 *)FUN_148084ebc(lVar4,uVar5,lVar14);
      *puVar7 = uVar2;
      if ((longlong)*(int *)(lVar14 + 0x18) != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x10 + lVar6 * 0x28);
        lVar14 = (longlong)*(int *)(lVar14 + 0x18) * 0xc;
        do {
          puVar8 = (ushort *)FUN_140aa93c6(param_3,lVar12);
          if (puVar8 == (ushort *)0x0) {
            iVar13 = *(int *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x10) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x14) < iVar13 + 1U) {
              FUN_14042c7ac(puVar1,iVar13);
            }
            uVar3 = *(ulonglong *)(param_1 + 8);
            uVar9 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
            if ((uVar3 & 1) == 0) {
              uVar9 = uVar3;
            }
            *(undefined4 *)(uVar9 + (longlong)iVar13 * 4) = 0xffffffff;
            iVar13 = *(int *)(param_1 + 0x10);
            uVar10 = iVar13 + 1;
            *(uint *)(param_1 + 0x10) = uVar10;
            uVar11 = 0xffffffff;
          }
          else {
            if (puVar8[4] == 0) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = (uint)*puVar8;
            }
            iVar13 = *(int *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x10) = iVar13 + 1U;
            if (*(uint *)(param_1 + 0x14) < iVar13 + 1U) {
              FUN_14042c7ac(puVar1,iVar13);
            }
            uVar3 = *puVar1;
            uVar9 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
            if ((uVar3 & 1) == 0) {
              uVar9 = uVar3;
            }
            *(uint *)(uVar9 + (longlong)iVar13 * 4) = uVar10;
            if (puVar8[5] == 0) {
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = (uint)puVar8[1];
            }
            iVar13 = *(int *)(param_1 + 0x10);
            uVar10 = iVar13 + 1;
            *(uint *)(param_1 + 0x10) = uVar10;
          }
          if (*(uint *)(param_1 + 0x14) < uVar10) {
            FUN_14042c7ac(puVar1,iVar13);
          }
          uVar3 = *puVar1;
          uVar9 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
          if ((uVar3 & 1) == 0) {
            uVar9 = uVar3;
          }
          *(uint *)(uVar9 + (longlong)iVar13 * 4) = uVar11;
          lVar12 = lVar12 + 0xc;
          lVar14 = lVar14 + -0xc;
        } while (lVar14 != 0);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_a0 ||
             (CONCAT44(uStack_7c,uStack_80) != local_a8 || iStack_74 != local_ac));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148077eb4 FUN_148077eb4 body=101 status=ok
// SIG undefined FUN_148077eb4(void)

undefined8 FUN_148077eb4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  if ((param_2 != 0) && (uVar2 = FUN_1481192e4(), (char)uVar2 != '\0')) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    if ((((*(longlong *)(param_1 + 0x38) == lVar1) &&
         (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40))) &&
        (*(char *)(param_1 + 0x41) == *(char *)(param_2 + 0x41))) &&
       (*(char *)(param_1 + 0x42) == *(char *)(param_2 + 0x42))) {
      return CONCAT71(uVar3,1);
    }
  }
  return 0;
}



// FUNCTION 148077f1a FUN_148077f1a body=148 status=ok
// SIG undefined FUN_148077f1a(void)

ulonglong FUN_148077f1a(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  bVar1 = FUN_1414db5a0();
  bVar1 = param_2 != 0 & bVar1;
  if (bVar1 == 1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    FUN_148064a5c(param_2 + 0x48,param_1 + 0x48);
    FUN_148064c16(param_2 + 0x58,param_1 + 0x58);
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)(param_2 + 0x41) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)(param_2 + 0x42) = *(undefined1 *)(param_1 + 0x42);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff;
}



// FUNCTION 148077fae FUN_148077fae body=232 status=ok
// SIG undefined FUN_148077fae(void)

void FUN_148077fae(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148078098(local_30);
  FUN_144a76cd4(&local_40,param_2);
  lVar3 = *(longlong *)(local_28 + 0x10);
  uVar2 = 0;
  if (lVar3 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar3 = *(longlong *)(lVar3 + 0x28);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x78);
    }
    uVar2 = 0;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        uVar2 = *(undefined4 *)(lVar3 + 0x120);
      }
    }
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_40 + local_38;
      *local_40 = uVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148078098 FUN_148078098 body=148 status=ok
// SIG undefined FUN_148078098(void)

void FUN_148078098(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14807812c FUN_14807812c body=1320 status=ok
// SIG undefined FUN_14807812c(void)

void FUN_14807812c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined4 **local_f0;
  undefined4 **local_e8;
  undefined4 **local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_148078098(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  FUN_144a76cd4(&local_b8,param_2);
  FUN_144a76cd4(&local_c8,param_2);
  FUN_144a76cd4(&local_d8,param_2);
  lVar5 = *(longlong *)(local_68 + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(local_68 + 0x118);
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x78);
    }
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
      UNLOCK();
      if (DAT_14c76292d == '\x01') {
        local_100 = local_70;
        local_f8 = &local_a8;
        local_f0 = &local_b8;
        local_e8 = &local_d8;
        local_e0 = &local_c8;
        if ((longlong)local_78 < 1) {
          piVar7 = local_88 + local_78;
          iVar10 = *local_88;
          if (((longlong)iVar10 < 0) || (*(int *)(lVar4 + 0x110) <= iVar10)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x108) + (longlong)iVar10 * 0x10);
          }
          local_88 = piVar7;
          if (*(int *)(local_68 + 0xd0) != *(int *)(local_68 + 0xfc)) {
            uVar8 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar5 = local_68 + 0x100;
            if (*(longlong *)(local_68 + 0x108) != 0) {
              lVar5 = *(longlong *)(local_68 + 0x108);
            }
            iVar10 = *(int *)(lVar5 + (ulonglong)
                                      (*(int *)(local_68 + 0x110) - 1U & (uVar8 >> 0x10 ^ uVar8)) *
                                      4);
            if (iVar10 != -1) {
              do {
                lVar5 = *(longlong *)(local_68 + 200) + (longlong)iVar10 * 0x70;
                if (*(ulonglong *)(*(longlong *)(local_68 + 200) + (longlong)iVar10 * 0x70) == uVar6
                   ) {
                  if (lVar5 + 8 != 0 && lVar5 != 0) {
                    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
                    if (*param_2 != '\0') {
                      piVar7 = (int *)(param_2 + 0x3c);
                    }
                    if (0 < *piVar7) {
                      iVar10 = 0;
                      do {
                        FUN_143903aca(&local_100,lVar5 + 8);
                        iVar10 = iVar10 + 1;
                        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
                        if (*param_2 != '\0') {
                          piVar7 = (int *)(param_2 + 0x3c);
                        }
                      } while (iVar10 < *piVar7);
                    }
                    goto LAB_14807845e;
                  }
                  break;
                }
                iVar10 = *(int *)(lVar5 + 0x68);
              } while (iVar10 != -1);
            }
          }
          piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
          if (*param_2 != '\0') {
            piVar7 = (int *)(param_2 + 0x3c);
          }
          if (0 < *piVar7) {
            iVar10 = 0;
            do {
              puVar1 = local_b8 + local_b0;
              *local_b8 = 0xffffffff;
              puVar2 = local_d8 + local_d0;
              *local_d8 = 0xffffffff;
              puVar3 = local_c8 + local_c0;
              *local_c8 = 0xffffffff;
              iVar10 = iVar10 + 1;
              piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
              if (*param_2 != '\0') {
                piVar7 = (int *)(param_2 + 0x3c);
              }
              local_d8 = puVar2;
              local_c8 = puVar3;
              local_b8 = puVar1;
            } while (iVar10 < *piVar7);
          }
        }
        else {
          piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
          if (*param_2 != '\0') {
            piVar7 = (int *)(param_2 + 0x3c);
          }
          if (0 < *piVar7) {
            iVar10 = 0;
            do {
              iVar9 = *local_88;
              if (((longlong)iVar9 < 0) || (*(int *)(lVar4 + 0x110) <= iVar9)) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x108) + (longlong)iVar9 * 0x10);
              }
              if (*(int *)(local_68 + 0xd0) != *(int *)(local_68 + 0xfc)) {
                uVar8 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
                uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
                lVar5 = local_68 + 0x100;
                if (*(longlong *)(local_68 + 0x108) != 0) {
                  lVar5 = *(longlong *)(local_68 + 0x108);
                }
                iVar9 = *(int *)(lVar5 + (ulonglong)
                                         (*(int *)(local_68 + 0x110) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                         * 4);
                if (iVar9 != -1) {
                  do {
                    lVar5 = *(longlong *)(local_68 + 200) + (longlong)iVar9 * 0x70;
                    if (*(ulonglong *)(*(longlong *)(local_68 + 200) + (longlong)iVar9 * 0x70) ==
                        uVar6) {
                      if (lVar5 != -8 && lVar5 != 0) {
                        local_88 = local_88 + local_78;
                        FUN_143903aca(&local_100);
                        goto LAB_148078315;
                      }
                      break;
                    }
                    iVar9 = *(int *)(lVar5 + 0x68);
                  } while (iVar9 != -1);
                }
              }
              *local_b8 = 0xffffffff;
              *local_d8 = 0xffffffff;
              *local_c8 = 0xffffffff;
              local_d8 = local_d8 + local_d0;
              local_c8 = local_c8 + local_c0;
              local_b8 = local_b8 + local_b0;
              local_88 = local_88 + local_78;
LAB_148078315:
              iVar10 = iVar10 + 1;
              piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
              if (*param_2 != '\0') {
                piVar7 = (int *)(param_2 + 0x3c);
              }
            } while (iVar10 < *piVar7);
          }
        }
        goto LAB_14807845e;
      }
    }
  }
  piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar7 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar10 = 0;
    do {
      puVar1 = local_b8 + local_b0;
      *local_b8 = 0xffffffff;
      puVar2 = local_d8 + local_d0;
      *local_d8 = 0xffffffff;
      puVar3 = local_c8 + local_c0;
      *local_c8 = 0xffffffff;
      iVar10 = iVar10 + 1;
      piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar7 = (int *)(param_2 + 0x3c);
      }
      local_d8 = puVar2;
      local_c8 = puVar3;
      local_b8 = puVar1;
    } while (iVar10 < *piVar7);
  }
LAB_14807845e:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148078656 FUN_148078656 body=291 status=ok
// SIG undefined FUN_148078656(void)

longlong FUN_148078656(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x1000000000;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0x1000000000;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0x1000000000;
  if (param_3 == (longlong *)0x0) {
    return param_1;
  }
  uVar2 = *(uint *)(param_3 + 2);
  if (-1 < (int)uVar2) {
    if (0x10 < uVar2) {
      FUN_14808add2(param_1);
    }
    uVar2 = *(uint *)((longlong)param_3 + 0x14);
    if (-1 < (int)uVar2) {
      if (*(int *)(param_1 + 0x21c) < (int)uVar2) {
        FUN_14808aeb4(param_1 + 0x110);
      }
      uVar2 = *(uint *)(param_3 + 3);
      if (-1 < (int)uVar2) {
        if (*(int *)(param_1 + 0x32c) < (int)uVar2) {
          FUN_14808afaa(param_1 + 0x220);
        }
        if ((int)param_3[1] == 0) {
          return param_1;
        }
                    /* WARNING: Could not recover jumptable at 0x000148078732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*(code *)(&DAT_14ad81210 +
                          *(int *)(&DAT_14ad81210 + (ulonglong)(*(uint *)(*param_3 + 4) >> 0x1e) * 4
                                  )))();
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 148078866 FUN_148078866 body=388 status=ok
// SIG undefined FUN_148078866(void)

void FUN_148078866(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0x108);
    lVar5 = (longlong)(int)param_2;
    if (0 < iVar1) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar2 = param_1;
        }
        if (0 < *(int *)(lVar2 + 8 + lVar3)) {
          memset(*(void **)(lVar2 + lVar3),0,(ulonglong)param_2 * 4);
          lVar2 = *(longlong *)(param_1 + 0x100);
          if (*(longlong *)(param_1 + 0x100) == 0) {
            lVar2 = param_1;
          }
          *(longlong *)(lVar2 + lVar3) =
               *(longlong *)(lVar2 + lVar3) + *(int *)(lVar2 + 8 + lVar3) * lVar5 * 4;
          iVar1 = *(int *)(param_1 + 0x108);
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x218);
    if (0 < iVar1) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x210);
        if (*(longlong *)(param_1 + 0x210) == 0) {
          lVar2 = param_1 + 0x110;
        }
        if (0 < *(int *)(lVar2 + 8 + lVar3)) {
          memset(*(void **)(lVar2 + lVar3),0,(ulonglong)param_2 << 2);
          lVar2 = *(longlong *)(param_1 + 0x210);
          if (*(longlong *)(param_1 + 0x210) == 0) {
            lVar2 = param_1 + 0x110;
          }
          *(longlong *)(lVar2 + lVar3) =
               *(longlong *)(lVar2 + lVar3) + *(int *)(lVar2 + 8 + lVar3) * lVar5 * 4;
          iVar1 = *(int *)(param_1 + 0x218);
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x328);
    if (0 < iVar1) {
      lVar4 = 0;
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 800);
        if (*(longlong *)(param_1 + 800) == 0) {
          lVar2 = param_1 + 0x220;
        }
        if (0 < *(int *)(lVar2 + 8 + lVar4)) {
          memset(*(void **)(lVar2 + lVar4),0,(ulonglong)(param_2 * 2));
          lVar2 = *(longlong *)(param_1 + 800);
          if (*(longlong *)(param_1 + 800) == 0) {
            lVar2 = param_1 + 0x220;
          }
          *(longlong *)(lVar2 + lVar4) =
               *(longlong *)(lVar2 + lVar4) + *(int *)(lVar2 + 8 + lVar4) * lVar5 * 2;
          iVar1 = *(int *)(param_1 + 0x328);
        }
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 1480789ea FUN_1480789ea body=71 status=ok
// SIG undefined FUN_1480789ea(void)

void FUN_1480789ea(longlong param_1)

{
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148078a32 FUN_148078a32 body=304 status=ok
// SIG undefined FUN_148078a32(void)

longlong FUN_148078a32(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0x1000000000;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0x1000000000;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0x1000000000;
  if (param_3 == (longlong *)0x0) {
    return param_1;
  }
  uVar2 = *(uint *)(param_3 + 2);
  if (-1 < (int)uVar2) {
    if (0x10 < uVar2) {
      FUN_14808b2c2(param_1);
    }
    uVar2 = *(uint *)((longlong)param_3 + 0x14);
    if (-1 < (int)uVar2) {
      if (*(int *)(param_1 + 0x31c) < (int)uVar2) {
        FUN_14808b3bc(param_1 + 400);
      }
      uVar2 = *(uint *)(param_3 + 3);
      if (-1 < (int)uVar2) {
        if (*(int *)(param_1 + 0x4ac) < (int)uVar2) {
          FUN_14808b4ca(param_1 + 800);
        }
        if ((int)param_3[1] == 0) {
          return param_1;
        }
                    /* WARNING: Could not recover jumptable at 0x000148078b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*(code *)(&DAT_14ad81288 +
                          *(int *)(&DAT_14ad81288 + (ulonglong)(*(uint *)(*param_3 + 4) >> 0x1e) * 4
                                  )))();
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 148078c6e FUN_148078c6e body=109 status=ok
// SIG undefined FUN_148078c6e(void)

void FUN_148078c6e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1480892ec(param_1,iVar1);
    }
    FUN_14808bdfb((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148089372(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148078cdc FUN_148078cdc body=179 status=ok
// SIG undefined FUN_148078cdc(void)

void FUN_148078cdc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(lVar2 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  lVar2 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x310);
  }
  iVar1 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(lVar2 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  lVar2 = param_1 + 800;
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4a0);
  }
  iVar1 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(lVar2 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return;
}



// FUNCTION 148078d90 FUN_148078d90 body=71 status=ok
// SIG undefined FUN_148078d90(void)

void FUN_148078d90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148078dfa FUN_148078dfa body=817 status=ok
// SIG undefined FUN_148078dfa(void)

void FUN_148078dfa(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar6 = *(longlong *)(param_2[2] + 0x10);
    lVar10 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar2 + 0x50);
    }
    iVar4 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar10 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xd8;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xd8) == lVar6)
        goto LAB_148078e6f;
        iVar4 = *(int *)(lVar10 + 0xd0);
      } while (iVar4 != -1);
    }
  }
  lVar10 = 0;
LAB_148078e6f:
  uVar11 = (int)param_2[10] + 0xfU & 0xfffffff0;
  uVar12 = (ulonglong)uVar11;
  FUN_14808c3ac();
  *(uint *)(param_2 + 10) = DAT_14cb37d44 + uVar11;
  lVar2 = param_2[7];
  if (lVar10 != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_2[3] + 200) + 0x60);
    local_78 = (void *)0x0;
    local_70 = *(int *)(lVar6 + 0x80);
    _Size = (size_t)local_70;
    _Src = *(void **)(lVar6 + 0x78);
    if (_Size == 0) {
      local_6c = 0;
    }
    else {
      FUN_1447a127e(&local_78,local_70,0);
      memcpy(local_78,_Src,_Size);
    }
    uVar3 = FUN_1480423fa(&local_78);
    iVar4 = FUN_148084f42((longlong *)(lVar10 + 0x58),uVar3,&local_78);
    if ((((iVar4 != -1) &&
         (lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar10 + 0x58),
         piVar7 = (int *)(lVar6 + 0x10), piVar7 != (int *)0x0 && lVar6 != 0)) &&
        (*(longlong *)(lVar10 + 8) != 0)) &&
       ((iVar4 = *piVar7, iVar4 != -1 && (lVar6 = *(longlong *)(lVar10 + 200), lVar6 != 0)))) {
      local_50 = *(longlong *)(lVar10 + 0xb8);
      local_68 = 0x1d;
      local_64 = 0xffffffff00000000;
      local_58 = 0;
      lVar8 = FUN_14475683e(*param_2 + 0x198,*param_2 + 0x70,local_50 + 8);
      if ((lVar8 != 0) && ((*(longlong *)(lVar10 + 0x28) != 0 && (*(int *)(lVar10 + 0x30) != 0)))) {
        *(longlong *)(lVar2 + uVar12) = *(longlong *)(lVar10 + 0x28);
        *(int *)(lVar2 + 8 + uVar12) = iVar4;
        *(uint *)(lVar2 + 0xc + uVar12) = *(uint *)(lVar6 + 0x128) >> 2;
        *(uint *)(lVar2 + 0x10 + uVar12) = *(uint *)(lVar6 + 300) >> 2;
        lVar9 = *(longlong *)(lVar6 + 0x70);
        if (lVar9 == 0) {
          lVar9 = FUN_144b36954();
        }
        *(longlong *)(lVar2 + 0x18 + uVar12) = lVar9;
        lVar9 = *(longlong *)(lVar6 + 0xa0);
        if (lVar9 == 0) {
          lVar9 = FUN_144b36964();
        }
        *(longlong *)(lVar2 + 0x20 + uVar12) = lVar9;
        *(undefined4 *)(lVar2 + 0x28 + uVar12) = *(undefined4 *)(lVar6 + 0x5c);
        *(undefined4 *)(lVar2 + 0x2c + uVar12) = *(undefined4 *)(lVar10 + 0xc0);
        *(undefined4 *)(lVar2 + 0x30 + uVar12) = *(undefined4 *)(lVar6 + 0x124);
        *(undefined4 *)(lVar2 + 0x34 + uVar12) = *(undefined4 *)(lVar10 + 0x1c);
        *(longlong *)(lVar2 + 0x38 + uVar12) = lVar8;
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_148078f2d;
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = FUN_144b3696c();
  *(undefined8 *)(lVar2 + uVar12) = uVar5;
  *(undefined8 *)(lVar2 + 8 + uVar12) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x10 + uVar12) = 0;
  uVar5 = FUN_144b36954();
  *(undefined8 *)(lVar2 + 0x18 + uVar12) = uVar5;
  uVar5 = FUN_144b36964();
  *(undefined8 *)(lVar2 + 0x20 + uVar12) = uVar5;
  puVar1 = (undefined4 *)(lVar2 + 0x28 + uVar12);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0;
  local_50 = FUN_144aba046(&DAT_14ca63b10,*param_2,4,0);
  local_68 = 0x1d;
  local_64 = 0xffffffff00000000;
  local_58 = 0;
  uVar5 = FUN_14475683e(*param_2 + 0x198,*param_2 + 0x70,local_50 + 8);
  *(undefined8 *)(lVar2 + 0x38 + uVar12) = uVar5;
LAB_148078f2d:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807912c FUN_14807912c body=474 status=ok
// SIG undefined FUN_14807912c(void)

void FUN_14807912c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined *local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0xd8;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0xd8) == lVar4) {
          if ((longlong *)(lVar7 + 8) != (longlong *)0x0 && lVar7 != 0) {
            lVar4 = *(longlong *)(lVar7 + 8);
            if ((lVar4 != 0) && (*(longlong *)(lVar7 + 200) == 0)) {
              plVar2 = (longlong *)(lVar7 + 200);
              FUN_143a05248(lVar4,&local_30,*param_2,*(char *)(lVar7 + 0x18) == '\0');
              if (plVar2 != &local_30) {
                lVar4 = *plVar2;
                *plVar2 = local_30;
                local_30 = 0;
                if (lVar4 == 0) goto LAB_1480791fe;
                LOCK();
                piVar1 = (int *)(lVar4 + 8);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
              }
              if (local_30 != 0) {
                LOCK();
                *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + -1;
                UNLOCK();
              }
            }
LAB_1480791fe:
            if (*(int *)(lVar7 + 0xc0) == -1) {
              uVar5 = FUN_14811931c(param_2);
              uVar3 = FUN_143a8d9ca(uVar5);
              *(undefined4 *)(lVar7 + 0xc0) = uVar3;
            }
            if (*(longlong *)(lVar7 + 0xb8) == 0) {
              lVar4 = (longlong)*(int *)(lVar7 + 0xb0);
              local_38 = lVar4 == 0;
              if ((bool)local_38) {
                local_48 = &DAT_14ad8081c;
                local_40 = 4;
                lVar4 = 1;
              }
              else {
                local_48 = *(undefined **)(lVar7 + 0xa8);
                local_40 = lVar4 << 2;
              }
              uVar5 = FUN_1402ec56b(*param_2,L"Niagara_NDCReadDI_NDCSpawnData",4,lVar4);
              *(undefined8 *)(lVar7 + 0xb8) = uVar5;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0xd0);
      } while (iVar6 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148079308 FUN_148079308 body=218 status=ok
// SIG undefined FUN_148079308(void)

void FUN_148079308(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar2 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    uVar5 = *(int *)(param_1 + 0x58) - 1U & (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17;
    iVar3 = *(int *)(lVar4 + (ulonglong)uVar5 * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xd8;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xd8) == lVar2) {
          if ((longlong *)(lVar4 + 8) == (longlong *)0x0 || lVar4 == 0) {
            return;
          }
          lVar2 = *(longlong *)(lVar4 + 8);
          if (lVar2 == 0) {
            return;
          }
          if (*(longlong *)(lVar4 + 200) == 0) {
            return;
          }
          FUN_148114694(lVar2,*param_2,CONCAT31((int3)(uVar5 >> 8),*(char *)(lVar4 + 0x18) == '\0'))
          ;
          lVar2 = *(longlong *)(lVar4 + 200);
          if (lVar2 == 0) {
            return;
          }
          *(undefined8 *)(lVar4 + 200) = 0;
          LOCK();
          piVar1 = (int *)(lVar2 + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          return;
        }
        iVar3 = *(int *)(lVar4 + 0xd0);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1480793e2 FUN_1480793e2 body=210 status=ok
// SIG undefined FUN_1480793e2(void)

void FUN_1480793e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xd8;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xd8) == lVar1) {
          if ((longlong *)(lVar4 + 8) == (longlong *)0x0 || lVar4 == 0) {
            return;
          }
          if (*(longlong *)(lVar4 + 8) == 0) {
            return;
          }
          if (*(char *)(param_2 + 0x18) != '\x01') {
            return;
          }
          *(undefined8 *)(lVar4 + 0xb8) = 0;
          uVar2 = FUN_148119326(param_2);
          FUN_1400ee60a(uVar2,lVar4 + 0xc0);
          *(undefined4 *)(lVar4 + 0xc0) = 0xffffffff;
          return;
        }
        iVar3 = *(int *)(lVar4 + 0xd0);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1480794b4 FUN_1480794b4 body=294 status=ok
// SIG undefined FUN_1480794b4(void)

void FUN_1480794b4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)
           FUN_14808cb6a(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[1];
  *puVar6 = uVar3;
  puVar6[1] = lVar4;
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
  *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_14054c6c4(puVar6 + 0x14,param_2 + 0x12);
  puVar6[0x16] = 0;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_14808549e(puVar6 + 10,param_2 + 7);
    if (*(int *)(puVar6 + 5) != 0) {
      FUN_14011fb0c(puVar6 + 3);
    }
    if (0 < *(int *)(param_2 + 5)) {
      FUN_14129bfb2(puVar6 + 7,param_2 + 4);
      *(undefined1 *)(puVar6 + 9) = *(undefined1 *)(param_2 + 6);
      FUN_140661c88(puVar6 + 3,&DAT_14ca85100,L"NDIDataChannel_ParameterLayoutBuffer",4,
                    *(undefined4 *)(param_2 + 5),0x1c,1,puVar6 + 6);
    }
  }
  FUN_1480795da(param_2);
  return;
}



// FUNCTION 1480795da FUN_1480795da body=85 status=ok
// SIG undefined FUN_1480795da(void)

void FUN_1480795da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_148085682(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148079624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148079636 FUN_148079636 body=283 status=ok
// SIG undefined FUN_148079636(void)

void FUN_148079636(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0xd8;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0xd8) == lVar1) {
          if (((longlong *)(lVar3 + 8) == (longlong *)0x0 || lVar3 == 0) ||
             (lVar1 = *(longlong *)(lVar3 + 8), lVar1 == 0)) break;
          if (*(char *)(lVar3 + 0x18) == '\0') {
            lVar1 = *(longlong *)(lVar1 + 0x28);
            if (lVar1 == 0) break;
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
            UNLOCK();
          }
          else {
            lVar1 = *(longlong *)(lVar1 + 0x30);
            if (lVar1 == 0) break;
          }
          local_14 = *(undefined4 *)(lVar1 + 0x124);
          local_10 = &DAT_100000001;
          FUN_143a5e2ca(param_2,&local_14,0xffffffff);
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xd0);
      } while (iVar2 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148079752 FUN_148079752 body=573 status=ok
// SIG undefined FUN_148079752(void)

void FUN_148079752(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 uStack_28;
  longlong *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37530) {
    FUN_144b3d300(&DAT_14cb37530);
    if (DAT_14cb37530 == -1) {
      FUN_14807425e(&DAT_14cb37498);
      atexit((_func_5014 *)&LAB_14390504e);
      _Init_thread_footer(&DAT_14cb37530);
    }
  }
  if ((DAT_14cb37498 == 0) || ((DAT_14cb374a8 < 1 && ((int)DAT_14cb374b8 < 1)))) {
    FUN_1446f470e(&local_40,&DAT_14a1c72e4,1);
    DAT_14cb37498 = local_40;
    DAT_14cb374c8 = DAT_14cb374c8 | 4;
    FUN_144a5dc74(local_20);
    FUN_1446f470e(&local_48,L"DataChannel interface",1);
    local_58 = FUN_1459ec9a6();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    local_50 = 1;
    local_4e = 0;
    local_4c = 0xffffffff;
    local_40 = local_48;
    local_38[0] = FUN_144830b78(local_38);
    local_30 = 0;
    uStack_28 = 0;
    FUN_1480742ba(&DAT_14cb37498,&local_40,local_20);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x10))();
    }
    FUN_144a5dc74(local_20);
    FUN_1446f470e(&local_58,&DAT_14a1c72e4,1);
    local_40 = local_58;
    local_38[0] = FUN_144830b78(local_38,&DAT_14cb420d0);
    uVar2 = DAT_14cb374b8;
    local_30 = 0;
    uStack_28 = 0;
    lVar3 = (longlong)(int)DAT_14cb374b8;
    DAT_14cb374b8 = DAT_14cb374b8 + 1;
    if (DAT_14cb374bc < DAT_14cb374b8) {
      FUN_14024cd4c(&DAT_14cb374b0,uVar2);
    }
    lVar1 = DAT_14cb374b0;
    *(undefined4 *)(DAT_14cb374b0 + 8 + lVar3 * 0xc) = local_38[0];
    *(longlong *)(lVar1 + lVar3 * 0xc) = local_40;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148079990 FUN_148079990 body=1068 status=ok
// SIG undefined FUN_148079990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148079990(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined4 local_5c;
  wchar_t *local_58;
  wchar_t *local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb375d0) {
    FUN_144b3d300(&DAT_14cb375d0);
    if (DAT_14cb375d0 == -1) {
      FUN_14807425e(&DAT_14cb37538);
      atexit((_func_5014 *)&LAB_14390505a);
      _Init_thread_footer(&DAT_14cb375d0);
    }
  }
  if ((DAT_14cb37538 == (wchar_t *)0x0) || ((DAT_14cb37548 < 1 && ((int)DAT_14cb37558 < 1)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb375f8) {
      FUN_144b3d300(&DAT_14cb375f8);
      if (DAT_14cb375f8 == -1) {
        FUN_1446f470e(&local_50,L"Emit",1);
        _DAT_14cb375d8 = local_50;
        _DAT_14cb375e0 = FUN_144830b78(&DAT_14cb375e0,&DAT_14cb420e0);
        DAT_14cb375e8 = (void *)0x0;
        _DAT_14cb375f0 = 0;
        atexit((_func_5014 *)&LAB_143905066);
        _Init_thread_footer(&DAT_14cb375f8);
      }
    }
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,0xffffffff);
    FUN_140121138(&DAT_14cb375d8);
    memcpy(DAT_14cb375e8,&local_50,(longlong)DAT_14cb375f0);
    FUN_1446f470e(&local_50,L"Write",1);
    DAT_14cb37538 = local_50;
    DAT_14cb37568 = DAT_14cb37568 & 0xffffff99 | 0x46;
    FUN_144a5dc74(local_30);
    FUN_1446f470e(&local_58,L"DataChannel interface",1);
    local_68 = (wchar_t *)FUN_1459ec9a6();
    if ((local_68 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68);
    }
    local_60 = 1;
    local_5e = 0;
    local_5c = 0xffffffff;
    local_50 = local_58;
    local_48[0] = FUN_144830b78(local_48);
    local_40 = 0;
    uStack_38 = 0;
    FUN_1480742ba(&DAT_14cb37538,&local_50,local_30);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    local_50 = L"ExecuteWriteFlagTooltip";
    local_48[0] = 0x17;
    FUN_1446e940c(local_30,&local_50);
    local_50 = L"NiagaraDataInterfaceDataChannelWrite";
    local_48[0] = 0x24;
    FUN_1446e940c(&local_68,&local_50);
    FUN_140208bae(&local_50,&local_68,local_30,
                  L"If true then the write is executed, if false then this call is ignored and no write occurs."
                 );
    FUN_1480742ba(&DAT_14cb37538,&DAT_14cb375d8,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    FUN_144a5dc74(local_30);
    FUN_1446f470e(&local_68,L"Index",1);
    local_50 = local_68;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb420d0);
    local_40 = 0;
    uStack_38 = 0;
    FUN_1480742ba(&DAT_14cb37538,&local_50,local_30);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    FUN_144a5dc74(local_30);
    FUN_1446f470e(&local_68,L"Success",1);
    local_50 = local_68;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb420e0);
    uVar2 = DAT_14cb37558;
    local_40 = 0;
    uStack_38 = 0;
    lVar3 = (longlong)(int)DAT_14cb37558;
    DAT_14cb37558 = DAT_14cb37558 + 1;
    if (DAT_14cb3755c < DAT_14cb37558) {
      FUN_14024cd4c(&DAT_14cb37550,uVar2);
    }
    lVar1 = DAT_14cb37550;
    *(undefined4 *)(DAT_14cb37550 + 8 + lVar3 * 0xc) = local_48[0];
    *(wchar_t **)(lVar1 + lVar3 * 0xc) = local_50;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    _DAT_14cb37578 = (undefined2)DAT_14cb37548;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148079dbd FUN_148079dbd body=929 status=ok
// SIG undefined FUN_148079dbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148079dbd(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined4 local_5c;
  wchar_t *local_58;
  wchar_t *local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb37698) {
    FUN_144b3d300(&DAT_14cb37698);
    if (DAT_14cb37698 == -1) {
      FUN_14807425e(&DAT_14cb37600);
      atexit((_func_5014 *)&LAB_143905077);
      _Init_thread_footer(&DAT_14cb37698);
    }
  }
  if ((DAT_14cb37600 == (wchar_t *)0x0) || ((DAT_14cb37610 < 1 && ((int)DAT_14cb37620 < 1)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb376c0) {
      FUN_144b3d300(&DAT_14cb376c0);
      if (DAT_14cb376c0 == -1) {
        FUN_1446f470e(&local_50,L"Emit",1);
        _DAT_14cb376a0 = local_50;
        _DAT_14cb376a8 = FUN_144830b78(&DAT_14cb376a8,&DAT_14cb420e0);
        DAT_14cb376b0 = (void *)0x0;
        _DAT_14cb376b8 = 0;
        atexit((_func_5014 *)&LAB_143905083);
        _Init_thread_footer(&DAT_14cb376c0);
      }
    }
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,0xffffffff);
    FUN_140121138(&DAT_14cb376a0);
    memcpy(DAT_14cb376b0,&local_50,(longlong)DAT_14cb376b8);
    FUN_1446f470e(&local_50,L"Append",1);
    DAT_14cb37600 = local_50;
    DAT_14cb37630 = DAT_14cb37630 | 0x46;
    FUN_144a5dc74(local_30);
    FUN_1446f470e(&local_58,L"DataChannel interface",1);
    local_68 = (wchar_t *)FUN_1459ec9a6();
    if ((local_68 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68);
    }
    local_60 = 1;
    local_5e = 0;
    local_5c = 0xffffffff;
    local_50 = local_58;
    local_48[0] = FUN_144830b78(local_48);
    local_40 = 0;
    uStack_38 = 0;
    FUN_1480742ba(&DAT_14cb37600,&local_50,local_30);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    local_50 = L"ExecuteAppendFlagTooltip";
    local_48[0] = 0x18;
    FUN_1446e940c(local_30,&local_50);
    local_50 = L"NiagaraDataInterfaceDataChannelWrite";
    local_48[0] = 0x24;
    FUN_1446e940c(&local_68,&local_50);
    FUN_140208bae(&local_50,&local_68,local_30,
                  L"If true then the append is executed, if false then this call is skipped and no append occurs."
                 );
    FUN_1480742ba(&DAT_14cb37600,&DAT_14cb376a0,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    FUN_144a5dc74(local_30);
    FUN_1446f470e(&local_68,L"Success",1);
    local_50 = local_68;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb420e0);
    uVar2 = DAT_14cb37620;
    local_40 = 0;
    uStack_38 = 0;
    lVar3 = (longlong)(int)DAT_14cb37620;
    DAT_14cb37620 = DAT_14cb37620 + 1;
    if (DAT_14cb37624 < DAT_14cb37620) {
      FUN_14024cd4c(&DAT_14cb37618,uVar2);
    }
    lVar1 = DAT_14cb37618;
    *(undefined4 *)(DAT_14cb37618 + 8 + lVar3 * 0xc) = local_48[0];
    *(wchar_t **)(lVar1 + lVar3 * 0xc) = local_50;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    _DAT_14cb37640 = (undefined2)DAT_14cb37610;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807a160 FUN_14807a160 body=110 status=ok
// SIG undefined FUN_14807a160(void)

ulonglong FUN_14807a160(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xffffffffffffffff;
  param_2[0x14] = 0;
  param_2[0x15] = 0x800000000;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined1 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  param_2[0x19] = 0;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),DAT_14c76292d);
  if (DAT_14c76292d == '\x01') {
    FUN_14807a1ce(param_2,param_1);
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 14807a1ce FUN_14807a1ce body=236 status=ok
// SIG undefined FUN_14807a1ce(void)

void FUN_14807a1ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x20;
  FUN_1480856c8(lVar1,*(undefined4 *)(param_2 + 0x60));
  if ((longlong)*(int *)(param_2 + 0x60) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x58);
    lVar5 = (longlong)*(int *)(param_2 + 0x60) * 0x28;
    do {
      uVar3 = FUN_148073c5c();
      FUN_148073d58(uVar3,&local_50,lVar6,param_2 + 200);
      iVar2 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar2 + 1U) {
        FUN_1480858a8(lVar1,iVar2);
      }
      lVar4 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar4 = lVar1;
      }
      *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = local_50;
      *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_48;
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807a2bc FUN_14807a2bc body=68 status=ok
// SIG undefined FUN_14807a2bc(void)

void FUN_14807a2bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_148076f5e(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014807a2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14807a306 FUN_14807a306 body=36 status=ok
// SIG undefined FUN_14807a306(void)

bool FUN_14807a306(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_143905c42(param_2,param_1);
  }
  return param_2 == 0;
}



// FUNCTION 14807a32a FUN_14807a32a body=517 status=ok
// SIG undefined FUN_14807a32a(void)

void FUN_14807a32a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  memset(param_2,0,0xa0);
  param_2[2] = &PTR_FUN_14a355380;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0xffffffff00000080;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8b) = 0;
  lVar4 = *(longlong *)(param_3 + 8);
  if (lVar4 == 0) {
LAB_14807a3ee:
    *param_2 = uVar5;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x48);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    if (plVar6 == (longlong *)0x0) goto LAB_14807a3ee;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar2 = (longlong *)param_2[1];
    *param_2 = uVar5;
    if (plVar6 == plVar2) {
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
          lVar4 = *plVar6;
LAB_14807a3e9:
          (**(code **)(lVar4 + 0x10))(plVar6);
        }
      }
    }
    else {
      param_2[1] = plVar6;
      if (plVar2 != (longlong *)0x0) {
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
            lVar4 = *plVar2;
            plVar6 = plVar2;
            goto LAB_14807a3e9;
          }
        }
      }
    }
  }
  if ((*(char *)(param_3 + 0xb4) == '\x01') && (DAT_14c76292d == '\x01')) {
    *(undefined1 *)(param_3 + 0xb4) = 0;
    lVar4 = FUN_14479d2ce(param_3);
    uVar5 = FUN_14479d2ce(lVar4 + 0x28);
    FUN_148112dec(uVar5,&local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_148077b92(param_2 + 2,param_1 + 0x58,local_50 + 0x58);
  }
  *(undefined4 *)(param_2 + 0x11) = 0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puVar3 = (undefined4 *)(param_3 + 0xb8);
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') goto LAB_14807a436;
    puVar3 = (undefined4 *)(param_1 + 0x44);
  }
  *(undefined4 *)(param_2 + 0x11) = *puVar3;
LAB_14807a436:
  *(undefined1 *)((longlong)param_2 + 0x8c) = *(undefined1 *)(param_1 + 0x48);
  *(undefined1 *)((longlong)param_2 + 0x8d) = *(undefined1 *)(param_1 + 0x49);
  *(undefined1 *)((longlong)param_2 + 0x8e) = *(undefined1 *)(param_1 + 0x4a);
  param_2[0x12] = *(undefined8 *)(param_3 + 0xbc);
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_3 + 0xc4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807a56c FUN_14807a56c body=125 status=ok
// SIG undefined FUN_14807a56c(void)

undefined8 FUN_14807a56c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (((((param_2 != 0) && (cVar2 = FUN_1481192e4(), cVar2 != '\0')) &&
       (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40))) &&
      ((*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44) &&
       (*(char *)(param_1 + 0x48) == *(char *)(param_2 + 0x48))))) &&
     ((*(char *)(param_1 + 0x49) == *(char *)(param_2 + 0x49) &&
      (*(char *)(param_1 + 0x4a) == *(char *)(param_2 + 0x4a))))) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_1 + 0x50) == lVar1) &&
       (*(char *)(param_1 + 0x4b) == *(char *)(param_2 + 0x4b))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14807a5e9 FUN_14807a5e9 body=148 status=ok
// SIG undefined FUN_14807a5e9(void)

undefined8 FUN_14807a5e9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b10258();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807a67e FUN_14807a67e body=59 status=ok
// SIG undefined FUN_14807a67e(void)

longlong FUN_14807a67e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14808d45e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14808d44e(lVar2);
  return lVar2;
}



// FUNCTION 14807a6ba FUN_14807a6ba body=59 status=ok
// SIG undefined FUN_14807a6ba(void)

longlong FUN_14807a6ba(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14808d768(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14808d73c(lVar2);
  return lVar2;
}



// FUNCTION 14807a6f6 FUN_14807a6f6 body=109 status=ok
// SIG undefined FUN_14807a6f6(void)

void FUN_14807a6f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_148085a06(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014807a757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14807a766 FUN_14807a766 body=1583 status=ok
// SIG undefined FUN_14807a766(void)

ulonglong FUN_14807a766(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong param_5,longlong *param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 unaff_R13;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined4 *local_120;
  undefined2 *local_118;
  int local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  ulonglong *local_f0;
  undefined1 *local_e8;
  ulonglong *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  longlong alStack_98 [2];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) {
LAB_14807a793:
    param_2 = 0;
  }
  else {
    lVar5 = FUN_145b10258();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_14807a793;
  }
  uVar13 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (param_3 == 0) {
LAB_14807a7ae:
    if (param_2 == 0) {
LAB_14807ac7b:
      uVar12 = CONCAT71(uVar13,1);
      goto LAB_14807a7c9;
    }
LAB_14807a7b7:
    pwVar7 = L"Recevied nullptr storage object for comparison";
LAB_14807a7be:
    FUN_14020fad6(param_6,pwVar7);
  }
  else {
    lVar5 = FUN_145b10258();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_14807a7ae;
    if (param_2 == 0) goto LAB_14807a7b7;
    cVar3 = FUN_144a7afa6(param_2 + 0x38,param_3 + 0x38);
    if (cVar3 == '\0') {
      pwVar7 = L"Different source data channel assets";
      goto LAB_14807a7be;
    }
    if (*(int *)(param_2 + 0x30) == *(int *)(param_3 + 0x30)) {
      if (0 < *(int *)(param_2 + 0x30)) {
        uVar12 = CONCAT71(uVar13,1);
        uVar10 = 0;
        do {
          lVar5 = uVar10 * 0x20;
          puVar1 = (undefined4 *)(*(longlong *)(param_3 + 0x28) + lVar5);
          puVar15 = (undefined4 *)(*(longlong *)(param_2 + 0x28) + lVar5);
          if (*(int *)(*(longlong *)(param_2 + 0x28) + lVar5) ==
              *(int *)(*(longlong *)(param_3 + 0x28) + lVar5)) {
            iVar9 = puVar15[4];
            local_128 = uVar10;
            if (iVar9 != puVar1[4]) {
              FUN_142787b30(local_a8,uVar10 & 0xffffffff);
              FUN_142787b30(local_88,puVar15[4]);
              FUN_142787b30(local_68,puVar1[4]);
              local_f0 = &local_48;
              local_f8 = local_a8;
              FUN_1407adb6e(&local_c8,&local_f8);
              FUN_140230a2e(&local_b8,
                            L"Frame {0}: different number of variables in data channel store, {1} vs {2}\n"
                            ,&local_c8);
              iVar9 = (int)local_b0 + -1;
              if ((int)local_b0 == 0) {
                iVar9 = 0;
              }
              FUN_1400020e8(param_6,local_b8,iVar9);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              FUN_1407adb3e(local_c8,local_c0);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              lVar5 = 0x60;
              do {
                if (*(longlong *)((longlong)&local_b8 + lVar5) != 0) {
                  FUN_1400020a8();
                }
                lVar5 = lVar5 + -0x20;
              } while (lVar5 != 0);
              goto LAB_14807ab6a;
            }
            if (0 < iVar9) {
              lVar5 = 0;
              local_120 = puVar1;
              do {
                lVar11 = *(longlong *)(puVar15 + 2);
                lVar14 = lVar5 * 0x20;
                if (*(longlong *)(lVar11 + 0x14 + lVar14) ==
                    *(longlong *)(*(longlong *)(local_120 + 2) + 0x14 + lVar14)) {
                  puVar2 = (undefined8 *)(lVar11 + lVar14);
                  puVar6 = (undefined8 *)(*(longlong *)(local_120 + 2) + lVar14);
                  if (*(int *)((longlong)puVar2 + 0x1c) != *(int *)((longlong)puVar6 + 0x1c))
                  goto LAB_14807a92f;
                  iVar4 = *(int *)(puVar2 + 1);
                  if ((iVar4 != *(int *)(puVar6 + 1)) ||
                     ((iVar4 != 0 &&
                      (iVar4 = memcmp((void *)*puVar2,(void *)*puVar6,(longlong)iVar4), iVar4 != 0))
                     )) goto LAB_14807a92f;
                }
                else {
LAB_14807a92f:
                  FUN_142787b30(local_a8,local_128);
                  FUN_1400021e4(lVar11 + lVar14 + 0x14,&local_118);
                  puVar8 = &DAT_149dfb77a;
                  if (local_110 != 0) {
                    puVar8 = local_118;
                  }
                  FUN_140230a18(local_88,puVar8);
                  local_108 = local_a8;
                  local_100 = local_68;
                  FUN_1407adb6e(&local_c8,&local_108);
                  FUN_140230a2e(&local_b8,
                                L"Frame {0}: different buffers in data channel store for source var {1}\n"
                                ,&local_c8);
                  iVar9 = (int)local_b0 + -1;
                  if ((int)local_b0 == 0) {
                    iVar9 = 0;
                  }
                  FUN_1400020e8(param_6,local_b8,iVar9);
                  if (local_b8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1407adb3e(local_c8,local_c0);
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  lVar11 = 0x40;
                  do {
                    if (*(longlong *)((longlong)&local_b8 + lVar11) != 0) {
                      FUN_1400020a8();
                    }
                    lVar11 = lVar11 + -0x20;
                  } while (lVar11 != 0);
                  if (local_118 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  iVar9 = puVar15[4];
                }
                lVar5 = lVar5 + 1;
                uVar10 = local_128;
              } while (lVar5 < iVar9);
            }
          }
          else {
            FUN_142787b30(local_a8,uVar10 & 0xffffffff);
            FUN_142787b30(local_88,*puVar15);
            FUN_142787b30(local_68,*puVar1);
            local_e0 = &local_48;
            local_e8 = local_a8;
            FUN_1407adb6e(&local_c8,&local_e8);
            FUN_140230a2e(&local_b8,
                          L"Frame {0}: different number of elements in data channel store, {1} vs {2}\n"
                          ,&local_c8);
            iVar9 = (int)local_b0 + -1;
            if ((int)local_b0 == 0) {
              iVar9 = 0;
            }
            FUN_1400020e8(param_6,local_b8,iVar9);
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            FUN_1407adb3e(local_c8,local_c0);
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            lVar5 = 0x60;
            do {
              if (*(longlong *)((longlong)&local_b8 + lVar5) != 0) {
                FUN_1400020a8();
              }
              lVar5 = lVar5 + -0x20;
            } while (lVar5 != 0);
LAB_14807ab6a:
            uVar12 = 0;
          }
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < (longlong)*(int *)(param_2 + 0x30));
        goto LAB_14807a7c9;
      }
      goto LAB_14807ac7b;
    }
    FUN_142787b30(local_a8);
    FUN_142787b30(local_88,*(undefined4 *)(param_3 + 0x30));
    local_d0 = local_68;
    local_d8 = local_a8;
    FUN_1407adb6e(&local_c8);
    FUN_140230a2e(&local_b8,L"Different frame data count. {0} vs {1}",&local_c8);
    if (&local_b8 == param_6) {
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_6 != 0) {
        FUN_1400020a8();
      }
      *param_6 = local_b8;
      local_b8 = 0;
      *(int *)(param_6 + 1) = (int)local_b0;
      *(undefined4 *)((longlong)param_6 + 0xc) = local_b0._4_4_;
      local_b0 = 0;
    }
    FUN_1407adb3e(local_c8,local_c0);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x40;
    do {
      if (*(longlong *)((longlong)&local_b8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  uVar12 = 0;
LAB_14807a7c9:
  if (*(char *)(param_5 + 4) == '\x01') {
    *(undefined1 *)(param_5 + 4) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffff01;
}



// FUNCTION 14807ad96 FUN_14807ad96 body=127 status=ok
// SIG undefined FUN_14807ad96(void)

ulonglong FUN_14807ad96(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  bVar1 = FUN_1414db5a0();
  bVar1 = param_2 != 0 & bVar1;
  if (bVar1 == 1) {
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)(param_2 + 0x49) = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)(param_2 + 0x4a) = *(undefined1 *)(param_1 + 0x4a);
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x50);
      }
    }
    *(longlong *)(param_2 + 0x50) = lVar2;
    FUN_148064fee(param_2 + 0x58,param_1 + 0x58);
    *(undefined1 *)(param_2 + 0x4b) = *(undefined1 *)(param_1 + 0x4b);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff;
}



// FUNCTION 14807ae16 FUN_14807ae16 body=191 status=ok
// SIG undefined FUN_14807ae16(void)

void FUN_14807ae16(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14807aed6(local_28,param_1);
  FUN_144a76cd4(&local_38,param_1);
  uVar2 = 0;
  if ((*(longlong *)(local_20 + 200) != 0) && (uVar2 = 0, DAT_14c76292d == '\x01')) {
    uVar2 = *(undefined4 *)(*(longlong *)(local_20 + 200) + 0x124);
  }
  piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar4 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar4 = (int *)(param_1 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807aed6 FUN_14807aed6 body=148 status=ok
// SIG undefined FUN_14807aed6(void)

void FUN_14807aed6(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14807af6a FUN_14807af6a body=190 status=ok
// SIG undefined FUN_14807af6a(void)

void FUN_14807af6a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(longlong *)(lVar2 + lVar3) =
           *(longlong *)(lVar2 + lVar3) + (longlong)*(int *)(lVar2 + 0x10 + lVar3) * 4;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  lVar2 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x310);
  }
  iVar1 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(longlong *)(lVar2 + lVar3) =
           *(longlong *)(lVar2 + lVar3) + (longlong)*(int *)(lVar2 + 0x10 + lVar3) * 4;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  lVar2 = param_1 + 800;
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4a0);
  }
  iVar1 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(longlong *)(lVar2 + lVar3) =
           *(longlong *)(lVar2 + lVar3) + (longlong)*(int *)(lVar2 + 0x10 + lVar3) * 2;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return;
}



// FUNCTION 14807b04a FUN_14807b04a body=902 status=ok
// SIG undefined FUN_14807b04a(void)

void FUN_14807b04a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  size_t _Size;
  uint uVar9;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar8 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x50);
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0xe0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0xe0) == lVar6)
        goto LAB_14807b0bc;
        iVar4 = *(int *)(lVar8 + 0xd8);
      } while (iVar4 != -1);
    }
  }
  lVar8 = 0;
LAB_14807b0bc:
  uVar9 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar10 = (ulonglong)uVar9;
  FUN_14808d952();
  *(uint *)(param_2 + 0x50) = DAT_14cb37ddc + uVar9;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar8 != 0) {
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) + 0x60);
    local_48 = (void *)0x0;
    local_40 = *(int *)(lVar6 + 0x80);
    _Size = (size_t)local_40;
    _Src = *(void **)(lVar6 + 0x78);
    if (_Size == 0) {
      local_3c = 0;
    }
    else {
      FUN_1447a127e(&local_48,local_40,0);
      memcpy(local_48,_Src,_Size);
    }
    uVar3 = FUN_1480423fa(&local_48);
    iVar4 = FUN_148084f42((longlong *)(lVar8 + 0x50),uVar3,&local_48);
    if ((((iVar4 != -1) &&
         (lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar8 + 0x50),
         piVar7 = (int *)(lVar6 + 0x10), piVar7 != (int *)0x0 && lVar6 != 0)) &&
        (*(longlong *)(lVar8 + 8) != 0)) && (iVar4 = *piVar7, iVar4 != -1)) {
      lVar6 = *(longlong *)(lVar8 + 0xa0);
      lVar2 = *(longlong *)(lVar8 + 0xa8);
      if (((lVar2 != 0 || lVar6 != 0) && (*(longlong *)(lVar8 + 0x20) != 0)) &&
         (*(int *)(lVar8 + 0x28) != 0)) {
        *(longlong *)(lVar1 + uVar10) = *(longlong *)(lVar8 + 0x20);
        *(int *)(lVar1 + 8 + uVar10) = iVar4;
        if (lVar2 == 0) {
          *(undefined1 **)(lVar1 + 0xc + uVar10) = &DAT_100000001;
          *(longlong *)(lVar1 + 0x18 + uVar10) = DAT_14cb36f18;
          *(longlong *)(lVar1 + 0x20 + uVar10) = DAT_14cb36f60;
          *(undefined4 *)(lVar1 + 0x28 + uVar10) = 0xffffffff;
          uVar3 = 0xffffffff;
        }
        else {
          *(uint *)(lVar1 + 0xc + uVar10) = *(uint *)(lVar2 + 0x128) >> 2;
          *(uint *)(lVar1 + 0x10 + uVar10) = *(uint *)(lVar2 + 300) >> 2;
          lVar8 = *(longlong *)(lVar2 + 0x68);
          if (*(longlong *)(lVar2 + 0x68) == 0) {
            lVar8 = DAT_14cb36f18;
          }
          *(longlong *)(lVar1 + 0x18 + uVar10) = lVar8;
          lVar8 = *(longlong *)(lVar2 + 0x98);
          if (*(longlong *)(lVar2 + 0x98) == 0) {
            lVar8 = DAT_14cb36f60;
          }
          *(longlong *)(lVar1 + 0x20 + uVar10) = lVar8;
          *(undefined4 *)(lVar1 + 0x28 + uVar10) = *(undefined4 *)(lVar2 + 0x5c);
          uVar3 = *(undefined4 *)(lVar2 + 0x124);
        }
        *(undefined4 *)(lVar1 + 0x2c + uVar10) = uVar3;
        if (lVar6 == 0) {
          *(longlong *)(lVar1 + 0x30 + uVar10) = DAT_14cb36f18;
          *(longlong *)(lVar1 + 0x38 + uVar10) = DAT_14cb36f60;
          *(undefined8 *)(lVar1 + 0x40 + uVar10) = 0xffffffffffffffff;
          *(undefined4 *)(lVar1 + 0x48 + uVar10) = 1;
          uVar9 = 1;
        }
        else {
          lVar8 = *(longlong *)(lVar6 + 0x68);
          if (*(longlong *)(lVar6 + 0x68) == 0) {
            lVar8 = DAT_14cb36f18;
          }
          *(longlong *)(lVar1 + 0x30 + uVar10) = lVar8;
          lVar8 = *(longlong *)(lVar6 + 0x98);
          if (*(longlong *)(lVar6 + 0x98) == 0) {
            lVar8 = DAT_14cb36f60;
          }
          *(longlong *)(lVar1 + 0x38 + uVar10) = lVar8;
          *(undefined4 *)(lVar1 + 0x40 + uVar10) = *(undefined4 *)(lVar6 + 0x5c);
          *(undefined4 *)(lVar1 + 0x44 + uVar10) = *(undefined4 *)(lVar6 + 0x124);
          *(uint *)(lVar1 + 0x48 + uVar10) = *(uint *)(lVar6 + 0x128) >> 2;
          uVar9 = *(uint *)(lVar6 + 300) >> 2;
        }
        *(uint *)(lVar1 + 0x4c + uVar10) = uVar9;
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14807b143;
      }
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = FUN_144b3696c();
  *(undefined8 *)(lVar1 + uVar10) = uVar5;
  *(undefined8 *)(lVar1 + 8 + uVar10) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x10 + uVar10) = 0;
  *(longlong *)(lVar1 + 0x18 + uVar10) = DAT_14cb36f18;
  *(longlong *)(lVar1 + 0x20 + uVar10) = DAT_14cb36f60;
  *(undefined8 *)(lVar1 + 0x28 + uVar10) = 0xffffffffffffffff;
  *(longlong *)(lVar1 + 0x30 + uVar10) = DAT_14cb36f18;
  *(longlong *)(lVar1 + 0x38 + uVar10) = DAT_14cb36f60;
  *(undefined8 *)(lVar1 + 0x40 + uVar10) = 0xffffffffffffffff;
LAB_14807b143:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807b3d2 FUN_14807b3d2 body=428 status=ok
// SIG undefined FUN_14807b3d2(void)

void FUN_14807b3d2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)
           FUN_14808e2a8(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  lVar3 = *param_2;
  if (lVar3 == 0) {
    *plVar6 = 0;
    plVar4 = (longlong *)plVar6[1];
    if (plVar4 != (longlong *)0x0) {
      plVar6[1] = 0;
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
  }
  else {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)plVar6[1];
    *plVar6 = lVar3;
    plVar6[1] = lVar5;
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
    if (*(char *)((longlong)param_2 + 0x8e) == '\x01') {
      FUN_14811486a(*plVar6,(int)param_2[0x11]);
    }
    *(int *)((longlong)plVar6 + 0xac) = (int)param_2[0x11];
    *(undefined1 *)(plVar6 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x8c);
    *(undefined1 *)((longlong)plVar6 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0x8d);
    *(undefined1 *)((longlong)plVar6 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0x8e);
    plVar6[0x16] = param_2[0x12];
    *(int *)(plVar6 + 0x17) = (int)param_2[0x13];
  }
  if ((char)param_2[0x10] == '\x01') {
    *(undefined1 *)(param_2 + 0x10) = 0;
    FUN_14808549e(plVar6 + 9,param_2 + 6);
    if ((int)plVar6[4] != 0) {
      FUN_14011fb0c(plVar6 + 2);
    }
    if (0 < (int)param_2[4]) {
      FUN_14129bfb2(plVar6 + 6,param_2 + 3);
      *(char *)(plVar6 + 8) = (char)param_2[5];
      FUN_140661c88(plVar6 + 2,&DAT_14ca85100,L"NDIDataChannel_ParameterLayoutBuffer",4,
                    (int)param_2[4],0x1c,1,plVar6 + 5);
    }
  }
  FUN_14807b57e(param_2);
  return;
}



// FUNCTION 14807b57e FUN_14807b57e body=68 status=ok
// SIG undefined FUN_14807b57e(void)

void FUN_14807b57e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_148085682(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014807b5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14807b5c8 FUN_14807b5c8 body=679 status=ok
// SIG undefined FUN_14807b5c8(void)

void FUN_14807b5c8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  byte local_70;
  byte local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0xe0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0xe0) == lVar4) {
          plVar9 = (longlong *)(lVar7 + 8);
          if ((plVar9 == (longlong *)0x0 || lVar7 == 0) || (*plVar9 == 0)) break;
          if (*(longlong *)(lVar7 + 0xa0) == 0) {
            bVar2 = *(byte *)(lVar7 + 0xb0);
            if (((bVar2 | *(byte *)(lVar7 + 0xb1)) & 1) == 0) {
              if (*(char *)(lVar7 + 0xc4) != '\x01') goto LAB_14807b6a7;
              local_68 = 0;
            }
            else {
              local_68 = bVar2 ^ 1 | *(byte *)(lVar7 + 0xb1);
            }
            plVar8 = (longlong *)(lVar7 + 0xa0);
            local_50 = *(undefined8 *)(lVar7 + 0xb8);
            local_60 = &local_50;
            local_48 = *(undefined4 *)(lVar7 + 0xc0);
            local_78 = *(undefined4 *)(lVar7 + 0xb4);
            local_68 = local_68 & 1;
            local_70 = bVar2;
            FUN_1481146dc(*plVar9,&local_40,*param_2,*(undefined4 *)(param_2[1] + 0x24));
            if (plVar8 == &local_40) {
LAB_14807b7b7:
              if (local_40 != 0) {
                LOCK();
                *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + -1;
                UNLOCK();
              }
            }
            else {
              lVar4 = *plVar8;
              *plVar8 = local_40;
              local_40 = 0;
              if (lVar4 != 0) {
                LOCK();
                piVar1 = (int *)(lVar4 + 8);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                goto LAB_14807b7b7;
              }
            }
            local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(*(longlong *)(lVar7 + 0xa0) + 0x5c));
            uVar5 = FUN_14811931c(param_2);
            FUN_1400ee60a(uVar5,&local_40);
            lVar4 = *(longlong *)(lVar7 + 0xa0);
            uVar5 = FUN_14811931c(param_2);
            uVar3 = FUN_143a8d9ca(uVar5);
            *(undefined4 *)(lVar4 + 0x5c) = uVar3;
            if (*(char *)(lVar7 + 0xc4) == '\x01') {
              iVar6 = *(int *)(lVar7 + 0xd0);
              *(uint *)(lVar7 + 0xd0) = iVar6 + 1U;
              if (*(uint *)(lVar7 + 0xd4) < iVar6 + 1U) {
                FUN_14808e9b0((longlong *)(lVar7 + 200),iVar6);
              }
              lVar4 = *plVar8;
              *(longlong *)(*(longlong *)(lVar7 + 200) + (longlong)iVar6 * 8) = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
            }
          }
LAB_14807b6a7:
          if ((*(char *)(lVar7 + 0xb2) != '\x01') || (*(longlong *)(lVar7 + 0xa8) != 0)) break;
          plVar8 = (longlong *)(lVar7 + 0xa8);
          FUN_143a04d3e(*plVar9,&local_40,*param_2);
          if (plVar8 != &local_40) {
            lVar4 = *plVar8;
            *plVar8 = local_40;
            local_40 = 0;
            if (lVar4 == 0) break;
            LOCK();
            piVar1 = (int *)(lVar4 + 8);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          if (local_40 != 0) {
            LOCK();
            *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + -1;
            UNLOCK();
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0xd8);
      } while (iVar6 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807b870 FUN_14807b870 body=210 status=ok
// SIG undefined FUN_14807b870(void)

void FUN_14807b870(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xe0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xe0) == lVar2) {
          if ((longlong *)(lVar4 + 8) == (longlong *)0x0 || lVar4 == 0) {
            return;
          }
          lVar2 = *(longlong *)(lVar4 + 8);
          if (lVar2 == 0) {
            return;
          }
          if (*(longlong *)(lVar4 + 0xa8) == 0) {
            return;
          }
          FUN_14811466a(lVar2,*param_2);
          lVar2 = *(longlong *)(lVar4 + 0xa8);
          if (lVar2 == 0) {
            return;
          }
          *(undefined8 *)(lVar4 + 0xa8) = 0;
          LOCK();
          piVar1 = (int *)(lVar2 + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          return;
        }
        iVar3 = *(int *)(lVar4 + 0xd8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14807b942 FUN_14807b942 body=240 status=ok
// SIG undefined FUN_14807b942(void)

void FUN_14807b942(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = param_2[2];
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xe0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0xe0) == lVar2) {
          if ((longlong *)(lVar4 + 8) == (longlong *)0x0 || lVar4 == 0) {
            return;
          }
          lVar2 = *(longlong *)(lVar4 + 8);
          if (lVar2 == 0) {
            return;
          }
          if (*(char *)(param_2 + 3) != '\x01') {
            return;
          }
          if (*(longlong *)(lVar4 + 0xa0) == 0) {
            return;
          }
          FUN_143a04da6(lVar2,*param_2,0x400,0x70,*(longlong *)(lVar4 + 0xa0));
          lVar2 = *(longlong *)(lVar4 + 0xa0);
          if (lVar2 == 0) {
            return;
          }
          *(undefined8 *)(lVar4 + 0xa0) = 0;
          LOCK();
          piVar1 = (int *)(lVar2 + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          return;
        }
        iVar3 = *(int *)(lVar4 + 0xd8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14807ba36 FUN_14807ba36 body=33 status=ok
// SIG undefined FUN_14807ba36(void)

void FUN_14807ba36(undefined8 param_1,undefined8 param_2)

{
  FUN_14808ea36();
  FUN_14096837e(param_2,&DAT_14cb37e28);
  return;
}



// FUNCTION 14807ba58 FUN_14807ba58 body=101 status=ok
// SIG undefined FUN_14807ba58(void)

void FUN_14807ba58(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  FUN_14808ea36();
  uVar4 = FUN_144b34ab6(param_2,&DAT_14cb37e28);
  lVar2 = param_2[7];
  uVar5 = (ulonglong)uVar4;
  uVar3 = FUN_14573eae0(param_2[1],uVar1,0x1c);
  *(undefined8 *)(lVar2 + uVar5) = uVar3;
  uVar1 = FUN_14573eae0(param_2[1],uVar1,0x1c);
  *(undefined8 *)(lVar2 + 8 + uVar5) = uVar1;
  *(undefined4 *)(lVar2 + 0x10 + uVar5) = 0;
  return;
}



// FUNCTION 14807babe FUN_14807babe body=3327 status=ok
// SIG undefined FUN_14807babe(void)

void FUN_14807babe(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb37700) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807c7be;
  }
  else if (lVar1 == DAT_14cb376f8) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807c838;
  }
  else if (lVar1 == DAT_14cb376f0) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807c8b2;
  }
  else if (lVar1 == DAT_14cb37710) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807c92c;
  }
  else if (lVar1 == DAT_14cb37718) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807c9a6;
  }
  else if (lVar1 == DAT_14cb37720) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807ca20;
  }
  else if (lVar1 == DAT_14cb37728) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807ca9a;
  }
  else if (lVar1 == DAT_14cb37730) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807cb14;
  }
  else if (lVar1 == DAT_14cb37738) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807cb8e;
  }
  else if (lVar1 == DAT_14cb376e8) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807cc08;
  }
  else {
    if (lVar1 != DAT_14cb37708) {
      if ((longlong)(int)param_2[6] != 0) {
        plVar3 = (longlong *)param_2[5];
        lVar4 = (longlong)(int)param_2[6] << 4;
        do {
          if (*plVar3 == DAT_14cb376e0) {
            if ((plVar3 != (longlong *)0x0) && (plVar3[1] != 0)) {
              if (lVar1 == DAT_14cb37740) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807ccfc;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37748) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807cd59;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37750) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807cdb6;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37758) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807ce13;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37760) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807ce70;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37768) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807cecd;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37770) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807cf2a;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37778) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807cf87;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37780) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807cfe4;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37788) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807d041;
                goto LAB_14807bb54;
              }
              if (lVar1 == DAT_14cb37790) {
                local_28 = (undefined8 *)0x0;
                local_20 = 0;
                FUN_1446efa72(&local_28,0,2,0x10);
                *local_28 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar4 = DAT_14c758608 + 1;
                lVar1 = DAT_14c758608 + 1;
                if (lVar4 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar4 = DAT_14c758608 + 2;
                  lVar1 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar1;
                local_28[2] = lVar4;
                *local_28 = &PTR_FUN_14ad80f50;
                pcVar2 = FUN_14807d09e;
                goto LAB_14807bb54;
              }
            }
            break;
          }
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
      goto LAB_14807bb70;
    }
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14ad80f50;
    pcVar2 = FUN_14807cc82;
  }
LAB_14807bb54:
  local_20 = 2;
  local_28[3] = pcVar2;
  FUN_144a450dc(param_4,&local_28);
  FUN_1449db362(&local_28);
LAB_14807bb70:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807c7be FUN_14807c7be body=121 status=ok
// SIG undefined FUN_14807c7be(void)

void FUN_14807c7be(undefined8 param_1)

{
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [336];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808ef4a(local_188,param_1);
  if ((local_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807c838 FUN_14807c838 body=121 status=ok
// SIG undefined FUN_14807c838(void)

void FUN_14807c838(undefined8 param_1)

{
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [360];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f04e(local_1a0,param_1);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807c8b2 FUN_14807c8b2 body=121 status=ok
// SIG undefined FUN_14807c8b2(void)

void FUN_14807c8b2(undefined8 param_1)

{
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [432];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f13e(local_1e8,param_1);
  if ((local_10 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807c92c FUN_14807c92c body=121 status=ok
// SIG undefined FUN_14807c92c(void)

void FUN_14807c92c(undefined8 param_1)

{
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [336];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f282(local_188,param_1);
  if ((local_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807c9a6 FUN_14807c9a6 body=121 status=ok
// SIG undefined FUN_14807c9a6(void)

void FUN_14807c9a6(undefined8 param_1)

{
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [360];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f39a(local_1a0,param_1);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ca20 FUN_14807ca20 body=121 status=ok
// SIG undefined FUN_14807ca20(void)

void FUN_14807ca20(undefined8 param_1)

{
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [336];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f4ce(local_188,param_1);
  if ((local_10 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ca9a FUN_14807ca9a body=121 status=ok
// SIG undefined FUN_14807ca9a(void)

void FUN_14807ca9a(undefined8 param_1)

{
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f5e6(local_f8,param_1);
  if ((local_10 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cb14 FUN_14807cb14 body=121 status=ok
// SIG undefined FUN_14807cb14(void)

void FUN_14807cb14(undefined8 param_1)

{
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [360];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f686(local_1a0,param_1);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cb8e FUN_14807cb8e body=121 status=ok
// SIG undefined FUN_14807cb8e(void)

void FUN_14807cb8e(undefined8 param_1)

{
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [408];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f7ea(local_1d0,param_1);
  if ((local_10 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cc08 FUN_14807cc08 body=121 status=ok
// SIG undefined FUN_14807cc08(void)

void FUN_14807cc08(undefined8 param_1)

{
  undefined1 auStack_148 [32];
  undefined1 local_128 [240];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f942(local_128,param_1);
  if ((local_10 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cc82 FUN_14807cc82 body=121 status=ok
// SIG undefined FUN_14807cc82(void)

void FUN_14807cc82(undefined8 param_1)

{
  undefined1 auStack_138 [40];
  undefined1 local_110 [216];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14808eeb6(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a76d88(&local_38,param_1);
  FUN_14808f9ea(local_110,param_1);
  if ((local_10 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ccfc FUN_14807ccfc body=92 status=ok
// SIG undefined FUN_14807ccfc(void)

void FUN_14807ccfc(undefined8 param_1)

{
  undefined1 auStack_168 [40];
  undefined1 local_140 [288];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14808eeb6(local_20,param_1);
  FUN_14808faa6(local_140,param_1);
  if ((local_10 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cd59 FUN_14807cd59 body=92 status=ok
// SIG undefined FUN_14807cd59(void)

void FUN_14807cd59(undefined8 param_1)

{
  undefined1 auStack_298 [32];
  undefined1 local_278 [600];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_14808eeb6(local_20,param_1);
  FUN_14808fc40(local_278,param_1);
  if ((local_10 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cdb6 FUN_14807cdb6 body=92 status=ok
// SIG undefined FUN_14807cdb6(void)

void FUN_14807cdb6(undefined8 param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [504];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_14808eeb6(local_20,param_1);
  FUN_14808fdfa(local_218,param_1);
  if ((local_10 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ce13 FUN_14807ce13 body=92 status=ok
// SIG undefined FUN_14807ce13(void)

void FUN_14807ce13(undefined8 param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [504];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_14808eeb6(local_20,param_1);
  FUN_14808ff44(local_218,param_1);
  if ((local_10 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ce70 FUN_14807ce70 body=92 status=ok
// SIG undefined FUN_14807ce70(void)

void FUN_14807ce70(undefined8 param_1)

{
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [696];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_14808eeb6(local_20,param_1);
  FUN_14809008e(local_2d8,param_1);
  if ((local_10 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cecd FUN_14807cecd body=92 status=ok
// SIG undefined FUN_14807cecd(void)

void FUN_14807cecd(undefined8 param_1)

{
  undefined1 auStack_288 [40];
  undefined1 local_260 [576];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_14808eeb6(local_20,param_1);
  FUN_1480902b8(local_260,param_1);
  if ((local_10 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cf2a FUN_14807cf2a body=92 status=ok
// SIG undefined FUN_14807cf2a(void)

void FUN_14807cf2a(undefined8 param_1)

{
  undefined1 auStack_268 [32];
  undefined1 local_248 [552];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14808eeb6(local_20,param_1);
  FUN_14809055c(local_248,param_1);
  if ((local_10 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cf87 FUN_14807cf87 body=92 status=ok
// SIG undefined FUN_14807cf87(void)

void FUN_14807cf87(undefined8 param_1)

{
  undefined1 auStack_268 [32];
  undefined1 local_248 [552];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14808eeb6(local_20,param_1);
  FUN_1480906de(local_248,param_1);
  if ((local_10 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807cfe4 FUN_14807cfe4 body=92 status=ok
// SIG undefined FUN_14807cfe4(void)

void FUN_14807cfe4(undefined8 param_1)

{
  undefined1 auStack_198 [40];
  undefined1 local_170 [336];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14808eeb6(local_20,param_1);
  FUN_148090860(local_170,param_1);
  if ((local_10 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807d041 FUN_14807d041 body=92 status=ok
// SIG undefined FUN_14807d041(void)

void FUN_14807d041(undefined8 param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [504];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_14808eeb6(local_20,param_1);
  FUN_148090970(local_218,param_1);
  if ((local_10 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807d09e FUN_14807d09e body=92 status=ok
// SIG undefined FUN_14807d09e(void)

void FUN_14807d09e(undefined8 param_1)

{
  undefined1 auStack_268 [32];
  undefined1 local_248 [552];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14808eeb6(local_20,param_1);
  FUN_148090b44(local_248,param_1);
  if ((local_10 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807d114 FUN_14807d114 body=41 status=ok
// SIG undefined FUN_14807d114(void)

undefined4 FUN_14807d114(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x38) >> 8),
                     *(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x38));
  }
  return uVar2;
}



// FUNCTION 14807d13e FUN_14807d13e body=34 status=ok
// SIG undefined FUN_14807d13e(void)

void FUN_14807d13e(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1414db5a0();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 14807d176 FUN_14807d176 body=126 status=ok
// SIG undefined FUN_14807d176(void)

undefined8 * FUN_14807d176(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  local_20 = FUN_1402d2740();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  local_18 = 1;
  local_16 = 0;
  local_14 = 0xffffffff;
  FUN_141530f12(param_1 + 1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807d1f6 FUN_14807d1f6 body=4612 status=ok
// SIG undefined FUN_14807d1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14807d1f6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_1e8 [40];
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined8 *local_170;
  undefined4 local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb37af0) && (FUN_144b3d300(&DAT_14cb37af0), DAT_14cb37af0 == -1)) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,2,0x10);
    *local_50 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_50[2] = lVar2;
    *local_50 = &PTR_FUN_14ad80f50;
    local_50[3] = FUN_14807e3fc;
    DAT_14cb378b0 = DAT_14cb377f0;
    _DAT_14cb378b8 = local_50;
    local_50 = (undefined8 *)0x0;
    _DAT_14cb378c0 = 2;
    local_48 = 0;
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,2,0x10);
    *local_60 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_60[2] = lVar2;
    *local_60 = &PTR_FUN_14ad80f50;
    local_60[3] = FUN_14807e582;
    DAT_14cb378c8 = DAT_14cb377f8;
    _DAT_14cb378d0 = local_60;
    local_60 = (undefined8 *)0x0;
    _DAT_14cb378d8 = 2;
    local_58 = 0;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,2,0x10);
    *local_70 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_70[2] = lVar2;
    *local_70 = &PTR_FUN_14ad80f50;
    local_70[3] = FUN_14807e624;
    _DAT_14cb378e0 = DAT_14cb37800;
    _DAT_14cb378e8 = local_70;
    local_70 = (undefined8 *)0x0;
    _DAT_14cb378f0 = 2;
    local_68 = 0;
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,2,0x10);
    *local_80 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_80[2] = lVar2;
    *local_80 = &PTR_FUN_14ad80f50;
    local_80[3] = FUN_14807e7b6;
    _DAT_14cb378f8 = DAT_14cb37808;
    _DAT_14cb37900 = local_80;
    local_80 = (undefined8 *)0x0;
    _DAT_14cb37908 = 2;
    local_78 = 0;
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_1446efa72(&local_90,0,2,0x10);
    *local_90 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_90[2] = lVar2;
    *local_90 = &PTR_FUN_14ad80f50;
    local_90[3] = FUN_14807e944;
    _DAT_14cb37910 = DAT_14cb37810;
    _DAT_14cb37918 = local_90;
    local_90 = (undefined8 *)0x0;
    _DAT_14cb37920 = 2;
    local_88 = 0;
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,2,0x10);
    *local_a0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_a0[2] = lVar2;
    *local_a0 = &PTR_FUN_14ad80f50;
    local_a0[3] = FUN_14807eb2c;
    _DAT_14cb37928 = DAT_14cb37818;
    _DAT_14cb37930 = local_a0;
    local_a0 = (undefined8 *)0x0;
    _DAT_14cb37938 = 2;
    local_98 = 0;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,2,0x10);
    *local_b0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_b0[2] = lVar2;
    *local_b0 = &PTR_FUN_14ad80f50;
    local_b0[3] = FUN_14807ec64;
    _DAT_14cb37940 = DAT_14cb37820;
    _DAT_14cb37948 = local_b0;
    local_b0 = (undefined8 *)0x0;
    _DAT_14cb37950 = 2;
    local_a8 = 0;
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,2,0x10);
    *local_c0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_c0[2] = lVar2;
    *local_c0 = &PTR_FUN_14ad80f50;
    local_c0[3] = FUN_14807ee1a;
    _DAT_14cb37958 = DAT_14cb37828;
    _DAT_14cb37960 = local_c0;
    local_c0 = (undefined8 *)0x0;
    _DAT_14cb37968 = 2;
    local_b8 = 0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,2,0x10);
    *local_d0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_d0[2] = lVar2;
    *local_d0 = &PTR_FUN_14ad80f50;
    local_d0[3] = FUN_14807f124;
    _DAT_14cb37970 = DAT_14cb37830;
    _DAT_14cb37978 = local_d0;
    local_d0 = (undefined8 *)0x0;
    _DAT_14cb37980 = 2;
    local_c8 = 0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    FUN_1446efa72(&local_e0,0,2,0x10);
    *local_e0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_e0[2] = lVar2;
    *local_e0 = &PTR_FUN_14ad80f50;
    local_e0[3] = FUN_14807f2fc;
    _DAT_14cb37988 = DAT_14cb37838;
    _DAT_14cb37990 = local_e0;
    local_e0 = (undefined8 *)0x0;
    _DAT_14cb37998 = 2;
    local_d8 = 0;
    local_f0 = (undefined8 *)0x0;
    local_e8 = 0;
    FUN_1446efa72(&local_f0,0,2,0x10);
    *local_f0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_f0[2] = lVar2;
    *local_f0 = &PTR_FUN_14ad80f50;
    local_f0[3] = FUN_14807f412;
    _DAT_14cb379a0 = DAT_14cb37840;
    _DAT_14cb379a8 = local_f0;
    local_f0 = (undefined8 *)0x0;
    _DAT_14cb379b0 = 2;
    local_e8 = 0;
    local_100 = (undefined8 *)0x0;
    local_f8 = 0;
    FUN_1446efa72(&local_100,0,2,0x10);
    *local_100 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_100[2] = lVar2;
    *local_100 = &PTR_FUN_14ad80f50;
    local_100[3] = FUN_14807f628;
    _DAT_14cb379b8 = DAT_14cb37848;
    _DAT_14cb379c0 = local_100;
    local_100 = (undefined8 *)0x0;
    _DAT_14cb379c8 = 2;
    local_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = 0;
    FUN_1446efa72(&local_110,0,2,0x10);
    *local_110 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_110[2] = lVar2;
    *local_110 = &PTR_FUN_14ad80f50;
    local_110[3] = FUN_14807f802;
    _DAT_14cb379d0 = DAT_14cb37850;
    _DAT_14cb379d8 = local_110;
    local_110 = (undefined8 *)0x0;
    _DAT_14cb379e0 = 2;
    local_108 = 0;
    local_120 = (undefined8 *)0x0;
    local_118 = 0;
    FUN_1446efa72(&local_120,0,2,0x10);
    *local_120 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_120[2] = lVar2;
    *local_120 = &PTR_FUN_14ad80f50;
    local_120[3] = FUN_14807f9cc;
    _DAT_14cb379e8 = DAT_14cb37858;
    _DAT_14cb379f0 = local_120;
    local_120 = (undefined8 *)0x0;
    _DAT_14cb379f8 = 2;
    local_118 = 0;
    local_130 = (undefined8 *)0x0;
    local_128 = 0;
    FUN_1446efa72(&local_130,0,2,0x10);
    *local_130 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_130[2] = lVar2;
    *local_130 = &PTR_FUN_14ad80f50;
    local_130[3] = FUN_14807fd38;
    _DAT_14cb37a00 = DAT_14cb37860;
    _DAT_14cb37a08 = local_130;
    local_130 = (undefined8 *)0x0;
    _DAT_14cb37a10 = 2;
    local_128 = 0;
    local_140 = (undefined8 *)0x0;
    local_138 = 0;
    FUN_1446efa72(&local_140,0,2,0x10);
    *local_140 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_140[2] = lVar2;
    *local_140 = &PTR_FUN_14ad80f50;
    local_140[3] = FUN_14807ff46;
    _DAT_14cb37a18 = DAT_14cb37868;
    _DAT_14cb37a20 = local_140;
    local_140 = (undefined8 *)0x0;
    _DAT_14cb37a28 = 2;
    local_138 = 0;
    local_150 = (undefined8 *)0x0;
    local_148 = 0;
    FUN_1446efa72(&local_150,0,2,0x10);
    *local_150 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_150[2] = lVar2;
    *local_150 = &PTR_FUN_14ad80f50;
    local_150[3] = FUN_148080190;
    _DAT_14cb37a30 = DAT_14cb37870;
    _DAT_14cb37a38 = local_150;
    local_150 = (undefined8 *)0x0;
    _DAT_14cb37a40 = 2;
    local_148 = 0;
    local_160 = (undefined8 *)0x0;
    local_158 = 0;
    FUN_1446efa72(&local_160,0,2,0x10);
    *local_160 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_160[2] = lVar2;
    *local_160 = &PTR_FUN_14ad80f50;
    local_160[3] = FUN_14808081e;
    _DAT_14cb37a48 = DAT_14cb37878;
    _DAT_14cb37a50 = local_160;
    local_160 = (undefined8 *)0x0;
    _DAT_14cb37a58 = 2;
    local_158 = 0;
    local_170 = (undefined8 *)0x0;
    local_168 = 0;
    FUN_1446efa72(&local_170,0,2,0x10);
    *local_170 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_170[2] = lVar2;
    *local_170 = &PTR_FUN_14ad80f50;
    local_170[3] = FUN_1480809f0;
    _DAT_14cb37a60 = DAT_14cb37880;
    _DAT_14cb37a68 = local_170;
    local_170 = (undefined8 *)0x0;
    _DAT_14cb37a70 = 2;
    local_168 = 0;
    local_180 = (undefined8 *)0x0;
    local_178 = 0;
    FUN_1446efa72(&local_180,0,2,0x10);
    *local_180 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_180[2] = lVar2;
    *local_180 = &PTR_FUN_14ad80f50;
    local_180[3] = FUN_148080ba4;
    _DAT_14cb37a78 = DAT_14cb37888;
    _DAT_14cb37a80 = local_180;
    local_180 = (undefined8 *)0x0;
    _DAT_14cb37a88 = 2;
    local_178 = 0;
    local_190 = (undefined8 *)0x0;
    local_188 = 0;
    FUN_1446efa72(&local_190,0,2,0x10);
    *local_190 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_190[2] = lVar2;
    *local_190 = &PTR_FUN_14ad80f50;
    local_190[3] = FUN_148080e92;
    _DAT_14cb37a90 = DAT_14cb37890;
    _DAT_14cb37a98 = local_190;
    local_190 = (undefined8 *)0x0;
    _DAT_14cb37aa0 = 2;
    local_188 = 0;
    local_1a0 = (undefined8 *)0x0;
    local_198 = 0;
    FUN_1446efa72(&local_1a0,0,2,0x10);
    *local_1a0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_1a0[2] = lVar2;
    *local_1a0 = &PTR_FUN_14ad80f50;
    local_1a0[3] = FUN_14808108e;
    _DAT_14cb37aa8 = DAT_14cb37898;
    _DAT_14cb37ab0 = local_1a0;
    local_1a0 = (undefined8 *)0x0;
    _DAT_14cb37ab8 = 2;
    local_198 = 0;
    local_1b0 = (undefined8 *)0x0;
    local_1a8 = 0;
    FUN_1446efa72(&local_1b0,0,2,0x10);
    *local_1b0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_1b0[2] = lVar2;
    *local_1b0 = &PTR_FUN_14ad80f50;
    local_1b0[3] = FUN_1480812a8;
    _DAT_14cb37ac0 = DAT_14cb378a0;
    DAT_14cb37ac8 = local_1b0;
    local_1b0 = (undefined8 *)0x0;
    DAT_14cb37ad0 = 2;
    local_1a8 = 0;
    local_1c0 = (undefined8 *)0x0;
    local_1b8 = 0;
    FUN_1446efa72(&local_1c0,0,2,0x10);
    *local_1c0 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_1c0[2] = lVar2;
    *local_1c0 = &PTR_FUN_14ad80f50;
    local_1c0[3] = FUN_1480817b8;
    _DAT_14cb37ad8 = DAT_14cb378a8;
    DAT_14cb37ae0 = local_1c0;
    local_1c0 = (undefined8 *)0x0;
    DAT_14cb37ae8 = 2;
    local_1b8 = 0;
    FUN_1449db362();
    FUN_1449db362(&local_1b0);
    FUN_1449db362(&local_1a0);
    FUN_1449db362(&local_190);
    FUN_1449db362(&local_180);
    FUN_1449db362(&local_170);
    FUN_1449db362(&local_160);
    FUN_1449db362(&local_150);
    FUN_1449db362(&local_140);
    FUN_1449db362(&local_130);
    FUN_1449db362(&local_120);
    FUN_1449db362(&local_110);
    FUN_1449db362(&local_100);
    FUN_1449db362(&local_f0);
    FUN_1449db362(&local_e0);
    FUN_1449db362(&local_d0);
    FUN_1449db362(&local_c0);
    FUN_1449db362(&local_b0);
    FUN_1449db362(&local_a0);
    FUN_1449db362(&local_90);
    FUN_1449db362(&local_80);
    FUN_1449db362(&local_70);
    FUN_1449db362(&local_60);
    FUN_1449db362(&local_50);
    atexit(FUN_143908eda);
    _Init_thread_footer(&DAT_14cb37af0);
  }
  lVar1 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_14cb378b0 + lVar1) == *param_2) {
      FUN_1412f8090(param_4,&DAT_14cb378b8 + lVar1);
      break;
    }
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x240);
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807e3fc FUN_14807e3fc body=389 status=ok
// SIG undefined FUN_14807e3fc(void)

void FUN_14807e3fc(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_98 [40];
  int *local_70;
  int local_68;
  int *local_60;
  int local_58;
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480831f4(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  FUN_144a76cd4(&local_40,param_1);
  FUN_144a76cd4(&local_50,param_1);
  FUN_140126e42(&local_60,param_1);
  FUN_140126e42(&local_70,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x10);
      puVar2 = local_40 + local_38;
      *local_40 = *(undefined4 *)(local_18 + 0x14);
      puVar3 = local_50 + local_48;
      *local_50 = *(undefined4 *)(local_18 + 0x18);
      piVar6 = local_60 + local_58;
      *local_60 = -(uint)(*(int *)(local_18 + 0x68) != -1);
      piVar4 = local_70 + local_68;
      *local_70 = -(uint)(*(int *)(local_18 + 0x60) != -1);
      iVar5 = iVar5 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_70 = piVar4;
      local_60 = piVar6;
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar5 < *piVar7);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807e582 FUN_14807e582 body=160 status=ok
// SIG undefined FUN_14807e582(void)

void FUN_14807e582(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1480831f4(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x78);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807e624 FUN_14807e624 body=401 status=ok
// SIG undefined FUN_14807e624(void)

void FUN_14807e624(char *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480831f4(local_28,param_1);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76cd4(&local_68,param_1);
  FUN_144a76cd4(&local_78);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar4 = 0;
    do {
      piVar3 = local_48 + local_38;
      iVar1 = *local_48;
      if (((longlong)iVar1 < 0) || (*(int *)(local_20 + 0x78) <= iVar1)) {
        *local_58 = 0;
        *local_68 = 0;
        *local_78 = 0;
      }
      else {
        lVar2 = *(longlong *)(local_20 + 0x70);
        lVar5 = (longlong)iVar1 * 0x10;
        *local_58 = 0xffffffff;
        *local_68 = *(undefined4 *)(lVar2 + 4 + lVar5);
        *local_78 = *(undefined4 *)(lVar2 + 0xc + lVar5);
      }
      local_58 = local_58 + local_50;
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      iVar4 = iVar4 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_48 = piVar3;
    } while (iVar4 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807e7b6 FUN_14807e7b6 body=397 status=ok
// SIG undefined FUN_14807e7b6(void)

void FUN_14807e7b6(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int *piVar14;
  undefined1 auStack_a8 [40];
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480831f4(local_20,param_1);
  FUN_144a76c20(&local_50,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_30,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_60,param_1);
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    dVar7 = *(double *)(local_18 + 0x30);
    dVar8 = *(double *)(local_18 + 0x28);
    dVar9 = *(double *)(local_18 + 0x20);
    dVar10 = *(double *)(local_18 + 0x48);
    dVar11 = *(double *)(local_18 + 0x40);
    dVar12 = *(double *)(local_18 + 0x38);
    iVar13 = 0;
    do {
      pfVar1 = local_50 + local_48;
      *local_50 = (float)dVar9;
      pfVar2 = local_40 + local_38;
      *local_40 = (float)dVar8;
      pfVar3 = local_30 + local_28;
      *local_30 = (float)dVar7;
      pfVar4 = local_80 + local_78;
      *local_80 = (float)dVar12;
      pfVar5 = local_70 + local_68;
      *local_70 = (float)dVar11;
      pfVar6 = local_60 + local_58;
      *local_60 = (float)dVar10;
      iVar13 = iVar13 + 1;
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      local_80 = pfVar4;
      local_70 = pfVar5;
      local_60 = pfVar6;
      local_50 = pfVar1;
      local_40 = pfVar2;
      local_30 = pfVar3;
    } while (iVar13 < *piVar14);
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807e944 FUN_14807e944 body=486 status=ok
// SIG undefined FUN_14807e944(void)

void FUN_14807e944(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1480831f4(local_50,param_1);
  iVar12 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a76d88(&local_c8,param_1);
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a76d88(&local_e8,param_1);
  bVar10 = *param_1;
  lVar13 = *(longlong *)(param_1 + 0x80);
  pbVar11 = (byte *)(lVar13 + 0x40);
  if (bVar10 != 0) {
    pbVar11 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar11) {
    do {
      piVar1 = local_68 + local_58;
      iVar5 = *local_68;
      piVar2 = local_88 + local_78;
      iVar6 = *local_88;
      piVar3 = local_a8 + local_98;
      iVar7 = *local_a8;
      piVar4 = local_c8 + local_b8;
      iVar8 = *local_c8;
      piVar9 = local_e8 + local_d8;
      local_c8 = piVar4;
      local_a8 = piVar3;
      local_88 = piVar2;
      local_68 = piVar1;
      if ((iVar5 != 0) &&
         ((((iVar6 != *(int *)(local_48 + 0x14) || (iVar7 != *(int *)(local_48 + 0x18))) ||
           ((iVar8 != 0) == (*(int *)(local_48 + 0x68) == -1))) ||
          ((*(int *)(local_48 + 0x60) == -1) == (*local_e8 != 0))))) {
        local_f8 = iVar8 != 0;
        local_e8 = piVar9;
        FUN_14808276c();
        bVar10 = *param_1;
        lVar13 = *(longlong *)(param_1 + 0x80);
        piVar9 = local_e8;
      }
      local_e8 = piVar9;
      iVar12 = iVar12 + 1;
      pbVar11 = (byte *)(lVar13 + 0x40);
      if ((bVar10 & 1) != 0) {
        pbVar11 = param_1 + 0x3c;
      }
    } while (iVar12 < *(int *)pbVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807eb2c FUN_14807eb2c body=311 status=ok
// SIG undefined FUN_14807eb2c(void)

void FUN_14807eb2c(byte *param_1)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480831f4(local_50,param_1);
  iVar6 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  pbVar1 = param_1 + 0x3c;
  bVar3 = *param_1;
  lVar4 = *(longlong *)(param_1 + 0x80);
  pbVar5 = (byte *)(lVar4 + 0x40);
  if (bVar3 != 0) {
    pbVar5 = pbVar1;
  }
  if (0 < *(int *)pbVar5) {
    bVar7 = false;
    do {
      pbVar5 = (byte *)(lVar4 + 0x40);
      if ((bVar3 & 1) != 0) {
        pbVar5 = pbVar1;
      }
      while( true ) {
        piVar8 = local_68 + local_58;
        piVar2 = local_88 + local_78;
        if ((*local_68 != 0) && (*local_88 != *(int *)(local_48 + 0x78))) break;
        iVar6 = iVar6 + 1;
        local_88 = piVar2;
        local_68 = piVar8;
        if (*(int *)pbVar5 <= iVar6) {
          if (!bVar7) goto LAB_14807ec03;
          goto LAB_14807ec5d;
        }
      }
      local_88 = piVar2;
      local_68 = piVar8;
      FUN_1480826fe(local_48 + 0x70);
      bVar3 = *param_1;
      lVar4 = *(longlong *)(param_1 + 0x80);
      iVar6 = iVar6 + 1;
      pbVar5 = (byte *)(lVar4 + 0x40);
      if ((bVar3 & 1) != 0) {
        pbVar5 = pbVar1;
      }
      bVar7 = true;
    } while (iVar6 < *(int *)pbVar5);
LAB_14807ec5d:
    FUN_148083288(local_48);
  }
LAB_14807ec03:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ec64 FUN_14807ec64 body=437 status=ok
// SIG undefined FUN_14807ec64(void)

void FUN_14807ec64(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  bool bVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1480831f4(local_50,param_1);
  iVar10 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_1);
  bVar7 = *param_1;
  lVar11 = *(longlong *)(param_1 + 0x80);
  pbVar9 = (byte *)(lVar11 + 0x40);
  if (bVar7 != 0) {
    pbVar9 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    bVar8 = false;
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      uVar5 = *local_88;
      piVar3 = local_a8 + local_98;
      puVar4 = local_c8 + local_b8;
      if (-1 < (int)uVar5 && *local_68 != 0) {
        if ((int)uVar5 < *(int *)(local_48 + 0x78)) {
          uVar6 = *local_c8;
          lVar11 = *(longlong *)(local_48 + 0x70);
          lVar12 = (ulonglong)uVar5 * 0x10;
          bVar8 = (bool)(bVar8 | *(int *)(lVar11 + 4 + lVar12) != *local_a8);
          *(int *)(lVar11 + 4 + lVar12) = *local_a8;
          *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar6;
          bVar7 = *param_1;
          lVar11 = *(longlong *)(param_1 + 0x80);
        }
      }
      iVar10 = iVar10 + 1;
      pbVar9 = (byte *)(lVar11 + 0x40);
      if ((bVar7 & 1) != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      local_c8 = puVar4;
      local_a8 = piVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar10 < *(int *)pbVar9);
    if (bVar8) {
      FUN_148083288(local_48);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ee1a FUN_14807ee1a body=776 status=ok
// SIG undefined FUN_14807ee1a(void)

void FUN_14807ee1a(byte *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  byte bVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  byte *pbVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  byte *local_140;
  float *local_138 [2];
  int local_128;
  float *local_120;
  int local_110;
  float *local_108;
  int local_f8;
  float *local_f0 [2];
  int local_e0;
  float *local_d8;
  int local_c8;
  float *local_c0;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1480831f4(local_90,param_1);
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_144a76d88(&local_a8,param_1);
  FUN_1448a432c(local_f0,param_1);
  FUN_1448a432c(local_138,param_1);
  local_140 = param_1 + 0x3c;
  bVar9 = *param_1;
  lVar10 = *(longlong *)(param_1 + 0x80);
  pbVar13 = (byte *)(lVar10 + 0x40);
  if (bVar9 != 0) {
    pbVar13 = local_140;
  }
  if (0 < *(int *)pbVar13) {
    local_148 = (longlong)local_98 * 4;
    local_150 = (longlong)local_e0 * 4;
    iVar12 = 0;
    pfVar8 = local_d8;
    piVar11 = local_a8;
    pfVar14 = local_138[0];
    pfVar15 = local_120;
    pfVar16 = local_f0[0];
    do {
      local_a8 = piVar11 + local_98;
      local_f0[0] = pfVar16 + local_e0;
      local_138[0] = pfVar14 + local_128;
      pfVar1 = local_c0 + local_b0;
      fVar3 = *local_c0;
      local_d8 = pfVar8 + local_c8;
      fVar4 = *pfVar8;
      pfVar2 = local_108 + local_f8;
      fVar5 = *local_108;
      local_120 = pfVar15 + local_110;
      fVar6 = *pfVar15;
      if (*piVar11 != 0) {
        fVar7 = *pfVar14;
        if ((((9.999999747378752e-05 < ABS(*(double *)(local_88 + 0x20) - (double)*pfVar16)) ||
             (9.999999747378752e-05 < ABS(*(double *)(local_88 + 0x28) - (double)fVar4))) ||
            (9.999999747378752e-05 < ABS(*(double *)(local_88 + 0x30) - (double)fVar3))) ||
           (((9.999999747378752e-05 < ABS(*(double *)(local_88 + 0x38) - (double)fVar7) ||
             (9.999999747378752e-05 < ABS(*(double *)(local_88 + 0x40) - (double)fVar6))) ||
            (9.999999747378752e-05 < ABS(*(double *)(local_88 + 0x48) - (double)fVar5))))) {
          *(double *)(local_88 + 0x20) = (double)*pfVar16;
          *(double *)(local_88 + 0x28) = (double)fVar4;
          *(double *)(local_88 + 0x30) = (double)fVar3;
          *(double *)(local_88 + 0x38) = (double)fVar7;
          *(double *)(local_88 + 0x40) = (double)fVar6;
          *(double *)(local_88 + 0x48) = (double)fVar5;
          bVar9 = *param_1;
          lVar10 = *(longlong *)(param_1 + 0x80);
        }
      }
      iVar12 = iVar12 + 1;
      pbVar13 = (byte *)(lVar10 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar13 = local_140;
      }
      pfVar8 = local_d8;
      piVar11 = local_a8;
      pfVar14 = local_138[0];
      pfVar15 = local_120;
      pfVar16 = local_f0[0];
      local_108 = pfVar2;
      local_c0 = pfVar1;
    } while (iVar12 < *(int *)pbVar13);
  }
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807f124 FUN_14807f124 body=470 status=ok
// SIG undefined FUN_14807f124(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14807f124(byte *param_1)

{
  undefined1 auVar1 [16];
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  byte bVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480831f4(local_40,param_1);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  auVar11._0_8_ = FUN_144a76d88();
  auVar1 = _DAT_149931e80;
  auVar11._8_8_ = extraout_XMM0_Qb;
  bVar6 = *param_1;
  lVar8 = *(longlong *)(param_1 + 0x80);
  pbVar2 = (byte *)(lVar8 + 0x40);
  if (bVar6 != 0) {
    pbVar2 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar2) {
    iVar3 = 0;
    auVar11 = pmovsxbq(auVar11,0x302);
    auVar12 = pmovsxbq(in_XMM1,0x100);
    piVar5 = local_58;
    do {
      local_58 = piVar5 + local_48;
      if (*piVar5 != 0) {
        if ((longlong)*(int *)(local_38 + 0x78) != 0) {
          uVar9 = (longlong)*(int *)(local_38 + 0x78) + 0xfffffffffffffff;
          uVar4 = uVar9 & 0xfffffffffffffff;
          auVar13._8_4_ = (int)uVar4;
          auVar13._0_8_ = uVar4;
          auVar13._12_4_ = (int)(uVar4 >> 0x20);
          puVar7 = (undefined4 *)(*(longlong *)(local_38 + 0x70) + 0x38);
          uVar10 = 0;
          do {
            lVar8 = SUB168(auVar13 | auVar1,0);
            lVar14 = SUB168(auVar13 | auVar1,8);
            if ((bool)(~(lVar8 < (longlong)(uVar10 ^ auVar1._0_8_)) & 1)) {
              puVar7[-0xc] = 0;
            }
            auVar15._8_4_ = (int)uVar10;
            auVar15._0_8_ = uVar10;
            auVar15._12_4_ = (int)(uVar10 >> 0x20);
            if ((longlong)((auVar15._8_8_ | auVar12._8_8_) ^ auVar1._8_8_) <= lVar14) {
              puVar7[-8] = 0;
            }
            auVar15 = (auVar15 | auVar11) ^ auVar1;
            if (auVar15._0_8_ <= lVar8) {
              puVar7[-4] = 0;
            }
            if (auVar15._8_8_ <= lVar14) {
              *puVar7 = 0;
            }
            uVar10 = uVar10 + 4;
            puVar7 = puVar7 + 0x10;
          } while ((uVar4 - ((uint)uVar9 & 3)) + 4 != uVar10);
          bVar6 = *param_1;
          lVar8 = *(longlong *)(param_1 + 0x80);
        }
      }
      iVar3 = iVar3 + 1;
      pbVar2 = (byte *)(lVar8 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar2 = param_1 + 0x3c;
      }
      piVar5 = local_58;
    } while (iVar3 < *(int *)pbVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807f2fc FUN_14807f2fc body=276 status=ok
// SIG undefined FUN_14807f2fc(void)

void FUN_14807f2fc(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined8 uStack_70;
  int local_68;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480831f4(local_40,param_1);
  iVar6 = 0;
  local_48 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_1);
  local_68 = 0;
  local_78 = (uint *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_1);
  bVar4 = *param_1;
  lVar5 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(lVar5 + 0x40);
  if (bVar4 != 0) {
    pbVar7 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    do {
      piVar1 = local_58 + local_48;
      puVar2 = local_78 + local_68;
      uVar3 = *local_78;
      if (-1 < (int)uVar3 && *local_58 != 0) {
        if ((int)uVar3 < *(int *)(local_38 + 0x78)) {
          *(undefined4 *)(*(longlong *)(local_38 + 0x70) + 8 + (ulonglong)uVar3 * 0x10) = 0;
          bVar4 = *param_1;
          lVar5 = *(longlong *)(param_1 + 0x80);
        }
      }
      iVar6 = iVar6 + 1;
      pbVar7 = (byte *)(lVar5 + 0x40);
      if ((bVar4 & 1) != 0) {
        pbVar7 = param_1 + 0x3c;
      }
      local_78 = puVar2;
      local_58 = piVar1;
    } while (iVar6 < *(int *)pbVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807f412 FUN_14807f412 body=533 status=ok
// SIG undefined FUN_14807f412(void)

void FUN_14807f412(char *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  int *local_e8;
  int local_e0;
  int *local_d8;
  int local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1480831f4(local_70,param_1);
  iVar10 = 0;
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_1);
  FUN_144a76cd4(&local_d8,param_1);
  FUN_144a76cd4(&local_e8,param_1);
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    do {
      lVar7 = local_68;
      piVar8 = local_88 + local_78;
      puVar1 = local_a8 + local_98;
      uVar3 = *local_a8;
      piVar2 = local_c8 + local_b8;
      iVar12 = 0;
      local_a8 = puVar1;
      if (((int)uVar3 < 0 || *local_88 == 0) || (iVar4 = *local_c8, iVar4 < 1)) {
        iVar11 = -1;
        local_c8 = piVar2;
        local_88 = piVar8;
      }
      else {
        iVar11 = -1;
        local_c8 = piVar2;
        local_88 = piVar8;
        if ((int)uVar3 < *(int *)(local_68 + 0x78)) {
          EnterCriticalSection((LPCRITICAL_SECTION)(local_68 + 0xb0));
          lVar6 = *(longlong *)(local_68 + 0x70);
          lVar13 = (ulonglong)uVar3 * 0x10;
          iVar5 = *(int *)(lVar6 + 8 + lVar13);
          iVar12 = *(int *)(lVar6 + 4 + lVar13) - iVar5;
          iVar11 = *(int *)(lVar6 + lVar13) + iVar5;
          if (iVar12 < 1) {
            iVar11 = -1;
          }
          if (iVar4 <= iVar12) {
            iVar12 = iVar4;
          }
          *(int *)(lVar6 + 8 + lVar13) = iVar5 + iVar12;
          if ((LPCRITICAL_SECTION)(lVar7 + 0xb0) != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0xb0));
          }
        }
      }
      piVar8 = local_d8 + local_d0;
      *local_d8 = iVar11;
      piVar2 = local_e8 + local_e0;
      *local_e8 = iVar12;
      iVar10 = iVar10 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_e8 = piVar2;
      local_d8 = piVar8;
    } while (iVar10 < *piVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807f628 FUN_14807f628 body=472 status=ok
// SIG undefined FUN_14807f628(void)

void FUN_14807f628(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480831f4(local_28,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76cd4(&local_68,param_1);
  FUN_144a76cd4(&local_78,param_1);
  FUN_144a76cd4(&local_88,param_1);
  if (*(int *)(local_20 + 0x98) < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_20 + 0x10);
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    lVar4 = *(longlong *)(local_20 + 0x90);
    iVar6 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar3 = *local_48;
      piVar7 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar3 < iVar5 && -1 < (int)uVar3);
      if ((int)uVar3 < iVar5 && -1 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        *local_68 = *(undefined4 *)(lVar4 + uVar9 * 0xc);
        *local_78 = *(undefined4 *)(lVar4 + 4 + uVar9 * 0xc);
        uVar8 = *(undefined4 *)(lVar4 + 8 + uVar9 * 0xc);
      }
      else {
        uVar8 = 0;
        *local_68 = 0;
        *local_78 = 0;
      }
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      puVar2 = local_88 + local_80;
      *local_88 = uVar8;
      iVar6 = iVar6 + 1;
      piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar10 = (int *)(param_1 + 0x3c);
      }
      local_88 = puVar2;
      local_58 = piVar7;
      local_48 = puVar1;
    } while (iVar6 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807f802 FUN_14807f802 body=456 status=ok
// SIG undefined FUN_14807f802(void)

void FUN_14807f802(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  int *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480831f4(local_28,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_140126e42(&local_58,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68,param_1);
  iVar8 = 0;
  if ((0 < *(int *)(local_20 + 0xa8)) && (iVar8 = 0, *(int *)(local_20 + 0x5c) != -1)) {
    iVar8 = *(int *)(local_20 + 0x14);
  }
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar9 = 0;
    do {
      puVar1 = local_48 + local_38;
      uVar7 = *local_48;
      piVar10 = local_58 + local_50;
      *local_58 = -(uint)((int)uVar7 < iVar8 && -1 < (int)uVar7);
      puVar12 = &DAT_14c846330;
      if ((int)uVar7 < iVar8 && -1 < (int)uVar7) {
        puVar12 = (undefined8 *)
                  ((ulonglong)*(uint *)(local_20 + 0x5c) +
                  (ulonglong)uVar7 * 0xc + *(longlong *)(local_20 + 0xa0));
      }
      uVar5 = *(undefined4 *)((longlong)puVar12 + 4);
      uVar6 = *(undefined4 *)(puVar12 + 1);
      puVar2 = local_88 + local_80;
      *local_88 = *(undefined4 *)puVar12;
      puVar3 = local_78 + local_70;
      *local_78 = uVar5;
      puVar4 = local_68 + local_60;
      *local_68 = uVar6;
      iVar9 = iVar9 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_88 = puVar2;
      local_78 = puVar3;
      local_68 = puVar4;
      local_58 = piVar10;
      local_48 = puVar1;
    } while (iVar9 < *piVar11);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807f9cc FUN_14807f9cc body=875 status=ok
// SIG undefined FUN_14807f9cc(void)

void FUN_14807f9cc(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  int *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1480831f4(local_58,param_1);
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a98d08(&local_78,param_1);
  FUN_140126e42(&local_88,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  iVar13 = 0;
  if ((0 < *(int *)(local_50 + 0xa8)) && (iVar13 = 0, *(int *)(local_50 + 0x60) != -1)) {
    iVar13 = *(int *)(local_50 + 0x14);
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar15 = 0;
    do {
      piVar11 = local_78 + local_68;
      iVar10 = *local_78;
      bVar14 = iVar10 < iVar13 && -1 < iVar10;
      local_120 = DAT_14c846338;
      local_128 = DAT_14c846330;
      local_130 = DAT_14c846338;
      local_138 = DAT_14c846330;
      local_140 = DAT_14c846338;
      local_148 = DAT_14c846330;
      local_78 = piVar11;
      if (bVar14) {
        local_158 = &local_148;
        FUN_14808332c(local_50,iVar10,&local_128,&local_138);
      }
      piVar11 = local_88 + local_80;
      *local_88 = -(uint)bVar14;
      puVar1 = local_b8 + local_b0;
      *local_b8 = (undefined4)local_128;
      puVar2 = local_a8 + local_a0;
      *local_a8 = local_128._4_4_;
      puVar3 = local_98 + local_90;
      *local_98 = local_120;
      puVar4 = local_e8 + local_e0;
      *local_e8 = (undefined4)local_138;
      puVar5 = local_d8 + local_d0;
      *local_d8 = local_138._4_4_;
      puVar6 = local_c8 + local_c0;
      *local_c8 = local_130;
      puVar7 = local_118 + local_110;
      *local_118 = (undefined4)local_148;
      puVar8 = local_108 + local_100;
      *local_108 = local_148._4_4_;
      puVar9 = local_f8 + local_f0;
      *local_f8 = local_140;
      iVar15 = iVar15 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_118 = puVar7;
      local_108 = puVar8;
      local_f8 = puVar9;
      local_e8 = puVar4;
      local_d8 = puVar5;
      local_c8 = puVar6;
      local_b8 = puVar1;
      local_a8 = puVar2;
      local_98 = puVar3;
      local_88 = piVar11;
    } while (iVar15 < *piVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14807fd38 FUN_14807fd38 body=525 status=ok
// SIG undefined FUN_14807fd38(void)

void FUN_14807fd38(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  int *local_98;
  int local_90;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1480831f4(local_50,param_1);
  iVar10 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a98d08(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  FUN_140126e42(&local_98,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  if (*(int *)(local_48 + 0xa8) < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar10 = 0;
    if (*(int *)(local_48 + 100) != -1) {
      iVar10 = *(int *)(local_48 + 0x14);
      iVar7 = *(int *)(local_48 + 0x18);
    }
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar8 = 0;
    do {
      piVar9 = local_68 + local_58;
      iVar4 = *local_68;
      puVar1 = local_88 + local_78;
      if ((longlong)iVar4 < 0) {
        *local_98 = 0;
        puVar12 = &DAT_14c84635c;
        local_98 = local_98 + local_90;
      }
      else {
        uVar5 = *local_88;
        piVar11 = local_98 + local_90;
        *local_98 = -(uint)(((int)uVar5 < iVar7 && iVar4 < iVar10) && 0 < (int)uVar5);
        puVar12 = &DAT_14c84635c;
        local_98 = piVar11;
        if (((int)uVar5 < iVar7 && iVar4 < iVar10) && 0 < (int)uVar5) {
          puVar12 = (undefined8 *)
                    ((ulonglong)*(uint *)(local_48 + 100) +
                     (longlong)iVar4 * 8 + *(longlong *)(local_48 + 0xa0) + (ulonglong)uVar5 * 8);
        }
      }
      uVar6 = *puVar12;
      puVar2 = local_b8 + local_b0;
      *local_b8 = (int)uVar6;
      puVar3 = local_a8 + local_a0;
      *local_a8 = (int)((ulonglong)uVar6 >> 0x20);
      iVar8 = iVar8 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_b8 = puVar2;
      local_a8 = puVar3;
      local_88 = puVar1;
      local_68 = piVar9;
    } while (iVar8 < *piVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14807ff46 FUN_14807ff46 body=585 status=ok
// SIG undefined FUN_14807ff46(void)

void FUN_14807ff46(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  float *local_88;
  int local_80;
  int *local_78;
  int local_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1480831f4(local_50,param_1);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_140126e42(&local_78,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  iVar7 = 0;
  if ((0 < *(int *)(local_48 + 0xa8)) && (iVar7 = 0, *(int *)(local_48 + 0x68) != -1)) {
    iVar7 = *(int *)(local_48 + 0x14);
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar8 = 0;
    do {
      puVar1 = local_68 + local_58;
      uVar6 = *local_68;
      piVar9 = local_78 + local_70;
      *local_78 = -(uint)((int)uVar6 < iVar7 && -1 < (int)uVar6);
      fVar16 = 1.0;
      puVar15 = &DAT_149e1e300;
      puVar14 = (undefined4 *)((longlong)&DAT_149e1e2f8 + 4);
      puVar10 = &DAT_149e1e2f8;
      if ((int)uVar6 < iVar7 && -1 < (int)uVar6) {
        lVar11 = (ulonglong)uVar6 * 4 + *(longlong *)(local_48 + 0xa0);
        uVar13 = (ulonglong)*(uint *)(local_48 + 0x68);
        puVar10 = (undefined8 *)(&DAT_14c758c60 + *(byte *)(uVar13 + 2 + lVar11));
        puVar14 = &DAT_14c758c60 + *(byte *)(uVar13 + 1 + lVar11);
        puVar15 = &DAT_14c758c60 + *(byte *)(uVar13 + lVar11);
        fVar16 = (float)*(byte *)(uVar13 + 3 + lVar11) * 0.003921569;
      }
      uVar4 = *puVar14;
      uVar5 = *puVar15;
      puVar14 = local_b8 + local_b0;
      *local_b8 = *(undefined4 *)puVar10;
      puVar15 = local_a8 + local_a0;
      *local_a8 = uVar4;
      puVar2 = local_98 + local_90;
      *local_98 = uVar5;
      pfVar3 = local_88 + local_80;
      *local_88 = fVar16;
      iVar8 = iVar8 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_b8 = puVar14;
      local_a8 = puVar15;
      local_98 = puVar2;
      local_88 = pfVar3;
      local_78 = piVar9;
      local_68 = puVar1;
    } while (iVar8 < *piVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148080190 FUN_148080190 body=1676 status=ok
// SIG undefined FUN_148080190(void)

void FUN_148080190(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  float *pfVar19;
  uint uVar20;
  int *piVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong lVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  undefined4 *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  undefined4 *local_1b8;
  int local_1b0;
  undefined4 *local_1a8;
  int local_1a0;
  undefined4 *local_198;
  int local_190;
  undefined4 *local_188;
  int local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  int *local_d8;
  int local_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1480831f4(local_b0,param_1);
  local_c8 = (uint *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_144a98d08(&local_c8,param_1);
  FUN_140126e42(&local_d8,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_138,param_1);
  FUN_144a76c20(&local_128,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_168,param_1);
  FUN_144a76c20(&local_158,param_1);
  FUN_144a76c20(&local_148,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  if (*(int *)(local_a8 + 0xa8) < 1) {
    iVar26 = 0;
  }
  else {
    iVar26 = *(int *)(local_a8 + 0x14);
  }
  piVar21 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar21 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar21) {
    iVar27 = 0;
    do {
      lVar29 = local_a8;
      uVar25 = DAT_14c84635c;
      puVar1 = local_c8 + local_b8;
      uVar20 = *local_c8;
      local_200 = DAT_14c846338;
      local_218 = CONCAT44(DAT_14c846330._4_4_,(undefined4)DAT_14c846330);
      local_210 = DAT_14c846338;
      local_220 = DAT_14c846338;
      local_228 = CONCAT44(DAT_14c846330._4_4_,(undefined4)DAT_14c846330);
      uVar34 = DAT_14c846338;
      uVar35 = DAT_14c846330._4_4_;
      uVar36 = (undefined4)DAT_14c846330;
      local_208 = local_218;
      local_c8 = puVar1;
      if ((int)uVar20 < iVar26 && -1 < (int)uVar20) {
        uVar28 = (ulonglong)uVar20;
        uVar22 = (ulonglong)*(uint *)(local_a8 + 0x5c);
        if (uVar22 != 0xffffffff) {
          lVar24 = uVar28 * 0xc + *(longlong *)(local_a8 + 0xa0);
          uVar36 = *(undefined4 *)(uVar22 + lVar24);
          uVar35 = *(undefined4 *)(uVar22 + 4 + lVar24);
          uVar34 = *(undefined4 *)(uVar22 + 8 + lVar24);
        }
        if (*(int *)(local_a8 + 0x60) != -1) {
          local_238 = &local_228;
          FUN_14808332c(local_a8,uVar28,&local_208,&local_218);
        }
        if ((ulonglong)*(uint *)(lVar29 + 100) != 0xffffffff) {
          uVar25 = *(undefined8 *)
                    ((ulonglong)*(uint *)(lVar29 + 100) + uVar28 * 8 + *(longlong *)(lVar29 + 0xa0))
          ;
        }
        uVar22 = (ulonglong)*(uint *)(lVar29 + 0x68);
        if (uVar22 == 0xffffffff) goto LAB_1480804cc;
        lVar29 = uVar28 * 4 + *(longlong *)(lVar29 + 0xa0);
        uVar31 = (&DAT_14c758c60)[*(byte *)(uVar22 + 2 + lVar29)];
        uVar32 = (&DAT_14c758c60)[*(byte *)(uVar22 + 1 + lVar29)];
        uVar33 = (&DAT_14c758c60)[*(byte *)(uVar22 + lVar29)];
        fVar30 = (float)*(byte *)(uVar22 + 3 + lVar29) * 0.003921569;
      }
      else {
LAB_1480804cc:
        uVar31 = 0x3f800000;
        uVar32 = 0x3f800000;
        uVar33 = 0x3f800000;
        fVar30 = 1.0;
      }
      piVar21 = local_d8 + local_d0;
      *local_d8 = -(uint)((int)uVar20 < iVar26 && -1 < (int)uVar20);
      puVar2 = local_108 + local_100;
      *local_108 = uVar36;
      puVar3 = local_f8 + local_f0;
      *local_f8 = uVar35;
      puVar4 = local_e8 + local_e0;
      *local_e8 = uVar34;
      puVar5 = local_138 + local_130;
      *local_138 = (undefined4)local_208;
      puVar6 = local_128 + local_120;
      *local_128 = local_208._4_4_;
      puVar7 = local_118 + local_110;
      *local_118 = local_200;
      puVar8 = local_168 + local_160;
      *local_168 = (undefined4)local_218;
      puVar9 = local_158 + local_150;
      *local_158 = local_218._4_4_;
      puVar10 = local_148 + local_140;
      *local_148 = local_210;
      puVar11 = local_198 + local_190;
      *local_198 = (undefined4)local_228;
      puVar12 = local_188 + local_180;
      *local_188 = local_228._4_4_;
      puVar13 = local_178 + local_170;
      *local_178 = local_220;
      puVar14 = local_1b8 + local_1b0;
      *local_1b8 = (int)uVar25;
      puVar15 = local_1a8 + local_1a0;
      *local_1a8 = (int)((ulonglong)uVar25 >> 0x20);
      puVar16 = local_1f8 + local_1f0;
      *local_1f8 = uVar31;
      puVar17 = local_1e8 + local_1e0;
      *local_1e8 = uVar32;
      puVar18 = local_1d8 + local_1d0;
      *local_1d8 = uVar33;
      pfVar19 = local_1c8 + local_1c0;
      *local_1c8 = fVar30;
      iVar27 = iVar27 + 1;
      piVar23 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar23 = (int *)(param_1 + 0x3c);
      }
      local_1f8 = puVar16;
      local_1e8 = puVar17;
      local_1d8 = puVar18;
      local_1c8 = pfVar19;
      local_1b8 = puVar14;
      local_1a8 = puVar15;
      local_198 = puVar11;
      local_188 = puVar12;
      local_178 = puVar13;
      local_168 = puVar8;
      local_158 = puVar9;
      local_148 = puVar10;
      local_138 = puVar5;
      local_128 = puVar6;
      local_118 = puVar7;
      local_108 = puVar2;
      local_f8 = puVar3;
      local_e8 = puVar4;
      local_d8 = piVar21;
    } while (iVar27 < *piVar23);
  }
  if ((local_a0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14808081e FUN_14808081e body=465 status=ok
// SIG undefined FUN_14808081e(void)

void FUN_14808081e(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1480831f4(local_50,param_1);
  iVar13 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_98 = 0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_1);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_1);
  FUN_148083510(local_48);
  bVar11 = *param_1;
  lVar12 = *(longlong *)(param_1 + 0x80);
  pbVar14 = (byte *)(lVar12 + 0x40);
  if (bVar11 != 0) {
    pbVar14 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar6 = *(int *)(local_48 + 0x10);
    lVar10 = *(longlong *)(local_48 + 0x90);
    do {
      piVar1 = local_68 + local_58;
      puVar2 = local_88 + local_78;
      uVar7 = *local_88;
      uVar15 = (ulonglong)uVar7;
      puVar3 = local_a8 + local_98;
      puVar4 = local_c8 + local_b8;
      uVar8 = *local_c8;
      puVar5 = local_e8 + local_d8;
      if (((*local_68 != 0) && (-1 < (int)uVar7)) && ((int)uVar7 < iVar6)) {
        uVar9 = *local_e8;
        *(undefined4 *)(lVar10 + uVar15 * 0xc) = *local_a8;
        *(undefined4 *)(lVar10 + 4 + uVar15 * 0xc) = uVar8;
        *(undefined4 *)(lVar10 + 8 + uVar15 * 0xc) = uVar9;
        bVar11 = *param_1;
        lVar12 = *(longlong *)(param_1 + 0x80);
      }
      iVar13 = iVar13 + 1;
      pbVar14 = (byte *)(lVar12 + 0x40);
      if ((bVar11 & 1) != 0) {
        pbVar14 = param_1 + 0x3c;
      }
      local_e8 = puVar5;
      local_c8 = puVar4;
      local_a8 = puVar3;
      local_88 = puVar2;
      local_68 = piVar1;
    } while (iVar13 < *(int *)pbVar14);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480809f0 FUN_1480809f0 body=435 status=ok
// SIG undefined FUN_1480809f0(void)

void FUN_1480809f0(byte *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_e8 [40];
  undefined4 *local_c0 [2];
  int local_b0;
  undefined4 *local_a8;
  int local_98;
  undefined4 *local_90;
  int local_80;
  uint *local_78;
  undefined8 uStack_70;
  int local_68;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1480831f4(local_40,param_1);
  iVar13 = 0;
  local_48 = 0;
  local_58 = (int *)0x0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_1);
  local_68 = 0;
  local_78 = (uint *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_1);
  FUN_1448a432c(local_c0,param_1);
  FUN_148083510(local_38);
  if (*(int *)(local_38 + 0x5c) != -1) {
    iVar13 = *(int *)(local_38 + 0x14);
  }
  bVar11 = *param_1;
  lVar14 = *(longlong *)(param_1 + 0x80);
  pbVar10 = (byte *)(lVar14 + 0x40);
  if (bVar11 != 0) {
    pbVar10 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar10) {
    iVar9 = 0;
    do {
      piVar1 = local_58 + local_48;
      puVar2 = local_78 + local_68;
      uVar8 = *local_78;
      puVar3 = local_90 + local_80;
      uVar6 = *local_90;
      puVar4 = local_a8 + local_98;
      uVar7 = *local_a8;
      puVar5 = local_c0[0] + local_b0;
      if (((*local_58 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < iVar13)) {
        lVar14 = (ulonglong)uVar8 * 0xc + *(longlong *)(local_38 + 0xa0);
        uVar12 = (ulonglong)*(uint *)(local_38 + 0x5c);
        *(undefined4 *)(uVar12 + lVar14) = *local_c0[0];
        *(undefined4 *)(uVar12 + 4 + lVar14) = uVar7;
        *(undefined4 *)(uVar12 + 8 + lVar14) = uVar6;
        bVar11 = *param_1;
        lVar14 = *(longlong *)(param_1 + 0x80);
      }
      iVar9 = iVar9 + 1;
      pbVar10 = (byte *)(lVar14 + 0x40);
      if ((bVar11 & 1) != 0) {
        pbVar10 = param_1 + 0x3c;
      }
      local_c0[0] = puVar5;
      local_a8 = puVar4;
      local_90 = puVar3;
      local_78 = puVar2;
      local_58 = piVar1;
    } while (iVar9 < *(int *)pbVar10);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148080ba4 FUN_148080ba4 body=748 status=ok
// SIG undefined FUN_148080ba4(void)

void FUN_148080ba4(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170 [2];
  int local_160;
  undefined4 *local_158;
  int local_148;
  undefined4 *local_140;
  int local_130;
  undefined4 *local_128 [2];
  int local_118;
  undefined4 *local_110;
  int local_100;
  undefined4 *local_f8;
  int local_e8;
  undefined4 *local_e0 [2];
  int local_d0;
  undefined4 *local_c8;
  int local_b8;
  undefined4 *local_b0;
  int local_a0;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1480831f4(local_60,param_1);
  iVar17 = 0;
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_1);
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_1);
  FUN_1448a432c(local_e0,param_1);
  FUN_1448a432c(local_128,param_1);
  FUN_1448a432c(local_170,param_1);
  FUN_148083510(local_58);
  if (*(int *)(local_58 + 0x60) != -1) {
    iVar17 = *(int *)(local_58 + 0x14);
  }
  bVar14 = *param_1;
  lVar15 = *(longlong *)(param_1 + 0x80);
  pbVar16 = (byte *)(lVar15 + 0x40);
  if (bVar14 != 0) {
    pbVar16 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    iVar18 = 0;
    do {
      piVar1 = local_78 + local_68;
      iVar12 = *local_78;
      piVar2 = local_98 + local_88;
      iVar13 = *local_98;
      puVar3 = local_b0 + local_a0;
      local_174 = *local_b0;
      puVar4 = local_c8 + local_b8;
      local_178 = *local_c8;
      puVar5 = local_e0[0] + local_d0;
      local_17c = *local_e0[0];
      puVar6 = local_f8 + local_e8;
      local_180 = *local_f8;
      puVar7 = local_110 + local_100;
      local_184 = *local_110;
      puVar8 = local_128[0] + local_118;
      local_188 = *local_128[0];
      puVar9 = local_140 + local_130;
      local_18c = *local_140;
      puVar10 = local_158 + local_148;
      local_190 = *local_158;
      puVar11 = local_170[0] + local_160;
      local_194 = *local_170[0];
      local_170[0] = puVar11;
      local_158 = puVar10;
      local_140 = puVar9;
      local_128[0] = puVar8;
      local_110 = puVar7;
      local_f8 = puVar6;
      local_e0[0] = puVar5;
      local_c8 = puVar4;
      local_b0 = puVar3;
      local_98 = piVar2;
      local_78 = piVar1;
      if (((iVar12 != 0) && (-1 < iVar13)) && (iVar13 < iVar17)) {
        local_1a8 = &local_194;
        FUN_14808356a(local_58,iVar13,&local_17c,&local_188);
        bVar14 = *param_1;
        lVar15 = *(longlong *)(param_1 + 0x80);
      }
      iVar18 = iVar18 + 1;
      pbVar16 = (byte *)(lVar15 + 0x40);
      if ((bVar14 & 1) != 0) {
        pbVar16 = param_1 + 0x3c;
      }
    } while (iVar18 < *(int *)pbVar16);
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148080e92 FUN_148080e92 body=506 status=ok
// SIG undefined FUN_148080e92(void)

void FUN_148080e92(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1480831f4(local_60,param_1);
  iVar12 = 0;
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_1);
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_1);
  local_a8 = 0;
  local_b8 = (uint *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_1);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98dce(&local_e8,param_1);
  local_c0 = 0;
  local_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  FUN_144a98dce(&local_d0,param_1);
  FUN_148083510(local_58);
  iVar9 = 0;
  if (*(int *)(local_58 + 100) != -1) {
    iVar12 = *(int *)(local_58 + 0x14);
    iVar9 = *(int *)(local_58 + 0x18);
  }
  bVar13 = *param_1;
  lVar14 = *(longlong *)(param_1 + 0x80);
  pbVar11 = (byte *)(lVar14 + 0x40);
  if (bVar13 != 0) {
    pbVar11 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar11) {
    iVar10 = 0;
    do {
      piVar1 = local_78 + local_68;
      piVar2 = local_98 + local_88;
      iVar6 = *local_98;
      puVar3 = local_b8 + local_a8;
      uVar7 = *local_b8;
      puVar4 = local_d0 + local_c0;
      uVar8 = *local_d0;
      puVar5 = local_e8 + local_d8;
      if ((((-1 < (longlong)iVar6 && *local_78 != 0) && (iVar6 < iVar12)) && (0 < (int)uVar7)) &&
         ((int)uVar7 < iVar9)) {
        lVar14 = (ulonglong)*(uint *)(local_58 + 100) +
                 (longlong)iVar6 * 8 + *(longlong *)(local_58 + 0xa0);
        *(undefined4 *)(lVar14 + (ulonglong)uVar7 * 8) = *local_e8;
        *(undefined4 *)(lVar14 + 4 + (ulonglong)uVar7 * 8) = uVar8;
        bVar13 = *param_1;
        lVar14 = *(longlong *)(param_1 + 0x80);
      }
      iVar10 = iVar10 + 1;
      pbVar11 = (byte *)(lVar14 + 0x40);
      if ((bVar13 & 1) != 0) {
        pbVar11 = param_1 + 0x3c;
      }
      local_e8 = puVar5;
      local_d0 = puVar4;
      local_b8 = puVar3;
      local_98 = piVar2;
      local_78 = piVar1;
    } while (iVar10 < *(int *)pbVar11);
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808108e FUN_14808108e body=537 status=ok
// SIG undefined FUN_14808108e(void)

void FUN_14808108e(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_a0;
  undefined8 uStack_98;
  int local_90;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1480831f4(local_50,param_1);
  iVar12 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a76d88(&local_68,param_1);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98dce(&local_e8,param_1);
  local_c0 = 0;
  local_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  FUN_144a98dce(&local_d0,param_1);
  local_a8 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  FUN_144a98dce(&local_b8,param_1);
  local_90 = 0;
  local_a0 = (undefined4 *)0x0;
  uStack_98 = 0;
  FUN_144a98dce(&local_a0,param_1);
  FUN_148083510(local_48);
  if (*(int *)(local_48 + 0x68) != -1) {
    iVar12 = *(int *)(local_48 + 0x14);
  }
  bVar9 = *param_1;
  lVar10 = *(longlong *)(param_1 + 0x80);
  pbVar11 = (byte *)(lVar10 + 0x40);
  if (bVar9 != 0) {
    pbVar11 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar11) {
    iVar13 = 0;
    do {
      piVar1 = local_68 + local_58;
      iVar7 = *local_68;
      piVar2 = local_88 + local_78;
      iVar8 = *local_88;
      puVar3 = local_a0 + local_90;
      local_ec = *local_a0;
      puVar4 = local_b8 + local_a8;
      local_f0 = *local_b8;
      puVar5 = local_d0 + local_c0;
      local_f4 = *local_d0;
      puVar6 = local_e8 + local_d8;
      local_f8 = *local_e8;
      local_e8 = puVar6;
      local_d0 = puVar5;
      local_b8 = puVar4;
      local_a0 = puVar3;
      local_88 = piVar2;
      local_68 = piVar1;
      if (((iVar7 != 0) && (-1 < iVar8)) && (iVar8 < iVar12)) {
        FUN_1480836ac(local_48,iVar8,&local_f8);
        bVar9 = *param_1;
        lVar10 = *(longlong *)(param_1 + 0x80);
      }
      iVar13 = iVar13 + 1;
      pbVar11 = (byte *)(lVar10 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar11 = param_1 + 0x3c;
      }
    } while (iVar13 < *(int *)pbVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480812a8 FUN_1480812a8 body=1295 status=ok
// SIG undefined FUN_1480812a8(void)

void FUN_1480812a8(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  int *piVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 auStack_2b8 [32];
  undefined4 *local_298;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 *local_258;
  undefined8 uStack_250;
  int local_248;
  undefined4 *local_240;
  undefined8 uStack_238;
  int local_230;
  undefined4 *local_228;
  undefined8 uStack_220;
  int local_218;
  undefined4 *local_210;
  undefined8 uStack_208;
  int local_200;
  undefined4 *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined4 *local_1e0;
  undefined8 uStack_1d8;
  int local_1d0;
  undefined4 *local_1c8 [2];
  int local_1b8;
  undefined4 *local_1b0;
  int local_1a0;
  undefined4 *local_198;
  int local_188;
  undefined4 *local_180 [2];
  int local_170;
  undefined4 *local_168;
  int local_158;
  undefined4 *local_150;
  int local_140;
  undefined4 *local_138 [2];
  int local_128;
  undefined4 *local_120;
  int local_110;
  undefined4 *local_108;
  int local_f8;
  undefined4 *local_f0 [2];
  int local_e0;
  undefined4 *local_d8;
  int local_c8;
  undefined4 *local_c0;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1480831f4(local_70,param_1);
  iVar29 = 0;
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_1448a432c(local_f0,param_1);
  FUN_1448a432c(local_138,param_1);
  FUN_1448a432c(local_180,param_1);
  FUN_1448a432c(local_1c8,param_1);
  local_1e8 = 0;
  local_1f8 = (undefined4 *)0x0;
  uStack_1f0 = 0;
  FUN_144a98dce(&local_1f8,param_1);
  local_1d0 = 0;
  local_1e0 = (undefined4 *)0x0;
  uStack_1d8 = 0;
  FUN_144a98dce(&local_1e0,param_1);
  local_248 = 0;
  local_258 = (undefined4 *)0x0;
  uStack_250 = 0;
  FUN_144a98dce(&local_258,param_1);
  local_230 = 0;
  local_240 = (undefined4 *)0x0;
  uStack_238 = 0;
  FUN_144a98dce(&local_240,param_1);
  local_218 = 0;
  local_228 = (undefined4 *)0x0;
  uStack_220 = 0;
  FUN_144a98dce(&local_228,param_1);
  local_200 = 0;
  local_210 = (undefined4 *)0x0;
  uStack_208 = 0;
  FUN_144a98dce(&local_210,param_1);
  FUN_148083510(local_68);
  piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar27 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar27) {
    do {
      piVar27 = local_88 + local_78;
      iVar23 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar30 = (ulonglong)*local_a8;
      puVar2 = local_c0 + local_b0;
      uVar20 = *local_c0;
      puVar3 = local_d8 + local_c8;
      uVar21 = *local_d8;
      puVar4 = local_f0[0] + local_e0;
      uVar22 = *local_f0[0];
      puVar5 = local_108 + local_f8;
      local_25c = *local_108;
      puVar6 = local_120 + local_110;
      local_260 = *local_120;
      puVar7 = local_138[0] + local_128;
      local_264 = *local_138[0];
      puVar8 = local_150 + local_140;
      local_268 = *local_150;
      puVar9 = local_168 + local_158;
      local_26c = *local_168;
      puVar10 = local_180[0] + local_170;
      local_270 = *local_180[0];
      puVar11 = local_198 + local_188;
      local_274 = *local_198;
      puVar12 = local_1b0 + local_1a0;
      local_278 = *local_1b0;
      puVar13 = local_1c8[0] + local_1b8;
      local_27c = *local_1c8[0];
      puVar14 = local_1e0 + local_1d0;
      uVar24 = *local_1e0;
      puVar15 = local_1f8 + local_1e8;
      uVar25 = *local_1f8;
      puVar16 = local_210 + local_200;
      local_280 = *local_210;
      puVar17 = local_228 + local_218;
      local_284 = *local_228;
      puVar18 = local_240 + local_230;
      local_288 = *local_240;
      puVar19 = local_258 + local_248;
      local_28c = *local_258;
      local_258 = puVar19;
      local_240 = puVar18;
      local_228 = puVar17;
      local_210 = puVar16;
      local_1f8 = puVar15;
      local_1e0 = puVar14;
      local_1c8[0] = puVar13;
      local_1b0 = puVar12;
      local_198 = puVar11;
      local_180[0] = puVar10;
      local_168 = puVar9;
      local_150 = puVar8;
      local_138[0] = puVar7;
      local_120 = puVar6;
      local_108 = puVar5;
      local_f0[0] = puVar4;
      local_d8 = puVar3;
      local_c0 = puVar2;
      local_a8 = puVar1;
      local_88 = piVar27;
      if (iVar23 != 0) {
        uVar26 = (ulonglong)*(uint *)(local_68 + 0x5c);
        if (uVar26 != 0xffffffff) {
          lVar28 = uVar30 * 0xc + *(longlong *)(local_68 + 0xa0);
          *(undefined4 *)(uVar26 + lVar28) = uVar22;
          *(undefined4 *)(uVar26 + 4 + lVar28) = uVar21;
          *(undefined4 *)(uVar26 + 8 + lVar28) = uVar20;
        }
        if (*(int *)(local_68 + 0x60) != -1) {
          local_298 = &local_27c;
          FUN_14808356a(uVar20,uVar30,&local_264,&local_270);
        }
        uVar26 = (ulonglong)*(uint *)(local_68 + 100);
        if (uVar26 != 0xffffffff) {
          lVar28 = uVar30 * 8 + *(longlong *)(local_68 + 0xa0);
          *(undefined4 *)(uVar26 + lVar28) = uVar25;
          *(undefined4 *)(uVar26 + 4 + lVar28) = uVar24;
        }
        if (*(int *)(local_68 + 0x68) != -1) {
          FUN_1480836ac(local_68,uVar30,&local_28c);
        }
      }
      iVar29 = iVar29 + 1;
      piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar27 = (int *)(param_1 + 0x3c);
      }
    } while (iVar29 < *piVar27);
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480817b8 FUN_1480817b8 body=3286 status=ok
// SIG undefined FUN_1480817b8(void)

void FUN_1480817b8(char *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  uint uVar60;
  uint uVar61;
  longlong lVar62;
  ulonglong uVar63;
  int *piVar64;
  int iVar65;
  int *piVar66;
  int iVar67;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar68;
  undefined1 auStack_6d8 [32];
  undefined4 *local_6b8;
  int *local_6b0;
  longlong local_6a8;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  int *local_5c8;
  int local_5c0;
  undefined4 *local_5b8 [2];
  int local_5a8;
  undefined4 *local_5a0;
  int local_590;
  undefined4 *local_588;
  int local_578;
  undefined4 *local_570;
  int local_560;
  undefined4 *local_558;
  int local_548;
  undefined4 *local_540;
  int local_530;
  undefined4 *local_528;
  int local_518;
  undefined4 *local_510;
  int local_500;
  undefined4 *local_4f8;
  int local_4e8;
  undefined4 *local_4e0;
  int local_4d0;
  undefined4 *local_4c8;
  int local_4b8;
  undefined4 *local_4b0;
  int local_4a0;
  undefined4 *local_498;
  int local_488;
  undefined4 *local_480;
  int local_470;
  undefined4 *local_468;
  int local_458;
  undefined4 *local_450;
  int local_440;
  undefined4 *local_438;
  int local_428;
  undefined4 *local_420;
  int local_410;
  undefined4 *local_408 [2];
  int local_3f8;
  undefined4 *local_3f0;
  int local_3e0;
  undefined4 *local_3d8;
  int local_3c8;
  undefined4 *local_3c0;
  int local_3b0;
  undefined4 *local_3a8;
  int local_398;
  undefined4 *local_390;
  int local_380;
  undefined4 *local_378;
  int local_368;
  undefined4 *local_360;
  int local_350;
  undefined4 *local_348;
  int local_338;
  undefined4 *local_330;
  int local_320;
  undefined4 *local_318;
  int local_308;
  undefined4 *local_300;
  int local_2f0;
  undefined4 *local_2e8;
  int local_2d8;
  undefined4 *local_2d0;
  int local_2c0;
  undefined4 *local_2b8;
  int local_2a8;
  undefined4 *local_2a0;
  int local_290;
  undefined4 *local_288;
  int local_278;
  undefined4 *local_270;
  int local_260;
  undefined4 *local_258 [2];
  int local_248;
  undefined4 *local_240;
  int local_230;
  undefined4 *local_228;
  int local_218;
  undefined4 *local_210;
  int local_200;
  undefined4 *local_1f8;
  int local_1e8;
  undefined4 *local_1e0;
  int local_1d0;
  undefined4 *local_1c8;
  int local_1b8;
  undefined4 *local_1b0;
  int local_1a0;
  undefined4 *local_198;
  int local_188;
  undefined4 *local_180;
  int local_170;
  undefined4 *local_168;
  int local_158;
  undefined4 *local_150;
  int local_140;
  undefined4 *local_138;
  int local_128;
  undefined4 *local_120;
  int local_110;
  undefined4 *local_108;
  int local_f8;
  undefined4 *local_f0;
  int local_e0;
  undefined4 *local_d8;
  int local_c8;
  undefined4 *local_c0;
  int local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  FUN_1480831f4(local_70,param_1);
  iVar67 = 0;
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_1);
  local_98 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_1);
  FUN_14808376a(local_258,param_1);
  FUN_14808376a(local_408,param_1);
  FUN_14808376a(local_5b8,param_1);
  FUN_144a76cd4(&local_5c8,param_1);
  FUN_148083510(local_68);
  piVar66 = (int *)(param_1 + 0x3c);
  piVar64 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar64 = piVar66;
  }
  if (0 < *piVar64) {
    local_6a8 = *(longlong *)(local_68 + 0x90);
    local_6b0 = piVar66;
    do {
      piVar64 = local_88 + local_78;
      iVar57 = *local_88;
      puVar1 = local_a8 + local_98;
      uVar58 = *local_a8;
      puVar2 = local_228 + local_218;
      local_608 = *local_228;
      puVar3 = local_240 + local_230;
      uStack_60c = *local_240;
      puVar4 = local_258[0] + local_248;
      local_610 = *local_258[0];
      puVar5 = local_1e0 + local_1d0;
      local_5fc = *local_1e0;
      puVar6 = local_1f8 + local_1e8;
      local_600 = *local_1f8;
      puVar7 = local_210 + local_200;
      local_604 = *local_210;
      puVar8 = local_198 + local_188;
      local_5f0 = *local_198;
      puVar9 = local_1b0 + local_1a0;
      local_5f4 = *local_1b0;
      puVar10 = local_1c8 + local_1b8;
      local_5f8 = *local_1c8;
      puVar11 = local_150 + local_140;
      local_5e4 = *local_150;
      puVar12 = local_168 + local_158;
      local_5e8 = *local_168;
      puVar13 = local_180 + local_170;
      local_5ec = *local_180;
      puVar14 = local_120 + local_110;
      uStack_5dc = *local_120;
      puVar15 = local_138 + local_128;
      local_5e0 = *local_138;
      puVar16 = local_c0 + local_b0;
      local_5cc = *local_c0;
      puVar17 = local_d8 + local_c8;
      local_5d0 = *local_d8;
      puVar18 = local_f0 + local_e0;
      local_5d4 = *local_f0;
      puVar19 = local_108 + local_f8;
      local_5d8 = *local_108;
      puVar20 = local_3d8 + local_3c8;
      local_650 = *local_3d8;
      puVar21 = local_3f0 + local_3e0;
      uStack_654 = *local_3f0;
      puVar22 = local_408[0] + local_3f8;
      local_658 = *local_408[0];
      puVar23 = local_390 + local_380;
      local_644 = *local_390;
      puVar24 = local_3a8 + local_398;
      local_648 = *local_3a8;
      puVar25 = local_3c0 + local_3b0;
      local_64c = *local_3c0;
      puVar26 = local_348 + local_338;
      local_638 = *local_348;
      puVar27 = local_360 + local_350;
      local_63c = *local_360;
      puVar28 = local_378 + local_368;
      local_640 = *local_378;
      puVar29 = local_300 + local_2f0;
      local_62c = *local_300;
      puVar30 = local_318 + local_308;
      local_630 = *local_318;
      puVar31 = local_330 + local_320;
      local_634 = *local_330;
      puVar32 = local_2d0 + local_2c0;
      uStack_624 = *local_2d0;
      puVar33 = local_2e8 + local_2d8;
      local_628 = *local_2e8;
      puVar34 = local_270 + local_260;
      local_614 = *local_270;
      puVar35 = local_288 + local_278;
      local_618 = *local_288;
      puVar36 = local_2a0 + local_290;
      local_61c = *local_2a0;
      puVar37 = local_2b8 + local_2a8;
      local_620 = *local_2b8;
      puVar38 = local_588 + local_578;
      local_698 = *local_588;
      puVar39 = local_5a0 + local_590;
      uStack_69c = *local_5a0;
      puVar40 = local_5b8[0] + local_5a8;
      local_6a0 = *local_5b8[0];
      puVar41 = local_540 + local_530;
      local_68c = *local_540;
      puVar42 = local_558 + local_548;
      local_690 = *local_558;
      puVar43 = local_570 + local_560;
      local_694 = *local_570;
      puVar44 = local_4f8 + local_4e8;
      local_680 = *local_4f8;
      puVar45 = local_510 + local_500;
      local_684 = *local_510;
      puVar46 = local_528 + local_518;
      local_688 = *local_528;
      puVar47 = local_4b0 + local_4a0;
      local_674 = *local_4b0;
      puVar48 = local_4c8 + local_4b8;
      local_678 = *local_4c8;
      puVar49 = local_4e0 + local_4d0;
      local_67c = *local_4e0;
      puVar50 = local_480 + local_470;
      uStack_66c = *local_480;
      puVar51 = local_498 + local_488;
      local_670 = *local_498;
      puVar52 = local_420 + local_410;
      local_65c = *local_420;
      puVar53 = local_438 + local_428;
      local_660 = *local_438;
      puVar54 = local_450 + local_440;
      local_664 = *local_450;
      puVar55 = local_468 + local_458;
      local_668 = *local_468;
      local_5b8[0] = puVar40;
      local_5a0 = puVar39;
      local_588 = puVar38;
      local_570 = puVar43;
      local_558 = puVar42;
      local_540 = puVar41;
      local_528 = puVar46;
      local_510 = puVar45;
      local_4f8 = puVar44;
      local_4e0 = puVar49;
      local_4c8 = puVar48;
      local_4b0 = puVar47;
      local_498 = puVar51;
      local_480 = puVar50;
      local_468 = puVar55;
      local_450 = puVar54;
      local_438 = puVar53;
      local_420 = puVar52;
      local_408[0] = puVar22;
      local_3f0 = puVar21;
      local_3d8 = puVar20;
      local_3c0 = puVar25;
      local_3a8 = puVar24;
      local_390 = puVar23;
      local_378 = puVar28;
      local_360 = puVar27;
      local_348 = puVar26;
      local_330 = puVar31;
      local_318 = puVar30;
      local_300 = puVar29;
      local_2e8 = puVar33;
      local_2d0 = puVar32;
      local_2b8 = puVar37;
      local_2a0 = puVar36;
      local_288 = puVar35;
      local_270 = puVar34;
      local_258[0] = puVar4;
      local_240 = puVar3;
      local_228 = puVar2;
      local_210 = puVar7;
      local_1f8 = puVar6;
      local_1e0 = puVar5;
      local_1c8 = puVar10;
      local_1b0 = puVar9;
      local_198 = puVar8;
      local_180 = puVar13;
      local_168 = puVar12;
      local_150 = puVar11;
      local_138 = puVar15;
      local_120 = puVar14;
      local_108 = puVar19;
      local_f0 = puVar18;
      local_d8 = puVar17;
      local_c0 = puVar16;
      local_a8 = puVar1;
      local_88 = piVar64;
      if ((-1 < (int)uVar58 && iVar57 != 0) && ((int)uVar58 < *(int *)(local_68 + 0x78))) {
        lpCriticalSection = (LPCRITICAL_SECTION)(local_68 + 0xb0);
        EnterCriticalSection(lpCriticalSection);
        lVar62 = *(longlong *)(local_68 + 0x70);
        lVar68 = (ulonglong)uVar58 * 0x10;
        iVar57 = *(int *)(lVar62 + 4 + lVar68);
        iVar59 = *(int *)(lVar62 + 8 + lVar68);
        if (iVar59 < iVar57) {
          *(int *)(lVar62 + lVar68 + 8) = iVar59 + 1;
          *local_5c8 = iVar59;
          iVar65 = iVar59;
        }
        else {
          *local_5c8 = -1;
          iVar65 = -1;
        }
        local_5c8 = local_5c8 + local_5c0;
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        piVar66 = local_6b0;
        if (iVar59 < iVar57) {
          uVar61 = iVar65 * 3;
          lVar62 = (longlong)(int)uVar61;
          *(uint *)(local_6a8 + lVar62 * 4) = uVar61;
          uVar58 = iVar65 * 3 + 1;
          *(uint *)(local_6a8 + 4 + lVar62 * 4) = uVar58;
          uVar56 = iVar65 * 3 + 2;
          *(uint *)(local_6a8 + 8 + lVar62 * 4) = uVar56;
          uVar63 = (ulonglong)*(uint *)(local_68 + 0x5c);
          if (uVar63 != 0xffffffff) {
            lVar62 = (ulonglong)uVar61 * 0xc + *(longlong *)(local_68 + 0xa0);
            *(undefined4 *)(uVar63 + 8 + lVar62) = local_608;
            *(ulonglong *)(uVar63 + lVar62) = CONCAT44(uStack_60c,local_610);
            lVar62 = (ulonglong)uVar58 * 0xc + *(longlong *)(local_68 + 0xa0);
            uVar60 = *(uint *)(local_68 + 0x5c);
            *(undefined4 *)((ulonglong)uVar60 + 8 + lVar62) = local_650;
            *(ulonglong *)((ulonglong)uVar60 + lVar62) = CONCAT44(uStack_654,local_658);
            lVar62 = (ulonglong)uVar56 * 0xc + *(longlong *)(local_68 + 0xa0);
            uVar60 = *(uint *)(local_68 + 0x5c);
            *(undefined4 *)((ulonglong)uVar60 + 8 + lVar62) = local_698;
            *(ulonglong *)((ulonglong)uVar60 + lVar62) = CONCAT44(uStack_69c,local_6a0);
          }
          if (*(int *)(local_68 + 0x60) != -1) {
            local_6b8 = &local_5ec;
            FUN_14808356a(local_68,uVar61,&local_604,&local_5f8);
            local_6b8 = &local_634;
            FUN_14808356a(local_68,uVar58,&local_64c,&local_640);
            local_6b8 = &local_67c;
            FUN_14808356a(local_68,uVar56,&local_694,&local_688);
          }
          if ((ulonglong)*(uint *)(local_68 + 100) != 0xffffffff) {
            *(ulonglong *)
             ((ulonglong)*(uint *)(local_68 + 100) +
             (ulonglong)uVar61 * 8 + *(longlong *)(local_68 + 0xa0)) =
                 CONCAT44(uStack_5dc,local_5e0);
            *(ulonglong *)
             ((ulonglong)*(uint *)(local_68 + 100) +
             (ulonglong)uVar58 * 8 + *(longlong *)(local_68 + 0xa0)) =
                 CONCAT44(uStack_624,local_628);
            *(ulonglong *)
             ((ulonglong)*(uint *)(local_68 + 100) +
             (ulonglong)uVar56 * 8 + *(longlong *)(local_68 + 0xa0)) =
                 CONCAT44(uStack_66c,local_670);
          }
          piVar66 = local_6b0;
          if (*(int *)(local_68 + 0x68) != -1) {
            FUN_1480836ac(local_68,uVar61,&local_5d8);
            FUN_1480836ac(local_68,uVar58,&local_620);
            FUN_1480836ac(local_68,uVar56,&local_668);
            piVar66 = local_6b0;
          }
        }
      }
      iVar67 = iVar67 + 1;
      piVar64 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar64 = piVar66;
      }
    } while (iVar67 < *piVar64);
  }
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148082496 FUN_148082496 body=453 status=ok
// SIG undefined FUN_148082496(void)

undefined8 FUN_148082496(longlong param_1,void *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
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
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70;
  void *local_68;
  longlong local_60;
  void **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  memset(param_2,0,0xd8);
  FUN_14808265c(param_2);
  *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)(param_3 + 0x100);
  *(undefined1 *)((longlong)param_2 + 1) = *(undefined1 *)(param_1 + 0x6a);
  *(byte *)((longlong)param_2 + 2) = *(byte *)(param_1 + 0x30) >> 2 & 1;
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  uVar6 = *(undefined4 *)(param_1 + 0x80);
  uVar7 = *(undefined4 *)(param_1 + 0x84);
  uVar8 = *(undefined4 *)(param_1 + 0x88);
  uVar9 = *(undefined4 *)(param_1 + 0x8c);
  uVar10 = *(undefined4 *)(param_1 + 0x90);
  uVar11 = *(undefined4 *)(param_1 + 0x94);
  uVar12 = *(undefined4 *)(param_1 + 0x98);
  uVar13 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((longlong)param_2 + 0x20) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x28) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x30) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x38) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x40) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x48) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar13;
  *(undefined8 *)((longlong)param_2 + 0x50) = *(undefined8 *)(param_1 + 0xa0);
  local_68 = param_2;
  FUN_1480826fe((longlong *)((longlong)param_2 + 0x70),*(undefined4 *)(param_1 + 0x48));
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar14 = 0xc;
    lVar15 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x40);
      lVar1 = *(longlong *)((longlong)param_2 + 0x70);
      *(undefined4 *)(lVar1 + -8 + lVar14) = *(undefined4 *)(lVar18 + lVar15 * 8);
      *(undefined4 *)(lVar1 + lVar14) = *(undefined4 *)(lVar18 + 4 + lVar15 * 8);
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar15 < *(int *)(param_1 + 0x48));
  }
  local_70 = (longlong)param_2 + 8;
  local_78 = *(undefined1 *)(param_1 + 0x68);
  FUN_14808276c(param_2,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                *(undefined1 *)(param_1 + 0x69));
  plVar17 = (longlong *)((longlong)param_2 + 0x80);
  FUN_148082854(plVar17,*(undefined4 *)(param_1 + 0x58));
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar18 = 8;
    lVar14 = 0;
    lVar15 = 8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar2 = *plVar17;
      lVar16 = *(longlong *)(lVar1 + -8 + lVar15);
      if (DAT_14c950c29 == '\x01') {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(lVar1 + -8 + lVar15);
        }
      }
      *(longlong *)(lVar2 + -8 + lVar18) = lVar16;
      FUN_1404e5848(*plVar17 + lVar18,param_3 + 0x1e8,*(longlong *)(param_1 + 0x50) + lVar15);
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x28;
      lVar18 = lVar18 + 0x40;
    } while (lVar14 < *(int *)(param_1 + 0x58));
  }
  local_60 = local_70;
  local_58 = &local_68;
  FUN_148090f1e(*(longlong *)(param_1 + 0x28) + 0x10,local_4c);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14808265c FUN_14808265c body=162 status=ok
// SIG undefined FUN_14808265c(void)

undefined2 * FUN_14808265c(undefined2 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x14) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x1c) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x24) = 0x4059000000000000;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x58),4000);
  return param_1;
}



// FUNCTION 1480826fe FUN_1480826fe body=109 status=ok
// SIG undefined FUN_1480826fe(void)

void FUN_1480826fe(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148090d1e(param_1,iVar1);
    }
    FUN_148090d0a((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148090da4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14808276c FUN_14808276c body=232 status=ok
// SIG undefined FUN_14808276c(void)

void FUN_14808276c(longlong param_1,int param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_148083288();
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x58) = param_2 * 0xc;
  uVar3 = 0xffffffff;
  uVar2 = 0xffffffff;
  if (param_4 != '\0') {
    iVar1 = (**(code **)(*DAT_14ca83900 + 0x188))(DAT_14ca83900,0x3d);
    uVar2 = -iVar1 & iVar1 + -1 + *(int *)(param_1 + 0x58);
    param_3 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x58) = uVar2 + *(int *)(param_1 + 0x14) * 8;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  if (param_3 != 0) {
    iVar1 = (**(code **)(*DAT_14ca83900 + 0x188))(DAT_14ca83900,0x11);
    uVar3 = -iVar1 & iVar1 + -1 + *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = uVar3 + *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14) * 8;
  }
  *(uint *)(param_1 + 100) = uVar3;
  uVar2 = 0xffffffff;
  if (param_5 != '\0') {
    iVar1 = (**(code **)(*DAT_14ca83900 + 0x188))(DAT_14ca83900,0x25);
    uVar2 = -iVar1 & iVar1 + -1 + *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = uVar2 + *(int *)(param_1 + 0x14) * 4;
  }
  *(uint *)(param_1 + 0x68) = uVar2;
  return;
}



// FUNCTION 148082854 FUN_148082854 body=65 status=ok
// SIG undefined FUN_148082854(void)

void FUN_148082854(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_148090e98(param_1,iVar1);
  }
  FUN_148090e3f((longlong)iVar1 * 0x40 + *param_1,param_2);
  return;
}



// FUNCTION 148082896 FUN_148082896 body=115 status=ok
// SIG undefined FUN_148082896(void)

void FUN_148082896(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14808634b(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14808290a FUN_14808290a body=287 status=ok
// SIG undefined FUN_14808290a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14808290a(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2[1] == '\x01') {
    *param_2 = 1;
    auVar1 = _DAT_149931e80;
    if ((longlong)*(int *)(param_2 + 0x78) != 0) {
      uVar3 = (longlong)*(int *)(param_2 + 0x78) + 0xfffffffffffffff;
      uVar4 = uVar3 & 0xfffffffffffffff;
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      puVar2 = (undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x38);
      uVar5 = 0;
      auVar9 = pmovsxbq(in_XMM1,0x302);
      auVar10 = pmovsxbq(in_XMM2,0x100);
      auVar7 = auVar7 | _DAT_149931e80;
      do {
        lVar6 = auVar7._0_8_;
        lVar8 = auVar7._8_8_;
        if ((bool)(~(lVar6 < (longlong)(uVar5 ^ auVar1._0_8_)) & 1)) {
          puVar2[-0xc] = 0;
        }
        auVar11._8_4_ = (int)uVar5;
        auVar11._0_8_ = uVar5;
        auVar11._12_4_ = (int)(uVar5 >> 0x20);
        if ((longlong)((auVar11._8_8_ | auVar10._8_8_) ^ auVar1._8_8_) <= lVar8) {
          puVar2[-8] = 0;
        }
        auVar11 = (auVar11 | auVar9) ^ auVar1;
        if (auVar11._0_8_ <= lVar6) {
          puVar2[-4] = 0;
        }
        if (auVar11._8_8_ <= lVar8) {
          *puVar2 = 0;
        }
        uVar5 = uVar5 + 4;
        puVar2 = puVar2 + 0x10;
      } while ((uVar4 - ((uint)uVar3 & 3)) + 4 != uVar5);
    }
  }
  return 0;
}



// FUNCTION 148082a2a FUN_148082a2a body=529 status=ok
// SIG undefined FUN_148082a2a(void)

undefined1 * FUN_148082a2a(undefined1 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  void *_Src;
  size_t _Size;
  longlong lVar15;
  int iVar16;
  undefined1 *_Dst;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x30) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0x4059000000000000;
  param_1[0x40] = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14a3d4750;
  param_1[0x78] = 0;
  *(undefined1 (*) [16])(param_1 + 0x88) = (undefined1  [16])0x0;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_14a3d4750;
  param_1[0x98] = 0;
  *(undefined1 (*) [16])(param_1 + 0xa0) = (undefined1  [16])0x0;
  *param_1 = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x68);
  iVar13 = *(int *)(param_2 + 0x98);
  *(int *)(param_1 + 0x70) = iVar13;
  if (iVar13 == 0) {
    _Src = *(void **)(param_2 + 0x90);
    _Size = 0;
    puVar14 = (undefined1 *)0x0;
  }
  else {
    FUN_14746fa8e(param_1 + 0x68,0);
    _Size = (size_t)*(int *)(param_1 + 0x70);
    puVar14 = *(undefined1 **)(param_1 + 0x68);
    _Src = *(void **)(param_2 + 0x90);
    if (((ulonglong)puVar14 & 1) != 0) {
      puVar14 = param_1 + 0x68 + ((longlong)puVar14 >> 0x18);
    }
  }
  memcpy(puVar14,_Src,_Size);
  uVar1 = *(uint *)(param_2 + 0xa8);
  iVar13 = *(int *)(param_1 + 0x90);
  iVar12 = iVar13 + uVar1;
  *(int *)(param_1 + 0x90) = iVar12;
  if ((uint)(*(int *)(param_1 + 0x94) - iVar13) < uVar1) {
    FUN_14746fa8e(param_1 + 0x88);
    iVar12 = *(int *)(param_1 + 0x90);
  }
  puVar14 = *(undefined1 **)(param_1 + 0x88);
  _Dst = param_1 + 0x88 + ((longlong)puVar14 >> 0x18);
  if (((ulonglong)puVar14 & 1) == 0) {
    _Dst = puVar14;
  }
  memcpy(_Dst,*(void **)(param_2 + 0xa0),(longlong)iVar12);
  FUN_14808637a(param_1 + 0xa0,param_2 + 0x70);
  iVar13 = 1;
  if (1 < *(int *)(param_2 + 0x88)) {
    iVar13 = *(int *)(param_2 + 0x88);
  }
  iVar12 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar12 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar15 = 0;
    do {
      iVar16 = *(int *)(lVar2 + 0xc + lVar15);
      if (iVar13 + -1 <= iVar16) {
        iVar16 = iVar13 + -1;
      }
      if (iVar16 < 1) {
        iVar16 = 0;
      }
      *(int *)(lVar2 + 0xc + lVar15) = iVar16;
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar12 * 0x10 != lVar15);
  }
  return param_1;
}



// FUNCTION 148082c3c FUN_148082c3c body=322 status=ok
// SIG undefined FUN_148082c3c(void)

ulonglong FUN_148082c3c(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1481192e4();
  if (((((((cVar1 != '\0') && (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x48))) &&
         (cVar1 = FUN_148092125(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x40)),
         cVar1 != '\0')) &&
        ((*(int *)(param_2 + 0x58) == *(int *)(param_1 + 0x58) &&
         (cVar1 = FUN_148092155(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_1 + 0x50)),
         cVar1 != '\0')))) &&
       ((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x60) &&
        ((*(int *)(param_2 + 100) == *(int *)(param_1 + 100) &&
         (*(char *)(param_2 + 0x68) == *(char *)(param_1 + 0x68))))))) &&
      (*(char *)(param_2 + 0x69) == *(char *)(param_1 + 0x69))) &&
     (*(char *)(param_2 + 0x6a) == *(char *)(param_1 + 0x6a))) {
    if (*(char *)(param_2 + 0xa0) == '\0' && *(char *)(param_1 + 0xa0) == '\0') {
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_2 + 100) >> 8),1);
    }
    if (*(char *)(param_2 + 0xa0) != '\0' && *(char *)(param_1 + 0xa0) != '\0') {
      if ((*(double *)(param_2 + 0x70) == *(double *)(param_1 + 0x70)) &&
         (!NAN(*(double *)(param_2 + 0x70)) && !NAN(*(double *)(param_1 + 0x70)))) {
        if ((*(double *)(param_2 + 0x78) == *(double *)(param_1 + 0x78)) &&
           (!NAN(*(double *)(param_2 + 0x78)) && !NAN(*(double *)(param_1 + 0x78)))) {
          if ((*(double *)(param_2 + 0x80) == *(double *)(param_1 + 0x80)) &&
             (!NAN(*(double *)(param_2 + 0x80)) && !NAN(*(double *)(param_1 + 0x80)))) {
            if ((*(double *)(param_2 + 0x88) == *(double *)(param_1 + 0x88)) &&
               (!NAN(*(double *)(param_2 + 0x88)) && !NAN(*(double *)(param_1 + 0x88)))) {
              if ((*(double *)(param_2 + 0x90) == *(double *)(param_1 + 0x90)) &&
                 (!NAN(*(double *)(param_2 + 0x90)) && !NAN(*(double *)(param_1 + 0x90)))) {
                return (ulonglong)
                       (-(uint)(*(double *)(param_1 + 0x98) == *(double *)(param_2 + 0x98)) & 1);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148082d7e FUN_148082d7e body=142 status=ok
// SIG undefined FUN_148082d7e(void)

undefined4 FUN_148082d7e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = FUN_1414db5a0();
  if ((char)uVar6 != '\0') {
    FUN_148082e0c(param_2 + 0x40,param_1 + 0x40);
    FUN_148082e64(param_2 + 0x50,param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(param_1 + 0x68);
    *(undefined1 *)(param_2 + 0x69) = *(undefined1 *)(param_1 + 0x69);
    *(undefined1 *)(param_2 + 0x6a) = *(undefined1 *)(param_1 + 0x6a);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_2 + 0x98) = uVar5;
    *(undefined8 *)(param_2 + 0x80) = uVar3;
    *(undefined8 *)(param_2 + 0x88) = uVar4;
    *(undefined8 *)(param_2 + 0x70) = uVar1;
    *(undefined8 *)(param_2 + 0x78) = uVar2;
  }
  return uVar6;
}



// FUNCTION 148082e0c FUN_148082e0c body=88 status=ok
// SIG undefined FUN_148082e0c(void)

undefined8 * FUN_148082e0c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1480921d8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148082e64 FUN_148082e64 body=95 status=ok
// SIG undefined FUN_148082e64(void)

undefined8 * FUN_148082e64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c065a2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14809223a(param_1,iVar1);
      FUN_1480922ad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148082ee6 FUN_148082ee6 body=288 status=ok
// SIG undefined FUN_148082ee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148082ee6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar1 + 0x98;
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0xa0);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0xa8) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *(longlong *)(lVar1 + 0x60) + (longlong)iVar3 * 0x130;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x60) + (longlong)iVar3 * 0x130) == lVar2)
        goto LAB_148082f4e;
        iVar3 = *(int *)(lVar6 + 0x128);
      } while (iVar3 != -1);
    }
  }
  lVar6 = 0;
LAB_148082f4e:
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  FUN_148092402();
  *(uint *)(param_2 + 0x50) = uVar4 + _DAT_14cb37ef4;
  lVar1 = *(longlong *)(param_2 + 0x38);
  *(undefined4 *)(lVar1 + uVar5) = *(undefined4 *)(lVar6 + 8);
  *(undefined4 *)(lVar1 + 4 + uVar5) = *(undefined4 *)(lVar6 + 0xc);
  *(undefined4 *)(lVar1 + 8 + uVar5) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(lVar1 + 0xc + uVar5) = *(undefined4 *)(lVar6 + 0x14);
  *(uint *)(lVar1 + 0x10 + uVar5) = *(uint *)(lVar6 + 0x54) >> 2;
  *(uint *)(lVar1 + 0x14 + uVar5) = *(uint *)(lVar6 + 0x58) >> 2;
  *(uint *)(lVar1 + 0x18 + uVar5) = *(uint *)(lVar6 + 0x5c) >> 2;
  *(uint *)(lVar1 + 0x1c + uVar5) = *(uint *)(lVar6 + 0x60) >> 2;
  *(undefined8 *)(lVar1 + 0x20 + uVar5) = *(undefined8 *)(lVar6 + 0xe8);
  *(undefined8 *)(lVar1 + 0x28 + uVar5) = *(undefined8 *)(lVar6 + 0xf8);
  *(undefined8 *)(lVar1 + 0x30 + uVar5) = *(undefined8 *)(lVar6 + 0x108);
  return;
}



// FUNCTION 148083006 FUN_148083006 body=233 status=ok
// SIG undefined FUN_148083006(void)

longlong * FUN_148083006(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + -0x10);
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ad80eb0;
  plVar1 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14ad80ed0;
  plVar5[5] = lVar3;
  plVar5[6] = param_3;
  local_40 = plVar1;
  local_38 = plVar5;
  FUN_1480932c6(&local_40,plVar1);
  plVar4 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480830f2 FUN_1480830f2 body=256 status=ok
// SIG undefined FUN_1480830f2(void)

void FUN_1480830f2(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar6 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x50);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          lVar2 = plVar1[1];
          if (lVar2 == 0) {
            return;
          }
          iVar4 = *(int *)(lVar2 + 0x88);
          iVar5 = (int)param_3[1] + iVar4;
          if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar5);
          }
          if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
            FUN_1448831cc(param_3);
            iVar4 = *(int *)(lVar2 + 0x88);
          }
          if (iVar4 == 0) {
            return;
          }
          lVar2 = *(longlong *)(lVar2 + 0x80);
          lVar6 = 0;
          do {
            uVar3 = *(undefined8 *)(lVar2 + lVar6);
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_144769b64(param_3,iVar5);
            }
            *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar3;
            lVar6 = lVar6 + 0x40;
          } while ((longlong)iVar4 * 0x40 != lVar6);
          return;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1480831f4 FUN_1480831f4 body=148 status=ok
// SIG undefined FUN_1480831f4(void)

void FUN_1480831f4(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148083288 FUN_148083288 body=163 status=ok
// SIG undefined FUN_148083288(void)

void FUN_148083288(undefined1 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    piVar2 = *(int **)(param_1 + 0x70);
    piVar1 = piVar2 + (longlong)*(int *)(param_1 + 0x78) * 4;
    iVar3 = 0;
    do {
      *piVar2 = iVar3;
      iVar3 = piVar2[1];
      if (param_1[1] != '\0') {
        iVar3 = 0;
      }
      piVar2[2] = iVar3;
      iVar3 = piVar2[1] + *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar3;
      piVar2 = piVar2 + 4;
    } while (piVar2 != piVar1);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_144893a1c(param_1 + 0x90,0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_144893a1c(param_1 + 0xa0,0);
    return;
  }
  return;
}



// FUNCTION 14808332c FUN_14808332c body=484 status=ok
// SIG undefined FUN_14808332c(void)

void FUN_14808332c(longlong param_1,uint param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = (ulonglong)param_2 * 8 + *(longlong *)(param_1 + 0xa0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x60);
  uVar1 = *(uint *)(uVar2 + lVar3);
  *param_3 = (float)(uVar1 & 0xff);
  param_3[1] = (float)(uVar1 >> 8 & 0xff);
  param_3[2] = (float)(uVar1 >> 0x10 & 0xff);
  uVar1 = *(uint *)(uVar2 + 4 + lVar3);
  *param_5 = (float)(uVar1 & 0xff);
  param_5[1] = (float)(uVar1 >> 8 & 0xff);
  param_5[2] = (float)(uVar1 >> 0x10 & 0xff);
  fVar7 = param_3[2] * 0.007843138 + -1.0;
  fVar4 = param_3[1] * 0.007843138 + -1.0;
  fVar9 = *param_3 * 0.007843138 + -1.0;
  *param_3 = fVar9;
  param_3[1] = fVar4;
  param_3[2] = fVar7;
  fVar7 = fVar7 * 0.007843138 + -1.0;
  fVar4 = fVar4 * 0.007843138 + -1.0;
  fVar9 = fVar9 * 0.007843138 + -1.0;
  *param_5 = fVar9;
  param_5[1] = fVar4;
  param_5[2] = fVar7;
  fVar6 = (float)*(byte *)(uVar2 + 7 + lVar3) / 127.5 + -1.0;
  fVar10 = (fVar9 * param_3[1] - *param_3 * fVar4) * fVar6;
  fVar8 = (fVar7 * *param_3 - fVar9 * param_3[2]) * fVar6;
  fVar5 = (fVar4 * param_3[2] - fVar7 * param_3[1]) * fVar6;
  *param_4 = fVar5;
  param_4[1] = fVar8;
  param_4[2] = fVar10;
  fVar4 = *param_5;
  fVar7 = param_5[1];
  fVar9 = param_5[2];
  *param_3 = (fVar8 * fVar9 - fVar10 * fVar7) * fVar6;
  param_3[1] = (fVar10 * fVar4 - fVar5 * fVar9) * fVar6;
  param_3[2] = (fVar5 * fVar7 - fVar4 * fVar8) * fVar6;
  return;
}



// FUNCTION 148083510 FUN_148083510 body=89 status=ok
// SIG undefined FUN_148083510(void)

void FUN_148083510(undefined1 *param_1)

{
  *param_1 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_1401211f6(param_1 + 0x90,*(int *)(param_1 + 0x10) * 0xc,1);
  FUN_144a5eaa2(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x58),1);
                    /* WARNING: Could not recover jumptable at 0x000148083562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return;
}



// FUNCTION 14808356a FUN_14808356a body=322 status=ok
// SIG undefined FUN_14808356a(void)

void FUN_14808356a(longlong param_1,ulonglong param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = (param_2 & 0xffffffff) * 8 + *(longlong *)(param_1 + 0xa0);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  uVar6 = 0x7f000000;
  if ((fVar1 * param_5[1] - *param_5 * fVar2) * param_4[2] +
      (param_5[2] * fVar2 - param_5[1] * fVar3) * *param_4 +
      (*param_5 * fVar3 - param_5[2] * fVar1) * param_4[1] < 0.0) {
    uVar6 = 0x80000000;
  }
  uVar4 = *(uint *)(param_1 + 0x60);
  *(uint *)((ulonglong)uVar4 + lVar5) =
       ((int)(fVar3 * 127.499) & 0xffU) << 0x10 |
       ((int)(fVar2 * 127.499) & 0xffU) << 8 | (int)(fVar1 * 127.499) & 0xffU | uVar6;
  *(uint *)((ulonglong)uVar4 + 4 + lVar5) =
       ((int)(param_5[2] * 127.499) & 0xffU) << 0x10 |
       ((int)(param_5[1] * 127.499) & 0xffU) << 8 | (int)(*param_5 * 127.499) & 0xffU | uVar6;
  return;
}



// FUNCTION 1480836ac FUN_1480836ac body=189 status=ok
// SIG undefined FUN_1480836ac(void)

void FUN_1480836ac(longlong param_1,uint param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[3];
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  fVar2 = param_3[2];
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  fVar3 = *param_3;
  fVar4 = param_3[1];
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  *(uint *)((ulonglong)*(uint *)(param_1 + 0x68) +
           (ulonglong)param_2 * 4 + *(longlong *)(param_1 + 0xa0)) =
       (int)(fVar2 * 255.0 + 0.5) & 0xffU |
       ((int)(fVar4 * 255.0 + 0.5) & 0xffU) << 8 |
       ((int)(fVar3 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(fVar1 * 255.0 + 0.5) << 0x18;
  return;
}



// FUNCTION 14808376a FUN_14808376a body=254 status=ok
// SIG undefined FUN_14808376a(void)

longlong FUN_14808376a(longlong param_1,undefined8 param_2)

{
  FUN_1448a432c();
  FUN_1448a432c(param_1 + 0x48,param_2);
  FUN_1448a432c(param_1 + 0x90,param_2);
  FUN_1448a432c(param_1 + 0xd8,param_2);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_144a98dce(param_1 + 0x120,param_2);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_144a98dce(param_1 + 0x138,param_2);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_144a98dce(param_1 + 0x150,param_2);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_144a98dce(param_1 + 0x168,param_2);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_144a98dce(param_1 + 0x180,param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_144a98dce(param_1 + 0x198,param_2);
  return param_1;
}



// FUNCTION 148083890 FUN_148083890 body=38 status=ok
// SIG undefined FUN_148083890(void)

undefined8 FUN_148083890(undefined8 param_1,int param_2)

{
  FUN_148076ee2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480838d2 FUN_1480838d2 body=45 status=ok
// SIG undefined FUN_1480838d2(void)

longlong FUN_1480838d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145c0654c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14808390c FUN_14808390c body=83 status=ok
// SIG undefined FUN_14808390c(void)

void FUN_14808390c(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined1 *)
           FUN_148083966(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  *puVar1 = *param_2;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  puVar4 = (undefined8 *)(puVar1 + 0x10);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(puVar1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(puVar1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return;
}



// FUNCTION 148083966 FUN_148083966 body=191 status=ok
// SIG undefined FUN_148083966(void)

longlong FUN_148083966(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xa0;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xa0) == *param_3) {
          if (lVar3 != 0) goto LAB_148083a08;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x90);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148083a26(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xa0 + *param_1;
LAB_148083a08:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 148083a26 FUN_148083a26 body=384 status=ok
// SIG undefined FUN_148083a26(void)

undefined4 * FUN_148083a26(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  undefined8 *local_b0;
  undefined7 local_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined1 local_99 [97];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148083ba8(param_1,local_b8);
  uStack_a0 = 0;
  local_a8 = 0;
  local_a1 = 0;
  memcpy(local_99,&DAT_14c846480,0x60);
  *local_b0 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_b0 + 2) = 0;
  memcpy((void *)((longlong)local_b0 + 0x11),&local_a8,0x6f);
  local_b0[0x10] = DAT_14c846330;
  *(undefined4 *)(local_b0 + 0x11) = DAT_14c846338;
  *(undefined4 *)((longlong)local_b0 + 0x8c) = 0;
  *(undefined4 *)(local_b0 + 0x12) = 0xffffffff;
  cVar1 = FUN_148083c96(param_1,param_3,local_b0,local_b8);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_b0 + 0x94) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_b0 + 0x12) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_b8[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148083da8(param_1);
    }
  }
  *param_2 = local_b8[0];
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148083ba8 FUN_148083ba8 body=238 status=ok
// SIG undefined FUN_148083ba8(void)

int * FUN_148083ba8(longlong *param_1,int *param_2)

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
      FUN_141431dd2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 148083c96 FUN_148083c96 body=152 status=ok
// SIG undefined FUN_148083c96(void)

undefined8 FUN_148083c96(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xa0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xa0) == *param_3) {
          memmove(_Dst,param_3,0x90);
          FUN_148083d2e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148083d2e FUN_148083d2e body=122 status=ok
// SIG undefined FUN_148083d2e(void)

void FUN_148083d2e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 148083da8 FUN_148083da8 body=457 status=ok
// SIG undefined FUN_148083da8(void)

void FUN_148083da8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xa0;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x94 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar7) =
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



// FUNCTION 148083f72 FUN_148083f72 body=37 status=ok
// SIG undefined FUN_148083f72(void)

void FUN_148083f72(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x2000)) {
    *(undefined4 *)(param_1 + 0x2004) = 0x200;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148083f9c FUN_148083f9c body=215 status=ok
// SIG undefined FUN_148083f9c(void)

void FUN_148083f9c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x20) == lVar2) {
          if ((int *)(lVar5 + 8) == (int *)0x0 || lVar5 == 0) {
            return;
          }
          iVar4 = *(int *)(lVar5 + 8);
          if (iVar4 < 1) {
            return;
          }
          iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x70) +
                          (longlong)DAT_14cb41358 * 4);
          uVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x110))();
          FUN_1480d788a(uVar3,param_1,iVar4 * iVar1,*(undefined4 *)(lVar5 + 0xc),
                        *(undefined1 *)(lVar5 + 0x10));
          return;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 148084078 FUN_148084078 body=67 status=ok
// SIG undefined FUN_148084078(void)

void FUN_148084078(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x110))(param_3);
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) {
    FUN_143937814(uVar1);
    return;
  }
  FUN_1439374e8(uVar1,*(undefined8 *)(param_2 + 0x18),param_1);
  return;
}



// FUNCTION 1480840c2 FUN_1480840c2 body=349 status=ok
// SIG undefined FUN_1480840c2(void)

void FUN_1480840c2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  void *_Dst;
  int iVar4;
  
  puVar3 = (undefined8 *)
           FUN_148084220(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  iVar4 = (int)param_2[1] << 2;
  if (*(int *)(puVar3 + 2) != iVar4) {
    FUN_14011fb0c(puVar3);
    FUN_140661c88(puVar3,&DAT_14ca85100,L"NiagaraConsoleVariable",4,iVar4,0x1c,0,0);
  }
  cVar2 = DAT_14ca85169;
  uVar1 = *puVar3;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar1,0,iVar4,1)
  ;
  if (cVar2 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  memcpy(_Dst,(void *)*param_2,(longlong)iVar4);
  uVar1 = *puVar3;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148084220 FUN_148084220 body=180 status=ok
// SIG undefined FUN_148084220(void)

longlong * FUN_148084220(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1480842b7;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1480842d6(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_1480842b7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1480842d6 FUN_1480842d6 body=308 status=ok
// SIG undefined FUN_1480842d6(void)

undefined4 * FUN_1480842d6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14808440c(param_1,local_60);
  local_40 = 0;
  *local_58 = *(undefined8 *)*param_4;
  local_58[1] = 0;
  local_50 = 0;
  local_58[2] = 0;
  local_48 = 0;
  *(undefined4 *)(local_58 + 3) = 0;
  FUN_140038ae8();
  *(undefined4 *)(local_58 + 4) = 0xffffffff;
  cVar1 = FUN_1480844f2(param_1,param_3,local_58,local_60);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_58 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_58 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_60[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148084600(param_1);
    }
  }
  *param_2 = local_60[0];
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14808440c FUN_14808440c body=230 status=ok
// SIG undefined FUN_14808440c(void)

int * FUN_14808440c(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1480844f2 FUN_1480844f2 body=156 status=ok
// SIG undefined FUN_1480844f2(void)

undefined8 FUN_1480844f2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_140038ae8(plVar8 + 1);
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_14808458e(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14808458e FUN_14808458e body=114 status=ok
// SIG undefined FUN_14808458e(void)

void FUN_14808458e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 148084600 FUN_148084600 body=447 status=ok
// SIG undefined FUN_148084600(void)

void FUN_148084600(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1480847c0 FUN_1480847c0 body=132 status=ok
// SIG undefined FUN_1480847c0(void)

void FUN_1480847c0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148084846 FUN_148084846 body=52 status=ok
// SIG undefined FUN_148084846(void)

void FUN_148084846(longlong *param_1)

{
  FUN_14808487a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14808487a FUN_14808487a body=338 status=ok
// SIG undefined FUN_14808487a(void)

void FUN_14808487a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x58 + lVar3 * 0x70) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x70 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480849ce FUN_1480849ce body=48 status=ok
// SIG undefined FUN_1480849ce(void)

void FUN_1480849ce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148084a1c FUN_148084a1c body=166 status=ok
// SIG undefined FUN_148084a1c(void)

void FUN_148084a1c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_148084ac2(param_1 + 0x50);
  if (*(ulonglong *)(param_1 + 0x38) != 0 && (*(ulonglong *)(param_1 + 0x38) & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_140038ae8(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148084aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148084ac2 FUN_148084ac2 body=52 status=ok
// SIG undefined FUN_148084ac2(void)

void FUN_148084ac2(longlong *param_1)

{
  FUN_148084af6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148084af6 FUN_148084af6 body=312 status=ok
// SIG undefined FUN_148084af6(void)

void FUN_148084af6(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 148084c30 FUN_148084c30 body=41 status=ok
// SIG undefined FUN_148084c30(void)

void FUN_148084c30(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140564134();
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 148084c5a FUN_148084c5a body=322 status=ok
// SIG undefined FUN_148084c5a(void)

void FUN_148084c5a(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 148084d9e FUN_148084d9e body=284 status=ok
// SIG undefined FUN_148084d9e(void)

void FUN_148084d9e(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148084ebc FUN_148084ebc body=133 status=ok
// SIG undefined FUN_148084ebc(void)

longlong FUN_148084ebc(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148084f42();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_148084ef5;
  }
  local_30 = param_3;
  FUN_148084fc8(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_148084ef5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148084f42 FUN_148084f42 body=134 status=ok
// SIG undefined FUN_148084f42(void)

int FUN_148084f42(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Buf2;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar2 = *(int *)(param_3 + 1);
      _Buf2 = (void *)*param_3;
      do {
        lVar6 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar3 + 8 + lVar6) == iVar2) {
          if (iVar2 == 0) {
            return iVar1;
          }
          iVar4 = memcmp(*(void **)(lVar3 + lVar6),_Buf2,(longlong)iVar2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(lVar3 + 0x18 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148084fc8 FUN_148084fc8 body=333 status=ok
// SIG undefined FUN_148084fc8(void)

undefined4 * FUN_148084fc8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148085116(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = 0;
  iVar5 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_40 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1447a127e(local_40,iVar5,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar5);
  }
  *(undefined4 *)(local_40 + 2) = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_1480851fc(param_1,param_3,local_40);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1480852e0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148085116 FUN_148085116 body=229 status=ok
// SIG undefined FUN_148085116(void)

int * FUN_148085116(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 1480851fc FUN_1480851fc body=114 status=ok
// SIG undefined FUN_1480851fc(void)

undefined8 FUN_1480851fc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_148084f42(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14808526e(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14808526e FUN_14808526e body=114 status=ok
// SIG undefined FUN_14808526e(void)

void FUN_14808526e(longlong *param_1,int param_2)

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



// FUNCTION 1480852e0 FUN_1480852e0 body=444 status=ok
// SIG undefined FUN_1480852e0(void)

void FUN_1480852e0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1480423fa(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14808549e FUN_14808549e body=93 status=ok
// SIG undefined FUN_14808549e(void)

longlong FUN_14808549e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1480854fc(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1480854fc FUN_1480854fc body=388 status=ok
// SIG undefined FUN_1480854fc(void)

longlong * FUN_1480854fc(longlong *param_1,longlong *param_2)

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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148085682 FUN_148085682 body=70 status=ok
// SIG undefined FUN_148085682(void)

void FUN_148085682(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_148084ac2(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 8) == 0 || (*(ulonglong *)(param_1 + 8) & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1480856c8 FUN_1480856c8 body=81 status=ok
// SIG undefined FUN_1480856c8(void)

void FUN_1480856c8(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x8c) < param_2) {
    FUN_148085764(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_14808571a(lVar1,*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 14808571a FUN_14808571a body=73 status=ok
// SIG undefined FUN_14808571a(void)

void FUN_14808571a(longlong param_1,int param_2)

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



// FUNCTION 148085764 FUN_148085764 body=77 status=ok
// SIG undefined FUN_148085764(void)

void FUN_148085764(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_14808571a(lVar1,*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) == param_2) {
    return;
  }
  FUN_1480857b2(param_1,param_2);
  return;
}



// FUNCTION 1480857b2 FUN_1480857b2 body=103 status=ok
// SIG undefined FUN_1480857b2(void)

void FUN_1480857b2(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar3;
    FUN_14808581a(param_1,*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 14808581a FUN_14808581a body=141 status=ok
// SIG undefined FUN_14808581a(void)

void FUN_14808581a(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 1480858a8 FUN_1480858a8 body=119 status=ok
// SIG undefined FUN_1480858a8(void)

void FUN_1480858a8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14808581a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148085920 FUN_148085920 body=200 status=ok
// SIG undefined FUN_148085920(void)

void FUN_148085920(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1480859e8(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_148084ac2(param_1 + 0x48);
  if (*(ulonglong *)(param_1 + 0x30) != 0 && (*(ulonglong *)(param_1 + 0x30) & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_140038ae8(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001480859d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1480859e8 FUN_1480859e8 body=30 status=ok
// SIG undefined FUN_1480859e8(void)

void FUN_1480859e8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + lVar3 * 8);
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 148085a06 FUN_148085a06 body=61 status=ok
// SIG undefined FUN_148085a06(void)

void FUN_148085a06(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148085ab6 FUN_148085ab6 body=59 status=ok
// SIG undefined FUN_148085ab6(void)

undefined8 FUN_148085ab6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148085b8c FUN_148085b8c body=54 status=ok
// SIG undefined FUN_148085b8c(void)

undefined1 FUN_148085b8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148085ca4(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148085bea FUN_148085bea body=59 status=ok
// SIG undefined FUN_148085bea(void)

undefined8 FUN_148085bea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


