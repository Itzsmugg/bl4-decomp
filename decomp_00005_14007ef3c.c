// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14007ef3c FUN_14007ef3c body=110 status=ok
// SIG undefined FUN_14007ef3c(void)

void FUN_14007ef3c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)((longlong)param_2 * 0x60 + *param_1 + 0x50);
    iVar1 = param_3;
    do {
      *puVar2 = 0;
      if (*(longlong *)(puVar2 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14007efaa(puVar2 + -0x12);
      puVar2 = puVar2 + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14007efe2(param_1,param_2,param_3);
  return;
}



// FUNCTION 14007efaa FUN_14007efaa body=55 status=ok
// SIG undefined FUN_14007efaa(void)

void FUN_14007efaa(longlong *param_1)

{
  FUN_14007f072(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14007efe2 FUN_14007efe2 body=144 status=ok
// SIG undefined FUN_14007efe2(void)

void FUN_14007efe2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14007f072 FUN_14007f072 body=546 status=ok
// SIG undefined FUN_14007f072(void)

void FUN_14007f072(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar16 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_14007f0a7;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar15 = (longlong)iVar9;
      uVar6 = puVar10[lVar15] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar15 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) goto LAB_14007f0a7;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_14007f0a7:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar6 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14007f294 FUN_14007f294 body=61 status=ok
// SIG undefined FUN_14007f294(void)

void FUN_14007f294(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_140493688(param_1 + 8,param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_140f9f218(param_1 + 0x48,param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 14007f2db FUN_14007f2db body=62 status=ok
// SIG undefined FUN_14007f2db(void)

void FUN_14007f2db(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
        *plVar1 = 0;
        *(undefined4 *)(plVar1 + 1) = 0;
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14007f31a FUN_14007f31a body=192 status=ok
// SIG undefined FUN_14007f31a(void)

void FUN_14007f31a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar2);
    }
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  FUN_1449079f2(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014007f3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14007f3da FUN_14007f3da body=90 status=ok
// SIG undefined FUN_14007f3da(void)

void FUN_14007f3da(undefined8 param_1,longlong param_2,int param_3)

{
  *(undefined8 *)(param_2 + 0xb0) = DAT_14ca94db0;
  *(undefined4 *)(param_2 + 0xb8) = 0;
  *(undefined8 **)(param_2 + 0x88) = &DAT_14ca94d98;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined1 *)(param_2 + 0x94) = 0;
  *(char *)(param_2 + 0x95) = (param_3 == 0) << 2;
  *(undefined1 *)(param_2 + 0x96) = 8;
  *(byte *)(param_2 + 0x97) = (param_3 == 0) * '\x02' | 4;
  return;
}



// FUNCTION 14007f434 FUN_14007f434 body=1903 status=ok
// SIG undefined FUN_14007f434(void)

void FUN_14007f434(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort uVar16;
  byte bVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined4 local_134;
  longlong *local_130;
  ulonglong local_128;
  int local_120;
  ushort uStack_11c;
  byte bStack_11a;
  undefined1 uStack_119;
  undefined4 local_118;
  uint uStack_114;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar14 = (uint)*(byte *)((longlong)param_1 + 0xc);
  if (*(byte *)((longlong)param_1 + 0xc) == 5) {
    uVar14 = DAT_14c760db4;
  }
  bVar17 = DAT_14ca96500;
  if (uVar14 != 1) {
    if ((int)uVar14 < 3) {
      bVar17 = 0;
    }
    else {
      lVar9 = (ulonglong)DAT_14ca85550 * 0x3c;
      bVar17 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar9) != DAT_14ca81490) &&
         (bVar17 = 0, DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) == 0) {
          bVar17 = 1;
        }
        else {
          bVar17 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar9 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  lVar9 = (**(code **)(*param_1 + 0x30))(param_1);
  uVar13 = 0;
  if ((1 < (int)uVar14) && ((*(uint *)(lVar9 + 0x28) & 0x4000) != 0)) {
    uVar13 = (undefined4)
             (((ulonglong)
               *(byte *)((longlong)&DAT_14ca814d0 +
                        (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)uVar14 * 2) * 0x3c + 6) &
              0xffffffffffffff10) >> 4);
  }
  if (param_1[0x26] != param_1[0x28]) {
    local_50 = 0x1100000000;
    uStack_119 = 0;
    bVar2 = *(byte *)((longlong)param_1 + 0x13d);
    local_120 = (int)param_1[0x27];
    bStack_11a = *(byte *)((longlong)param_1 + 0x13f);
    uVar7 = (ushort)bStack_11a;
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x13c);
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x13e);
    local_134 = uVar13;
    local_130 = param_1 + 0x26;
    local_128 = param_1[0x26];
    uStack_11c = (ushort)bVar2;
    local_d8._0_1_ = FUN_1400e128e(param_1 + 0x14,&local_128);
    local_d8._3_1_ = 0;
    local_50 = CONCAT44(local_50._4_4_,1);
    local_158 = (undefined8 *)CONCAT71(local_158._1_7_,1);
    local_d8._1_1_ = uVar3;
    local_d8._2_1_ = uVar4;
    local_d8._4_2_ = (ushort)bVar2;
    local_d8._6_2_ = uVar7 & 1;
    FUN_1447f936a(param_1,1,&local_d8,1);
    FUN_1447f9616(param_1,&local_d8,1);
    local_50 = 0x1100000000;
    uStack_119 = 0;
    local_128 = param_1[0x26];
    uVar16 = (ushort)*(byte *)((longlong)param_1 + 0x13d);
    local_120 = (int)param_1[0x27];
    bStack_11a = *(byte *)((longlong)param_1 + 0x13f);
    uVar7 = (ushort)bStack_11a;
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x13c);
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x13e);
    uStack_11c = uVar16;
    local_d8._0_1_ = FUN_1400e11ce(param_1 + 0x1a,&local_128);
    local_d8._3_1_ = 0;
    local_50._0_4_ = 1;
    local_d8._1_1_ = uVar3;
    local_d8._2_1_ = uVar4;
    local_d8._4_2_ = uVar16;
    local_d8._6_2_ = uVar7 & 1;
    if (param_1[0x2a] != 0) {
      uStack_119 = 0;
      uStack_11c = (ushort)*(byte *)((longlong)param_1 + 0x15d);
      uVar15 = (ulonglong)uStack_11c;
      local_120 = (int)param_1[0x2b];
      bStack_11a = *(byte *)((longlong)param_1 + 0x15f);
      uVar18 = (uint)bStack_11a;
      bVar2 = *(byte *)((longlong)param_1 + 0x15e);
      bVar5 = *(byte *)((longlong)param_1 + 0x15c);
      local_128 = param_1[0x2a];
      uVar8 = FUN_1400e11ce(param_1 + 0x1a);
      uVar14 = (uint)local_50;
      lVar9 = (longlong)(int)(uint)local_50;
      local_50._0_4_ = (uint)local_50 + 1;
      if (local_50._4_4_ < (uint)local_50) {
        FUN_14738ac8a(&local_d8,uVar14);
      }
      (&local_d8)[lVar9] =
           (ulonglong)uVar8 & 0xff |
           (ulonglong)bVar5 << 8 |
           (ulonglong)bVar2 << 0x10 | uVar15 << 0x20 | (ulonglong)(uVar18 & 1) << 0x30 | 0x2000000;
    }
    local_158 = (undefined8 *)CONCAT71(local_158._1_7_,1);
    FUN_1447f936a(param_1,2,&local_d8,1);
    FUN_1447f9616(param_1,&local_d8,2);
  }
  local_50 = 0x1100000000;
  local_148 = param_1 + 0x43;
  local_150 = param_1 + 2;
  local_158 = &local_d8;
  FUN_1417de79c();
  local_158 = (undefined8 *)CONCAT71(local_158._1_7_,0xd);
  FUN_1447f936a(param_1,0,&local_d8,0xd);
  FUN_1447f9616(param_1,&local_d8,0);
  uVar14 = *(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 4);
  if ((~bVar17 & (uVar14 >> 0x14 & 1) == 0) != 0) goto LAB_14007f9b0;
  uStack_114 = (uint)*(byte *)((longlong)param_1 + 0x1ee);
  if ((uVar14 >> 0x14 & 1) == 0) {
    lStack_108 = DAT_14ca94db0;
    local_100 = DAT_14ca94db0;
    lStack_f8 = DAT_14ca94db0;
    local_110 = DAT_14ca94db0;
    uVar13 = 0;
LAB_14007f87f:
    local_f0 = DAT_14ca94db0;
  }
  else {
    local_100 = param_1[0x40];
    if (param_1[0x40] == 0) {
      local_100 = DAT_14ca94db0;
    }
    lStack_108 = param_1[0x39];
    lStack_f8 = param_1[0x3a];
    local_110 = param_1[0x3b];
    local_f0 = param_1[0x3c];
    uVar13 = (undefined4)param_1[0x3d];
    if (local_f0 == 0) goto LAB_14007f87f;
  }
  local_120 = (int)*(char *)((longlong)param_1 + 0x1ec);
  local_128 = (ulonglong)CONCAT14(*(undefined1 *)((longlong)param_1 + 0x1ed),uVar13);
  uStack_11c = 0;
  bStack_11a = 0;
  uStack_119 = 0;
  local_118 = 0;
  FUN_1403fdc5c(&local_e0,&local_128,2,1);
  plVar12 = param_1 + 0x41;
  if (plVar12 != &local_e0) {
    lVar9 = *plVar12;
    *plVar12 = local_e0;
    local_e0 = 0;
    if (lVar9 == 0) goto LAB_14007f9b0;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar17 = *(byte *)(lVar9 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar9;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar17 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar19 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar19) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar19 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar19) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  lVar9 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_e0 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_e0 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar17 = *(byte *)(local_e0 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar9;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar17 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar19 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar19) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar19 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar19) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
LAB_14007f9b0:
  local_128 = CONCAT44(local_128._4_4_,0xffffffff);
  local_120 = (int)DAT_14ca8c0b0;
  uStack_11c = (ushort)((ulonglong)DAT_14ca8c0b0 >> 0x20);
  bStack_11a = (byte)((ulonglong)DAT_14ca8c0b0 >> 0x30);
  uStack_119 = (undefined1)((ulonglong)DAT_14ca8c0b0 >> 0x38);
  uStack_114 = (uint)((ulonglong)DAT_14ca8c0b0 >> 0x20);
  local_110 = DAT_14ca8c0b0;
  local_118 = local_120;
  FUN_1435668d0();
  local_150 = (longlong *)CONCAT44(local_150._4_4_,1);
  local_158 = (undefined8 *)CONCAT44(local_158._4_4_,2);
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_e0,&local_128,DAT_14cae97b8);
  lVar9 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
    if (local_e0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_e0 + 8);
      uVar14 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar14 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_e0 + 8);
        LOCK();
        uVar14 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar14 >> 0x1e & 1) == 0) {
          bVar17 = *(byte *)(local_e0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar17 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar19 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar19) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar19 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar19) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  lVar6 = param_1[0x42];
  param_1[0x42] = lVar9;
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar17 = *(byte *)(lVar6 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar6;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar17 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar19 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar19) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar19 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar19) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14007fbbc FUN_14007fbbc body=138 status=ok
// SIG undefined FUN_14007fbbc(void)

void FUN_14007fbbc(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (**(code **)(*param_1 + 0x2a0))(param_1,0);
  fVar2 = (float)(int)param_1[8];
  *(float *)(param_1 + 6) = fVar2;
  *(float *)((longlong)param_1 + 0x34) = (float)*(int *)((longlong)param_1 + 0x44);
  lVar1 = param_1[0x5c];
  if (lVar1 != 0) {
    fVar3 = 1.0;
    fVar4 = 1.0;
    if (*(char *)(lVar1 + 0xa0) == '\0') {
      fVar4 = *(float *)(lVar1 + 0xb0);
    }
    *(float *)(param_1 + 6) = fVar2 / fVar4;
    if (*(char *)(lVar1 + 0xa0) == '\0') {
      fVar3 = *(float *)(lVar1 + 0xb0);
    }
    *(float *)((longlong)param_1 + 0x34) = (float)*(int *)((longlong)param_1 + 0x44) / fVar3;
    *(longlong *)(lVar1 + 0xa4) = param_1[8];
  }
  return;
}



// FUNCTION 14007fc46 FUN_14007fc46 body=161 status=ok
// SIG undefined FUN_14007fc46(void)

void FUN_14007fc46(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    lVar1 = plVar2[0x22];
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
      plVar2 = *(longlong **)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
    lVar1 = plVar2[0x22];
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x2c);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  lVar1 = plVar2[0x22];
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar1 = plVar2[0x22];
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf8;
  return;
}



// FUNCTION 14007fcfa FUN_14007fcfa body=35 status=ok
// SIG undefined FUN_14007fcfa(void)

void FUN_14007fcfa(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014007fd1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0x100))
            (DAT_14ca83900,&DAT_14ca85100,
             *(undefined8 *)(param_1 + 0x18 + (ulonglong)*(uint *)(param_1 + 0x14) * 8));
  return;
}



// FUNCTION 14007fd1e FUN_14007fd1e body=141 status=ok
// SIG undefined FUN_14007fd1e(void)

void FUN_14007fd1e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  
  if ((DAT_14ca84d98 != '\x01') && (DAT_14c842750 == '\x01')) {
    cVar1 = FUN_1431eb928();
    (**(code **)(*DAT_14ca83900 + 0xf0))(DAT_14ca83900,param_3);
    if (param_2 != 0 && cVar1 == '\x01') {
      LOCK();
      DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
      UNLOCK();
      if (DAT_14ca84aa8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014007fd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
        return;
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014007fd9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0xf0))(DAT_14ca83900,param_3);
  return;
}



// FUNCTION 14007fdac FUN_14007fdac body=688 status=ok
// SIG undefined FUN_14007fdac(void)

void FUN_14007fdac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x590) = 0;
  if (*(int *)(param_1 + 0x594) != 0) {
    FUN_147cd4a2c(param_1 + 0x588);
  }
  FUN_1400802d6(param_1 + 0x588,
                *(undefined4 *)(param_1 + 0x4b4 + (ulonglong)*(byte *)(param_1 + 0x580) * 4));
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  if (*(int *)(param_1 + 0x5a4) != 0) {
    FUN_147cd4a5c(param_1 + 0x598);
  }
  FUN_1456c33dc(param_1 + 0x598,*(undefined4 *)(param_1 + 0x3ac));
  FUN_14008005c(*(undefined8 *)(param_1 + 0x5a8),*(undefined4 *)(param_1 + 0x5b0));
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_147cd4b28(param_1 + 0x5a8);
  }
  FUN_1456c3646(param_1 + 0x5a8,*(undefined4 *)(param_1 + 0x3ac));
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  if (*(int *)(param_1 + 0x5c4) != 0) {
    FUN_14480809c(param_1 + 0x5b8,0);
  }
  FUN_14478085e(param_1 + 0x5b8,*(undefined4 *)(param_1 + 0x3ac),1);
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (*(int *)(param_1 + 0x5d4) != 0) {
    FUN_14480809c(param_1 + 0x5c8,0);
  }
  FUN_14478085e(param_1 + 0x5c8,*(undefined4 *)(param_1 + 0x3ac),1);
  if (*(int *)(param_1 + 0x3ac) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    do {
      *(uint *)(*(longlong *)(param_1 + 0x5b8) + (longlong)(int)uVar3 * 4) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x5c8) + (longlong)(int)uVar3 * 4) = uVar3;
      uVar3 = uVar3 + 1;
      uVar4 = *(uint *)(param_1 + 0x3ac);
    } while (uVar3 < uVar4);
  }
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  if (*(int *)(param_1 + 0x5e4) != 0) {
    FUN_147cd4c6c(param_1 + 0x5d8,uVar4);
    uVar4 = *(uint *)(param_1 + 0x3ac);
  }
  FUN_1456c344a(param_1 + 0x5d8,uVar4);
  iVar1 = *(int *)(param_1 + 0x5f0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x5e8);
    lVar5 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(lVar2 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x5f0) = 0;
  if (*(int *)(param_1 + 0x5f4) != 0) {
    FUN_147cd4d4a(param_1 + 0x5e8);
  }
  FUN_1456c3556(param_1 + 0x5e8,*(undefined4 *)(param_1 + 0x3ac));
  FUN_1456c339c(param_1 + 0x5f8);
  FUN_14008008d(*(undefined8 *)(param_1 + 0x668),*(undefined4 *)(param_1 + 0x670));
  *(undefined4 *)(param_1 + 0x670) = 0;
  if (*(int *)(param_1 + 0x674) != 0) {
    FUN_1463fcd12(param_1 + 0x668);
  }
  FUN_1456c35cc(param_1 + 0x668,*(undefined4 *)(param_1 + 0x3bc));
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_1400800e2(param_1 + 0x460,0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 4) = 0;
  return;
}



// FUNCTION 14008005c FUN_14008005c body=49 status=ok
// SIG undefined FUN_14008005c(void)

void FUN_14008005c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14008008d FUN_14008008d body=85 status=ok
// SIG undefined FUN_14008008d(void)

void FUN_14008008d(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
      lVar2 = plVar3[-1];
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_144716208(lVar2);
          FUN_1400020a8(lVar2);
        }
      }
      plVar3 = plVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400800e2 FUN_1400800e2 body=107 status=ok
// SIG undefined FUN_1400800e2(void)

void FUN_1400800e2(longlong param_1,uint param_2)

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
LAB_140080131:
      FUN_140201afa(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14499e768(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140080131;
  FUN_14008014e(param_1);
  FUN_140201afa(param_1,param_2);
  return;
}



// FUNCTION 14008014e FUN_14008014e body=335 status=ok
// SIG undefined FUN_14008014e(void)

void FUN_14008014e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14008029e FUN_14008029e body=31 status=ok
// SIG undefined FUN_14008029e(void)

void FUN_14008029e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1400802bd FUN_1400802bd body=24 status=ok
// SIG undefined FUN_1400802bd(void)

void FUN_1400802bd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined1 *)(param_1 + 1) = 0xff;
    *param_1 = 0xffffffffffffffff;
    param_1 = (undefined8 *)((longlong)param_1 + 0xc);
  }
  return;
}



// FUNCTION 1400802d6 FUN_1400802d6 body=141 status=ok
// SIG undefined FUN_1400802d6(void)

void FUN_1400802d6(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140080364(param_1,iVar1);
    }
    lVar2 = *param_1;
    if (param_2 != iVar1) {
      lVar3 = 0;
      do {
        *(undefined8 *)((longlong)iVar1 * 8 + lVar2 + lVar3 * 8) = 0xffffffff00000000;
        lVar3 = lVar3 + 1;
      } while (param_2 - iVar1 != (uint)lVar3);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1456c34ba(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140080364 FUN_140080364 body=353 status=ok
// SIG undefined FUN_140080364(void)

void FUN_140080364(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400803eb;
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
LAB_1400803eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1400804c6 FUN_1400804c6 body=106 status=ok
// SIG undefined FUN_1400804c6(void)

void FUN_1400804c6(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
    *param_1 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
      UNLOCK();
    }
    param_1[1] = 0;
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0xffffffff;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140080530 FUN_140080530 body=39 status=ok
// SIG undefined FUN_140080530(void)

void FUN_140080530(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x4c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x1000000000;
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140080558 FUN_140080558 body=1041 status=ok
// SIG undefined FUN_140080558(void)

ulonglong FUN_140080558(longlong *param_1,byte param_2)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  DWORD DVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  LARGE_INTEGER LVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  longlong *local_d8;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_e2 = param_2;
  local_d8 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar8 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar15) {
      DVar8 = DAT_14c7585d0;
      DVar7 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar7;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar8;
    }
  }
  plVar6 = local_d8;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_c8 = -0x8000000000000000;
  LVar9.QuadPart = *plVar6;
  if (local_e2 == 0) {
    LVar2.QuadPart = *plVar6;
    uVar12 = (ulonglong)*(uint *)(LVar2.QuadPart + 0x34);
    LVar9.QuadPart = LVar2.QuadPart;
    if (*(int *)(LVar2.QuadPart + 0x20) + 2 <= (int)*(uint *)(LVar2.QuadPart + 0x34)) {
      LOCK();
      piVar1 = (int *)(LVar2.QuadPart + 0x28);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LVar9.QuadPart = *plVar6;
      if ((iVar10 != -1) && (iVar10 < *(int *)(LVar2.QuadPart + 0x60))) {
        if ((undefined8 *)LVar9.QuadPart != (undefined8 *)0x0) {
          LOCK();
          *(int *)(LVar9.QuadPart + 8) = *(int *)(LVar9.QuadPart + 8) + 1;
          UNLOCK();
        }
        local_88.QuadPart = LVar9.QuadPart;
        FUN_1449921ae(&local_88,iVar10,1);
        if ((undefined8 *)local_88.QuadPart != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_88.QuadPart + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)**(undefined8 **)local_88)(local_88.QuadPart,1);
          }
        }
        LVar9.QuadPart = *plVar6;
      }
    }
    if ('\x02' < *(char *)(LVar9.QuadPart + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c8 = (longlong)auVar18._0_8_;
      iVar10 = 0;
      if (0 < DAT_14c7585cc) {
        iVar10 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar10 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_e0 = (longlong)auVar18._0_8_;
      LVar9.QuadPart = *plVar6;
      bVar15 = true;
      goto LAB_14008072a;
    }
  }
  else {
    uVar12 = (ulonglong)*(uint *)(LVar9.QuadPart + 0x34);
  }
  bVar15 = false;
  local_e0 = 0;
LAB_14008072a:
  iVar10 = *(int *)(LVar9.QuadPart + 0x2c);
  local_b8 = (ulonglong)*(uint *)(LVar9.QuadPart + 0x30);
  puVar3 = *(undefined8 **)(LVar9.QuadPart + 0x40);
  local_cc = (int)uVar12 + -1;
  local_e1 = local_e2 ^ 1;
  local_c0 = uVar12;
  do {
    LOCK();
    piVar1 = (int *)(LVar9.QuadPart + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c0 < iVar10) {
      bVar4 = local_cc <= iVar11;
      if (local_cc <= iVar11) {
        iVar11 = local_cc;
      }
      if ((local_e1 & bVar4) != 0) goto LAB_14008086e;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar5 = iVar10;
    if (iVar14 < iVar10) {
      iVar5 = iVar14;
    }
    iVar13 = iVar11;
    if (iVar11 < iVar5) {
      do {
        local_88.QuadPart._0_4_ = iVar13;
        (*(code *)*puVar3)(puVar3[1],&local_88);
        iVar13 = iVar13 + 1;
      } while (iVar5 != iVar13);
    }
    plVar6 = local_d8;
    if (iVar11 < iVar10) {
      LOCK();
      piVar1 = (int *)(*local_d8 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d8 + 0x48) + 0x10))();
        }
        goto LAB_140080870;
      }
    }
    if (iVar14 < iVar10 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_e0 < (longlong)auVar18._0_8_ - local_c8) {
        *(undefined1 *)((longlong)plVar6 + 0xc) = 1;
LAB_14008086e:
        uVar12 = 0;
LAB_140080870:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar10 <= iVar14) goto LAB_14008086e;
    LVar9.QuadPart = *plVar6;
  } while( true );
}



// FUNCTION 14008096a FUN_14008096a body=29 status=ok
// SIG undefined FUN_14008096a(void)

void FUN_14008096a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140080988 FUN_140080988 body=81 status=ok
// SIG undefined FUN_140080988(void)

undefined8 * FUN_140080988(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a391d20;
  FUN_1400809da(param_1 + 3);
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400809da FUN_1400809da body=99 status=ok
// SIG undefined FUN_1400809da(void)

void FUN_1400809da(longlong *param_1)

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



// FUNCTION 140080a3e FUN_140080a3e body=1074 status=ok
// SIG undefined FUN_140080a3e(void)

void FUN_140080a3e(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar11 = *(int *)(param_1 + 0xb8);
  if (0 < (longlong)iVar11) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    if (iVar11 != 1) {
      lVar13 = *plVar1;
      memset(local_348,0,0x2f0);
      local_350 = (longlong)iVar11 * 0x10 + lVar13 + -0x10;
      local_358 = lVar13;
      fVar24 = logf((float)iVar11);
      local_348[0] = (int)(longlong)(fVar24 + fVar24);
      plVar18 = &local_358;
      do {
        puVar8 = (undefined8 *)*plVar18;
        puVar16 = (undefined8 *)plVar18[1];
        iVar11 = (int)plVar18[2];
        iVar12 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar8) >> 4);
        puVar19 = puVar16;
        puVar20 = puVar8;
        if (iVar11 != 0) {
LAB_140080cb2:
          if (8 < (int)(iVar12 + 1U)) {
            uVar15 = (ulonglong)(iVar12 + 1U >> 1);
            uVar4 = puVar8[uVar15 * 2];
            uVar5 = (puVar8 + uVar15 * 2)[1];
            uVar6 = puVar8[1];
            puVar8[uVar15 * 2] = *puVar8;
            (puVar8 + uVar15 * 2)[1] = uVar6;
            *puVar8 = uVar4;
            puVar8[1] = uVar5;
            puVar14 = puVar16 + 2;
            puVar10 = puVar8;
            do {
              puVar7 = puVar10 + 2;
              puVar17 = puVar10 + 2;
              do {
                puVar10 = puVar17;
                puVar22 = puVar7;
                if (puVar16 < puVar10) break;
                puVar7 = puVar22 + 2;
                puVar17 = puVar10 + 2;
              } while (*(float *)(puVar10 + 1) < *(float *)(puVar8 + 1) ||
                       *(float *)(puVar10 + 1) == *(float *)(puVar8 + 1));
              puVar7 = puVar14 + -4;
              do {
                puVar17 = puVar14;
                puVar21 = puVar7;
                puVar14 = puVar17 + -2;
                if (puVar14 <= puVar8) break;
                puVar7 = puVar21 + -2;
              } while (*(float *)(puVar8 + 1) < *(float *)(puVar17 + -1) ||
                       *(float *)(puVar8 + 1) == *(float *)(puVar17 + -1));
              if (puVar14 < puVar10) goto LAB_140080d5b;
              uVar4 = *puVar10;
              uVar5 = puVar10[1];
              uVar6 = puVar17[-1];
              *puVar10 = *puVar14;
              puVar10[1] = uVar6;
              *puVar14 = uVar4;
              puVar17[-1] = uVar5;
            } while( true );
          }
          for (; puVar20 = puVar8, puVar19 = puVar8, puVar8 < puVar16; puVar16 = puVar16 + -2) {
            while (puVar14 = puVar20, puVar19 = puVar19 + 2, puVar19 <= puVar16) {
              puVar20 = puVar19;
              if (*(float *)(puVar19 + 1) < *(float *)(puVar14 + 1) ||
                  *(float *)(puVar19 + 1) == *(float *)(puVar14 + 1)) {
                puVar20 = puVar14;
              }
            }
            local_58 = *puVar14;
            uStack_50 = puVar14[1];
            uVar5 = local_58;
            uVar6 = uStack_50;
            uVar4 = puVar16[1];
            *puVar14 = *puVar16;
            puVar14[1] = uVar4;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)puVar16 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar16 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_50._4_4_;
            local_58 = uVar5;
            uStack_50 = uVar6;
          }
          goto LAB_140080e5f;
        }
LAB_140080c86:
        FUN_147d79860();
LAB_140080e5f:
        plVar18 = plVar18 + -3;
      } while (&local_358 <= plVar18);
    }
    lVar13 = *(longlong *)(param_1 + 0x58);
    if (lVar13 == 0) {
      lVar9 = 0;
      fVar24 = 0.0;
      iVar11 = 0;
    }
    else {
      fVar24 = 0.0;
      iVar11 = 0;
      lVar9 = 0;
      do {
        if (*(int *)(param_1 + 0xb8) <= iVar11) break;
        fVar2 = *(float *)(*plVar1 + 8 + (longlong)iVar11 * 0x10);
        fVar23 = *(float *)(*(longlong *)(lVar13 + 0x20) + 0x20) + fVar24;
        if (fVar23 <= fVar2) {
          lVar9 = lVar13;
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x20) + 0x18);
          fVar24 = fVar23;
        }
        else {
          lVar3 = *(longlong *)(*plVar1 + (longlong)iVar11 * 0x10);
          if (*(char *)(lVar3 + 0xb) != '\0') {
            *(undefined1 *)(lVar3 + 0xb) = 2;
            *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20) = fVar2 - fVar24;
            plVar18 = (longlong *)(param_1 + 0x58);
            if (lVar9 != 0) {
              plVar18 = (longlong *)(*(longlong *)(lVar9 + 0x20) + 0x18);
            }
            *plVar18 = lVar3;
            *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x18) = lVar13;
            *(float *)(*(longlong *)(lVar13 + 0x20) + 0x20) =
                 *(float *)(*(longlong *)(lVar13 + 0x20) + 0x20) -
                 *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20);
            fVar24 = fVar24 + *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20);
            lVar9 = lVar3;
          }
          iVar11 = iVar11 + 1;
        }
      } while (lVar13 != 0);
    }
    iVar12 = *(int *)(param_1 + 0xb8);
    if (iVar11 < iVar12) {
      lVar13 = (longlong)iVar11;
      uVar15 = lVar13 << 4 | 8;
      do {
        lVar3 = *(longlong *)(*plVar1 + -8 + uVar15);
        if (*(char *)(lVar3 + 0xb) != '\0') {
          fVar2 = *(float *)(*plVar1 + uVar15);
          *(undefined1 *)(lVar3 + 0xb) = 2;
          *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20) = fVar2 - fVar24;
          *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x18) = 0;
          plVar18 = (longlong *)(param_1 + 0x58);
          if (lVar9 != 0) {
            plVar18 = (longlong *)(*(longlong *)(lVar9 + 0x20) + 0x18);
          }
          *plVar18 = lVar3;
          fVar24 = fVar24 + *(float *)(*(longlong *)(lVar3 + 0x20) + 0x20);
          iVar12 = *(int *)(param_1 + 0xb8);
          lVar9 = lVar3;
        }
        lVar13 = lVar13 + 1;
        uVar15 = uVar15 + 0x10;
      } while (lVar13 < iVar12);
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) < 0) {
      FUN_147d79a34(plVar1,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140080d5b:
  local_58 = *puVar8;
  uStack_50 = puVar8[1];
  uVar5 = local_58;
  uVar6 = uStack_50;
  uVar4 = puVar17[-1];
  *puVar8 = *puVar14;
  puVar8[1] = uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar14 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar17 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar17 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar17 + -4) = uStack_50._4_4_;
  iVar11 = iVar11 + -1;
  puVar17 = puVar17 + -4;
  local_58 = uVar5;
  uStack_50 = uVar6;
  if ((longlong)puVar21 - (longlong)puVar20 < (longlong)puVar19 - (longlong)puVar22) {
    if (puVar10 < puVar16) {
      *plVar18 = (longlong)puVar10;
      plVar18[1] = (longlong)puVar16;
      *(int *)(plVar18 + 2) = iVar11;
      plVar18 = plVar18 + 3;
    }
    puVar22 = puVar8;
    if (puVar14 <= puVar8 + 2) goto LAB_140080e5f;
  }
  else {
    if (puVar8 + 2 < puVar14) {
      *plVar18 = (longlong)puVar8;
      plVar18[1] = (longlong)puVar17;
      *(int *)(plVar18 + 2) = iVar11;
      plVar18 = plVar18 + 3;
    }
    puVar8 = puVar10;
    puVar17 = puVar16;
    puVar21 = puVar16;
    if (puVar16 <= puVar10) goto LAB_140080e5f;
  }
  iVar12 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar22) >> 4);
  puVar16 = puVar17;
  puVar19 = puVar21;
  puVar20 = puVar22;
  if (iVar11 == 0) goto LAB_140080c86;
  goto LAB_140080cb2;
}



// FUNCTION 140080e72 FUN_140080e72 body=684 status=ok
// SIG undefined FUN_140080e72(void)

void FUN_140080e72(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(param_1 + 0x1b0) == param_2) ||
       (*(uint *)(param_1 + 0x1b0) = param_2, (int)param_2 < 0)) ||
      (*(int *)(param_1 + 0x1a8) <= (int)param_2)) ||
     (lVar2 = (ulonglong)param_2 * 0x78 + *(longlong *)(param_1 + 0x1a0), lVar2 == 0))
  goto LAB_140080f6a;
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x30) = lVar3;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 != 0 && (~bVar1 & 1) == 0) {
    FUN_1456cec3c(lVar3);
    bVar1 = DAT_14c950c29;
  }
  *(longlong *)(param_1 + 0x178) = lVar3;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 != 0 && (~bVar1 & 1) == 0) {
    FUN_1456cec3c(lVar3);
    bVar1 = DAT_14c950c29;
  }
  *(longlong *)(param_1 + 0x38) = lVar3;
  lVar2 = *(longlong *)(lVar2 + 0x18);
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  *(longlong *)(param_1 + 0x108) = lVar2;
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x200) != 0) {
      lVar2 = FUN_1456d2c7c(DAT_14cb0d2b0,param_1);
      if (*(longlong *)(param_1 + 0x38) != lVar2) {
        if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        *(longlong *)(param_1 + 0x38) = lVar2;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x108);
  }
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x200) == 0)) goto LAB_140080f6a;
  lVar2 = FUN_1456d2c7c(DAT_14cb0d2b0,param_1);
  if (lVar2 == 0) {
LAB_140081044:
    lVar2 = 0;
  }
  else {
    if (DAT_14cad5cd8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1414bb1f4;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c345a;
      local_48 = &LAB_147a5f179;
      local_50 = &LAB_145c3bbe3;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 0x10;
      local_78 = 0x15b0;
      FUN_14081cfa3(L"/Script/Engine",L"DemoNetDriver",&DAT_14cad5cd8,&DAT_147a5f178);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cad5cd8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad5cd8 + 0x38) * 8) != DAT_14cad5cd8 + 0x30)) goto LAB_140081044;
  }
  if (*(longlong *)(param_1 + 0x108) != lVar2) {
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x108) = lVar2;
  }
LAB_140080f6a:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140081130 FUN_140081130 body=101 status=ok
// SIG undefined FUN_140081130(void)

void FUN_140081130(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_140081195(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 140081195 FUN_140081195 body=64 status=ok
// SIG undefined FUN_140081195(void)

void FUN_140081195(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1400811d6(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1400811d6 FUN_1400811d6 body=149 status=ok
// SIG undefined FUN_1400811d6(void)

void FUN_1400811d6(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *param_1;
  uVar6 = (ulonglong)(int)param_1[1];
  puVar3 = *(undefined8 **)(*(longlong *)(lVar5 + 0x1a0) + uVar6 * 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    lVar5 = *param_1;
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  }
  FUN_144780d14(lVar5,uVar6);
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
    lVar4 = (longlong)(int)uVar2;
    if (*(char *)(lVar5 + 0x38) == '\0') {
      *(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + lVar4 * 8) + 8) = uVar2;
    }
    else {
      do {
        piVar1 = (int *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + lVar4 * 8) + 8);
        *piVar1 = *piVar1 + -1;
        lVar4 = lVar4 + 1;
        lVar5 = *param_1;
      } while ((uint)lVar4 < *(uint *)(lVar5 + 0x18));
    }
  }
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 7;
  return;
}



// FUNCTION 140081290 FUN_140081290 body=2081 status=ok
// SIG undefined FUN_140081290(void)

void FUN_140081290(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  DWORD DVar20;
  DWORD DVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  longlong local_88;
  
  if ((*(byte *)(param_1 + 0x675) & 2) == 0) {
    lVar27 = *(longlong *)(param_1 + 0x660);
    if ((lVar27 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar27);
      lVar27 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar27 == 0) {
      return;
    }
    if ((lVar27 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar27);
      lVar27 = *(longlong *)(param_1 + 0x660);
    }
    if (((DAT_14c950c29 & 1) != 0) && (lVar27 != 0)) {
      FUN_1456cec3c(lVar27);
    }
    cVar18 = FUN_140081ab2(lVar27,1,0xffffffff);
    if (cVar18 == '\0') {
      lVar27 = *(longlong *)(param_1 + 0x660);
      if ((lVar27 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar27);
      }
      if (*(longlong *)(lVar27 + 0xe0) == 0) {
        return;
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar27 + 0xe0) + 0x40) + 0x70) < 1) {
        return;
      }
    }
    if ((DAT_14c761404 == 0) || ((*(byte *)(param_1 + 0x2e8) & 2) == 0)) {
      lVar27 = 0;
      if (*(char *)(param_1 + 0x1fb) == '\0') {
        lVar27 = param_1 + 0x6b8;
      }
      FUN_144780dac(param_1,param_2,lVar27,*(undefined4 *)(param_1 + 0x6a0),param_3);
    }
    if (0 < *(int *)(param_1 + 0x6b0)) {
      lVar22 = 0;
      lVar27 = 0;
      do {
        plVar25 = (longlong *)FUN_1403fc0e6(param_1,*(longlong *)(param_1 + 0x6a8) + lVar22,1);
        if ((plVar25 == (longlong *)0x0) || ((longlong *)*plVar25 == (longlong *)0x0)) {
          local_88 = 0;
        }
        else {
          local_88 = (**(code **)(*(longlong *)*plVar25 + 0x30))();
        }
        lVar23 = DAT_14cb0d0e0;
        iVar19 = *(int *)(param_2 + 0x3c);
        if ((longlong)iVar19 < 2) {
LAB_1400815e1:
          bVar28 = false;
        }
        else {
          iVar2 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
            uVar24 = 0;
          }
          else if (iVar2 == 1) {
            DVar20 = FUN_140ad26c0();
            DVar21 = GetCurrentThreadId();
            uVar24 = (ulonglong)(DVar20 != DVar21);
          }
          else {
            uVar24 = 1;
          }
          if (*(int *)(lVar23 + uVar24 * 4) == 0) goto LAB_1400815e1;
          bVar28 = (&DAT_14ca814b8)
                   [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar19 * 2) * 0xf] != 1;
        }
        if (local_88 != 0) {
          cVar18 = FUN_147b9a792(local_88);
          if (cVar18 != '\0') {
            dVar3 = *(double *)(local_88 + 0xe0);
            uVar29 = SUB84(dVar3,0);
            uVar31 = (undefined4)((ulonglong)dVar3 >> 0x20);
            if (9.99999993922529e-09 < dVar3) {
              dVar3 = *(double *)(local_88 + 0xe8);
              uVar32 = SUB84(dVar3,0);
              uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
              if (9.99999993922529e-09 < dVar3) {
                lVar23 = *(longlong *)(param_1 + 0x660);
                if ((lVar23 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(lVar23);
                  uVar29 = (undefined4)*(undefined8 *)(local_88 + 0xe0);
                  uVar31 = (undefined4)((ulonglong)*(undefined8 *)(local_88 + 0xe0) >> 0x20);
                  uVar32 = (undefined4)*(undefined8 *)(local_88 + 0xe8);
                  uVar33 = (undefined4)((ulonglong)*(undefined8 *)(local_88 + 0xe8) >> 0x20);
                }
                fVar30 = *(float *)(lVar23 + 0x168);
                iVar19 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
                  FUN_144781dc0(param_3,iVar19);
                }
                lVar23 = *param_3;
                lVar26 = FUN_147b9a77e(local_88,bVar28 ^ 1);
                *(longlong *)(lVar23 + (longlong)iVar19 * 0x50) = lVar26;
                if ((lVar26 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(lVar26);
                }
                puVar1 = (undefined4 *)(param_1 + 0x160);
                if ((double)CONCAT44(uVar33,uVar32) <= (double)CONCAT44(uVar31,uVar29)) {
                  uVar29 = uVar32;
                  uVar31 = uVar33;
                }
                fVar30 = (float)((double)fVar30 / (double)CONCAT44(uVar31,uVar29));
                lVar23 = lVar23 + (longlong)iVar19 * 0x50;
                *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(param_1 + 400);
                uVar29 = *puVar1;
                uVar31 = *(undefined4 *)(param_1 + 0x164);
                uVar32 = *(undefined4 *)(param_1 + 0x168);
                uVar33 = *(undefined4 *)(param_1 + 0x16c);
                uVar4 = *(undefined4 *)(param_1 + 0x170);
                uVar5 = *(undefined4 *)(param_1 + 0x174);
                uVar6 = *(undefined4 *)(param_1 + 0x178);
                uVar7 = *(undefined4 *)(param_1 + 0x17c);
                uVar8 = *(undefined4 *)(param_1 + 0x184);
                uVar9 = *(undefined4 *)(param_1 + 0x188);
                uVar10 = *(undefined4 *)(param_1 + 0x18c);
                *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)(param_1 + 0x180);
                *(undefined4 *)(lVar23 + 0x2c) = uVar8;
                *(undefined4 *)(lVar23 + 0x30) = uVar9;
                *(undefined4 *)(lVar23 + 0x34) = uVar10;
                *(undefined4 *)(lVar23 + 0x18) = uVar4;
                *(undefined4 *)(lVar23 + 0x1c) = uVar5;
                *(undefined4 *)(lVar23 + 0x20) = uVar6;
                *(undefined4 *)(lVar23 + 0x24) = uVar7;
                *(undefined4 *)(lVar23 + 8) = uVar29;
                *(undefined4 *)(lVar23 + 0xc) = uVar31;
                *(undefined4 *)(lVar23 + 0x10) = uVar32;
                *(undefined4 *)(lVar23 + 0x14) = uVar33;
                *(float *)(lVar23 + 0x40) = fVar30;
                *(undefined4 *)(lVar23 + 0x44) = 0xffff0000;
                *(uint *)(lVar23 + 0x48) = *(uint *)(lVar23 + 0x48) & 0xfffffffc | 2;
                iVar19 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
                  FUN_144781dc0(param_3,iVar19);
                }
                lVar23 = *param_3;
                lVar26 = FUN_147b9a78c(local_88);
                *(longlong *)(lVar23 + (longlong)iVar19 * 0x50) = lVar26;
                if ((lVar26 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(lVar26);
                }
                lVar23 = lVar23 + (longlong)iVar19 * 0x50;
                *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(param_1 + 400);
                uVar29 = *puVar1;
                uVar31 = *(undefined4 *)(param_1 + 0x164);
                uVar32 = *(undefined4 *)(param_1 + 0x168);
                uVar33 = *(undefined4 *)(param_1 + 0x16c);
                uVar4 = *(undefined4 *)(param_1 + 0x170);
                uVar5 = *(undefined4 *)(param_1 + 0x174);
                uVar6 = *(undefined4 *)(param_1 + 0x178);
                uVar7 = *(undefined4 *)(param_1 + 0x17c);
                uVar8 = *(undefined4 *)(param_1 + 0x184);
                uVar9 = *(undefined4 *)(param_1 + 0x188);
                uVar10 = *(undefined4 *)(param_1 + 0x18c);
                *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)(param_1 + 0x180);
                *(undefined4 *)(lVar23 + 0x2c) = uVar8;
                *(undefined4 *)(lVar23 + 0x30) = uVar9;
                *(undefined4 *)(lVar23 + 0x34) = uVar10;
                *(undefined4 *)(lVar23 + 0x18) = uVar4;
                *(undefined4 *)(lVar23 + 0x1c) = uVar5;
                *(undefined4 *)(lVar23 + 0x20) = uVar6;
                *(undefined4 *)(lVar23 + 0x24) = uVar7;
                *(undefined4 *)(lVar23 + 8) = uVar29;
                *(undefined4 *)(lVar23 + 0xc) = uVar31;
                *(undefined4 *)(lVar23 + 0x10) = uVar32;
                *(undefined4 *)(lVar23 + 0x14) = uVar33;
                *(float *)(lVar23 + 0x40) = fVar30;
                *(undefined4 *)(lVar23 + 0x44) = 0xffff0000;
                *(uint *)(lVar23 + 0x48) = *(uint *)(lVar23 + 0x48) & 0xfffffffc | 2;
                iVar19 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
                  FUN_144781dc0(param_3,iVar19);
                }
                lVar23 = *param_3;
                lVar26 = FUN_147b9a786(local_88);
                *(longlong *)(lVar23 + (longlong)iVar19 * 0x50) = lVar26;
                if ((lVar26 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(lVar26);
                }
                lVar23 = lVar23 + (longlong)iVar19 * 0x50;
                *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(param_1 + 400);
                uVar29 = *puVar1;
                uVar31 = *(undefined4 *)(param_1 + 0x164);
                uVar32 = *(undefined4 *)(param_1 + 0x168);
                uVar33 = *(undefined4 *)(param_1 + 0x16c);
                uVar12 = *(undefined8 *)(param_1 + 0x170);
                uVar13 = *(undefined8 *)(param_1 + 0x178);
                uVar14 = *(undefined8 *)(param_1 + 0x188);
                *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(param_1 + 0x180);
                *(undefined8 *)(lVar23 + 0x30) = uVar14;
                *(undefined8 *)(lVar23 + 0x18) = uVar12;
                *(undefined8 *)(lVar23 + 0x20) = uVar13;
                *(undefined4 *)(lVar23 + 8) = uVar29;
                *(undefined4 *)(lVar23 + 0xc) = uVar31;
                *(undefined4 *)(lVar23 + 0x10) = uVar32;
                *(undefined4 *)(lVar23 + 0x14) = uVar33;
                *(float *)(lVar23 + 0x40) = fVar30;
                *(undefined4 *)(lVar23 + 0x44) = 0xffff0000;
                *(uint *)(lVar23 + 0x48) = *(uint *)(lVar23 + 0x48) & 0xfffffffc | 2;
              }
            }
          }
        }
        if ((((plVar25 != (longlong *)0x0) && ((longlong *)plVar25[1] != (longlong *)0x0)) &&
            (lVar23 = (**(code **)(*(longlong *)plVar25[1] + 0x28))(), lVar23 != 0)) &&
           (*(longlong *)(lVar23 + 0x20) != 0)) {
          dVar3 = *(double *)(lVar23 + 0x28);
          uVar29 = SUB84(dVar3,0);
          uVar31 = (undefined4)((ulonglong)dVar3 >> 0x20);
          if (9.99999993922529e-09 < dVar3) {
            dVar3 = *(double *)(lVar23 + 0x30);
            uVar32 = SUB84(dVar3,0);
            uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
            if (9.99999993922529e-09 < dVar3) {
              lVar26 = *(longlong *)(param_1 + 0x660);
              if ((lVar26 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(lVar26);
                uVar29 = (undefined4)*(undefined8 *)(lVar23 + 0x28);
                uVar31 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x28) >> 0x20);
                uVar32 = (undefined4)*(undefined8 *)(lVar23 + 0x30);
                uVar33 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
              }
              fVar30 = *(float *)(lVar26 + 0x168);
              iVar19 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
                FUN_144781dc0(param_3,iVar19);
              }
              lVar26 = *param_3;
              lVar23 = FUN_147d115fc(lVar23);
              *(longlong *)(lVar26 + (longlong)iVar19 * 0x50) = lVar23;
              if ((lVar23 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar23);
              }
              if ((double)CONCAT44(uVar33,uVar32) <= (double)CONCAT44(uVar31,uVar29)) {
                uVar29 = uVar32;
                uVar31 = uVar33;
              }
              lVar26 = lVar26 + (longlong)iVar19 * 0x50;
              *(undefined8 *)(lVar26 + 0x38) = *(undefined8 *)(param_1 + 400);
              uVar12 = *(undefined8 *)(param_1 + 0x160);
              uVar13 = *(undefined8 *)(param_1 + 0x168);
              uVar14 = *(undefined8 *)(param_1 + 0x170);
              uVar15 = *(undefined8 *)(param_1 + 0x178);
              uVar16 = *(undefined8 *)(param_1 + 0x188);
              *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(param_1 + 0x180);
              *(undefined8 *)(lVar26 + 0x30) = uVar16;
              *(undefined8 *)(lVar26 + 0x18) = uVar14;
              *(undefined8 *)(lVar26 + 0x20) = uVar15;
              *(undefined8 *)(lVar26 + 8) = uVar12;
              *(undefined8 *)(lVar26 + 0x10) = uVar13;
              *(float *)(lVar26 + 0x40) = (float)((double)fVar30 / (double)CONCAT44(uVar31,uVar29));
              *(undefined4 *)(lVar26 + 0x44) = 0xffff0000;
              *(uint *)(lVar26 + 0x48) = *(uint *)(lVar26 + 0x48) & 0xfffffffc | 2;
            }
          }
        }
        lVar27 = lVar27 + 1;
        lVar22 = lVar22 + 0xa0;
      } while (lVar27 < *(int *)(param_1 + 0x6b0));
    }
    lVar27 = *(longlong *)(param_1 + 0x660);
    if ((lVar27 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar27);
    }
    if (((*(byte *)(lVar27 + 0xc0) & 1) != 0) &&
       (*(byte *)(lVar27 + 0xc1) < *(byte *)(lVar27 + 0xc3))) {
      lVar27 = *(longlong *)(param_1 + 0x660);
      if ((lVar27 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar27);
      }
      lVar22 = FUN_140083894();
      if (((*(longlong *)(lVar27 + 0xe0) == 0) || (*(longlong *)(lVar22 + 0x50) == 0)) ||
         (*(int *)(*(longlong *)(*(longlong *)(lVar27 + 0xe0) + 0x40) + 0x70) < 1)) {
        iVar19 = *(int *)(param_1 + 0x650);
        if (iVar19 < 1) {
          if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
            dVar3 = 0.0;
          }
          else {
            dVar3 = *(double *)(param_1 + 400) + *(double *)(param_1 + 400);
          }
        }
        else {
          lVar27 = *(longlong *)(param_1 + 0x660);
          if ((lVar27 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar27);
            iVar19 = *(int *)(param_1 + 0x650);
          }
          dVar3 = (double)(int)(~*(uint *)(*(longlong *)(lVar27 + 0xe0) + 8) + iVar19);
        }
        iVar19 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
          FUN_144781dc0(param_3,iVar19);
        }
        plVar25 = (longlong *)((longlong)iVar19 * 0x50 + *param_3);
        lVar27 = *(longlong *)(param_1 + 0x660);
        if ((lVar27 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar27);
        }
        bVar17 = DAT_14c950c29;
        *plVar25 = lVar27;
        if ((lVar27 != 0) && ((bVar17 & 1) != 0)) {
          FUN_1456cec3c(lVar27);
        }
        plVar25[7] = *(longlong *)(param_1 + 400);
        lVar27 = *(longlong *)(param_1 + 0x160);
        lVar22 = *(longlong *)(param_1 + 0x168);
        lVar23 = *(longlong *)(param_1 + 0x170);
        lVar26 = *(longlong *)(param_1 + 0x178);
        lVar11 = *(longlong *)(param_1 + 0x188);
        plVar25[5] = *(longlong *)(param_1 + 0x180);
        plVar25[6] = lVar11;
        plVar25[3] = lVar23;
        plVar25[4] = lVar26;
        plVar25[1] = lVar27;
        plVar25[2] = lVar22;
        *(float *)(plVar25 + 8) = (float)dVar3;
        *(undefined4 *)((longlong)plVar25 + 0x44) = 0xffff0000;
        *(uint *)(plVar25 + 9) = (*(uint *)(plVar25 + 9) & 0xfffffffc) + 1;
      }
    }
  }
  return;
}



// FUNCTION 140081ab2 FUN_140081ab2 body=172 status=ok
// SIG undefined FUN_140081ab2(void)

undefined8 FUN_140081ab2(longlong param_1,char param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if ((plVar1 == (longlong *)0x0) || ((int)plVar1[1] == 0)) {
    uVar3 = 0;
  }
  else {
    lVar4 = *plVar1;
    uVar3 = CONCAT71((int7)((ulonglong)plVar1 >> 8),lVar4 != 0);
    if ((lVar4 != 0) && (param_2 != '\0')) {
      if (param_3 == -1) {
        iVar6 = (int)plVar1[1] + -1;
        if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
          iVar2 = *(int *)(param_1 + 0x150);
        }
        else {
          uVar5 = 0;
          if (DAT_14c760db4 != 1) {
            uVar5 = DAT_14c761b9c;
          }
          if (DAT_14c761de0 == 0) {
            uVar5 = DAT_14c761b9c;
          }
          iVar2 = FUN_144b1da20(param_1 + 0xe8,uVar5);
          lVar4 = **(longlong **)(param_1 + 0xe0);
        }
        if (iVar2 < iVar6) {
          iVar6 = iVar2;
        }
        param_3 = 0;
        if (0 < iVar6) {
          param_3 = iVar6;
        }
      }
      lVar4 = *(longlong *)(lVar4 + (longlong)param_3 * 8);
      uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(int *)(lVar4 + 0x10c) != 0);
    }
  }
  return uVar3;
}



// FUNCTION 140081b5e FUN_140081b5e body=155 status=ok
// SIG undefined FUN_140081b5e(void)

void FUN_140081b5e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  if ((*param_1 == 0) || (*DAT_14cb0b138 == 0)) {
    param_1[2] = 0;
  }
  else {
    plVar3 = (longlong *)0x0;
    if (DAT_14c761bd0 != 0) {
      plVar3 = param_2;
    }
    if ((char)param_1[8] == '\0') {
      plVar3 = (longlong *)0x0;
    }
    param_1[2] = (longlong)plVar3;
    if (((param_2 != (longlong *)0x0) && (0 < (int)param_1[6])) &&
       (iVar5 = (int)param_2[1], 0 < iVar5)) {
      lVar6 = *param_2;
      lVar2 = 4;
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar6 + lVar2);
        if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_1[6])) {
          lVar6 = param_1[5];
          lVar7 = (longlong)iVar1 * 0x10;
          *(int *)(lVar6 + 4 + lVar7) = (int)lVar4;
          *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)((longlong)param_1 + 0xc);
          iVar5 = (int)param_2[1];
          lVar6 = *param_2;
        }
        lVar4 = lVar4 + 1;
        lVar2 = lVar2 + 0xc;
      } while (lVar4 < iVar5);
    }
  }
  return;
}



// FUNCTION 140081bf9 FUN_140081bf9 body=325 status=ok
// SIG undefined FUN_140081bf9(void)

longlong FUN_140081bf9(longlong *param_1,uint param_2)

{
  longlong lVar1;
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
  longlong local_28;
  int local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_28);
  if ((((int)param_2 < 0) || (local_20 <= (int)param_2)) ||
     (lVar1 = *(longlong *)(local_28 + (ulonglong)param_2 * 8), lVar1 == 0)) {
    if (DAT_14caf1ed4 == '\0') {
      DAT_14caf1ed4 = '\x01';
    }
  }
  else {
    if (DAT_14cb0b430 == 0) {
      local_40 = &local_18;
      local_18 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145892f94;
      local_48 = &LAB_147d6dbf3;
      local_50 = &LAB_1464081e0;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x138;
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) == DAT_14cb0b430 + 0x30)) goto LAB_140081c78;
  }
  lVar1 = 0;
LAB_140081c78:
  if ((local_10 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140081d40 FUN_140081d40 body=1158 status=ok
// SIG undefined FUN_140081d40(void)

longlong FUN_140081d40(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  longlong lStack_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_50;
  undefined2 *local_48;
  longlong lStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = 0;
  if (((DAT_14c868714 == '\x01') && (DAT_14c868883 != '\0')) || (*param_1 == 0)) {
    lVar7 = 0;
    goto LAB_14008219f;
  }
  if ((int)param_1[3] < 2) {
    FUN_14475cc44(param_1,&local_38);
    puVar9 = local_38;
    if ((int)uStack_30 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    if (DAT_14c927740 == 0) {
      local_90 = &local_78;
      local_78 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_146856450;
      local_a0 = FUN_1427b121c;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000021;
      local_c0 = CONCAT44(local_c0._4_4_,8);
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_b0 = 0;
    local_c0 = 0;
    local_b8 = CONCAT31(local_b8._1_3_,1);
    local_c8 = 0;
    lVar7 = FUN_1412ecd05(DAT_14c927740,0,puVar9,0);
    local_50 = lVar7;
    if (lVar7 != 0) goto LAB_140082165;
    if (DAT_14c75ecc4 == '\x01') {
      local_78 = (code *)*param_1;
      lStack_70 = param_1[1];
      local_68 = (void *)0x0;
      uVar2 = *(uint *)(param_1 + 3);
      _Src = (void *)param_1[2];
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
      if ((longlong)(int)uVar2 == 0) {
        uStack_60 = (ulonglong)uVar2;
      }
      else {
        FUN_1446dd670(&local_68,uVar2,0);
        memcpy(local_68,_Src,(longlong)(int)uVar2 * 2);
      }
      cVar3 = FUN_14475c82a(&local_78);
      if (cVar3 == '\0') {
        lVar7 = 0;
      }
      else {
        FUN_14475cc44(&local_78,&local_48);
        puVar9 = local_48;
        if ((int)lStack_40 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        if (DAT_14c927740 == 0) {
          local_90 = &local_28;
          local_28 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_146856450;
          local_a0 = FUN_1427b121c;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10000021;
          local_c0 = CONCAT44(local_c0._4_4_,8);
          local_c8 = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_b0 = 0;
        local_c0 = 0;
        local_b8 = CONCAT31(local_b8._1_3_,1);
        local_c8 = 0;
        lVar7 = FUN_1412ecd05(DAT_14c927740,0,puVar9,0);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x28)) {
LAB_140082165:
        lVar8 = FUN_140007dea();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_14008218d;
      }
    }
    lVar7 = 0;
LAB_14008218d:
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14008219f;
  }
  local_48 = (undefined2 *)*param_1;
  lStack_40 = param_1[1];
  local_78 = (code *)0x0;
  lStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1400b3bc2(&local_78);
  plVar6 = (longlong *)FUN_140081d40(&local_78,param_2);
  if (*param_1 == 0) {
LAB_140082100:
    local_50 = 0;
  }
  else {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1400820f3;
      }
    }
    else {
LAB_1400820f3:
      if (DAT_14c950c28 != '\0') goto LAB_140082100;
    }
    local_50 = FUN_1400078bc(param_1);
  }
  if (plVar6 != (longlong *)0x0 && local_50 == 0) {
    if ((int)param_1[3] == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)param_1[2];
    }
    (**(code **)(*plVar6 + 0x98))(plVar6,puVar9,&local_50,1);
  }
  lVar7 = local_50;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
    lVar7 = local_50;
  }
LAB_14008219f:
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1400821c8 FUN_1400821c8 body=96 status=ok
// SIG undefined FUN_1400821c8(void)

void FUN_1400821c8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 140082228 FUN_140082228 body=12 status=ok
// SIG undefined FUN_140082228(void)

void FUN_140082228(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140082231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140082234 FUN_140082234 body=87 status=ok
// SIG undefined FUN_140082234(void)

undefined8 * FUN_140082234(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14acb5300;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14008228c FUN_14008228c body=139 status=ok
// SIG undefined FUN_14008228c(void)

void FUN_14008228c(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (((DAT_14ca46a08 != 0) && (DAT_14ca469f8 != 0)) && (DAT_14ca46a0c == '\0')) {
    if (DAT_14ca46a08 == 2) {
      FUN_1447832fa(DAT_14ca46a00,DAT_14c7585d4);
      puVar2 = DAT_14ca46a00;
      if (DAT_14ca46a00 != (undefined8 *)0x0) {
        DAT_14ca46a00 = (undefined8 *)0x0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (DAT_14ca46a08 == 1) {
      FUN_1431eb898(param_1,&DAT_14ca850c8);
      FUN_142fea774(&DAT_14ca469f0);
    }
    DAT_14ca46a0c = '\x01';
  }
  return;
}



// FUNCTION 140082318 FUN_140082318 body=152 status=ok
// SIG undefined FUN_140082318(void)

void FUN_140082318(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  undefined8 local_30;
  LARGE_INTEGER local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    QueryPerformanceCounter(&local_28);
    local_20 = 0xffffffffffffffff;
    FUN_14002f804(param_1,&local_28,0);
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      cVar1 = FUN_1427918bc(param_1);
      if (cVar1 == '\0') {
        QueryPerformanceCounter(&local_38);
        local_30 = 0xffffffffffffffff;
        FUN_140056092(param_1,&local_38);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400823b2 FUN_1400823b2 body=1616 status=ok
// SIG undefined FUN_1400823b2(void)

void FUN_1400823b2(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  LPVOID pvVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_74;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar12 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar12 = param_2;
  }
  iVar19 = *(int *)(param_2 + 0x28);
  if ((longlong)iVar19 == 0) goto LAB_14008293e;
  bVar17 = 1;
  lVar20 = 0;
  local_74 = param_3;
  local_70 = param_2;
  local_68 = param_1;
  do {
    lVar3 = *(longlong *)(lVar12 + lVar20);
    if (lVar3 != 0) {
      QueryPerformanceCounter(&local_50);
      local_58 = 0xffffffffffffffff;
      FUN_14002f804(lVar3,local_60,0);
      bVar17 = bVar17 & *(byte *)(*(longlong *)(lVar12 + lVar20) + 0xa0);
    }
    lVar5 = local_68;
    lVar3 = local_70;
    uVar18 = local_74;
    lVar20 = lVar20 + 8;
  } while ((longlong)iVar19 * 8 != lVar20);
  if (bVar17 != 0) goto LAB_14008293e;
  uVar22 = local_74 & 0xff;
  if (uVar22 == 0xff) {
    pvVar8 = TlsGetValue(*(DWORD *)(local_68 + 0x18));
    if (pvVar8 == (LPVOID)0x0) {
      uVar13 = 0xff;
    }
    else {
      uVar13 = (int)((ulonglong)((longlong)pvVar8 - *(longlong *)(lVar5 + 0x30)) >> 3) * -0x55555555
      ;
      iVar19 = *(int *)(lVar5 + 0x1c);
      uVar22 = uVar13 & 0xff;
      uVar14 = 0xff;
      if ((int)uVar13 < iVar19) {
        uVar14 = uVar22;
      }
      uVar13 = 0xff;
      if (uVar14 != 0xff) {
        uVar18 = uVar18 & 0xe00 | uVar14;
        goto LAB_1400824d4;
      }
    }
  }
  else {
    iVar19 = *(int *)(local_68 + 0x1c);
LAB_1400824d4:
    uVar13 = uVar22;
    if ((int)uVar22 < iVar19) {
      uVar22 = uVar18 >> 8 & 1;
      uVar21 = (ulonglong)(uVar18 & 0xff);
      plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x30) + uVar21 * 0x18);
      cVar7 = (**(code **)(*plVar4 + 0x60))(plVar4,uVar22);
      if (cVar7 == '\0') {
        iVar19 = *(int *)(lVar3 + 0x28);
        if (iVar19 < 8) {
          if (0 < iVar19) {
            lVar12 = 0;
            do {
              lVar20 = *(longlong *)(lVar3 + 0x20);
              if (*(longlong *)(lVar3 + 0x20) == 0) {
                lVar20 = lVar3;
              }
              lVar20 = *(longlong *)(lVar20 + lVar12 * 8);
              if (lVar20 != 0) {
                if ((*(byte *)(lVar20 + 0xa0) & 1) == 0) goto LAB_140082643;
                iVar19 = *(int *)(lVar3 + 0x28);
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < iVar19);
          }
        }
        else {
LAB_140082643:
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar10 = (uint *)*puVar2;
          if (puVar10 != (uint *)0x0) goto LAB_1400826e3;
          while( true ) {
            uVar13 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar13 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar13 | 1;
              __tlregdtor(&LAB_142733bf0);
            }
            lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar9 = *(undefined4 **)(lVar12 + 0x310);
            *(undefined8 *)(lVar12 + 0x310) = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar9 = 0xffffffff;
            *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            FUN_140217a48(puVar2);
            puVar10 = (uint *)*puVar2;
LAB_1400826e3:
            puVar23 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar23 + 0x16);
            uVar13 = puVar10[0x12];
            if (puVar15 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar14 = *puVar10;
              *puVar10 = *puVar10 + uVar13 + 1;
              UNLOCK();
              if ((uVar14 ^ uVar13) != 0xffffffff) break;
              puVar10 = (uint *)*puVar2;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar2 = puVar10;
              puVar23 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
              puVar15 = (uint *)(puVar23 + 0x16);
              uVar13 = 0;
              if (puVar15 <= puVar10 + 0x4000) {
                uVar13 = 1;
                goto LAB_140082763;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_140082763:
          *(uint **)(puVar10 + 0x10) = puVar15;
          puVar10[0x12] = uVar13;
          FUN_1447247dc(puVar23,lVar3);
          *puVar23 = &PTR_FUN_149dffca8;
          *(uint *)(puVar23 + 0x15) = uVar18;
          if ((uVar18 & 0xff) == 0xff) {
            uVar13 = uVar18 >> 10 & 3;
            iVar19 = 0;
            if ((uVar18 >> 9 & 1) == 0 || uVar13 < 2) {
              uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            }
            else {
              uVar16 = 2;
            }
          }
          else {
            iVar19 = (uVar18 >> 7 & 2 | uVar18 >> 9 & 1) + *(int *)(&DAT_149e38ed0 + uVar21 * 4);
            uVar16 = 5;
          }
          if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
          }
          puVar23[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar23[9] = puVar23;
          puVar23[10] = puVar23;
          lVar12 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar12 == 0) {
            uVar6 = 1;
            if ((char)uVar16 != '\x06') {
              uVar6 = uVar16;
            }
            uVar16 = uVar6;
            uVar11 = 0;
          }
          else {
            if ((char)uVar16 == '\x06') {
              uVar16 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
            }
            uVar11 = *(undefined8 *)(lVar12 + 0x30);
          }
          puVar23[0xf] = uVar11;
          puVar23[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar23 + 0x1c) = iVar19;
          if (puVar23 == (undefined8 *)0x0) {
            local_50.s.LowPart._0_1_ = 1;
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
            UNLOCK();
            local_50.s.LowPart._0_1_ = 1;
            FUN_1447439e4(puVar23);
            LOCK();
            piVar1 = (int *)(puVar23 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar23)(puVar23,1);
            }
          }
          plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x30) + uVar21 * 0x18);
          (**(code **)(*plVar4 + 0x30))(plVar4,uVar22);
        }
        goto LAB_14008293e;
      }
    }
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar11 = FUN_14118da1c();
      bVar17 = FUN_14054d46e(uVar11,L"nothreading");
      DAT_14c83f0f8 = bVar17 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 0) {
      iVar19 = *(int *)(lVar3 + 0x28);
      if (0 < iVar19) {
        lVar12 = 0;
        do {
          lVar20 = *(longlong *)(lVar3 + 0x20);
          if (*(longlong *)(lVar3 + 0x20) == 0) {
            lVar20 = lVar3;
          }
          lVar20 = *(longlong *)(lVar20 + lVar12 * 8);
          if (lVar20 != 0) {
            if ((*(byte *)(lVar20 + 0xa0) & 1) == 0) {
              FUN_140033559(".\\Runtime/Core/Private/Async/TaskGraph.cpp",0x60a,
                            L"Recursive waits are not allowed in single threaded mode.");
              goto LAB_1400825b6;
            }
            iVar19 = *(int *)(lVar3 + 0x28);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar19);
      }
      goto LAB_14008293e;
    }
  }
LAB_1400825b6:
  FUN_1408d7722(&local_50);
  local_88 = 0x6ff;
  FUN_1407e0794(lVar5,CONCAT71(local_50.QuadPart._1_7_,local_50.s.LowPart._0_1_),lVar3,uVar13);
  FUN_1407df938(&local_50);
LAB_14008293e:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140082a04 FUN_140082a04 body=639 status=ok
// SIG undefined FUN_140082a04(void)

undefined8 FUN_140082a04(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *param_3;
    lVar6 = param_3[1];
    if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) & 0x809f600) == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1))
      {
        FUN_1446f470e(&local_38,L"GbxHasStructType",1);
        DAT_14c949380 = FUN_141473ad5(local_38);
        _Init_thread_footer(&DAT_14c949388);
      }
      if (((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) ==
            DAT_14c949380 + 0x30)) &&
          ((plVar1 = *(longlong **)(lVar6 + 0xb8), plVar1 != (longlong *)0x0 &&
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')))) &&
         ((lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1), lVar3 != 0 &&
          ((*(uint *)(lVar6 + 8) & 0x809f600) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c949388) &&
           (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
          FUN_1446f470e(&local_38,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_38);
          _Init_thread_footer(&DAT_14c949388);
        }
        if ((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
            (*(longlong *)
              (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) ==
             DAT_14c949380 + 0x30)) &&
           (((plVar1 = *(longlong **)(lVar6 + 0xb8), plVar1 != (longlong *)0x0 &&
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) &&
            (lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1), lVar3 != 0)))) goto LAB_140082b6f;
      }
    }
  }
  lVar6 = 0;
LAB_140082b6f:
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar4 = param_2[1];
  if ((lVar6 == 0 && lVar3 != 0) || (lVar3 != 0 && lVar4 == 0)) {
    if (lVar4 == 0) {
      lVar4 = lVar3;
    }
    if (lVar6 == 0) {
      lVar6 = lVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),*param_2 == lVar5 && lVar4 == lVar6);
}



// FUNCTION 140082c84 FUN_140082c84 body=469 status=ok
// SIG undefined FUN_140082c84(void)

void FUN_140082c84(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_140082db4:
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
LAB_140082df1:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140082cee;
LAB_140082ce3:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140082cee:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000140082d1b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140082d71:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140082df1;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140082db4;
code_r0x000140082d1b:
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
      goto LAB_140082d71;
    }
  }
  goto LAB_140082ce3;
}



// FUNCTION 140082e80 FUN_140082e80 body=143 status=ok
// SIG undefined FUN_140082e80(void)

longlong * FUN_140082e80(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_140082e90;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_140082ff6();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_140082e90:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140082f10 FUN_140082f10 body=228 status=ok
// SIG undefined FUN_140082f10(void)

longlong FUN_140082f10(void)

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
  if (DAT_14cb61f50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463fac42;
    local_38 = &LAB_1486e064a;
    local_40 = &LAB_1464f5fc9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x698;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerState",&DAT_14cb61f50,FUN_1464f5fa2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61f50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140082ff6 FUN_140082ff6 body=57 status=ok
// SIG undefined FUN_140082ff6(void)

void FUN_140082ff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94300 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94300 = FUN_140002ddd(FUN_14657624c,uVar1,L"WeaponStatsContainer");
  }
  return;
}



// FUNCTION 140083030 FUN_140083030 body=396 status=ok
// SIG undefined FUN_140083030(void)

longlong FUN_140083030(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  bVar2 = *(byte *)(param_1 + 0xbd8);
  if (((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) && (lVar3 = *param_2, lVar3 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0xbe8);
    if (DAT_14cb93bd8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_148a11b2b;
      local_60 = FUN_146573d7d;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000001;
      local_80 = 8;
      local_88 = 0x38;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
      if (DAT_14cb93bd8 == 0) goto LAB_1400830f4;
    }
    if (((*(int *)(DAT_14cb93bd8 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8)
         == DAT_14cb93bd8 + 0x30)) && (lVar3 = *param_2, lVar3 != 0)) {
      lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
      lVar6 = (longlong)*(int *)(lVar4 + 0x50 + lVar1);
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x48 + lVar1) + lVar7);
          if (lVar5 != 0) {
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_1400830f6;
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
    }
  }
LAB_1400830f4:
  lVar5 = 0;
LAB_1400830f6:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1400831be FUN_1400831be body=140 status=ok
// SIG undefined FUN_1400831be(void)

void FUN_1400831be(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
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
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 14008324a FUN_14008324a body=85 status=ok
// SIG undefined FUN_14008324a(void)

undefined8 FUN_14008324a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar3 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x30;
    do {
      lVar2 = lVar2 + -0x30;
      uVar1 = FUN_140308e2a(lVar3,param_2);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar3 = lVar3 + 0x30;
    } while (lVar2 != 0);
  }
  return uVar1;
}



// FUNCTION 1400832a0 FUN_1400832a0 body=276 status=ok
// SIG undefined FUN_1400832a0(void)

void FUN_1400832a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x3c) < 2) {
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
        uVar5 = uVar4 / 0x30 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar5;
    FUN_1400833b4(param_1,param_2,uVar5,0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400833b4 FUN_1400833b4 body=140 status=ok
// SIG undefined FUN_1400833b4(void)

void FUN_1400833b4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 140083440 FUN_140083440 body=148 status=ok
// SIG undefined FUN_140083440(void)

void FUN_140083440(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x330);
  if ((uint)param_3 < 0x23) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x330,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x330),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x330,param_2,param_3,0x18);
  return;
}



// FUNCTION 1400834d4 FUN_1400834d4 body=63 status=ok
// SIG undefined FUN_1400834d4(void)

ulonglong FUN_1400834d4(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x88) == '\0') {
    cVar1 = FUN_140083514(param_1 + 0x78,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_14008355a(param_1 + 0x80,0);
      uVar3 = (ulonglong)uVar2 ^ 1;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140083514 FUN_140083514 body=70 status=ok
// SIG undefined FUN_140083514(void)

bool FUN_140083514(uint *param_1)

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



// FUNCTION 14008355a FUN_14008355a body=70 status=ok
// SIG undefined FUN_14008355a(void)

bool FUN_14008355a(uint *param_1)

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



// FUNCTION 1400835a0 FUN_1400835a0 body=683 status=ok
// SIG undefined FUN_1400835a0(void)

void FUN_1400835a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,int param_6,int param_7,ulonglong param_8)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_488 [32];
  ulonglong local_468;
  undefined8 *local_460;
  int local_458;
  int local_450;
  ulonglong local_448;
  longlong *local_438;
  undefined8 local_430;
  longlong local_428;
  longlong local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  char local_400 [8];
  undefined8 local_3f8 [3];
  undefined1 local_3e0 [8];
  undefined8 auStack_3d8 [87];
  undefined1 local_120 [216];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_438 = param_2;
  local_430 = param_3;
  if ((int)param_2[1] != 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      local_408 = 0;
      local_400[0] = -1;
      local_418 = *param_4;
      if (*(char *)(param_1 + 300) != -1) {
        local_418 = 0;
        local_400[0] = *(char *)(param_1 + 300);
      }
      lVar5 = 0x10;
      do {
        pcVar2 = local_400 + lVar5;
        pcVar2[0] = -1;
        pcVar2[1] = -1;
        pcVar2[2] = -1;
        pcVar2[3] = -1;
        *(undefined8 *)((longlong)local_3f8 + lVar5) = 0;
        *(undefined8 *)((longlong)local_3f8 + lVar5 + 8) = 0;
        *(undefined8 *)(local_3e0 + lVar5 + -8) = 0;
        *(undefined8 *)(local_3e0 + lVar5) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x40) = 0;
        *(undefined8 *)((longlong)auStack_3d8 + lVar5 + 0x48) = 0;
        lVar5 = lVar5 + 0x78;
      } while (lVar5 != 0x2e0);
      memset(local_120,0,0xcc);
      local_3f8[0] = 0xffffffffffffffff;
      if (0 < param_6) {
        lVar5 = (longlong)param_5;
        local_428 = (longlong)(param_6 + param_5);
        local_420 = param_1;
        do {
          puVar9 = (undefined8 *)(lVar5 * 0x48 + *local_438);
          iVar6 = 0;
          local_410 = 0;
          uVar4 = *(uint *)(*(longlong *)(local_420 + 0xa0) + lVar5 * 0xc);
          if ((uVar4 & 1) == 0) {
            iVar7 = (uVar4 >> 1) * param_7;
          }
          else {
            iVar6 = (uVar4 >> 1) + *(int *)((longlong)param_4 + 0x14);
            local_410 = param_4[1];
            iVar7 = param_7;
          }
          lVar1 = *(longlong *)(local_420 + 0xa0) + lVar5 * 0xc;
          local_408 = CONCAT44(iVar6,*(int *)(lVar1 + 4) + *(int *)(param_4 + 2));
          local_460 = local_3f8;
          local_468 = param_8;
          cVar3 = FUN_144756a2c(*puVar9,local_430,&local_418,iVar7);
          if ((cVar3 != '\0') && (uVar4 = *(uint *)(lVar1 + 8), (uVar4 & 0x7ffe) != 0)) {
            uVar8 = 1;
            do {
              local_408 = CONCAT44(local_408._4_4_ + 0x14,(int)local_408 + (uVar4 >> 0xf));
              FUN_144ab2fe0(*puVar9,&local_418,iVar7,param_8);
              uVar8 = uVar8 + 1;
              uVar4 = *(uint *)(lVar1 + 8);
            } while (uVar8 < (uVar4 & 0x7fff));
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < local_428);
      }
    }
    else {
      local_3f8[0] = 0;
      local_3f8[1] = 0;
      local_3f8[2] = 0;
      local_3e0[0] = 0xff;
      local_448 = param_8;
      local_450 = param_7;
      local_458 = param_6;
      local_460 = (undefined8 *)CONCAT44(local_460._4_4_,param_5);
      local_468 = local_468 & 0xffffffffffffff00;
      FUN_142de5cd1(param_2,param_3,local_3f8,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008384c FUN_14008384c body=72 status=ok
// SIG undefined FUN_14008384c(void)

char FUN_14008384c(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_140083894();
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x40) + 0x70);
  }
  cVar2 = '\x02';
  if (*(longlong *)(lVar3 + 0x50) != 0) {
    cVar2 = bVar1 * '\x03' + '\x02';
  }
  return cVar2;
}



// FUNCTION 140083894 FUN_140083894 body=61 status=ok
// SIG undefined FUN_140083894(void)

longlong FUN_140083894(void)

{
  longlong lVar1;
  
  if (DAT_14cad39b0 == 0) {
    lVar1 = FUN_14001cc68(0x60,0x10);
    FUN_1461a8102(lVar1);
    DAT_14cad39b0 = lVar1;
  }
  return DAT_14cad39b0;
}



// FUNCTION 1400838d1 FUN_1400838d1 body=296 status=ok
// SIG undefined FUN_1400838d1(void)

ulonglong FUN_1400838d1(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *_Dst;
  ulonglong uVar4;
  void *_Src;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined5 uStack_60;
  undefined4 local_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined1 local_48 [16];
  undefined1 *local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_68 = *(undefined8 *)(param_2 + 0x48);
  uStack_57 = *(undefined4 *)(param_2 + 0x59);
  uStack_53 = *(undefined4 *)(param_2 + 0x5d);
  uStack_4f = *(undefined4 *)(param_2 + 0x61);
  uStack_60 = (undefined5)*(undefined8 *)(param_2 + 0x50);
  local_5b._3_1_ = (undefined1)((uint)*(undefined4 *)(param_2 + 0x55) >> 0x18);
  local_5b._0_3_ = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x28);
  local_38 = (undefined1 *)0x0;
  lStack_30 = 0;
  iVar5 = *(int *)(param_2 + 0x80);
  uVar2 = iVar5 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar2) {
    uVar3 = 0x80;
    if (0x80 < uVar2) {
      uVar3 = uVar2;
    }
    lStack_30 = (ulonglong)uVar3 << 0x20;
    FUN_1446efbd8(local_48,0);
    iVar5 = *(int *)(param_2 + 0x80);
  }
  lStack_30 = CONCAT44(lStack_30._4_4_,iVar5);
  if (iVar5 != 0) {
    _Src = (void *)(param_2 + 0x68);
    if (*(void **)(param_2 + 0x78) != (void *)0x0) {
      _Src = *(void **)(param_2 + 0x78);
    }
    _Dst = local_48;
    if (local_38 != (undefined1 *)0x0) {
      _Dst = local_38;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar5 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1);
    if (((cVar1 != '\0') && ((local_5b & 0x80000000) != 0)) && (0 < *(int *)(DAT_14c9ec438 + 4))) {
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < *(int *)(DAT_14c9ec420 + 4));
      goto LAB_14008395f;
    }
  }
  uVar4 = 0;
LAB_14008395f:
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140083a05 FUN_140083a05 body=336 status=ok
// SIG undefined FUN_140083a05(void)

ulonglong FUN_140083a05(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  if (DAT_14ca84e23 == '\x01') {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(int *)(DAT_14c9eccc0 + 4) != 0);
  }
  else {
    uVar6 = 0;
  }
  piVar4 = &DAT_14c760db4;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
  }
  cVar2 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar4 * 2));
  lVar1 = DAT_14c9ed2f0;
  if ((cVar2 != '\0') &&
     ((DAT_14ca84efa != '\0' || ((DAT_14ca84ef5 == '\x01' && ((DAT_14ca84ef7 & 1) != 0)))))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    if (((*(int *)(lVar1 + uVar5 * 4) != 0) &&
        (((*(int *)(param_1 + 0x10) == 1 ||
          ((*(int *)(param_1 + 0x10) == 2 &&
           (cVar2 = FUN_144b2acae(**(undefined8 **)(param_1 + 8)), cVar2 != '\0')))) &&
         (lVar1 = **(longlong **)(param_1 + 8), *(char *)(lVar1 + 0x3098) == '\x01')))) &&
       ((*(char *)(lVar1 + 0x23e8) != '\x01' || (*(char *)(lVar1 + 0x23ea) == '\x01')))) {
      if (((*(int *)(DAT_14c9eccc0 + 4) == 0) ||
          ((cVar2 = FUN_141767a62(param_1), cVar2 == '\0' || (DAT_14ca84efa != '\x01')))) ||
         ((bVar3 = 1, *(int *)(DAT_14c9ed380 + 4) == 0 &&
          ((DAT_14ca84ef5 == '\x01' && ((DAT_14ca84ef7 & 1) != 0)))))) {
        bVar3 = 0;
      }
      uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 & bVar3);
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140083b55 FUN_140083b55 body=359 status=ok
// SIG undefined FUN_140083b55(void)

double * FUN_140083b55(double *param_1,longlong param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  double local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (ABS(param_3) < 1e-08) {
    param_1[2] = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_48[0] = 1.0;
  local_48[1] = 1.0;
  local_48[2] = 1.0;
  lVar6 = 0;
  do {
    dVar7 = *(double *)(param_2 + lVar6 * 4);
    dVar1 = *(double *)(param_2 + 8 + lVar6 * 4);
    dVar2 = *(double *)(param_2 + 0x10 + lVar6 * 4);
    dVar7 = dVar2 * dVar2 + dVar7 * dVar7 + dVar1 * dVar1;
    *(ulonglong *)((longlong)local_48 + lVar6) =
         -(ulonglong)(9.99999993922529e-09 < dVar7) & (ulonglong)SQRT(dVar7);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  dVar7 = (double)param_3;
  *param_1 = (double)(-(ulonglong)(0.0 < local_48[0]) & (ulonglong)(1.0 / local_48[0])) * dVar7;
  param_1[1] = (double)(-(ulonglong)(0.0 < local_48[1]) & (ulonglong)(1.0 / local_48[1])) * dVar7;
  param_1[2] = (double)(-(ulonglong)(0.0 < local_48[2]) & (ulonglong)(1.0 / local_48[2])) * dVar7;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140083cc2 FUN_140083cc2 body=481 status=ok
// SIG undefined FUN_140083cc2(void)

void FUN_140083cc2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *_Src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  _Src = (undefined8 *)(*(longlong *)(param_2 + 8) + 0x100);
  puVar8 = local_c8;
  puVar6 = _Src;
  puVar7 = puVar8;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  memmove(param_4,_Src,0x80);
  *param_6 = 0;
  if (*(int *)(param_1 + 0x5028) != *(int *)(param_1 + 0x5054)) {
    lVar2 = param_1 + 0x5058;
    if (*(longlong *)(param_1 + 0x5060) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x5060);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x5068) - 1U & *(uint *)(param_2 + 0x10)) * 4);
    if (iVar5 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x5020) + (longlong)iVar5 * 0x150;
        if (*(uint *)(*(longlong *)(param_1 + 0x5020) + (longlong)iVar5 * 0x150) ==
            *(uint *)(param_2 + 0x10)) {
          if (((lVar2 != 0) && ((longlong *)(lVar2 + 0x10) != (longlong *)0x0)) &&
             (*(longlong *)(lVar2 + 0x10) != 0)) {
            *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(param_1 + 0x5018);
            puVar6 = (undefined8 *)(lVar2 + 0xa0);
            puVar7 = param_4;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            bVar9 = true;
            uVar4 = 0;
            do {
              lVar2 = 0;
              do {
                if (9.999999747378752e-05 < ABS((double)puVar8[lVar2] - (double)param_4[lVar2]))
                goto LAB_140083e20;
                lVar2 = lVar2 + 1;
              } while (lVar2 != 4);
              bVar9 = uVar4 < 3;
              uVar4 = uVar4 + 1;
              param_4 = param_4 + 4;
              puVar8 = puVar8 + 4;
            } while (uVar4 != 4);
LAB_140083e20:
            *param_6 = bVar9;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 0x140);
      } while (iVar5 != -1);
    }
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x3f00) < 1) {
    bVar9 = false;
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x3eb8) + 8) < 3) {
    bVar9 = 0 < *(int *)(param_1 + 0x3bf0);
  }
  else {
    bVar9 = *(longlong *)(param_1 + 0x3c00) != 0;
  }
  *(bool *)param_3 = bVar9;
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0x58);
  }
  *param_5 = uVar1;
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140083ea4 FUN_140083ea4 body=258 status=ok
// SIG undefined FUN_140083ea4(void)

uint * FUN_140083ea4(longlong param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x11a);
  puVar5 = (uint *)(param_1 + 0xd8);
  if ((bVar1 & 1) != 0) {
    puVar5 = (uint *)(param_1 + 0x110);
  }
  uVar6 = *puVar5;
  *param_2 = uVar6;
  uVar2 = *(ushort *)(param_1 + 0x118);
  uVar4 = 0;
  if (((char)uVar2 < '\0') && (uVar4 = 0, uVar6 != 0)) {
    uVar4 = *(uint *)(param_1 + 200) / uVar6;
  }
  if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf) & 0x40) == 0) {
    uVar6 = ((uVar2 & 4) >> 2) * 3;
  }
  else {
    uVar6 = uVar2 >> 1 & 2;
  }
  uVar7 = 2;
  if ((uVar2 & 0x20) == 0) {
    uVar7 = (uint)((uVar2 & 0x48) != 0);
  }
  if (-1 < (char)uVar2) {
    uVar4 = 0;
  }
  uVar3 = *(int *)(param_1 + 0x114) + 3U >> 2;
  if ((uVar2 & 2) == 0) {
    uVar3 = uVar2 & 2;
  }
  param_2[1] = uVar3 + uVar4 + uVar6 +
               (ushort)((uVar2 >> 4 & 1) + (ushort)((uVar2 >> 9 & 1) != 0)) + uVar7;
  *(ushort *)(param_2 + 2) = uVar2;
  *(byte *)((longlong)param_2 + 10) = *(byte *)((longlong)param_2 + 10) & 0xfe | bVar1 & 1;
  return param_2;
}



// FUNCTION 140083fa6 FUN_140083fa6 body=450 status=ok
// SIG undefined FUN_140083fa6(void)

void FUN_140083fa6(undefined8 *param_1,uint param_2)

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
LAB_1400840c1:
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
LAB_1400840fe:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140083ffc;
LAB_140083ff1:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140083ffc:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000140084028;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14008407e:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400840fe;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400840c1;
code_r0x000140084028:
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
      goto LAB_14008407e;
    }
  }
  goto LAB_140083ff1;
}



// FUNCTION 140084172 FUN_140084172 body=108 status=ok
// SIG undefined FUN_140084172(void)

longlong FUN_140084172(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1[0x17] == 0) || (lVar1 = *(longlong *)(param_1[0x17] + 0x20), lVar1 == 0)) {
    if (param_1 != (longlong *)0x0) {
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      if ((*(byte *)(lVar1 + 2) & 4) != 0) {
        param_1 = (longlong *)**(undefined8 **)(param_1[0x48] + 0xa0);
      }
      lVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xb8) != 0)) {
        return *(longlong *)(*(longlong *)(lVar1 + 0xb8) + 0x20);
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1400841de FUN_1400841de body=25 status=ok
// SIG undefined FUN_1400841de(void)

undefined8 FUN_1400841de(undefined8 param_1,undefined8 param_2)

{
  FUN_140192332(param_1,param_2,0);
  return param_2;
}



// FUNCTION 1400841f8 FUN_1400841f8 body=370 status=ok
// SIG undefined FUN_1400841f8(void)

undefined8 * FUN_1400841f8(undefined8 *param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  longlong *plVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149e8f7e0;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar5 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar5) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar5) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if ((*(int *)((longlong)lpTlsValue + 0x18) == 0) ||
     (plVar3 = *(longlong **)
                (*(longlong *)((longlong)lpTlsValue + 0x10) +
                (longlong)(*(int *)((longlong)lpTlsValue + 0x18) + -1) * 8),
     plVar3 == (longlong *)0x0)) {
    local_28 = param_1[3];
    FUN_1400021e4(&local_28,&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe82,
                  L"%s is not being constructed with NewObject.",puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)0x0;
  }
  if ((undefined8 *)*plVar3 != param_1 && (undefined8 *)*plVar3 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe84,
                  L"UObject() constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *plVar3 = (longlong)param_1;
  *(undefined1 *)((longlong)plVar3 + 0x12) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14008436c FUN_14008436c body=1104 status=ok
// SIG undefined FUN_14008436c(void)

void FUN_14008436c(longlong param_1,float param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined1 auVar11 [16];
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  
  FUN_14478b484();
  if (*(float *)(param_1 + 0x300) <= 1e-08) {
    param_2 = 1.0;
  }
  else {
    param_2 = param_2 / *(float *)(param_1 + 0x300);
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
  }
  iVar8 = *(int *)(param_1 + 0x330);
  if (iVar8 == 0) {
    uVar23 = 1;
    uVar22 = 0;
    iVar12 = 0;
    iVar19 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x328);
    if (*(uint **)(param_1 + 0x328) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x318);
    }
    uVar21 = *puVar13;
    if (uVar21 == 0) {
      iVar12 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar12 = iVar8 + -1;
      }
      uVar22 = 0;
      uVar23 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar23 = uVar22;
      }
      iVar19 = 0;
      do {
        if (uVar23 == uVar22) {
          return;
        }
        iVar19 = iVar19 + 0x20;
        uVar21 = puVar13[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar22 = 0;
      iVar19 = 0;
    }
    uVar23 = (ulonglong)(-uVar21 & uVar21);
    uVar1 = uVar23 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar12 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar12) {
      iVar12 = iVar8;
    }
  }
  if (iVar12 != iVar8) {
    dVar10 = (double)param_2;
    uVar21 = 0xffffffff;
    do {
      lVar20 = *(longlong *)(param_1 + 0x308);
      lVar14 = (longlong)iVar12 * 0x50;
      dVar5 = *(double *)(lVar20 + 0x20 + lVar14);
      dVar6 = *(double *)(lVar20 + 0x18 + lVar14);
      dVar7 = *(double *)(lVar20 + 0x10 + lVar14);
      dVar5 = (*(double *)(lVar20 + 0x38 + lVar14) - dVar5) * dVar10 + dVar5;
      dVar6 = (*(double *)(lVar20 + 0x30 + lVar14) - dVar6) * dVar10 + dVar6;
      dVar7 = (*(double *)(lVar20 + 0x28 + lVar14) - dVar7) * dVar10 + dVar7;
      *(double *)(lVar20 + 0x10 + lVar14) = dVar7;
      *(double *)(lVar20 + 0x18 + lVar14) = dVar6;
      *(double *)(lVar20 + 0x20 + lVar14) = dVar5;
      fVar24 = *(float *)(lVar20 + 0x40 + lVar14);
      fVar24 = (*(float *)(lVar20 + 0x44 + lVar14) - fVar24) * param_2 + fVar24;
      *(float *)(lVar20 + 0x40 + lVar14) = fVar24;
      lVar14 = *(longlong *)(lVar20 + 8 + lVar14);
      lVar20 = lVar14 + 0x140;
      uVar18 = *(uint *)(lVar14 + 0x1d4);
      *(undefined4 *)(lVar14 + 0x1d0) = 0;
      iVar12 = 0;
      if ((int)uVar18 < 0) {
        FUN_147f80112(lVar20,0);
        iVar12 = *(int *)(lVar14 + 0x1d0);
        uVar18 = *(uint *)(lVar14 + 0x1d4);
      }
      *(undefined1 *)(lVar14 + 0x26c) = 0;
      *(uint *)(lVar14 + 0x1d0) = iVar12 + 1U;
      if (uVar18 < iVar12 + 1U) {
        FUN_140089f7a(lVar20,iVar12);
      }
      if (*(longlong *)(lVar14 + 0x1c0) != 0) {
        lVar20 = *(longlong *)(lVar14 + 0x1c0);
      }
      lVar15 = (longlong)iVar12 * 0x80;
      *(undefined8 *)(lVar20 + lVar15) = 0;
      ((undefined8 *)(lVar20 + lVar15))[1] = 0;
      puVar2 = (undefined4 *)(lVar20 + 0x10 + lVar15);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0x3ff00000;
      auVar11._8_4_ = SUB84(dVar6,0);
      auVar11._0_8_ = dVar7;
      auVar11._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(lVar20 + 0x20 + lVar15) = auVar11;
      pdVar3 = (double *)(lVar20 + 0x30 + lVar15);
      *pdVar3 = dVar5;
      pdVar3[1] = 0.0;
      puVar4 = (undefined8 *)(lVar20 + 0x40 + lVar15);
      *puVar4 = 0x3ff0000000000000;
      puVar4[1] = 0x3ff0000000000000;
      puVar4 = (undefined8 *)(lVar20 + 0x50 + lVar15);
      *puVar4 = 0x3ff0000000000000;
      puVar4[1] = 0;
      *(undefined4 *)(lVar20 + 0x60 + lVar15) = 0x3f800000;
      *(float *)(lVar20 + 100 + lVar15) = fVar24;
      *(undefined2 *)(lVar20 + 0x68 + lVar15) = 0;
      *(undefined8 *)(lVar20 + 0x6c + lVar15) = 0;
      if (fVar24 < 0.0) {
        *(undefined4 *)(lVar20 + lVar15 + 100) = *(undefined4 *)(lVar14 + 0x268);
        *(undefined1 *)(lVar14 + 0x26c) = 1;
      }
      FUN_1447906c0(lVar14,0);
      uVar21 = uVar21 & ~(uint)uVar23;
      puVar13 = *(uint **)(param_1 + 0x328);
      if (*(uint **)(param_1 + 0x328) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x318);
      }
      iVar9 = *(int *)(param_1 + 0x330);
      iVar12 = (int)uVar22;
      lVar20 = (longlong)iVar12;
      uVar18 = puVar13[lVar20] & uVar21;
      if (uVar18 == 0) {
        iVar16 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar16 = iVar9 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar16;
        if (iVar16 < iVar12) {
          iVar17 = iVar12;
        }
        if (iVar12 < iVar16) {
          lVar14 = 0;
          do {
            uVar18 = puVar13[lVar20 + lVar14 + 1];
            if (uVar18 != 0) {
              uVar22 = (ulonglong)(iVar12 + (int)lVar14 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1400846f5;
            }
            iVar19 = iVar19 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar17 - lVar20 != lVar14);
          uVar21 = 0xffffffff;
          iVar12 = iVar17;
        }
        uVar22 = (ulonglong)(iVar12 + 1);
        iVar12 = iVar9;
      }
      else {
LAB_1400846f5:
        uVar23 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar23 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar12 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar12) {
          iVar12 = iVar9;
        }
      }
    } while (iVar12 != iVar8);
  }
  return;
}



// FUNCTION 1400847bc FUN_1400847bc body=110 status=ok
// SIG undefined FUN_1400847bc(void)

void FUN_1400847bc(longlong param_1,uint param_2)

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
    FUN_1400892c4(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14008883c(param_1);
    return;
  }
  FUN_1438a816a(param_1);
  FUN_1400892c4(param_1,param_2);
  return;
}



// FUNCTION 14008482a FUN_14008482a body=150 status=ok
// SIG undefined FUN_14008482a(void)

void FUN_14008482a(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  uVar5 = 0;
  bVar2 = false;
  do {
    uVar5 = (ulonglong)(int)uVar5;
    plVar4 = (longlong *)(*param_1 + uVar5 * 0xc0 + 0xb0);
    while ((plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0 &&
           (((*plVar1 != -1 && (0 < (int)plVar1[0x26])) || (1 < (int)plVar1[0x21]))))) {
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 0x18;
      if ((longlong)iVar3 <= (longlong)uVar5) {
        if (!bVar2) {
          return;
        }
        goto LAB_1400848aa;
      }
    }
    FUN_14033a61a();
    FUN_14181a40a(param_1,uVar5 & 0xffffffff);
    iVar3 = (int)param_1[1];
    bVar2 = true;
  } while ((int)uVar5 < iVar3);
LAB_1400848aa:
  FUN_14100bd7a(param_1);
  return;
}



// FUNCTION 1400848c0 FUN_1400848c0 body=43 status=ok
// SIG undefined FUN_1400848c0(void)

void FUN_1400848c0(int *param_1,longlong param_2)

{
  LOCK();
  *param_1 = *param_1 + -1;
  UNLOCK();
  if (*param_1 == 0) {
    if ((DAT_14cb259f8 == 0) || ((char)param_1[1] == '\x01')) {
      LOCK();
      param_1[2] = 0;
      UNLOCK();
    }
    else if (param_2 != 0) {
      FUN_1401b4ef2(*(undefined8 *)(DAT_14cb259f8 + 0x60));
      return;
    }
  }
  return;
}



// FUNCTION 1400848ec FUN_1400848ec body=449 status=ok
// SIG undefined FUN_1400848ec(void)

undefined8 FUN_1400848ec(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  uVar1 = *(uint *)(param_1 + 0x7a8);
  uVar8 = (ulonglong)uVar1;
  lVar12 = *(longlong *)(param_1 + 0x7a0);
  uVar9 = 0;
  iVar2 = (int)((ulonglong)param_2 >> 0x20);
  if (0 < (int)uVar1) {
    do {
      uVar11 = (int)(uVar8 >> 1) + (int)uVar9;
      lVar13 = (ulonglong)uVar11 * 0x10;
      iVar7 = *(int *)(lVar12 + lVar13) - (int)param_2;
      if (iVar7 == 0) {
        iVar7 = *(int *)(lVar12 + 4 + lVar13) - iVar2;
      }
      uVar10 = (uint)uVar8;
      if (iVar7 < 0) {
        uVar9 = (ulonglong)(uVar11 + (uVar10 & 1));
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar10);
  }
  if ((int)uVar9 < (int)uVar1) {
    piVar5 = (int *)(lVar12 + uVar9 * 0x10);
    iVar7 = (int)param_2 - *piVar5;
    if (iVar7 == 0) {
      iVar7 = iVar2 - piVar5[1];
    }
    plVar3 = (longlong *)0x0;
    if (-1 < iVar7) {
      plVar3 = (longlong *)(piVar5 + 2);
    }
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  plVar6 = &local_48;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  lVar12 = *plVar6;
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_140084a76;
    if (plVar3 == (longlong *)0x0) {
      uVar4 = 0;
      goto LAB_140084a22;
    }
LAB_140084a62:
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) {
LAB_140084aa1:
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_140084a76:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_140084a62;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_1400849ca;
    goto LAB_140084aa1;
  }
LAB_1400849ca:
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else if ((longlong)*(int *)(param_1 + 0x9e8) != 0) {
    lVar13 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x9e0) + lVar13) == lVar12) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x9e0) + 8 + lVar13);
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x9e8) * 0x10 != lVar13);
  }
  local_58 = local_3c;
  uVar4 = (**(code **)(*plVar3 + 1000))(plVar3,lVar12,param_3,param_4);
LAB_140084a22:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140084aae FUN_140084aae body=7515 status=ok
// SIG undefined FUN_140084aae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140084aae(longlong param_1,double *param_2,uint param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  double *pdVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auStack_358 [32];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8 [4];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  int local_278;
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
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
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
  double *pdVar19;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((((*(int *)(param_1 + 0x66c) == 0) || (uVar21 = *(uint *)(param_1 + 0x668), (int)uVar21 < 0))
      || (DAT_14c9647dc <= (int)uVar21)) ||
     (((plVar23 = (longlong *)
                  ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
       plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)(param_1 + 0x66c))) ||
      (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (lVar20 = *plVar23, lVar20 == 0)))))) {
    if (((int)param_3 < 0) ||
       (lVar20 = (longlong)*(int *)(param_1 + 0x718) * 0x10,
       *(int *)(param_1 + 0x6d8 + lVar20) <= (int)param_3)) goto LAB_14008521a;
    lVar17 = *(longlong *)(param_1 + 0x6d0 + lVar20);
    lVar20 = (ulonglong)param_3 * 0x60;
    pdVar14 = (double *)(lVar17 + lVar20);
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    auVar63 = *(undefined1 (*) [16])(param_4 + 8);
    auVar36 = *(undefined1 (*) [16])(param_4 + 10);
    pdVar19 = (double *)(lVar17 + 0x40 + lVar20);
    dVar60 = *pdVar19;
    dVar26 = pdVar19[1];
    pdVar19 = (double *)(lVar17 + 0x50 + lVar20);
    dVar75 = *pdVar19;
    dVar47 = pdVar19[1];
LAB_140084c9d:
    auVar41._8_8_ = dVar26;
    auVar41._0_8_ = dVar60;
    auVar41 = minpd(auVar41,auVar63);
    auVar48._8_8_ = dVar47;
    auVar48._0_8_ = dVar75;
    auVar48 = minpd(auVar48,auVar36);
    auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
    iVar15 = movmskpd((int)lVar17,auVar42);
    auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
    auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
    uVar21 = movmskpd((int)lVar20,auVar49);
    dVar69 = auVar36._0_8_;
    dVar73 = auVar36._8_8_;
    dVar39 = auVar63._0_8_;
    dVar27 = auVar63._8_8_;
    if ((uVar21 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar1 = *pdVar14;
      dVar2 = pdVar14[1];
      dVar3 = pdVar14[2];
      dVar4 = pdVar14[3];
      dVar7 = *param_4;
      dVar8 = param_4[1];
      dVar9 = param_4[2];
      dVar10 = param_4[3];
      dVar40 = param_4[3];
      dVar53 = param_4[3];
      dVar57 = *param_4;
      dVar56 = *param_4;
      dVar54 = param_4[1];
      dVar46 = param_4[1];
      dVar59 = param_4[2];
      dVar55 = param_4[2];
      dVar70 = pdVar14[4] * dVar39;
      dVar71 = pdVar14[5] * dVar27;
      dVar72 = pdVar14[6] * dVar69;
      dVar74 = pdVar14[7] * dVar73;
      dVar65 = dVar71 * dVar7 - dVar8 * dVar70;
      dVar66 = dVar72 * dVar8 - dVar9 * dVar71;
      dVar76 = dVar70 * dVar9 - dVar7 * dVar72;
      dVar78 = dVar74 * dVar10 - dVar10 * dVar74;
      dVar66 = dVar66 + dVar66;
      dVar76 = dVar76 + dVar76;
      dVar65 = dVar65 + dVar65;
      dVar78 = dVar78 + dVar78;
      dVar64 = param_4[4];
      dVar34 = param_4[5];
      dVar77 = param_4[6];
      dVar38 = param_4[7];
      *param_2 = dVar2 * dVar59 * -1.0 + dVar3 * dVar54 + dVar4 * dVar57 * 1.0 + dVar1 * dVar40;
      param_2[1] = dVar1 * dVar55 * 1.0 + dVar4 * dVar46 + dVar3 * dVar56 * -1.0 + dVar2 * dVar53;
      param_2[2] = dVar4 * dVar59 * 1.0 + ((dVar57 * dVar2 * 1.0 + dVar3 * dVar40) - dVar1 * dVar54)
      ;
      param_2[3] = dVar3 * dVar55 * -1.0 +
                   ((dVar56 * dVar1 * -1.0 + dVar4 * dVar53) - dVar2 * dVar46);
      param_2[4] = (dVar65 * dVar8 - dVar9 * dVar76) + dVar40 * dVar66 + dVar70 + dVar64;
      param_2[5] = (dVar66 * dVar9 - dVar65 * dVar7) + dVar53 * dVar76 + dVar71 + dVar34;
      param_2[6] = (dVar76 * dVar7 - dVar8 * dVar66) + dVar40 * dVar65 + dVar72 + dVar77;
      param_2[7] = (dVar78 * dVar10 - dVar78 * dVar10) + dVar53 * dVar78 + dVar74 + dVar38;
      param_2[8] = dVar60 * dVar39;
      param_2[9] = dVar26 * dVar27;
      param_2[10] = dVar75 * dVar69;
      param_2[0xb] = dVar47 * dVar73;
      goto LAB_1400866b2;
    }
    dVar53 = *param_4;
    dVar56 = param_4[1];
    dVar57 = param_4[2];
    dVar46 = dVar56 + dVar56;
    dVar54 = dVar57 + dVar57;
    dVar64 = dVar53 * (dVar53 + dVar53);
    local_198 = (1.0 - (dVar64 + dVar56 * dVar46)) * dVar69;
    dVar40 = param_4[3];
    dVar55 = dVar54 * dVar40;
    dVar59 = (dVar53 + dVar53) * param_4[3];
    dVar40 = dVar46 * dVar40;
    local_1a8 = (dVar40 + *param_4 * dVar54) * dVar69;
    local_338._8_8_ = dVar73 * dVar47;
    local_338._0_8_ = dVar69 * dVar75;
    local_1e8 = (1.0 - (dVar57 * dVar54 + dVar56 * dVar46)) * dVar39;
    dStack_1c0 = (1.0 - (dVar57 * dVar54 + dVar64)) * dVar27;
    dStack_1e0 = (dVar46 * dVar53 + dVar55) * dVar39;
    local_1b8 = (dVar54 * dVar56 + dVar59) * dVar27;
    local_1c8 = (dVar46 * dVar53 - dVar55) * dVar27;
    dStack_1a0 = (dVar54 * dVar56 - dVar59) * dVar69;
    local_1d8 = (*param_4 * dVar54 - dVar40) * dVar39;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = param_4[4];
    dStack_180 = param_4[5];
    local_178 = param_4[6];
    uStack_170 = 0x3ff0000000000000;
    dVar69 = *pdVar14;
    dVar73 = pdVar14[1];
    dVar40 = pdVar14[2];
    dVar53 = dVar73 + dVar73;
    dVar56 = dVar40 + dVar40;
    dVar54 = dVar69 * (dVar69 + dVar69);
    local_218 = (1.0 - (dVar54 + dVar73 * dVar53)) * dVar75;
    dVar47 = pdVar14[3];
    dVar57 = dVar56 * dVar47;
    dVar46 = (dVar69 + dVar69) * pdVar14[3];
    dVar47 = dVar53 * dVar47;
    local_228 = (dVar47 + *pdVar14 * dVar56) * dVar75;
    local_248 = (dVar53 * dVar69 - dVar57) * dVar26;
    dStack_220 = (dVar56 * dVar73 - dVar46) * dVar75;
    local_318 = dVar39 * dVar60;
    dStack_310 = dVar27 * dVar26;
    local_268 = (1.0 - (dVar40 * dVar56 + dVar73 * dVar53)) * dVar60;
    dStack_240 = (1.0 - (dVar40 * dVar56 + dVar54)) * dVar26;
    dStack_260 = (dVar53 * dVar69 + dVar57) * dVar60;
    local_238 = (dVar56 * dVar73 + dVar46) * dVar26;
    local_258 = (*pdVar14 * dVar56 - dVar47) * dVar60;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = pdVar14[4];
    dStack_200 = pdVar14[5];
    local_1f8 = pdVar14[6];
    uStack_1f0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_168);
    dVar39 = dStack_310;
    dVar47 = local_318;
    dVar60 = local_158 * local_158 + local_168 * local_168 + local_160 * local_160;
    local_328 = local_148;
    dVar75 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    dVar26 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    uVar25 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
    dVar69 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar60)) & uVar25);
    uVar25 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
    dVar60 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar75)) & uVar25);
    uVar25 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar25);
    auVar63._8_8_ = -(ulonglong)(0.0 <= dStack_310);
    auVar63._0_8_ = -(ulonglong)(0.0 <= local_318);
    auVar63 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar63);
    uVar11 = local_338._0_8_;
    uVar12 = local_338._8_8_;
    dVar75 = (double)(~-(ulonglong)(0.0 <= (double)local_338._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_338._0_8_) & 0x3ff0000000000000);
    dVar27 = auVar63._0_8_;
    local_168 = local_168 * dVar69 * dVar27;
    local_160 = local_160 * dVar69 * dVar27;
    local_158 = dVar69 * local_158 * dVar27;
    dVar27 = auVar63._8_8_;
    local_138 = dVar60 * local_138 * dVar27;
    local_140 = local_140 * dVar60 * dVar27;
    local_148 = dVar27 * local_148 * dVar60;
    local_118 = dVar26 * local_118 * dVar75;
    local_120 = local_120 * dVar26 * dVar75;
    local_128 = dVar75 * local_128 * dVar26;
    FUN_14481fd10(local_2d8,&local_168);
    dVar60 = local_2d8[2] * local_2d8[2] + local_2d8[0] * local_2d8[0];
    dVar26 = local_2d8[3] * local_2d8[3] + local_2d8[1] * local_2d8[1];
    auVar43._0_8_ = dVar60 + dVar26;
    auVar43._8_8_ = dVar60 + dVar26;
    auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
    auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
    auVar63 = sqrtpd(auVar43,auVar43);
    auVar41 = divpd(_DAT_149934d80,auVar63);
    auVar50._0_8_ = auVar41._0_8_ * local_2d8[2];
    auVar50._8_8_ = auVar41._8_8_ * local_2d8[3];
    auVar63 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar36);
    param_2[8] = dVar47;
    param_2[9] = dVar39;
    param_2[10] = (double)uVar11;
    param_2[0xb] = (double)uVar12;
    *param_2 = (double)((ulonglong)(local_2d8[0] * auVar41._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
    param_2[1] = (double)((ulonglong)(local_2d8[1] * auVar41._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar63;
  }
  else {
    if (((*(byte *)(lVar20 + 0x9c) & 1) == 0) || (*(int *)(param_1 + 0x748) <= (int)param_3)) {
LAB_14008521a:
      pdVar14 = (double *)&DAT_14c846480;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *param_2 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        param_2 = param_2 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_358);
    }
    iVar15 = *(int *)(*(longlong *)(param_1 + 0x740) + (longlong)(int)param_3 * 4);
    lVar17 = lVar20 + 0x6d0;
    lVar24 = (longlong)*(int *)(lVar20 + 0x718) * 0x10;
    iVar5 = *(int *)(lVar20 + 0x6d8 + lVar24);
    if ((-1 < (longlong)iVar15) && (iVar15 < iVar5)) {
      lVar20 = *(longlong *)(lVar17 + lVar24);
      lVar17 = (longlong)iVar15 * 0x60;
      pdVar14 = (double *)(lVar20 + lVar17);
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      auVar63 = *(undefined1 (*) [16])(param_4 + 8);
      auVar36 = *(undefined1 (*) [16])(param_4 + 10);
      pdVar19 = (double *)(lVar20 + 0x40 + lVar17);
      dVar60 = *pdVar19;
      dVar26 = pdVar19[1];
      pdVar19 = (double *)(lVar20 + 0x50 + lVar17);
      dVar75 = *pdVar19;
      dVar47 = pdVar19[1];
      goto LAB_140084c9d;
    }
    pdVar14 = (double *)&DAT_14c846480;
    pdVar19 = local_2d8;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pdVar19 = *pdVar14;
      pdVar14 = pdVar14 + 1;
      pdVar19 = pdVar19 + 1;
    }
    local_278 = -1;
    if (*(int *)(param_1 + 0x758) != *(int *)(param_1 + 0x784)) {
      lVar18 = param_1 + 0x788;
      if (*(longlong *)(param_1 + 0x790) != 0) {
        lVar18 = *(longlong *)(param_1 + 0x790);
      }
      iVar15 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x798) - 1U & param_3) * 4);
      if (iVar15 != -1) {
        do {
          uVar25 = *(longlong *)(param_1 + 0x750) + (longlong)iVar15 * 0x90;
          if (*(uint *)(*(longlong *)(param_1 + 0x750) + (longlong)iVar15 * 0x90) == param_3) {
            if ((uVar25 != 0) && (uVar25 != 0xfffffffffffffff0)) {
              iVar15 = *(int *)(uVar25 + 0x70);
              if (((longlong)iVar15 < 0) || (iVar5 <= iVar15)) goto LAB_140085d91;
              lVar20 = *(longlong *)(lVar17 + lVar24);
              lVar17 = (longlong)iVar15 * 0x60;
              pdVar14 = (double *)(lVar20 + lVar17);
              auVar41 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar17);
              local_2b8 = auVar41._0_8_;
              dStack_2b0 = auVar41._8_8_;
              auVar42 = *(undefined1 (*) [16])(lVar20 + 0x50 + lVar17);
              dVar60 = auVar42._0_8_;
              auVar63 = *(undefined1 (*) [16])(uVar25 + 0x50);
              dVar26 = auVar63._0_8_;
              dVar47 = auVar63._8_8_;
              auVar36 = *(undefined1 (*) [16])(uVar25 + 0x60);
              dVar75 = auVar36._0_8_;
              dVar39 = auVar36._8_8_;
              auVar63 = minpd(auVar63,auVar41);
              auVar36 = minpd(auVar36,auVar42);
              auVar28._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
              auVar28._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
              iVar15 = movmskpd((int)lVar20,auVar28);
              auVar35._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar35._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              uVar21 = movmskpd((int)lVar17,auVar35);
              if ((uVar21 & 0x3fffffff) == 0 && iVar15 == 0) {
                dVar56 = *(double *)(uVar25 + 0x10);
                dVar57 = *(double *)(uVar25 + 0x18);
                dVar46 = *(double *)(uVar25 + 0x20);
                dVar54 = *(double *)(uVar25 + 0x28);
                dVar55 = *pdVar14;
                dVar59 = pdVar14[1];
                dVar64 = pdVar14[2];
                dVar77 = pdVar14[3];
                dVar40 = pdVar14[3];
                dVar53 = pdVar14[3];
                dVar60 = pdVar14[1];
                dVar27 = pdVar14[1];
                dVar73 = pdVar14[2];
                dVar69 = pdVar14[2];
                dVar34 = dVar57 * dVar73 * -1.0 +
                         dVar46 * dVar60 + dVar54 * *pdVar14 * 1.0 + dVar56 * dVar40;
                dVar38 = dVar56 * dVar69 * 1.0 +
                         dVar54 * dVar27 + dVar46 * *pdVar14 * -1.0 + dVar57 * dVar53;
                dVar60 = dVar54 * dVar73 * 1.0 +
                         ((*pdVar14 * dVar57 * 1.0 + dVar46 * dVar40) - dVar56 * dVar60);
                dVar27 = dVar46 * dVar69 * -1.0 +
                         ((*pdVar14 * dVar56 * -1.0 + dVar54 * dVar53) - dVar57 * dVar27);
                local_2b8 = *(double *)(uVar25 + 0x30) * local_2b8;
                dStack_2b0 = *(double *)(uVar25 + 0x38) * dStack_2b0;
                local_2a8 = *(double *)(uVar25 + 0x40);
                dStack_2a0 = *(double *)(uVar25 + 0x48);
                goto LAB_140085e69;
              }
              dVar69 = *pdVar14;
              dVar73 = pdVar14[1];
              dVar40 = pdVar14[2];
              dVar53 = dVar73 + dVar73;
              dVar56 = dVar40 + dVar40;
              dVar54 = dVar69 * (dVar69 + dVar69);
              local_198 = (1.0 - (dVar54 + dVar73 * dVar53)) * dVar60;
              dVar27 = pdVar14[3];
              dVar57 = dVar56 * dVar27;
              dVar46 = (dVar69 + dVar69) * pdVar14[3];
              dVar27 = dVar53 * dVar27;
              local_1a8 = (dVar27 + *pdVar14 * dVar56) * dVar60;
              local_318 = dVar60 * dVar75;
              dStack_310 = auVar42._8_8_ * dVar39;
              local_1e8 = (1.0 - (dVar40 * dVar56 + dVar73 * dVar53)) * local_2b8;
              dStack_1c0 = (1.0 - (dVar40 * dVar56 + dVar54)) * dStack_2b0;
              dStack_1e0 = (dVar53 * dVar69 + dVar57) * local_2b8;
              local_1b8 = (dVar56 * dVar73 + dVar46) * dStack_2b0;
              local_1c8 = (dVar53 * dVar69 - dVar57) * dStack_2b0;
              dStack_1a0 = (dVar56 * dVar73 - dVar46) * dVar60;
              local_1d8 = (*pdVar14 * dVar56 - dVar27) * local_2b8;
              local_188 = pdVar14[4];
              dStack_180 = pdVar14[5];
              local_178 = pdVar14[6];
              dVar39 = *(double *)(uVar25 + 0x10);
              dVar27 = *(double *)(uVar25 + 0x18);
              dVar69 = *(double *)(uVar25 + 0x20);
              dVar73 = dVar27 + dVar27;
              dVar40 = dVar69 + dVar69;
              dVar57 = dVar39 * (dVar39 + dVar39);
              local_218 = (1.0 - (dVar57 + dVar27 * dVar73)) * dVar75;
              dVar46 = *(double *)(uVar25 + 0x10) * dVar40;
              dVar60 = *(double *)(uVar25 + 0x28);
              dVar53 = dVar40 * dVar60;
              dVar56 = (dVar39 + dVar39) * *(double *)(uVar25 + 0x28);
              dVar60 = dVar73 * dVar60;
              local_228 = (dVar60 + dVar46) * dVar75;
              local_248 = (dVar73 * dVar39 - dVar53) * dVar47;
              dStack_220 = (dVar40 * dVar27 - dVar56) * dVar75;
              local_338._8_8_ = dStack_2b0 * dVar47;
              local_338._0_8_ = local_2b8 * dVar26;
              local_268 = (1.0 - (dVar69 * dVar40 + dVar27 * dVar73)) * dVar26;
              dStack_240 = (1.0 - (dVar69 * dVar40 + dVar57)) * dVar47;
              dStack_260 = (dVar73 * dVar39 + dVar53) * dVar26;
              local_238 = (dVar40 * dVar27 + dVar56) * dVar47;
              local_258 = (dVar46 - dVar60) * dVar26;
              local_208 = *(double *)(uVar25 + 0x30);
              dStack_200 = *(double *)(uVar25 + 0x38);
              local_1f8 = *(double *)(uVar25 + 0x40);
              goto LAB_1400857a5;
            }
            break;
          }
          iVar15 = *(int *)(uVar25 + 0x80);
        } while (iVar15 != -1);
      }
    }
    cVar13 = FUN_147a0e686(param_1,param_3,local_2d8);
    if (((cVar13 == '\0') || ((longlong)local_278 < 0)) || (iVar5 <= local_278)) {
LAB_140085d91:
      pdVar14 = (double *)&DAT_14c846480;
      pdVar19 = param_2;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar19 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        pdVar19 = pdVar19 + 1;
      }
      goto LAB_1400866b2;
    }
    lVar20 = *(longlong *)(lVar17 + (longlong)*(int *)(lVar20 + 0x718) * 0x10);
    lVar17 = (longlong)local_278 * 0x60;
    pdVar14 = (double *)(lVar20 + lVar17);
    auVar41 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar17);
    dVar69 = auVar41._0_8_;
    dVar73 = auVar41._8_8_;
    auVar42 = *(undefined1 (*) [16])(lVar20 + 0x50 + lVar17);
    dVar60 = auVar42._0_8_;
    dVar26 = local_298._0_8_;
    dVar47 = local_298._8_8_;
    dVar75 = local_288._0_8_;
    dVar39 = local_288._8_8_;
    auVar63 = minpd(local_298,auVar41);
    auVar36 = minpd(local_288,auVar42);
    auVar31._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
    uVar21 = movmskpd((int)lVar20,auVar31);
    uVar25 = (ulonglong)uVar21;
    auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    uVar22 = movmskpd((int)lVar17,auVar37);
    if ((uVar22 & 0x3fffffff) == 0 && uVar21 == 0) {
      dVar55 = *pdVar14;
      dVar59 = pdVar14[1];
      dVar64 = pdVar14[2];
      dVar77 = pdVar14[3];
      dVar40 = pdVar14[3];
      dVar53 = pdVar14[3];
      dVar60 = pdVar14[1];
      dVar27 = pdVar14[1];
      dVar56 = pdVar14[2];
      dVar57 = pdVar14[2];
      dVar34 = local_2d8[1] * dVar56 * -1.0 +
               local_2d8[2] * dVar60 + local_2d8[3] * *pdVar14 * 1.0 + local_2d8[0] * dVar40;
      dVar38 = local_2d8[0] * dVar57 * 1.0 +
               local_2d8[3] * dVar27 + local_2d8[2] * *pdVar14 * -1.0 + local_2d8[1] * dVar53;
      dVar60 = local_2d8[3] * dVar56 * 1.0 +
               ((*pdVar14 * local_2d8[1] * 1.0 + local_2d8[2] * dVar40) - local_2d8[0] * dVar60);
      dVar27 = local_2d8[2] * dVar57 * -1.0 +
               ((*pdVar14 * local_2d8[0] * -1.0 + local_2d8[3] * dVar53) - local_2d8[1] * dVar27);
      local_2b8 = local_2b8 * dVar69;
      dStack_2b0 = dStack_2b0 * dVar73;
LAB_140085e69:
      uVar16 = (undefined4)uVar25;
      local_2a8 = local_2a8 * auVar42._0_8_;
      dStack_2a0 = dStack_2a0 * auVar42._8_8_;
      dVar73 = dStack_2b0 * dVar55 - dVar59 * local_2b8;
      dVar56 = local_2a8 * dVar59 - dVar64 * dStack_2b0;
      dVar57 = local_2b8 * dVar64 - dVar55 * local_2a8;
      dVar46 = dStack_2a0 * dVar77 - dVar77 * dStack_2a0;
      dVar56 = dVar56 + dVar56;
      dVar57 = dVar57 + dVar57;
      dVar73 = dVar73 + dVar73;
      dVar46 = dVar46 + dVar46;
      auVar68._8_8_ = dVar27;
      auVar68._0_8_ = dVar60;
      dVar27 = (dVar73 * dVar59 - dVar64 * dVar57) + dVar40 * dVar56 + local_2b8 + pdVar14[4];
      dVar69 = (dVar56 * dVar64 - dVar73 * dVar55) + dVar53 * dVar57 + dStack_2b0 + pdVar14[5];
      dVar60 = (dVar57 * dVar55 - dVar59 * dVar56) + dVar40 * dVar73 + local_2a8 + pdVar14[6];
      dVar73 = (dVar46 * dVar77 - dVar46 * dVar77) + dVar53 * dVar46 + dStack_2a0 + pdVar14[7];
      dVar75 = dVar75 * auVar42._0_8_;
      dVar39 = dVar39 * auVar42._8_8_;
      auVar67._8_8_ = dVar47 * auVar41._8_8_;
      auVar67._0_8_ = dVar26 * auVar41._0_8_;
    }
    else {
      dVar40 = *pdVar14;
      dVar53 = pdVar14[1];
      dVar56 = pdVar14[2];
      dVar57 = dVar53 + dVar53;
      dVar46 = dVar56 + dVar56;
      dVar59 = dVar40 * (dVar40 + dVar40);
      local_198 = (1.0 - (dVar59 + dVar53 * dVar57)) * dVar60;
      dVar27 = pdVar14[3];
      dVar54 = dVar46 * dVar27;
      dVar55 = (dVar40 + dVar40) * pdVar14[3];
      dVar27 = dVar57 * dVar27;
      local_1a8 = (dVar27 + *pdVar14 * dVar46) * dVar60;
      local_318 = dVar60 * dVar75;
      dStack_310 = auVar42._8_8_ * dVar39;
      local_1e8 = (1.0 - (dVar56 * dVar46 + dVar53 * dVar57)) * dVar69;
      dStack_1c0 = (1.0 - (dVar56 * dVar46 + dVar59)) * dVar73;
      dStack_1e0 = (dVar57 * dVar40 + dVar54) * dVar69;
      local_1b8 = (dVar46 * dVar53 + dVar55) * dVar73;
      local_1c8 = (dVar57 * dVar40 - dVar54) * dVar73;
      dStack_1a0 = (dVar46 * dVar53 - dVar55) * dVar60;
      local_1d8 = (*pdVar14 * dVar46 - dVar27) * dVar69;
      local_188 = pdVar14[4];
      dStack_180 = pdVar14[5];
      local_178 = pdVar14[6];
      dVar60 = local_2d8[1] + local_2d8[1];
      dVar39 = local_2d8[2] + local_2d8[2];
      dVar40 = local_2d8[0] * (local_2d8[0] + local_2d8[0]);
      local_218 = (1.0 - (dVar40 + local_2d8[1] * dVar60)) * dVar75;
      dVar27 = (local_2d8[0] + local_2d8[0]) * local_2d8[3];
      local_228 = (dVar60 * local_2d8[3] + local_2d8[0] * dVar39) * dVar75;
      local_248 = (dVar60 * local_2d8[0] - dVar39 * local_2d8[3]) * dVar47;
      dStack_220 = (dVar39 * local_2d8[1] - dVar27) * dVar75;
      local_338._8_8_ = dVar73 * dVar47;
      local_338._0_8_ = dVar69 * dVar26;
      local_268 = (1.0 - (local_2d8[2] * dVar39 + local_2d8[1] * dVar60)) * dVar26;
      dStack_240 = (1.0 - (local_2d8[2] * dVar39 + dVar40)) * dVar47;
      dStack_260 = (dVar60 * local_2d8[0] + dVar39 * local_2d8[3]) * dVar26;
      local_238 = (dVar39 * local_2d8[1] + dVar27) * dVar47;
      local_258 = (local_2d8[0] * dVar39 - dVar60 * local_2d8[3]) * dVar26;
      local_208 = local_2b8;
      dStack_200 = dStack_2b0;
      local_1f8 = local_2a8;
LAB_1400857a5:
      uStack_170 = 0x3ff0000000000000;
      uStack_190 = 0;
      uStack_1b0 = 0;
      uStack_1d0 = 0;
      uStack_1f0 = 0x3ff0000000000000;
      uStack_210 = 0;
      uStack_230 = 0;
      uStack_250 = 0;
      FUN_1447fea8d(&local_168);
      dVar39 = dStack_310;
      dVar75 = local_318;
      auVar67 = local_338;
      auVar63 = _DAT_149934d80;
      local_328 = local_158;
      dVar60 = local_158 * local_158 + local_168 * local_168 + local_160 * local_160;
      dVar47 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
      dVar26 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
      uVar25 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
      dVar27 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar60)) & uVar25);
      uVar25 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
      dVar60 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar25);
      uVar25 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
      dVar26 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar25);
      auVar29._8_8_ = -(ulonglong)(0.0 <= local_338._8_8_);
      auVar29._0_8_ = -(ulonglong)(0.0 <= local_338._0_8_);
      auVar36 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
      dVar47 = (double)(~-(ulonglong)(0.0 <= local_318) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= local_318) & 0x3ff0000000000000);
      dVar69 = auVar36._0_8_;
      local_168 = local_168 * dVar27 * dVar69;
      local_160 = local_160 * dVar27 * dVar69;
      local_158 = dVar27 * local_158 * dVar69;
      dVar27 = auVar36._8_8_;
      local_138 = dVar60 * local_138 * dVar27;
      local_140 = local_140 * dVar60 * dVar27;
      local_148 = dVar27 * local_148 * dVar60;
      local_118 = dVar26 * local_118 * dVar47;
      local_120 = local_120 * dVar26 * dVar47;
      local_128 = dVar47 * local_128 * dVar26;
      pdVar19 = &local_2f8;
      pdVar14 = (double *)FUN_14481fd10(pdVar19,&local_168);
      uVar16 = SUB84(pdVar19,0);
      dVar60 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
      dVar26 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
      auVar44._0_8_ = dVar60 + dVar26;
      auVar44._8_8_ = dVar60 + dVar26;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
      auVar36 = sqrtpd(auVar44,auVar44);
      auVar63 = divpd(auVar63,auVar36);
      auVar51._0_8_ = auVar63._0_8_ * local_2e8;
      auVar51._8_8_ = auVar63._8_8_ * dStack_2e0;
      dVar34 = (double)((ulonglong)(local_2f8 * auVar63._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
      dVar38 = (double)((ulonglong)(dStack_2f0 * auVar63._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
      auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar30);
      dVar73 = 0.0;
      dVar60 = local_f8;
      dVar27 = local_108;
      dVar69 = dStack_100;
    }
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    auVar63 = *(undefined1 (*) [16])(param_4 + 8);
    dVar26 = auVar63._0_8_;
    dVar40 = auVar63._8_8_;
    auVar36 = *(undefined1 (*) [16])(param_4 + 10);
    dVar47 = auVar36._0_8_;
    dVar53 = auVar36._8_8_;
    auVar63 = minpd(auVar67,auVar63);
    auVar61._8_8_ = dVar39;
    auVar61._0_8_ = dVar75;
    auVar36 = minpd(auVar61,auVar36);
    auVar58._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
    auVar58._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
    iVar15 = movmskpd((int)pdVar14,auVar58);
    auVar62._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar62._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    uVar21 = movmskpd(uVar16,auVar62);
    dVar57 = auVar68._8_8_;
    dVar56 = auVar68._0_8_;
    local_338._0_8_ = auVar67._0_8_;
    local_338._8_8_ = auVar67._8_8_;
    local_338 = auVar67;
    if ((uVar21 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar7 = *param_4;
      dVar8 = param_4[1];
      dVar46 = param_4[3];
      dVar54 = param_4[3];
      dVar59 = *param_4;
      dVar55 = *param_4;
      dVar64 = param_4[1];
      dVar77 = param_4[1];
      dVar9 = param_4[2];
      dVar10 = param_4[3];
      dVar65 = param_4[2];
      dVar78 = param_4[2];
      dVar27 = dVar27 * dVar26;
      dVar69 = dVar69 * dVar40;
      dVar60 = dVar60 * dVar47;
      dVar73 = dVar73 * dVar53;
      dVar66 = dVar69 * dVar7 - dVar27 * dVar8;
      dVar76 = dVar60 * dVar8 - dVar69 * dVar9;
      dVar70 = dVar27 * dVar9 - dVar60 * dVar7;
      dVar71 = dVar73 * dVar10 - dVar73 * dVar10;
      dVar76 = dVar76 + dVar76;
      dVar70 = dVar70 + dVar70;
      dVar66 = dVar66 + dVar66;
      dVar71 = dVar71 + dVar71;
      dVar1 = param_4[4];
      dVar3 = param_4[5];
      dVar2 = param_4[6];
      dVar4 = param_4[7];
      *param_2 = dVar38 * dVar65 * -1.0 + dVar56 * dVar64 + dVar57 * dVar59 * 1.0 + dVar34 * dVar46;
      param_2[1] = dVar34 * dVar78 * 1.0 +
                   dVar57 * dVar77 + dVar56 * dVar55 * -1.0 + dVar38 * dVar54;
      param_2[2] = dVar57 * dVar65 * 1.0 +
                   ((dVar59 * dVar38 * 1.0 + dVar56 * dVar46) - dVar34 * dVar64);
      param_2[3] = dVar56 * dVar78 * -1.0 +
                   ((dVar55 * dVar34 * -1.0 + dVar57 * dVar54) - dVar38 * dVar77);
      param_2[4] = (dVar66 * dVar8 - dVar9 * dVar70) + dVar46 * dVar76 + dVar27 + dVar1;
      param_2[5] = (dVar76 * dVar9 - dVar66 * dVar7) + dVar54 * dVar70 + dVar69 + dVar3;
      param_2[6] = (dVar70 * dVar7 - dVar8 * dVar76) + dVar46 * dVar66 + dVar60 + dVar2;
      param_2[7] = (dVar71 * dVar10 - dVar71 * dVar10) + dVar54 * dVar71 + dVar73 + dVar4;
      param_2[8] = (double)local_338._0_8_ * dVar26;
      param_2[9] = (double)local_338._8_8_ * dVar40;
      auVar6._8_4_ = SUB84(dVar39 * dVar53,0);
      auVar6._0_8_ = dVar75 * dVar47;
      auVar6._12_4_ = (int)((ulonglong)(dVar39 * dVar53) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 10) = auVar6;
      goto LAB_1400866b2;
    }
    dVar46 = *param_4;
    dVar54 = param_4[1];
    dVar55 = param_4[2];
    dVar64 = dVar54 + dVar54;
    dVar77 = dVar55 + dVar55;
    dVar59 = dVar46 * (dVar46 + dVar46);
    dVar73 = param_4[3];
    dVar65 = dVar77 * dVar73;
    dVar78 = (dVar46 + dVar46) * param_4[3];
    dVar73 = dVar64 * dVar73;
    local_318 = dVar75 * dVar47;
    dStack_310 = dVar39 * dVar53;
    local_198 = (1.0 - (dVar59 + dVar54 * dVar64)) * dVar47;
    local_1a8 = (dVar73 + *param_4 * dVar77) * dVar47;
    local_1c8 = (dVar64 * dVar46 - dVar65) * dVar40;
    dStack_1a0 = (dVar77 * dVar54 - dVar78) * dVar47;
    local_328 = (double)local_338._0_8_ * dVar26;
    dStack_320 = (double)local_338._8_8_ * dVar40;
    local_1e8 = (1.0 - (dVar55 * dVar77 + dVar54 * dVar64)) * dVar26;
    dStack_1c0 = (1.0 - (dVar55 * dVar77 + dVar59)) * dVar40;
    dStack_1e0 = (dVar64 * dVar46 + dVar65) * dVar26;
    local_1b8 = (dVar77 * dVar54 + dVar78) * dVar40;
    local_1d8 = (*param_4 * dVar77 - dVar73) * dVar26;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = param_4[4];
    dStack_180 = param_4[5];
    local_178 = param_4[6];
    uStack_170 = 0x3ff0000000000000;
    dVar26 = dVar38 + dVar38;
    dVar39 = dVar56 + dVar56;
    dVar47 = dVar34 * (dVar34 + dVar34);
    local_218 = (1.0 - (dVar47 + dVar38 * dVar26)) * dVar75;
    dVar73 = (dVar34 + dVar34) * dVar57;
    local_228 = (dVar34 * dVar39 + dVar26 * dVar57) * dVar75;
    local_248 = (dVar26 * dVar34 - dVar39 * dVar57) * (double)local_338._8_8_;
    dStack_220 = (dVar39 * dVar38 - dVar73) * dVar75;
    local_268 = (1.0 - (dVar56 * dVar39 + dVar38 * dVar26)) * (double)local_338._0_8_;
    dStack_240 = (1.0 - (dVar56 * dVar39 + dVar47)) * (double)local_338._8_8_;
    dStack_260 = (dVar26 * dVar34 + dVar39 * dVar57) * (double)local_338._0_8_;
    local_238 = (dVar39 * dVar38 + dVar73) * (double)local_338._8_8_;
    local_258 = (dVar34 * dVar39 - dVar26 * dVar57) * (double)local_338._0_8_;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0x3ff0000000000000;
    local_208 = dVar27;
    dStack_200 = dVar69;
    local_1f8 = dVar60;
    FUN_1447fea8d(&local_168);
    dVar73 = dStack_310;
    dVar69 = local_318;
    dVar27 = dStack_320;
    dVar39 = local_328;
    local_338._0_8_ = local_158;
    dVar60 = local_158 * local_158 + local_168 * local_168 + local_160 * local_160;
    local_300 = local_138;
    dVar26 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    dVar75 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    uVar25 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
    dVar60 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar60)) & uVar25);
    uVar25 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar25);
    uVar25 = -(ulonglong)(0.0 <= dVar75 + -9.99999993922529e-09);
    dVar75 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar75)) & uVar25);
    auVar32._8_8_ = -(ulonglong)(0.0 <= dStack_320);
    auVar32._0_8_ = -(ulonglong)(0.0 <= local_328);
    auVar63 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar47 = (double)(~-(ulonglong)(0.0 <= local_318) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_318) & 0x3ff0000000000000);
    dVar40 = auVar63._0_8_;
    local_168 = local_168 * dVar60 * dVar40;
    local_160 = local_160 * dVar60 * dVar40;
    local_158 = dVar60 * local_158 * dVar40;
    dVar60 = auVar63._8_8_;
    local_138 = dVar26 * local_138 * dVar60;
    local_140 = local_140 * dVar26 * dVar60;
    local_148 = dVar60 * local_148 * dVar26;
    local_118 = dVar75 * local_118 * dVar47;
    local_120 = local_120 * dVar75 * dVar47;
    local_128 = dVar47 * local_128 * dVar75;
    FUN_14481fd10(&local_2f8,&local_168);
    dVar60 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
    dVar26 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
    auVar45._0_8_ = dVar60 + dVar26;
    auVar45._8_8_ = dVar60 + dVar26;
    auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
    auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
    auVar63 = sqrtpd(auVar45,auVar45);
    auVar63 = divpd(_DAT_149934d80,auVar63);
    auVar52._0_8_ = auVar63._0_8_ * local_2e8;
    auVar52._8_8_ = auVar63._8_8_ * dStack_2e0;
    auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar33);
    param_2[8] = dVar39;
    param_2[9] = dVar27;
    param_2[10] = dVar69;
    param_2[0xb] = dVar73;
    *param_2 = (double)((ulonglong)(local_2f8 * auVar63._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_2f0 * auVar63._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar36;
  }
  param_2[4] = local_108;
  param_2[5] = dStack_100;
  param_2[6] = local_f8;
  param_2[7] = 0.0;
LAB_1400866b2:
  if ((local_e0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140086810 FUN_140086810 body=228 status=ok
// SIG undefined FUN_140086810(void)

longlong FUN_140086810(void)

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
  if (DAT_14cb55b20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148629d2f;
    local_40 = FUN_1464b4879;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"CameraModeViewTarget",&DAT_14cb55b20,&DAT_148629d2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400868f6 FUN_1400868f6 body=41 status=ok
// SIG undefined FUN_1400868f6(void)

void FUN_1400868f6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14008746e();
  return;
}



// FUNCTION 140086920 FUN_140086920 body=66 status=ok
// SIG undefined FUN_140086920(void)

int FUN_140086920(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140089e08(param_1,iVar1);
  }
  FUN_140086962((longlong)iVar1 * 0x18 + *param_1,1);
  return iVar1;
}



// FUNCTION 140086962 FUN_140086962 body=45 status=ok
// SIG undefined FUN_140086962(void)

void FUN_140086962(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 1) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140086990 FUN_140086990 body=228 status=ok
// SIG undefined FUN_140086990(void)

longlong FUN_140086990(void)

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
  if (DAT_14cbc0ff0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459978be;
    local_38 = &LAB_148cc2e33;
    local_40 = &LAB_14102849d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponBehavior_Charge",&DAT_14cbc0ff0,FUN_14661a230);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0ff0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140086a76 FUN_140086a76 body=242 status=ok
// SIG undefined FUN_140086a76(void)

ulonglong FUN_140086a76(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar3 = 0;
  if ((char)param_1[0x18] != '\0') {
    if ((char)param_1[0x18] == '\x01') {
      fVar4 = (float)*(int *)((longlong)param_1 + 0xbc) * *(float *)(param_1 + 0x12);
      if (0.0 < fVar4) {
        lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
        dVar2 = (*(double *)(lVar1 + 0x6d0) - (double)param_1[0x1b]) / (double)fVar4;
        if (1.0 <= dVar2) {
          dVar2 = 1.0;
        }
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
        uVar3 = (ulonglong)(uint)(float)(1.0 - dVar2);
      }
    }
    else {
      fVar4 = (float)*(int *)((longlong)param_1 + 0xbc) * *(float *)((longlong)param_1 + 0x84);
      if (fVar4 <= 0.0) {
        uVar3 = 0x3f800000;
      }
      else {
        lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
        dVar2 = (*(double *)(lVar1 + 0x6d0) - (double)param_1[0x1b]) / (double)fVar4;
        if (1.0 <= dVar2) {
          dVar2 = 1.0;
        }
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
        uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
      }
    }
  }
  return uVar3;
}



// FUNCTION 140086b68 FUN_140086b68 body=199 status=ok
// SIG undefined FUN_140086b68(void)

void FUN_140086b68(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
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
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
    }
  }
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 7)) {
    uVar2 = uVar1 >> 7 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 140086c3a FUN_140086c3a body=228 status=ok
// SIG undefined FUN_140086c3a(void)

longlong FUN_140086c3a(void)

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
  if (DAT_14cb93f30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459977d2;
    local_38 = &LAB_148a11c2a;
    local_40 = &LAB_146574b59;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_Fire",&DAT_14cb93f30,FUN_146574b32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb93f30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140086d1f FUN_140086d1f body=230 status=ok
// SIG undefined FUN_140086d1f(void)

float FUN_140086d1f(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar8 = 0.0;
  if (((param_1 >> 0x20 != 0) && (uVar5 = (uint)param_1, -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    uVar7 = (ulonglong)((uint)(param_1 >> 0x10) & 0x7fff);
    plVar1 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar7 * 8));
    if (((plVar1 != (longlong *)0x0) && (iVar6 = (int)(param_1 >> 0x20), (int)plVar1[2] == iVar6))
       && (((*(uint *)(plVar1 + 1) & 0x10200000) == 0 && ((longlong *)*plVar1 != (longlong *)0x0))))
    {
      plVar3 = (longlong *)0x0;
      if ((*(uint *)(plVar1 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*plVar1;
      }
      lVar2 = (**(code **)(*plVar3 + 0x180))();
      if (lVar2 != 0) {
        if ((((int)uVar5 < DAT_14c9647dc) &&
            (puVar4 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + uVar7 * 8)), puVar4 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar4 + 2) == iVar6 && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
          plVar1 = (longlong *)*puVar4;
        }
        else {
          plVar1 = (longlong *)0x0;
        }
        lVar2 = (**(code **)(*plVar1 + 0x180))();
        fVar8 = (float)*(double *)(lVar2 + 0x6d0);
      }
    }
  }
  return fVar8;
}



// FUNCTION 140086e06 FUN_140086e06 body=1142 status=ok
// SIG undefined FUN_140086e06(void)

void FUN_140086e06(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar2 = *(uint *)(param_1 + 0x18), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x1c))))) ||
     (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar10 = *plVar11, lVar10 == 0)))) {
LAB_14008702a:
    if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cb939a8 == 0) {
    local_90 = &local_78;
    local_78 = FUN_140940982;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_146522c26;
    local_98 = &LAB_148a0db91;
    local_a0 = &LAB_146572ba7;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 8;
    local_c8 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) goto LAB_14008702a;
  bVar1 = *(byte *)(lVar10 + 0xbd8);
  fVar13 = 0.0;
  if ((int)(uint)bVar1 < *(int *)(lVar10 + 0xbf0)) {
    plVar11 = *(longlong **)
               (*(longlong *)(lVar10 + 0xbe8) + 0x10 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    fVar12 = 0.0;
    fVar14 = 0.0;
    if (plVar11 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar11 + 0x2c0))(plVar11);
      iVar6 = (**(code **)(*plVar11 + 0x2e8))(plVar11);
      iVar7 = (**(code **)(*plVar11 + 0x2c8))(plVar11);
      fVar14 = (float)iVar5;
      fVar13 = (float)iVar6;
      fVar12 = (float)iVar7;
    }
  }
  else {
    fVar12 = 0.0;
    fVar14 = 0.0;
  }
  uVar3 = *param_2;
  lVar10 = *(longlong *)(param_1 + 0x590);
  if (lVar10 == 0) {
    uVar8 = FUN_1407f787c();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x590) = lVar10;
  }
  lVar9 = *(longlong *)(param_1 + 0x598);
  if (((lVar9 == 0) && (lVar9 = 0, lVar10 != 0)) && (*(longlong *)(param_1 + 0x588) != 0)) {
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if (plVar11 == (longlong *)0x0) {
LAB_140087268:
      lVar9 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11);
      if (cVar4 == '\0') goto LAB_140087268;
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x588));
    }
    *(longlong *)(param_1 + 0x598) = lVar9;
  }
  local_c8 = local_c8 & 0xffffff00;
  FUN_1447997cc(uVar3,lVar9,fVar14,0);
  uVar3 = *param_2;
  lVar10 = *(longlong *)(param_1 + 0x5a8);
  if (lVar10 == 0) {
    uVar8 = FUN_1407f787c();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x5a8) = lVar10;
  }
  lVar9 = *(longlong *)(param_1 + 0x5b0);
  if (((lVar9 == 0) && (lVar9 = 0, lVar10 != 0)) && (*(longlong *)(param_1 + 0x5a0) != 0)) {
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if (plVar11 == (longlong *)0x0) {
LAB_14008726f:
      lVar9 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11);
      if (cVar4 == '\0') goto LAB_14008726f;
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x5a0));
    }
    *(longlong *)(param_1 + 0x5b0) = lVar9;
  }
  local_c8 = local_c8 & 0xffffff00;
  FUN_1447997cc(uVar3,lVar9,fVar13,0);
  uVar3 = *param_2;
  lVar10 = *(longlong *)(param_1 + 0x518);
  if (lVar10 == 0) {
    uVar8 = FUN_1407f787c();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x518) = lVar10;
  }
  lVar9 = *(longlong *)(param_1 + 0x520);
  if (((lVar9 != 0) || (lVar9 = 0, lVar10 == 0)) || (*(longlong *)(param_1 + 0x510) == 0))
  goto LAB_140086fe1;
  plVar11 = *(longlong **)(lVar10 + 0xb8);
  if (plVar11 == (longlong *)0x0) {
LAB_140087276:
    lVar9 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11);
    if (cVar4 == '\0') goto LAB_140087276;
    uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
    lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x510));
  }
  *(longlong *)(param_1 + 0x520) = lVar9;
LAB_140086fe1:
  local_c8 = local_c8 & 0xffffff00;
  FUN_1447997cc(uVar3,lVar9,fVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14008727e FUN_14008727e body=299 status=ok
// SIG undefined FUN_14008727e(void)

undefined4 *
FUN_14008727e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140088ad4(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1400873aa(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14008883c(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400873aa FUN_1400873aa body=196 status=ok
// SIG undefined FUN_1400873aa(void)

void FUN_1400873aa(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14008a240(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1400873d8;
    }
  }
  uVar6 = 0;
LAB_1400873d8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14008746e FUN_14008746e body=332 status=ok
// SIG undefined FUN_14008746e(void)

void FUN_14008746e(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400874dc;
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
LAB_1400874dc:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,4);
  }
  return;
}



// FUNCTION 1400875ba FUN_1400875ba body=2187 status=ok
// SIG undefined FUN_1400875ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400875ba(double *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_2b8 [32];
  double local_298;
  double local_290;
  double local_288;
  double dStack_280;
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
  undefined1 local_1b8 [16];
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
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar5;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  auVar31 = *(undefined1 (*) [16])(param_2 + 8);
  dVar29 = auVar31._0_8_;
  dVar27 = auVar31._8_8_;
  auVar8 = *(undefined1 (*) [16])(param_2 + 10);
  dVar12 = auVar8._0_8_;
  auVar39 = *(undefined1 (*) [16])(param_1 + 8);
  dVar47 = auVar39._0_8_;
  dVar14 = auVar39._8_8_;
  auVar9 = *(undefined1 (*) [16])(param_1 + 10);
  dVar13 = auVar9._0_8_;
  auVar31 = minpd(auVar39,auVar31);
  auVar34 = minpd(auVar9,auVar8);
  auVar39._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  iVar23 = movmskpd((int)local_d0,auVar39);
  auVar31._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar24 = movmskpd((int)param_1,auVar31);
  if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
    dVar15 = *param_1;
    dVar16 = param_1[1];
    dVar17 = param_1[2];
    dVar18 = param_1[3];
    dVar19 = *param_2;
    dVar20 = param_2[1];
    dVar21 = param_2[2];
    dVar22 = param_2[3];
    dVar3 = param_2[3];
    dVar30 = param_2[3];
    dVar4 = *param_2;
    dVar5 = *param_2;
    dVar6 = param_2[1];
    dVar33 = param_2[1];
    dVar36 = param_2[2];
    dVar37 = param_2[2];
    dVar42 = param_1[4] * dVar29;
    dVar43 = param_1[5] * dVar27;
    dVar44 = param_1[6] * dVar12;
    dVar45 = param_1[7] * auVar8._8_8_;
    dVar40 = dVar43 * dVar19 - dVar20 * dVar42;
    dVar41 = dVar44 * dVar20 - dVar21 * dVar43;
    dVar46 = dVar42 * dVar21 - dVar19 * dVar44;
    dVar48 = dVar45 * dVar22 - dVar22 * dVar45;
    dVar41 = dVar41 + dVar41;
    dVar46 = dVar46 + dVar46;
    dVar40 = dVar40 + dVar40;
    dVar48 = dVar48 + dVar48;
    dVar38 = param_2[4];
    dVar10 = param_2[5];
    dVar7 = param_2[6];
    dVar11 = param_2[7];
    *param_1 = dVar16 * dVar36 * -1.0 + dVar17 * dVar6 + dVar18 * dVar4 * 1.0 + dVar15 * dVar3;
    param_1[1] = dVar15 * dVar37 * 1.0 + dVar18 * dVar33 + dVar17 * dVar5 * -1.0 + dVar16 * dVar30;
    param_1[2] = dVar18 * dVar36 * 1.0 + ((dVar4 * dVar16 * 1.0 + dVar17 * dVar3) - dVar15 * dVar6);
    param_1[3] = dVar17 * dVar37 * -1.0 +
                 ((dVar5 * dVar15 * -1.0 + dVar18 * dVar30) - dVar16 * dVar33);
    param_1[4] = (dVar40 * dVar20 - dVar21 * dVar46) + dVar3 * dVar41 + dVar42 + dVar38;
    param_1[5] = (dVar41 * dVar21 - dVar40 * dVar19) + dVar30 * dVar46 + dVar43 + dVar10;
    param_1[6] = (dVar46 * dVar19 - dVar20 * dVar41) + dVar3 * dVar40 + dVar44 + dVar7;
    param_1[7] = (dVar48 * dVar22 - dVar48 * dVar22) + dVar30 * dVar48 + dVar45 + dVar11;
    param_1[8] = dVar47 * dVar29;
    param_1[9] = dVar14 * dVar27;
  }
  else {
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = param_2[2];
    dVar33 = dVar5 + dVar5;
    dVar36 = dVar6 + dVar6;
    dVar3 = dVar4 * (dVar4 + dVar4);
    local_188 = (1.0 - (dVar3 + dVar5 * dVar33)) * dVar12;
    dVar30 = param_2[3];
    dVar37 = dVar36 * dVar30;
    dVar38 = (dVar4 + dVar4) * param_2[3];
    dVar30 = dVar33 * dVar30;
    local_198 = (dVar30 + *param_2 * dVar36) * dVar12;
    local_1d8 = (1.0 - (dVar6 * dVar36 + dVar5 * dVar33)) * dVar29;
    dVar3 = (1.0 - (dVar6 * dVar36 + dVar3)) * dVar27;
    dStack_1d0 = (dVar33 * dVar4 + dVar37) * dVar29;
    local_1a8 = (dVar36 * dVar5 + dVar38) * dVar27;
    dStack_190 = (dVar36 * dVar5 - dVar38) * dVar12;
    local_1c8 = (*param_2 * dVar36 - dVar30) * dVar29;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar3,0);
    local_1b8._0_8_ = (dVar33 * dVar4 - dVar37) * dVar27;
    local_1b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_2[4];
    dStack_170 = param_2[5];
    local_168 = param_2[6];
    uStack_160 = 0x3ff0000000000000;
    dVar4 = *param_1;
    dVar5 = param_1[1];
    dVar6 = param_1[2];
    dVar33 = dVar5 + dVar5;
    dVar36 = dVar6 + dVar6;
    dVar3 = dVar4 * (dVar4 + dVar4);
    local_208 = (1.0 - (dVar3 + dVar5 * dVar33)) * dVar13;
    dVar30 = param_1[3];
    dVar37 = dVar36 * dVar30;
    dVar38 = (dVar4 + dVar4) * param_1[3];
    dVar30 = dVar33 * dVar30;
    local_218 = (dVar30 + *param_1 * dVar36) * dVar13;
    local_238 = (dVar33 * dVar4 - dVar37) * dVar14;
    dStack_210 = (dVar36 * dVar5 - dVar38) * dVar13;
    local_288 = dVar29 * dVar47;
    dStack_280 = dVar27 * dVar14;
    local_258 = (1.0 - (dVar6 * dVar36 + dVar5 * dVar33)) * dVar47;
    dStack_230 = (1.0 - (dVar6 * dVar36 + dVar3)) * dVar14;
    dStack_250 = (dVar33 * dVar4 + dVar37) * dVar47;
    local_228 = (dVar36 * dVar5 + dVar38) * dVar14;
    local_248 = (*param_1 * dVar36 - dVar30) * dVar47;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_1[4];
    dStack_1f0 = param_1[5];
    local_1e8 = param_1[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    local_290 = local_148;
    dVar29 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_298 = local_128;
    dVar47 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar27 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar25 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
    dVar29 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar29)) & uVar25);
    uVar25 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
    dVar47 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar25);
    uVar25 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
    dVar27 = (double)(~uVar25 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar25);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dStack_280);
    auVar34._0_8_ = -(ulonglong)(0.0 <= local_288);
    auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
    uVar25 = -(ulonglong)(0.0 <= dVar12 * dVar13);
    dVar14 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
    dVar30 = auVar31._0_8_;
    local_158 = local_158 * dVar29 * dVar30;
    local_150 = local_150 * dVar29 * dVar30;
    local_148 = dVar29 * local_148 * dVar30;
    dVar29 = auVar31._8_8_;
    local_128 = dVar47 * local_128 * dVar29;
    local_130 = local_130 * dVar47 * dVar29;
    local_138 = dVar29 * local_138 * dVar47;
    local_108 = dVar27 * local_108 * dVar14;
    local_110 = local_110 * dVar27 * dVar14;
    local_118 = dVar14 * local_118 * dVar27;
    FUN_14481fd10(&local_278,&local_158);
    dVar29 = local_268 * local_268 + local_278 * local_278;
    dVar47 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar32._0_8_ = dVar29 + dVar47;
    auVar32._8_8_ = dVar29 + dVar47;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar31 = sqrtpd(auVar32,auVar32);
    auVar31 = divpd(_DAT_149934d80,auVar31);
    auVar35._0_8_ = auVar31._0_8_ * local_268;
    auVar35._8_8_ = auVar31._8_8_ * dStack_260;
    auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar28);
    param_1[8] = local_288;
    param_1[9] = dStack_280;
    *param_1 = (double)((ulonglong)(local_278 * auVar31._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
    param_1[1] = (double)((ulonglong)(dStack_270 * auVar31._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar39;
    param_1[4] = local_f8;
    param_1[5] = dStack_f0;
    param_1[6] = local_e8;
    param_1[7] = 0.0;
  }
  dVar29 = auVar9._8_8_ * auVar8._8_8_;
  auVar8._8_4_ = SUB84(dVar29,0);
  auVar8._0_8_ = dVar13 * dVar12;
  auVar8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar8;
  *(float *)(param_1 + 0xc) = *(float *)(param_2 + 0xc) * *(float *)(param_1 + 0xc);
  fVar1 = *(float *)((longlong)param_1 + 100);
  fVar26 = -1.0;
  if (((0.0 <= fVar1) && (fVar2 = *(float *)((longlong)param_2 + 100), 0.0 <= fVar2)) &&
     (fVar26 = fVar2, fVar2 <= fVar1)) {
    fVar26 = fVar1;
  }
  *(float *)((longlong)param_1 + 100) = fVar26;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | *(byte *)(param_2 + 0xd);
  if ((local_d0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140087e46 FUN_140087e46 body=376 status=ok
// SIG undefined FUN_140087e46(void)

void FUN_140087e46(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x270);
  lVar2 = param_1 + 0x280;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x298) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x298);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      puVar3 = *(undefined8 **)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        plVar5 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x18 + 8);
        if ((*(char *)(puVar3 + 1) == '\x01') && (DAT_14cb259f8 != 0)) {
          FUN_140993502(puVar3);
          *(undefined1 *)(puVar3 + 1) = 0;
          LOCK();
          *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
          UNLOCK();
          puVar3 = (undefined8 *)*plVar5;
          if (puVar3 != (undefined8 *)0x0) goto LAB_140087f58;
        }
        else {
LAB_140087f58:
          (**(code **)*puVar3)(puVar3,1);
        }
        *plVar5 = 0;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar4) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  FUN_140087fc0(plVar1,0);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140087fc0 FUN_140087fc0 body=107 status=ok
// SIG undefined FUN_140087fc0(void)

void FUN_140087fc0(longlong param_1,uint param_2)

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
LAB_14008800f:
      FUN_140089248(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147f80498(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14008800f;
  FUN_14008802c(param_1);
  FUN_140089248(param_1,param_2);
  return;
}



// FUNCTION 14008802c FUN_14008802c body=335 status=ok
// SIG undefined FUN_14008802c(void)

void FUN_14008802c(longlong *param_1)

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



// FUNCTION 14008817c FUN_14008817c body=1312 status=ok
// SIG undefined FUN_14008817c(void)

void FUN_14008817c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  float fVar23;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  uint *local_d0;
  float local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar10 = param_1[4];
  if (lVar10 == 0) {
    uVar9 = FUN_14016979c();
    lVar10 = FUN_14477b664(uVar9);
    param_1[4] = lVar10;
  }
  lVar11 = param_1[5];
  if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (param_1[3] != 0)) {
    plVar4 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
      lVar11 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar11 = FUN_144aff482(uVar9,param_1 + 3);
    }
    param_1[5] = lVar11;
  }
  FUN_1400606f6(&local_a0,lVar11,param_1 + 9);
  pfVar12 = local_70;
  if (local_70 == (float *)0x0) {
    pfVar12 = &local_a0;
  }
  pfVar16 = (float *)&DAT_14c9a40e0;
  if (0 < local_68) {
    pfVar16 = pfVar12;
  }
  pfVar12 = &local_c8;
  FUN_1400603ec(pfVar12,lVar11,pfVar16);
  pfVar16 = local_70;
  if (local_70 == (float *)0x0) {
    pfVar16 = &local_a0;
  }
  FUN_1446fdf58(pfVar16,local_68);
  if (local_70 != (float *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 == 3) {
    uVar21 = 3;
    fVar23 = local_c8;
  }
  else {
    pfVar16 = &local_a0;
    FUN_1400b56fe(pfVar16,&local_c8,3);
    fVar23 = 0.0;
    if (local_80 != 0) {
      fVar23 = local_a0;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar16 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar5)(pfVar16);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    uVar21 = (uint)local_a8;
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar21 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_b0) {
      pfVar12 = (float *)CONCAT44(uStack_c4,local_c8);
    }
    (*pcVar5)(pfVar12);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x1f) - fVar23)) {
    puVar22 = (uint *)(param_1 + 0x17);
    iVar2 = (int)param_1[0x1a];
    if (iVar2 == 0) {
      uVar18 = 1;
      uVar20 = 0;
      iVar19 = 0;
      iVar8 = 0;
    }
    else {
      puVar13 = (uint *)param_1[0x19];
      if ((uint *)param_1[0x19] == (uint *)0x0) {
        puVar13 = puVar22;
      }
      uVar21 = *puVar13;
      if (uVar21 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar20 = 0;
        uVar18 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar18 = uVar20;
        }
        iVar19 = 0;
        do {
          if (uVar18 == uVar20) goto LAB_14008838a;
          iVar19 = iVar19 + 0x20;
          uVar21 = puVar13[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar20 = 0;
        iVar19 = 0;
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21);
      uVar1 = uVar18 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar19 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar21 = 0xffffffff;
      local_d0 = puVar22;
      do {
        plVar4 = *(longlong **)(param_1[0x15] + 8 + (longlong)iVar8 * 0x20);
        if (((plVar4 != (longlong *)0x0) &&
            (lVar10 = *(longlong *)((longlong)iVar8 * 0x20 + param_1[0x15] + 0x10), lVar10 != -1))
           && (*plVar4 == lVar10)) {
          *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + 1;
          lVar10 = param_1[1];
          if (lVar10 == 0) {
            if (DAT_14cb256c8 == 0) {
              uVar9 = FUN_140cd185c();
              DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar9,L"WwiseGameParameterDef");
            }
            lVar10 = FUN_14477b664(DAT_14cb256c8);
            param_1[1] = lVar10;
          }
          lVar11 = param_1[2];
          if (lVar11 == 0) {
            if (lVar10 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              if (*param_1 != 0) {
                plVar6 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar6 == (longlong *)0x0) ||
                   (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
                  lVar11 = 0;
                }
                else {
                  uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
                  lVar11 = FUN_144aff482(uVar9,param_1);
                }
                param_1[2] = lVar11;
                puVar22 = local_d0;
              }
            }
          }
          local_d8 = 0;
          FUN_1447997cc(plVar4,lVar11,fVar23,0);
          *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + -1;
          if (((int)plVar4[0x26] < 1) && (FUN_1400847bc(plVar4 + 0x17,0), (int)plVar4[0x21] == 0)) {
            FUN_140087e46(plVar4);
            if (*plVar4 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_1400884fa;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
            }
          }
        }
LAB_1400884fa:
        uVar21 = uVar21 & ~(uint)uVar18;
        puVar13 = (uint *)param_1[0x19];
        if ((uint *)param_1[0x19] == (uint *)0x0) {
          puVar13 = puVar22;
        }
        iVar3 = (int)param_1[0x1a];
        iVar8 = (int)uVar20;
        lVar10 = (longlong)iVar8;
        uVar17 = puVar13[lVar10] & uVar21;
        if (uVar17 == 0) {
          iVar14 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar14 = iVar3 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar8) {
            iVar15 = iVar8;
          }
          if (iVar8 < iVar14) {
            lVar11 = 0;
            do {
              uVar17 = puVar13[lVar10 + lVar11 + 1];
              if (uVar17 != 0) {
                uVar20 = (ulonglong)(iVar8 + (int)lVar11 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14008857b;
              }
              iVar19 = iVar19 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar15 - lVar10 != lVar11);
            uVar21 = 0xffffffff;
            iVar8 = iVar15;
          }
          uVar20 = (ulonglong)(iVar8 + 1);
          puVar22 = local_d0;
          iVar8 = iVar3;
        }
        else {
LAB_14008857b:
          uVar18 = (ulonglong)(-uVar17 & uVar17);
          uVar1 = uVar18 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar8 = (iVar19 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
LAB_14008838a:
    *(float *)(param_1 + 0x1f) = fVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008869e FUN_14008869e body=412 status=ok
// SIG undefined FUN_14008869e(void)

void FUN_14008869e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_318 [40];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined4 local_2a0;
  undefined4 local_280;
  undefined4 local_260;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_204;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_4c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2f0 = param_2;
  FUN_14479d478(param_1 + 2,&local_2f0,0);
  memset(&uStack_2c8,0,0x2a0);
  local_2e8 = 0xffffffffffffffff;
  local_2a0 = 0;
  local_280 = 0;
  local_260 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0x1f;
  local_230 = 0;
  uStack_228 = 0;
  local_204 = 0xffffffff00000080;
  local_1e0 = 0;
  local_1d8 = 0x3f800000;
  local_118 = 0x100000000;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_f8 = DAT_14c8464f0;
  local_108 = DAT_14c8464e0;
  uStack_100 = DAT_14c8464e8;
  local_e0 = DAT_14c8464f0;
  local_f0 = DAT_14c8464e0;
  uStack_e8 = DAT_14c8464e8;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_a8 = DAT_14c8463d0;
  uStack_a0 = DAT_14c8463d8;
  local_98 = (undefined4)DAT_14c8463e0;
  uStack_94 = DAT_14c8463e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8463e8;
  uStack_8c = DAT_14c8463e8._4_4_;
  local_80 = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  FUN_140089446(local_2f0,&local_2e8);
  FUN_140088e14(&local_2e8);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1407c33ba(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_2f0;
  if ((local_28 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008883c FUN_14008883c body=664 status=ok
// SIG undefined FUN_14008883c(void)

void FUN_14008883c(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1400888a0;
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
LAB_1400888a0:
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
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar6 + lVar13) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar6 + lVar13)) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
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



// FUNCTION 140088ad4 FUN_140088ad4 body=706 status=ok
// SIG undefined FUN_140088ad4(void)

int * FUN_140088ad4(longlong *param_1,int *param_2)

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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140088c89;
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
LAB_140088c89:
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



// FUNCTION 140088d96 FUN_140088d96 body=125 status=ok
// SIG undefined FUN_140088d96(void)

void FUN_140088d96(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144904448(param_1 + 2);
  if (cVar1 == '\0') {
    local_48 = 0;
    FUN_14084a448(*param_1,&local_38,param_1[1],param_2);
    param_1[2] = local_38;
    param_1[3] = local_30;
    param_1[4] = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140088e14 FUN_140088e14 body=1018 status=ok
// SIG undefined FUN_140088e14(void)

void FUN_140088e14(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  FUN_140089248((longlong *)(param_1 + 0x270),0);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400892c4((longlong *)(param_1 + 0xb8),0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14008920e(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x98) == 0) {
LAB_140088ef1:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x98) = 0;
      goto LAB_140088ef1;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x88) == 0) {
LAB_140088f11:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x88) = 0;
      goto LAB_140088f11;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x78) == 0) {
LAB_140088f2b:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x78) = 0;
      goto LAB_140088f2b;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_140088f45:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x68) = 0;
      goto LAB_140088f45;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) == 0) {
LAB_140088f5f:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_140088f5f;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_140088f79:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto LAB_140088f79;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_140088f93:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_140088f93;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140088fb9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140088fb9:
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14008920e FUN_14008920e body=58 status=ok
// SIG undefined FUN_14008920e(void)

void FUN_14008920e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
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
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140089248 FUN_140089248 body=123 status=ok
// SIG undefined FUN_140089248(void)

void FUN_140089248(longlong param_1,int param_2)

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



// FUNCTION 1400892c4 FUN_1400892c4 body=384 status=ok
// SIG undefined FUN_1400892c4(void)

void FUN_1400892c4(longlong *param_1,int param_2)

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



// FUNCTION 140089446 FUN_140089446 body=2498 status=ok
// SIG undefined FUN_140089446(void)

undefined4 * FUN_140089446(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  
  uVar4 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0;
  }
  plVar1 = (longlong *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  uVar4 = param_2[10];
  param_2[10] = 0;
  if (param_1[10] == 0) {
LAB_1400894b6:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[10] = 0;
      goto LAB_1400894b6;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar6;
  param_1[10] = uVar4;
  plVar1 = (longlong *)(param_1 + 0xc);
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  uVar4 = param_2[0xe];
  param_2[0xe] = 0;
  if (param_1[0xe] == 0) {
LAB_1400894ed:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[0xe] = 0;
      goto LAB_1400894ed;
    }
  }
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  param_1[0xe] = uVar4;
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar4 = param_2[0x12];
  param_2[0x12] = 0;
  if (param_1[0x12] == 0) {
LAB_140089524:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[0x12] = 0;
      goto LAB_140089524;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  param_1[0x12] = uVar4;
  plVar1 = (longlong *)(param_1 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x14) = 0;
  uVar4 = param_2[0x16];
  param_2[0x16] = 0;
  if (param_1[0x16] == 0) {
LAB_14008955b:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[0x16] = 0;
      goto LAB_14008955b;
    }
  }
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  param_1[0x16] = uVar4;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar4 = param_2[0x1a];
  param_2[0x1a] = 0;
  if (param_1[0x1a] == 0) {
LAB_140089592:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[0x1a] = 0;
      goto LAB_140089592;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  param_1[0x1a] = uVar4;
  plVar1 = (longlong *)(param_1 + 0x1c);
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  uVar4 = param_2[0x1e];
  param_2[0x1e] = 0;
  if (param_1[0x1e] == 0) {
LAB_1400895c9:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[0x1e] = 0;
      goto LAB_1400895c9;
    }
  }
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  param_1[0x1e] = uVar4;
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  uVar4 = param_2[0x22];
  param_2[0x22] = 0;
  if (param_1[0x22] == 0) {
LAB_140089612:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      param_1[0x22] = 0;
      goto LAB_140089612;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  param_1[0x22] = uVar4;
  plVar1 = (longlong *)(param_1 + 0x24);
  uVar6 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x24) = 0;
  uVar4 = param_2[0x26];
  param_2[0x26] = 0;
  if (param_1[0x26] != 0) {
    puVar7 = (undefined8 *)*plVar1;
    if (puVar7 == (undefined8 *)0x0) goto LAB_14008966d;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    param_1[0x26] = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14008966d:
  *(undefined8 *)(param_1 + 0x24) = uVar6;
  param_1[0x26] = uVar4;
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
    uVar6 = *(undefined8 *)(param_2 + 0x44);
    uVar11 = *(undefined8 *)(param_2 + 0x46);
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    uVar13 = *(undefined8 *)(param_2 + 0x4a);
    uVar14 = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
    *(undefined8 *)(param_1 + 0x44) = uVar6;
    *(undefined8 *)(param_1 + 0x46) = uVar11;
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    *(undefined8 *)(param_1 + 0x4a) = uVar13;
    *(undefined8 *)(param_1 + 0x4c) = uVar14;
  }
  else {
    FUN_14008920e(*(undefined8 *)(param_1 + 0x28),param_1[0x2a]);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    uVar26 = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    param_1[0x2a] = param_2[0x2a];
    param_1[0x2b] = param_2[0x2b];
    *(undefined8 *)(param_2 + 0x2a) = 0;
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
    puVar2 = param_1 + 0x32;
    iVar5 = param_1[0x38];
    if (iVar5 == 0) {
      uVar24 = 1;
      iVar17 = 0;
      iVar21 = 0;
    }
    else {
      puVar16 = *(uint **)(param_1 + 0x36);
      if (*(uint **)(param_1 + 0x36) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      uVar25 = *puVar16;
      if (uVar25 == 0) {
        iVar17 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar17 = iVar5 + -1;
        }
        uVar26 = 0;
        uVar24 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar24 = uVar26;
        }
        iVar21 = 0;
        do {
          if (uVar24 == uVar26) goto LAB_140089840;
          iVar21 = iVar21 + 0x20;
          uVar25 = puVar16[uVar26 + 1];
          uVar26 = uVar26 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar26 = 0;
        iVar21 = 0;
      }
      uVar24 = (ulonglong)(-uVar25 & uVar25);
      uVar3 = uVar24 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar17 = (iVar21 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar17) {
        iVar17 = iVar5;
      }
    }
    if (iVar17 != iVar5) {
      uVar25 = 0xffffffff;
      iVar15 = iVar5;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e) + 8 + (longlong)iVar17 * 0x20) != 0) {
          FUN_1400020a8();
          iVar15 = param_1[0x38];
        }
        uVar25 = uVar25 & ~(uint)uVar24;
        puVar16 = *(uint **)(param_1 + 0x36);
        if (*(uint **)(param_1 + 0x36) == (uint *)0x0) {
          puVar16 = puVar2;
        }
        iVar17 = (int)uVar26;
        lVar23 = (longlong)iVar17;
        uVar18 = puVar16[lVar23] & uVar25;
        if (uVar18 == 0) {
          iVar19 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar19 = iVar15 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar20 = iVar19;
          if (iVar19 < iVar17) {
            iVar20 = iVar17;
          }
          if (iVar17 < iVar19) {
            lVar22 = 0;
            do {
              uVar18 = puVar16[lVar23 + lVar22 + 1];
              if (uVar18 != 0) {
                uVar26 = (ulonglong)(iVar17 + (int)lVar22 + 1);
                uVar25 = 0xffffffff;
                goto LAB_140089813;
              }
              iVar21 = iVar21 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar20 - lVar23 != lVar22);
            uVar25 = 0xffffffff;
            iVar17 = iVar20;
          }
          uVar26 = (ulonglong)(iVar17 + 1);
          iVar17 = iVar15;
        }
        else {
LAB_140089813:
          uVar24 = (ulonglong)(-uVar18 & uVar18);
          uVar3 = uVar24 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar17 = (iVar21 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar17) {
            iVar17 = iVar15;
          }
        }
      } while (iVar17 != iVar5);
    }
LAB_140089840:
    if (*(longlong *)(param_1 + 0x2e) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_2 + 0x2e) = 0;
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = param_2[0x31];
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (*(longlong *)(param_2 + 0x36) == 0) {
      uVar4 = param_2[0x33];
      uVar8 = param_2[0x34];
      uVar9 = param_2[0x35];
      *puVar2 = param_2[0x32];
      param_1[0x33] = uVar4;
      param_1[0x34] = uVar8;
      param_1[0x35] = uVar9;
    }
    if (*(longlong *)(param_1 + 0x36) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_2 + 0x36) = 0;
    param_1[0x38] = param_2[0x38];
    param_1[0x39] = param_2[0x39];
    *(undefined8 *)(param_2 + 0x38) = 0;
    param_1[0x3a] = param_2[0x3a];
    param_1[0x3b] = param_2[0x3b];
    *(undefined8 *)(param_2 + 0x3a) = 0xffffffff;
    if (*(longlong *)(param_2 + 0x3e) == 0) {
      param_1[0x3c] = param_2[0x3c];
    }
    if (*(longlong *)(param_1 + 0x3e) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
    *(undefined8 *)(param_2 + 0x3e) = 0;
    param_1[0x40] = param_2[0x40];
    param_2[0x40] = 0;
    uVar4 = param_2[0x42];
    uVar8 = param_2[0x43];
    uVar9 = param_2[0x44];
    uVar10 = param_2[0x45];
    uVar6 = *(undefined8 *)(param_2 + 0x46);
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    uVar12 = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
    *(undefined8 *)(param_1 + 0x4c) = uVar12;
    *(undefined8 *)(param_1 + 0x46) = uVar6;
    *(undefined8 *)(param_1 + 0x48) = uVar11;
    param_1[0x42] = uVar4;
    param_1[0x43] = uVar8;
    param_1[0x44] = uVar9;
    param_1[0x45] = uVar10;
    if (param_1 != param_2) {
      if (*(longlong *)(param_2 + 0x70) == 0) {
        memmove(param_1 + 0x50,param_2 + 0x50,0x80);
      }
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_2 + 0x70) = 0;
      param_1[0x74] = param_2[0x74];
      param_1[0x75] = param_2[0x75];
      *(undefined8 *)(param_2 + 0x74) = 0x100000000;
      memcpy(param_1 + 0x78,param_2 + 0x78,0x8d);
      if (*(longlong *)(param_1 + 0x9c) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
      *(undefined8 *)(param_2 + 0x9c) = 0;
      param_1[0x9e] = param_2[0x9e];
      param_1[0x9f] = param_2[0x9f];
      *(undefined8 *)(param_2 + 0x9e) = 0;
      if (*(longlong *)(param_2 + 0xa4) == 0) {
        uVar4 = param_2[0xa1];
        uVar8 = param_2[0xa2];
        uVar9 = param_2[0xa3];
        param_1[0xa0] = param_2[0xa0];
        param_1[0xa1] = uVar4;
        param_1[0xa2] = uVar8;
        param_1[0xa3] = uVar9;
      }
      if (*(longlong *)(param_1 + 0xa4) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
      *(undefined8 *)(param_2 + 0xa4) = 0;
      param_1[0xa6] = param_2[0xa6];
      param_1[0xa7] = param_2[0xa7];
      *(undefined8 *)(param_2 + 0xa6) = 0;
      param_1[0xa8] = param_2[0xa8];
      param_1[0xa9] = param_2[0xa9];
      *(undefined8 *)(param_2 + 0xa8) = 0xffffffff;
      if (*(longlong *)(param_2 + 0xac) == 0) {
        param_1[0xaa] = param_2[0xaa];
      }
      if (*(longlong *)(param_1 + 0xac) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
      *(undefined8 *)(param_2 + 0xac) = 0;
      param_1[0xae] = param_2[0xae];
      param_2[0xae] = 0;
      return param_1;
    }
  }
  memcpy(param_1 + 0x78,param_2 + 0x78,0x8d);
  return param_1;
}



// FUNCTION 140089e08 FUN_140089e08 body=370 status=ok
// SIG undefined FUN_140089e08(void)

void FUN_140089e08(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140089e91;
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
LAB_140089e91:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 140089f7a FUN_140089f7a body=262 status=ok
// SIG undefined FUN_140089f7a(void)

void FUN_140089f7a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      iVar6 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x94) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        uVar4 = (ulonglong)(int)uVar2;
      }
      else {
        uVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = uVar4 * 0x80;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar4 & 0x1ffffffffffffff) * 8]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
      iVar3 = (int)(uVar5 >> 7);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x94) = iVar6;
    FUN_14008a080(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14008a080 FUN_14008a080 body=140 status=ok
// SIG undefined FUN_14008a080(void)

void FUN_14008a080(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 7);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x80);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 7);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x80);
  return;
}



// FUNCTION 14008a10c FUN_14008a10c body=124 status=ok
// SIG undefined FUN_14008a10c(void)

undefined8 FUN_14008a10c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14008a188(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14008a188 FUN_14008a188 body=95 status=ok
// SIG undefined FUN_14008a188(void)

void FUN_14008a188(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14008a1e8(param_1,param_2,1);
  return;
}



// FUNCTION 14008a1e8 FUN_14008a1e8 body=87 status=ok
// SIG undefined FUN_14008a1e8(void)

void FUN_14008a1e8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14008a240(param_1,param_2,param_3);
  return;
}



// FUNCTION 14008a240 FUN_14008a240 body=138 status=ok
// SIG undefined FUN_14008a240(void)

void FUN_14008a240(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14008a2ca FUN_14008a2ca body=203 status=ok
// SIG undefined FUN_14008a2ca(void)

undefined8 FUN_14008a2ca(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = **(longlong **)(param_1 + 0x318);
  if (lVar2 == 0) {
    (**(code **)**(undefined8 **)(param_1 + 0x418))(*(undefined8 **)(param_1 + 0x418),&local_20);
    iVar1 = *(int *)(param_1 + 0x328);
    *(uint *)(param_1 + 0x328) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x32c) < iVar1 + 1U) {
      FUN_14008bdbc(param_1 + 800,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 8) = local_20;
    uVar4 = *(undefined8 *)
             (*(longlong *)(param_1 + 800) + (longlong)(*(int *)(param_1 + 0x328) + -1) * 8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_1 + 0x318);
    *(longlong *)(param_1 + 0x318) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008a396 FUN_14008a396 body=657 status=ok
// SIG undefined FUN_14008a396(void)

undefined8 * FUN_14008a396(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined1 local_72 [2];
  undefined8 *local_70;
  longlong local_68 [2];
  undefined4 local_58;
  ulonglong local_48;
  
  iVar1 = DAT_14c994558;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_80 = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x180);
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined2 *)((longlong)plVar3 + 0xc) = 0x301;
  *(undefined2 *)(plVar3 + 2) = 0x100;
  *plVar3 = (longlong)&PTR_FUN_149f5ae80;
  memset(plVar3 + 3,0,0x160);
  iVar4 = 0;
  do {
    local_88 = 0;
    local_90 = 0;
    local_98 = CONCAT11(local_98._1_1_,1);
    (**(code **)(*param_1 + 0x10))(param_1,&local_70,local_68,iVar4);
    local_98 = 0;
    (**(code **)(*plVar3 + 0xb0))(plVar3,local_72,&local_70,iVar4);
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)(local_70,1);
    }
    if ((DAT_14c75f288 == 1) || (DAT_14c994578 == 1)) {
      local_90 = DAT_14c75f25c != 0;
      local_88 = 1;
      local_98 = CONCAT11(local_98._1_1_,1);
      (**(code **)(*param_1 + 0x10))(param_1,&local_70,local_68,iVar4);
      local_98 = 1;
      (**(code **)(*plVar3 + 0xb0))(plVar3,local_72,&local_70,iVar4);
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)(local_70,1);
      }
    }
    iVar4 = iVar4 + 1;
  } while ((2 < iVar1) + 1 != iVar4);
  if (DAT_14c994578 != 0 && iVar1 < 3) {
    local_88 = 0;
    local_90 = 0;
    local_98 = CONCAT11(local_98._1_1_,1);
    (**(code **)(*param_1 + 0x10))(param_1,&local_70,local_68,0);
    local_98 = 2;
    (**(code **)(*plVar3 + 0xb0))(plVar3,local_72,&local_70,0);
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)(local_70,1);
    }
    if (DAT_14c75f288 == 1) {
      local_90 = DAT_14c75f25c != 0;
      local_88 = 0;
      local_98 = CONCAT11(local_98._1_1_,1);
      (**(code **)(*param_1 + 0x10))(param_1,&local_70,local_68,0);
      local_98 = 3;
      (**(code **)(*plVar3 + 0xb0))(plVar3,local_72,&local_70,0);
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)(local_70,1);
      }
    }
  }
  puVar2 = local_80;
  *local_80 = plVar3;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008a628 FUN_14008a628 body=492 status=ok
// SIG undefined FUN_14008a628(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14008a628(undefined8 param_1,undefined8 *param_2,undefined8 param_3,short param_4,char param_5,
             char param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  double dVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  iVar1 = DAT_14c75f260;
  if (param_4 == 0) {
    if (DAT_14c994558 != 0) {
      if ((DAT_14c994558 & 0xfffffffd) == 1) {
        if (param_6 == '\0') {
          uVar3 = 0;
          if (param_5 == '\0') {
            uVar3 = DAT_14c994574;
          }
          puVar2 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
          uVar5 = 0;
          uVar6 = iVar1 == 1;
          uVar7 = param_7;
        }
        else {
          uVar3 = 0;
          if (param_5 == '\0') {
            uVar3 = DAT_14c994574;
          }
          puVar2 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
          uVar7 = 1;
          uVar5 = 1;
          uVar6 = param_7;
        }
        FUN_14008a814(puVar2,param_3,DAT_14c994560,DAT_14c994564,(double)_DAT_14c994570,uVar3,uVar5,
                      uVar6,uVar7);
        goto LAB_14008a6df;
      }
      if ((DAT_14c994558 == 4) || (DAT_14c994558 == 2)) {
        puVar2 = (undefined8 *)FUN_14001cc68(0x1d8,0x10);
        FUN_146e08f0c(puVar2,param_3,DAT_14c994568,DAT_14c99456c,(double)_DAT_14c994570);
        goto LAB_14008a6df;
      }
    }
  }
  else if (param_4 != 1) {
    puVar2 = (undefined8 *)0x0;
    goto LAB_14008a6df;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(200,0x10);
  uVar3 = DAT_14c99455c;
  dVar4 = (double)_DAT_14c994570;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_FUN_149f48460;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = dVar4;
  FUN_1429cadca(puVar2,param_3,uVar3);
LAB_14008a6df:
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14008a814 FUN_14008a814 body=3134 status=ok
// SIG undefined FUN_14008a814(void)

undefined8 *
FUN_14008a814(undefined8 *param_1,LARGE_INTEGER param_2,int param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,char param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  LARGE_INTEGER *pLVar4;
  undefined4 *puVar5;
  double dVar6;
  double *pdVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER LVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  LARGE_INTEGER LVar30;
  double dVar31;
  LARGE_INTEGER LVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  uint local_1d0;
  int local_1cc;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER LStack_160;
  longlong local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  LARGE_INTEGER local_128 [2];
  double dStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5b050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(int *)(param_1 + 0x26) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x134) = param_4;
  param_1[0x27] = param_5;
  *(undefined4 *)(param_1 + 0x28) = param_6;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x18a) = param_9;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if (param_8 != '\0') {
    lVar19 = FUN_14001cc68(0x1e0,0x10);
    FUN_14008b51a(lVar19);
    lVar20 = param_1[0x19];
    param_1[0x19] = lVar19;
    if (lVar20 != 0) {
      FUN_140d9df70(lVar20);
      FUN_1400020a8(lVar20);
      lVar19 = param_1[0x19];
    }
    *(undefined1 *)(lVar19 + 0x48) = 1;
    param_3 = *(int *)(param_1 + 0x26);
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  uVar24 = *(uint *)(param_2.QuadPart + 0x10);
  uVar8 = (longlong)(int)uVar24 / (longlong)param_3;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff,(longlong)(int)uVar24 % (longlong)param_3 & 0xffffffff);
  }
  if (*(int *)((longlong)param_1 + 0x164) < (int)uVar8) {
    FUN_14481578e(param_1 + 0x2b,uVar8 & 0xffffffff);
  }
  iVar21 = *(int *)(param_1 + 0x2e);
  if ((longlong)iVar21 == 0) {
    iVar18 = FUN_14008b8b4(param_1 + 0x2f,1);
  }
  else {
    iVar18 = *(int *)(param_1[0x2d] + -4 + (longlong)iVar21 * 4);
    *(int *)(param_1 + 0x2e) = iVar21 + -1;
    FUN_14479f406(param_1 + 0x2d);
  }
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar24);
  }
  lVar20 = param_1[0x2f] + (longlong)iVar18 * 0xf8;
  lVar19 = param_1[0x2f] + (longlong)iVar18 * 0xf8 + 0x38;
  if (*(int *)(lVar20 + 0x44) < (int)uVar24) {
    FUN_14479f570(lVar19,uVar24);
  }
  local_1d8 = param_1 + 0x22;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (*(int *)((longlong)param_1 + 0x11c) < 0) {
    FUN_14479f570(local_1d8,0);
  }
  FUN_144936aaa(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14008b684(param_1 + 2,0);
  }
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) < 0) {
    FUN_14479f570(param_1 + 7,0);
  }
  FUN_1402a3552(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) < 0) {
    FUN_14481578e(param_1 + 0x15,0);
  }
  local_1cc = iVar18;
  if (*(int *)((longlong)param_1 + 0xc4) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14481578e(param_1 + 0x17,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (param_1[0x19] != 0) {
    FUN_1402a31f8();
  }
  local_1c8 = param_1 + 0x24;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  local_1b0 = lVar19;
  if (*(int *)((longlong)param_1 + 300) < 0) {
    FUN_14008b768(local_1c8,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  QueryPerformanceCounter(&local_168);
  param_1[0x29] = (double)local_168.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar21 = DAT_14c75efb8;
  dVar10 = (double)DAT_14c75efb8;
  param_1[0x1a] = dVar10;
  dVar26 = 1.0;
  if (0 < iVar21) {
    dVar26 = 1.0 / dVar10;
  }
  param_1[0x1b] = dVar26;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1d) = DAT_14c75efc4;
  if (*(char *)(param_1 + 9) == '\x01') {
    local_128[1].QuadPart = 0;
    dStack_118 = 0.0;
    local_110 = (double)CONCAT44(local_110._4_4_,0xffffffff);
    uStack_108 = (double)((ulonglong)uStack_108 & 0xffffffff00000000);
    local_128[0] = param_2;
    FUN_14008b454(local_128);
    if (dStack_118 != 0.0) {
      dVar26 = dStack_118;
      do {
        iVar21 = (int)local_110;
        lVar25 = (longlong)(int)local_110;
        lVar20 = *(longlong *)((longlong)dVar26 + 0x58);
        lVar19 = lVar25 * 0x38;
        local_138 = *(undefined8 *)(lVar20 + 0x30 + lVar19);
        local_168 = *(LARGE_INTEGER *)(lVar20 + lVar19);
        LStack_160 = ((LARGE_INTEGER *)(lVar20 + lVar19))[1];
        plVar1 = (longlong *)(lVar20 + 0x10 + lVar19);
        local_158 = *plVar1;
        iStack_150 = (int)plVar1[1];
        uStack_14c = *(undefined4 *)((longlong)plVar1 + 0xc);
        puVar2 = (ulonglong *)(lVar20 + 0x20 + lVar19);
        local_148 = *puVar2;
        uStack_140 = puVar2[1];
        lVar20 = *(longlong *)((longlong)dVar26 + 0x40);
        lVar19 = lVar25 * 0x30;
        local_188 = *(undefined8 *)(lVar20 + 0x10 + lVar19);
        local_198 = *(undefined8 *)(lVar20 + lVar19);
        uStack_190 = ((undefined8 *)(lVar20 + lVar19))[1];
        local_170 = *(undefined8 *)(lVar20 + 0x28 + lVar19);
        puVar3 = (undefined8 *)(lVar20 + 0x18 + lVar19);
        uStack_180 = *puVar3;
        uStack_178 = *(undefined4 *)(puVar3 + 1);
        uStack_174 = *(undefined4 *)((longlong)puVar3 + 0xc);
        FUN_14006a09c(param_1,&local_168,&local_198,
                      *(undefined1 *)(*(longlong *)((longlong)dVar26 + 0x28) + lVar25));
        if ((longlong *)local_128[1].QuadPart == (longlong *)0x0) {
          local_110 = (double)CONCAT44(local_110._4_4_,iVar21 + 1);
          if (uStack_108._4_4_ <= iVar21 + 1) {
LAB_14008b3c4:
            uStack_108 = (double)CONCAT44(uStack_108._4_4_,(int)uStack_108 + 1);
            FUN_14008b454(local_128);
            dVar26 = dStack_118;
          }
        }
        else {
          lVar20 = (longlong)local_100._0_4_;
          iVar21 = local_100._0_4_ + 1;
          local_100 = (double)CONCAT44(local_100._4_4_,iVar21);
          if (*(int *)(local_128[1].QuadPart + 8) <= iVar21) goto LAB_14008b3c4;
          pdVar7 = *(double **)(*(longlong *)local_128[1] + 8 + lVar20 * 8);
          dVar26 = *pdVar7;
          local_110 = (double)CONCAT44(local_110._4_4_,*(undefined4 *)(pdVar7 + 1));
          dStack_118 = dVar26;
        }
      } while (dVar26 != 0.0);
    }
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(lVar20 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar20 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar20 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar20 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)(lVar20 + 0x28) = 0xffefffffffffffff;
    *(undefined8 *)(lVar20 + 0x30) = 0xffefffffffffffff;
    *(undefined8 *)(lVar20 + 0x48) = 0;
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined8 *)(lVar20 + 0x58) = 0;
    *(undefined8 *)(lVar20 + 0x60) = 0;
    *(undefined8 *)(lVar20 + 0x68) = 0;
    *(undefined8 *)(lVar20 + 0x70) = 0;
    LStack_160.QuadPart = 0;
    local_158 = 0;
    iStack_150 = -1;
    local_148 = local_148 & 0xffffffff00000000;
    local_1c0 = param_1 + 0x2b;
    local_1b8 = (ulonglong)uVar24;
    local_168 = param_2;
    FUN_14008b454(&local_168);
    lVar19 = local_158;
    iVar21 = iStack_150;
    while (iStack_150 = iVar21, lVar19 != 0) {
      lVar23 = (longlong)iVar21;
      lVar25 = *(longlong *)(lVar19 + 0x58);
      lVar22 = lVar23 * 0x38;
      local_1a8 = *(undefined8 *)(lVar25 + lVar22);
      uStack_1a0 = ((undefined8 *)(lVar25 + lVar22))[1];
      iVar18 = *(int *)(lVar25 + 0x10 + lVar22);
      uStack_178 = *(undefined4 *)(lVar25 + 0x34 + lVar22);
      puVar3 = (undefined8 *)(lVar25 + 0x24 + lVar22);
      local_188 = *puVar3;
      uStack_180 = puVar3[1];
      puVar3 = (undefined8 *)(lVar25 + 0x14 + lVar22);
      local_198 = *puVar3;
      uStack_190 = puVar3[1];
      lVar25 = *(longlong *)(lVar19 + 0x40);
      lVar22 = lVar23 * 0x30;
      dStack_118 = *(double *)(lVar25 + 0x10 + lVar22);
      local_128[0] = *(LARGE_INTEGER *)(lVar25 + lVar22);
      local_128[1] = ((LARGE_INTEGER *)(lVar25 + lVar22))[1];
      local_100 = *(double *)(lVar25 + 0x28 + lVar22);
      pdVar7 = (double *)(lVar25 + 0x18 + lVar22);
      local_110 = *pdVar7;
      uStack_108 = pdVar7[1];
      if (*(char *)(*(longlong *)(lVar19 + 0x28) + lVar23) == '\x01') {
        lVar25 = 0;
        do {
          dVar26 = (double)(&local_110)[lVar25];
          if (((dVar26 < (double)local_128[lVar25]) ||
              (iVar17 = _finite((double)local_128[lVar25]), iVar17 == 0)) ||
             (iVar17 = _finite(dVar26), dVar31 = local_100, dVar33 = uStack_108, dVar10 = local_110,
             dVar26 = dStack_118, LVar16 = local_128[1], LVar15 = local_128[0], iVar17 == 0))
          goto LAB_14008b12a;
          lVar25 = lVar25 + 1;
        } while (lVar25 != 3);
        uVar35 = SUB84(local_100,0);
        uVar8 = (ulonglong)local_100 >> 0x20;
        uVar28 = SUB84(dStack_118,0);
        uVar14 = (ulonglong)dStack_118 >> 0x20;
        dVar11 = local_100 - dStack_118;
        dVar12 = uStack_108 - (double)local_128[1];
        dVar13 = local_110 - (double)local_128[0];
        dVar6 = dVar13;
        if ((dVar13 <= dVar11 || dVar13 <= dVar12) && (dVar6 = dVar12, dVar12 <= dVar11)) {
          dVar6 = dVar11;
        }
        if ((double)param_1[0x27] <= dVar6 && dVar6 != (double)param_1[0x27]) goto LAB_14008b16e;
        iVar17 = *(int *)(lVar20 + 0x40);
        uVar24 = iVar17 + 1;
        *(uint *)(lVar20 + 0x40) = uVar24;
        if (*(uint *)(lVar20 + 0x44) < uVar24) {
          local_1d0 = uVar24;
          FUN_14479f6b8(local_1b0,iVar17);
          uVar24 = local_1d0;
        }
        lVar25 = *(longlong *)(lVar20 + 0x38);
        lVar22 = (longlong)iVar17 * 0x68;
        *(undefined8 *)(lVar25 + lVar22) = local_1a8;
        ((undefined8 *)(lVar25 + lVar22))[1] = uStack_1a0;
        *(int *)(lVar25 + 0x10 + lVar22) = iVar18;
        *(undefined4 *)(lVar25 + 0x34 + lVar22) = uStack_178;
        puVar3 = (undefined8 *)(lVar25 + 0x24 + lVar22);
        *puVar3 = local_188;
        puVar3[1] = uStack_180;
        puVar3 = (undefined8 *)(lVar25 + 0x14 + lVar22);
        *puVar3 = local_198;
        puVar3[1] = uStack_190;
        *(double *)(lVar25 + 0x48 + lVar22) = dStack_118;
        pLVar4 = (LARGE_INTEGER *)(lVar25 + 0x38 + lVar22);
        *pLVar4 = local_128[0];
        pLVar4[1] = local_128[1];
        pdVar7 = (double *)(lVar25 + 0x50 + lVar22);
        *pdVar7 = local_110;
        pdVar7[1] = uStack_108;
        *(double *)(lVar25 + 0x60 + lVar22) = local_100;
        dVar9 = (double)(int)uVar24;
        dVar6 = *(double *)(lVar20 + 0x18);
        uVar27 = SUB84(dVar6,0);
        uVar29 = (int)((ulonglong)dVar6 >> 0x20);
        if (dVar26 <= dVar6) {
          uVar27 = uVar28;
          uVar29 = (int)uVar14;
        }
        LVar32 = *(LARGE_INTEGER *)(lVar20 + 0x10);
        if ((double)LVar16 <= (double)*(LARGE_INTEGER *)(lVar20 + 0x10)) {
          LVar32 = LVar16;
        }
        LVar30 = *(LARGE_INTEGER *)(lVar20 + 8);
        if ((double)LVar15 <= (double)*(LARGE_INTEGER *)(lVar20 + 8)) {
          LVar30 = LVar15;
        }
        *(LARGE_INTEGER *)(lVar20 + 8) = LVar30;
        *(LARGE_INTEGER *)(lVar20 + 0x10) = LVar32;
        *(ulonglong *)(lVar20 + 0x18) = CONCAT44(uVar29,uVar27);
        dVar6 = *(double *)(lVar20 + 0x30);
        uVar28 = SUB84(dVar6,0);
        uVar27 = (int)((ulonglong)dVar6 >> 0x20);
        if (dVar6 <= dVar31) {
          uVar28 = uVar35;
          uVar27 = (int)uVar8;
        }
        dVar31 = *(double *)(lVar20 + 0x28);
        if (*(double *)(lVar20 + 0x28) <= dVar33) {
          dVar31 = dVar33;
        }
        dVar33 = *(double *)(lVar20 + 0x20);
        if (*(double *)(lVar20 + 0x20) <= dVar10) {
          dVar33 = dVar10;
        }
        *(double *)(lVar20 + 0x20) = dVar33;
        *(double *)(lVar20 + 0x28) = dVar31;
        *(ulonglong *)(lVar20 + 0x30) = CONCAT44(uVar27,uVar28);
        dVar26 = dVar11 * 0.5 + dVar26;
        dVar31 = dVar12 * 0.5 + (double)LVar16;
        dVar11 = dVar13 * 0.5 + (double)LVar15;
        dVar34 = dVar26 - *(double *)(lVar20 + 0x58);
        dVar10 = dVar31 - *(double *)(lVar20 + 0x50);
        dVar33 = dVar11 - *(double *)(lVar20 + 0x48);
        dVar6 = dVar33 / dVar9 + *(double *)(lVar20 + 0x48);
        *(double *)(lVar20 + 0x48) = dVar6;
        dVar13 = dVar10 / dVar9 + *(double *)(lVar20 + 0x50);
        *(double *)(lVar20 + 0x50) = dVar13;
        dVar12 = dVar34 / dVar9 + *(double *)(lVar20 + 0x58);
        *(double *)(lVar20 + 0x58) = dVar12;
        *(double *)(lVar20 + 0x60) = (dVar11 - dVar6) * dVar33 + *(double *)(lVar20 + 0x60);
        *(double *)(lVar20 + 0x68) = (dVar31 - dVar13) * dVar10 + *(double *)(lVar20 + 0x68);
        *(double *)(lVar20 + 0x70) = (dVar26 - dVar12) * dVar34 + *(double *)(lVar20 + 0x70);
      }
      else {
LAB_14008b12a:
        local_128[0].QuadPart = -0x10000000000001;
        local_128[1].QuadPart = -0x10000000000001;
        dStack_118 = -1.79769313486232e+308;
        local_110 = 1.79769313486232e+308;
        uStack_108 = 1.79769313486232e+308;
        local_100 = 1.79769313486232e+308;
LAB_14008b16e:
        uVar28 = *(undefined4 *)(param_1 + 0x23);
        if (*(int *)(param_1 + 0x25) <= iVar18) {
          FUN_14008b974(local_1c8,(iVar18 - *(int *)(param_1 + 0x25)) + 1);
        }
        lVar22 = (longlong)iVar18 * 0x18;
        *(undefined1 *)(param_1[0x24] + 0x14 + lVar22) = 1;
        lVar25 = param_1[0x24];
        *(undefined4 *)(lVar25 + lVar22) = uVar28;
        puVar5 = (undefined4 *)(lVar25 + 4 + lVar22);
        *puVar5 = 0xffffffff;
        puVar5[1] = 0xffffffff;
        puVar5[2] = 0xffffffff;
        puVar5[3] = 0xffffffff;
        iVar17 = *(int *)(param_1 + 0x23);
        *(uint *)(param_1 + 0x23) = iVar17 + 1U;
        if (*(uint *)((longlong)param_1 + 0x11c) < iVar17 + 1U) {
          FUN_14479f6b8(local_1d8,iVar17);
        }
        lVar25 = *local_1d8;
        lVar22 = (longlong)iVar17 * 0x68;
        *(undefined8 *)(lVar25 + lVar22) = local_1a8;
        ((undefined8 *)(lVar25 + lVar22))[1] = uStack_1a0;
        *(int *)(lVar25 + 0x10 + lVar22) = iVar18;
        *(undefined4 *)(lVar25 + 0x34 + lVar22) = uStack_178;
        puVar5 = (undefined4 *)(lVar25 + 0x24 + lVar22);
        *puVar5 = (undefined4)local_188;
        puVar5[1] = local_188._4_4_;
        puVar5[2] = (undefined4)uStack_180;
        puVar5[3] = uStack_180._4_4_;
        puVar3 = (undefined8 *)(lVar25 + 0x14 + lVar22);
        *puVar3 = local_198;
        puVar3[1] = uStack_190;
        pLVar4 = (LARGE_INTEGER *)(lVar25 + 0x38 + lVar22);
        *pLVar4 = local_128[0];
        pLVar4[1] = local_128[1];
        *(double *)(lVar25 + 0x48 + lVar22) = dStack_118;
        puVar5 = (undefined4 *)(lVar25 + 0x50 + lVar22);
        *puVar5 = (int)local_110;
        puVar5[1] = local_110._4_4_;
        puVar5[2] = (int)uStack_108;
        puVar5[3] = uStack_108._4_4_;
        *(double *)(lVar25 + 0x60 + lVar22) = local_100;
      }
      if ((longlong *)LStack_160.QuadPart == (longlong *)0x0) {
        iStack_150 = iVar21 + 1;
        iVar21 = iStack_150;
        if (local_148._4_4_ <= iStack_150) {
LAB_14008b41a:
          local_148 = CONCAT44(local_148._4_4_,(int)local_148 + 1);
          FUN_14008b454(&local_168);
          lVar19 = local_158;
          iVar21 = iStack_150;
        }
      }
      else {
        lVar19 = (longlong)(int)uStack_140;
        iVar21 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,iVar21);
        if (*(int *)(LStack_160.QuadPart + 8) <= iVar21) goto LAB_14008b41a;
        plVar1 = *(longlong **)(*(longlong *)LStack_160 + 8 + lVar19 * 8);
        iVar21 = (int)plVar1[1];
        lVar19 = *plVar1;
        local_158 = lVar19;
      }
    }
    *(int *)((longlong)param_1 + 0x144) = (int)local_1b8;
    *(undefined8 *)(lVar20 + 0x78) = 0;
    iVar21 = *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = iVar21 + 1U;
    if (*(uint *)((longlong)param_1 + 0x164) < iVar21 + 1U) {
      FUN_1446f48e2(local_1c0,iVar21);
    }
    *(int *)(param_1[0x2b] + (longlong)iVar21 * 4) = local_1cc;
    FUN_14479dcac(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14008b454 FUN_14008b454 body=197 status=ok
// SIG undefined FUN_14008b454(void)

void FUN_14008b454(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  
  plVar6 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar8 = (ulonglong)uVar1;
  if ((int)uVar1 < (int)plVar6[1]) {
    uVar8 = (ulonglong)(int)uVar1;
    uVar4 = uVar8 << 4 | 8;
    do {
      lVar5 = *(longlong *)(*plVar6 + uVar4);
      if (lVar5 == 0) {
        piVar9 = (int *)(*(longlong *)(*plVar6 + -8 + uVar4) + 0x18);
      }
      else {
        piVar9 = (int *)(lVar5 + 8);
      }
      iVar7 = (int)uVar8;
      if (*piVar9 != 0) {
        uVar8 = uVar8 & 0xffffffff;
        break;
      }
      uVar8 = uVar8 + 1;
      *(int *)(param_1 + 4) = iVar7 + 1;
      uVar4 = uVar4 + 0x10;
    } while ((longlong)uVar8 < (longlong)(int)plVar6[1]);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((int)uVar8 < (int)plVar6[1]) {
    lVar5 = (longlong)(int)uVar8 * 0x10;
    puVar2 = *(undefined8 **)(*plVar6 + 8 + lVar5);
    param_1[1] = (longlong)puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      plVar6 = (longlong *)(lVar5 + *plVar6);
      uVar3 = 0;
    }
    else {
      plVar6 = *(longlong **)*puVar2;
      uVar3 = (undefined4)plVar6[1];
    }
    lVar5 = *plVar6;
    param_1[2] = lVar5;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar5 + 0x18);
    return;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14008b51a FUN_14008b51a body=362 status=ok
// SIG undefined FUN_14008b51a(void)

void FUN_14008b51a(undefined8 *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5b050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 0x100000000c;
  param_1[0x27] = 0x40f86a0000000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x189) = 0x101;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  iVar2 = DAT_14c75efb8;
  dVar3 = (double)DAT_14c75efb8;
  param_1[0x1a] = dVar3;
  dVar1 = 1.0;
  if (0 < iVar2) {
    dVar1 = 1.0 / dVar3;
  }
  param_1[0x1b] = dVar1;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1d) = DAT_14c75efc4;
  return;
}



// FUNCTION 14008b684 FUN_14008b684 body=227 status=ok
// SIG undefined FUN_14008b684(void)

void FUN_14008b684(longlong param_1,int param_2)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
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
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,8);
  }
  return;
}



// FUNCTION 14008b768 FUN_14008b768 body=332 status=ok
// SIG undefined FUN_14008b768(void)

void FUN_14008b768(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14008b7d6;
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
LAB_14008b7d6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,4);
  }
  return;
}



// FUNCTION 14008b8b4 FUN_14008b8b4 body=70 status=ok
// SIG undefined FUN_14008b8b4(void)

int FUN_14008b8b4(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14008bc42(param_1,iVar1);
  }
  FUN_14008b8fa((longlong)iVar1 * 0xf8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14008b8fa FUN_14008b8fa body=121 status=ok
// SIG undefined FUN_14008b8fa(void)

void FUN_14008b8fa(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 4) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 6) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 8) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 10) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xc) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = 0xb0;
    do {
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x28) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x20) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x18) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x10) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1) = 0xffefffffffffffff;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != 0x120);
    param_1 = param_1 + 0x3e;
  }
  return;
}



// FUNCTION 14008b974 FUN_14008b974 body=71 status=ok
// SIG undefined FUN_14008b974(void)

int FUN_14008b974(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14008bacc(param_1,iVar1);
  }
  FUN_14479f82a((longlong)iVar1 * 0x18 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14008b9bc FUN_14008b9bc body=271 status=ok
// SIG undefined FUN_14008b9bc(void)

void FUN_14008b9bc(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
    uVar5 = lVar4 * 0x70;
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
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14008bacc FUN_14008bacc body=373 status=ok
// SIG undefined FUN_14008bacc(void)

void FUN_14008bacc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14008bb57;
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
LAB_14008bb57:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 14008bc42 FUN_14008bc42 body=376 status=ok
// SIG undefined FUN_14008bc42(void)

void FUN_14008bc42(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xf8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14008bccc;
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
LAB_14008bccc:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xf8)) {
    uVar7 = uVar5 / 0xf8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xf8,8);
  return;
}



// FUNCTION 14008bdbc FUN_14008bdbc body=353 status=ok
// SIG undefined FUN_14008bdbc(void)

void FUN_14008bdbc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14008be41;
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
LAB_14008be41:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14008bf1e FUN_14008bf1e body=26 status=ok
// SIG undefined FUN_14008bf1e(void)

undefined8 FUN_14008bf1e(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2a8))();
  return param_2;
}



// FUNCTION 14008bf44 FUN_14008bf44 body=116 status=ok
// SIG undefined FUN_14008bf44(void)

void FUN_14008bf44(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14008bfba(param_1,iVar1);
    }
    FUN_14479f84a((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1474bf160(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14008bfba FUN_14008bfba body=272 status=ok
// SIG undefined FUN_14008bfba(void)

void FUN_14008bfba(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14008c0ca FUN_14008c0ca body=223 status=ok
// SIG undefined FUN_14008c0ca(void)

void FUN_14008c0ca(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &DAT_14afbeb60;
  local_18 = 4;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
  (**(code **)(*plVar2 + 0x68))(plVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008c1aa FUN_14008c1aa body=334 status=ok
// SIG undefined FUN_14008c1aa(void)

undefined8 FUN_14008c1aa(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
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
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x658);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_14008c2ec;
    if (lVar3 != 0) goto LAB_14008c1da;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_14008c2ec:
      FUN_1456cec3c(lVar3);
    }
LAB_14008c1da:
    if (DAT_14cb06da8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464003b0;
      local_38 = &LAB_147d17bdf;
      local_40 = &LAB_1417edf22;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      uVar1 = CONCAT71((int7)((ulonglong)(DAT_14cb06da8 + 0x30) >> 8),*(undefined1 *)(lVar3 + 0x2b5)
                      ) & 0xffffffffffffff08;
      uVar2 = CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 3);
      goto LAB_14008c20c;
    }
  }
  uVar2 = 0;
LAB_14008c20c:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008c2fa FUN_14008c2fa body=568 status=ok
// SIG undefined FUN_14008c2fa(void)

void FUN_14008c2fa(int *param_1,longlong param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  uint local_78;
  longlong local_70;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if ((int)param_4 < 0) {
    if (((char)param_1[3] == '\x01') && (iVar3 = param_1[2], 0 < iVar3)) {
      param_4 = param_1[1] + 1;
      param_1[1] = param_4;
      uVar1 = param_4;
      if ((iVar3 <= (int)param_4) && (-1 < *param_1)) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x154,
                      L"Unable to add more objects to disregard for GC pool (Max: %d)");
        iVar3 = param_1[2];
        uVar1 = param_1[1];
      }
      if (iVar3 <= (int)uVar1) {
        param_4 = FUN_140127bb2(param_1 + 4,1);
        uVar1 = param_1[1];
        iVar3 = param_1[2];
      }
      iVar2 = uVar1 + 1;
      if ((int)(uVar1 + 1) <= iVar3) {
        iVar2 = iVar3;
      }
      param_1[2] = iVar2;
    }
    else {
      iVar3 = param_1[0x18];
      if ((longlong)iVar3 < 1) {
        param_4 = FUN_140127bb2(param_1 + 4,1);
      }
      else {
        param_4 = *(uint *)(*(longlong *)(param_1 + 0x16) + -4 + (longlong)iVar3 * 4);
        param_1[0x18] = iVar3 + -1;
        FUN_14479f406();
      }
    }
  }
  if ((int)param_4 < param_1[9]) {
    plVar6 = (longlong *)
             ((ulonglong)((param_4 & 0xffff) * 0x18) +
             *(longlong *)(*(longlong *)(param_1 + 4) + (ulonglong)(param_4 >> 0x10) * 8));
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  lVar5 = *plVar6;
  if (lVar5 != 0) {
    local_60 = *(undefined8 *)(param_2 + 0x18);
    FUN_1400021e4(&local_60,&local_58);
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_78 = param_4;
    local_70 = lVar5;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x170,
                  L"Attempting to add %s at index %d but another object (0x%016llx) exists at that index!"
                  ,puVar4);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *plVar6 = param_2;
  *(undefined4 *)(plVar6 + 1) = 0x80000000;
  if ((DAT_14c9647c0 < 1) || ((char)param_1[3] == '\0')) {
    *(uint *)(plVar6 + 1) = DAT_14c75ec98 | 0x80000000;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0;
  *(undefined4 *)(plVar6 + 2) = param_5;
  *(uint *)(param_2 + 0xc) = param_4;
  if (param_3 != 0) {
    if ((param_3 & 0x4e500000) == 0) {
      do {
        uVar1 = *(uint *)(plVar6 + 1);
        if ((param_3 & 0xcffffff8 & ~uVar1) == 0) break;
        LOCK();
        bVar7 = uVar1 == *(uint *)(plVar6 + 1);
        if (bVar7) {
          *(uint *)(plVar6 + 1) = uVar1 | param_3 & 0xcffffff8;
        }
        UNLOCK();
      } while (!bVar7);
    }
    else {
      FUN_1447f71cc(plVar6);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if (0 < param_1[0x1c]) {
    lVar5 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x1a) + lVar5 * 8);
      (**(code **)(*plVar6 + 8))(plVar6,param_2,param_4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[0x1c]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008c534 FUN_14008c534 body=915 status=ok
// SIG undefined FUN_14008c534(void)

undefined8 * FUN_14008c534(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_1f8 [32];
  undefined4 **local_1d8;
  longlong **local_1d0;
  uint local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined4 *local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [312];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0x9b;
  param_1[7] = 0;
  param_1[8] = 0x600000000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  uVar2 = 1;
  *(undefined4 *)(param_1 + 0x27) = 1;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = &DAT_100000001;
  param_1[0x2c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x32] = &DAT_100000001;
  *(undefined4 *)(param_1 + 0x35) = 1;
  FUN_14471858a(param_1 + 0x33,1);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3b] = &PTR_FUN_14a1f9a30;
  param_1[0x3c] = param_1 + 0x37;
  param_1[0x3d] = param_1;
  param_1[0x3e] = param_1 + 0x28;
  param_1[0x3f] = param_1 + 0x3a;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x202) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  local_58 = 0x200000001;
  local_60 = *(undefined4 *)(param_2 + 0x13b84);
  if (((param_4 == '\0') || (*(char *)(param_2 + 0x23f2) != '\x01')) ||
     (*(char *)(param_2 + 0x23f5) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x201) = 0;
  }
  else {
    bVar3 = *(int *)(param_2 + 0x1dd0) != 0;
    *(bool *)((longlong)param_1 + 0x201) = bVar3;
    if (bVar3) {
      lVar1 = FUN_144b28782(param_2);
      local_58 = CONCAT44(local_58._4_4_,2);
      local_5c = *(undefined4 *)(lVar1 + 0x13b84);
      uVar2 = 2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5bb38) {
    FUN_144b3d300(&DAT_14ca5bb38);
    if (DAT_14ca5bb38 == -1) {
      FUN_1446ddc76(&DAT_14ca5bb30,"SimpleMDCPass",1);
      _Init_thread_footer(&DAT_14ca5bb38);
    }
  }
  local_1d0 = &local_1a0;
  local_1a0 = (longlong *)0x0;
  local_1b0 = &local_60;
  local_1d8 = &local_1b0;
  local_1c8 = (uint)*(byte *)((longlong)param_1 + 0x201);
  local_1b8 = 1;
  local_1c0 = 0;
  local_1a8 = uVar2;
  FUN_14008c8c8(local_198,DAT_14ca5bb30,
                *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2),param_3);
  FUN_1447a01a8(param_1 + 2,local_198);
  FUN_1446f93f0(local_198);
  if (local_1a0 != (longlong *)0x0) {
    (**(code **)(*local_1a0 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(param_2 + 0x3094);
  if ((local_50 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008c8c8 FUN_14008c8c8 body=598 status=ok
// SIG undefined FUN_14008c8c8(void)

longlong *
FUN_14008c8c8(longlong *param_1,undefined8 param_2,ushort param_3,longlong param_4,
             undefined8 *param_5,longlong *param_6,undefined4 param_7,undefined1 param_8,
             undefined4 param_9)

{
  int iVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = param_4;
  *(ushort *)(param_1 + 1) = param_3;
  param_1[5] = 0;
  iVar1 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 6;
  }
  else {
    FUN_1447a0698(param_1 + 2,iVar1,0);
    plVar5 = (longlong *)param_1[5];
    if ((longlong *)param_1[5] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    memcpy(plVar5,_Src,(longlong)iVar1 << 2);
  }
  param_6 = (longlong *)*param_6;
  param_1[7] = (longlong)param_6;
  if (param_6 != (longlong *)0x0) {
    (**(code **)(*param_6 + 0x30))();
  }
  if (param_4 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined1 *)(param_4 + 0x60);
  }
  *(undefined1 *)(param_1 + 8) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_7;
  *(undefined1 *)(param_1 + 9) = param_8;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = param_9;
  uVar4 = (ulonglong)param_3;
  uVar7 = 0xff;
  if (((&DAT_14ca814b8)[uVar4 * 0xf] == 1) &&
     ((*(byte *)((longlong)&DAT_14ca814d8 + uVar4 * 0x3c + 1) & 0x10) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e54c0) && (FUN_144b3d300(&DAT_14c9e54c0), DAT_14c9e54c0 == -1)) {
      local_58 = "BatchedPrimitive";
      local_50 = 0x10;
      local_4c = 0;
      uVar3 = FUN_14001a6c0(&local_58,1);
      DAT_14c9e54b8 = (ulonglong)uVar3;
      _Init_thread_footer(&DAT_14c9e54c0);
    }
    plVar5 = (longlong *)FUN_1411d089c();
    if (0 < (longlong)(int)plVar5[1]) {
      lVar6 = 0;
      do {
        if (*(ulonglong *)(*plVar5 + lVar6 * 8) == DAT_14c9e54b8) {
          uVar7 = (undefined1)lVar6;
          break;
        }
        lVar6 = lVar6 + 1;
      } while ((int)plVar5[1] != lVar6);
    }
  }
  *(undefined1 *)((longlong)param_1 + 300) = uVar7;
  if ((&DAT_14ca814b8)[uVar4 * 0xf] == 1) {
    bVar2 = (byte)((uint)(&DAT_14ca814d8)[uVar4 * 0xf] >> 0xc) & 1;
  }
  else {
    bVar2 = 0;
  }
  *(byte *)((longlong)param_1 + 0x12d) = bVar2;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14008cb20 FUN_14008cb20 body=450 status=ok
// SIG undefined FUN_14008cb20(void)

void FUN_14008cb20(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14008cc3b:
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
LAB_14008cc78:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14008cb76;
LAB_14008cb6b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14008cb76:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x00014008cba2;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14008cbf8:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14008cc78;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14008cc3b;
code_r0x00014008cba2:
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
      goto LAB_14008cbf8;
    }
  }
  goto LAB_14008cb6b;
}



// FUNCTION 14008cce2 FUN_14008cce2 body=38 status=ok
// SIG undefined FUN_14008cce2(void)

undefined8 FUN_14008cce2(undefined8 param_1,int param_2)

{
  FUN_14008cd08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14008cd08 FUN_14008cd08 body=81 status=ok
// SIG undefined FUN_14008cd08(void)

void FUN_14008cd08(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f48de0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  FUN_14008cd5a(param_1 + 0xf);
  puVar2 = (undefined8 *)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014008cd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14008cd5a FUN_14008cd5a body=52 status=ok
// SIG undefined FUN_14008cd5a(void)

void FUN_14008cd5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a0744(lVar1,*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14008cd8e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008cd94 FUN_14008cd94 body=27 status=ok
// SIG undefined FUN_14008cd94(void)

void FUN_14008cd94(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aede560;
  lVar1 = param_1[0x15];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14008cdb0 FUN_14008cdb0 body=96 status=ok
// SIG undefined FUN_14008cdb0(void)

void FUN_14008cdb0(char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  code *local_18;
  char **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  do {
    if (cVar1 != '\x01') {
      local_10 = &local_20;
      local_18 = FUN_1400e502e;
      local_20 = param_1;
      FUN_14008cf08();
      break;
    }
    LOCK();
    cVar1 = *param_1;
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      *param_1 = '\0';
      cVar1 = '\x01';
    }
    UNLOCK();
  } while (!bVar2);
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008ce12 FUN_14008ce12 body=99 status=ok
// SIG undefined FUN_14008ce12(void)

void FUN_14008ce12(longlong *param_1)

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



// FUNCTION 14008ce76 FUN_14008ce76 body=146 status=ok
// SIG undefined FUN_14008ce76(void)

longlong * FUN_14008ce76(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    FUN_1447a0b8a(*param_1,(int)param_1[1]);
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
        }
        else {
          FUN_144705e74(piVar2);
        }
      }
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14008cf08 FUN_14008cf08 body=382 status=ok
// SIG undefined FUN_14008cf08(void)

void FUN_14008cf08(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong *local_60;
  char local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (ulonglong *)0x0;
  local_58 = '\0';
  local_68 = param_2;
  lVar5 = FUN_1400e5044();
  plVar3 = (longlong *)(lVar5 + 8);
  plVar7 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  do {
    plVar9 = plVar8;
    plVar6 = plVar3;
    plVar3 = (longlong *)*plVar6;
    if (plVar3 == (longlong *)0x0) goto LAB_14008cfb0;
    lVar4 = plVar3[1];
    plVar8 = plVar7;
    if (plVar7 != plVar3 && lVar4 == param_1) {
      LOCK();
      *(int *)((longlong)plVar3 + 0x1c) = *(int *)((longlong)plVar3 + 0x1c) + 1;
      UNLOCK();
      plVar8 = plVar3;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0x1c);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_142733a74();
        }
      }
    }
    plVar7 = plVar8;
    plVar8 = plVar3;
  } while (lVar4 != param_1);
  if (*(longlong **)(lVar5 + 0x10) == plVar3) {
    *(longlong **)(lVar5 + 0x10) = plVar9;
  }
  *plVar6 = *plVar3;
  *plVar3 = 0;
LAB_14008cfb0:
  local_4a = CONCAT11(*(longlong *)(lVar5 + 8) != 0,plVar7 != (longlong *)0x0);
  lVar5 = (*(code *)*local_68)(local_68[1]);
  if (local_58 == '\x01') {
    LOCK();
    uVar2 = *local_60;
    *local_60 = *local_60 - 1;
    UNLOCK();
    if ((char)(((uint)uVar2 & 2) >> 1) == '\0' && 3 < uVar2) {
      FUN_1400c0e08();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    plVar7[2] = lVar5;
    plVar7[1] = 0;
    *(undefined1 *)(plVar7 + 3) = 0;
    WakeByAddressSingle(plVar7 + 3);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0x1c);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_142733a74(plVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008d088 FUN_14008d088 body=74 status=ok
// SIG undefined FUN_14008d088(void)

undefined8 * FUN_14008d088(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14008d0d2(param_1,iVar1);
    FUN_1447a0bb0(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14008d0d2 FUN_14008d0d2 body=317 status=ok
// SIG undefined FUN_14008d0d2(void)

void FUN_14008d0d2(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14008d140;
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
LAB_14008d140:
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



// FUNCTION 14008d210 FUN_14008d210 body=469 status=ok
// SIG undefined FUN_14008d210(void)

void FUN_14008d210(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_14008d340:
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
LAB_14008d37d:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14008d27a;
LAB_14008d26f:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14008d27a:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014008d2a7;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14008d2fd:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14008d37d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14008d340;
code_r0x00014008d2a7:
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
      goto LAB_14008d2fd;
    }
  }
  goto LAB_14008d26f;
}



// FUNCTION 14008d3e6 FUN_14008d3e6 body=792 status=ok
// SIG undefined FUN_14008d3e6(void)

float * FUN_14008d3e6(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar7 = (uint *)*puVar1;
  if (puVar7 != (uint *)0x0) goto LAB_14008d42f;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar7 = (uint *)*puVar1;
LAB_14008d42f:
    pfVar9 = (float *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar8 = puVar7[0x12];
    if (pfVar9 + 0x37c <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar2 = *puVar7;
      *puVar7 = *puVar7 + uVar8 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar8) != 0xffffffff) break;
      puVar7 = (uint *)*puVar1;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar1 = puVar7;
      pfVar9 = (float *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      uVar8 = 0;
      if (pfVar9 + 0x37c <= puVar7 + 0x4000) {
        uVar8 = 1;
        goto LAB_14008d4ab;
      }
    }
  }
  uVar8 = uVar8 + 1;
LAB_14008d4ab:
  *(float **)(puVar7 + 0x10) = pfVar9 + 0x37e;
  puVar7[0x12] = uVar8;
  pfVar9[-2] = (float)(((int)pfVar9 + -8) - (int)puVar7);
  pfVar9[-1] = 4.99983e-42;
  lVar5 = param_1[0xf];
  lVar6 = param_1[8];
  lVar10 = param_1[2];
  lVar11 = *param_1;
  *pfVar9 = (float)*(double *)(*(longlong *)(lVar10 + 8) + 0x90);
  pfVar9[1] = *(float *)(*(longlong *)(lVar10 + 8) + 0x9c);
  *(longlong *)(pfVar9 + 2) = lVar11;
  lVar12 = lVar11 + 0x3060;
  *(longlong *)(pfVar9 + 4) = lVar12;
  *(undefined8 *)(pfVar9 + 6) = *(undefined8 *)(lVar11 + 0x18);
  *(longlong *)(pfVar9 + 8) = lVar10;
  lVar10 = lVar11 + 0xa0;
  if (*(longlong *)(lVar11 + 0x2fc0) != 0) {
    lVar10 = *(longlong *)(lVar11 + 0x2fc0);
  }
  *(longlong *)(pfVar9 + 10) = (longlong)(int)lVar6 * 0xbc8 + lVar10;
  *(char *)(pfVar9 + 0xc) = (char)(1 << ((byte)(int)lVar6 & 0x1f));
  *(longlong **)(pfVar9 + 0xe) = param_1 + 9;
  *(undefined8 *)(pfVar9 + 0x10) = *(undefined8 *)(lVar11 + 0x60);
  *(longlong *)(pfVar9 + 0x12) = lVar5;
  lVar5 = param_1[0x12];
  *(longlong *)(pfVar9 + 0x14) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lVar11 = *(longlong *)(pfVar9 + 2);
    lVar12 = *(longlong *)(pfVar9 + 4);
  }
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x16] = 0.0;
  pfVar9[0x17] = 0.0;
  pfVar9[0x18] = 0.0;
  pfVar9[0x19] = 0.0;
  pfVar9[0x1a] = fVar3;
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x1c] = 0.0;
  pfVar9[0x1d] = 0.0;
  pfVar9[0x1e] = 0.0;
  pfVar9[0x1f] = 0.0;
  pfVar9[0x20] = fVar3;
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x22] = 0.0;
  pfVar9[0x23] = 0.0;
  pfVar9[0x24] = 0.0;
  pfVar9[0x25] = 0.0;
  pfVar9[0x26] = fVar3;
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x28] = 0.0;
  pfVar9[0x29] = 0.0;
  pfVar9[0x2a] = 0.0;
  pfVar9[0x2b] = 0.0;
  pfVar9[0x2c] = fVar3;
  pfVar9[0x2e] = 0.0;
  pfVar9[0x2f] = 0.0;
  pfVar9[0x30] = 0.0;
  pfVar9[0x31] = 0.0;
  pfVar9[0x32] = 0.0;
  pfVar9[0x33] = 0.0;
  pfVar9[0x34] = 0.0;
  pfVar9[0x35] = 0.0;
  pfVar9[0x36] = 0.0;
  pfVar9[0x37] = 0.0;
  pfVar9[0x38] = 0.0;
  pfVar9[0x39] = 0.0;
  pfVar9[0x3a] = 0.0;
  pfVar9[0x3b] = 0.0;
  pfVar9[0x3c] = 0.0;
  pfVar9[0x3d] = 0.0;
  pfVar9[0x3e] = 0.0;
  pfVar9[0x3f] = 0.0;
  pfVar9[0x40] = 0.0;
  pfVar9[0x41] = 0.0;
  *(undefined8 *)((longlong)pfVar9 + 0x103) = 0;
  *(undefined8 *)((longlong)pfVar9 + 0x10b) = 0;
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x46] = 0.0;
  pfVar9[0x47] = 0.0;
  pfVar9[0x48] = 0.0;
  pfVar9[0x49] = 0.0;
  pfVar9[0x4a] = fVar3;
  memset(pfVar9 + 0x4c,0,0xb20);
  *(bool *)(pfVar9 + 0x34e) = 0 < *(int *)(DAT_14ca460a8 + 4);
  memset(pfVar9 + 0x314,0,0xe8);
  pfVar9[0x358] = 0.0;
  pfVar9[0x359] = 0.0;
  pfVar9[0x35a] = 0.0;
  pfVar9[0x350] = 0.0;
  pfVar9[0x351] = 0.0;
  pfVar9[0x352] = 0.0;
  pfVar9[0x353] = 0.0;
  pfVar9[0x35b] = 1.79366e-43;
  pfVar9[0x35c] = -NAN;
  pfVar9[0x35d] = 0.0;
  pfVar9[0x364] = 0.0;
  pfVar9[0x365] = 0.0;
  pfVar9[0x366] = 0.0;
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x368] = 0.0;
  pfVar9[0x369] = 0.0;
  pfVar9[0x36a] = 0.0;
  pfVar9[0x36b] = 0.0;
  pfVar9[0x36c] = fVar3;
  fVar3 = *(float *)(lVar12 + 0x68);
  pfVar9[0x36e] = 0.0;
  pfVar9[0x36f] = 0.0;
  pfVar9[0x370] = 0.0;
  pfVar9[0x371] = 0.0;
  pfVar9[0x372] = fVar3;
  *(undefined8 *)((longlong)pfVar9 + 0xddf) = 0;
  pfVar9[0x374] = 0.0;
  pfVar9[0x375] = 0.0;
  pfVar9[0x376] = 0.0;
  pfVar9[0x377] = 0.0;
  *(undefined1 *)((longlong)pfVar9 + 0xde7) = *(undefined1 *)(lVar11 + 0x30d1);
  *(undefined2 *)(pfVar9 + 0x37a) = 0;
  *(undefined1 *)((longlong)pfVar9 + 0xdea) = 0;
  iVar4 = (int)param_1[0x11];
  *(uint *)(param_1 + 0x11) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x8c) < iVar4 + 1U) {
    FUN_1472e4aa4(param_1 + 0x10,iVar4);
  }
  *(float **)(param_1[0x10] + (longlong)iVar4 * 8) = pfVar9;
  return pfVar9;
}



// FUNCTION 14008d6fe FUN_14008d6fe body=1121 status=ok
// SIG undefined FUN_14008d6fe(void)

void FUN_14008d6fe(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined1 *)(param_1 + 0xde8) = 1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 200);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x60);
    uVar14 = (ulonglong)bVar2;
    puVar6 = TlsGetValue(DAT_14c896140);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar6);
    }
    puVar9 = (undefined8 *)puVar6[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar6;
      if (puVar9 == (undefined8 *)0x0) {
        uVar12 = (uint)DAT_14c896180;
        uVar4 = DAT_14c896180;
        while (DAT_14c896180 = uVar4, local_58 = uVar4, (uVar4 & 0x3ffffff) != 0) {
          local_60 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (local_60 >> 0x1a < uVar4 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar11 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
          uVar13 = (ulonglong)((uint)uVar4 & 0x3fff);
          local_60 = local_60 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar13 * 0x18);
          LOCK();
          bVar15 = local_58 == DAT_14c896180;
          uVar4 = local_60;
          if (!bVar15) {
            uVar4 = DAT_14c896180;
          }
          DAT_14c896180 = uVar4;
          UNLOCK();
          if (bVar15) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar13 * 0x18 + 0x10) = 0;
            puVar9 = *(undefined8 **)
                      (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                      (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar12 & 0x3ffffff);
            puVar6[1] = puVar9;
            if (puVar9 != (undefined8 *)0x0) goto LAB_14008d8c4;
            goto LAB_14008db09;
          }
          uVar12 = (uint)DAT_14c896180;
          uVar4 = DAT_14c896180;
        }
        puVar6[1] = 0;
LAB_14008db09:
        puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar6[1] = puVar9;
        iVar5 = 0xff;
        puVar10 = puVar9;
        do {
          puVar7 = puVar10 + 0x20;
          *puVar10 = puVar7;
          iVar5 = iVar5 + -1;
          puVar10 = puVar7;
        } while (iVar5 != 0);
      }
      else {
        puVar6[1] = puVar9;
        puVar7 = puVar6;
      }
      *puVar7 = 0;
LAB_14008d8c4:
      *(undefined4 *)(puVar6 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar6 + 2) + -1;
    }
    puVar6[1] = *puVar9;
    *(int *)(puVar6 + 2) = iVar5;
    *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
    puVar9[1] = &DAT_100000002;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    puVar9[6] = 0;
    puVar9[7] = 0x100000000;
    *(undefined1 *)(puVar9 + 8) = 1;
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0xe800000000000020;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0x100000000;
    *(undefined2 *)(puVar9 + 0x14) = 0;
    LOCK();
    bVar15 = *(char *)(puVar9 + 8) == '\x01';
    if (bVar15) {
      *(char *)(puVar9 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar15) {
      FUN_14008cdb0(puVar9 + 8);
    }
    *puVar9 = &PTR_FUN_14a2f97e0;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar14 = 1;
      if (bVar2 != 6) {
        uVar14 = (ulonglong)bVar2;
      }
      uVar8 = 0;
    }
    else {
      if (bVar2 == 6) {
        uVar14 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
      }
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar9[0xf] = uVar8;
    puVar9[0x10] = uVar14 << 0x3b | 0xc00000528bd57180;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    puVar9[0x15] = param_1;
    *puVar9 = &PTR_FUN_14a2f97d0;
    FUN_1400e88c2(puVar9,param_1 + 0x50);
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_1447439e4(puVar9);
    puVar6 = *(undefined8 **)(param_1 + 0xdd0);
    *(undefined8 **)(param_1 + 0xdd0) = puVar9;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008db60 FUN_14008db60 body=92 status=ok
// SIG undefined FUN_14008db60(void)

undefined8 FUN_14008db60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x20) < 1) {
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 1;
    *(uint *)((longlong)param_1 + 0xc) = (uint)**(byte **)(lVar1 + 0x18);
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      if (*(int *)(lVar1 + 0x20) < 2) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 1) = 2;
        if (*(char *)(*(longlong *)(lVar1 + 0x18) + 1) != '\0') {
          uVar2 = FUN_143271762(param_1,param_2,0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14008dbc8 FUN_14008dbc8 body=201 status=ok
// SIG undefined FUN_14008dbc8(void)

void FUN_14008dbc8(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_140619960(param_1,iVar2);
    }
    FUN_14008dc91((longlong)iVar2 * 8 + *param_1,param_2 - iVar2);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_144756766(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146d897fe(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14008dc91 FUN_14008dc91 body=19 status=ok
// SIG undefined FUN_14008dc91(void)

void FUN_14008dc91(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14008dca4 FUN_14008dca4 body=20 status=ok
// SIG undefined FUN_14008dca4(void)

void FUN_14008dca4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14008dcb8(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 14008dcb8 FUN_14008dcb8 body=228 status=ok
// SIG undefined FUN_14008dcb8(void)

void FUN_14008dcb8(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 14008df0e FUN_14008df0e body=52 status=ok
// SIG undefined FUN_14008df0e(void)

undefined8 FUN_14008df0e(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1[4] != 0) {
    cVar1 = FUN_14008df0e();
    if (cVar1 == '\0') {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014008df33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x1f8))(param_1);
  return uVar2;
}



// FUNCTION 14008df42 caseD_45 body=65 status=ok
// SIG undefined caseD_45(void)

bool switchD_143c3d4dc::caseD_45(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(uint *)(param_1 + 8) & 0xc0010) == 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x19 & 1) == 0) {
      if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0) {
          lVar2 = FUN_1402ab664(param_1,0);
          bVar3 = lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
      }
      return bVar3;
    }
  }
  return true;
}



// FUNCTION 14008df84 FUN_14008df84 body=69 status=ok
// SIG undefined FUN_14008df84(void)

bool FUN_14008df84(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0) {
      lVar1 = FUN_1402ab664(param_1,0);
      bVar2 = lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14008dfdc FUN_14008dfdc body=99 status=ok
// SIG undefined FUN_14008dfdc(void)

void FUN_14008dfdc(longlong *param_1)

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



// FUNCTION 14008e040 FUN_14008e040 body=99 status=ok
// SIG undefined FUN_14008e040(void)

void FUN_14008e040(longlong *param_1)

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



// FUNCTION 14008e0a4 FUN_14008e0a4 body=4 status=ok
// SIG undefined FUN_14008e0a4(void)

undefined8 FUN_14008e0a4(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14008e0a8 thunk_FUN_14008e0ae body=5 status=ok
// SIG undefined thunk_FUN_14008e0ae(void)

undefined8 thunk_FUN_14008e0ae(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  FUN_14008e13a();
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  lVar7 = (ulonglong)*(byte *)(param_1 + 0x1c) * 0x10;
  plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 8 + lVar7);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + lVar7);
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    iVar5 = (int)plVar2[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar5 == 0) break;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = plVar2;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) {
        return uVar3;
      }
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return uVar3;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14008e0ae FUN_14008e0ae body=139 status=ok
// SIG undefined FUN_14008e0ae(void)

undefined8 FUN_14008e0ae(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  FUN_14008e13a();
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  lVar7 = (ulonglong)*(byte *)(param_1 + 0x1c) * 0x10;
  plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 8 + lVar7);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + lVar7);
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    iVar5 = (int)plVar2[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar5 == 0) break;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = plVar2;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) {
        return uVar3;
      }
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return uVar3;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14008e13a FUN_14008e13a body=199 status=ok
// SIG undefined FUN_14008e13a(void)

undefined8 FUN_14008e13a(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
      cVar2 = FUN_14486eb0e(lVar3,param_1);
      if (cVar2 != '\0') {
        return 1;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        cVar2 = FUN_144729dda(lVar3 + 0x28);
        if ((cVar2 != '\0') &&
           (lVar3 = FUN_14479d2ce(lVar3 + 0x28), *(char *)(lVar3 + 0x178) == '\x03')) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          *(undefined1 *)(param_1 + 7) = 0xff;
          param_1[6] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14008e202 FUN_14008e202 body=37 status=ok
// SIG undefined FUN_14008e202(void)

void FUN_14008e202(longlong param_1,float param_2)

{
  float fVar1;
  
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24);
  FUN_1409d461e(fVar1,param_2 * fVar1,0);
  return;
}



// FUNCTION 14008e228 FUN_14008e228 body=32 status=ok
// SIG undefined FUN_14008e228(void)

undefined8 FUN_14008e228(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014008e241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14008e248 FUN_14008e248 body=1467 status=ok
// SIG undefined FUN_14008e248(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008e248(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  longlong *local_1d0;
  char local_1c8 [36];
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined2 local_198;
  longlong local_170;
  undefined8 local_168;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined8 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar14 = ((longlong)*(int *)(param_1 + 0x58) ^ 1U) * 0x10;
    iVar2 = *(int *)(param_1 + 0x30 + lVar14);
    if (0 < (longlong)iVar2) {
      plVar19 = (longlong *)(param_1 + lVar14 + 0x28);
      local_1d0 = (longlong *)(param_1 + 0x48);
      FUN_140b57826(local_1d0,iVar2);
      lVar14 = 0;
      local_1d8 = plVar19;
      do {
        lVar18 = *plVar19;
        local_1c8[0] = '\0';
        local_1c8[1] = '\0';
        local_1c8[2] = '\0';
        local_1c8[3] = '\0';
        local_1c8[4] = '\0';
        local_1c8[5] = '\0';
        local_1c8[6] = '\0';
        local_1c8[7] = '\0';
        local_19c = 0;
        local_198 = 0x101;
        local_170 = 0;
        local_168 = 0x800000000;
        local_150 = 0;
        local_148 = 0x400000000;
        local_1c8[0x18] = 0;
        local_1a4 = 0;
        local_1c8[8] = '\0';
        local_1c8[9] = '\0';
        local_1c8[10] = '\0';
        local_1c8[0xb] = '\0';
        local_1c8[0xc] = '\0';
        local_1c8[0xd] = '\0';
        local_1c8[0xe] = '\0';
        local_1c8[0xf] = '\0';
        local_1c8[0x10] = '\0';
        local_1c8[0x11] = '\0';
        local_1c8[0x12] = '\0';
        local_1c8[0x13] = '\0';
        local_1c8[0x14] = '\0';
        local_1c8[0x15] = '\0';
        local_1c8[0x16] = '\0';
        local_1c8[0x17] = '\0';
        local_1c8[0x19] = '\x01';
        local_1c8[0x1a] = '\0';
        local_1c8[0x1b] = 0;
        local_1a0 = 0;
        local_1c8[0x1c] = '\0';
        local_1c8[0x1d] = '\0';
        local_1c8[0x1e] = '\0';
        local_1c8[0x1f] = '\x01';
        local_1c8[0x20] = 1;
        local_130 = _DAT_14cad0ee0;
        uStack_128 = uRam000000014cad0ee8;
        local_140 = _DAT_14cad0ed0;
        uStack_138 = _DAT_14cad0ed8;
        lVar15 = 0x88;
        do {
          cVar13 = local_1c8[lVar15];
          cVar5 = local_1c8[lVar15 + 1];
          cVar6 = local_1c8[lVar15 + 2];
          cVar7 = local_1c8[lVar15 + 3];
          cVar8 = local_1c8[lVar15 + 4];
          cVar9 = local_1c8[lVar15 + 5];
          cVar10 = local_1c8[lVar15 + 6];
          cVar11 = local_1c8[lVar15 + 7];
          if ((bool)(~(cVar13 == '\x02') & 1)) {
            local_1c8[lVar15] = '\x02';
          }
          if ((bool)(~(cVar5 == '\x02') & 1)) {
            local_1c8[lVar15 + 1] = '\x02';
          }
          if ((bool)(~(cVar6 == '\x02') & 1)) {
            local_1c8[lVar15 + 2] = '\x02';
          }
          if ((bool)(~(cVar7 == '\x02') & 1)) {
            local_1c8[lVar15 + 3] = '\x02';
          }
          if ((bool)(~(cVar8 == '\x02') & 1)) {
            local_1c8[lVar15 + 4] = '\x02';
          }
          if ((bool)(~(cVar9 == '\x02') & 1)) {
            local_1c8[lVar15 + 5] = '\x02';
          }
          if ((bool)(~(cVar10 == '\x02') & 1)) {
            local_1c8[lVar15 + 6] = '\x02';
          }
          if ((bool)(~(cVar11 == '\x02') & 1)) {
            local_1c8[lVar15 + 7] = '\x02';
          }
          if ((bool)(~(cVar13 == '\x02') & 1)) {
            local_1c8[lVar15 + 8] = '\x02';
          }
          if ((bool)(~(cVar5 == '\x02') & 1)) {
            local_1c8[lVar15 + 9] = '\x02';
          }
          if ((bool)(~(cVar6 == '\x02') & 1)) {
            local_1c8[lVar15 + 10] = '\x02';
          }
          if ((bool)(~(cVar7 == '\x02') & 1)) {
            local_1c8[lVar15 + 0xb] = '\x02';
          }
          if ((bool)(~(cVar8 == '\x02') & 1)) {
            local_1c8[lVar15 + 0xc] = '\x02';
          }
          if ((bool)(~(cVar9 == '\x02') & 1)) {
            local_1c8[lVar15 + 0xd] = '\x02';
          }
          if ((bool)(~(cVar10 == '\x02') & 1)) {
            local_1c8[lVar15 + 0xe] = '\x02';
          }
          if ((bool)(~(cVar11 == '\x02') & 1)) {
            local_1c8[lVar15 + 0xf] = '\x02';
          }
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != 0xa8);
        lVar18 = lVar18 + lVar14 * 200;
        local_120 = 0;
        local_11c = 0;
        local_118 = 0;
        local_a8 = (undefined8 *)0x0;
        local_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        cVar13 = FUN_144a410ba(*(undefined8 *)(param_1 + 0x60),lVar18,local_1c8);
        if (cVar13 != '\0') {
          lVar16 = (longlong)(int)uStack_90;
          lVar15 = local_98;
          if (0 < lVar16) {
            do {
              if ((*(byte *)(lVar15 + 0xad) & 1) != 0) {
                if (lVar15 != 0) {
                  iVar3 = *(int *)(param_1 + 0x50);
                  *(uint *)(param_1 + 0x50) = iVar3 + 1U;
                  if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
                    FUN_14810bf06(local_1d0,iVar3);
                  }
                  *(int *)(lVar18 + 8) = iVar3;
                  lVar16 = *local_1d0;
                  lVar17 = (longlong)iVar3 * 0x58;
                  lVar18 = lVar16 + lVar17;
                  *(byte *)(lVar16 + 0x54 + lVar17) = *(byte *)(lVar15 + 0xad) >> 1 & 1;
                  *(undefined8 *)(lVar16 + 0x10 + lVar17) = *(undefined8 *)(lVar15 + 0x38);
                  uVar12 = *(undefined8 *)(lVar15 + 0x30);
                  *(undefined8 *)(lVar16 + lVar17) = *(undefined8 *)(lVar15 + 0x28);
                  ((undefined8 *)(lVar16 + lVar17))[1] = uVar12;
                  *(undefined8 *)(lVar16 + 0x28 + lVar17) = *(undefined8 *)(lVar15 + 0x68);
                  uVar12 = *(undefined8 *)(lVar15 + 0x60);
                  puVar1 = (undefined8 *)(lVar16 + 0x18 + lVar17);
                  *puVar1 = *(undefined8 *)(lVar15 + 0x58);
                  puVar1[1] = uVar12;
                  if (((((*(int *)(lVar15 + 0xb4) == 0) ||
                        (uVar4 = *(uint *)(lVar15 + 0xb0), (int)uVar4 < 0)) ||
                       (DAT_14c9647dc <= (int)uVar4)) ||
                      ((plVar19 = (longlong *)
                                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                       plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)(lVar15 + 0xb4)))))
                     || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) {
                    *(undefined8 *)(lVar18 + 0x48) = 0;
                    uVar20 = 0;
                  }
                  else {
                    if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                      lVar16 = *plVar19;
                    }
                    else {
                      lVar16 = 0;
                    }
                    *(uint *)(lVar18 + 0x48) = (uint)*(byte *)(lVar16 + 0x60);
                    if ((*(int *)(lVar15 + 0xb4) == 0) ||
                       (uVar4 = *(uint *)(lVar15 + 0xb0), (int)uVar4 < 0)) {
LAB_14008e7a1:
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = 0;
                      if ((int)uVar4 < DAT_14c9647dc) {
                        plVar19 = (longlong *)
                                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                        if (((plVar19 == (longlong *)0x0) ||
                            ((int)plVar19[2] != *(int *)(lVar15 + 0xb4))) ||
                           ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_14008e7a1;
                        lVar16 = *plVar19;
                      }
                    }
                    *(undefined4 *)(lVar18 + 0x4c) = *(undefined4 *)(lVar16 + 0x28);
                    if ((*(int *)(lVar15 + 0xb4) == 0) ||
                       (uVar4 = *(uint *)(lVar15 + 0xb0), (int)uVar4 < 0)) {
LAB_14008e7a9:
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = 0;
                      if ((int)uVar4 < DAT_14c9647dc) {
                        plVar19 = (longlong *)
                                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                        if (((plVar19 == (longlong *)0x0) ||
                            ((int)plVar19[2] != *(int *)(lVar15 + 0xb4))) ||
                           ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_14008e7a9;
                        lVar16 = *plVar19;
                      }
                    }
                    uVar20 = *(undefined4 *)(lVar16 + 0x34);
                  }
                  *(undefined4 *)(lVar18 + 0x50) = uVar20;
                  plVar19 = local_1d8;
                }
                break;
              }
              lVar16 = lVar16 + -1;
              lVar15 = lVar15 + 0x100;
            } while (lVar16 != 0);
          }
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a0 == 0) {
LAB_14008e753:
          if (local_a8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_a8 != (undefined8 *)0x0) {
          (**(code **)*local_a8)(local_a8,0);
          FUN_1446efa72(&local_a8,0,0,0x10);
          local_a0 = 0;
          goto LAB_14008e753;
        }
        if (local_150 != 0) {
          FUN_1400020a8();
        }
        if (local_170 != 0) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != iVar2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14008e804 FUN_14008e804 body=305 status=ok
// SIG undefined FUN_14008e804(void)

void FUN_14008e804(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845390) {
    FUN_144b3d300(&DAT_14c845390);
    if (DAT_14c845390 == -1) {
      FUN_1456aefde(&DAT_14c845218);
      DAT_14c845388 = &DAT_14c845218;
      atexit(FUN_14276a1e7);
      _Init_thread_footer(&DAT_14c845390);
    }
  }
  local_38 = 0;
  if (1 < *(int *)(param_1 + 0x20)) {
    local_38 = param_1 + 0x18;
  }
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  FUN_14008e936(DAT_14c845388,&local_20);
  piVar2 = local_20;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != local_20) {
    *(int **)(param_1 + 0x28) = local_20;
    if (local_20 != (int *)0x0) {
      LOCK();
      *local_20 = *local_20 + 1;
      UNLOCK();
    }
    if (piVar1 != (int *)0x0) {
      local_20 = piVar1;
      FUN_1447a2442();
    }
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008e936 FUN_14008e936 body=224 status=ok
// SIG undefined FUN_14008e936(void)

undefined8 *
FUN_14008e936(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,int *param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *param_4;
  if ((iVar1 == -1) || (DAT_14c844e48 == 2)) {
    *param_2 = 0;
  }
  else {
    local_28 = *param_3;
    local_24 = iVar1;
    if (param_5 == (undefined8 *)0x0) {
      param_5 = &DAT_14c845188;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c845198) {
        FUN_144b3d300(&DAT_14c845198);
        if (DAT_14c845198 == -1) {
          DAT_14c845188 = 0;
          uRam000000014c845190 = 0;
          atexit((_func_5014 *)&LAB_142767cd6);
          _Init_thread_footer(&DAT_14c845198);
        }
      }
    }
    FUN_142764a44(param_1,param_2,&local_28,param_5);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008ea28 FUN_14008ea28 body=57 status=ok
// SIG undefined FUN_14008ea28(void)

void FUN_14008ea28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55590 = FUN_140002ddd(FUN_1464b27a6,uVar1,L"BreadcrumbDef");
  }
  return;
}



// FUNCTION 14008ea61 FUN_14008ea61 body=307 status=ok
// SIG undefined FUN_14008ea61(void)

uint FUN_14008ea61(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (uint)(*(ushort *)((longlong)param_1 + 0xe) >> 0xe);
  uVar2 = (uint)(short)param_1[3];
  uVar4 = *param_1;
  uVar4 = uVar2 >> 0xd ^
          (param_1[2] - uVar2) + uVar4 * 0x10000 + (uVar4 & 0xffff) +
          ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4);
  uVar5 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - uVar2;
  uVar6 = uVar5 >> 0xd ^ (uVar2 - uVar4) - uVar5;
  uVar4 = uVar6 >> 0xc ^ (uVar4 - uVar5) - uVar6;
  uVar2 = uVar4 << 0x10 ^ (uVar5 - uVar6) - uVar4;
  uVar5 = uVar2 >> 5 ^ (uVar6 - uVar4) - uVar2;
  uVar6 = uVar5 >> 3 ^ (uVar4 - uVar2) - uVar5;
  uVar4 = uVar6 << 10 ^ (uVar2 - uVar5) - uVar6;
  uVar4 = uVar4 >> 0xf ^ uVar5 - (uVar6 + uVar4);
  iVar3 = uVar4 - uVar1;
  uVar2 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar1 = uVar2 >> 0xd ^ (uVar1 - iVar3) - uVar2;
  uVar4 = uVar1 >> 0xc ^ (iVar3 - uVar2) - uVar1;
  uVar2 = uVar4 << 0x10 ^ (uVar2 - uVar1) - uVar4;
  uVar5 = uVar2 >> 5 ^ (uVar1 - uVar4) - uVar2;
  uVar1 = uVar5 >> 3 ^ (uVar4 - uVar2) - uVar5;
  uVar4 = uVar1 << 10 ^ (uVar2 - uVar5) - uVar1;
  return uVar4 >> 0xf ^ uVar5 - (uVar1 + uVar4);
}



// FUNCTION 14008eb94 FUN_14008eb94 body=139 status=ok
// SIG undefined FUN_14008eb94(void)

void FUN_14008eb94(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)param_2 < 1) && (param_2 = 1, 3 < uVar1)) {
    uVar3 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  else if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_1448759c8(param_1 + 0x10,0);
    return;
  }
  FUN_14008ec20(param_1 + 0x10,param_2,1);
  iVar4 = 0;
  memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 0x18) * 2));
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_14008ec6e(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14008ec20 FUN_14008ec20 body=77 status=ok
// SIG undefined FUN_14008ec20(void)

void FUN_14008ec20(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14488eebe();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_144715f92();
      return;
    }
  }
  return;
}



// FUNCTION 14008ec6e FUN_14008ec6e body=226 status=ok
// SIG undefined FUN_14008ec6e(void)

void FUN_14008ec6e(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = (longlong)param_2 * 0x14;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar4);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar5 = *(uint *)(lVar3 + lVar4);
  iVar7 = (uVar5 << 0x10 | uVar5 & 0xffff) + *(int *)(lVar3 + 8 + lVar4) +
          ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10);
  uVar5 = ~(iVar7 * 0x8000) + iVar7;
  uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
  uVar5 = (int)uVar5 >> 6 ^ uVar5;
  uVar5 = ~(uVar5 << 0xb) + uVar5;
  uVar6 = (longlong)(int)((int)uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar5 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x14);
      uVar5 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    *(ushort *)(lVar3 + 0xe + uVar6 * 0x14) =
         *(ushort *)(lVar3 + 0xe + uVar6 * 0x14) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 14008ed50 FUN_14008ed50 body=141 status=ok
// SIG undefined FUN_14008ed50(void)

void FUN_14008ed50(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)param_2 < 1) && (param_2 = 1, 3 < uVar1)) {
    uVar3 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  else if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_1448759c8(param_1 + 0x10,0);
    return;
  }
  FUN_14008ec20(param_1 + 0x10,param_2,1);
  iVar4 = 0;
  memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 0x18) * 2));
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_14008f0f8(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14008edde FUN_14008edde body=141 status=ok
// SIG undefined FUN_14008edde(void)

void FUN_14008edde(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)param_2 < 1) && (param_2 = 1, 3 < uVar1)) {
    uVar3 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  else if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_1448759c8(param_1 + 0x10,0);
    return;
  }
  FUN_14008ec20(param_1 + 0x10,param_2,1);
  iVar4 = 0;
  memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 0x18) * 2));
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_147bb9a8a(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14008ee6c FUN_14008ee6c body=141 status=ok
// SIG undefined FUN_14008ee6c(void)

void FUN_14008ee6c(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)param_2 < 1) && (param_2 = 1, 3 < uVar1)) {
    uVar3 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  else if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_1448759c8(param_1 + 0x10,0);
    return;
  }
  FUN_14008ec20(param_1 + 0x10,param_2,1);
  iVar4 = 0;
  memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 0x18) * 2));
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_14008f016(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14008eefa FUN_14008eefa body=141 status=ok
// SIG undefined FUN_14008eefa(void)

void FUN_14008eefa(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)param_2 < 1) && (param_2 = 1, 3 < uVar1)) {
    uVar3 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  else if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_1448759c8(param_1 + 0x10,0);
    return;
  }
  FUN_14008ec20(param_1 + 0x10,param_2,1);
  iVar4 = 0;
  memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 0x18) * 2));
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_14008f1d6(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14008ef88 FUN_14008ef88 body=141 status=ok
// SIG undefined FUN_14008ef88(void)

void FUN_14008ef88(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((int)param_2 < 1) && (param_2 = 1, 3 < uVar1)) {
    uVar3 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = (ulonglong)(uint)(1 << ((byte)lVar2 & 0x1f));
  }
  else if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_1448759c8(param_1 + 0x10,0);
    return;
  }
  FUN_14008ec20(param_1 + 0x10,param_2,1);
  iVar4 = 0;
  memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 0x18) * 2));
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_14008f2b8(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14008f016 FUN_14008f016 body=226 status=ok
// SIG undefined FUN_14008f016(void)

void FUN_14008f016(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = (longlong)param_2 * 0x18;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar4);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar5 = *(uint *)(lVar3 + lVar4);
  iVar7 = (uVar5 << 0x10 | uVar5 & 0xffff) + *(int *)(lVar3 + 8 + lVar4) +
          ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10);
  uVar5 = ~(iVar7 * 0x8000) + iVar7;
  uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
  uVar5 = (int)uVar5 >> 6 ^ uVar5;
  uVar5 = ~(uVar5 << 0xb) + uVar5;
  uVar6 = (longlong)(int)((int)uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar5 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x18);
      uVar5 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) =
         *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 14008f0f8 FUN_14008f0f8 body=222 status=ok
// SIG undefined FUN_14008f0f8(void)

void FUN_14008f0f8(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar5 = (longlong)param_2 * 0x20;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar5);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar4 = *(uint *)(lVar3 + lVar5);
  iVar7 = (uVar4 << 0x10 | uVar4 & 0xffff) + *(int *)(lVar3 + 8 + lVar5) +
          ((uVar4 & 0xffff) >> 4) + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10);
  uVar4 = ~(iVar7 * 0x8000) + iVar7;
  uVar4 = ((int)uVar4 >> 10 ^ uVar4) * 9;
  uVar4 = (int)uVar4 >> 6 ^ uVar4;
  uVar4 = ~(uVar4 << 0xb) + uVar4;
  uVar6 = (longlong)(int)((int)uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar4 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar4;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x20);
      uVar4 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    lVar5 = uVar6 * 0x20;
    *(ushort *)(lVar3 + 0xe + lVar5) =
         *(ushort *)(lVar3 + 0xe + lVar5) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 14008f1d6 FUN_14008f1d6 body=226 status=ok
// SIG undefined FUN_14008f1d6(void)

void FUN_14008f1d6(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = (longlong)param_2 * 0x18;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar4);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar5 = *(uint *)(lVar3 + lVar4);
  iVar7 = (uVar5 << 0x10 | uVar5 & 0xffff) + *(int *)(lVar3 + 8 + lVar4) +
          ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10);
  uVar5 = ~(iVar7 * 0x8000) + iVar7;
  uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
  uVar5 = (int)uVar5 >> 6 ^ uVar5;
  uVar5 = ~(uVar5 << 0xb) + uVar5;
  uVar6 = (longlong)(int)((int)uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar5 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x18);
      uVar5 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) =
         *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 14008f2b8 FUN_14008f2b8 body=226 status=ok
// SIG undefined FUN_14008f2b8(void)

void FUN_14008f2b8(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = (longlong)param_2 * 0x18;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar4);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar5 = *(uint *)(lVar3 + lVar4);
  iVar7 = (uVar5 << 0x10 | uVar5 & 0xffff) + *(int *)(lVar3 + 8 + lVar4) +
          ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10);
  uVar5 = ~(iVar7 * 0x8000) + iVar7;
  uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
  uVar5 = (int)uVar5 >> 6 ^ uVar5;
  uVar5 = ~(uVar5 << 0xb) + uVar5;
  uVar6 = (longlong)(int)((int)uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar5 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x18);
      uVar5 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) =
         *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 14008f39a FUN_14008f39a body=286 status=ok
// SIG undefined FUN_14008f39a(void)

undefined8 FUN_14008f39a(longlong param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14488df26(param_4);
  if (*(uint *)(param_1 + 0x54) < param_2) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    uStack_70 = 0;
    local_48 = 0;
    local_78 = 1;
    uStack_60 = 0x1000100000001;
    local_58 = 0x100000000;
    uStack_50 = 0x100000000;
    uStack_40 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 1;
    local_a0 = 0xac3;
    local_b8 = (ulonglong)param_2;
    local_b0 = param_3;
    local_88 = param_4;
    local_68 = (ulonglong)param_2;
    FUN_1400dec70(param_1 + 0x168,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),2);
    if (*(char *)(param_4 + 0x71) == '\x02') {
      *(byte *)(param_4 + 0x2e) = *(byte *)(param_4 + 0x2e) & 0xef;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  }
  else {
    FUN_14472c34a(param_1 + 0x20,param_2,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return *(undefined8 *)(param_4 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008f4c8 FUN_14008f4c8 body=40 status=ok
// SIG undefined FUN_14008f4c8(void)

undefined8 FUN_14008f4c8(undefined8 param_1,int param_2)

{
  FUN_14008f4f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14008f4f0 FUN_14008f4f0 body=75 status=ok
// SIG undefined FUN_14008f4f0(void)

void FUN_14008f4f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b056c00;
  if ((param_1[0xb] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xb] + 0x50));
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014008f525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14008f53c FUN_14008f53c body=189 status=ok
// SIG undefined FUN_14008f53c(void)

void FUN_14008f53c(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2 + 0x1fU >> 5;
  uVar6 = *(int *)((longlong)param_1 + 0x14) + 0x1f;
  pvVar4 = *(void **)((longlong)param_1 + 8);
  if (uVar6 < 0x40) {
    if (pvVar4 == (void *)0x0) goto LAB_14008f58f;
    memmove(param_1,pvVar4,(ulonglong)(uVar5 << 2));
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 >> 5;
    if (pvVar4 == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar6,4);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(ulonglong)(uVar5 << 2));
      goto LAB_14008f58f;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,uVar5,uVar6,4);
LAB_14008f58f:
  iVar1 = *(int *)((longlong)param_1 + 0x10);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    pvVar4 = *(void **)((longlong)param_1 + 8);
    if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
      pvVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
         (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 14008f606 FUN_14008f606 body=163 status=ok
// SIG undefined FUN_14008f606(void)

void FUN_14008f606(char *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*param_1 == '\x02') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  }
  else if (*param_1 == '\x01') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
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
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*param_1 != '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014008f68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  return;
}



// FUNCTION 14008f6ce FUN_14008f6ce body=26 status=ok
// SIG undefined FUN_14008f6ce(void)

void FUN_14008f6ce(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  FUN_14008f7fa(uVar1);
  return;
}



// FUNCTION 14008f6f0 FUN_14008f6f0 body=26 status=ok
// SIG undefined FUN_14008f6f0(void)

void FUN_14008f6f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  FUN_14008f7aa(uVar1);
  return;
}



// FUNCTION 14008f712 FUN_14008f712 body=26 status=ok
// SIG undefined FUN_14008f712(void)

void FUN_14008f712(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  FUN_14008f84e(uVar1);
  return;
}



// FUNCTION 14008f7aa FUN_14008f7aa body=80 status=ok
// SIG undefined FUN_14008f7aa(void)

void FUN_14008f7aa(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_146ea0fec(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    return;
  }
  FUN_140221dc0(param_1 + 0x20);
  FUN_140221c28(param_1 + 0x20);
  return;
}



// FUNCTION 14008f7fa FUN_14008f7fa body=84 status=ok
// SIG undefined FUN_14008f7fa(void)

void FUN_14008f7fa(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_146dfc51c(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) {
    return;
  }
  FUN_140221dc0(param_1 + 0x28);
  FUN_140221c28(param_1 + 0x28);
  return;
}



// FUNCTION 14008f84e FUN_14008f84e body=86 status=ok
// SIG undefined FUN_14008f84e(void)

void FUN_14008f84e(longlong param_1)

{
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    FUN_140221dc0(param_1 + 0x20);
    FUN_140221c28(param_1 + 0x20);
  }
  if (-1 < *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_146e9f4f2(param_1 + 8,0);
  return;
}



// FUNCTION 14008f8aa FUN_14008f8aa body=135 status=ok
// SIG undefined FUN_14008f8aa(void)

longlong FUN_14008f8aa(longlong param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(byte *)(param_1 + 0x1f0) == param_2) {
    return param_1;
  }
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar3 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar2 * 0x18);
        if (*pbVar1 == param_2) {
          if (pbVar1 + 8 != (byte *)0x0 && pbVar1 != (byte *)0x0) {
            return *(longlong *)(pbVar1 + 8);
          }
          return 0;
        }
        iVar2 = *(int *)(pbVar1 + 0x10);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14008f932 FUN_14008f932 body=304 status=ok
// SIG undefined FUN_14008f932(void)

void FUN_14008f932(longlong *param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_1[0x16];
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14008f9fd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14008f9fd;
    }
  }
  else {
LAB_14008f9fd:
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0x152) == '\x04')) {
      if (param_1[0x2c6] == 0) {
        cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
        if (cVar2 != '\0') goto LAB_14008f99f;
        cVar2 = FUN_140769252(param_1);
        if ((cVar2 != '\0') || (param_1[0x2c7] != 0)) goto LAB_14008f99f;
        goto LAB_14008fa47;
      }
      goto LAB_14008f99f;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (cVar2 == '\0') {
LAB_14008fa47:
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      FUN_14008fa6e(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14008f99f:
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1447a68a4(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14008fa6e FUN_14008fa6e body=201 status=ok
// SIG undefined FUN_14008fa6e(void)

undefined4 FUN_14008fa6e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x658);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar2 != (longlong *)0x0) != 0) goto LAB_14008fac2;
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
LAB_14008fae3:
    if ((DAT_14c950c29 & plVar2 != (longlong *)0x0) != 0) goto LAB_14008fafe;
LAB_14008faed:
    if (((DAT_14c950c29 & 1) == 0) || (plVar2 == (longlong *)0x0)) goto LAB_14008fa8c;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_14008fa8c;
LAB_14008fac2:
    FUN_1456cec3c(plVar2);
    plVar2 = *(longlong **)(param_1 + 0x658);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x660);
      goto LAB_14008fae3;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_14008fa8c;
LAB_14008fafe:
    FUN_1456cec3c(plVar2);
    plVar2 = *(longlong **)(param_1 + 0x658);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x660);
      goto LAB_14008faed;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_14008fa8c;
  }
  FUN_1456cec3c(plVar2);
LAB_14008fa8c:
  lVar1 = (**(code **)(*plVar2 + 0x3b8))(plVar2);
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 14008fb38 FUN_14008fb38 body=332 status=ok
// SIG undefined FUN_14008fb38(void)

void FUN_14008fb38(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14008fba6;
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
LAB_14008fba6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x28)) {
      uVar5 = uVar3 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x28,8);
  }
  return;
}



// FUNCTION 14008fc84 FUN_14008fc84 body=371 status=ok
// SIG undefined FUN_14008fc84(void)

undefined8 * FUN_14008fc84(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x1970) == '\x01') || (*(char *)(param_1 + 0x1910) == '\x01')) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x1660);
    _Src = *(void **)(param_1 + 0x1658);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_14008fdf8(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    plVar2 = *(longlong **)(param_1 + 0x1630);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar1 = DAT_14cb80fb0 + 1;
      UNLOCK();
      iVar4 = DAT_14cb80fb0 + 1;
      DAT_14cb80fb0 = iVar1;
      if ((int)plVar2[8] != iVar4) {
        *(int *)(plVar2 + 8) = iVar4;
        (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
      }
    }
    iVar1 = *(int *)(param_1 + 0x1690);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1688);
      lVar5 = 0;
      do {
        local_40 = *(longlong *)(lVar3 + lVar5);
        if (local_40 != 0) {
          FUN_1447a7018(param_2,&local_40);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    iVar1 = *(int *)(param_1 + 0x18a8);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x18a0);
      lVar5 = 0;
      do {
        local_40 = *(longlong *)(lVar3 + lVar5);
        if (local_40 != 0) {
          FUN_1447a7018(param_2,&local_40);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14008fdf8 FUN_14008fdf8 body=317 status=ok
// SIG undefined FUN_14008fdf8(void)

void FUN_14008fdf8(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14008fe66;
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
LAB_14008fe66:
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



// FUNCTION 14008ff36 FUN_14008ff36 body=370 status=ok
// SIG undefined FUN_14008ff36(void)

void FUN_14008ff36(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14008ffc1;
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
LAB_14008ffc1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1400900b4 FUN_1400900b4 body=186 status=ok
// SIG undefined FUN_1400900b4(void)

ulonglong FUN_1400900b4(longlong param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0xc5));
    goto LAB_1400900cb;
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((lVar2 == 0) && (lVar2 = FUN_14475ec7e(param_1), lVar2 == 0)) {
LAB_140090163:
    uVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((uVar3 = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      if (*(char *)(param_1 + 0x39) == '\0') {
        uVar4 = 0;
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0);
          uVar4 = 0;
          if ((lVar2 != 0) &&
             (uVar4 = (undefined7)((ulonglong)lVar2 >> 8),
             *(longlong *)(lVar2 + 0x3f0) != param_1 && *(longlong *)(lVar2 + 0x3f0) != 0)) {
            uVar3 = FUN_1400900b4();
            goto LAB_140090136;
          }
        }
        uVar3 = CONCAT71(uVar4,DAT_14cb11840 == 1);
      }
      else {
        if (*(char *)(param_1 + 0x39) != '\x02') goto LAB_140090163;
        uVar3 = 1;
      }
    }
  }
LAB_140090136:
  *(char *)(param_1 + 0xc5) = (char)uVar3;
  *(undefined1 *)(param_1 + 0xc6) = 1;
LAB_1400900cb:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 14009016e FUN_14009016e body=191 status=ok
// SIG undefined FUN_14009016e(void)

undefined8 FUN_14009016e(undefined8 param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_1d8 [15];
  undefined8 auStack_1c9 [2];
  undefined1 uStack_1b9;
  undefined4 local_1b8 [50];
  undefined8 local_f0;
  undefined7 uStack_e8;
  undefined4 uStack_e1;
  byte local_dd;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d0 [192];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b8[0] = 0;
  lVar1 = 0x19;
  do {
    *(undefined8 *)((longlong)auStack_1c9 + lVar1) = 0;
    *(undefined8 *)((longlong)auStack_1c9 + lVar1 + 8) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_1b9 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd9);
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e1 = 0;
  local_dd = local_dd & 0xc0 | param_3 << 5;
  local_dc = param_2;
  local_d8 = param_2;
  memset(local_d0,0,0xc0);
  FUN_141645ea2(param_1,local_1b8);
  if ((local_10 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009022e FUN_14009022e body=535 status=ok
// SIG undefined FUN_14009022e(void)

void FUN_14009022e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  uint local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((lVar5 == 0) && (lVar5 = FUN_1448abda6(param_1), lVar5 == 0)) {
LAB_14009035e:
    bVar8 = true;
    plVar7 = (longlong *)0x0;
LAB_140090364:
    local_68 = (uint)((*(byte *)(param_1 + 0xc70) & 4) == 0);
    FUN_143631de4(param_1,param_2,param_3,param_4);
    if (bVar8) goto LAB_1400903aa;
  }
  else {
    uVar2 = DAT_14cb71f80;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_58,uVar2,lVar5);
    plVar6 = local_50;
    if ((local_58 == 0) || (local_50 == (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_14009035e;
    iVar4 = (int)plVar6[1];
    do {
      plVar7 = (longlong *)0x0;
      if (iVar4 == 0) break;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = plVar6;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    bVar8 = plVar7 == (longlong *)0x0;
    if (local_58 == 0 || bVar8) goto LAB_140090364;
    if ((*(byte *)(param_1 + 0xc70) & 4) == 0) {
      FUN_1401649ea(local_58,param_1);
    }
    if (((DAT_14cb71bf8 != '\x01') || (*(char *)(param_1 + 0x1178) != '\x01')) ||
       ((*(byte *)(param_1 + 0xc70) & 4) == 0)) {
      bVar8 = false;
      goto LAB_140090364;
    }
  }
  LOCK();
  plVar6 = plVar7 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1400903aa:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140090446 FUN_140090446 body=144 status=ok
// SIG undefined FUN_140090446(void)

void FUN_140090446(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xae8);
  if (lVar2 != 0) {
    bVar5 = (byte)*(undefined4 *)(lVar2 + 0x1b8);
    bVar4 = param_2;
    if (param_2 < bVar5) {
      bVar4 = bVar5;
    }
    *(byte *)(lVar2 + 0x1b8) = bVar4;
  }
  iVar1 = *(int *)(param_1 + 0xb80);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb78);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      bVar4 = (byte)*(undefined4 *)(lVar3 + 0x1b8);
      if (bVar4 <= param_2) {
        bVar4 = param_2;
      }
      *(byte *)(lVar3 + 0x1b8) = bVar4;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  lVar2 = *(longlong *)(param_1 + 0xaf8);
  if (lVar2 != 0) {
    bVar4 = (byte)*(undefined4 *)(lVar2 + 0x1b8);
    if (param_2 < bVar4) {
      param_2 = bVar4;
    }
    *(byte *)(lVar2 + 0x1b8) = param_2;
  }
  return;
}



// FUNCTION 1400904d6 FUN_1400904d6 body=190 status=ok
// SIG undefined FUN_1400904d6(void)

void FUN_1400904d6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  param_1[0x14] = param_3;
  param_1[0x15] = 0;
  lVar4 = (**(code **)(*param_1 + 8))();
  do {
    *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) & 0xfd;
    lVar4 = *(longlong *)(lVar4 + 0x88);
  } while (lVar4 != 0);
  FUN_140090594(param_1,param_2);
  plVar1 = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x13) = 0;
  iVar3 = 0;
  iVar5 = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_144893a1c(plVar1,0);
    iVar5 = (int)param_1[0x13];
    iVar3 = *(int *)((longlong)param_1 + 0x9c);
  }
  uVar2 = (uint)(param_3 + 7U >> 3);
  *(uint *)(param_1 + 0x13) = iVar5 + uVar2;
  if ((uint)(iVar3 - iVar5) < uVar2) {
    FUN_1447403be(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140090579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x178))(param_2,*plVar1,param_3);
  return;
}



// FUNCTION 140090594 FUN_140090594 body=165 status=ok
// SIG undefined FUN_140090594(void)

void FUN_140090594(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_1 + 0x110))(param_1,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  (**(code **)(*param_1 + 0x118))(param_1,uVar1);
  (**(code **)(*param_1 + 0xf8))(param_1,param_2[8]);
  (**(code **)(*param_1 + 0x100))(param_1,(int)param_2[9]);
  local_20 = *(undefined4 *)((longlong)param_2 + 0x54);
  local_28 = *(undefined8 *)((longlong)param_2 + 0x4c);
  (**(code **)(*param_1 + 0x108))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009063a FUN_14009063a body=373 status=ok
// SIG undefined FUN_14009063a(void)

void FUN_14009063a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400906c3;
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
LAB_1400906c3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1400907be FUN_1400907be body=453 status=ok
// SIG undefined FUN_1400907be(void)

longlong * FUN_1400907be(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar4 = local_34;
  if (local_34 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1400ea480(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_140090b36(param_2,0);
      }
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x55555 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_14009099e(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1400ea480(*param_2,(int)param_2[1]);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(uint *)((longlong)param_2 + 0xc) != uVar4) {
      FUN_140090b36(param_2,uVar4);
    }
    if (0 < (int)local_34) {
      iVar6 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147daf842(param_2,iVar2);
        }
        lVar5 = (longlong)iVar2 * 0x30 + *param_2;
        FUN_140090984(lVar5);
        FUN_14009099e(param_1,lVar5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140090984 FUN_140090984 body=26 status=ok
// SIG undefined FUN_140090984(void)

void FUN_140090984(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 14009099e FUN_14009099e body=270 status=ok
// SIG undefined FUN_14009099e(void)

longlong * FUN_14009099e(longlong *param_1,undefined4 *param_2)

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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447a84cc(param_1,param_2 + 4);
  FUN_1447a84cc(param_1,param_2 + 8);
  return param_1;
}



// FUNCTION 140090aac FUN_140090aac body=138 status=ok
// SIG undefined FUN_140090aac(void)

void FUN_140090aac(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong _Size;
  
  if ((param_3 != 0) && ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0)) {
    lVar1 = param_1[0x12];
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar2 < (longlong)(lVar1 + param_3)) {
      FUN_14572541c(param_1);
      return;
    }
    uVar3 = param_1[0x12];
    _Size = param_1[0x14] - uVar3;
    if (uVar3 <= (ulonglong)param_1[0x14] && _Size != 0) {
      if (param_3 <= _Size) {
        _Size = param_3;
      }
      memcpy(param_2,(void *)(uVar3 + param_1[0x13]),_Size);
      uVar3 = param_1[0x12];
    }
    param_1[0x12] = uVar3 + param_3;
  }
  return;
}



// FUNCTION 140090b36 FUN_140090b36 body=230 status=ok
// SIG undefined FUN_140090b36(void)

void FUN_140090b36(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2ab) {
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
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 140090c1c FUN_140090c1c body=143 status=ok
// SIG undefined FUN_140090c1c(void)

int * FUN_140090c1c(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x270));
  iVar1 = *(int *)(param_1 + 0x280);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    lVar3 = 0;
    do {
      FUN_140090cac(*(undefined8 *)(lVar2 + lVar3),param_2,param_3);
      if (*param_2 == 0) goto LAB_140090c91;
      *param_2 = 1;
      *(undefined2 *)(param_2 + 1) = 0;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *param_2 = 8;
  *(undefined2 *)(param_2 + 1) = 0;
LAB_140090c91:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x270));
  return param_2;
}



// FUNCTION 140090cac FUN_140090cac body=100 status=ok
// SIG undefined FUN_140090cac(void)

undefined4 * FUN_140090cac(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN_1447a8686(param_1,param_3);
  uVar4 = DAT_14c845dc8;
  if (lVar3 == 0) {
    *(undefined2 *)(param_2 + 1) = 0;
    uVar4 = 8;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 6);
    uVar1 = *(undefined1 *)(lVar3 + 5);
    memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
    *(ulonglong *)(param_2 + 0x42) =
         (ulonglong)
         CONCAT14(uVar1,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18);
  }
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 140090d1c FUN_140090d1c body=31 status=ok
// SIG undefined FUN_140090d1c(void)

undefined8 FUN_140090d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140090d48 FUN_140090d48 body=31 status=ok
// SIG undefined FUN_140090d48(void)

undefined8 FUN_140090d48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140090d74 FUN_140090d74 body=31 status=ok
// SIG undefined FUN_140090d74(void)

undefined8 FUN_140090d74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140090d94 FUN_140090d94 body=37 status=ok
// SIG undefined FUN_140090d94(void)

void FUN_140090d94(longlong param_1)

{
  FUN_140090dba();
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfe;
  return;
}



// FUNCTION 140090dba FUN_140090dba body=173 status=ok
// SIG undefined FUN_140090dba(void)

void FUN_140090dba(longlong param_1,char param_2)

{
  FUN_1449394d8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_141835560(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_144893a1c(param_1 + 0x20,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1464784ea(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_140c6998c(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1481d7334(param_1 + 0x50,0);
  }
  if (param_2 != '\0') {
    FUN_1447b41aa(param_1);
    return;
  }
  return;
}



// FUNCTION 140090e74 FUN_140090e74 body=31 status=ok
// SIG undefined FUN_140090e74(void)

undefined8 FUN_140090e74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140090ea0 FUN_140090ea0 body=31 status=ok
// SIG undefined FUN_140090ea0(void)

undefined8 FUN_140090ea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140090ec0 FUN_140090ec0 body=450 status=ok
// SIG undefined FUN_140090ec0(void)

void FUN_140090ec0(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,4);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140090fdb:
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
LAB_140091018:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 4;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140090f16;
LAB_140090f0b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140090f16:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3fea) goto code_r0x000140090f42;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140090f98:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140091018;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140090fdb;
code_r0x000140090f42:
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
      goto LAB_140090f98;
    }
  }
  goto LAB_140090f0b;
}



// FUNCTION 140091082 FUN_140091082 body=65 status=ok
// SIG undefined FUN_140091082(void)

bool FUN_140091082(longlong *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x2f8))();
  bVar2 = true;
  if (cVar1 == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (param_2 == 0) {
      bVar2 = 0 < iVar3;
    }
    else {
      bVar2 = param_2 <= iVar3;
    }
  }
  return bVar2;
}



// FUNCTION 1400910c4 FUN_1400910c4 body=62 status=ok
// SIG undefined FUN_1400910c4(void)

void FUN_1400910c4(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x2f8))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
    lVar3 = 0x2b8;
    if (0 < iVar2) goto LAB_1400910f3;
  }
  lVar3 = 0x2d0;
LAB_1400910f3:
                    /* WARNING: Could not recover jumptable at 0x0001400910fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar3))(param_1);
  return;
}



// FUNCTION 140091102 FUN_140091102 body=72 status=ok
// SIG undefined FUN_140091102(void)

ulonglong FUN_140091102(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x111) & 1) == 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xb18) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xb20), plVar2 != (longlong *)0x0))
    {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (cVar1 != '\0') goto LAB_140091142;
    }
    uVar3 = 0;
  }
LAB_140091142:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14009114a FUN_14009114a body=116 status=ok
// SIG undefined FUN_14009114a(void)

void FUN_14009114a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144a3a3ee(param_1,iVar1);
    }
    FUN_1447c0d5c((longlong)iVar1 * 0x100 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1400911c0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400911c0 FUN_1400911c0 body=63 status=ok
// SIG undefined FUN_1400911c0(void)

void FUN_1400911c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140091200(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,8);
  }
  return;
}



// FUNCTION 140091200 FUN_140091200 body=93 status=ok
// SIG undefined FUN_140091200(void)

ulonglong FUN_140091200(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc0U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 8,8);
      uVar1 = uVar1 >> 8;
    }
  }
  return uVar1;
}



// FUNCTION 14009125e FUN_14009125e body=486 status=ok
// SIG undefined FUN_14009125e(void)

longlong FUN_14009125e(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5,undefined1 param_6,longlong *param_7)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70 [2];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0x400000000;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar8 = (longlong *)param_4[4];
    if ((longlong *)param_4[4] == (longlong *)0x0) {
      plVar8 = param_4;
    }
    if ((longlong)(int)param_4[5] != 0) {
      plVar7 = plVar8 + (longlong)(int)param_4[5] * 2;
      local_78 = (longlong *)(param_1 + 0x30);
      do {
        if ((*(byte *)(*plVar8 + 0x29) & 0x20) != 0) {
          local_70[0] = *(undefined4 *)(param_1 + 0x24);
          local_60 = (undefined4)*plVar8;
          uStack_5c = *(undefined4 *)((longlong)plVar8 + 4);
          uStack_58 = (undefined4)plVar8[1];
          uStack_54 = *(undefined4 *)((longlong)plVar8 + 0xc);
          local_50 = *param_5;
          local_68 = param_1;
          iVar3 = FUN_140249702(&DAT_14cafb2e8,local_70,param_6,param_2);
          if (iVar3 != -1) {
            lVar4 = *param_7;
            iVar1 = (int)param_7[1];
            lVar6 = (longlong)iVar1;
            if (lVar6 != 0) {
              uVar5 = 0;
              do {
                if (*(int *)(lVar4 + uVar5) == iVar3) {
                  if ((~uVar5 & 0x3fffffffc) != 0) goto LAB_140091389;
                  break;
                }
                uVar5 = uVar5 + 4;
              } while (lVar6 * 4 - uVar5 != 0);
            }
            *(uint *)(param_7 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_7 + 0xc) < iVar1 + 1U) {
              FUN_1447808da(param_7,iVar1);
              lVar4 = *param_7;
            }
            *(int *)(lVar4 + lVar6 * 4) = iVar3;
LAB_140091389:
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
            plVar2 = local_78;
            lVar4 = *(longlong *)(param_1 + 0x30);
            iVar1 = *(int *)(param_1 + 0x38);
            lVar6 = (longlong)iVar1;
            if (lVar6 != 0) {
              uVar5 = 0;
              do {
                if (*(int *)(lVar4 + uVar5) == iVar3) {
                  if ((~uVar5 & 0x3fffffffc) != 0) goto LAB_140091400;
                  break;
                }
                uVar5 = uVar5 + 4;
              } while (lVar6 * 4 - uVar5 != 0);
            }
            *(uint *)(param_1 + 0x38) = iVar1 + 1U;
            if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
              FUN_1447808da(local_78,iVar1);
              lVar4 = *plVar2;
            }
            *(int *)(lVar4 + lVar6 * 4) = iVar3;
LAB_140091400:
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
          }
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140091446 FUN_140091446 body=95 status=ok
// SIG undefined FUN_140091446(void)

void FUN_140091446(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      iVar4 = 0;
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if (((int)param_2 <= iVar1) && (iVar3 = iVar1, iVar1 < 1)) goto LAB_140091470;
    }
    FUN_1400914a6(param_1,0,iVar3);
    iVar4 = iVar3;
  }
LAB_140091470:
  *(int *)(param_1 + 0x4c) = iVar4;
  return;
}



// FUNCTION 1400914a6 FUN_1400914a6 body=131 status=ok
// SIG undefined FUN_1400914a6(void)

void FUN_1400914a6(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14009152a FUN_14009152a body=1061 status=ok
// SIG undefined FUN_14009152a(void)

ulonglong FUN_14009152a(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60 [2];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_140091669;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x68);
      lVar8 = (longlong)param_2 * 0x30;
      local_68 = *(undefined8 *)(lVar4 + lVar8);
      local_60[0] = *(undefined4 *)(lVar4 + 8 + lVar8);
      local_58 = *(longlong *)(lVar4 + 0x10 + lVar8);
      uVar9 = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar8) = 0;
      local_50 = *(longlong *)(lVar4 + 0x18 + lVar8);
      *(undefined8 *)(lVar4 + 0x18 + lVar8) = 0;
      local_48 = *(undefined4 *)(lVar4 + 0x20 + lVar8);
      local_44 = *(undefined4 *)(lVar4 + 0x24 + lVar8);
      *(undefined8 *)(lVar4 + 0x20 + lVar8) = 0;
      local_40 = *(byte *)(lVar4 + 0x28 + lVar8);
      FUN_140d0e176(param_1 + 0x18);
      FUN_140091950(param_1 + 0x68,param_2);
      uVar3 = *(uint *)(param_1 + 0xa8);
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar10 = (ulonglong)uVar3;
        uVar13 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar9;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x28) < param_2) {
            uVar9 = (ulonglong)(uVar12 + (uVar13 & 1));
          }
          bVar5 = 1 < uVar13;
          uVar13 = (uint)uVar10;
        } while (bVar5);
      }
      if (((int)uVar9 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 0x28) <= param_2)) {
        FUN_1476aed46(param_1 + 0xa0,uVar9);
LAB_140091946:
        FUN_1476aedbc(param_1 + 0xa0);
      }
LAB_140091634:
      if ((local_40 & 1) != 0) {
        FUN_140091a18(&local_68,local_60);
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if ((local_58 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      unaff_RBP = 0;
      goto LAB_140091669;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)param_2 * 0x30) & 1) == 0)
    goto LAB_140091669;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x30);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar13 = 0;
    if (0 < (int)uVar3) {
      uVar13 = 0;
      uVar12 = uVar3;
      do {
        uVar1 = (uVar12 >> 1) + uVar13;
        if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x28) < param_2) {
          uVar13 = uVar1 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    lVar8 = param_1 + 0xa0;
    if ((((int)uVar13 < (int)uVar3) && (*(int *)(lVar4 + (ulonglong)uVar13 * 0x28) <= param_2)) &&
       (lVar4 + (ulonglong)uVar13 * 0x28 != -8)) {
      FUN_140091a18((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar13 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar9;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x28) < param_2) {
            uVar9 = (ulonglong)(uVar12 + (uVar13 & 1));
          }
          bVar5 = 1 < uVar13;
          uVar13 = (uint)uVar10;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar11,1);
      if (((int)uVar9 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 0x28) <= param_2)) {
        FUN_1476aed46(lVar8);
        FUN_1476aedbc(lVar8);
      }
      goto LAB_140091669;
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\0') {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x30);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)param_2 * 0x30);
      if ((bVar2 & 2) == 0) {
        local_68 = *puVar7;
        local_60[0] = *(undefined4 *)(puVar7 + 1);
        local_58 = puVar7[2];
        uVar9 = 0;
        puVar7[2] = 0;
        local_50 = puVar7[3];
        puVar7[3] = 0;
        local_48 = *(undefined4 *)(puVar7 + 4);
        local_44 = *(undefined4 *)((longlong)puVar7 + 0x24);
        puVar7[4] = 0;
        local_40 = bVar2;
        FUN_140d0e176(param_1 + 0x18);
        FUN_140091950(param_1 + 0x68,param_2);
        uVar3 = *(uint *)(param_1 + 0xa8);
        if (0 < (int)uVar3) {
          uVar9 = 0;
          uVar10 = (ulonglong)uVar3;
          uVar13 = uVar3;
          do {
            uVar10 = uVar10 >> 1;
            uVar12 = (uint)uVar10 + (int)uVar9;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x28) < param_2) {
              uVar9 = (ulonglong)(uVar12 + (uVar13 & 1));
            }
            bVar5 = 1 < uVar13;
            uVar13 = (uint)uVar10;
          } while (bVar5);
        }
        if (((int)uVar9 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 0x28) <= param_2)) {
          FUN_1476aed46(lVar8,uVar9);
          goto LAB_140091946;
        }
        goto LAB_140091634;
      }
      if ((bVar2 & 1) == 0) goto LAB_140091669;
    }
    else {
      if (param_4 != '\x01') goto LAB_140091669;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)param_2 * 0x30);
      if ((bVar2 & 1) == 0) goto LAB_140091669;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x30);
      *(byte *)(puVar7 + 5) = bVar2 | 2;
    }
  }
  FUN_140091a18(puVar7,puVar7 + 1);
LAB_140091669:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 140091950 FUN_140091950 body=200 status=ok
// SIG undefined FUN_140091950(void)

void FUN_140091950(longlong *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)param_2 * 0x30;
  lVar7 = *param_1 + lVar6;
  if (*(longlong *)(*param_1 + 0x18 + lVar6) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar7 + 0x10) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
  }
  lVar7 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar7 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar7 + lVar6) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar7 + lVar6 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar3 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar3 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 140091a18 FUN_140091a18 body=2332 status=ok
// SIG undefined FUN_140091a18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140091a18(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_f8 [32];
  code **local_d8;
  uint local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
     || (((plVar16 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar16 == (longlong *)0x0 || (*(uint *)(plVar16 + 2) != param_1[1])) ||
         (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
          (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)))))) goto LAB_140091da5;
  if (DAT_14cad2858 == 0) {
    local_a0 = &local_88;
    local_88 = FUN_144a7958c;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_146395584;
    local_a8 = &LAB_147a0ba80;
    local_b0 = &LAB_14575ccce;
    local_b8 = L"Engine";
    local_c0 = 0x40000000000;
    local_c8 = 0x10000004;
    local_d0 = 0x10;
    local_d8 = (code **)CONCAT44(local_d8._4_4_,0x1180);
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if (((*(int *)(plVar16[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
       DAT_14cad2858 + 0x30)) || ((*(byte *)((longlong)plVar16 + 0x9c) & 1) == 0))
  goto LAB_140091da5;
  lVar11 = FUN_14073476d(plVar16);
  bVar9 = true;
  if (lVar11 != 0) {
    uVar12 = FUN_140732678();
    plVar13 = (longlong *)FUN_144718840(lVar11,uVar12);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x48))(plVar13);
      (**(code **)(*plVar13 + 0x40))(plVar13);
      bVar9 = false;
    }
  }
  if (*(char *)((longlong)plVar16 + 0xc5f) == '\x02') {
    lVar11 = plVar16[0x15d];
    if (lVar11 != 0) {
      lVar14 = FUN_140732592();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) {
        uVar12 = FUN_140732678();
        plVar13 = (longlong *)FUN_144718840(lVar11,uVar12);
        if ((plVar13 != (longlong *)0x0) &&
           ((cVar10 = (**(code **)(*plVar13 + 0x20))(plVar13), cVar10 != '\0' &&
            (lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar11 != 0)))) {
          lVar14 = FUN_140732592();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_140092249;
          (**(code **)(*plVar13 + 0x18))(plVar13,0);
        }
      }
      else {
        uVar12 = FUN_140732678();
        plVar13 = (longlong *)FUN_144718840(lVar11,uVar12);
        if (((plVar13 == (longlong *)0x0) ||
            (cVar10 = (**(code **)(*plVar13 + 0x20))(plVar13), cVar10 == '\0')) ||
           (lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar11 == 0)) {
          (**(code **)(*plVar16 + 0xcb0))(plVar16);
        }
        else {
LAB_140092249:
          (**(code **)(*plVar13 + 0x18))(plVar13,0);
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar11);
          }
          plVar16[0x15d] = lVar11;
        }
      }
    }
  }
  else if (*(char *)((longlong)plVar16 + 0xc5f) == '\0') {
    lVar11 = plVar16[0x15d];
    if (lVar11 != 0) {
      uVar12 = FUN_140732678();
      plVar13 = (longlong *)FUN_144718840(lVar11,uVar12);
      if (((plVar13 != (longlong *)0x0) &&
          (cVar10 = (**(code **)(*plVar13 + 0x20))(plVar13), cVar10 != '\0')) &&
         (lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar14 != 0)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,0);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar14);
        }
        plVar16[0x15d] = lVar14;
        lVar11 = lVar14;
      }
      lVar14 = plVar16[0x170];
      if ((longlong)(int)lVar14 != 0) {
        lVar15 = plVar16[0x16f];
        lVar18 = 0;
        do {
          FUN_14024c0da(*(undefined8 *)(lVar15 + lVar18),0,0,0);
          lVar18 = lVar18 + 8;
        } while ((longlong)(int)lVar14 * 8 != lVar18);
      }
      FUN_14024c0da(lVar11,0,0,1);
    }
    (**(code **)(*plVar16 + 0xaf8))(plVar16,0);
    FUN_1447a916a(plVar16);
    FUN_1447a91cc(plVar16,0,0);
  }
  lVar11 = plVar16[0x16];
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(plVar16);
    if (lVar11 != 0) {
      lVar11 = plVar16[0x16];
      if (lVar11 == 0) {
        lVar11 = FUN_1448abda6(plVar16);
      }
      goto LAB_140091bba;
    }
  }
  else {
LAB_140091bba:
    bVar1 = *(byte *)(lVar11 + 0x152);
    if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
      FUN_147a0e058(plVar16);
    }
  }
  uVar2 = param_2[6];
  if ((longlong)(int)uVar2 != 0) {
    lVar11 = *(longlong *)(param_2 + 4);
    lVar14 = 0;
    do {
      iVar3 = *(int *)(lVar11 + 4 + lVar14);
      if (((iVar3 != 0) && (uVar4 = *(uint *)(lVar11 + lVar14), -1 < (int)uVar4)) &&
         (((int)uVar4 < DAT_14c9647dc &&
          (((puVar17 = (undefined8 *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
            puVar17 != (undefined8 *)0x0 && (*(int *)(puVar17 + 2) == iVar3)) &&
           ((*(uint *)(puVar17 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(puVar17 + 1) & 0x10200000) == 0) {
          plVar13 = (longlong *)*puVar17;
        }
        else {
          plVar13 = (longlong *)0x0;
        }
        (**(code **)(*plVar13 + 0xb28))(plVar13,*(undefined4 *)(lVar11 + 0xc + lVar14));
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)(int)uVar2 * 0x10 != lVar14);
  }
  if (*param_2 != (uint)*(byte *)((longlong)plVar16 + 0xc5f)) {
    FUN_14073397e(plVar16,*param_2,1);
  }
  lVar11 = *(longlong *)(param_2 + 2);
  if (lVar11 != 0) {
    if (bVar9) {
LAB_140091f85:
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48(lVar11);
      }
      param_2[2] = 0;
      param_2[3] = 0;
      if (plVar16[0x15d] == 0) goto LAB_140091c6d;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar11);
      }
      plVar16[0x15d] = lVar11;
      lVar11 = *(longlong *)(param_2 + 2);
      if (lVar11 != 0) goto LAB_140091f85;
    }
    lVar11 = FUN_144a81888(plVar16);
    if (lVar11 != 0) {
      lVar11 = plVar16[0x15d];
      plVar13 = (longlong *)FUN_144a81888(plVar16);
      lVar14 = (**(code **)(*plVar13 + 0x3f8))(plVar13);
      if (*(longlong *)(lVar11 + 0x28) != lVar14) {
        plVar13 = (longlong *)FUN_144a81888(plVar16);
        lVar14 = (**(code **)(*plVar13 + 0x3f8))(plVar13);
        lVar11 = plVar16[0x15d];
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
        *(longlong *)(lVar11 + 0x28) = lVar14;
        FUN_14348cf12(plVar16,1,0);
      }
    }
  }
LAB_140091c6d:
  if ((*(byte *)((longlong)plVar16 + 0xc72) & 0x40) == 0) {
    FUN_1407396de(plVar16,0,0);
    (**(code **)(*plVar16 + 0xaf8))(plVar16,0);
    if ((longlong)(int)plVar16[0xe7] != 0) {
      lVar11 = plVar16[0xe6];
      lVar14 = (longlong)(int)plVar16[0xe7] << 3;
      do {
        lVar15 = FUN_14479d2ce(lVar11);
        if (lVar15 != 0) {
          FUN_140058d06(lVar15,4,0);
          FUN_1448c6f34(lVar15);
          FUN_1448c69c8(lVar15);
        }
        lVar11 = lVar11 + 8;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    auVar19 = *(undefined1 (*) [16])(plVar16 + 0x36);
    dVar7 = auVar19._0_8_;
    dVar8 = auVar19._8_8_;
    dVar24 = (double)plVar16[0x38];
    puVar17 = (undefined8 *)plVar16[0x46];
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar12 = DAT_14c8463d8;
      *puVar17 = DAT_14c8463d0;
      puVar17[1] = uVar12;
      uVar12 = DAT_14c8463e8;
      puVar17[2] = DAT_14c8463e0;
      puVar17[3] = uVar12;
      uVar12 = DAT_14c846500;
      puVar17[4] = DAT_14c8464f8;
      puVar17[5] = uVar12;
      puVar17[6] = DAT_14c846508;
      plVar16[0x46] = (longlong)puVar17;
    }
    if ((((double)puVar17[4] != dVar7) || (NAN((double)puVar17[4]) || NAN(dVar7))) ||
       (((double)puVar17[5] != dVar8 ||
        (((NAN((double)puVar17[5]) || NAN(dVar8) || ((double)puVar17[6] != dVar24)) ||
         (NAN((double)puVar17[6]) || NAN(dVar24))))))) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar24;
      dVar5 = (double)DAT_1499387d0;
      dVar6 = DAT_1499387d0._8_8_;
      auVar19 = divpd(auVar19,_DAT_1499387d0);
      auVar22 = divpd(auVar27,_DAT_1499387d0);
      auVar19 = roundpd(auVar19,auVar19,3);
      auVar22 = roundpd(auVar22,auVar22,3);
      dVar7 = dVar7 - auVar19._0_8_ * dVar5;
      dVar8 = dVar8 - auVar19._8_8_ * dVar6;
      auVar28._0_8_ = dVar24 - auVar22._0_8_ * dVar5;
      auVar28._8_8_ = 0.0 - auVar22._8_8_ * dVar6;
      auVar26._0_8_ = dVar7 + dVar5;
      auVar26._8_8_ = dVar8 + dVar6;
      auVar25._0_8_ = dVar5 + auVar28._0_8_;
      auVar25._8_8_ = dVar6 + auVar28._8_8_;
      auVar22._8_8_ = -(ulonglong)(0.0 <= dVar8);
      auVar22._0_8_ = -(ulonglong)(0.0 <= dVar7);
      auVar19._8_4_ = SUB84(dVar8,0);
      auVar19._0_8_ = dVar7;
      auVar19._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar22 = blendvpd(auVar26,auVar19,auVar22);
      auVar20._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
      auVar20._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
      auVar19 = blendvpd(auVar25,auVar28,auVar20);
      auVar23._0_8_ = auVar22._0_8_ + -360.0;
      auVar23._8_8_ = auVar22._8_8_ + -360.0;
      auVar21._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
      auVar21._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
      auVar22 = blendvpd(auVar22,auVar23,auVar21);
      dVar24 = auVar19._0_8_;
      *(undefined1 (*) [16])(puVar17 + 4) = auVar22;
      puVar17[6] = ~-(ulonglong)(180.0 < dVar24) & (ulonglong)dVar24 |
                   (ulonglong)(dVar24 + -360.0) & -(ulonglong)(180.0 < dVar24);
      FUN_144a7484c(puVar17 + 4,&local_88);
      puVar17[2] = local_78;
      puVar17[3] = uStack_70;
      *puVar17 = local_88;
      puVar17[1] = uStack_80;
    }
    local_88 = (code *)*puVar17;
    uStack_80 = puVar17[1];
    local_78 = puVar17[2];
    uStack_70 = puVar17[3];
    local_d8 = &local_88;
    local_d0 = local_d0 & 0xffffff00;
    FUN_140092404(plVar16,plVar16[0x24],plVar16[0x25],0);
    (**(code **)(*plVar16 + 0xb38))(plVar16);
    FUN_1448c69c8(plVar16);
    FUN_1448c6f34(plVar16);
  }
  if ((longlong)(int)param_2[6] != 0) {
    lVar11 = *(longlong *)(param_2 + 4);
    lVar14 = (longlong)(int)param_2[6] << 4;
    do {
      FUN_140092336(lVar11);
      lVar11 = lVar11 + 0x10;
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != 0);
  }
  lVar11 = plVar16[0x16];
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(plVar16);
    if (lVar11 == 0) goto LAB_140091da5;
    lVar11 = plVar16[0x16];
    if (lVar11 == 0) {
      lVar11 = FUN_1448abda6(plVar16);
    }
  }
  bVar1 = *(byte *)(lVar11 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    FUN_147a0e058(plVar16);
  }
LAB_140091da5:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140092336 FUN_140092336 body=205 status=ok
// SIG undefined FUN_140092336(void)

void FUN_140092336(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = DAT_14c9647dc;
  lVar2 = DAT_14c9647c8;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar6 + 2) != param_1[1]) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar6;
  }
  else {
    lVar5 = 0;
  }
  *(char *)(lVar5 + 0x89c) = (char)param_1[2];
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar6 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (iVar3 <= (int)uVar1)) goto LAB_1400923e6;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(lVar2 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar6 = (longlong *)*puVar4;
      goto LAB_1400923e6;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1400923e6:
                    /* WARNING: Could not recover jumptable at 0x0001400923f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0xb28))(plVar6,param_1[3],*(code **)(*plVar6 + 0xb28));
  return;
}



// FUNCTION 140092404 FUN_140092404 body=3790 status=ok
// SIG undefined FUN_140092404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140092404(longlong *param_1,longlong *param_2,double *param_3,undefined4 param_4,
                  double *param_5,char param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  double *pdVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar32;
  undefined1 auVar28 [16];
  double dVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStack_3f8 [32];
  double *local_3d8;
  undefined1 local_3d0;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398 [2];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338 [4];
  double local_318;
  double dStack_310;
  double local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
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
  undefined1 local_1b8 [16];
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
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_d0 = uVar4;
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2 + 0x3f) & 1) == 0)) {
    auVar17 = *(undefined1 (*) [16])(param_2 + 0x36);
    dVar47 = auVar17._0_8_;
    dVar40 = auVar17._8_8_;
    dVar23 = (double)param_2[0x38];
    pdVar5 = (double *)param_2[0x46];
    if (pdVar5 == (double *)0x0) {
      pdVar5 = (double *)FUN_14001cc68(0x40,0x10);
      dVar44 = DAT_14c8463d8;
      *pdVar5 = DAT_14c8463d0;
      pdVar5[1] = dVar44;
      dVar44 = DAT_14c8463e8;
      pdVar5[2] = DAT_14c8463e0;
      pdVar5[3] = dVar44;
      dVar44 = DAT_14c846500;
      pdVar5[4] = DAT_14c8464f8;
      pdVar5[5] = dVar44;
      pdVar5[6] = DAT_14c846508;
      param_2[0x46] = (longlong)pdVar5;
    }
    auVar55 = _DAT_1499387d0;
    if ((((pdVar5[4] != dVar47) || (NAN(pdVar5[4]) || NAN(dVar47))) || (pdVar5[5] != dVar40)) ||
       (((NAN(pdVar5[5]) || NAN(dVar40) || (pdVar5[6] != dVar23)) || (NAN(pdVar5[6]) || NAN(dVar23))
        ))) {
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar23;
      dVar44 = (double)DAT_1499387d0;
      dVar46 = DAT_1499387d0._8_8_;
      auVar17 = divpd(auVar17,_DAT_1499387d0);
      auVar19 = divpd(auVar29,_DAT_1499387d0);
      auVar17 = roundpd(auVar17,auVar17,3);
      auVar19 = roundpd(auVar19,auVar19,3);
      auVar42._0_8_ = dVar47 - auVar17._0_8_ * dVar44;
      auVar42._8_8_ = dVar40 - auVar17._8_8_ * dVar46;
      auVar30._0_8_ = dVar23 - auVar19._0_8_ * dVar44;
      auVar30._8_8_ = 0.0 - auVar19._8_8_ * dVar46;
      auVar38._0_8_ = auVar42._0_8_ + dVar44;
      auVar38._8_8_ = auVar42._8_8_ + dVar46;
      auVar25._0_8_ = auVar30._0_8_ + dVar44;
      auVar25._8_8_ = auVar30._8_8_ + dVar46;
      auVar19._8_8_ = -(ulonglong)(0.0 <= auVar42._8_8_);
      auVar19._0_8_ = -(ulonglong)(0.0 <= auVar42._0_8_);
      auVar17 = blendvpd(auVar38,auVar42,auVar19);
      auVar39._8_8_ = -(ulonglong)(0.0 <= auVar30._8_8_);
      auVar39._0_8_ = -(ulonglong)(0.0 <= auVar30._0_8_);
      auVar19 = blendvpd(auVar25,auVar30,auVar39);
      auVar31._0_8_ = auVar17._0_8_ + -360.0;
      auVar31._8_8_ = auVar17._8_8_ + -360.0;
      auVar15._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
      auVar15._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
      auVar39 = blendvpd(auVar17,auVar31,auVar15);
      auVar16._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
      auVar16._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
      auVar17._8_8_ = auVar19._8_8_ + 0.0;
      auVar17._0_8_ = auVar19._0_8_ + -360.0;
      auVar17 = blendvpd(auVar19,auVar17,auVar16);
      *(undefined1 (*) [16])(pdVar5 + 4) = auVar39;
      dVar23 = auVar17._0_8_;
      pdVar5[6] = dVar23;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar23;
      auVar17 = divpd(auVar39,auVar55);
      auVar55 = divpd(auVar43,auVar55);
      auVar17 = roundpd(auVar17,auVar17,3);
      auVar55 = roundpd(auVar55,auVar55,3);
      dVar49 = (auVar39._0_8_ - auVar17._0_8_ * dVar44) * 0.008726646259971648;
      dVar12 = (auVar39._8_8_ - auVar17._8_8_ * dVar46) * 0.008726646259971648;
      dVar33 = (dVar23 - auVar55._0_8_ * dVar44) * 0.008726646259971648;
      dVar50 = (0.0 - auVar55._8_8_ * dVar46) * 0.008726646259971648;
      dVar23 = sin(dVar49);
      dVar47 = sin(dVar12);
      dVar40 = sin(dVar33);
      sin(dVar50);
      dVar44 = cos(dVar49);
      dVar46 = cos(dVar12);
      dVar49 = cos(dVar33);
      cos(dVar50);
      *pdVar5 = dVar23 * dVar47 * dVar49 - dVar44 * dVar46 * dVar40;
      pdVar5[1] = -(dVar23 * dVar46 * dVar49) - dVar44 * dVar47 * dVar40;
      pdVar5[2] = -(dVar46 * dVar23 * dVar40) + dVar47 * dVar44 * dVar49;
      pdVar5[3] = dVar47 * dVar23 * dVar40 + dVar46 * dVar44 * dVar49;
    }
    local_158 = *pdVar5;
    dStack_150 = pdVar5[1];
    local_148 = pdVar5[2];
    dStack_140 = pdVar5[3];
    local_3d8 = &local_158;
    local_3d0 = 0;
    uVar4 = FUN_140092404(param_2,param_2[0x24],param_2[0x25],0);
    if ((*(byte *)(param_1 + 0x3f) & 1) != 0) goto LAB_140092eb4;
  }
  bVar1 = *(byte *)(param_1 + 0x3f);
  iVar2 = (int)CONCAT71((int7)(uVar4 >> 8),bVar1);
  *(byte *)(param_1 + 0x3f) = bVar1 | 1;
  dVar46 = *param_5;
  dVar49 = param_5[1];
  dVar12 = param_5[2];
  dVar33 = param_5[3];
  dVar50 = (double)param_1[0x33];
  dVar54 = (double)param_1[0x34];
  dVar23 = (double)param_1[0x35];
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x39);
  dVar40 = auVar17._0_8_;
  dVar44 = auVar17._8_8_;
  dVar47 = (double)param_1[0x3b];
  local_338[0] = dVar46;
  local_338[1] = dVar49;
  local_338[2] = dVar12;
  local_338[3] = dVar33;
  local_318 = dVar50;
  dStack_310 = dVar54;
  local_308 = dVar23;
  uStack_300 = 0;
  local_2f8 = auVar17;
  local_2e8 = dVar47;
  uStack_2e0 = 0;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)param_1[0x24];
    if (param_2 != (longlong *)0x0) {
      param_3 = (double *)param_1[0x25];
      goto LAB_1400925fb;
    }
    pdVar5 = local_338;
    pdVar11 = local_398;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar11 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      pdVar11 = pdVar11 + 1;
    }
    uVar3 = 0;
  }
  else {
LAB_1400925fb:
    if ((bVar1 & 0x1c) == 0) {
      uVar3 = (**(code **)(*param_2 + 0x4a8))(param_2,&local_2d8,param_3,0);
      local_368 = 0.0;
      dStack_360 = 0.0;
      local_378 = 0.0;
      dStack_370 = 0.0;
      dVar21 = local_298._0_8_;
      dVar35 = local_298._8_8_;
      dVar22 = local_288._0_8_;
      dVar36 = local_288._8_8_;
      auVar17 = minpd(auVar17,local_298);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar47;
      auVar19 = minpd(auVar18,local_288);
      auVar55._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
      auVar55._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
      iVar2 = movmskpd(uVar3,auVar55);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      uVar6 = movmskpd((int)param_2,auVar20);
      if ((uVar6 & 0x3fffffff) == 0 && iVar2 == 0) {
        local_398[0] = dVar49 * local_2c8 * -1.0 +
                       dVar12 * dStack_2d0 + dVar33 * local_2d8 * 1.0 + dVar46 * dStack_2c0;
        local_398[1] = dVar46 * local_2c8 * 1.0 +
                       dVar33 * dStack_2d0 + dVar12 * local_2d8 * -1.0 + dVar49 * dStack_2c0;
        local_388._8_8_ =
             dVar12 * local_2c8 * -1.0 +
             ((local_2d8 * dVar46 * -1.0 + dVar33 * dStack_2c0) - dVar49 * dStack_2d0);
        local_388._0_8_ =
             dVar33 * local_2c8 * 1.0 +
             ((local_2d8 * dVar49 * 1.0 + dVar12 * dStack_2c0) - dVar46 * dStack_2d0);
        dVar50 = dVar50 * dVar21;
        dVar54 = dVar54 * dVar35;
        dVar23 = dVar23 * dVar22;
        dVar26 = dVar36 * 0.0;
        dVar46 = dVar54 * local_2d8 - dVar50 * dStack_2d0;
        dVar33 = dVar23 * dStack_2d0 - dVar54 * local_2c8;
        dVar12 = dVar50 * local_2c8 - dVar23 * local_2d8;
        dVar49 = dVar26 * dStack_2c0 - dVar26 * dStack_2c0;
        dVar33 = dVar33 + dVar33;
        dVar12 = dVar12 + dVar12;
        dVar46 = dVar46 + dVar46;
        dVar49 = dVar49 + dVar49;
        local_378 = (dVar46 * dStack_2d0 - local_2c8 * dVar12) + dStack_2c0 * dVar33 + dVar50 +
                    local_2b8;
        dStack_370 = (dVar33 * local_2c8 - dVar46 * local_2d8) + dStack_2c0 * dVar12 + dVar54 +
                     dStack_2b0;
        local_368 = (dVar12 * local_2d8 - dStack_2d0 * dVar33) + dStack_2c0 * dVar46 + dVar23 +
                    local_2a8;
        dStack_360 = (dVar49 * dStack_2c0 - dVar49 * dStack_2c0) + dStack_2c0 * dVar49 + dVar26 +
                     dStack_2a0;
        dVar40 = dVar40 * dVar21;
        dVar44 = dVar44 * dVar35;
        dVar47 = dVar47 * dVar22;
        dVar36 = dVar36 * 0.0;
        uVar3 = 0;
      }
      else {
        dVar26 = dStack_2d0 + dStack_2d0;
        dVar27 = local_2c8 + local_2c8;
        dVar34 = local_2d8 * (local_2d8 + local_2d8);
        dVar32 = (local_2d8 + local_2d8) * dStack_2c0;
        local_3b8 = dVar47 * dVar22;
        dStack_3b0 = dVar36 * 0.0;
        local_188 = (1.0 - (dVar34 + dStack_2d0 * dVar26)) * dVar22;
        local_198 = (dVar26 * dStack_2c0 + local_2d8 * dVar27) * dVar22;
        dStack_190 = (dVar27 * dStack_2d0 - dVar32) * dVar22;
        local_3a8 = dVar40 * dVar21;
        dStack_3a0 = dVar44 * dVar35;
        local_1d8 = (1.0 - (local_2c8 * dVar27 + dStack_2d0 * dVar26)) * dVar21;
        dVar22 = (1.0 - (local_2c8 * dVar27 + dVar34)) * dVar35;
        dStack_1d0 = (dVar26 * local_2d8 + dVar27 * dStack_2c0) * dVar21;
        local_1a8 = (dVar27 * dStack_2d0 + dVar32) * dVar35;
        local_1c8 = (local_2d8 * dVar27 - dVar26 * dStack_2c0) * dVar21;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar22,0);
        local_1b8._0_8_ = (dVar26 * local_2d8 - dVar27 * dStack_2c0) * dVar35;
        local_1b8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_2b8;
        dStack_170 = dStack_2b0;
        local_168 = local_2a8;
        uStack_160 = 0x3ff0000000000000;
        dVar21 = dVar49 + dVar49;
        dVar35 = dVar12 + dVar12;
        dVar22 = dVar46 * (dVar46 + dVar46);
        local_208 = (1.0 - (dVar22 + dVar49 * dVar21)) * dVar47;
        dVar36 = (dVar46 + dVar46) * dVar33;
        local_218 = (dVar21 * dVar33 + dVar46 * dVar35) * dVar47;
        local_238 = (dVar21 * dVar46 - dVar35 * dVar33) * dVar44;
        dStack_210 = (dVar35 * dVar49 - dVar36) * dVar47;
        local_258 = (1.0 - (dVar12 * dVar35 + dVar49 * dVar21)) * dVar40;
        dStack_230 = (1.0 - (dVar12 * dVar35 + dVar22)) * dVar44;
        dStack_250 = (dVar21 * dVar46 + dVar35 * dVar33) * dVar40;
        local_228 = (dVar35 * dVar49 + dVar36) * dVar44;
        local_248 = (dVar46 * dVar35 - dVar21 * dVar33) * dVar40;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0;
        uStack_1e0 = 0x3ff0000000000000;
        local_1f8 = dVar50;
        dStack_1f0 = dVar54;
        local_1e8 = dVar23;
        FUN_1447fea8d(&local_158);
        dVar44 = dStack_3a0;
        dVar40 = local_3a8;
        dVar36 = dStack_3b0;
        dVar47 = local_3b8;
        auVar17 = _DAT_149934d80;
        local_3c0 = local_148;
        dVar46 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
        dVar49 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        dVar23 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
        uVar4 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
        dVar46 = (double)(~uVar4 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar46)) & uVar4);
        uVar4 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
        dVar49 = (double)(~uVar4 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar4);
        uVar4 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
        dVar12 = (double)(~uVar4 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar4);
        auVar13._8_8_ = -(ulonglong)(0.0 <= dStack_3a0);
        auVar13._0_8_ = -(ulonglong)(0.0 <= local_3a8);
        auVar55 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar13);
        dVar23 = (double)(~-(ulonglong)(0.0 <= local_3b8) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_3b8) & 0x3ff0000000000000);
        dVar33 = auVar55._0_8_;
        local_158 = local_158 * dVar46 * dVar33;
        dStack_150 = dStack_150 * dVar46 * dVar33;
        local_148 = dVar46 * local_148 * dVar33;
        dVar46 = auVar55._8_8_;
        local_128 = dVar49 * local_128 * dVar46;
        local_130 = local_130 * dVar49 * dVar46;
        local_138 = dVar46 * local_138 * dVar49;
        local_108 = dVar12 * local_108 * dVar23;
        local_110 = local_110 * dVar12 * dVar23;
        local_118 = dVar23 * local_118 * dVar12;
        pdVar5 = &local_278;
        iVar2 = FUN_14481fd10(pdVar5,&local_158);
        uVar3 = SUB84(pdVar5,0);
        dVar23 = local_268 * local_268 + local_278 * local_278;
        dVar46 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar24._0_8_ = dVar23 + dVar46;
        auVar24._8_8_ = dVar23 + dVar46;
        auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
        auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
        auVar55 = sqrtpd(auVar24,auVar24);
        auVar17 = divpd(auVar17,auVar55);
        auVar28._0_8_ = auVar17._0_8_ * local_268;
        auVar28._8_8_ = auVar17._8_8_ * dStack_260;
        local_398[0] = (double)((ulonglong)(local_278 * auVar17._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
        local_398[1] = (double)((ulonglong)(dStack_270 * auVar17._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
        local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar14);
        local_378 = local_f8;
        dStack_370 = dStack_f0;
        local_368 = local_e8;
        dStack_360 = 0.0;
      }
      local_348._8_4_ = SUB84(dVar36,0);
      local_348._0_8_ = dVar47;
      local_348._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      local_358 = dVar40;
      dStack_350 = dVar44;
    }
    else {
      plVar9 = param_1;
      local_3d8 = param_3;
      iVar2 = FUN_14028ca22(param_1,local_398,local_338,param_2);
      uVar3 = SUB84(plVar9,0);
    }
  }
  auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4d] - dStack_370));
  auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4c] - local_378));
  iVar2 = movmskpd(iVar2,auVar51);
  auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4f] - dStack_360));
  auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4e] - local_368));
  uVar6 = movmskpd(uVar3,auVar45);
  if ((uVar6 & 0x3fffffff) == 0 && iVar2 == 0) {
    auVar56._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x49] - local_398[1]));
    auVar56._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x48] - local_398[0]));
    uVar6 = movmskpd(iVar2,auVar56);
    auVar52._8_8_ =
         -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4b] - (double)local_388._8_8_));
    auVar52._0_8_ =
         -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4a] - (double)local_388._0_8_));
    iVar2 = movmskpd(0,auVar52);
    uVar7 = iVar2 << 2 | uVar6;
    if (uVar7 != 0) {
      auVar53._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x49] + local_398[1]))
      ;
      auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x48] + local_398[0]))
      ;
      uVar6 = movmskpd(uVar6,auVar53);
      auVar48._8_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4b] + (double)local_388._8_8_))
      ;
      auVar48._0_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4a] + (double)local_388._0_8_))
      ;
      uVar7 = movmskpd(uVar7,auVar48);
      if ((uVar7 & 0x3fffffff) != 0 || uVar6 != 0) goto LAB_140092e77;
    }
    if (param_6 == '\0') {
      auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x51] - dStack_350));
      auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x50] - local_358));
      iVar2 = movmskpd(uVar6,auVar41);
      auVar37._8_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x53] - (double)local_348._8_8_))
      ;
      auVar37._0_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52] - (double)local_348._0_8_))
      ;
      iVar8 = movmskpd(0,auVar37);
      if (iVar2 + iVar8 * 4 == 0) {
        if ((int)param_1[0x44] < 1) {
          if (*(code **)(*param_1 + 0x540) == FUN_1400589e6) {
            FUN_1400589e6(param_1);
          }
          else {
            (**(code **)(*param_1 + 0x540))(param_1);
          }
          if (0 < (int)param_1[0x28]) {
            FUN_140058d06(param_1,0,0);
          }
          if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad23a8);
            FUN_1448c69c8(param_1);
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad23a8);
          }
        }
        goto LAB_140092eb4;
      }
    }
  }
LAB_140092e77:
  param_1[0x48] = (longlong)local_398[0];
  param_1[0x49] = (longlong)local_398[1];
  param_1[0x4a] = local_388._0_8_;
  param_1[0x4b] = local_388._8_8_;
  param_1[0x4c] = (longlong)local_378;
  param_1[0x4d] = (longlong)dStack_370;
  param_1[0x4e] = (longlong)local_368;
  param_1[0x4f] = (longlong)dStack_360;
  param_1[0x50] = (longlong)local_358;
  param_1[0x51] = (longlong)dStack_350;
  param_1[0x52] = local_348._0_8_;
  param_1[0x53] = local_348._8_8_;
  FUN_14474658a(param_1,1,param_4);
LAB_140092eb4:
  if ((local_d0 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400932d4 FUN_1400932d4 body=69 status=ok
// SIG undefined FUN_1400932d4(void)

longlong FUN_1400932d4(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_14009331a(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14009331a FUN_14009331a body=99 status=ok
// SIG undefined FUN_14009331a(void)

void FUN_14009331a(longlong *param_1)

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



// FUNCTION 14009337e FUN_14009337e body=2288 status=ok
// SIG undefined FUN_14009337e(void)

void FUN_14009337e(longlong param_1,uint param_2,char param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_b8 [40];
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 0x54) < 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_14481578e(param_1 + 0x48);
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  uVar14 = param_2 * 4 + 0xf & 0xfffffff0;
  local_90 = uVar14 + 0x10;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
  uVar21 = *(int *)(lVar17 + 0x2c) * local_90;
  uVar22 = *(int *)(lVar17 + 0x30) * local_90;
  local_8c = param_2 * 2 + 0xf & 0xfffffff0;
  uVar15 = (ulonglong)local_8c;
  local_8c = local_8c + 0x10;
  uVar20 = *(int *)(lVar17 + 0x34) * local_8c;
  uVar13 = *(uint *)(param_1 + 0x20);
  if (((uVar21 == uVar13) && (uVar22 == *(uint *)(param_1 + 0x30))) &&
     (uVar20 == *(uint *)(param_1 + 0x40))) {
    *(uint *)(param_1 + 0x124) = param_2;
    uVar21 = local_90;
    uVar13 = local_8c;
    goto LAB_140093890;
  }
  ppvVar1 = (void **)(param_1 + 0x18);
  if ((int)uVar13 < (int)uVar21) {
    *(uint *)(param_1 + 0x124) = param_2;
    if (param_3 != '\0') {
LAB_1400934bb:
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = ppvVar1;
      local_80 = uVar15;
      if ((int)uVar21 < 1) {
        iVar8 = 0;
        if ((int)uVar21 < 0) {
LAB_140093c50:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar21);
        }
      }
      else {
        uStack_50 = (ulonglong)uVar21;
        FUN_1447403be(&local_58);
        memset(local_58,0,(ulonglong)uVar21);
        iVar8 = (int)uStack_60;
      }
      uVar21 = local_90;
      uVar13 = uVar22 - iVar8;
      if (uVar13 == 0 || (int)uVar22 < iVar8) {
        if ((int)uVar22 < 0) goto LAB_140093c58;
        if ((int)uVar22 < iVar8) {
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar22);
          FUN_140b3f66e();
        }
      }
      else {
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar22);
        if ((uint)(uStack_60._4_4_ - iVar8) < uVar13) {
          FUN_1447403be(&local_68);
        }
        memset((void *)(iVar8 + local_68),0,(longlong)(int)uVar13);
      }
      iVar8 = (int)uStack_70;
      lVar17 = (longlong)(int)uStack_70;
      if ((int)uStack_70 < (int)uVar20) {
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar20);
        uVar20 = uVar20 - iVar8;
        if ((uint)(uStack_70._4_4_ - iVar8) < uVar20) {
          FUN_1447403be(&local_78);
        }
        memset((void *)(lVar17 + local_78),0,(longlong)(int)uVar20);
      }
      else {
        if ((int)uVar20 < 0) goto LAB_140093c60;
        if ((int)uVar20 < (int)uStack_70) {
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar20);
          FUN_140b3f66e();
        }
      }
      if (uVar21 != 0) {
        uVar13 = *(uint *)(param_1 + 0x128);
        if (uVar13 != 0) {
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x2c);
          if (0 < (longlong)iVar8) {
            if (uVar21 < uVar13) {
              uVar13 = uVar21;
            }
            uVar20 = (iVar8 + -1) * uVar21;
            uVar15 = (longlong)iVar8;
            do {
              memcpy((void *)((ulonglong)uVar20 + (longlong)local_58),
                     (void *)((ulonglong)(uint)(*(int *)(param_1 + 0x128) * (int)(uVar15 - 1)) +
                             *(longlong *)(param_1 + 0x18)),(ulonglong)uVar13);
              uVar20 = uVar20 + (-0x10 - uVar14);
              bVar7 = 1 < uVar15;
              uVar15 = uVar15 - 1;
            } while (bVar7);
          }
        }
        uVar13 = *(uint *)(param_1 + 300);
        if (uVar13 != 0) {
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x30);
          if (0 < (longlong)iVar8) {
            if (uVar21 < uVar13) {
              uVar13 = uVar21;
            }
            uVar20 = (iVar8 + -1) * uVar21;
            uVar15 = (longlong)iVar8;
            do {
              memcpy((void *)((ulonglong)uVar20 + local_68),
                     (void *)((ulonglong)(uint)(*(int *)(param_1 + 300) * (int)(uVar15 - 1)) +
                             *(longlong *)(param_1 + 0x28)),(ulonglong)uVar13);
              uVar20 = uVar20 + (-0x10 - uVar14);
              bVar7 = 1 < uVar15;
              uVar15 = uVar15 - 1;
            } while (bVar7);
          }
        }
      }
      uVar13 = local_8c;
      if ((local_8c != 0) && (uVar14 = *(uint *)(param_1 + 0x130), uVar14 != 0)) {
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x34);
        if (0 < (longlong)iVar8) {
          if (local_8c < uVar14) {
            uVar14 = local_8c;
          }
          uVar20 = (iVar8 + -1) * local_8c;
          iVar12 = -0x10 - (int)local_80;
          uVar15 = (longlong)iVar8;
          do {
            memcpy((void *)((ulonglong)uVar20 + local_78),
                   (void *)((ulonglong)(uint)(*(int *)(param_1 + 0x130) * (int)(uVar15 - 1)) +
                           *(longlong *)(param_1 + 0x38)),(ulonglong)uVar14);
            uVar20 = uVar20 + iVar12;
            bVar7 = 1 < uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar7);
        }
      }
      if (local_88 != &local_58) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        *(void **)(param_1 + 0x18) = local_58;
        local_58 = (void *)0x0;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0x24) = uStack_50._4_4_;
        uStack_50 = 0;
      }
      if ((longlong *)(param_1 + 0x28) != &local_68) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x28) = local_68;
        local_68 = 0;
        *(int *)(param_1 + 0x30) = (int)uStack_60;
        *(int *)(param_1 + 0x34) = uStack_60._4_4_;
        uStack_60 = 0;
      }
      if ((longlong *)(param_1 + 0x38) == &local_78) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x38) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x38) = local_78;
        local_78 = 0;
        *(int *)(param_1 + 0x40) = (int)uStack_70;
        *(int *)(param_1 + 0x44) = uStack_70._4_4_;
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140093890;
    }
    *(uint *)(param_1 + 0x20) = uVar21;
    if (*(int *)(param_1 + 0x24) - uVar13 < uVar21 - uVar13) {
      FUN_1447403be();
    }
    local_88 = (void **)((ulonglong)local_88 & 0xffffffff00000000);
    memset((void *)((longlong)(int)uVar13 + (longlong)*ppvVar1),0,(longlong)(int)(uVar21 - uVar13));
    bVar19 = false;
  }
  else {
    if ((*(int *)(param_1 + 0x30) < (int)uVar22) || (*(int *)(param_1 + 0x40) < (int)uVar20)) {
      local_88 = (void **)((ulonglong)local_88._4_4_ << 0x20);
      bVar7 = false;
      bVar19 = false;
    }
    else {
      uVar16 = DAT_14c7628a8;
      if ((int)DAT_14c7628a8 < (int)uVar21) {
        uVar16 = uVar21;
      }
      bVar4 = (int)(uVar16 * DAT_14c7628ac) < *(int *)(param_1 + 0x24);
      bVar7 = uVar21 == 0 || bVar4;
      uVar16 = DAT_14c7628a8;
      if ((int)DAT_14c7628a8 < (int)uVar22) {
        uVar16 = uVar22;
      }
      iVar8 = uVar16 * DAT_14c7628ac;
      bVar5 = iVar8 < *(int *)(param_1 + 0x34);
      bVar19 = uVar22 == 0 || bVar5;
      uVar16 = DAT_14c7628a8;
      if ((int)DAT_14c7628a8 < (int)uVar20) {
        uVar16 = uVar20;
      }
      bVar6 = (int)(uVar16 * DAT_14c7628ac) < *(int *)(param_1 + 0x44);
      local_88 = (void **)CONCAT44(local_88._4_4_,
                                   CONCAT31((int3)((uint)iVar8 >> 8),uVar20 == 0 || bVar6));
      if (((uVar21 != 0 && !bVar4) && (uVar22 != 0 && !bVar5)) && (uVar20 != 0 && !bVar6)) {
        uVar13 = *(uint *)(param_1 + 0x124);
        if (*(uint *)(param_1 + 0x124) < param_2) {
          uVar13 = param_2;
        }
        *(uint *)(param_1 + 0x124) = uVar13;
        uVar21 = (uVar13 * 4 + 0xf & 0xfffffff0) + 0x10;
        uVar13 = (uVar13 * 2 + 0xf & 0xfffffff0) + 0x10;
        goto LAB_140093890;
      }
    }
    *(uint *)(param_1 + 0x124) = param_2;
    if (param_3 != '\0') goto LAB_1400934bb;
    if ((int)uVar21 < 0) goto LAB_140093c50;
    if (((int)uVar21 < (int)uVar13) && (*(uint *)(param_1 + 0x20) = uVar21, bVar7)) {
      FUN_140b3f66e();
    }
  }
  uVar21 = local_90;
  plVar2 = (longlong *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x30);
  if (iVar8 < (int)uVar22) {
    *(uint *)(param_1 + 0x30) = uVar22;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar8) < uVar22 - iVar8) {
      FUN_1447403be(plVar2);
    }
    memset((void *)((longlong)iVar8 + *plVar2),0,(longlong)(int)(uVar22 - iVar8));
  }
  else {
    if ((int)uVar22 < 0) {
LAB_140093c58:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar22);
    }
    if (((int)uVar22 < iVar8) && (*(uint *)(param_1 + 0x30) = uVar22, bVar19)) {
      FUN_140b3f66e(plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 < (int)uVar20) {
    *(uint *)(param_1 + 0x40) = uVar20;
    if ((uint)(*(int *)(param_1 + 0x44) - iVar8) < uVar20 - iVar8) {
      FUN_1447403be(plVar2);
    }
    memset((void *)((longlong)iVar8 + *plVar2),0,(longlong)(int)(uVar20 - iVar8));
    uVar13 = local_8c;
  }
  else {
    if ((int)uVar20 < 0) {
LAB_140093c60:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar20);
    }
    uVar13 = local_8c;
    if ((int)uVar20 < iVar8) {
      *(uint *)(param_1 + 0x40) = uVar20;
      if ((char)local_88 != '\0') {
        FUN_140b3f66e(plVar2);
        uVar13 = local_8c;
      }
    }
  }
LAB_140093890:
  if (((uVar21 != *(uint *)(param_1 + 0x128)) || (uVar21 != *(uint *)(param_1 + 300))) ||
     (uVar13 != *(uint *)(param_1 + 0x130))) {
    *(uint *)(param_1 + 0x128) = uVar21;
    *(uint *)(param_1 + 300) = uVar21;
    *(uint *)(param_1 + 0x130) = uVar13;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    iVar12 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x2c) + *(int *)(lVar17 + 0x34);
    lVar17 = param_1 + 0x140;
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (*(int *)(param_1 + 0x14c) < 0) {
      FUN_1481c5400(lVar17,0);
      iVar8 = *(int *)(param_1 + 0x148);
    }
    if (iVar8 < iVar12) {
      *(int *)(param_1 + 0x148) = iVar12;
      if ((uint)(*(int *)(param_1 + 0x14c) - iVar8) < (uint)(iVar12 - iVar8)) {
        FUN_14018c802(lVar17);
      }
    }
    else {
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar12);
      }
      if (iVar12 < iVar8) {
        *(int *)(param_1 + 0x148) = iVar12;
        FUN_1481c5460(lVar17);
      }
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    lVar17 = *(longlong *)(param_1 + 0x10);
    lVar9 = (longlong)*(int *)(*(longlong *)(lVar17 + 8) + 0x18);
    if (lVar9 == 0) {
      iVar8 = 0;
    }
    else {
      puVar11 = *(ushort **)(*(longlong *)(lVar17 + 8) + 0x10);
      puVar10 = puVar11 + lVar9 * 0x10;
      iVar8 = 0;
      do {
        uVar3 = puVar11[4];
        if (uVar3 != 0) {
          lVar17 = 0;
          do {
            *(ulonglong *)
             (*(longlong *)(param_1 + 0x140) +
             (longlong)
             (*(int *)(*(longlong *)(puVar11 + 8) + ((ulonglong)puVar11[4] + lVar17) * 4) + iVar8) *
             8) = (ulonglong)(((uint)*puVar11 + (int)lVar17) * *(int *)(param_1 + 0x128)) +
                  *(longlong *)(param_1 + 0x18);
            lVar17 = lVar17 + 1;
          } while ((uint)uVar3 != (uint)lVar17);
        }
        iVar8 = iVar8 + (uint)uVar3;
        puVar11 = puVar11 + 0x10;
      } while (puVar11 != puVar10);
      lVar17 = *(longlong *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x154) = iVar8;
    lVar9 = (longlong)*(int *)(*(longlong *)(lVar17 + 8) + 0x18);
    if (lVar9 != 0) {
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 8) + 0x10);
      lVar9 = lVar9 * 0x20 + lVar17;
      do {
        uVar3 = *(ushort *)(lVar17 + 10);
        if (uVar3 != 0) {
          lVar18 = 0;
          do {
            *(ulonglong *)
             (*(longlong *)(param_1 + 0x140) +
             (longlong)
             (*(int *)(*(longlong *)(lVar17 + 0x10) +
                      ((ulonglong)*(ushort *)(lVar17 + 10) + (ulonglong)*(ushort *)(lVar17 + 8) * 2
                      + lVar18) * 4) + iVar8) * 8) =
                 (ulonglong)
                 (((uint)*(ushort *)(lVar17 + 2) + (int)lVar18) * *(int *)(param_1 + 300)) +
                 *(longlong *)(param_1 + 0x28);
            lVar18 = lVar18 + 1;
          } while ((uint)uVar3 != (uint)lVar18);
        }
        iVar8 = iVar8 + (uint)uVar3;
        lVar17 = lVar17 + 0x20;
      } while (lVar17 != lVar9);
      lVar17 = *(longlong *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x158) = iVar8;
    lVar9 = (longlong)*(int *)(*(longlong *)(lVar17 + 8) + 0x18);
    if (lVar9 != 0) {
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 8) + 0x10);
      lVar9 = lVar9 * 0x20 + lVar17;
      do {
        uVar3 = *(ushort *)(lVar17 + 0xc);
        if (uVar3 != 0) {
          lVar18 = 0;
          do {
            *(ulonglong *)
             (*(longlong *)(param_1 + 0x140) +
             (longlong)
             (*(int *)(*(longlong *)(lVar17 + 0x10) +
                      ((ulonglong)*(ushort *)(lVar17 + 0xc) +
                       (ulonglong)((uint)*(ushort *)(lVar17 + 10) + (uint)*(ushort *)(lVar17 + 8)) *
                       2 + lVar18) * 4) + iVar8) * 8) =
                 (ulonglong)
                 (((uint)*(ushort *)(lVar17 + 4) + (int)lVar18) * *(int *)(param_1 + 0x130)) +
                 *(longlong *)(param_1 + 0x38);
            lVar18 = lVar18 + 1;
          } while ((uint)uVar3 != (uint)lVar18);
        }
        iVar8 = iVar8 + (uint)uVar3;
        lVar17 = lVar17 + 0x20;
      } while (lVar17 != lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140093c70 FUN_140093c70 body=468 status=ok
// SIG undefined FUN_140093c70(void)

void FUN_140093c70(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined8 ***local_c8 [5];
  longlong local_a0;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)FUN_140094282();
  FUN_1447a97f4(local_c8 + 2,param_4);
  FUN_1447a97f4(&local_90,param_5);
  local_c8[1] = (undefined8 ***)&local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_c8[0] = local_c8 + 2;
  FUN_140093e46(&local_68,local_c8,0);
  lVar6 = 0x50;
  do {
    if (*(longlong *)((longlong)local_c8 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x28;
  } while (lVar6 != 0);
  FUN_1447a97f4(local_c8 + 2,&local_68);
  local_90 = *param_3;
  local_88 = (longlong *)param_3[1];
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_80 = param_6;
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_140a29eb0(plVar5,iVar4);
  }
  lVar6 = *plVar5;
  lVar7 = (longlong)iVar4 * 0x40;
  *(undefined8 *)(lVar6 + lVar7) = 0;
  ((undefined8 *)(lVar6 + lVar7))[1] = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar7) = 0;
  puVar3 = (undefined8 *)(lVar6 + 0x18 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_1404e49fa(lVar6 + lVar7,local_c8 + 2);
  plVar5 = local_88;
  *(undefined8 *)(lVar6 + 0x28 + lVar7) = local_90;
  *(longlong **)(lVar6 + 0x30 + lVar7) = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(lVar6 + lVar7 + 0x38) = local_80;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140093e46 FUN_140093e46 body=382 status=ok
// SIG undefined FUN_140093e46(void)

void FUN_140093e46(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  code *local_130;
  undefined1 **local_128;
  undefined8 local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_128 = &local_138;
  local_130 = FUN_142b1d9d8;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  local_138 = local_118;
  uVar3 = FUN_140094010();
  if (lVar5 != lVar1) {
    do {
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_120,lVar5,1);
      bVar2 = FUN_14493bb52(uVar3,local_120,&local_130,0);
      lVar5 = lVar5 + 0x28;
    } while ((bVar2 & lVar5 != lVar1) != 0);
  }
  FUN_1447a993c(param_1,local_50 & 0xffffffff);
  if (0 < (int)local_50) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_118;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_50);
  }
  FUN_14009404e(param_1);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140093fc6 FUN_140093fc6 body=74 status=ok
// SIG undefined FUN_140093fc6(void)

void FUN_140093fc6(longlong param_1,int param_2,undefined8 *param_3)

{
  FUN_1447a993c(param_1,param_2 + 1);
  if ((*(int *)(param_1 + 0x24) < 1) && (*(int *)(param_1 + 4) < 2)) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 8 + (longlong)param_2 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + (longlong)param_2 * 0xc) = *param_3;
  return;
}



// FUNCTION 140094010 FUN_140094010 body=61 status=ok
// SIG undefined FUN_140094010(void)

longlong FUN_140094010(void)

{
  longlong lVar1;
  
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  return DAT_14c947fe0;
}



// FUNCTION 14009404e FUN_14009404e body=564 status=ok
// SIG undefined FUN_14009404e(void)

void FUN_14009404e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = param_1[1];
  if ((ulonglong)uVar2 == 1) {
    uVar1 = param_1[2];
    if (uVar1 != 0) {
      uVar2 = param_1[4];
      if (uVar2 != 0) {
        uVar1 = uVar2 >> 0xd ^ uVar1 - uVar2;
        uVar3 = uVar1 << 8 ^ (-0x61c88647 - uVar2) - uVar1;
        uVar5 = uVar3 >> 0xd ^ (uVar2 - uVar1) - uVar3;
        uVar1 = uVar5 >> 0xc ^ (uVar1 - uVar3) - uVar5;
        uVar2 = uVar1 << 0x10 ^ (uVar3 - uVar5) - uVar1;
        uVar3 = uVar2 >> 5 ^ (uVar5 - uVar1) - uVar2;
        uVar1 = uVar3 >> 3 ^ (uVar1 - uVar2) - uVar3;
        uVar2 = uVar1 << 10 ^ (uVar2 - uVar3) - uVar1;
        uVar1 = uVar2 >> 0xf ^ uVar3 - (uVar1 + uVar2);
      }
      goto LAB_140094071;
    }
  }
  else if (1 < (int)uVar2) {
    lVar4 = 0;
    uVar1 = 0;
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 6) + lVar4);
      uVar5 = 0;
      if ((uVar3 != 0) &&
         (uVar6 = *(uint *)(*(longlong *)(param_1 + 6) + 8 + lVar4), uVar5 = uVar3, uVar6 != 0)) {
        uVar3 = uVar6 >> 0xd ^ uVar3 - uVar6;
        uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar6) - uVar3;
        uVar5 = uVar7 >> 0xd ^ (uVar6 - uVar3) - uVar7;
        uVar6 = uVar5 >> 0xc ^ (uVar3 - uVar7) - uVar5;
        uVar3 = uVar6 << 0x10 ^ (uVar7 - uVar5) - uVar6;
        uVar7 = uVar3 >> 5 ^ (uVar5 - uVar6) - uVar3;
        uVar5 = uVar7 >> 3 ^ (uVar6 - uVar3) - uVar7;
        uVar3 = uVar5 << 10 ^ (uVar3 - uVar7) - uVar5;
        uVar5 = uVar3 >> 0xf ^ uVar7 - (uVar5 + uVar3);
      }
      if (uVar5 == 0 && uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar6 = uVar5 >> 0xd ^ uVar1 - uVar5;
        uVar3 = uVar6 << 8 ^ (-0x61c88647 - uVar5) - uVar6;
        uVar1 = uVar3 >> 0xd ^ (uVar5 - uVar6) - uVar3;
        uVar5 = uVar1 >> 0xc ^ (uVar6 - uVar3) - uVar1;
        uVar6 = uVar5 << 0x10 ^ (uVar3 - uVar1) - uVar5;
        uVar3 = uVar6 >> 5 ^ (uVar1 - uVar5) - uVar6;
        uVar1 = uVar3 >> 3 ^ (uVar5 - uVar6) - uVar3;
        uVar5 = uVar1 << 10 ^ (uVar6 - uVar3) - uVar1;
        uVar1 = uVar5 >> 0xf ^ uVar3 - (uVar1 + uVar5);
      }
      lVar4 = lVar4 + 0xc;
    } while ((ulonglong)uVar2 * 0xc != lVar4);
    goto LAB_140094071;
  }
  uVar1 = 0;
LAB_140094071:
  *param_1 = uVar1;
  return;
}



// FUNCTION 140094282 FUN_140094282 body=1021 status=ok
// SIG undefined FUN_140094282(void)

longlong FUN_140094282(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  
  uVar19 = (ulonglong)param_2;
  plVar1 = (longlong *)(param_1 + 0x138);
  lVar18 = param_1 + 0x148;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x160))) {
    lVar7 = *(longlong *)(param_1 + 0x158);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      lVar7 = lVar18;
    }
    if ((*(uint *)(lVar7 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    goto LAB_1400942cf;
  }
  iVar4 = *(int *)(param_1 + 0x140);
  if ((int)param_2 < iVar4) {
    lVar7 = *plVar1;
  }
  else {
    iVar10 = param_2 + 1;
    *(int *)(param_1 + 0x140) = iVar10;
    if ((uint)(*(int *)(param_1 + 0x144) - iVar4) < (uint)(iVar10 - iVar4)) {
      FUN_140044672(plVar1);
      iVar10 = *(int *)(param_1 + 0x140);
    }
    lVar7 = *(longlong *)(param_1 + 0x138);
    iVar4 = *(int *)(param_1 + 0x160);
    if (iVar4 < iVar10) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar4 * 0x30) = 0xffffffff;
        iVar10 = *(int *)(param_1 + 0x168);
        *(int *)(lVar7 + 4 + (longlong)iVar4 * 0x30) = iVar10;
        if (*(int *)(param_1 + 0x16c) != 0) {
          *(int *)(lVar7 + (longlong)iVar10 * 0x30) = iVar4;
        }
        *(int *)(param_1 + 0x168) = iVar4;
        iVar4 = *(int *)(param_1 + 0x160);
        if (iVar4 == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar10 = iVar4 + -1;
          }
          iVar10 = iVar10 >> 5;
        }
        iVar11 = iVar4 + 1;
        iVar15 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar15 = iVar4;
        }
        if (iVar15 >> 5 == iVar10) {
          *(int *)(param_1 + 0x160) = iVar11;
        }
        else {
          if (*(int *)(param_1 + 0x164) <= iVar4) {
            iVar10 = iVar4;
            if (iVar4 + 0x20U < 0xa0) {
              iVar11 = 0x80;
            }
            else {
              uVar16 = iVar4 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x164) + 0x1fU < 0xa0) {
                uVar13 = 4;
                if (4 < uVar16) {
                  uVar13 = uVar16;
                }
              }
              else {
                uVar13 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
              }
              uVar19 = (ulonglong)(uVar13 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar5 = (uint)(uVar19 + 0xf);
                  if (uVar13 < 0x1ffd) {
                    uVar19 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
                  }
                  else {
                    uVar12 = (ulonglong)(uVar5 & 0xfffffff0);
                    if (uVar12 < 0x7ff1) {
                      bVar9 = (&DAT_14c841e00)[uVar5 >> 4];
                      uVar14 = 0x32;
                      if (0x32 < bVar9) {
                        uVar14 = (ulonglong)bVar9;
                      }
                      uVar17 = 0x32 - (ulonglong)bVar9;
                      do {
                        uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1400944d2;
                        lVar8 = uVar14 + 1 + uVar17;
                        uVar17 = uVar17 - 1;
                      } while (lVar8 != 0x33);
                    }
                    uVar19 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar19 = (ulonglong)DAT_14c841df8;
                    }
                    uVar19 = -uVar19 & (uVar12 + uVar19) - 1;
                  }
                }
                else {
                  uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
                  iVar10 = *(int *)(param_1 + 0x160);
                }
              }
LAB_1400944d2:
              iVar6 = (int)(uVar19 >> 2);
              iVar11 = iVar6 << 5;
              if (iVar6 < (int)uVar16) {
                iVar11 = -0x20;
              }
            }
            *(int *)(param_1 + 0x164) = iVar11;
            FUN_1446efbd8(lVar18,iVar10);
            iVar11 = *(int *)(param_1 + 0x160) + 1;
          }
          iVar10 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar10 = iVar11;
          }
          *(int *)(param_1 + 0x160) = iVar11;
          if (iVar11 % 0x20 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x158);
            if (*(longlong *)(param_1 + 0x158) == 0) {
              lVar8 = lVar18;
            }
            bVar9 = -(char)(iVar11 % 0x20);
            *(uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4) =
                 (uint)(*(int *)(lVar8 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
                 (bVar9 & 0x1f);
          }
        }
        lVar8 = *(longlong *)(param_1 + 0x158);
        if (*(longlong *)(param_1 + 0x158) == 0) {
          lVar8 = lVar18;
        }
        bVar9 = (byte)iVar4 & 0x1f;
        puVar2 = (uint *)(lVar8 + (longlong)(iVar15 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
        *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
        iVar4 = *(int *)(param_1 + 0x160);
      } while (iVar4 < *(int *)(param_1 + 0x140));
    }
  }
  *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -1;
  uVar19 = (ulonglong)(int)param_2;
  lVar8 = uVar19 * 0x30;
  iVar4 = *(int *)(lVar7 + lVar8);
  iVar10 = *(int *)(lVar7 + 4 + lVar8);
  if ((longlong)iVar4 == -1) {
    *(int *)(param_1 + 0x168) = iVar10;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar4 * 0x30) = iVar10;
  }
  if (iVar10 != -1) {
    *(int *)(lVar7 + (longlong)iVar10 * 0x30) = iVar4;
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x158);
  }
  uVar16 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar16 = param_2;
  }
  puVar2 = (uint *)(lVar18 + (longlong)((int)uVar16 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)param_2 & 0x1f);
  lVar18 = *(longlong *)(param_1 + 0x138);
  puVar3 = (undefined8 *)(lVar18 + 0x20 + lVar8);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar18 + 0x10 + lVar8);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar18 + lVar8) = 0;
  ((undefined8 *)(lVar18 + lVar8))[1] = 0;
  FUN_14009467f(0,0);
  FUN_1400946c2(0,0);
  FUN_14009470f(0,0);
LAB_1400942cf:
  return uVar19 * 0x30 + *plVar1;
}



// FUNCTION 14009467f FUN_14009467f body=67 status=ok
// SIG undefined FUN_14009467f(void)

void FUN_14009467f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400946c2 FUN_1400946c2 body=77 status=ok
// SIG undefined FUN_1400946c2(void)

void FUN_1400946c2(longlong param_1,int param_2)

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



// FUNCTION 14009470f FUN_14009470f body=93 status=ok
// SIG undefined FUN_14009470f(void)

void FUN_14009470f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x30);
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
      if (plVar4[-3] != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14009476c FUN_14009476c body=137 status=ok
// SIG undefined FUN_14009476c(void)

void FUN_14009476c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1[0x3e] + 0x178) != '\x01') {
    cVar1 = (**(code **)(param_1[0x2f] + 0xd0))(param_1 + 0x2f);
    if (cVar1 == '\0') {
      if (((*(byte *)((longlong)param_1 + 0x5b5) & 0x20) != 0) &&
         (cVar1 = (**(code **)(*param_1 + 0x7f8))(param_1), cVar1 != '\0')) {
        lVar2 = 0x7e8;
LAB_1400947e0:
                    /* WARNING: Could not recover jumptable at 0x0001400947f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + lVar2))(param_1,0);
        return;
      }
    }
    else {
      lVar2 = 0x7f0;
      if (((*(byte *)((longlong)param_1 + 0x5b5) & 0x20) == 0) ||
         (cVar1 = (**(code **)(*param_1 + 0x7f8))(param_1), cVar1 == '\0')) goto LAB_1400947e0;
    }
  }
  return;
}



// FUNCTION 1400947f6 FUN_1400947f6 body=29 status=ok
// SIG undefined FUN_1400947f6(void)

void FUN_1400947f6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140094814 FUN_140094814 body=31 status=ok
// SIG undefined FUN_140094814(void)

undefined8 FUN_140094814(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


