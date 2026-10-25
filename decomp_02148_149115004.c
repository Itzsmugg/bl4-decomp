// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149115004 FUN_149115004 body=1325 status=ok
// SIG undefined FUN_149115004(void)

void FUN_149115004(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  void *pvVar20;
  void *pvVar21;
  longlong *plVar22;
  longlong unaff_R13;
  void *pvVar23;
  longlong lVar24;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  float local_15c;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  float local_11c;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1401017f4(&local_1a8);
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar5 = *param_2;
      unaff_R13 = 0;
      do {
        uVar13 = uStack_1a0;
        lVar24 = (longlong)(int)uStack_1a0;
        uVar19 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
        if (uStack_1a0._4_4_ < uVar19) {
          FUN_140e16be0(&local_1a8,uVar13 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + unaff_R13);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar10 = *(undefined8 *)(puVar2 + 6);
        puVar3 = (undefined8 *)((longlong)local_1a8 + lVar24 * 0x20 + 0x10);
        *puVar3 = *(undefined8 *)(puVar2 + 4);
        puVar3[1] = uVar10;
        puVar2 = (undefined4 *)((longlong)local_1a8 + lVar24 * 0x20);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        unaff_R13 = unaff_R13 + 0x30;
      } while ((longlong)(int)lVar11 * 0x30 != unaff_R13);
    }
  }
  pvVar21 = local_1a8;
  pvVar23 = (void *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_7);
  iVar4 = *(int *)(param_1 + 0xf);
  iVar12 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_118 = local_1a8;
      local_110 = CONCAT44(local_110._4_4_,iVar4);
      pvVar20 = (void *)FUN_149114342();
      if (pvVar20 == param_1[0x10]) goto LAB_149115482;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    local_188 = 0;
    local_178 = &PTR_LAB_14bb2bcd0;
    local_168 = param_8;
    local_160 = param_5;
    local_198 = &LAB_1491582bc;
    local_1b8 = pvVar21;
    local_1b0 = iVar4;
    local_170 = param_4;
    local_15c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      pvVar23 = pvVar21;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_14735390a(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*ppvVar1,pvVar21,(longlong)iVar12 << 5);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar21 = (void *)FUN_149114342(&local_118);
    param_1[0x10] = pvVar21;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcd0;
    local_128 = param_8;
    local_120 = param_5;
    local_158 = &LAB_1491582bc;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    local_11c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    pvVar23 = (void *)CONCAT71((int7)((ulonglong)pvVar23 >> 8),param_7);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_149115482:
  FUN_149158028(param_1,param_9,param_3,(ulonglong)pvVar23 & 0xffffffff);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149115534 FUN_149115534 body=1321 status=ok
// SIG undefined FUN_149115534(void)

void FUN_149115534(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  void *pvVar20;
  void *pvVar21;
  longlong *plVar22;
  longlong unaff_R13;
  void *pvVar23;
  longlong lVar24;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  float local_15c;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  float local_11c;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1401017f4(&local_1a8);
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar5 = *param_2;
      unaff_R13 = 0;
      do {
        uVar13 = uStack_1a0;
        lVar24 = (longlong)(int)uStack_1a0;
        uVar19 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
        if (uStack_1a0._4_4_ < uVar19) {
          FUN_140e16be0(&local_1a8,uVar13 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + unaff_R13);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar10 = *(undefined8 *)(puVar2 + 6);
        puVar3 = (undefined8 *)((longlong)local_1a8 + lVar24 * 0x20 + 0x10);
        *puVar3 = *(undefined8 *)(puVar2 + 4);
        puVar3[1] = uVar10;
        puVar2 = (undefined4 *)((longlong)local_1a8 + lVar24 * 0x20);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        unaff_R13 = unaff_R13 + 0x40;
      } while ((longlong)(int)lVar11 * 0x40 != unaff_R13);
    }
  }
  pvVar21 = local_1a8;
  pvVar23 = (void *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_7);
  iVar4 = *(int *)(param_1 + 0xf);
  iVar12 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_118 = local_1a8;
      local_110 = CONCAT44(local_110._4_4_,iVar4);
      pvVar20 = (void *)FUN_149114342();
      if (pvVar20 == param_1[0x10]) goto LAB_1491159ae;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    local_188 = 0;
    local_178 = &PTR_LAB_14bb2bcd0;
    local_168 = param_8;
    local_160 = param_5;
    local_198 = &LAB_1491582bc;
    local_1b8 = pvVar21;
    local_1b0 = iVar4;
    local_170 = param_4;
    local_15c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      pvVar23 = pvVar21;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_14735390a(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*ppvVar1,pvVar21,(longlong)iVar12 << 5);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar21 = (void *)FUN_149114342(&local_118);
    param_1[0x10] = pvVar21;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcd0;
    local_128 = param_8;
    local_120 = param_5;
    local_158 = &LAB_1491582bc;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    local_11c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    pvVar23 = (void *)CONCAT71((int7)((ulonglong)pvVar23 >> 8),param_7);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_1491159ae:
  FUN_149158028(param_1,param_9,param_3,(ulonglong)pvVar23 & 0xffffffff);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149115a60 FUN_149115a60 body=1321 status=ok
// SIG undefined FUN_149115a60(void)

void FUN_149115a60(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  void *pvVar20;
  void *pvVar21;
  longlong *plVar22;
  longlong unaff_R13;
  void *pvVar23;
  longlong lVar24;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160;
  float local_15c;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  float local_11c;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1401017f4(&local_1a8);
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar5 = *param_2;
      unaff_R13 = 0;
      do {
        uVar13 = uStack_1a0;
        lVar24 = (longlong)(int)uStack_1a0;
        uVar19 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
        if (uStack_1a0._4_4_ < uVar19) {
          FUN_140e16be0(&local_1a8,uVar13 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + unaff_R13);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar10 = *(undefined8 *)(puVar2 + 6);
        puVar3 = (undefined8 *)((longlong)local_1a8 + lVar24 * 0x20 + 0x10);
        *puVar3 = *(undefined8 *)(puVar2 + 4);
        puVar3[1] = uVar10;
        puVar2 = (undefined4 *)((longlong)local_1a8 + lVar24 * 0x20);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        unaff_R13 = unaff_R13 + 0x80;
      } while ((longlong)(int)lVar11 * 0x80 != unaff_R13);
    }
  }
  pvVar21 = local_1a8;
  pvVar23 = (void *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_7);
  iVar4 = *(int *)(param_1 + 0xf);
  iVar12 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_118 = local_1a8;
      local_110 = CONCAT44(local_110._4_4_,iVar4);
      pvVar20 = (void *)FUN_149114342();
      if (pvVar20 == param_1[0x10]) goto LAB_149115eda;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    local_188 = 0;
    local_178 = &PTR_LAB_14bb2bcd0;
    local_168 = param_8;
    local_160 = param_5;
    local_198 = &LAB_1491582bc;
    local_1b8 = pvVar21;
    local_1b0 = iVar4;
    local_170 = param_4;
    local_15c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      pvVar23 = pvVar21;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_14735390a(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*ppvVar1,pvVar21,(longlong)iVar12 << 5);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar21 = (void *)FUN_149114342(&local_118);
    param_1[0x10] = pvVar21;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcd0;
    local_128 = param_8;
    local_120 = param_5;
    local_158 = &LAB_1491582bc;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    local_11c = param_6 * 0.017453292;
    FUN_149157fae(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar21 = param_1[6];
    uStack_a0 = param_1[7];
    plVar22 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar17 = local_78;
    pvVar18 = uStack_70;
    pvVar15 = local_88;
    pvVar16 = uStack_80;
    local_98 = plVar22;
    plVar22 = local_98;
    pvVar14 = uStack_90;
    local_a8 = pvVar21;
    pvVar21 = local_a8;
    pvVar20 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar21,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar21 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar22,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar21;
    uStack_a0 = pvVar20;
    local_98 = plVar22;
    uStack_90 = pvVar14;
    local_88 = pvVar15;
    uStack_80 = pvVar16;
    local_78 = pvVar17;
    uStack_70 = pvVar18;
    if (pvVar21 != (void *)0x0) {
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    pvVar23 = (void *)CONCAT71((int7)((ulonglong)pvVar23 >> 8),param_7);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_149115eda:
  FUN_149158028(param_1,param_9,param_3,(ulonglong)pvVar23 & 0xffffffff);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149115f8c FUN_149115f8c body=1315 status=ok
// SIG undefined FUN_149115f8c(void)

void FUN_149115f8c(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  void *pvVar18;
  void *pvVar19;
  longlong *plVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1447a8aa0(&local_1a8);
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar5 = *param_2;
      lVar22 = 0;
      do {
        uVar11 = uStack_1a0;
        lVar23 = (longlong)(int)uStack_1a0;
        uVar17 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar17);
        if (uStack_1a0._4_4_ < uVar17) {
          FUN_1403e3958(&local_1a8,uVar11 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + lVar22);
        *(undefined8 *)((longlong)local_1a8 + lVar23 * 0x18 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)local_1a8 + lVar23 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar22 = lVar22 + 0x20;
      } while ((longlong)(int)lVar9 * 0x20 != lVar22);
    }
  }
  pvVar19 = local_1a8;
  iVar4 = *(int *)(param_1 + 0xf);
  iVar10 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    bVar21 = *(byte *)(param_1 + 0x11);
    if (bVar21 != 1) goto LAB_149116268;
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,iVar4);
    pvVar18 = (void *)FUN_149114486();
    if (pvVar18 == param_1[0x10]) goto LAB_149116268;
    *(undefined1 *)(param_1 + 0x11) = 0;
    local_1b8 = pvVar19;
    local_1b0 = iVar4;
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_1405b70fe(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar10 != 0) {
          memcpy(*ppvVar1,pvVar19,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar19 = (void *)FUN_149114486(&local_118);
    param_1[0x10] = pvVar19;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcf0;
    local_12c = param_5;
    local_128 = param_6;
    local_158 = &LAB_149158b50;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    FUN_149158842(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar19 = param_1[6];
    uStack_a0 = param_1[7];
    plVar20 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar15 = local_78;
    pvVar16 = uStack_70;
    pvVar13 = local_88;
    pvVar14 = uStack_80;
    local_98 = plVar20;
    plVar20 = local_98;
    pvVar12 = uStack_90;
    local_a8 = pvVar19;
    pvVar19 = local_a8;
    pvVar18 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar19,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar20,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar19;
    uStack_a0 = pvVar18;
    local_98 = plVar20;
    uStack_90 = pvVar12;
    local_88 = pvVar13;
    uStack_80 = pvVar14;
    local_78 = pvVar15;
    uStack_70 = pvVar16;
    if (pvVar19 != (void *)0x0) {
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar21 = *(byte *)(param_1 + 0x11);
LAB_149116268:
    if ((bVar21 & 1) != 0) goto LAB_14911626e;
    local_1b8 = local_1a8;
    local_1b0 = (int)uStack_1a0;
  }
  local_188 = 0;
  local_178 = &PTR_LAB_14bb2bcf0;
  local_16c = param_5;
  local_168 = param_6;
  local_198 = &LAB_149158b50;
  local_170 = param_4;
  FUN_149158842(&local_118);
  if (&local_118 != param_1) {
    if (*param_1 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_118;
    local_118 = (void *)0x0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
    local_110 = 0;
  }
  *(undefined1 *)(param_1 + 2) = local_108;
  param_1[3] = local_100;
  param_1[4] = pvStack_f8;
  pvVar19 = param_1[6];
  uStack_a0 = param_1[7];
  plVar20 = param_1[8];
  uStack_90 = param_1[9];
  local_88 = param_1[10];
  uStack_80 = param_1[0xb];
  local_78 = param_1[0xc];
  uStack_70 = param_1[0xd];
  pvVar15 = local_78;
  pvVar16 = uStack_70;
  pvVar13 = local_88;
  pvVar14 = uStack_80;
  local_98 = plVar20;
  plVar20 = local_98;
  pvVar12 = uStack_90;
  local_a8 = pvVar19;
  pvVar19 = local_a8;
  pvVar18 = uStack_a0;
  param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
  param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
  param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
  param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
  param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
  param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
  param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
  param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
  local_a8._0_4_ = SUB84(pvVar19,0);
  local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._0_4_ = SUB84(plVar20,0);
  local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  local_a8 = pvVar19;
  uStack_a0 = pvVar18;
  local_98 = plVar20;
  uStack_90 = pvVar12;
  local_88 = pvVar13;
  uStack_80 = pvVar14;
  local_78 = pvVar15;
  uStack_70 = pvVar16;
  if (pvVar19 != (void *)0x0) {
    if (plVar20 == (longlong *)0x0) {
      plVar20 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14911626e:
  FUN_1491588bc(param_1,param_8,param_3,param_7);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491164b2 FUN_1491164b2 body=1319 status=ok
// SIG undefined FUN_1491164b2(void)

void FUN_1491164b2(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  void *pvVar18;
  void *pvVar19;
  longlong *plVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1447a8aa0(&local_1a8);
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar5 = *param_2;
      lVar22 = 0;
      do {
        uVar11 = uStack_1a0;
        lVar23 = (longlong)(int)uStack_1a0;
        uVar17 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar17);
        if (uStack_1a0._4_4_ < uVar17) {
          FUN_1403e3958(&local_1a8,uVar11 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + lVar22);
        *(undefined8 *)((longlong)local_1a8 + lVar23 * 0x18 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)local_1a8 + lVar23 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar22 = lVar22 + 0x30;
      } while ((longlong)(int)lVar9 * 0x30 != lVar22);
    }
  }
  pvVar19 = local_1a8;
  iVar4 = *(int *)(param_1 + 0xf);
  iVar10 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    bVar21 = *(byte *)(param_1 + 0x11);
    if (bVar21 != 1) goto LAB_149116792;
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,iVar4);
    pvVar18 = (void *)FUN_149114486();
    if (pvVar18 == param_1[0x10]) goto LAB_149116792;
    *(undefined1 *)(param_1 + 0x11) = 0;
    local_1b8 = pvVar19;
    local_1b0 = iVar4;
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_1405b70fe(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar10 != 0) {
          memcpy(*ppvVar1,pvVar19,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar19 = (void *)FUN_149114486(&local_118);
    param_1[0x10] = pvVar19;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcf0;
    local_12c = param_5;
    local_128 = param_6;
    local_158 = &LAB_149158b50;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    FUN_149158842(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar19 = param_1[6];
    uStack_a0 = param_1[7];
    plVar20 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar15 = local_78;
    pvVar16 = uStack_70;
    pvVar13 = local_88;
    pvVar14 = uStack_80;
    local_98 = plVar20;
    plVar20 = local_98;
    pvVar12 = uStack_90;
    local_a8 = pvVar19;
    pvVar19 = local_a8;
    pvVar18 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar19,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar20,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar19;
    uStack_a0 = pvVar18;
    local_98 = plVar20;
    uStack_90 = pvVar12;
    local_88 = pvVar13;
    uStack_80 = pvVar14;
    local_78 = pvVar15;
    uStack_70 = pvVar16;
    if (pvVar19 != (void *)0x0) {
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar21 = *(byte *)(param_1 + 0x11);
LAB_149116792:
    if ((bVar21 & 1) != 0) goto LAB_149116798;
    local_1b8 = local_1a8;
    local_1b0 = (int)uStack_1a0;
  }
  local_188 = 0;
  local_178 = &PTR_LAB_14bb2bcf0;
  local_16c = param_5;
  local_168 = param_6;
  local_198 = &LAB_149158b50;
  local_170 = param_4;
  FUN_149158842(&local_118);
  if (&local_118 != param_1) {
    if (*param_1 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_118;
    local_118 = (void *)0x0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
    local_110 = 0;
  }
  *(undefined1 *)(param_1 + 2) = local_108;
  param_1[3] = local_100;
  param_1[4] = pvStack_f8;
  pvVar19 = param_1[6];
  uStack_a0 = param_1[7];
  plVar20 = param_1[8];
  uStack_90 = param_1[9];
  local_88 = param_1[10];
  uStack_80 = param_1[0xb];
  local_78 = param_1[0xc];
  uStack_70 = param_1[0xd];
  pvVar15 = local_78;
  pvVar16 = uStack_70;
  pvVar13 = local_88;
  pvVar14 = uStack_80;
  local_98 = plVar20;
  plVar20 = local_98;
  pvVar12 = uStack_90;
  local_a8 = pvVar19;
  pvVar19 = local_a8;
  pvVar18 = uStack_a0;
  param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
  param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
  param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
  param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
  param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
  param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
  param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
  param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
  local_a8._0_4_ = SUB84(pvVar19,0);
  local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._0_4_ = SUB84(plVar20,0);
  local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  local_a8 = pvVar19;
  uStack_a0 = pvVar18;
  local_98 = plVar20;
  uStack_90 = pvVar12;
  local_88 = pvVar13;
  uStack_80 = pvVar14;
  local_78 = pvVar15;
  uStack_70 = pvVar16;
  if (pvVar19 != (void *)0x0) {
    if (plVar20 == (longlong *)0x0) {
      plVar20 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_149116798:
  FUN_1491588bc(param_1,param_8,param_3,param_7);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491169dc FUN_1491169dc body=1319 status=ok
// SIG undefined FUN_1491169dc(void)

void FUN_1491169dc(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  void *pvVar18;
  void *pvVar19;
  longlong *plVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1447a8aa0(&local_1a8);
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar5 = *param_2;
      lVar22 = 0;
      do {
        uVar11 = uStack_1a0;
        lVar23 = (longlong)(int)uStack_1a0;
        uVar17 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar17);
        if (uStack_1a0._4_4_ < uVar17) {
          FUN_1403e3958(&local_1a8,uVar11 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + lVar22);
        *(undefined8 *)((longlong)local_1a8 + lVar23 * 0x18 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)local_1a8 + lVar23 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar22 = lVar22 + 0x28;
      } while ((longlong)(int)lVar9 * 0x28 != lVar22);
    }
  }
  pvVar19 = local_1a8;
  iVar4 = *(int *)(param_1 + 0xf);
  iVar10 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    bVar21 = *(byte *)(param_1 + 0x11);
    if (bVar21 != 1) goto LAB_149116cbc;
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,iVar4);
    pvVar18 = (void *)FUN_149114486();
    if (pvVar18 == param_1[0x10]) goto LAB_149116cbc;
    *(undefined1 *)(param_1 + 0x11) = 0;
    local_1b8 = pvVar19;
    local_1b0 = iVar4;
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_1405b70fe(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar10 != 0) {
          memcpy(*ppvVar1,pvVar19,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar19 = (void *)FUN_149114486(&local_118);
    param_1[0x10] = pvVar19;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcf0;
    local_12c = param_5;
    local_128 = param_6;
    local_158 = &LAB_149158b50;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    FUN_149158842(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar19 = param_1[6];
    uStack_a0 = param_1[7];
    plVar20 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar15 = local_78;
    pvVar16 = uStack_70;
    pvVar13 = local_88;
    pvVar14 = uStack_80;
    local_98 = plVar20;
    plVar20 = local_98;
    pvVar12 = uStack_90;
    local_a8 = pvVar19;
    pvVar19 = local_a8;
    pvVar18 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar19,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar20,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar19;
    uStack_a0 = pvVar18;
    local_98 = plVar20;
    uStack_90 = pvVar12;
    local_88 = pvVar13;
    uStack_80 = pvVar14;
    local_78 = pvVar15;
    uStack_70 = pvVar16;
    if (pvVar19 != (void *)0x0) {
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar21 = *(byte *)(param_1 + 0x11);
LAB_149116cbc:
    if ((bVar21 & 1) != 0) goto LAB_149116cc2;
    local_1b8 = local_1a8;
    local_1b0 = (int)uStack_1a0;
  }
  local_188 = 0;
  local_178 = &PTR_LAB_14bb2bcf0;
  local_16c = param_5;
  local_168 = param_6;
  local_198 = &LAB_149158b50;
  local_170 = param_4;
  FUN_149158842(&local_118);
  if (&local_118 != param_1) {
    if (*param_1 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_118;
    local_118 = (void *)0x0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
    local_110 = 0;
  }
  *(undefined1 *)(param_1 + 2) = local_108;
  param_1[3] = local_100;
  param_1[4] = pvStack_f8;
  pvVar19 = param_1[6];
  uStack_a0 = param_1[7];
  plVar20 = param_1[8];
  uStack_90 = param_1[9];
  local_88 = param_1[10];
  uStack_80 = param_1[0xb];
  local_78 = param_1[0xc];
  uStack_70 = param_1[0xd];
  pvVar15 = local_78;
  pvVar16 = uStack_70;
  pvVar13 = local_88;
  pvVar14 = uStack_80;
  local_98 = plVar20;
  plVar20 = local_98;
  pvVar12 = uStack_90;
  local_a8 = pvVar19;
  pvVar19 = local_a8;
  pvVar18 = uStack_a0;
  param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
  param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
  param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
  param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
  param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
  param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
  param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
  param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
  local_a8._0_4_ = SUB84(pvVar19,0);
  local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._0_4_ = SUB84(plVar20,0);
  local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  local_a8 = pvVar19;
  uStack_a0 = pvVar18;
  local_98 = plVar20;
  uStack_90 = pvVar12;
  local_88 = pvVar13;
  uStack_80 = pvVar14;
  local_78 = pvVar15;
  uStack_70 = pvVar16;
  if (pvVar19 != (void *)0x0) {
    if (plVar20 == (longlong *)0x0) {
      plVar20 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_149116cc2:
  FUN_1491588bc(param_1,param_8,param_3,param_7);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149116f06 FUN_149116f06 body=1315 status=ok
// SIG undefined FUN_149116f06(void)

void FUN_149116f06(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  void *pvVar18;
  void *pvVar19;
  longlong *plVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1447a8aa0(&local_1a8);
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar5 = *param_2;
      lVar22 = 0;
      do {
        uVar11 = uStack_1a0;
        lVar23 = (longlong)(int)uStack_1a0;
        uVar17 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar17);
        if (uStack_1a0._4_4_ < uVar17) {
          FUN_1403e3958(&local_1a8,uVar11 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + lVar22);
        *(undefined8 *)((longlong)local_1a8 + lVar23 * 0x18 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)local_1a8 + lVar23 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar22 = lVar22 + 0x40;
      } while ((longlong)(int)lVar9 * 0x40 != lVar22);
    }
  }
  pvVar19 = local_1a8;
  iVar4 = *(int *)(param_1 + 0xf);
  iVar10 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    bVar21 = *(byte *)(param_1 + 0x11);
    if (bVar21 != 1) goto LAB_1491171e2;
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,iVar4);
    pvVar18 = (void *)FUN_149114486();
    if (pvVar18 == param_1[0x10]) goto LAB_1491171e2;
    *(undefined1 *)(param_1 + 0x11) = 0;
    local_1b8 = pvVar19;
    local_1b0 = iVar4;
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_1405b70fe(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar10 != 0) {
          memcpy(*ppvVar1,pvVar19,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar19 = (void *)FUN_149114486(&local_118);
    param_1[0x10] = pvVar19;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcf0;
    local_12c = param_5;
    local_128 = param_6;
    local_158 = &LAB_149158b50;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    FUN_149158842(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar19 = param_1[6];
    uStack_a0 = param_1[7];
    plVar20 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar15 = local_78;
    pvVar16 = uStack_70;
    pvVar13 = local_88;
    pvVar14 = uStack_80;
    local_98 = plVar20;
    plVar20 = local_98;
    pvVar12 = uStack_90;
    local_a8 = pvVar19;
    pvVar19 = local_a8;
    pvVar18 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar19,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar20,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar19;
    uStack_a0 = pvVar18;
    local_98 = plVar20;
    uStack_90 = pvVar12;
    local_88 = pvVar13;
    uStack_80 = pvVar14;
    local_78 = pvVar15;
    uStack_70 = pvVar16;
    if (pvVar19 != (void *)0x0) {
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar21 = *(byte *)(param_1 + 0x11);
LAB_1491171e2:
    if ((bVar21 & 1) != 0) goto LAB_1491171e8;
    local_1b8 = local_1a8;
    local_1b0 = (int)uStack_1a0;
  }
  local_188 = 0;
  local_178 = &PTR_LAB_14bb2bcf0;
  local_16c = param_5;
  local_168 = param_6;
  local_198 = &LAB_149158b50;
  local_170 = param_4;
  FUN_149158842(&local_118);
  if (&local_118 != param_1) {
    if (*param_1 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_118;
    local_118 = (void *)0x0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
    local_110 = 0;
  }
  *(undefined1 *)(param_1 + 2) = local_108;
  param_1[3] = local_100;
  param_1[4] = pvStack_f8;
  pvVar19 = param_1[6];
  uStack_a0 = param_1[7];
  plVar20 = param_1[8];
  uStack_90 = param_1[9];
  local_88 = param_1[10];
  uStack_80 = param_1[0xb];
  local_78 = param_1[0xc];
  uStack_70 = param_1[0xd];
  pvVar15 = local_78;
  pvVar16 = uStack_70;
  pvVar13 = local_88;
  pvVar14 = uStack_80;
  local_98 = plVar20;
  plVar20 = local_98;
  pvVar12 = uStack_90;
  local_a8 = pvVar19;
  pvVar19 = local_a8;
  pvVar18 = uStack_a0;
  param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
  param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
  param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
  param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
  param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
  param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
  param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
  param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
  local_a8._0_4_ = SUB84(pvVar19,0);
  local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._0_4_ = SUB84(plVar20,0);
  local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  local_a8 = pvVar19;
  uStack_a0 = pvVar18;
  local_98 = plVar20;
  uStack_90 = pvVar12;
  local_88 = pvVar13;
  uStack_80 = pvVar14;
  local_78 = pvVar15;
  uStack_70 = pvVar16;
  if (pvVar19 != (void *)0x0) {
    if (plVar20 == (longlong *)0x0) {
      plVar20 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1491171e8:
  FUN_1491588bc(param_1,param_8,param_3,param_7);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911742c FUN_14911742c body=1315 status=ok
// SIG undefined FUN_14911742c(void)

void FUN_14911742c(void **param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  void *pvVar18;
  void *pvVar19;
  longlong *plVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_1d8 [32];
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined8 local_188;
  undefined **local_178;
  undefined1 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined1 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_1447a8aa0(&local_1a8);
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar5 = *param_2;
      lVar22 = 0;
      do {
        uVar11 = uStack_1a0;
        lVar23 = (longlong)(int)uStack_1a0;
        uVar17 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar17);
        if (uStack_1a0._4_4_ < uVar17) {
          FUN_1403e3958(&local_1a8,uVar11 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar5 + lVar22);
        *(undefined8 *)((longlong)local_1a8 + lVar23 * 0x18 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)local_1a8 + lVar23 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar22 = lVar22 + 0x80;
      } while ((longlong)(int)lVar9 * 0x80 != lVar22);
    }
  }
  pvVar19 = local_1a8;
  iVar4 = *(int *)(param_1 + 0xf);
  iVar10 = (int)uStack_1a0;
  if (iVar4 == (int)uStack_1a0) {
    bVar21 = *(byte *)(param_1 + 0x11);
    if (bVar21 != 1) goto LAB_149117708;
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,iVar4);
    pvVar18 = (void *)FUN_149114486();
    if (pvVar18 == param_1[0x10]) goto LAB_149117708;
    *(undefined1 *)(param_1 + 0x11) = 0;
    local_1b8 = pvVar19;
    local_1b0 = iVar4;
  }
  else {
    ppvVar1 = param_1 + 0xe;
    if (ppvVar1 != &local_1a8) {
      *(int *)(param_1 + 0xf) = (int)uStack_1a0;
      if (*(int *)((longlong)param_1 + 0x7c) == 0 && (int)uStack_1a0 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
      }
      else {
        FUN_1405b70fe(ppvVar1,uStack_1a0 & 0xffffffff);
        if (iVar10 != 0) {
          memcpy(*ppvVar1,pvVar19,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118 = local_1a8;
    local_110 = CONCAT44(local_110._4_4_,(int)uStack_1a0);
    pvVar19 = (void *)FUN_149114486(&local_118);
    param_1[0x10] = pvVar19;
    local_148 = 0;
    local_138 = &PTR_LAB_14bb2bcf0;
    local_12c = param_5;
    local_128 = param_6;
    local_158 = &LAB_149158b50;
    local_1b8 = param_1[0xe];
    local_1b0 = *(int *)(param_1 + 0xf);
    local_130 = param_4;
    FUN_149158842(&local_118);
    if (&local_118 != param_1) {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_118;
      local_118 = (void *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
      local_110 = 0;
    }
    *(undefined1 *)(param_1 + 2) = local_108;
    param_1[3] = local_100;
    param_1[4] = pvStack_f8;
    pvVar19 = param_1[6];
    uStack_a0 = param_1[7];
    plVar20 = param_1[8];
    uStack_90 = param_1[9];
    local_88 = param_1[10];
    uStack_80 = param_1[0xb];
    local_78 = param_1[0xc];
    uStack_70 = param_1[0xd];
    pvVar15 = local_78;
    pvVar16 = uStack_70;
    pvVar13 = local_88;
    pvVar14 = uStack_80;
    local_98 = plVar20;
    plVar20 = local_98;
    pvVar12 = uStack_90;
    local_a8 = pvVar19;
    pvVar19 = local_a8;
    pvVar18 = uStack_a0;
    param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
    param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
    param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
    param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
    param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
    param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
    param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
    param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
    local_a8._0_4_ = SUB84(pvVar19,0);
    local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_98._0_4_ = SUB84(plVar20,0);
    local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = (undefined4)local_a8;
    uStack_e4 = local_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    local_a8 = pvVar19;
    uStack_a0 = pvVar18;
    local_98 = plVar20;
    uStack_90 = pvVar12;
    local_88 = pvVar13;
    uStack_80 = pvVar14;
    local_78 = pvVar15;
    uStack_70 = pvVar16;
    if (pvVar19 != (void *)0x0) {
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar21 = *(byte *)(param_1 + 0x11);
LAB_149117708:
    if ((bVar21 & 1) != 0) goto LAB_14911770e;
    local_1b8 = local_1a8;
    local_1b0 = (int)uStack_1a0;
  }
  local_188 = 0;
  local_178 = &PTR_LAB_14bb2bcf0;
  local_16c = param_5;
  local_168 = param_6;
  local_198 = &LAB_149158b50;
  local_170 = param_4;
  FUN_149158842(&local_118);
  if (&local_118 != param_1) {
    if (*param_1 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_118;
    local_118 = (void *)0x0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_110._4_4_;
    local_110 = 0;
  }
  *(undefined1 *)(param_1 + 2) = local_108;
  param_1[3] = local_100;
  param_1[4] = pvStack_f8;
  pvVar19 = param_1[6];
  uStack_a0 = param_1[7];
  plVar20 = param_1[8];
  uStack_90 = param_1[9];
  local_88 = param_1[10];
  uStack_80 = param_1[0xb];
  local_78 = param_1[0xc];
  uStack_70 = param_1[0xd];
  pvVar15 = local_78;
  pvVar16 = uStack_70;
  pvVar13 = local_88;
  pvVar14 = uStack_80;
  local_98 = plVar20;
  plVar20 = local_98;
  pvVar12 = uStack_90;
  local_a8 = pvVar19;
  pvVar19 = local_a8;
  pvVar18 = uStack_a0;
  param_1[0xc] = (void *)CONCAT44(uStack_b4,local_b8);
  param_1[0xd] = (void *)CONCAT44(uStack_ac,uStack_b0);
  param_1[10] = (void *)CONCAT44(uStack_c4,local_c8);
  param_1[0xb] = (void *)CONCAT44(uStack_bc,uStack_c0);
  param_1[8] = (void *)CONCAT44(uStack_d4,local_d8);
  param_1[9] = (void *)CONCAT44(uStack_cc,uStack_d0);
  param_1[6] = (void *)CONCAT44(uStack_e4,local_e8);
  param_1[7] = (void *)CONCAT44(uStack_dc,uStack_e0);
  local_a8._0_4_ = SUB84(pvVar19,0);
  local_a8._4_4_ = (undefined4)((ulonglong)pvVar19 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._0_4_ = SUB84(plVar20,0);
  local_98._4_4_ = (undefined4)((ulonglong)plVar20 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  local_a8 = pvVar19;
  uStack_a0 = pvVar18;
  local_98 = plVar20;
  uStack_90 = pvVar12;
  local_88 = pvVar13;
  uStack_80 = pvVar14;
  local_78 = pvVar15;
  uStack_70 = pvVar16;
  if (pvVar19 != (void *)0x0) {
    if (plVar20 == (longlong *)0x0) {
      plVar20 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14911770e:
  FUN_1491588bc(param_1,param_8,param_3,param_7);
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117996 FUN_149117996 body=271 status=ok
// SIG undefined FUN_149117996(void)

void FUN_149117996(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117aa6 FUN_149117aa6 body=126 status=ok
// SIG undefined FUN_149117aa6(void)

void FUN_149117aa6(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined4 **)*param_2;
  puVar4 = (undefined4 *)((longlong *)*param_2)[4];
  FUN_144a7484c(puVar3 + 6,&local_48);
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  uVar1 = *(undefined8 *)(puVar3 + 4);
  uVar9 = *(undefined8 *)(puVar3 + 0xc);
  uVar10 = *(undefined8 *)(puVar3 + 0xe);
  uVar2 = *(undefined8 *)(puVar3 + 0x10);
  *puVar4 = local_48;
  puVar4[1] = uStack_44;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  puVar4[4] = local_38;
  puVar4[5] = uStack_34;
  puVar4[6] = uStack_30;
  puVar4[7] = uStack_2c;
  puVar4[8] = uVar5;
  puVar4[9] = uVar6;
  puVar4[10] = uVar7;
  puVar4[0xb] = uVar8;
  *(undefined8 *)(puVar4 + 0xc) = uVar1;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x12) = uVar10;
  *(undefined8 *)(puVar4 + 0x14) = uVar2;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117b26 FUN_149117b26 body=287 status=ok
// SIG undefined FUN_149117b26(void)

void FUN_149117b26(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &PTR_FUN_14bad5c20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 0x3f91111111111111;
  local_120 = 0x800;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1490d751a(&local_158);
  FUN_144a7484c(param_1 + 0x20,&local_48);
  *(undefined4 *)(param_1 + 0x50) = local_48;
  *(undefined4 *)(param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0x58) = uStack_40;
  *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x60) = local_38;
  *(undefined4 *)(param_1 + 100) = uStack_34;
  *(undefined4 *)(param_1 + 0x68) = uStack_30;
  *(undefined4 *)(param_1 + 0x6c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_140f8ceac(&local_158);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117c46 FUN_149117c46 body=126 status=ok
// SIG undefined FUN_149117c46(void)

void FUN_149117c46(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined4 **)*param_2;
  puVar4 = (undefined4 *)((longlong *)*param_2)[4];
  FUN_144a7484c(puVar3 + 6,&local_48);
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  uVar1 = *(undefined8 *)(puVar3 + 4);
  uVar9 = *(undefined8 *)(puVar3 + 0xc);
  uVar10 = *(undefined8 *)(puVar3 + 0xe);
  uVar2 = *(undefined8 *)(puVar3 + 0x10);
  *puVar4 = local_48;
  puVar4[1] = uStack_44;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  puVar4[4] = local_38;
  puVar4[5] = uStack_34;
  puVar4[6] = uStack_30;
  puVar4[7] = uStack_2c;
  puVar4[8] = uVar5;
  puVar4[9] = uVar6;
  puVar4[10] = uVar7;
  puVar4[0xb] = uVar8;
  *(undefined8 *)(puVar4 + 0xc) = uVar1;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x12) = uVar10;
  *(undefined8 *)(puVar4 + 0x14) = uVar2;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117cc6 FUN_149117cc6 body=287 status=ok
// SIG undefined FUN_149117cc6(void)

void FUN_149117cc6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &PTR_FUN_14bad5c20;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 0x3f91111111111111;
  local_120 = 0x800;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1490d751a(&local_158);
  FUN_144a7484c(param_1 + 0x20,&local_48);
  *(undefined4 *)(param_1 + 0x50) = local_48;
  *(undefined4 *)(param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0x58) = uStack_40;
  *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x60) = local_38;
  *(undefined4 *)(param_1 + 100) = uStack_34;
  *(undefined4 *)(param_1 + 0x68) = uStack_30;
  *(undefined4 *)(param_1 + 0x6c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_140f8ceac(&local_158);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117de6 FUN_149117de6 body=144 status=ok
// SIG undefined FUN_149117de6(void)

void FUN_149117de6(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = *(undefined8 **)*param_2;
  puVar3 = (undefined8 *)((longlong *)*param_2)[4];
  uVar7 = puVar2[5];
  uVar1 = puVar2[6];
  *puVar3 = puVar2[4];
  puVar3[1] = uVar7;
  puVar3[2] = uVar1;
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  local_48 = *(undefined4 *)(puVar2 + 2);
  uStack_44 = *(undefined4 *)((longlong)puVar2 + 0x14);
  uStack_40 = *(undefined4 *)(puVar2 + 3);
  uStack_3c = *(undefined4 *)((longlong)puVar2 + 0x1c);
  FUN_1448052ee(&local_58,&local_38);
  puVar3[5] = local_28;
  puVar3[3] = local_38;
  puVar3[4] = uStack_30;
  uVar4 = *(undefined4 *)((longlong)puVar2 + 0x44);
  uVar5 = *(undefined4 *)(puVar2 + 9);
  uVar6 = *(undefined4 *)((longlong)puVar2 + 0x4c);
  uVar1 = puVar2[10];
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)((longlong)puVar3 + 0x34) = uVar4;
  *(undefined4 *)(puVar3 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar6;
  puVar3[8] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117e78 FUN_149117e78 body=314 status=ok
// SIG undefined FUN_149117e78(void)

void FUN_149117e78(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1490d751a(&local_168);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  local_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x20);
  uStack_44 = *(undefined4 *)(param_1 + 0x24);
  uStack_40 = *(undefined4 *)(param_1 + 0x28);
  uStack_3c = *(undefined4 *)(param_1 + 0x2c);
  FUN_1448052ee(&local_58,&local_38);
  *(undefined8 *)(param_1 + 0x98) = local_28;
  *(undefined8 *)(param_1 + 0x88) = local_38;
  *(undefined8 *)(param_1 + 0x90) = uStack_30;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x60);
  FUN_140f8ceac(&local_168);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149117fcc FUN_149117fcc body=239 status=ok
// SIG undefined FUN_149117fcc(void)

void FUN_149117fcc(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491180bc(param_1 + 0x10,param_1 + 0x70,param_1 + 0x88,param_1 + 0xa0);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491180bc FUN_1491180bc body=819 status=ok
// SIG undefined FUN_1491180bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491180bc(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = *param_1;
  dVar11 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  dVar5 = dVar2 * dVar2 + dVar1 * dVar1;
  dVar9 = dVar3 * dVar3 + dVar11 * dVar11;
  auVar7._0_8_ = dVar5 + dVar9;
  auVar7._8_8_ = dVar5 + dVar9;
  uVar4 = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar8);
  auVar10._0_8_ = auVar8._0_8_ * dVar2;
  auVar10._8_8_ = auVar8._8_8_ * dVar3;
  dVar5 = (double)((ulonglong)(dVar1 * auVar8._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_));
  dVar9 = (double)((ulonglong)(dVar11 * auVar8._8_8_) & uVar4);
  auVar8._8_4_ = (int)uVar4;
  auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  auVar8._12_4_ = (int)(uVar4 >> 0x20);
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar8);
  dVar12 = auVar8._0_8_;
  dVar1 = dVar12 + dVar5 * -0.0;
  dVar2 = dVar9 * 0.0 + dVar12 * -0.0;
  dVar1 = dVar1 + dVar1;
  dVar2 = dVar2 + dVar2;
  dVar13 = auVar8._8_8_;
  dVar3 = dVar5 + dVar9 * -0.0;
  dVar6 = dVar9 * -0.0 + dVar5 * 0.0;
  dVar11 = dVar5 * 0.0 - dVar9;
  dVar11 = dVar11 + dVar11;
  *param_2 = (dVar9 * dVar11 - dVar1 * dVar12) + dVar13 * dVar2 + 1.0;
  param_2[1] = (dVar12 * dVar2 - dVar11 * dVar5) + dVar13 * dVar1 + 0.0;
  param_2[2] = (dVar5 * dVar1 - dVar2 * dVar9) + dVar13 * dVar11 + 0.0;
  dVar1 = dVar5 * -0.0 + dVar12 * 0.0;
  dVar11 = dVar9 * 0.0 - dVar12;
  dVar3 = dVar3 + dVar3;
  dVar1 = dVar1 + dVar1;
  dVar11 = dVar11 + dVar11;
  *param_3 = (dVar9 * dVar3 - dVar1 * dVar12) + dVar13 * dVar11 + 0.0;
  param_3[1] = (dVar12 * dVar11 - dVar3 * dVar5) + dVar13 * dVar1 + 1.0;
  param_3[2] = (dVar5 * dVar1 - dVar11 * dVar9) + dVar13 * dVar3 + 0.0;
  dVar11 = dVar12 * 0.0 - dVar5;
  dVar1 = dVar12 * -0.0 + dVar9;
  dVar6 = dVar6 + dVar6;
  dVar11 = dVar11 + dVar11;
  dVar1 = dVar1 + dVar1;
  *param_4 = (dVar9 * dVar6 - dVar11 * dVar12) + dVar13 * dVar1 + 0.0;
  param_4[1] = (dVar12 * dVar1 - dVar6 * dVar5) + dVar13 * dVar11 + 0.0;
  param_4[2] = (dVar5 * dVar11 - dVar1 * dVar9) + dVar13 * dVar6 + 1.0;
  return;
}



// FUNCTION 149118404 FUN_149118404 body=232 status=ok
// SIG undefined FUN_149118404(void)

void FUN_149118404(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491184ee(param_1 + 0x10,param_1 + 0x70,param_1 + 0xd0);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491184ee FUN_1491184ee body=1753 status=ok
// SIG undefined FUN_1491184ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491184ee(double *param_1,double *param_2,double *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_288 [32];
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
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
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
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar34 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  auVar25 = *(undefined1 (*) [16])(param_2 + 8);
  dVar5 = auVar25._0_8_;
  dVar9 = auVar25._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_2 + 10);
  dVar6 = auVar3._0_8_;
  auVar26 = *(undefined1 (*) [16])(param_1 + 8);
  dVar7 = auVar26._0_8_;
  dVar10 = auVar26._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_1 + 10);
  dVar8 = auVar4._0_8_;
  auVar25 = minpd(auVar26,auVar25);
  auVar29 = minpd(auVar4,auVar3);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar17 = movmskpd((int)local_c0,auVar26);
  auVar25._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  uVar18 = movmskpd((int)param_3,auVar25);
  if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
    dVar27 = *param_1;
    dVar31 = param_1[1];
    dVar32 = param_1[2];
    dVar33 = param_1[3];
    dVar13 = *param_2;
    dVar14 = param_2[1];
    dVar15 = param_2[2];
    dVar16 = param_2[3];
    dVar23 = param_2[3];
    dVar22 = param_2[3];
    dVar12 = param_2[1];
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar30 = param_2[2];
    dVar24 = dVar31 * dVar2 * -1.0 + dVar32 * dVar12 + dVar33 * *param_2 * 1.0 + dVar27 * dVar23;
    dVar28 = dVar27 * dVar30 * 1.0 + dVar33 * dVar1 + dVar32 * *param_2 * -1.0 + dVar31 * dVar22;
    auVar34._0_8_ =
         dVar33 * dVar2 * 1.0 + ((*param_2 * dVar31 * 1.0 + dVar32 * dVar23) - dVar27 * dVar12);
    auVar34._8_8_ =
         dVar32 * dVar30 * -1.0 + ((*param_2 * dVar27 * -1.0 + dVar33 * dVar22) - dVar31 * dVar1);
    dVar30 = param_1[4] * dVar5;
    dVar27 = param_1[5] * dVar9;
    dVar31 = param_1[6] * dVar6;
    dVar32 = param_1[7] * auVar3._8_8_;
    dVar12 = dVar27 * dVar13 - dVar14 * dVar30;
    dVar1 = dVar31 * dVar14 - dVar15 * dVar27;
    dVar2 = dVar30 * dVar15 - dVar13 * dVar31;
    dVar33 = dVar32 * dVar16 - dVar16 * dVar32;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar12 = dVar12 + dVar12;
    dVar33 = dVar33 + dVar33;
    local_e8 = (dVar12 * dVar14 - dVar15 * dVar2) + dVar23 * dVar1 + dVar30 + param_2[4];
    dStack_e0 = (dVar1 * dVar15 - dVar12 * dVar13) + dVar22 * dVar2 + dVar27 + param_2[5];
    local_d8 = (dVar2 * dVar13 - dVar14 * dVar1) + dVar23 * dVar12 + dVar31 + param_2[6];
    dVar23 = (dVar33 * dVar16 - dVar33 * dVar16) + dVar22 * dVar33 + dVar32 + param_2[7];
  }
  else {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar30 = param_2[2];
    dVar27 = dVar2 + dVar2;
    dVar31 = dVar30 + dVar30;
    dVar22 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar22 + dVar2 * dVar27)) * dVar6;
    dVar23 = param_2[3];
    dVar32 = dVar31 * dVar23;
    dVar33 = (dVar1 + dVar1) * param_2[3];
    dVar23 = dVar27 * dVar23;
    local_188 = (dVar23 + *param_2 * dVar31) * dVar6;
    dVar22 = (DAT_149934d80._8_8_ - (dVar30 * dVar31 + dVar22)) * dVar9;
    dVar12 = (dVar27 * dVar1 + dVar32) * dVar5;
    local_198 = (dVar31 * dVar2 + dVar33) * dVar9;
    dStack_180 = (dVar31 * dVar2 - dVar33) * dVar6;
    local_1b8 = (*param_2 * dVar31 - dVar23) * dVar5;
    local_1c8._8_4_ = SUB84(dVar12,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar30 * dVar31 + dVar2 * dVar27)) * dVar5;
    local_1c8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar22,0);
    local_1a8._0_8_ = (dVar27 * dVar1 - dVar32) * dVar9;
    local_1a8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    dVar12 = *param_1;
    dVar1 = param_1[1];
    dVar2 = param_1[2];
    dVar30 = dVar1 + dVar1;
    dVar27 = dVar2 + dVar2;
    dVar22 = dVar12 * (dVar12 + dVar12);
    local_1f8 = (1.0 - (dVar22 + dVar1 * dVar30)) * dVar8;
    dVar23 = param_1[3];
    dVar31 = dVar27 * dVar23;
    dVar32 = (dVar12 + dVar12) * param_1[3];
    dVar23 = dVar30 * dVar23;
    local_208 = (dVar23 + *param_1 * dVar27) * dVar8;
    dStack_200 = (dVar27 * dVar1 - dVar32) * dVar8;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar27 + dVar1 * dVar30)) * dVar7;
    dVar22 = (DAT_149934d80._8_8_ - (dVar2 * dVar27 + dVar22)) * dVar10;
    dStack_240 = (dVar30 * dVar12 + dVar31) * dVar7;
    local_218 = (dVar27 * dVar1 + dVar32) * dVar10;
    local_238 = (*param_1 * dVar27 - dVar23) * dVar7;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar22,0);
    local_228._0_8_ = (dVar30 * dVar12 - dVar31) * dVar10;
    local_228._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_1[4];
    dStack_1e0 = param_1[5];
    local_1d8 = param_1[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar25 = blendvpd(_DAT_149936790,auVar34,auVar29);
    uVar19 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar23 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar22 = auVar25._0_8_;
    local_138 = local_138 * dVar22;
    local_140 = local_140 * dVar22;
    local_148 = local_148 * dVar22;
    dVar22 = auVar25._8_8_;
    local_118 = local_118 * dVar22;
    local_120 = local_120 * dVar22;
    local_128 = dVar22 * local_128;
    local_f8 = local_f8 * dVar23;
    local_100 = local_100 * dVar23;
    local_108 = dVar23 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar23 = local_258 * local_258 + local_268 * local_268;
    dVar22 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar21._0_8_ = dVar23 + dVar22;
    auVar21._8_8_ = dVar23 + dVar22;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar25 = sqrtpd(auVar21,auVar21);
    auVar25 = divpd(auVar34,auVar25);
    auVar35._0_8_ = auVar25._0_8_ * local_258;
    auVar35._8_8_ = auVar25._8_8_ * dStack_250;
    dVar24 = (double)((ulonglong)(local_268 * auVar25._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
    dVar28 = (double)((ulonglong)(dStack_260 * auVar25._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar20);
    dVar23 = 0.0;
  }
  dVar22 = auVar3._8_8_ * auVar4._8_8_;
  *param_3 = dVar24;
  param_3[1] = dVar28;
  *(undefined1 (*) [16])(param_3 + 2) = auVar34;
  auVar4._8_4_ = SUB84(dStack_e0,0);
  auVar4._0_8_ = local_e8;
  auVar4._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 4) = auVar4;
  param_3[6] = local_d8;
  param_3[7] = dVar23;
  auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar11._0_8_ = dVar5 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(param_3 + 8) = auVar11;
  auVar3._8_4_ = SUB84(dVar22,0);
  auVar3._0_8_ = dVar6 * dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 10) = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149118bc8 FUN_149118bc8 body=362 status=ok
// SIG undefined FUN_149118bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149118bc8(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined2 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = &PTR_FUN_14bad5c20;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_17c = 0;
  uStack_174 = 0;
  local_16c = 0;
  local_168 = 0x3f91111111111111;
  local_160 = 0x800;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = local_128;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1490d751a(&local_198);
  FUN_1449437a2(param_1 + 0x10,local_88,param_1 + 0x70);
  puVar6 = local_88;
  puVar7 = (undefined8 *)(param_1 + 0xd0);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  dVar1 = *(double *)(param_1 + 0xd0);
  dVar2 = *(double *)(param_1 + 0xd8);
  dVar3 = *(double *)(param_1 + 0xe0);
  dVar4 = *(double *)(param_1 + 0xe8);
  dVar9 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar12 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar10._0_8_ = dVar9 + dVar12;
  auVar10._8_8_ = dVar9 + dVar12;
  uVar8 = -(ulonglong)(1e-08 <= auVar10._8_8_);
  auVar11 = sqrtpd(auVar10,auVar10);
  auVar13 = divpd(_DAT_149934d80,auVar11);
  auVar14._0_8_ = auVar13._0_8_ * dVar3;
  auVar14._8_8_ = auVar13._8_8_ * dVar4;
  auVar11._8_4_ = (int)uVar8;
  auVar11._0_8_ = -(ulonglong)(1e-08 <= auVar10._0_8_);
  auVar11._12_4_ = (int)(uVar8 >> 0x20);
  auVar11 = blendvpd(_DAT_149935300,auVar14,auVar11);
  *(ulonglong *)(param_1 + 0xd0) =
       (ulonglong)(dVar1 * auVar13._0_8_) & -(ulonglong)(1e-08 <= auVar10._0_8_);
  *(ulonglong *)(param_1 + 0xd8) = (ulonglong)(dVar2 * auVar13._8_8_) & uVar8;
  *(undefined1 (*) [16])(param_1 + 0xe0) = auVar11;
  FUN_140f8ceac(&local_198);
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149118d34 FUN_149118d34 body=190 status=ok
// SIG undefined FUN_149118d34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149118d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_a8 [32];
  double local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1449437a2(param_2,local_88);
  pdVar6 = local_88;
  pdVar7 = param_4;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + 1;
    pdVar7 = pdVar7 + 1;
  }
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar4 = param_4[3];
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar11 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar9._0_8_ = dVar8 + dVar11;
  auVar9._8_8_ = dVar8 + dVar11;
  auVar10 = sqrtpd(auVar9,auVar9);
  auVar12 = divpd(_DAT_149934d80,auVar10);
  auVar13._0_8_ = auVar12._0_8_ * dVar3;
  auVar13._8_8_ = auVar12._8_8_ * dVar4;
  auVar10._8_8_ = -(ulonglong)(1e-08 <= auVar9._8_8_);
  auVar10._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
  auVar10 = blendvpd(_DAT_149935300,auVar13,auVar10);
  *param_4 = (double)((ulonglong)(dVar1 * auVar12._0_8_) & -(ulonglong)(1e-08 <= auVar9._0_8_));
  param_4[1] = (double)((ulonglong)(dVar2 * auVar12._8_8_) & -(ulonglong)(1e-08 <= auVar9._8_8_));
  *(undefined1 (*) [16])(param_4 + 2) = auVar10;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149118e08 FUN_149118e08 body=232 status=ok
// SIG undefined FUN_149118e08(void)

void FUN_149118e08(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar4 = FUN_1490d751a(&local_138);
  FUN_1459b4e90(uVar4,param_1 + 0x10,param_1 + 0x70,param_1 + 0xd0);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149118ef2 FUN_149118ef2 body=89 status=ok
// SIG undefined FUN_149118ef2(void)

void FUN_149118ef2(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)*param_2;
  local_18 = *(undefined8 *)puVar1[0xc];
  local_10 = *(undefined4 *)((undefined8 *)puVar1[0xc] + 1);
  FUN_149118fc0(*puVar1,CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                puVar1[8]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149118f4c FUN_149118f4c body=115 status=ok
// SIG undefined FUN_149118f4c(void)

void FUN_149118f4c(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 0x1a0);
  local_18 = *(undefined4 *)(param_1 + 0x1a8);
  FUN_149118fc0(param_1 + 0x120,*(undefined1 *)(param_1 + 0x130),param_1 + 0x140);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149118fc0 FUN_149118fc0 body=3977 status=ok
// SIG undefined FUN_149118fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149118fc0(longlong *param_1,double *param_2,double *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  double *pdVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double *pdVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar38;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
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
  double local_178 [4];
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
  uVar24 = *(uint *)(param_1 + 1);
  uVar27 = (ulonglong)uVar24;
  if (uVar27 != 0) {
    uVar25 = *(uint *)(param_4 + 1);
    pdVar22 = (double *)CONCAT71((int7)((ulonglong)param_3 >> 8),uVar25 != uVar24);
    if ((int)uVar25 < 1 || uVar25 == uVar24) {
      if ((char)param_2 == '\0') {
        if (uVar25 == 0) {
          if (0 < (int)uVar24) {
            uVar26 = uVar27 + 1;
            lVar21 = uVar27 * 0x60;
            do {
              lVar21 = lVar21 + -0x60;
              pdVar22 = (double *)(*param_1 + -0x60 + lVar21);
              if (lVar21 == 0) {
                pdVar22 = param_3;
              }
              FUN_1449437a2(*param_1 + lVar21,local_178,pdVar22);
              pdVar22 = local_178;
              pdVar18 = (double *)(*param_1 + lVar21);
              for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                *pdVar18 = *pdVar22;
                pdVar22 = pdVar22 + 1;
                pdVar18 = pdVar18 + 1;
              }
              uVar26 = uVar26 - 1;
            } while (1 < uVar26);
          }
        }
        else if (0 < (int)uVar24) {
          lVar21 = uVar27 * 0x60;
          do {
            uVar26 = uVar27 - 1;
            lVar21 = lVar21 + -0x60;
            lVar23 = (longlong)*(int *)(*param_4 + uVar26 * 4);
            pdVar22 = (double *)(lVar23 * 0x60 + *param_1);
            if ((longlong)uVar26 <= lVar23) {
              pdVar22 = param_3;
            }
            if (lVar23 == -1) {
              pdVar22 = param_3;
            }
            FUN_1449437a2(*param_1 + lVar21,local_178,pdVar22);
            pdVar22 = local_178;
            pdVar18 = (double *)(*param_1 + lVar21);
            for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
              *pdVar18 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar18 = pdVar18 + 1;
            }
            bVar5 = 1 < uVar27;
            uVar27 = uVar26;
          } while (bVar5);
        }
      }
      else if (uVar25 == 0) {
        if (0 < (int)uVar24) {
          lVar23 = -0x60;
          lVar21 = 0;
          do {
            auVar49 = _DAT_149934d80;
            lVar17 = *param_1;
            pdVar18 = (double *)(lVar17 + lVar23);
            if (lVar21 == 0) {
              pdVar18 = param_3;
            }
            auVar33 = *(undefined1 (*) [16])(pdVar18 + 8);
            dVar6 = auVar33._0_8_;
            dVar8 = auVar33._8_8_;
            auVar2 = *(undefined1 (*) [16])(pdVar18 + 10);
            dVar7 = auVar2._0_8_;
            auVar3 = *(undefined1 (*) [16])(lVar17 + 0xa0 + lVar23);
            auVar4 = *(undefined1 (*) [16])(lVar17 + 0xb0 + lVar23);
            auVar33 = minpd(auVar3,auVar33);
            auVar43 = minpd(auVar4,auVar2);
            auVar39._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
            auVar39._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
            uVar24 = movmskpd((int)param_2,auVar39);
            param_2 = (double *)(ulonglong)uVar24;
            auVar33._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
            auVar33._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
            uVar25 = movmskpd((int)pdVar22,auVar33);
            if ((uVar25 & 0x3fffffff) == 0 && uVar24 == 0) {
              pdVar22 = (double *)(lVar17 + 0x60 + lVar23);
              dVar45 = *pdVar22;
              dVar46 = pdVar22[1];
              pdVar22 = (double *)(lVar17 + 0x70 + lVar23);
              dVar48 = *pdVar22;
              dVar53 = pdVar22[1];
              dVar13 = *pdVar18;
              dVar14 = pdVar18[1];
              dVar15 = pdVar18[2];
              dVar16 = pdVar18[3];
              dVar47 = pdVar18[3];
              dVar31 = pdVar18[3];
              dVar52 = pdVar18[1];
              dVar38 = pdVar18[1];
              dVar35 = pdVar18[2];
              dVar37 = pdVar18[2];
              dVar32 = dVar46 * dVar35 * -1.0 +
                       dVar48 * dVar52 + dVar53 * *pdVar18 * 1.0 + dVar45 * dVar47;
              dVar36 = dVar45 * dVar37 * 1.0 +
                       dVar53 * dVar38 + dVar48 * *pdVar18 * -1.0 + dVar46 * dVar31;
              auVar49._0_8_ =
                   dVar53 * dVar35 * 1.0 +
                   ((*pdVar18 * dVar46 * 1.0 + dVar48 * dVar47) - dVar45 * dVar52);
              auVar49._8_8_ =
                   dVar48 * dVar37 * -1.0 +
                   ((*pdVar18 * dVar45 * -1.0 + dVar53 * dVar31) - dVar46 * dVar38);
              pdVar22 = (double *)(lVar17 + 0x80 + lVar23);
              dVar45 = *pdVar22 * dVar6;
              dVar46 = pdVar22[1] * dVar8;
              pdVar22 = (double *)(lVar17 + 0x90 + lVar23);
              dVar35 = *pdVar22 * dVar7;
              dVar37 = pdVar22[1] * auVar2._8_8_;
              dVar52 = dVar46 * dVar13 - dVar14 * dVar45;
              dVar53 = dVar35 * dVar14 - dVar15 * dVar46;
              dVar48 = dVar45 * dVar15 - dVar13 * dVar35;
              dVar38 = dVar37 * dVar16 - dVar16 * dVar37;
              dVar53 = dVar53 + dVar53;
              dVar48 = dVar48 + dVar48;
              dVar52 = dVar52 + dVar52;
              dVar38 = dVar38 + dVar38;
              dVar45 = (dVar52 * dVar14 - dVar15 * dVar48) + dVar47 * dVar53 + dVar45 + pdVar18[4];
              dVar46 = (dVar53 * dVar15 - dVar52 * dVar13) + dVar31 * dVar48 + dVar46 + pdVar18[5];
              dVar47 = (dVar48 * dVar13 - dVar14 * dVar53) + dVar47 * dVar52 + dVar35 + pdVar18[6];
              dVar31 = (dVar38 * dVar16 - dVar38 * dVar16) + dVar31 * dVar38 + dVar37 + pdVar18[7];
              pdVar22 = (double *)0x0;
            }
            else {
              dVar47 = *pdVar18;
              dVar52 = pdVar18[1];
              dVar38 = pdVar18[2];
              dVar35 = dVar52 + dVar52;
              dVar37 = dVar38 + dVar38;
              dVar31 = dVar47 * (dVar47 + dVar47);
              local_1f8 = ((double)DAT_149934d80 - (dVar38 * dVar37 + dVar52 * dVar35)) * dVar6;
              dStack_1d0 = (DAT_149934d80._8_8_ - (dVar38 * dVar37 + dVar31)) * dVar8;
              local_1a8 = (1.0 - (dVar31 + dVar52 * dVar35)) * dVar7;
              dVar31 = pdVar18[3];
              dVar38 = dVar37 * dVar31;
              dVar45 = (dVar47 + dVar47) * pdVar18[3];
              dVar31 = dVar35 * dVar31;
              dStack_1f0 = (dVar35 * dVar47 + dVar38) * dVar6;
              local_1c8 = (dVar37 * dVar52 + dVar45) * dVar8;
              local_1b8 = (dVar31 + *pdVar18 * dVar37) * dVar7;
              local_1d8 = (dVar35 * dVar47 - dVar38) * dVar8;
              dStack_1b0 = (dVar37 * dVar52 - dVar45) * dVar7;
              local_1e8 = (*pdVar18 * dVar37 - dVar31) * dVar6;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = pdVar18[4];
              dStack_190 = pdVar18[5];
              local_188 = pdVar18[6];
              uStack_180 = 0x3ff0000000000000;
              pdVar22 = (double *)(lVar17 + 0x60 + lVar23);
              dVar52 = *pdVar22;
              dVar38 = pdVar22[1];
              dVar47 = *(double *)(lVar17 + 0x70 + lVar23);
              pdVar22 = (double *)(lVar17 + 0xa0 + lVar23);
              local_268 = *pdVar22;
              local_258 = pdVar22[1];
              dStack_230 = *(double *)(lVar17 + 0xb0 + lVar23);
              dVar46 = dVar38 + dVar38;
              dVar35 = dVar47 + dVar47;
              dVar31 = dVar52 * (dVar52 + dVar52);
              local_278 = ((double)DAT_149934d80 - (dVar47 * dVar35 + dVar38 * dVar46)) * local_268;
              dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar35 + dVar31)) * local_258;
              local_228 = (1.0 - (dVar31 + dVar38 * dVar46)) * dStack_230;
              dVar47 = *(double *)(lVar17 + 0x60 + lVar23) * dVar35;
              pdVar22 = (double *)(lVar17 + 0x78 + lVar23);
              dVar31 = *pdVar22;
              dVar37 = dVar35 * dVar31;
              dVar45 = (dVar52 + dVar52) * *pdVar22;
              dVar31 = dVar46 * dVar31;
              dStack_270 = (dVar46 * dVar52 + dVar37) * local_268;
              local_248 = (dVar35 * dVar38 + dVar45) * local_258;
              local_238 = (dVar31 + dVar47) * dStack_230;
              local_268 = (dVar47 - dVar31) * local_268;
              local_258 = (dVar46 * dVar52 - dVar37) * local_258;
              dStack_230 = (dVar35 * dVar38 - dVar45) * dStack_230;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              puVar1 = (undefined8 *)(lVar17 + 0x80 + lVar23);
              local_218 = *puVar1;
              uStack_210 = puVar1[1];
              local_208 = *(undefined8 *)(lVar17 + 0x90 + lVar23);
              uStack_200 = 0x3ff0000000000000;
              pdVar22 = &local_1f8;
              FUN_1447fea8d(local_178,&local_278);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              auVar43._8_8_ = -(ulonglong)(0.0 <= auVar3._8_8_ * dVar8);
              auVar43._0_8_ = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar6);
              auVar33 = blendvpd(_DAT_149936790,auVar49,auVar43);
              uVar27 = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar7);
              dVar31 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
              dVar47 = auVar33._0_8_;
              local_178[2] = local_178[2] * dVar47;
              local_178[1] = local_178[1] * dVar47;
              local_178[0] = local_178[0] * dVar47;
              dVar47 = auVar33._8_8_;
              local_148 = local_148 * dVar47;
              local_150 = local_150 * dVar47;
              local_158 = dVar47 * local_158;
              local_128 = local_128 * dVar31;
              local_130 = local_130 * dVar31;
              local_138 = dVar31 * local_138;
              param_2 = local_178;
              FUN_14481fd10(&local_298);
              dVar31 = local_288 * local_288 + local_298 * local_298;
              dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar44._0_8_ = dVar31 + dVar47;
              auVar44._8_8_ = dVar31 + dVar47;
              auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
              auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
              auVar33 = sqrtpd(auVar44,auVar44);
              auVar49 = divpd(auVar49,auVar33);
              auVar51._0_8_ = auVar49._0_8_ * local_288;
              auVar51._8_8_ = auVar49._8_8_ * dStack_280;
              dVar32 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
              dVar36 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
              auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar30);
              dVar31 = 0.0;
              lVar17 = *param_1;
              dVar45 = local_118;
              dVar46 = dStack_110;
              dVar47 = local_108;
            }
            dVar52 = auVar4._8_8_ * auVar2._8_8_;
            dVar8 = auVar3._8_8_ * dVar8;
            pdVar18 = (double *)(lVar17 + 0x60 + lVar23);
            *pdVar18 = dVar32;
            pdVar18[1] = dVar36;
            *(undefined1 (*) [16])(lVar17 + 0x70 + lVar23) = auVar49;
            pdVar18 = (double *)(lVar17 + 0x80 + lVar23);
            *pdVar18 = dVar45;
            pdVar18[1] = dVar46;
            auVar2._8_4_ = SUB84(dVar31,0);
            auVar2._0_8_ = dVar47;
            auVar2._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            *(undefined1 (*) [16])(lVar17 + 0x90 + lVar23) = auVar2;
            auVar11._8_4_ = SUB84(dVar8,0);
            auVar11._0_8_ = auVar3._0_8_ * dVar6;
            auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(lVar17 + 0xa0 + lVar23) = auVar11;
            auVar3._8_4_ = SUB84(dVar52,0);
            auVar3._0_8_ = auVar4._0_8_ * dVar7;
            auVar3._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
            *(undefined1 (*) [16])(lVar17 + 0xb0 + lVar23) = auVar3;
            lVar21 = lVar21 + 1;
            lVar23 = lVar23 + 0x60;
          } while (lVar21 < (int)param_1[1]);
        }
      }
      else if (0 < (int)uVar24) {
        lVar21 = 0x14;
        lVar23 = 0;
        do {
          auVar49 = _DAT_149934d80;
          iVar19 = *(int *)(*param_4 + lVar23 * 4);
          lVar20 = (longlong)iVar19;
          lVar17 = *param_1;
          pdVar18 = (double *)(lVar20 * 0x60 + lVar17);
          if (lVar23 <= lVar20) {
            pdVar18 = param_3;
          }
          if (lVar20 == -1) {
            pdVar18 = param_3;
          }
          auVar33 = *(undefined1 (*) [16])(pdVar18 + 8);
          dVar6 = auVar33._0_8_;
          dVar8 = auVar33._8_8_;
          auVar2 = *(undefined1 (*) [16])(pdVar18 + 10);
          dVar7 = auVar2._0_8_;
          auVar3 = *(undefined1 (*) [16])(lVar17 + -0x10 + lVar21 * 4);
          auVar4 = *(undefined1 (*) [16])(lVar17 + lVar21 * 4);
          auVar33 = minpd(auVar3,auVar33);
          auVar39 = minpd(auVar4,auVar2);
          auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
          auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
          iVar19 = movmskpd(iVar19,auVar34);
          auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          uVar24 = movmskpd((int)pdVar22,auVar40);
          if ((uVar24 & 0x3fffffff) == 0 && iVar19 == 0) {
            pdVar22 = (double *)(lVar17 + -0x50 + lVar21 * 4);
            dVar45 = *pdVar22;
            dVar46 = pdVar22[1];
            pdVar22 = (double *)(lVar17 + -0x40 + lVar21 * 4);
            dVar48 = *pdVar22;
            dVar53 = pdVar22[1];
            dVar13 = *pdVar18;
            dVar14 = pdVar18[1];
            dVar15 = pdVar18[2];
            dVar16 = pdVar18[3];
            dVar47 = pdVar18[3];
            dVar31 = pdVar18[3];
            dVar52 = pdVar18[1];
            dVar38 = pdVar18[1];
            dVar37 = pdVar18[2];
            dVar35 = pdVar18[2];
            dVar32 = dVar46 * dVar37 * -1.0 +
                     dVar48 * dVar52 + dVar53 * *pdVar18 * 1.0 + dVar45 * dVar47;
            dVar36 = dVar45 * dVar35 * 1.0 +
                     dVar53 * dVar38 + dVar48 * *pdVar18 * -1.0 + dVar46 * dVar31;
            auVar42._0_8_ =
                 dVar53 * dVar37 * 1.0 +
                 ((*pdVar18 * dVar46 * 1.0 + dVar48 * dVar47) - dVar45 * dVar52);
            auVar42._8_8_ =
                 dVar48 * dVar35 * -1.0 +
                 ((*pdVar18 * dVar45 * -1.0 + dVar53 * dVar31) - dVar46 * dVar38);
            pdVar22 = (double *)(lVar17 + -0x30 + lVar21 * 4);
            dVar45 = *pdVar22 * dVar6;
            dVar46 = pdVar22[1] * dVar8;
            pdVar22 = (double *)(lVar17 + -0x20 + lVar21 * 4);
            dVar35 = *pdVar22 * dVar7;
            dVar37 = pdVar22[1] * auVar2._8_8_;
            dVar52 = dVar46 * dVar13 - dVar14 * dVar45;
            dVar53 = dVar35 * dVar14 - dVar15 * dVar46;
            dVar48 = dVar45 * dVar15 - dVar13 * dVar35;
            dVar38 = dVar37 * dVar16 - dVar16 * dVar37;
            dVar53 = dVar53 + dVar53;
            dVar48 = dVar48 + dVar48;
            dVar52 = dVar52 + dVar52;
            dVar38 = dVar38 + dVar38;
            dVar45 = (dVar52 * dVar14 - dVar15 * dVar48) + dVar47 * dVar53 + dVar45 + pdVar18[4];
            dVar46 = (dVar53 * dVar15 - dVar52 * dVar13) + dVar31 * dVar48 + dVar46 + pdVar18[5];
            dVar47 = (dVar48 * dVar13 - dVar14 * dVar53) + dVar47 * dVar52 + dVar35 + pdVar18[6];
            dVar31 = (dVar38 * dVar16 - dVar38 * dVar16) + dVar31 * dVar38 + dVar37 + pdVar18[7];
            pdVar22 = (double *)0x0;
          }
          else {
            dVar47 = *pdVar18;
            dVar52 = pdVar18[1];
            dVar38 = pdVar18[2];
            dVar35 = dVar52 + dVar52;
            dVar37 = dVar38 + dVar38;
            dVar31 = dVar47 * (dVar47 + dVar47);
            local_1f8 = ((double)DAT_149934d80 - (dVar38 * dVar37 + dVar52 * dVar35)) * dVar6;
            dStack_1d0 = (DAT_149934d80._8_8_ - (dVar38 * dVar37 + dVar31)) * dVar8;
            local_1a8 = (1.0 - (dVar31 + dVar52 * dVar35)) * dVar7;
            dVar31 = pdVar18[3];
            dVar38 = dVar37 * dVar31;
            dVar45 = (dVar47 + dVar47) * pdVar18[3];
            dVar31 = dVar35 * dVar31;
            dStack_1f0 = (dVar35 * dVar47 + dVar38) * dVar6;
            local_1c8 = (dVar37 * dVar52 + dVar45) * dVar8;
            local_1b8 = (dVar31 + *pdVar18 * dVar37) * dVar7;
            local_1d8 = (dVar35 * dVar47 - dVar38) * dVar8;
            dStack_1b0 = (dVar37 * dVar52 - dVar45) * dVar7;
            local_1e8 = (*pdVar18 * dVar37 - dVar31) * dVar6;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = pdVar18[4];
            dStack_190 = pdVar18[5];
            local_188 = pdVar18[6];
            uStack_180 = 0x3ff0000000000000;
            pdVar22 = (double *)(lVar17 + -0x50 + lVar21 * 4);
            dVar52 = *pdVar22;
            dVar38 = pdVar22[1];
            dVar47 = *(double *)(lVar17 + -0x40 + lVar21 * 4);
            pdVar22 = (double *)(lVar17 + -0x10 + lVar21 * 4);
            local_268 = *pdVar22;
            local_258 = pdVar22[1];
            dStack_230 = *(double *)(lVar17 + lVar21 * 4);
            dVar46 = dVar38 + dVar38;
            dVar35 = dVar47 + dVar47;
            dVar31 = dVar52 * (dVar52 + dVar52);
            local_278 = ((double)DAT_149934d80 - (dVar47 * dVar35 + dVar38 * dVar46)) * local_268;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar35 + dVar31)) * local_258;
            local_228 = (1.0 - (dVar31 + dVar38 * dVar46)) * dStack_230;
            dVar47 = *(double *)(lVar17 + -0x50 + lVar21 * 4) * dVar35;
            pdVar22 = (double *)(lVar17 + -0x38 + lVar21 * 4);
            dVar31 = *pdVar22;
            dVar37 = dVar35 * dVar31;
            dVar45 = (dVar52 + dVar52) * *pdVar22;
            dVar31 = dVar46 * dVar31;
            dStack_270 = (dVar46 * dVar52 + dVar37) * local_268;
            local_248 = (dVar35 * dVar38 + dVar45) * local_258;
            local_238 = (dVar31 + dVar47) * dStack_230;
            local_268 = (dVar47 - dVar31) * local_268;
            local_258 = (dVar46 * dVar52 - dVar37) * local_258;
            dStack_230 = (dVar35 * dVar38 - dVar45) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            puVar1 = (undefined8 *)(lVar17 + -0x30 + lVar21 * 4);
            local_218 = *puVar1;
            uStack_210 = puVar1[1];
            local_208 = *(undefined8 *)(lVar17 + -0x20 + lVar21 * 4);
            uStack_200 = 0x3ff0000000000000;
            pdVar22 = &local_1f8;
            FUN_1447fea8d(local_178,&local_278);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar28._8_8_ = -(ulonglong)(0.0 <= auVar3._8_8_ * dVar8);
            auVar28._0_8_ = -(ulonglong)(0.0 <= auVar3._0_8_ * dVar6);
            auVar33 = blendvpd(_DAT_149936790,auVar49,auVar28);
            uVar27 = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar7);
            dVar31 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
            dVar47 = auVar33._0_8_;
            local_178[2] = local_178[2] * dVar47;
            local_178[1] = local_178[1] * dVar47;
            local_178[0] = local_178[0] * dVar47;
            dVar47 = auVar33._8_8_;
            local_148 = local_148 * dVar47;
            local_150 = local_150 * dVar47;
            local_158 = dVar47 * local_158;
            local_128 = local_128 * dVar31;
            local_130 = local_130 * dVar31;
            local_138 = dVar31 * local_138;
            FUN_14481fd10(&local_298,local_178);
            dVar31 = local_288 * local_288 + local_298 * local_298;
            dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar41._0_8_ = dVar31 + dVar47;
            auVar41._8_8_ = dVar31 + dVar47;
            auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
            auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
            auVar33 = sqrtpd(auVar41,auVar41);
            auVar49 = divpd(auVar49,auVar33);
            auVar50._0_8_ = auVar49._0_8_ * local_288;
            auVar50._8_8_ = auVar49._8_8_ * dStack_280;
            dVar32 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
            dVar36 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
            auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar29);
            dVar31 = 0.0;
            lVar17 = *param_1;
            dVar45 = local_118;
            dVar46 = dStack_110;
            dVar47 = local_108;
          }
          dVar52 = auVar4._8_8_ * auVar2._8_8_;
          dVar8 = auVar3._8_8_ * dVar8;
          pdVar18 = (double *)(lVar17 + -0x50 + lVar21 * 4);
          *pdVar18 = dVar32;
          pdVar18[1] = dVar36;
          *(undefined1 (*) [16])(lVar17 + -0x40 + lVar21 * 4) = auVar42;
          pdVar18 = (double *)(lVar17 + -0x30 + lVar21 * 4);
          *pdVar18 = dVar45;
          pdVar18[1] = dVar46;
          auVar9._8_4_ = SUB84(dVar31,0);
          auVar9._0_8_ = dVar47;
          auVar9._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          *(undefined1 (*) [16])(lVar17 + -0x20 + lVar21 * 4) = auVar9;
          auVar10._8_4_ = SUB84(dVar8,0);
          auVar10._0_8_ = auVar3._0_8_ * dVar6;
          auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          *(undefined1 (*) [16])(lVar17 + -0x10 + lVar21 * 4) = auVar10;
          auVar12._8_4_ = SUB84(dVar52,0);
          auVar12._0_8_ = auVar4._0_8_ * dVar7;
          auVar12._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          *(undefined1 (*) [16])(lVar17 + lVar21 * 4) = auVar12;
          lVar23 = lVar23 + 1;
          lVar21 = lVar21 + 0x18;
        } while (lVar23 < (int)param_1[1]);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149119f5a FUN_149119f5a body=225 status=ok
// SIG undefined FUN_149119f5a(void)

void FUN_149119f5a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14911a03c(param_1 + 0x10,param_1 + 0x70);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911a03c FUN_14911a03c body=602 status=ok
// SIG undefined FUN_14911a03c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14911a03c(double *param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
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
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  auVar2 = *(undefined1 (*) [16])(param_1 + 10);
  lVar5 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
  auVar16._8_4_ = (int)lVar5;
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
  auVar16._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar16);
  lVar5 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar19._8_4_ = (int)lVar5;
  auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar19._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd(param_3,auVar19);
  dVar6 = DAT_14c8464c0;
  dVar7 = DAT_14c8464c8;
  dVar10 = DAT_14c846490;
  dVar11 = DAT_14c846498;
  dVar12 = DAT_14c846480;
  dVar13 = DAT_14c846488;
  dVar15 = DAT_14c8464a0;
  dVar17 = DAT_14c8464a8;
  dVar8 = DAT_14c8464d0;
  dVar9 = dRam000000014c8464d8;
  dVar14 = DAT_14c8464b0;
  dVar18 = DAT_14c8464b8;
  if ((uVar4 & 0x3fffffff) != 0 || iVar3 != 0) {
    auVar19 = divpd(_DAT_149934d80,auVar1);
    auVar16 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar19._0_8_);
    dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar19._8_8_);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar16._0_8_);
    dVar10 = param_1[2] * -1.0;
    dVar11 = param_1[3] * 1.0;
    dVar12 = -*param_1;
    dVar13 = -param_1[1];
    dVar15 = param_1[4] * dVar6;
    dVar17 = param_1[5] * dVar7;
    dVar14 = param_1[6] * dVar8;
    dVar18 = dVar17 * dVar12 - dVar13 * dVar15;
    dVar20 = dVar14 * dVar13 - dVar10 * dVar17;
    dVar21 = dVar15 * dVar10 - dVar12 * dVar14;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    dVar18 = dVar18 + dVar18;
    dVar15 = 0.0 - ((dVar18 * dVar13 - dVar21 * dVar10) + dVar11 * dVar20 + dVar15);
    dVar17 = 0.0 - (dVar18 * *param_1 + dVar10 * dVar20 + dVar11 * dVar21 + dVar17);
    dVar9 = 0.0;
    dVar14 = 0.0 - (dVar11 * dVar18 + dVar14 + (dVar21 * dVar12 - dVar20 * dVar13));
    dVar18 = 0.0;
  }
  *param_2 = dVar12;
  param_2[1] = dVar13;
  param_2[2] = dVar10;
  param_2[3] = dVar11;
  param_2[4] = dVar15;
  param_2[5] = dVar17;
  param_2[6] = dVar14;
  param_2[7] = dVar18;
  param_2[8] = dVar6;
  param_2[9] = dVar7;
  param_2[10] = dVar8;
  param_2[0xb] = dVar9;
  return;
}



// FUNCTION 14911a296 FUN_14911a296 body=105 status=ok
// SIG undefined FUN_14911a296(void)

void FUN_14911a296(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)puVar2[0xc];
  FUN_14915b8da(local_78,*puVar2,puVar2[4],*(undefined4 *)puVar2[8]);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911a300 FUN_14911a300 body=263 status=ok
// SIG undefined FUN_14911a300(void)

void FUN_14911a300(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined2 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = &PTR_FUN_14bad5c20;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_17c = 0;
  uStack_174 = 0;
  local_16c = 0;
  local_168 = 0x3f91111111111111;
  local_160 = 0x800;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_128;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1490d751a(&local_198);
  FUN_14915b8da(local_88,param_1 + 0x10,param_1 + 0x70,*(undefined4 *)(param_1 + 0xd0));
  puVar2 = local_88;
  puVar3 = (undefined8 *)(param_1 + 0xe0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ceac(&local_198);
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911a408 FUN_14911a408 body=37 status=ok
// SIG undefined FUN_14911a408(void)

void FUN_14911a408(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2 = (undefined8 *)*param_2;
  puVar2 = *(undefined8 **)((ulonglong)((*(byte *)*param_2 ^ 1) << 5) + 0x20 + (longlong)param_2);
  puVar3 = (undefined8 *)param_2[0xc];
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14911a434 FUN_14911a434 body=244 status=ok
// SIG undefined FUN_14911a434(void)

void FUN_14911a434(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 8) == '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x70);
  }
  puVar3 = (undefined8 *)(param_1 + 0xd0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911a52a FUN_14911a52a body=269 status=ok
// SIG undefined FUN_14911a52a(void)

void FUN_14911a52a(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  param_2 = (longlong *)*param_2;
  pdVar2 = (double *)*param_2;
  pdVar3 = (double *)param_2[4];
  pauVar4 = (undefined1 (*) [16])param_2[8];
  dVar10 = *pdVar3 * pdVar2[8];
  dVar11 = pdVar3[1] * pdVar2[9];
  dVar9 = pdVar3[2] * pdVar2[10];
  dVar6 = *pdVar2;
  dVar7 = pdVar2[1];
  dVar8 = pdVar2[2];
  dVar1 = pdVar2[3];
  dVar12 = dVar11 * dVar6 - dVar10 * dVar7;
  dVar13 = dVar9 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar10 * dVar8 - dVar6 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar11 = (dVar8 * dVar13 - dVar6 * dVar12) + pdVar2[3] * dVar14 + dVar11;
  auVar5._8_4_ = SUB84(dVar11,0);
  auVar5._0_8_ = (dVar12 * dVar7 - dVar14 * dVar8) + dVar1 * dVar13 + dVar10;
  auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *pauVar4 = auVar5;
  *(double *)pauVar4[1] = dVar12 * dVar1 + dVar9 + (dVar14 * dVar6 - dVar13 * dVar7);
  return;
}



// FUNCTION 14911a638 FUN_14911a638 body=493 status=ok
// SIG undefined FUN_14911a638(void)

void FUN_14911a638(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = &PTR_FUN_14bad5c20;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  local_148 = 0x3f91111111111111;
  local_140 = 0x800;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  puVar7 = &DAT_14c846480;
  puVar8 = local_108;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1490d751a(&local_178);
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x20);
  dVar10 = *(double *)(param_1 + 0x70) * *(double *)(param_1 + 0x50);
  dVar11 = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x58);
  dVar9 = *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x60);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar12 = dVar11 * dVar3 - dVar10 * dVar4;
  dVar13 = dVar9 * dVar4 - dVar11 * dVar5;
  dVar14 = dVar10 * dVar5 - dVar3 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar11 = (dVar5 * dVar13 - dVar3 * dVar12) + *(double *)(param_1 + 0x28) * dVar14 + dVar11;
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = (dVar12 * dVar4 - dVar14 * dVar5) + dVar1 * dVar13 + dVar10;
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar2;
  *(double *)(param_1 + 0x98) = dVar12 * dVar1 + dVar9 + (dVar14 * dVar3 - dVar13 * dVar4);
  FUN_140f8ceac(&local_178);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911a826 FUN_14911a826 body=280 status=ok
// SIG undefined FUN_14911a826(void)

void FUN_14911a826(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
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
  
  param_2 = (longlong *)*param_2;
  pdVar2 = (double *)*param_2;
  pdVar3 = (double *)param_2[4];
  pauVar4 = (undefined1 (*) [16])param_2[8];
  dVar11 = *pdVar3 * pdVar2[8];
  dVar12 = pdVar3[1] * pdVar2[9];
  dVar10 = pdVar3[2] * pdVar2[10];
  dVar7 = *pdVar2;
  dVar8 = pdVar2[1];
  dVar9 = pdVar2[2];
  dVar1 = pdVar2[3];
  dVar13 = dVar12 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar10 * dVar8 - dVar12 * dVar9;
  dVar15 = dVar11 * dVar9 - dVar7 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar6 = (dVar9 * dVar14 - dVar7 * dVar13) + pdVar2[3] * dVar15 + dVar12 + pdVar2[5];
  dVar12 = pdVar2[6];
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (dVar13 * dVar8 - dVar15 * dVar9) + dVar1 * dVar14 + dVar11 + pdVar2[4];
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *pauVar4 = auVar5;
  *(double *)pauVar4[1] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar7 - dVar14 * dVar8) + dVar12;
  return;
}



// FUNCTION 14911a93e FUN_14911a93e body=504 status=ok
// SIG undefined FUN_14911a93e(void)

void FUN_14911a93e(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = &PTR_FUN_14bad5c20;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  local_148 = 0x3f91111111111111;
  local_140 = 0x800;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  puVar7 = &DAT_14c846480;
  puVar8 = local_108;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1490d751a(&local_178);
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x20);
  dVar10 = *(double *)(param_1 + 0x70) * *(double *)(param_1 + 0x50);
  dVar11 = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 0x58);
  dVar9 = *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x60);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar12 = dVar11 * dVar3 - dVar10 * dVar4;
  dVar13 = dVar9 * dVar4 - dVar11 * dVar5;
  dVar14 = dVar10 * dVar5 - dVar3 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar11 = (dVar5 * dVar13 - dVar3 * dVar12) + *(double *)(param_1 + 0x28) * dVar14 + dVar11 +
           *(double *)(param_1 + 0x38);
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = (dVar12 * dVar4 - dVar14 * dVar5) + dVar1 * dVar13 + dVar10 +
                 *(double *)(param_1 + 0x30);
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar2;
  *(double *)(param_1 + 0x98) =
       dVar12 * dVar1 + dVar9 + (dVar14 * dVar3 - dVar13 * dVar4) + *(double *)(param_1 + 0x40);
  FUN_140f8ceac(&local_178);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ab38 FUN_14911ab38 body=60 status=ok
// SIG undefined FUN_14911ab38(void)

void FUN_14911ab38(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14911ac74(*puVar1,puVar1[4],
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 14911ab74 FUN_14911ab74 body=254 status=ok
// SIG undefined FUN_14911ab74(void)

void FUN_14911ab74(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0xc0;
  local_148 = param_1 + 0x60;
  FUN_14911ac74(param_1 + 8,param_1 + 0x20,*(undefined1 *)(param_1 + 0x38),param_1 + 0x40);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ac74 FUN_14911ac74 body=231 status=ok
// SIG undefined FUN_14911ac74(void)

void FUN_14911ac74(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined4 *)(param_5 + 4) = *param_1;
  *(undefined4 *)((longlong)param_5 + 0x24) = uVar2;
  *(undefined4 *)(param_5 + 5) = uVar3;
  *(undefined4 *)((longlong)param_5 + 0x2c) = uVar4;
  param_5[6] = uVar1;
  param_5[7] = 0;
  FUN_14690c017(&local_68,(int)uVar1,param_3,0);
  *param_5 = local_68;
  param_5[1] = uStack_60;
  param_5[2] = CONCAT44(uStack_54,local_58);
  param_5[3] = CONCAT44(uStack_4c,uStack_50);
  uVar5 = param_4[1];
  uVar1 = param_4[2];
  param_5[8] = *param_4;
  param_5[9] = uVar5;
  param_5[10] = uVar1;
  param_5[0xb] = 0;
  uVar5 = param_5[5];
  uVar1 = param_5[6];
  *param_6 = param_5[4];
  param_6[1] = uVar5;
  param_6[2] = uVar1;
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = *(undefined4 *)(param_5 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x14);
  uStack_50 = *(undefined4 *)(param_5 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0x1c);
  FUN_1448052ee(&local_68,&local_40);
  param_6[5] = local_30;
  param_6[3] = local_40;
  param_6[4] = uStack_38;
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x44);
  uVar3 = *(undefined4 *)(param_5 + 9);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x4c);
  uVar1 = param_5[10];
  *(undefined4 *)(param_6 + 6) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)((longlong)param_6 + 0x34) = uVar2;
  *(undefined4 *)(param_6 + 7) = uVar3;
  *(undefined4 *)((longlong)param_6 + 0x3c) = uVar4;
  param_6[8] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ad5c FUN_14911ad5c body=87 status=ok
// SIG undefined FUN_14911ad5c(void)

void FUN_14911ad5c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2 = (longlong *)*param_2;
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_14911aeb0(&local_18,param_2[4],param_2[8],param_2[0xc]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911adb4 FUN_14911adb4 body=250 status=ok
// SIG undefined FUN_14911adb4(void)

void FUN_14911adb4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  FUN_14911aeb0(&local_30,param_1 + 0x18,param_1 + 0x28,param_1 + 0x38);
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911aeb0 FUN_14911aeb0 body=209 status=ok
// SIG undefined FUN_14911aeb0(void)

void FUN_14911aeb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != 0) {
    FUN_140b463b8(param_2,(int)param_1[1],1);
    FUN_144a72a68(param_3,(int)param_1[1],1);
    FUN_140b463b8(param_4,(int)param_1[1],1);
    if (0 < (int)param_1[1]) {
      lVar7 = 4;
      lVar8 = 0;
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)(*param_1 + 0x20 + lVar8 * 4);
        uVar5 = puVar2[1];
        uVar3 = *(undefined8 *)(*param_1 + 0x30 + lVar8 * 4);
        lVar4 = *param_2;
        puVar1 = (undefined8 *)(lVar4 + lVar8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar4 + 0x10 + lVar8) = uVar3;
        puVar1 = (undefined8 *)(*param_1 + lVar8 * 4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar8 * 4);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        lVar4 = *param_3;
        puVar2 = (undefined8 *)(lVar4 + -0x10 + lVar7 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)(lVar4 + lVar7 * 4);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar2 = (undefined8 *)(*param_1 + 0x40 + lVar8 * 4);
        uVar5 = puVar2[1];
        uVar3 = *(undefined8 *)(*param_1 + 0x50 + lVar8 * 4);
        lVar4 = *param_4;
        puVar1 = (undefined8 *)(lVar4 + lVar8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar4 + 0x10 + lVar8) = uVar3;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x18;
        lVar7 = lVar7 + 8;
      } while (lVar9 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 14911af82 FUN_14911af82 body=252 status=ok
// SIG undefined FUN_14911af82(void)

void FUN_14911af82(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  local_a8 = *(undefined4 *)param_2[0xc];
  local_a0 = *(undefined4 *)param_2[0x10];
  local_98 = param_2[0x14];
  local_90 = *(undefined1 *)param_2[0x18];
  local_88 = param_2[0x1c];
  local_80 = *(undefined4 *)param_2[0x20];
  puVar1 = (undefined8 *)param_2[0x24];
  local_68 = puVar3[4];
  uStack_60 = puVar3[5];
  local_58 = puVar3[6];
  local_78 = &local_48;
  FUN_14911b69e(*(undefined8 *)(param_1 + 0xc0),&local_68,param_2[4],param_2[8]);
  puVar4 = puVar1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(puVar1 + 4) = local_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = uStack_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  puVar1[6] = local_38;
  puVar1[7] = 0;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911b088 FUN_14911b088 body=384 status=ok
// SIG undefined FUN_14911b088(void)

void FUN_14911b088(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 *local_188;
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [12];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_178 = &PTR_FUN_14bad5c20;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_14c = 0;
  local_148 = 0x3f91111111111111;
  local_140 = 0x800;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1490d751a(&local_178);
  local_190 = *(undefined4 *)(param_1 + 0xf4);
  local_198 = param_1 + 0xe4;
  local_1a0 = *(undefined1 *)(param_1 + 0xe0);
  local_1a8 = param_1 + 0x80;
  local_1b8 = *(undefined4 *)(param_1 + 0x74);
  local_1b0 = *(undefined4 *)(param_1 + 0x78);
  local_68 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_188 = &local_48;
  FUN_14911b69e(&local_178,&local_68,param_1 + 0x70,param_1 + 0x71);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(param_1 + 0x100);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x120) = local_48;
  *(undefined4 *)(param_1 + 0x124) = uStack_44;
  *(undefined4 *)(param_1 + 0x128) = uStack_40;
  *(undefined4 *)(param_1 + 300) = uStack_3c;
  *(undefined8 *)(param_1 + 0x130) = local_38;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_140f8ceac(&local_178);
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911b20a FUN_14911b20a body=45 status=ok
// SIG undefined FUN_14911b20a(void)

void FUN_14911b20a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149110e00(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 14911b238 FUN_14911b238 body=248 status=ok
// SIG undefined FUN_14911b238(void)

void FUN_14911b238(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0xe0;
  FUN_149110e00(param_1 + 0x10,param_1 + 0x70,param_1 + 0x71,param_1 + 0x80);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911b332 FUN_14911b332 body=291 status=ok
// SIG undefined FUN_14911b332(void)

longlong FUN_14911b332(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  longlong local_108 [2];
  undefined **local_f8;
  undefined8 local_f0 [9];
  undefined8 local_a8 [13];
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = &PTR_FUN_14bb25500;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_f0;
  for (lVar1 = 9; param_1 = param_1 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    puVar2 = puVar2 + 1;
  }
  FUN_14911b456(param_2,&local_f8);
  FUN_140056680(local_108,L"Value");
  FUN_140056680(local_118,L"EulerTransform");
  local_40 = local_118;
  local_38 = local_108;
  FUN_140ac5c08(param_2 + 0x30,local_2c,&local_40,0);
  local_40 = local_118;
  local_38 = local_108;
  FUN_140ac5c08(param_2 + 0x80,local_2c,&local_40,0);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911b456 FUN_14911b456 body=211 status=ok
// SIG undefined FUN_14911b456(void)

undefined8 * FUN_14911b456(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466a9e10();
  param_1[2] = uVar1;
  uVar1 = FUN_1466aa00e();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14911b52a FUN_14911b52a body=346 status=ok
// SIG undefined FUN_14911b52a(void)

undefined8 * FUN_14911b52a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *_Src;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc03ba0) {
    FUN_144b3d300(&DAT_14cc03ba0);
    if (DAT_14cc03ba0 == -1) {
      FUN_140056680(&DAT_14cc03b90,L"Make Transform Array Relative");
      atexit((_func_5014 *)&LAB_14447aaa8);
      _Init_thread_footer(&DAT_14cc03ba0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc03bb8) {
    FUN_144b3d300(&DAT_14cc03bb8);
    if (DAT_14cc03bb8 == -1) {
      FUN_140056680(&DAT_14cc03ba8,L"Make Transform Array Absolute");
      atexit((_func_5014 *)&LAB_14447aab9);
      _Init_thread_footer(&DAT_14cc03bb8);
    }
  }
  cVar1 = *(char *)(param_1 + 0x130);
  *param_2 = 0;
  pvVar3 = DAT_14cc03ba8;
  _Src = DAT_14cc03b90;
  puVar4 = &DAT_14cc03b90;
  if (cVar1 == '\x01') {
    puVar4 = &DAT_14cc03ba8;
  }
  iVar2 = *(int *)(puVar4 + 1);
  *(int *)(param_2 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    if (cVar1 == '\x01') {
      _Src = pvVar3;
    }
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 14911b684 FUN_14911b684 body=25 status=ok
// SIG undefined FUN_14911b684(void)

undefined8 FUN_14911b684(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14911b69e FUN_14911b69e body=6048 status=ok
// SIG undefined FUN_14911b69e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14911b69e(longlong param_1,undefined8 param_2,byte *param_3,char *param_4,float param_5,
                  float param_6,double *param_7,char param_8,ulonglong param_9,undefined8 param_10,
                  double *param_11)

{
  char cVar1;
  byte bVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined4 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auStack_4f8 [32];
  double *local_4d8;
  double *local_4d0;
  double *local_4c8;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438;
  double local_428 [2];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  float local_33c;
  double local_338 [12];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double adStack_2b0 [4];
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
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
  double *local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  local_4c8 = local_338;
  pdVar11 = param_7;
  pdVar12 = local_4c8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar12 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    pdVar12 = pdVar12 + 1;
  }
  local_4d0 = (double *)CONCAT44(local_4d0._4_4_,param_6);
  local_4d8 = (double *)CONCAT44(local_4d8._4_4_,param_5);
  FUN_14915ba82(&local_2b8,param_2,*param_3,*param_4);
  param_11[2] = adStack_2b0[1];
  *param_11 = local_2b8;
  param_11[1] = adStack_2b0[0];
  auVar29 = _DAT_149934d80;
  lVar9 = *(longlong *)(param_1 + 0x58);
  if (lVar9 == 0 || param_8 != '\x01') goto LAB_14911b7bb;
  cVar1 = *param_4;
  local_33c = param_6;
  pdVar11 = param_7;
  pdVar12 = (double *)local_3a8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar12 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    pdVar12 = pdVar12 + 1;
  }
  if (cVar1 == '\x03') {
    fVar15 = param_5 + param_5;
    if (fVar15 <= param_6) {
      if (param_6 <= fVar15) {
        param_6 = fVar15;
      }
      pdVar11 = (double *)&DAT_14c846480;
      pdVar12 = local_428;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
      }
      bVar2 = *param_3;
      if (bVar2 == 1) {
        local_428[0] = 0.0;
        local_428[1] = 0.7071067966408575;
LAB_14911b9e2:
        local_418 = ZEXT816(0x3fe6a09e5e333598) << 0x40;
      }
      else if (bVar2 == 2) {
        local_428[0] = 0.7071067966408575;
        local_428[1] = 0.0;
        goto LAB_14911b9e2;
      }
      auVar38 = *(undefined1 (*) [16])(param_7 + 8);
      dVar16 = auVar38._0_8_;
      dVar17 = auVar38._8_8_;
      auVar20 = *(undefined1 (*) [16])(param_7 + 10);
      dVar43 = auVar20._0_8_;
      auVar28._8_8_ = dStack_3e0;
      auVar28._0_8_ = local_3e8;
      auVar44._8_8_ = dStack_3d0;
      auVar44._0_8_ = local_3d8;
      auVar38 = minpd(auVar28,auVar38);
      auVar44 = minpd(auVar44,auVar20);
      auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      iVar6 = movmskpd((uint)bVar2,auVar39);
      auVar38._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
      auVar38._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
      uVar8 = movmskpd(0,auVar38);
      if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
        dVar45 = *param_7;
        dVar46 = param_7[1];
        dVar47 = param_7[2];
        dVar3 = param_7[3];
        dVar26 = param_7[3];
        dVar37 = param_7[3];
        dVar42 = *param_7 * local_428[1];
        dVar31 = *param_7 * local_428[0];
        dVar50 = param_7[1];
        dVar32 = param_7[1];
        dVar52 = local_428[0] * dVar50;
        dVar53 = local_428[1] * dVar32;
        dVar27 = param_7[2];
        dVar51 = param_7[2];
        dVar41 = local_428[0] * dVar51;
        dVar51 = (double)local_418._0_8_ * dVar51;
        local_428[0] = local_428[1] * dVar27 * -1.0 +
                       (double)local_418._0_8_ * dVar50 +
                       (double)local_418._8_8_ * *param_7 * 1.0 + local_428[0] * dVar26;
        local_428[1] = dVar41 * 1.0 +
                       (double)local_418._8_8_ * dVar32 +
                       (double)local_418._0_8_ * *param_7 * -1.0 + local_428[1] * dVar37;
        local_418._0_8_ =
             (double)local_418._8_8_ * dVar27 * 1.0 +
             ((dVar42 * 1.0 + (double)local_418._0_8_ * dVar26) - dVar52);
        local_418._8_8_ =
             dVar51 * -1.0 + ((dVar31 * -1.0 + (double)local_418._8_8_ * dVar37) - dVar53);
        dVar51 = (double)local_408._0_8_ * dVar16;
        dVar42 = (double)local_408._8_8_ * dVar17;
        local_3f8 = local_3f8 * dVar43;
        dStack_3f0 = dStack_3f0 * auVar20._8_8_;
        dVar32 = dVar42 * dVar45 - dVar46 * dVar51;
        dVar50 = local_3f8 * dVar46 - dVar47 * dVar42;
        dVar27 = dVar51 * dVar47 - dVar45 * local_3f8;
        dVar31 = dStack_3f0 * dVar3 - dVar3 * dStack_3f0;
        dVar50 = dVar50 + dVar50;
        dVar27 = dVar27 + dVar27;
        dVar32 = dVar32 + dVar32;
        dVar31 = dVar31 + dVar31;
        local_258 = (dVar32 * dVar46 - dVar47 * dVar27) + dVar26 * dVar50 + dVar51 + param_7[4];
        dStack_250 = (dVar50 * dVar47 - dVar32 * dVar45) + dVar37 * dVar27 + dVar42 + param_7[5];
        local_248 = (dVar27 * dVar45 - dVar46 * dVar50) + dVar26 * dVar32 + local_3f8 + param_7[6];
        dStack_3f0 = (dVar31 * dVar3 - dVar31 * dVar3) + dVar37 * dVar31 + dStack_3f0 + param_7[7];
        local_4a8 = auVar28;
      }
      else {
        dVar32 = *param_7;
        dVar50 = param_7[1];
        dVar27 = param_7[2];
        dVar51 = dVar50 + dVar50;
        dVar42 = dVar27 + dVar27;
        dVar26 = dVar32 * (dVar32 + dVar32);
        local_128 = (1.0 - (dVar26 + dVar50 * dVar51)) * dVar43;
        dVar37 = param_7[3];
        dVar31 = dVar42 * dVar37;
        dVar45 = (dVar32 + dVar32) * param_7[3];
        dVar37 = dVar51 * dVar37;
        local_138 = (dVar37 + *param_7 * dVar42) * dVar43;
        local_178 = (double *)
                    (((double)DAT_149934d80 - (dVar27 * dVar42 + dVar50 * dVar51)) * dVar16);
        dStack_150 = (DAT_149934d80._8_8_ - (dVar27 * dVar42 + dVar26)) * dVar17;
        dStack_170 = (dVar51 * dVar32 + dVar31) * dVar16;
        local_148 = (dVar42 * dVar50 + dVar45) * dVar17;
        local_158 = (dVar51 * dVar32 - dVar31) * dVar17;
        dStack_130 = (dVar42 * dVar50 - dVar45) * dVar43;
        local_168 = (*param_7 * dVar42 - dVar37) * dVar16;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        local_118 = param_7[4];
        dStack_110 = param_7[5];
        local_108 = param_7[6];
        uStack_100 = 0x3ff0000000000000;
        dVar26 = local_428[1] + local_428[1];
        dVar32 = (double)local_418._0_8_ + (double)local_418._0_8_;
        dVar37 = local_428[0] * (local_428[0] + local_428[0]);
        local_1a8 = (1.0 - (dVar37 + local_428[1] * dVar26)) * local_3d8;
        dVar50 = (local_428[0] + local_428[0]) * (double)local_418._8_8_;
        local_1b8 = (dVar26 * (double)local_418._8_8_ + local_428[0] * dVar32) * local_3d8;
        dStack_1b0 = (dVar32 * local_428[1] - dVar50) * local_3d8;
        local_1f8 = ((double)DAT_149934d80 -
                    ((double)local_418._0_8_ * dVar32 + local_428[1] * dVar26)) * local_3e8;
        dVar37 = (DAT_149934d80._8_8_ - ((double)local_418._0_8_ * dVar32 + dVar37)) * dStack_3e0;
        dStack_1f0 = (dVar26 * local_428[0] + dVar32 * (double)local_418._8_8_) * local_3e8;
        local_1c8 = (dVar32 * local_428[1] + dVar50) * dStack_3e0;
        local_1e8 = (local_428[0] * dVar32 - dVar26 * (double)local_418._8_8_) * local_3e8;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar37,0);
        local_1d8._0_8_ = (dVar26 * local_428[0] - dVar32 * (double)local_418._8_8_) * dStack_3e0;
        local_1d8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = (double)local_408._0_8_;
        dStack_190 = (double)local_408._8_8_;
        local_188 = local_3f8;
        uStack_180 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_2b8);
        FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
        auVar18._8_8_ = -(ulonglong)(0.0 <= dVar17 * dStack_3e0);
        auVar18._0_8_ = -(ulonglong)(0.0 <= dVar16 * local_3e8);
        auVar38 = blendvpd(_DAT_149936790,auVar29,auVar18);
        uVar13 = -(ulonglong)(0.0 <= dVar43 * local_3d8);
        dVar37 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
        dVar26 = auVar38._0_8_;
        adStack_2b0[1] = adStack_2b0[1] * dVar26;
        adStack_2b0[0] = adStack_2b0[0] * dVar26;
        local_2b8 = local_2b8 * dVar26;
        dVar26 = auVar38._8_8_;
        local_288 = local_288 * dVar26;
        local_290 = local_290 * dVar26;
        adStack_2b0[3] = dVar26 * adStack_2b0[3];
        local_268 = local_268 * dVar37;
        local_270 = local_270 * dVar37;
        local_278 = dVar37 * local_278;
        FUN_14481fd10(&local_2d8,&local_2b8);
        dVar37 = local_2c8 * local_2c8 + local_2d8 * local_2d8;
        dVar26 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
        auVar33._0_8_ = dVar37 + dVar26;
        auVar33._8_8_ = dVar37 + dVar26;
        auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
        auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
        auVar38 = sqrtpd(auVar33,auVar33);
        auVar29 = divpd(auVar29,auVar38);
        auVar48._0_8_ = auVar29._0_8_ * local_2c8;
        auVar48._8_8_ = auVar29._8_8_ * dStack_2c0;
        local_428[0] = (double)((ulonglong)(local_2d8 * auVar29._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
        local_428[1] = (double)((ulonglong)(dStack_2d0 * auVar29._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
        local_418 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar19);
        dStack_3f0 = 0.0;
      }
      dStack_3e0 = dStack_3e0 * dVar17;
      local_3e8 = local_3e8 * dVar16;
      local_3d8 = local_3d8 * dVar43;
      dStack_3d0 = dStack_3d0 * auVar20._8_8_;
      local_408._8_4_ = SUB84(dStack_250,0);
      local_408._0_8_ = local_258;
      local_408._12_4_ = (int)((ulonglong)dStack_250 >> 0x20);
      dVar17 = (double)(param_6 * 0.5 - param_5);
      dVar37 = DAT_14c8463c8 * dVar17;
      dVar50 = DAT_14c8463c0 * dVar17;
      dVar17 = dVar17 * DAT_14c8463b8;
      dVar16 = (double)param_5;
      adStack_2b0[1] = DAT_14c8463b0 * dVar16;
      adStack_2b0[0] = DAT_14c8463a8 * dVar16;
      local_2b8 = DAT_14c8463a0 * dVar16;
      local_290 = dVar37 + adStack_2b0[1];
      local_260 = dVar37 - adStack_2b0[1];
      adStack_2b0[1] = adStack_2b0[1] - dVar37;
      adStack_2b0[2] = dVar17 + local_2b8;
      local_270 = dVar17 - local_2b8;
      local_2b8 = local_2b8 - dVar17;
      adStack_2b0[3] = dVar50 + adStack_2b0[0];
      local_268 = dVar50 - adStack_2b0[0];
      adStack_2b0[0] = adStack_2b0[0] - dVar50;
      local_278 = -DAT_14c8463b0 * dVar16 - dVar37;
      local_280 = -DAT_14c8463a8 * dVar16 - dVar50;
      local_288 = -DAT_14c8463a0 * dVar16 - dVar17;
      dVar43 = DAT_14c846398 * dVar16;
      dStack_250 = DAT_14c846390 * dVar16;
      local_258 = DAT_14c846388 * dVar16;
      local_238 = dVar50 + dStack_250;
      local_208 = dVar50 - dStack_250;
      dStack_250 = dStack_250 - dVar50;
      local_240 = dVar17 + local_258;
      local_210 = dVar17 - local_258;
      local_258 = local_258 - dVar17;
      local_230 = dVar37 + dVar43;
      local_200 = dVar37 - dVar43;
      local_218 = -DAT_14c846398 * dVar16 - dVar37;
      local_220 = -DAT_14c846390 * dVar16 - dVar50;
      local_228 = -DAT_14c846388 * dVar16 - dVar17;
      dStack_170 = (double)CONCAT44(dStack_170._4_4_,8);
      local_4d8 = (double *)((ulonglong)local_4d8 & 0xffffffff00000000);
      lVar10 = lVar9;
      local_3f8 = local_248;
      local_248 = dVar43 - dVar37;
      local_178 = &local_2b8;
      uVar7 = FUN_144467784(lVar9,local_428,&local_178,&DAT_149e1dd24);
      dStack_350 = dStack_3d0;
      local_358 = local_3d8;
      dVar32 = dStack_3e0;
      dVar26 = local_3e8;
      auVar38 = _DAT_149934d80;
      local_33c = 0.0;
      local_4b8._8_8_ = 0;
      local_4b8._0_8_ = dVar37;
      local_368._8_8_ = dStack_3e0;
      local_368._0_8_ = local_3e8;
      auVar29._8_8_ = dStack_3d0;
      auVar29._0_8_ = local_3d8;
      dVar16 = (double)DAT_149934d80;
      dVar43 = DAT_149934d80._8_8_;
      auVar20 = minpd(_DAT_149934d80,local_368);
      auVar28 = minpd(ZEXT816(0x3ff0000000000000),auVar29);
      auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
      iVar6 = movmskpd(uVar7,auVar21);
      auVar20._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
      uVar8 = movmskpd((int)lVar10,auVar20);
      if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
        local_468 = (double)local_418._8_8_;
        dStack_460 = (double)local_418._8_8_;
        local_498 = (double)local_418._8_8_ * 0.0;
        dStack_490 = (double)local_418._8_8_ * 1.0;
        dVar46 = dVar17 * local_3e8;
        dVar47 = dVar50 * dStack_3e0;
        dVar37 = dVar37 * local_3d8;
        dVar42 = dStack_3d0 * 0.0;
        local_488 = (double)local_418._0_8_;
        dStack_480 = (double)local_418._8_8_;
        local_478 = local_428[0];
        dStack_470 = (double)local_418._8_8_;
        dVar31 = dVar47 * local_428[0] - dVar46 * local_428[1];
        dVar45 = dVar37 * local_428[1] - dVar47 * (double)local_418._0_8_;
        dVar27 = dVar46 * (double)local_418._0_8_ - dVar37 * local_428[0];
        dVar51 = dVar42 * (double)local_418._8_8_ - dVar42 * (double)local_418._8_8_;
        dVar45 = dVar45 + dVar45;
        dVar27 = dVar27 + dVar27;
        dVar31 = dVar31 + dVar31;
        dVar51 = dVar51 + dVar51;
        dVar26 = (double)local_418._0_8_ * 0.0 * -1.0 +
                 local_428[1] * 0.0 + local_428[0] * 1.0 * 1.0 + (double)local_418._8_8_ * 0.0;
        dVar32 = (double)local_418._0_8_ * 0.0 * 1.0 +
                 local_428[1] * 1.0 + local_428[0] * 0.0 * -1.0 + (double)local_418._8_8_ * 0.0;
        local_398._0_8_ =
             (double)local_418._0_8_ * 1.0 * 1.0 +
             ((local_428[0] * 0.0 * 1.0 + local_498) - local_428[1] * 0.0);
        local_398._8_8_ =
             (double)local_418._0_8_ * 0.0 * -1.0 +
             ((local_428[0] * 0.0 * -1.0 + dStack_490) - local_428[1] * 0.0);
        dStack_370 = (dVar51 * (double)local_418._8_8_ - dVar51 * (double)local_418._8_8_) +
                     (double)local_418._8_8_ * dVar51 + dVar42 + dStack_3f0;
        local_378 = (dVar27 * local_428[0] - local_428[1] * dVar45) +
                    (double)local_418._8_8_ * dVar31 + dVar37 + local_3f8;
        local_388 = (dVar31 * local_428[1] - (double)local_418._0_8_ * dVar27) +
                    (double)local_418._8_8_ * dVar45 + dVar46 + (double)local_408._0_8_;
        dStack_380 = (dVar45 * (double)local_418._0_8_ - dVar31 * local_428[0]) +
                     (double)local_418._8_8_ * dVar27 + dVar47 + (double)local_408._8_8_;
        local_4a8 = local_368;
        local_458 = auVar29;
      }
      else {
        dVar27 = local_428[1] + local_428[1];
        dVar51 = (double)local_418._0_8_ + (double)local_418._0_8_;
        dVar31 = local_428[0] * (local_428[0] + local_428[0]);
        local_178 = (double *)
                    ((dVar16 - ((double)local_418._0_8_ * dVar51 + local_428[1] * dVar27)) *
                    local_3e8);
        dStack_150 = (dVar43 - ((double)local_418._0_8_ * dVar51 + dVar31)) * dStack_3e0;
        dVar42 = (local_428[0] + local_428[0]) * (double)local_418._8_8_;
        local_158 = (dVar27 * local_428[0] - dVar51 * (double)local_418._8_8_) * dStack_3e0;
        dStack_130 = (dVar51 * local_428[1] - dVar42) * local_3d8;
        local_138 = (dVar27 * (double)local_418._8_8_ + local_428[0] * dVar51) * local_3d8;
        dStack_170 = (dVar27 * local_428[0] + dVar51 * (double)local_418._8_8_) * local_3e8;
        local_148 = (dVar51 * local_428[1] + dVar42) * dStack_3e0;
        local_168 = (local_428[0] * dVar51 - dVar27 * (double)local_418._8_8_) * local_3e8;
        uStack_160 = 0;
        uStack_140 = 0;
        local_128 = (1.0 - (dVar31 + local_428[1] * dVar27)) * local_3d8;
        uStack_120 = 0;
        local_118 = (double)local_408._0_8_;
        dStack_110 = (double)local_408._8_8_;
        local_108 = local_3f8;
        uStack_100 = 0x3ff0000000000000;
        local_1f8 = 1.0;
        dStack_1f0 = 0.0;
        local_1e8 = 0.0;
        uStack_1e0 = 0;
        local_1c8 = 0.0;
        uStack_1c0 = 0;
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1a8 = 1.0;
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        dVar27 = local_3d8 * 1.0;
        local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_198 = dVar17;
        dStack_190 = dVar50;
        local_188 = dVar37;
        FUN_1447fea8d(&local_2b8);
        FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
        auVar22._8_8_ = -(ulonglong)(0.0 <= dVar32);
        auVar22._0_8_ = -(ulonglong)(0.0 <= dVar26);
        auVar29 = blendvpd(_DAT_149936790,auVar38,auVar22);
        uVar13 = -(ulonglong)(0.0 <= dVar27);
        dVar37 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
        dVar26 = auVar29._0_8_;
        adStack_2b0[1] = adStack_2b0[1] * dVar26;
        adStack_2b0[0] = adStack_2b0[0] * dVar26;
        local_2b8 = local_2b8 * dVar26;
        dVar26 = auVar29._8_8_;
        local_288 = local_288 * dVar26;
        local_290 = local_290 * dVar26;
        adStack_2b0[3] = dVar26 * adStack_2b0[3];
        local_268 = local_268 * dVar37;
        local_270 = local_270 * dVar37;
        local_278 = dVar37 * local_278;
        FUN_14481fd10(&local_2d8,&local_2b8);
        dVar37 = local_2c8 * local_2c8 + local_2d8 * local_2d8;
        dVar26 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
        auVar34._0_8_ = dVar37 + dVar26;
        auVar34._8_8_ = dVar37 + dVar26;
        auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
        auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
        auVar29 = sqrtpd(auVar34,auVar34);
        auVar29 = divpd(auVar38,auVar29);
        auVar40._0_8_ = auVar29._0_8_ * local_2c8;
        auVar40._8_8_ = auVar29._8_8_ * dStack_2c0;
        dVar26 = (double)((ulonglong)(local_2d8 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
        dVar32 = (double)((ulonglong)(dStack_2d0 * auVar29._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
        local_398 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar23);
        dStack_370 = 0.0;
        local_378 = local_248;
        local_388 = local_258;
        dStack_380 = dStack_250;
      }
      local_358 = local_358 * 1.0;
      dStack_350 = dStack_350 * 0.0;
      pdVar11 = (double *)local_3a8;
      pdVar12 = adStack_2b0;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
      }
      local_3a8._8_4_ = SUB84(dVar32,0);
      local_3a8._0_8_ = dVar26;
      local_3a8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      uVar7 = FUN_1491278d8(lVar9);
      dVar27 = dStack_3d0;
      dVar32 = local_3d8;
      dVar26 = dStack_3e0;
      dVar37 = local_3e8;
      pdVar11 = adStack_2b0;
      pdVar12 = (double *)local_3a8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
      }
      auVar4._8_8_ = dStack_3e0;
      auVar4._0_8_ = local_3e8;
      uVar49 = SUB84(dStack_3e0,0);
      uVar13 = (ulonglong)dStack_3e0 >> 0x20;
      auVar5._8_8_ = dStack_3d0;
      auVar5._0_8_ = local_3d8;
      auVar29 = minpd(auVar38,auVar4);
      auVar20 = minpd(ZEXT816(0x3ff0000000000000),auVar5);
      auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar6 = movmskpd(uVar7,auVar30);
      auVar35._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
      uVar8 = movmskpd(0,auVar35);
      if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
        local_498 = -dVar17 * local_3e8;
        dStack_490 = -dVar50 * dStack_3e0;
        dVar17 = -(double)local_4b8._0_8_ * local_3d8;
        dVar26 = dStack_3d0 * 0.0;
        dVar42 = dStack_490 * local_428[0] - local_498 * local_428[1];
        dVar31 = dVar17 * local_428[1] - dStack_490 * (double)local_418._0_8_;
        dVar50 = local_498 * (double)local_418._0_8_ - dVar17 * local_428[0];
        dVar51 = dVar26 * (double)local_418._8_8_ - dVar26 * (double)local_418._8_8_;
        dVar31 = dVar31 + dVar31;
        dVar50 = dVar50 + dVar50;
        dVar42 = dVar42 + dVar42;
        dVar51 = dVar51 + dVar51;
        dVar16 = (double)local_418._0_8_ * 0.0 * -1.0 +
                 local_428[1] * 0.0 + local_428[0] * 1.0 * 1.0 + (double)local_418._8_8_ * 0.0;
        dVar43 = (double)local_418._0_8_ * 0.0 * 1.0 +
                 local_428[1] * 1.0 + local_428[0] * 0.0 * -1.0 + (double)local_418._8_8_ * 0.0;
        local_398._0_8_ =
             (double)local_418._0_8_ * 1.0 * 1.0 +
             ((local_428[0] * 0.0 * 1.0 + (double)local_418._8_8_ * 0.0) - local_428[1] * 0.0);
        local_398._8_8_ =
             (double)local_418._0_8_ * 0.0 * -1.0 +
             ((local_428[0] * 0.0 * -1.0 + (double)local_418._8_8_ * 1.0) - local_428[1] * 0.0);
        dStack_370 = (dVar51 * (double)local_418._8_8_ - dVar51 * (double)local_418._8_8_) +
                     (double)local_418._8_8_ * dVar51 + dVar26 + dStack_3f0;
        local_378 = (dVar50 * local_428[0] - local_428[1] * dVar31) +
                    (double)local_418._8_8_ * dVar42 + dVar17 + local_3f8;
        local_388 = (dVar42 * local_428[1] - (double)local_418._0_8_ * dVar50) +
                    (double)local_418._8_8_ * dVar31 + local_498 + (double)local_408._0_8_;
        dStack_380 = (dVar31 * (double)local_418._0_8_ - dVar42 * local_428[0]) +
                     (double)local_418._8_8_ * dVar50 + dStack_490 + (double)local_408._8_8_;
        local_4b8 = auVar4;
        local_4a8 = auVar5;
      }
      else {
        dVar51 = local_428[1] + local_428[1];
        dVar42 = (double)local_418._0_8_ + (double)local_418._0_8_;
        dVar31 = local_428[0] * (local_428[0] + local_428[0]);
        local_178 = (double *)
                    ((dVar16 - ((double)local_418._0_8_ * dVar42 + local_428[1] * dVar51)) *
                    local_3e8);
        dStack_150 = (dVar43 - ((double)local_418._0_8_ * dVar42 + dVar31)) * dStack_3e0;
        dVar16 = (local_428[0] + local_428[0]) * (double)local_418._8_8_;
        local_158 = (dVar51 * local_428[0] - dVar42 * (double)local_418._8_8_) * dStack_3e0;
        dStack_130 = (dVar42 * local_428[1] - dVar16) * local_3d8;
        local_138 = (dVar51 * (double)local_418._8_8_ + local_428[0] * dVar42) * local_3d8;
        dStack_170 = (dVar51 * local_428[0] + dVar42 * (double)local_418._8_8_) * local_3e8;
        local_148 = (dVar42 * local_428[1] + dVar16) * dStack_3e0;
        local_168 = (local_428[0] * dVar42 - dVar51 * (double)local_418._8_8_) * local_3e8;
        uStack_160 = 0;
        uStack_140 = 0;
        local_128 = (1.0 - (dVar31 + local_428[1] * dVar51)) * local_3d8;
        uStack_120 = 0;
        local_118 = (double)local_408._0_8_;
        dStack_110 = (double)local_408._8_8_;
        local_108 = local_3f8;
        uStack_100 = 0x3ff0000000000000;
        local_1f8 = 1.0;
        dStack_1f0 = 0.0;
        local_1e8 = 0.0;
        uStack_1e0 = 0;
        local_1c8 = 0.0;
        uStack_1c0 = 0;
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1a8 = 1.0;
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        dVar16 = local_3d8 * 1.0;
        local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_198 = -dVar17;
        dStack_190 = -dVar50;
        local_188 = -(double)local_4b8._0_8_;
        FUN_1447fea8d(&local_2b8);
        FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar26);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar37);
        auVar29 = blendvpd(_DAT_149936790,auVar38,auVar24);
        uVar14 = -(ulonglong)(0.0 <= dVar16);
        dVar16 = (double)(~uVar14 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar14 >> 0x20) & 0x3ff00000) << 0x20);
        dVar43 = auVar29._0_8_;
        adStack_2b0[1] = adStack_2b0[1] * dVar43;
        adStack_2b0[0] = adStack_2b0[0] * dVar43;
        local_2b8 = local_2b8 * dVar43;
        dVar43 = auVar29._8_8_;
        local_288 = local_288 * dVar43;
        local_290 = local_290 * dVar43;
        adStack_2b0[3] = dVar43 * adStack_2b0[3];
        local_268 = local_268 * dVar16;
        local_270 = local_270 * dVar16;
        local_278 = dVar16 * local_278;
        FUN_14481fd10(&local_2d8,&local_2b8);
        dVar16 = local_2c8 * local_2c8 + local_2d8 * local_2d8;
        dVar43 = dStack_2c0 * dStack_2c0 + dStack_2d0 * dStack_2d0;
        auVar36._0_8_ = dVar16 + dVar43;
        auVar36._8_8_ = dVar16 + dVar43;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar29 = sqrtpd(auVar36,auVar36);
        auVar29 = divpd(auVar38,auVar29);
        auVar54._0_8_ = auVar29._0_8_ * local_2c8;
        auVar54._8_8_ = auVar29._8_8_ * dStack_2c0;
        dVar16 = (double)((ulonglong)(local_2d8 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
        dVar43 = (double)((ulonglong)(dStack_2d0 * auVar29._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        local_398 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar25);
        dStack_370 = 0.0;
        local_378 = local_248;
        local_388 = local_258;
        dStack_380 = dStack_250;
      }
      local_358 = dVar32 * 1.0;
      dStack_350 = dVar27 * 0.0;
      pdVar11 = (double *)local_3a8;
      pdVar12 = adStack_2b0;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
      }
      local_3a8._8_4_ = SUB84(dVar43,0);
      local_3a8._0_8_ = dVar16;
      local_3a8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
      local_368._8_4_ = uVar49;
      local_368._0_8_ = dVar37;
      local_368._12_4_ = (int)uVar13;
      FUN_1491278d8(lVar9);
      pdVar11 = adStack_2b0;
      pdVar12 = (double *)local_3a8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
      }
    }
    else {
      local_33c = 0.0;
      FUN_1491278d8(lVar9,3,&local_33c,local_3a8);
    }
  }
  else if (cVar1 == '\x01') {
    local_438 = param_11[2];
    local_4d0 = &local_448;
    local_448 = *param_11;
    dStack_440 = param_11[1];
    local_4d8 = (double *)local_3a8;
    FUN_149124924(lVar9,*param_3,local_4d0,&local_33c);
  }
  else if (cVar1 == '\0') {
    local_3b8 = param_11[2];
    local_4d0 = &local_3c8;
    local_3c8 = *param_11;
    dStack_3c0 = param_11[1];
    local_4d8 = (double *)local_3a8;
    FUN_149122189(lVar9,*param_3,local_4d0,&local_33c);
  }
  else {
    FUN_1491278d8(lVar9,cVar1,&local_33c,local_3a8);
  }
  local_4d8 = (double *)param_9;
  FUN_144467456(lVar9,&DAT_14c846480,param_11);
LAB_14911b7bb:
  if ((local_f0 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14911ce6e FUN_14911ce6e body=242 status=ok
// SIG undefined FUN_14911ce6e(void)

void FUN_14911ce6e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x18) = (double)*(float *)(param_1 + 8);
  *(double *)(param_1 + 0x20) = (double)*(float *)(param_1 + 0xc);
  *(double *)(param_1 + 0x28) = (double)*(float *)(param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911cf80 FUN_14911cf80 body=232 status=ok
// SIG undefined FUN_14911cf80(void)

void FUN_14911cf80(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)*(float *)(param_1 + 8);
  *(double *)(param_1 + 0x10) = dVar1;
  *(double *)(param_1 + 0x18) = dVar1;
  *(double *)(param_1 + 0x20) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d08c FUN_14911d08c body=236 status=ok
// SIG undefined FUN_14911d08c(void)

void FUN_14911d08c(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)(float)*(double *)(param_1 + 8);
  *(double *)(param_1 + 0x10) = dVar1;
  *(double *)(param_1 + 0x18) = dVar1;
  *(double *)(param_1 + 0x20) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d1b4 FUN_14911d1b4 body=254 status=ok
// SIG undefined FUN_14911d1b4(void)

void FUN_14911d1b4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x30);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d2ee FUN_14911d2ee body=254 status=ok
// SIG undefined FUN_14911d2ee(void)

void FUN_14911d2ee(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d428 FUN_14911d428 body=254 status=ok
// SIG undefined FUN_14911d428(void)

void FUN_14911d428(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x30);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d560 FUN_14911d560 body=255 status=ok
// SIG undefined FUN_14911d560(void)

void FUN_14911d560(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)*(float *)(param_1 + 0x20);
  *(double *)(param_1 + 0x28) = dVar1 * *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x10) * dVar1;
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x18) * dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d6fa FUN_14911d6fa body=356 status=ok
// SIG undefined FUN_14911d6fa(void)

void FUN_14911d6fa(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = local_c8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (((ABS(*(double *)(param_1 + 0x20)) <= 1e-08) || (ABS(*(double *)(param_1 + 0x28)) <= 1e-08))
     || (ABS(*(double *)(param_1 + 0x30)) <= 1e-08)) {
    *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x38) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  else {
    *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) / *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x28);
    *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) / *(double *)(param_1 + 0x30);
  }
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d874 FUN_14911d874 body=229 status=ok
// SIG undefined FUN_14911d874(void)

void FUN_14911d874(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14911d95a(param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911d95a FUN_14911d95a body=206 status=ok
// SIG undefined FUN_14911d95a(void)

void FUN_14911d95a(undefined8 *param_1,double *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((((ABS(*param_2) <= 1e-08) || (ABS(param_2[1]) <= 1e-08)) || (ABS(param_2[2]) <= 1e-08)) ||
     (((*param_2 < 0.0 || (param_2[1] < 0.0)) || (param_2[2] < 0.0)))) {
    param_3[2] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = uVar1;
  }
  else {
    uVar1 = FUN_144719204((int)*param_1);
    *param_3 = uVar1;
    uVar1 = FUN_144719204((int)param_1[1],param_2[1]);
    param_3[1] = uVar1;
    uVar1 = FUN_144719204((int)param_1[2],param_2[2]);
    param_3[2] = uVar1;
  }
  return;
}



// FUNCTION 14911da74 FUN_14911da74 body=275 status=ok
// SIG undefined FUN_14911da74(void)

void FUN_14911da74(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)(float)*(double *)(param_1 + 8);
  if (*(double *)(param_1 + 0x20) <= (double)(float)*(double *)(param_1 + 8)) {
    dVar1 = *(double *)(param_1 + 0x20);
  }
  *(double *)(param_1 + 0x38) = dVar1;
  dVar1 = (double)(float)*(double *)(param_1 + 0x10);
  if (*(double *)(param_1 + 0x28) <= (double)(float)*(double *)(param_1 + 0x10)) {
    dVar1 = *(double *)(param_1 + 0x28);
  }
  *(double *)(param_1 + 0x40) = dVar1;
  dVar1 = (double)(float)*(double *)(param_1 + 0x18);
  if (*(double *)(param_1 + 0x30) <= (double)(float)*(double *)(param_1 + 0x18)) {
    dVar1 = *(double *)(param_1 + 0x30);
  }
  *(double *)(param_1 + 0x48) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911dbd4 FUN_14911dbd4 body=275 status=ok
// SIG undefined FUN_14911dbd4(void)

void FUN_14911dbd4(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)(float)*(double *)(param_1 + 8);
  if ((double)(float)*(double *)(param_1 + 8) <= *(double *)(param_1 + 0x20)) {
    dVar1 = *(double *)(param_1 + 0x20);
  }
  *(double *)(param_1 + 0x38) = dVar1;
  dVar1 = (double)(float)*(double *)(param_1 + 0x10);
  if ((double)(float)*(double *)(param_1 + 0x10) <= *(double *)(param_1 + 0x28)) {
    dVar1 = *(double *)(param_1 + 0x28);
  }
  *(double *)(param_1 + 0x40) = dVar1;
  dVar1 = (double)(float)*(double *)(param_1 + 0x18);
  if ((double)(float)*(double *)(param_1 + 0x18) <= *(double *)(param_1 + 0x30)) {
    dVar1 = *(double *)(param_1 + 0x30);
  }
  *(double *)(param_1 + 0x48) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911dd10 FUN_14911dd10 body=239 status=ok
// SIG undefined FUN_14911dd10(void)

void FUN_14911dd10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xc) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x14) ^ 0x80000000;
  *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x18) ^ 0x8000000000000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911de34 FUN_14911de34 body=239 status=ok
// SIG undefined FUN_14911de34(void)

void FUN_14911de34(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xc) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x14) & 0x7fffffff;
  *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x18) & 0x7fffffffffffffff;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911df5e FUN_14911df5e body=256 status=ok
// SIG undefined FUN_14911df5e(void)

void FUN_14911df5e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(param_1 + 8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulonglong *)(param_1 + 0x10);
  auVar4 = roundpd(auVar5,auVar5,1);
  *(longlong *)(param_1 + 0x20) = auVar4._0_8_;
  auVar5 = roundpd(auVar4,auVar6,1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(param_1 + 0x18);
  auVar4 = roundpd(auVar6,auVar4,1);
  *(longlong *)(param_1 + 0x28) = auVar5._0_8_;
  *(longlong *)(param_1 + 0x30) = auVar4._0_8_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e09a FUN_14911e09a body=256 status=ok
// SIG undefined FUN_14911e09a(void)

void FUN_14911e09a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(param_1 + 8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulonglong *)(param_1 + 0x10);
  auVar4 = roundpd(auVar5,auVar5,2);
  *(longlong *)(param_1 + 0x20) = auVar4._0_8_;
  auVar5 = roundpd(auVar4,auVar6,2);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(param_1 + 0x18);
  auVar4 = roundpd(auVar6,auVar4,2);
  *(longlong *)(param_1 + 0x28) = auVar5._0_8_;
  *(longlong *)(param_1 + 0x30) = auVar4._0_8_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e1f2 FUN_14911e1f2 body=284 status=ok
// SIG undefined FUN_14911e1f2(void)

void FUN_14911e1f2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  auVar4._0_8_ = *(double *)(param_1 + 8) + 0.5;
  auVar4._8_8_ = 0;
  auVar5 = roundpd(auVar4,auVar4,1);
  *(longlong *)(param_1 + 0x20) = auVar5._0_8_;
  auVar6._0_8_ = *(double *)(param_1 + 0x10) + 0.5;
  auVar6._8_8_ = 0;
  auVar4 = roundpd(auVar6,auVar6,1);
  auVar5._0_8_ = *(double *)(param_1 + 0x18) + 0.5;
  auVar5._8_8_ = 0;
  auVar5 = roundpd(auVar5,auVar5,1);
  *(longlong *)(param_1 + 0x28) = auVar4._0_8_;
  *(longlong *)(param_1 + 0x30) = auVar5._0_8_;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e382 FUN_14911e382 body=323 status=ok
// SIG undefined FUN_14911e382(void)

void FUN_14911e382(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar4 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x18));
  uVar5 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x10));
  uVar6 = -(ulonglong)(0.0 <= *(double *)(param_1 + 8));
  *(ulonglong *)(param_1 + 0x20) = ~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000;
  *(ulonglong *)(param_1 + 0x28) = ~uVar5 & 0xbff0000000000000 | uVar5 & 0x3ff0000000000000;
  *(ulonglong *)(param_1 + 0x30) = ~uVar4 & 0xbff0000000000000 | uVar4 & 0x3ff0000000000000;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e526 FUN_14911e526 body=290 status=ok
// SIG undefined FUN_14911e526(void)

void FUN_14911e526(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = (double)(float)*(double *)(param_1 + 8);
  if (*(double *)(param_1 + 0x38) <= (double)(float)*(double *)(param_1 + 8)) {
    dVar1 = *(double *)(param_1 + 0x38);
  }
  if (dVar1 <= *(double *)(param_1 + 0x20)) {
    dVar1 = *(double *)(param_1 + 0x20);
  }
  *(double *)(param_1 + 0x50) = dVar1;
  dVar1 = (double)(float)*(double *)(param_1 + 0x10);
  if (*(double *)(param_1 + 0x40) <= (double)(float)*(double *)(param_1 + 0x10)) {
    dVar1 = *(double *)(param_1 + 0x40);
  }
  if (dVar1 <= *(double *)(param_1 + 0x28)) {
    dVar1 = *(double *)(param_1 + 0x28);
  }
  *(double *)(param_1 + 0x58) = dVar1;
  dVar1 = (double)(float)*(double *)(param_1 + 0x18);
  if (*(double *)(param_1 + 0x48) <= (double)(float)*(double *)(param_1 + 0x18)) {
    dVar1 = *(double *)(param_1 + 0x48);
  }
  if (dVar1 <= *(double *)(param_1 + 0x30)) {
    dVar1 = *(double *)(param_1 + 0x30);
  }
  *(double *)(param_1 + 0x60) = dVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e64a FUN_14911e64a body=121 status=ok
// SIG undefined FUN_14911e64a(void)

void FUN_14911e64a(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  
  param_2 = (undefined8 *)*param_2;
  pdVar5 = (double *)*param_2;
  pdVar6 = (double *)param_2[4];
  pdVar7 = (double *)param_2[0xc];
  dVar1 = pdVar6[2];
  dVar2 = pdVar5[2];
  dVar3 = pdVar6[1];
  dVar4 = pdVar5[1];
  dVar8 = (double)*(float *)param_2[8];
  *pdVar7 = (*pdVar6 - *pdVar5) * dVar8 + *pdVar5;
  pdVar7[1] = (dVar3 - dVar4) * dVar8 + dVar4;
  pdVar7[2] = (dVar1 - dVar2) * dVar8 + dVar2;
  return;
}



// FUNCTION 14911e6c4 FUN_14911e6c4 body=314 status=ok
// SIG undefined FUN_14911e6c4(void)

void FUN_14911e6c4(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_d8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  dVar1 = (double)*(float *)(param_1 + 0x38);
  *(double *)(param_1 + 0x40) =
       (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 8)) * dVar1 + *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x48) =
       (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10)) * dVar1 +
       *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x50) =
       (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18)) * dVar1 +
       *(double *)(param_1 + 0x18);
  FUN_140f8ceac(&local_148);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e800 FUN_14911e800 body=72 status=ok
// SIG undefined FUN_14911e800(void)

void FUN_14911e800(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14911e95a(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],*(undefined1 *)puVar1[0x14],
                puVar1[0x18]);
  return;
}



// FUNCTION 14911e850 FUN_14911e850 body=264 status=ok
// SIG undefined FUN_14911e850(void)

void FUN_14911e850(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x88;
  local_150 = *(undefined1 *)(param_1 + 0x80);
  local_158 = param_1 + 0x68;
  FUN_14911e95a(param_1 + 8,param_1 + 0x20,param_1 + 0x38,param_1 + 0x50);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911e95a FUN_14911e95a body=386 status=ok
// SIG undefined FUN_14911e95a(void)

void FUN_14911e95a(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  char param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  
  dVar1 = *param_2;
  dVar6 = 0.0;
  if (1e-08 < ABS(dVar1 - *param_3)) {
    dVar2 = param_2[1];
    if (1e-08 < ABS(dVar2 - param_3[1])) {
      dVar3 = param_2[2];
      dVar7 = 0.0;
      dVar9 = 0.0;
      if (1e-08 < ABS(dVar3 - param_3[2])) {
        dVar9 = (param_1[2] - dVar3) / (param_3[2] - dVar3);
        dVar7 = (param_1[1] - dVar2) / (param_3[1] - dVar2);
        dVar6 = (*param_1 - dVar1) / (*param_3 - dVar1);
      }
      goto LAB_14911ea2d;
    }
  }
  dVar7 = 0.0;
  dVar9 = 0.0;
LAB_14911ea2d:
  if (param_6 != '\0') {
    fVar5 = (float)dVar6;
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    dVar6 = (double)fVar5;
    fVar5 = (float)dVar7;
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar8 = (float)dVar9;
    dVar7 = (double)fVar5;
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    dVar9 = (double)fVar8;
  }
  dVar1 = param_5[2];
  dVar2 = param_4[2];
  dVar3 = param_5[1];
  dVar4 = param_4[1];
  *param_7 = (*param_5 - *param_4) * dVar6 + *param_4;
  param_7[1] = (dVar3 - dVar4) * dVar7 + dVar4;
  param_7[2] = (dVar1 - dVar2) * dVar9 + dVar2;
  return;
}



// FUNCTION 14911eb24 FUN_14911eb24 body=262 status=ok
// SIG undefined FUN_14911eb24(void)

void FUN_14911eb24(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if ((*(double *)(param_1 + 8) == *(double *)(param_1 + 0x20)) &&
     (!NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_1 + 0x20)))) {
    if ((*(double *)(param_1 + 0x10) == *(double *)(param_1 + 0x28)) &&
       (!NAN(*(double *)(param_1 + 0x10)) && !NAN(*(double *)(param_1 + 0x28)))) {
      bVar1 = -(*(double *)(param_1 + 0x30) == *(double *)(param_1 + 0x18)) & 1;
      goto LAB_14911ebf9;
    }
  }
  bVar1 = 0;
LAB_14911ebf9:
  *(byte *)(param_1 + 0x38) = bVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ec78 FUN_14911ec78 body=262 status=ok
// SIG undefined FUN_14911ec78(void)

void FUN_14911ec78(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  bVar1 = 1;
  if ((*(double *)(param_1 + 8) == *(double *)(param_1 + 0x20)) &&
     (!NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_1 + 0x20)))) {
    if ((*(double *)(param_1 + 0x10) == *(double *)(param_1 + 0x28)) &&
       (!NAN(*(double *)(param_1 + 0x10)) && !NAN(*(double *)(param_1 + 0x28)))) {
      bVar1 = -(*(double *)(param_1 + 0x30) != *(double *)(param_1 + 0x18)) & 1;
    }
  }
  *(byte *)(param_1 + 0x38) = bVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ede4 FUN_14911ede4 body=290 status=ok
// SIG undefined FUN_14911ede4(void)

void FUN_14911ede4(longlong param_1)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar6 = *(float *)(param_1 + 0x20);
  if (fVar6 <= 1e-08) {
    fVar6 = 1e-08;
  }
  dVar1 = (double)fVar6;
  if ((dVar1 < ABS(*(double *)(param_1 + 8))) || (dVar1 < ABS(*(double *)(param_1 + 0x10)))) {
    bVar2 = false;
  }
  else {
    bVar2 = ABS(*(double *)(param_1 + 0x18)) <= dVar1;
  }
  *(bool *)(param_1 + 0x24) = bVar2;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ef80 FUN_14911ef80 body=217 status=ok
// SIG undefined FUN_14911ef80(void)

void FUN_14911ef80(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14911f05a(param_1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f05a FUN_14911f05a body=96 status=ok
// SIG undefined FUN_14911f05a(void)

void FUN_14911f05a(longlong param_1)

{
  bool bVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *(float *)(param_1 + 0x38);
  if (fVar2 <= 1e-08) {
    fVar2 = 1e-08;
  }
  dVar3 = (double)fVar2;
  bVar1 = false;
  if ((ABS(*(double *)(param_1 + 8) - *(double *)(param_1 + 0x20)) <= dVar3) &&
     (bVar1 = false, ABS(*(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x28)) <= dVar3)) {
    bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30)) <= dVar3;
  }
  *(bool *)(param_1 + 0x3c) = bVar1;
  return;
}



// FUNCTION 14911f0e8 FUN_14911f0e8 body=240 status=ok
// SIG undefined FUN_14911f0e8(void)

void FUN_14911f0e8(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = local_c8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  puVar4 = (undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 8) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x10);
  }
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x40) = *puVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(puVar4 + 4);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f212 FUN_14911f212 body=255 status=ok
// SIG undefined FUN_14911f212(void)

void FUN_14911f212(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 8) * 57.2957763671875;
  *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x10) * 57.2957763671875;
  *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x18) * 57.2957763671875;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f34a FUN_14911f34a body=255 status=ok
// SIG undefined FUN_14911f34a(void)

void FUN_14911f34a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 8) * 0.01745329238474369;
  *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x10) * 0.01745329238474369;
  *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x18) * 0.01745329238474369;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f482 FUN_14911f482 body=256 status=ok
// SIG undefined FUN_14911f482(void)

void FUN_14911f482(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x20) =
       (float)(*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x18) +
              *(double *)(param_1 + 8) * *(double *)(param_1 + 8) +
              *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f5c0 FUN_14911f5c0 body=260 status=ok
// SIG undefined FUN_14911f5c0(void)

void FUN_14911f5c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x20) =
       (float)SQRT(*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x18) +
                   *(double *)(param_1 + 8) * *(double *)(param_1 + 8) +
                   *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f712 FUN_14911f712 body=272 status=ok
// SIG undefined FUN_14911f712(void)

void FUN_14911f712(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  dVar1 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 8);
  dVar6 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18);
  *(float *)(param_1 + 0x38) = (float)SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911f824 FUN_14911f824 body=117 status=ok
// SIG undefined FUN_14911f824(void)

void FUN_14911f824(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  
  param_2 = (undefined8 *)*param_2;
  pdVar7 = (double *)*param_2;
  pdVar8 = (double *)param_2[4];
  pdVar9 = (double *)param_2[8];
  dVar1 = *pdVar8;
  dVar2 = pdVar8[1];
  dVar3 = *pdVar7;
  dVar4 = pdVar7[1];
  dVar5 = pdVar7[2];
  dVar6 = pdVar8[2];
  *pdVar9 = dVar4 * dVar6 - dVar2 * dVar5;
  pdVar9[1] = dVar1 * dVar5 - dVar3 * dVar6;
  pdVar9[2] = dVar3 * dVar2 - dVar1 * dVar4;
  return;
}



// FUNCTION 14911f89a FUN_14911f89a body=314 status=ok
// SIG undefined FUN_14911f89a(void)

void FUN_14911f89a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  *(double *)(param_1 + 0x38) =
       *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x30) -
       *(double *)(param_1 + 0x28) * *(double *)(param_1 + 0x18);
  *(double *)(param_1 + 0x40) =
       *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x18) -
       *(double *)(param_1 + 8) * *(double *)(param_1 + 0x30);
  *(double *)(param_1 + 0x48) =
       *(double *)(param_1 + 8) * *(double *)(param_1 + 0x28) -
       *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x10);
  FUN_140f8ceac(&local_148);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911fa14 FUN_14911fa14 body=259 status=ok
// SIG undefined FUN_14911fa14(void)

void FUN_14911fa14(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(float *)(param_1 + 0x38) =
       (float)(*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x30) +
              *(double *)(param_1 + 8) * *(double *)(param_1 + 0x20) +
              *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x28));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911fb28 FUN_14911fb28 body=225 status=ok
// SIG undefined FUN_14911fb28(void)

void FUN_14911fb28(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14911fc0a(param_1 + 8,param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911fc0a FUN_14911fc0a body=165 status=ok
// SIG undefined FUN_14911fc0a(void)

void FUN_14911fc0a(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  if (((ABS(dVar1) <= 9.999999747378752e-05) && (ABS(dVar2) <= 9.999999747378752e-05)) &&
     (ABS(dVar3) <= 9.999999747378752e-05)) {
    param_2[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar1;
    return;
  }
  dVar4 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  *param_2 = dVar4 * dVar1;
  param_2[1] = dVar2 * dVar4;
  param_2[2] = dVar3 * dVar4;
  return;
}



// FUNCTION 14911fcc8 FUN_14911fcc8 body=230 status=ok
// SIG undefined FUN_14911fcc8(void)

void FUN_14911fcc8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14911fdb0(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x28);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911fdb0 FUN_14911fdb0 body=205 status=ok
// SIG undefined FUN_14911fdb0(void)

void FUN_14911fdb0(double *param_1,float param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  if (((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(dVar2))) ||
     (9.999999747378752e-05 < ABS(dVar3))) {
    dVar5 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    dVar4 = (double)param_2;
    *param_3 = dVar5 * dVar1 * dVar4;
    param_3[1] = dVar2 * dVar5 * dVar4;
    param_3[2] = dVar3 * dVar5 * dVar4;
  }
  else {
    param_3[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = dVar1;
  }
  return;
}



// FUNCTION 14911fe9e FUN_14911fe9e body=235 status=ok
// SIG undefined FUN_14911fe9e(void)

void FUN_14911fe9e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14911ff8a(param_1 + 8,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                param_1 + 0x28);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14911ff8a FUN_14911ff8a body=237 status=ok
// SIG undefined FUN_14911ff8a(void)

void FUN_14911ff8a(double *param_1,float param_2,float param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  if (((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(dVar2))) ||
     (9.999999747378752e-05 < ABS(dVar3))) {
    fVar6 = (float)SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    fVar7 = fVar6;
    if (param_3 <= fVar6) {
      fVar7 = param_3;
    }
    if (fVar7 <= param_2) {
      fVar7 = param_2;
    }
    dVar4 = (double)fVar7;
    dVar5 = 1.0 / (double)fVar6;
    *param_4 = dVar5 * dVar1 * dVar4;
    param_4[1] = dVar2 * dVar4 * dVar5;
    param_4[2] = dVar3 * dVar4 * dVar5;
  }
  else {
    param_4[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_4 = DAT_14c8464e0;
    param_4[1] = dVar1;
  }
  return;
}



// FUNCTION 14912008c FUN_14912008c body=229 status=ok
// SIG undefined FUN_14912008c(void)

void FUN_14912008c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149120172(param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149120172 FUN_149120172 body=337 status=ok
// SIG undefined FUN_149120172(void)

void FUN_149120172(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  if (((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(dVar2))) ||
     (9.999999747378752e-05 < ABS(dVar3))) {
    dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (((dVar7 != 1.0) || (dVar4 = dVar2, dVar5 = dVar1, dVar6 = dVar3, NAN(dVar7))) &&
       (dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar7)) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar4 = dVar2 * dVar7;
      dVar5 = dVar1 * dVar7;
      dVar6 = dVar3 * dVar7;
    }
    dVar1 = param_1[1];
    dVar2 = param_1[2];
    dVar3 = dVar2 * dVar6 + *param_1 * dVar5 + dVar4 * dVar1;
    dVar3 = dVar3 + dVar3;
    *param_3 = *param_1 - dVar3 * dVar5;
    param_3[1] = dVar1 - dVar4 * dVar3;
    param_3[2] = dVar2 - dVar6 * dVar3;
  }
  else {
    param_3[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = dVar1;
  }
  return;
}



// FUNCTION 1491202d8 FUN_1491202d8 body=229 status=ok
// SIG undefined FUN_1491202d8(void)

void FUN_1491202d8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491203be(param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491203be FUN_1491203be body=269 status=ok
// SIG undefined FUN_1491203be(void)

void FUN_1491203be(double *param_1,double *param_2,float *param_3)

{
  double dVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((ABS(*param_1) <= 9.999999747378752e-05) && (ABS(param_1[1]) <= 9.999999747378752e-05)) &&
      (ABS(param_1[2]) <= 9.999999747378752e-05)) ||
     (((ABS(*param_2) <= 9.999999747378752e-05 && (ABS(param_2[1]) <= 9.999999747378752e-05)) &&
      (ABS(param_2[2]) <= 9.999999747378752e-05)))) {
    *param_3 = 0.0;
  }
  else {
    FUN_14915c690(local_38,param_1);
    dVar1 = local_20;
    if (1.0 <= local_20) {
      dVar1 = 1.0;
    }
    dVar1 = acos((double)(~-(ulonglong)(local_20 < -1.0) & (ulonglong)dVar1 |
                         -(ulonglong)(local_20 < -1.0) & 0xbff0000000000000));
    *param_3 = (float)(dVar1 + dVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491204e6 FUN_1491204e6 body=229 status=ok
// SIG undefined FUN_1491204e6(void)

void FUN_1491204e6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491205cc(param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491205cc FUN_1491205cc body=194 status=ok
// SIG undefined FUN_1491205cc(void)

void FUN_1491205cc(double *param_1,double *param_2,undefined8 param_3)

{
  bool bVar1;
  
  if (((9.999999747378752e-05 < ABS(*param_1)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
     (9.999999747378752e-05 < ABS(param_1[2]))) {
    if (((9.999999747378752e-05 < ABS(*param_2)) || (9.999999747378752e-05 < ABS(param_2[1]))) ||
       (9.999999747378752e-05 < ABS(param_2[2]))) {
      bVar1 = 0.999845027923584 <=
              ABS(param_2[2] * param_1[2] + *param_1 * *param_2 + param_2[1] * param_1[1]);
      goto LAB_149120657;
    }
  }
  bVar1 = false;
LAB_149120657:
  *(bool *)param_3 = bVar1;
  return;
}



// FUNCTION 1491206a8 FUN_1491206a8 body=229 status=ok
// SIG undefined FUN_1491206a8(void)

void FUN_1491206a8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14912078e(param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912078e FUN_14912078e body=198 status=ok
// SIG undefined FUN_14912078e(void)

void FUN_14912078e(double *param_1,double *param_2,undefined8 param_3)

{
  bool bVar1;
  
  if (((9.999999747378752e-05 < ABS(*param_1)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
     (9.999999747378752e-05 < ABS(param_1[2]))) {
    if (((9.999999747378752e-05 < ABS(*param_2)) || (9.999999747378752e-05 < ABS(param_2[1]))) ||
       (9.999999747378752e-05 < ABS(param_2[2]))) {
      bVar1 = ABS(param_2[2] * param_1[2] + *param_1 * *param_2 + param_2[1] * param_1[1]) <=
              0.017455000430345535;
      goto LAB_149120819;
    }
  }
  bVar1 = false;
LAB_149120819:
  *(bool *)param_3 = bVar1;
  return;
}



// FUNCTION 149120870 FUN_149120870 body=237 status=ok
// SIG undefined FUN_149120870(void)

void FUN_149120870(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14915cd76(param_1 + 8,*(undefined4 *)(param_1 + 0x68),param_1 + 0x70,param_1 + 0x88);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149120960 FUN_149120960 body=204 status=ok
// SIG undefined FUN_149120960(void)

void FUN_149120960(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = &PTR_FUN_14bad5c20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  local_f8 = 0x3f91111111111111;
  local_f0 = 0x800;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490d751a(&local_128);
  FUN_140f8ceac(&local_128);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149120a2e FUN_149120a2e body=141 status=ok
// SIG undefined FUN_149120a2e(void)

void FUN_149120a2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14911b69e(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined4 *)puVar1[0xc],*(undefined4 *)puVar1[0x10],puVar1[0x14],
                *(undefined1 *)puVar1[0x18],puVar1[0x1c],*(undefined4 *)puVar1[0x20],puVar1[0x24]);
  return;
}



// FUNCTION 149120ac4 FUN_149120ac4 body=311 status=ok
// SIG undefined FUN_149120ac4(void)

void FUN_149120ac4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined4 local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0xa8;
  local_150 = *(undefined4 *)(param_1 + 0xa4);
  local_158 = param_1 + 0x94;
  local_160 = *(undefined1 *)(param_1 + 0x90);
  local_168 = param_1 + 0x30;
  local_178 = *(undefined4 *)(param_1 + 0x24);
  local_170 = *(undefined4 *)(param_1 + 0x28);
  FUN_14911b69e(&local_138,param_1 + 8,param_1 + 0x20,param_1 + 0x21);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149120bfc FUN_149120bfc body=57 status=ok
// SIG undefined FUN_149120bfc(void)

void FUN_149120bfc(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149120d36(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 149120c36 FUN_149120c36 body=254 status=ok
// SIG undefined FUN_149120c36(void)

void FUN_149120c36(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x80;
  local_148 = param_1 + 0x68;
  FUN_149120d36(param_1 + 8,param_1 + 0x20,param_1 + 0x38,param_1 + 0x50);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149120d36 FUN_149120d36 body=579 status=ok
// SIG undefined FUN_149120d36(void)

void FUN_149120d36(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  float *param_6)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = *param_4;
  dVar4 = param_4[1];
  dVar5 = param_4[2];
  dVar3 = dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4;
  if ((dVar3 != 1.0) || (NAN(dVar3))) {
    if (9.99999993922529e-09 <= dVar3) {
      dVar3 = 1.0 / SQRT(dVar3);
      dVar5 = dVar5 * dVar3;
      dVar4 = dVar4 * dVar3;
      dVar6 = dVar6 * dVar3;
    }
    else {
      dVar5 = 1.0;
      dVar6 = 0.0;
      dVar4 = 0.0;
    }
  }
  dVar3 = dVar5 * param_2[2] + dVar6 * *param_2 + dVar4 * param_2[1];
  if (ABS(dVar3) <= 1e-08) {
    param_5[2] = DAT_14c8464f0;
    dVar6 = DAT_14c8464e8;
    *param_5 = DAT_14c8464e0;
    param_5[1] = dVar6;
    fVar2 = 0.0;
  }
  else {
    dVar1 = param_3[2] * dVar5 + *param_3 * dVar6 + param_3[1] * dVar4;
    dVar3 = ((dVar5 * dVar1 - param_1[2]) * dVar5 +
            (dVar1 * dVar6 - *param_1) * dVar6 + (dVar4 * dVar1 - param_1[1]) * dVar4) / dVar3;
    dVar6 = param_2[2] * dVar3 + param_1[2];
    dVar5 = param_2[1] * dVar3 + param_1[1];
    dVar4 = *param_2 * dVar3 + *param_1;
    *param_5 = dVar4;
    param_5[1] = dVar5;
    param_5[2] = dVar6;
    dVar6 = param_1[2] - dVar6;
    dVar5 = param_1[1] - dVar5;
    dVar4 = *param_1 - dVar4;
    fVar2 = (float)SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
  }
  *param_6 = fVar2;
  return;
}



// FUNCTION 149120f7a FUN_149120f7a body=45 status=ok
// SIG undefined FUN_149120f7a(void)

void FUN_149120f7a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14912109c(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 149120fa8 FUN_149120fa8 body=242 status=ok
// SIG undefined FUN_149120fa8(void)

void FUN_149120fa8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x68;
  FUN_14912109c(param_1 + 8,param_1 + 0x20,param_1 + 0x38,param_1 + 0x50);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912109c FUN_14912109c body=450 status=ok
// SIG undefined FUN_14912109c(void)

void FUN_14912109c(double *param_1,double *param_2,double *param_3,double *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar8 != 1.0) || (dVar6 = dVar2, dVar7 = dVar3, dVar4 = dVar1, NAN(dVar8))) &&
     (dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464f0, dVar4 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar8)) {
    dVar8 = 1.0 / SQRT(dVar8);
    dVar6 = dVar2 * dVar8;
    dVar7 = dVar3 * dVar8;
    dVar4 = dVar1 * dVar8;
  }
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar6 != 0.0 || ((NAN(dVar6) || (dVar7 != 0.0)))))) ||
     (NAN(dVar7))) {
    dVar1 = param_1[1];
    dVar2 = param_1[2];
    dVar3 = (dVar7 * dVar2 + dVar4 * *param_1 + dVar6 * dVar1) -
            (param_2[2] * dVar7 + *param_2 * dVar4 + param_2[1] * dVar6);
    *param_4 = *param_1 - dVar3 * dVar4;
    param_4[1] = dVar1 - dVar6 * dVar3;
    param_4[2] = dVar2 - dVar7 * dVar3;
    fVar5 = (float)((param_1[2] - param_2[2]) * dVar7 +
                   (*param_1 - *param_2) * dVar4 + (param_1[1] - param_2[1]) * dVar6);
  }
  else {
    param_4[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_4 = DAT_14c8464e0;
    param_4[1] = dVar1;
    fVar5 = 0.0;
  }
  *param_5 = fVar5;
  return;
}



// FUNCTION 149121298 FUN_149121298 body=254 status=ok
// SIG undefined FUN_149121298(void)

void FUN_149121298(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491213d2 FUN_1491213d2 body=254 status=ok
// SIG undefined FUN_1491213d2(void)

void FUN_1491213d2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x18);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491214d2 FUN_1491214d2 body=166 status=ok
// SIG undefined FUN_1491214d2(void)

void FUN_1491214d2(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (longlong *)*param_2;
  puVar1 = (undefined4 *)*param_2;
  lVar2 = param_2[4];
  lVar3 = param_2[8];
  lVar4 = param_2[0xc];
  puVar5 = (undefined4 *)param_2[0x10];
  local_98 = local_88;
  puVar7 = &DAT_14c846480;
  puVar8 = local_98;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  local_58 = *(undefined8 *)(puVar1 + 4);
  uStack_50 = 0;
  FUN_149110e00(local_98,lVar2,lVar3,lVar4);
  *puVar5 = local_68;
  puVar5[1] = uStack_64;
  puVar5[2] = uStack_60;
  puVar5[3] = uStack_5c;
  *(undefined8 *)(puVar5 + 4) = local_58;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912157a FUN_14912157a body=320 status=ok
// SIG undefined FUN_14912157a(void)

void FUN_14912157a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = &PTR_FUN_14bad5c20;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_17c = 0;
  local_178 = 0x3f91111111111111;
  local_170 = 0x800;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_138;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1490d751a(&local_1a8);
  local_1b8 = local_98;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = *(undefined4 *)(param_1 + 8);
  uStack_74 = *(undefined4 *)(param_1 + 0xc);
  uStack_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_6c = *(undefined4 *)(param_1 + 0x14);
  local_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = 0;
  FUN_149110e00(local_1b8,param_1 + 0x20,param_1 + 0x21,param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x90) = local_78;
  *(undefined4 *)(param_1 + 0x94) = uStack_74;
  *(undefined4 *)(param_1 + 0x98) = uStack_70;
  *(undefined4 *)(param_1 + 0x9c) = uStack_6c;
  *(undefined8 *)(param_1 + 0xa0) = local_68;
  FUN_140f8ceac(&local_1a8);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149121726 FUN_149121726 body=306 status=ok
// SIG undefined FUN_149121726(void)

void FUN_149121726(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double *pdVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar8 = &DAT_14c846480;
  puVar9 = local_c8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  pdVar6 = *(double **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c8464f0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    pdVar1 = pdVar6 + (longlong)*(int *)(param_1 + 0x10) * 3;
    dVar2 = *(double *)(param_1 + 0x18);
    dVar10 = *(double *)(param_1 + 0x20);
    dVar11 = *(double *)(param_1 + 0x28);
    do {
      dVar2 = dVar2 + *pdVar6;
      *(double *)(param_1 + 0x18) = dVar2;
      dVar10 = dVar10 + pdVar6[1];
      *(double *)(param_1 + 0x20) = dVar10;
      dVar11 = dVar11 + pdVar6[2];
      *(double *)(param_1 + 0x28) = dVar11;
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912185a FUN_14912185a body=79 status=ok
// SIG undefined FUN_14912185a(void)

void FUN_14912185a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_14912199e(&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491218aa FUN_1491218aa body=242 status=ok
// SIG undefined FUN_1491218aa(void)

void FUN_1491218aa(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  FUN_14912199e(&local_30,param_1 + 0x18);
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912199e FUN_14912199e body=138 status=ok
// SIG undefined FUN_14912199e(void)

void FUN_14912199e(undefined8 *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  param_2[2] = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar5;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    pdVar2 = (double *)*param_1;
    pdVar1 = pdVar2 + (longlong)*(int *)(param_1 + 1) * 3;
    dVar5 = *param_2;
    dVar4 = param_2[1];
    dVar3 = param_2[2];
    do {
      dVar5 = dVar5 + *pdVar2;
      *param_2 = dVar5;
      dVar4 = dVar4 + pdVar2[1];
      param_2[1] = dVar4;
      dVar3 = dVar3 + pdVar2[2];
      param_2[2] = dVar3;
      pdVar2 = pdVar2 + 3;
    } while (pdVar2 != pdVar1);
    dVar6 = 1.0 / (double)*(int *)(param_1 + 1);
    *param_2 = dVar5 * dVar6;
    param_2[1] = dVar4 * dVar6;
    param_2[2] = dVar3 * dVar6;
  }
  return;
}



// FUNCTION 149121a28 FUN_149121a28 body=46 status=ok
// SIG undefined FUN_149121a28(void)

undefined8 FUN_149121a28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_1466af93e();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149121a56 FUN_149121a56 body=46 status=ok
// SIG undefined FUN_149121a56(void)

undefined8 FUN_149121a56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_1466afb90();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149121a84 FUN_149121a84 body=25 status=ok
// SIG undefined FUN_149121a84(void)

undefined8 FUN_149121a84(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149121a9e FUN_149121a9e body=25 status=ok
// SIG undefined FUN_149121a9e(void)

undefined8 FUN_149121a9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149121ab8 FUN_149121ab8 body=25 status=ok
// SIG undefined FUN_149121ab8(void)

undefined8 FUN_149121ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149121ad1 FUN_149121ad1 body=1719 status=ok
// SIG undefined FUN_149121ad1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149121ad1(undefined8 param_1,double *param_2,undefined1 (*param_3) [12],double *param_4,
                  double *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_358 [32];
  undefined *local_338;
  undefined4 local_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [16];
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
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
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar27 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_270 = param_5[2] * 0.07999999821186066;
  local_278 = param_5[1] * 0.07999999821186066;
  local_280 = *param_5 * 0.07999999821186066;
  local_288 = param_4[2] * 0.25;
  local_290 = param_4[1] * 0.25;
  local_298 = *param_4 * 0.25;
  local_2d8 = ZEXT816(0);
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  auVar1 = *(undefined1 (*) [16])(param_2 + 8);
  dVar15 = auVar1._0_8_;
  dVar21 = auVar1._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_2 + 10);
  dVar3 = auVar2._0_8_;
  auVar17 = minpd(_DAT_149934d80,auVar1);
  auVar19 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
  auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
  iVar12 = movmskpd((int)param_5,auVar18);
  auVar17._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  uVar13 = movmskpd((int)local_c0,auVar17);
  if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar8 = *param_2;
    dVar9 = param_2[1];
    dVar10 = param_2[2];
    dVar11 = param_2[3];
    dVar4 = param_2[3];
    dVar22 = param_2[3];
    dVar15 = *(double *)*param_3 * dVar15;
    dVar21 = *(double *)(*param_3 + 8) * dVar21;
    dVar25 = *(double *)(param_3[1] + 4) * dVar3;
    dVar5 = auVar2._8_8_ * 0.0;
    local_318._8_4_ = SUB84(dVar21,0);
    local_318._0_8_ = dVar15;
    local_318._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    local_328._8_4_ = SUB84(dVar5,0);
    local_328._0_8_ = dVar25;
    local_328._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar6 = dVar21 * dVar8 - dVar15 * dVar9;
    dVar7 = dVar25 * dVar9 - dVar21 * dVar10;
    dVar23 = dVar15 * dVar10 - dVar25 * dVar8;
    dVar26 = dVar5 * dVar11 - dVar5 * dVar11;
    dVar7 = dVar7 + dVar7;
    dVar23 = dVar23 + dVar23;
    dVar6 = dVar6 + dVar6;
    dVar26 = dVar26 + dVar26;
    dVar21 = param_2[1];
    dVar5 = param_2[1];
    local_2f8 = dVar10 * 0.0 * -1.0 + dVar21 * 0.0 + *param_2 * 1.0 * 1.0 + dVar4 * 0.0;
    dStack_2f0 = dVar10 * 0.0 * 1.0 + dVar5 * 1.0 + *param_2 * 0.0 * -1.0 + dVar22 * 0.0;
    dVar24 = (dVar7 * dVar10 - dVar6 * dVar8) + dVar22 * dVar23 + (double)local_318._8_8_ +
             param_2[5];
    local_2c8 = (dVar23 * dVar8 - dVar9 * dVar7) + dVar4 * dVar6 + dVar25 + param_2[6];
    dStack_2c0 = (dVar26 * dVar11 - dVar26 * dVar11) + dVar22 * dVar26 + (double)local_328._8_8_ +
                 param_2[7];
    local_2e8._8_8_ = param_2[2] * 0.0 * -1.0 + ((dVar8 * 0.0 * -1.0 + dVar22 * 1.0) - dVar5 * 0.0);
    local_2e8._0_8_ = param_2[2] * 1.0 * 1.0 + ((dVar8 * 0.0 * 1.0 + dVar4 * 0.0) - dVar21 * 0.0);
    local_2d8._8_4_ = SUB84(dVar24,0);
    local_2d8._0_8_ = (dVar6 * dVar9 - dVar10 * dVar23) + dVar4 * dVar7 + dVar15 + param_2[4];
    local_2d8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    local_308 = auVar1;
  }
  else {
    dVar6 = *param_2;
    dVar7 = param_2[1];
    dVar22 = param_2[2];
    dVar23 = dVar7 + dVar7;
    dVar24 = dVar22 + dVar22;
    dVar4 = dVar6 * (dVar6 + dVar6);
    local_1c8 = ((double)DAT_149934d80 - (dVar22 * dVar24 + dVar7 * dVar23)) * dVar15;
    dVar5 = (DAT_149934d80._8_8_ - (dVar22 * dVar24 + dVar4)) * dVar21;
    dVar22 = param_2[3];
    dVar25 = dVar24 * dVar22;
    dVar26 = (dVar6 + dVar6) * param_2[3];
    dVar22 = dVar23 * dVar22;
    dStack_180 = (dVar24 * dVar7 - dVar26) * dVar3;
    local_188 = (dVar22 + *param_2 * dVar24) * dVar3;
    dStack_1c0 = (dVar23 * dVar6 + dVar25) * dVar15;
    local_198 = (dVar24 * dVar7 + dVar26) * dVar21;
    local_1b8 = (*param_2 * dVar24 - dVar22) * dVar15;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar5,0);
    local_1a8._0_8_ = (dVar23 * dVar6 - dVar25) * dVar21;
    local_1a8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_190 = 0;
    local_178 = (1.0 - (dVar4 + dVar7 * dVar23)) * dVar3;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    local_1e8._12_4_ = (int)((ulonglong)*(double *)(*param_3 + 8) >> 0x20);
    local_1e8._0_12_ = *param_3;
    local_1d8._8_4_ = 0;
    local_1d8._0_8_ = *(double *)(param_3[1] + 4);
    local_1d8._12_4_ = 0x3ff00000;
    local_228 = ZEXT816(0x3ff0000000000000) << 0x40;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar21);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar17 = blendvpd(_DAT_149936790,auVar27,auVar19);
    uVar14 = -(ulonglong)(0.0 <= dVar3 * 1.0);
    dVar15 = (double)(~uVar14 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar14 >> 0x20) & 0x3ff00000) << 0x20);
    dVar21 = auVar17._0_8_;
    local_138 = local_138 * dVar21;
    local_140 = local_140 * dVar21;
    local_148 = local_148 * dVar21;
    dVar21 = auVar17._8_8_;
    local_118 = local_118 * dVar21;
    local_120 = local_120 * dVar21;
    local_128 = dVar21 * local_128;
    local_f8 = local_f8 * dVar15;
    local_100 = local_100 * dVar15;
    local_108 = dVar15 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar15 = local_258 * local_258 + local_268 * local_268;
    dVar21 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar20._0_8_ = dVar15 + dVar21;
    auVar20._8_8_ = dVar15 + dVar21;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar17 = sqrtpd(auVar20,auVar20);
    auVar27 = divpd(auVar27,auVar17);
    auVar28._0_8_ = auVar27._0_8_ * local_258;
    auVar28._8_8_ = auVar27._8_8_ * dStack_250;
    local_2f8 = (double)((ulonglong)(local_268 * auVar27._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dStack_2f0 = (double)((ulonglong)(dStack_260 * auVar27._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar16);
    local_2d8._8_8_ = uStack_e0;
    local_2d8._0_8_ = local_e8;
    local_2c8 = local_d8;
    dStack_2c0 = 0.0;
  }
  dVar15 = auVar2._8_8_ * 0.0;
  local_2a8._8_4_ = SUB84(dVar15,0);
  local_2a8._0_8_ = dVar3 * 1.0;
  local_2a8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_338 = &DAT_149e1dd24;
  local_330 = 0;
  local_2b8 = auVar1._0_4_;
  uStack_2b4 = auVar1._4_4_;
  uStack_2b0 = auVar1._8_4_;
  uStack_2ac = auVar1._12_4_;
  FUN_14446b3fe(param_1,&local_2f8,&local_298,&local_280);
  if ((local_c0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149122189 FUN_149122189 body=10138 status=ok
// SIG undefined FUN_149122189(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149122189(undefined8 param_1,int param_2,float param_3,float *param_4,double *param_5,
                  double *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  double *pdVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  double *pdVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar37;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  double dVar74;
  double dVar75;
  undefined4 uVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  double dVar86;
  undefined1 auVar87 [16];
  double dVar89;
  undefined1 auVar88 [16];
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 auStack_538 [32];
  undefined *local_518;
  undefined *local_510;
  undefined8 local_508;
  undefined1 local_4f8 [12];
  undefined4 uStack_4ec;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [24];
  double local_4b0;
  double local_4a8;
  double local_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 local_488 [16];
  double local_478;
  ulonglong uStack_470;
  double local_468;
  ulonglong uStack_460;
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  ulonglong uStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
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
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined8 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  if (param_2 == 1) {
    pdVar12 = (double *)&DAT_14c846388;
    pdVar15 = (double *)&DAT_14c8463a0;
  }
  else {
    pdVar12 = (double *)&DAT_14c8463a0;
    if (param_2 == 2) {
      pdVar15 = (double *)&DAT_14c846388;
    }
    else {
      pdVar15 = (double *)&DAT_14c8463b8;
    }
  }
  local_4a0 = pdVar12[2];
  local_4a8 = *pdVar12;
  dVar48 = pdVar15[2];
  dVar59 = *pdVar15;
  dVar47 = pdVar15[1];
  local_4b0 = pdVar12[1];
  dVar69 = (dVar48 * param_6[2] + dVar59 * *param_6 + dVar47 * param_6[1]) -
           (param_5[6] * dVar48 + param_5[4] * dVar59 + dVar47 * param_5[5]);
  dVar49 = param_6[2] - dVar48 * dVar69;
  dVar90 = param_6[1] - dVar47 * dVar69;
  dVar86 = *param_6 - dVar69 * dVar59;
  dVar60 = dVar86 - param_5[4];
  dVar46 = dVar90 - param_5[5];
  dVar69 = dVar49 - param_5[6];
  dVar46 = SQRT(dVar69 * dVar69 + dVar46 * dVar46 + dVar60 * dVar60);
  dVar69 = 10.0;
  if (10.0 <= dVar46) {
    dVar69 = dVar46;
  }
  local_4c8._0_8_ = dVar69 * 0.5249999761581421;
  local_138 = dVar59 * local_4b0 - local_4a8 * dVar47;
  local_140 = dVar48 * local_4a8 - local_4a0 * dVar59;
  local_148 = dVar47 * local_4a0 - local_4b0 * dVar48;
  local_418 = DAT_14c8464a0;
  dStack_410 = DAT_14c8464a8;
  pdVar12 = &local_168;
  local_150 = 0;
  local_428 = DAT_14c8464b0;
  dStack_420 = DAT_14c8464b8;
  local_408 = DAT_14c8464c0;
  dStack_400 = DAT_14c8464c8;
  local_130 = 0;
  local_110 = 0;
  local_108 = DAT_14c8464e0;
  uStack_100 = (undefined4)DAT_14c8464e8;
  uStack_fc = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  local_f8 = DAT_14c8464f0;
  local_498 = (undefined4)DAT_14c8464d0;
  uStack_494 = (undefined4)((ulonglong)DAT_14c8464d0 >> 0x20);
  uStack_490 = (undefined4)uRam000000014c8464d8;
  uStack_48c = (undefined4)((ulonglong)uRam000000014c8464d8 >> 0x20);
  local_f0 = 0x3ff0000000000000;
  local_168 = local_4a8;
  local_160 = local_4b0;
  local_158 = local_4a0;
  local_128 = dVar59;
  local_120 = dVar47;
  local_118 = dVar48;
  uVar8 = FUN_141706d54(pdVar12,local_1e8);
  auVar61 = _DAT_149934d80;
  local_438 = (double)local_1e8._0_8_;
  dStack_430 = (double)local_1e8._8_8_;
  local_458 = *(undefined1 (*) [16])(param_5 + 4);
  dVar45 = *(double *)*(undefined1 (*) [16])(param_5 + 6);
  local_488._8_8_ = 0;
  local_488._0_8_ = (dVar49 - dVar45) * 0.5;
  local_4e8 = (dVar90 - param_5[5]) * 0.5;
  dStack_4e0 = 0.0;
  local_4d8 = (dVar86 - *(double *)*(undefined1 (*) [16])(param_5 + 4)) * 0.5;
  dStack_4d0 = 0.0;
  dVar60 = (double)param_3;
  uStack_460 = 0;
  uStack_470 = 0;
  dVar86 = dVar47 * dVar60;
  uStack_3f0 = 0;
  auVar22 = *(undefined1 (*) [16])(param_5 + 8);
  dVar49 = auVar22._0_8_;
  dVar46 = auVar22._8_8_;
  auVar25 = *(undefined1 (*) [16])(param_5 + 10);
  dVar69 = auVar25._0_8_;
  auVar50 = minpd(_DAT_149934d80,auVar22);
  auVar39._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
  iVar9 = movmskpd(uVar8,auVar39);
  auVar50 = minpd(ZEXT816(0x3ff0000000000000),auVar25);
  auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
  auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
  uVar11 = movmskpd((int)pdVar12,auVar51);
  local_448 = local_1d8;
  dStack_440 = dStack_1d0;
  uVar8 = auVar22._0_4_;
  uVar80 = auVar22._4_4_;
  uVar82 = auVar22._8_4_;
  uVar84 = auVar22._12_4_;
  local_478 = dVar47;
  _local_4f8 = auVar22;
  local_468 = dVar48;
  local_3f8 = dVar59;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar67 = *param_5;
    dVar68 = param_5[1];
    local_3e8 = param_5[2];
    dStack_3e0 = param_5[3];
    dVar47 = param_5[3];
    dVar90 = param_5[3];
    local_3d8._8_8_ = dVar90 * 1.0;
    local_3d8._0_8_ = dVar47 * 0.0;
    dVar49 = dVar60 * dVar59 * dVar49;
    dVar86 = dVar86 * dVar46;
    dVar20 = dVar48 * dVar60 * dVar69;
    dVar37 = auVar25._8_8_ * 0.0;
    dVar46 = dVar86 * dVar67 - dVar49 * dVar68;
    dVar70 = dVar20 * dVar68 - dVar86 * local_3e8;
    dVar19 = dVar49 * local_3e8 - dVar20 * dVar67;
    dVar60 = dVar37 * dStack_3e0 - dVar37 * dStack_3e0;
    dVar70 = dVar70 + dVar70;
    dVar19 = dVar19 + dVar19;
    dVar46 = dVar46 + dVar46;
    dVar60 = dVar60 + dVar60;
    dVar48 = param_5[1];
    dVar59 = param_5[1];
    dVar58 = local_3e8 * 0.0 * -1.0 + dVar48 * 0.0 + *param_5 * 1.0 * 1.0 + dVar47 * 0.0;
    dVar77 = local_3e8 * 0.0 * 1.0 + dVar59 * 1.0 + *param_5 * 0.0 * -1.0 + dVar90 * 0.0;
    auVar61._0_8_ = param_5[2] * 1.0 * 1.0 + ((dVar67 * 0.0 * 1.0 + dVar47 * 0.0) - dVar48 * 0.0);
    auVar61._8_8_ = param_5[2] * 0.0 * -1.0 + ((dVar67 * 0.0 * -1.0 + dVar90 * 1.0) - dVar59 * 0.0);
    dVar48 = (double)local_458._0_8_ +
             (dVar46 * dVar68 - local_3e8 * dVar19) + dVar47 * dVar70 + dVar49;
    dVar59 = (double)local_458._8_8_ +
             (dVar70 * local_3e8 - dVar46 * dVar67) + dVar90 * dVar19 + dVar86;
    dVar45 = dVar45 + (dVar19 * dVar67 - dVar68 * dVar70) + dVar47 * dVar46 + dVar20;
    dVar47 = param_5[7] + (dVar60 * dStack_3e0 - dVar60 * dStack_3e0) + dVar90 * dVar60 + dVar37;
    uVar79 = 0;
    local_3c8 = *(undefined1 (*) [16])(param_5 + 6);
  }
  else {
    dVar67 = *param_5;
    dVar68 = param_5[1];
    dVar70 = param_5[2];
    dVar58 = dVar68 + dVar68;
    dVar19 = dVar70 + dVar70;
    dVar77 = dVar67 * (dVar67 + dVar67);
    dVar90 = (DAT_149934d80._8_8_ - (dVar70 * dVar19 + dVar77)) * dVar46;
    dVar47 = param_5[3];
    dVar20 = dVar19 * dVar47;
    dVar37 = (dVar67 + dVar67) * param_5[3];
    dVar47 = dVar58 * dVar47;
    dStack_1a0 = (dVar19 * dVar68 - dVar37) * dVar69;
    local_1a8 = (dVar47 + *param_5 * dVar19) * dVar69;
    local_1b8 = (dVar19 * dVar68 + dVar37) * dVar46;
    local_1e8._8_8_ = (dVar58 * dVar67 + dVar20) * dVar49;
    local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar70 * dVar19 + dVar68 * dVar58)) * dVar49;
    local_1d8 = (*param_5 * dVar19 - dVar47) * dVar49;
    dStack_1d0 = 0.0;
    local_1c8._8_4_ = SUB84(dVar90,0);
    local_1c8._0_8_ = (dVar58 * dVar67 - dVar20) * dVar46;
    local_1c8._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
    uStack_1b0 = 0;
    local_198._8_8_ = 0;
    local_198._0_8_ = (1.0 - (dVar77 + dVar68 * dVar58)) * dVar69;
    uStack_170 = 0x3ff0000000000000;
    local_268 = 1.0;
    dStack_260 = 0.0;
    local_258 = 0.0;
    uStack_250 = 0;
    local_238 = 0.0;
    uStack_230 = 0;
    local_228 = ZEXT816(0);
    local_218 = 1.0;
    uStack_210 = 0;
    local_208._8_4_ = SUB84(dVar86,0);
    local_208._0_8_ = dVar60 * dVar59;
    local_208._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
    uStack_1f0 = 0x3ff0000000000000;
    local_248 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_1f8 = dVar48 * dVar60;
    local_188 = local_458;
    local_178 = dVar45;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar50._8_8_ = -(ulonglong)(0.0 <= dVar46);
    auVar50._0_8_ = -(ulonglong)(0.0 <= dVar49);
    auVar50 = blendvpd(_DAT_149936790,auVar61,auVar50);
    uVar16 = -(ulonglong)(0.0 <= dVar69 * 1.0);
    dVar48 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
    dVar59 = auVar50._0_8_;
    local_158 = local_158 * dVar59;
    local_160 = local_160 * dVar59;
    local_168 = local_168 * dVar59;
    dVar59 = auVar50._8_8_;
    local_138 = local_138 * dVar59;
    local_140 = local_140 * dVar59;
    local_148 = dVar59 * local_148;
    local_118 = local_118 * dVar48;
    local_120 = local_120 * dVar48;
    local_128 = dVar48 * local_128;
    pdVar12 = &local_2e8;
    iVar9 = FUN_14481fd10(pdVar12,&local_168);
    uVar79 = SUB84(pdVar12,0);
    dVar48 = (double)local_2d8._0_8_ * (double)local_2d8._0_8_ + local_2e8 * local_2e8;
    dVar59 = (double)local_2d8._8_8_ * (double)local_2d8._8_8_ + dStack_2e0 * dStack_2e0;
    auVar52._0_8_ = dVar48 + dVar59;
    auVar52._8_8_ = dVar48 + dVar59;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
    auVar50 = sqrtpd(auVar52,auVar52);
    auVar61 = divpd(auVar61,auVar50);
    auVar62._0_8_ = auVar61._0_8_ * (double)local_2d8._0_8_;
    auVar62._8_8_ = auVar61._8_8_ * (double)local_2d8._8_8_;
    dVar58 = (double)((ulonglong)(local_2e8 * auVar61._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
    dVar77 = (double)((ulonglong)(dStack_2e0 * auVar61._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
    auVar61 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar21);
    dVar59 = (double)CONCAT44(uStack_fc,uStack_100);
    dVar47 = 0.0;
    dVar45 = local_f8;
    dVar48 = local_108;
  }
  dVar46 = local_4e8;
  auVar50 = _DAT_149934d80;
  dVar69 = dVar69 * 1.0;
  dVar49 = auVar25._8_8_ * 0.0;
  fVar18 = (float)(double)local_4c8._0_8_;
  local_4c8._0_4_ = fVar18;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2c8 = ZEXT816(0);
  auVar22 = minpd(auVar22,_DAT_149934d80);
  auVar38._8_8_ = dVar49;
  auVar38._0_8_ = dVar69;
  auVar39 = minpd(auVar38,ZEXT816(0x3ff0000000000000));
  auVar25._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar25);
  auVar22._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar11 = movmskpd(uVar79,auVar22);
  dStack_4d0 = local_4e8;
  local_4e8 = (double)local_488._0_8_;
  dStack_4e0 = 0.0;
  dVar86 = auVar61._8_8_;
  dVar60 = auVar61._0_8_;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar90 = dVar58 * 0.0;
    dVar67 = dVar77 * 0.0;
    dVar68 = dVar86 * 0.0 * 1.0;
    dVar70 = dVar60 * 0.0 * -1.0;
    dVar19 = dVar67 * -1.0 + dVar58 + dVar68 + dVar60 * 0.0;
    dVar20 = dVar90 * 1.0 + dVar77 + dVar70 + dVar86 * 0.0;
    auVar87._0_8_ = ((dVar67 * 1.0 + dVar60) - dVar90) + dVar68;
    auVar87._8_8_ = ((dVar90 * -1.0 + dVar86) - dVar67) + dVar70;
    dVar45 = dVar45 * 1.0;
    dVar47 = dVar47 * 0.0;
    dVar60 = dVar59 * 0.0 - dVar48 * 0.0;
    dVar86 = dVar45 * 0.0 - dVar59 * 0.0;
    dVar90 = dVar48 * 0.0 - dVar45 * 0.0;
    dVar67 = dVar47 * 1.0 - dVar47 * 1.0;
    dVar86 = dVar86 + dVar86;
    dVar90 = dVar90 + dVar90;
    dVar60 = dVar60 + dVar60;
    dVar67 = dVar67 + dVar67;
    dVar48 = (dVar60 * 0.0 - dVar90 * 0.0) + dVar48 + dVar86 + local_4d8;
    dVar46 = (dVar86 * 0.0 - dVar60 * 0.0) + dVar59 + dVar90 + dVar46;
    dVar59 = (dVar90 * 0.0 - dVar86 * 0.0) + dVar45 + dVar60 + (double)local_488._0_8_;
    dStack_2b0 = (dVar67 * 1.0 - dVar67 * 1.0) + dVar47 + dVar67 + 0.0;
    local_2c8._8_4_ = SUB84(dVar46,0);
    local_2c8._0_8_ = dVar48;
    local_2c8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
  }
  else {
    local_1e8 = ZEXT816(0x3ff0000000000000);
    local_1d8 = 0.0;
    dStack_1d0 = 0.0;
    local_1b8 = 0.0;
    uStack_1b0 = 0;
    local_1a8 = 0.0;
    dStack_1a0 = 0.0;
    local_198 = ZEXT816(0x3ff0000000000000);
    local_188._8_8_ = dVar46;
    local_188._0_8_ = local_4d8;
    local_178 = (double)local_488._0_8_;
    uStack_170 = 0x3ff0000000000000;
    dVar67 = dVar77 + dVar77;
    dVar47 = dVar60 + dVar60;
    dVar90 = dVar58 * (dVar58 + dVar58);
    local_268 = ((double)DAT_149934d80 - (dVar60 * dVar47 + dVar77 * dVar67)) *
                (double)local_4f8._0_8_;
    dVar46 = (dVar58 + dVar58) * dVar86;
    dStack_260 = (dVar67 * dVar58 + dVar47 * dVar86) * (double)local_4f8._0_8_;
    local_238 = (dVar47 * dVar77 + dVar46) * stack0xfffffffffffffb10;
    local_258 = (dVar58 * dVar47 - dVar67 * dVar86) * (double)local_4f8._0_8_;
    uStack_250 = 0;
    local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar60 * dVar47 + dVar90)) * stack0xfffffffffffffb10;
    local_248._0_8_ = (dVar67 * dVar58 - dVar47 * dVar86) * stack0xfffffffffffffb10;
    uStack_230 = 0;
    local_228._8_8_ = (dVar47 * dVar77 - dVar46) * dVar69;
    local_228._0_8_ = (dVar67 * dVar86 + dVar58 * dVar47) * dVar69;
    local_218 = (1.0 - (dVar90 + dVar77 * dVar67)) * dVar69;
    uStack_210 = 0;
    local_208._8_4_ = SUB84(dVar59,0);
    local_208._0_8_ = dVar48;
    local_208._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    uStack_1f0 = 0x3ff0000000000000;
    local_1f8 = dVar45;
    local_1c8 = ZEXT816(0x3ff0000000000000) << 0x40;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar23._8_8_ = -(ulonglong)(0.0 <= stack0xfffffffffffffb10);
    auVar23._0_8_ = -(ulonglong)(0.0 <= (double)local_4f8._0_8_);
    auVar22 = blendvpd(_DAT_149936790,auVar50,auVar23);
    uVar16 = -(ulonglong)(0.0 <= dVar69 * 1.0);
    dVar48 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
    dVar59 = auVar22._0_8_;
    local_158 = local_158 * dVar59;
    local_160 = local_160 * dVar59;
    local_168 = local_168 * dVar59;
    dVar59 = auVar22._8_8_;
    local_138 = local_138 * dVar59;
    local_140 = local_140 * dVar59;
    local_148 = dVar59 * local_148;
    local_118 = local_118 * dVar48;
    local_120 = local_120 * dVar48;
    local_128 = dVar48 * local_128;
    FUN_14481fd10(local_348,&local_168);
    dVar48 = (double)local_338._0_8_ * (double)local_338._0_8_ +
             (double)local_348._0_8_ * (double)local_348._0_8_;
    dVar59 = (double)local_338._8_8_ * (double)local_338._8_8_ +
             (double)local_348._8_8_ * (double)local_348._8_8_;
    auVar53._0_8_ = dVar48 + dVar59;
    auVar53._8_8_ = dVar48 + dVar59;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
    auVar22 = sqrtpd(auVar53,auVar53);
    auVar22 = divpd(auVar50,auVar22);
    auVar63._0_8_ = auVar22._0_8_ * (double)local_338._0_8_;
    auVar63._8_8_ = auVar22._8_8_ * (double)local_338._8_8_;
    dVar19 = (double)((ulonglong)((double)local_348._0_8_ * auVar22._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_));
    dVar20 = (double)((ulonglong)((double)local_348._8_8_ * auVar22._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_));
    auVar87 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar24);
    dVar46 = (double)CONCAT44(uStack_fc,uStack_100);
    local_2c8._8_4_ = uStack_100;
    local_2c8._0_8_ = local_108;
    local_2c8._12_4_ = uStack_fc;
    dStack_2b0 = 0.0;
    uVar8 = local_4f8._0_4_;
    uVar80 = local_4f8._4_4_;
    uVar82 = local_4f8._8_4_;
    uVar84 = uStack_4ec;
    dVar48 = local_108;
    dVar59 = local_f8;
  }
  dVar67 = dStack_2b0;
  dVar69 = dVar69 * 1.0;
  dVar49 = dVar49 * 0.0;
  uVar76 = (undefined4)((ulonglong)dVar49 >> 0x20);
  dVar47 = (double)CONCAT44(uStack_494,local_498);
  auVar4._8_4_ = uStack_490;
  auVar4._0_8_ = dVar47;
  auVar4._12_4_ = uStack_48c;
  local_298._8_4_ = SUB84(dVar49,0);
  local_298._0_8_ = dVar69;
  local_298._12_4_ = uVar76;
  plVar13 = *(longlong **)(DAT_14cb0d2b0 + 0x6a0);
  local_2e8 = dVar19;
  dStack_2e0 = dVar20;
  local_2d8 = auVar87;
  local_2b8 = dVar59;
  local_2a8 = uVar8;
  uStack_2a4 = uVar80;
  uStack_2a0 = uVar82;
  uStack_29c = uVar84;
  local_508 = (**(code **)(*plVar13 + 0x2f0))();
  dVar45 = dStack_400;
  dVar90 = local_408;
  uVar85 = uStack_48c;
  uVar83 = uStack_490;
  uVar81 = uStack_494;
  uVar79 = local_498;
  auVar22 = _DAT_149934d80;
  local_288 = (double)(float)local_4c8._0_4_;
  local_4f8._0_8_ = local_288;
  local_318 = 0.0;
  dStack_310 = 0.0;
  local_328 = ZEXT816(0);
  auVar6._8_8_ = dStack_400;
  auVar6._0_8_ = local_408;
  auVar3._4_4_ = uVar80;
  auVar3._0_4_ = uVar8;
  auVar3._8_4_ = uVar82;
  auVar3._12_4_ = uVar84;
  auVar25 = minpd(auVar6,auVar3);
  auVar2._8_4_ = SUB84(dVar49,0);
  auVar2._0_8_ = dVar69;
  auVar2._12_4_ = uVar76;
  auVar61 = minpd(auVar4,auVar2);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar9 = movmskpd((int)local_508,auVar26);
  auVar40._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
  uVar11 = movmskpd((int)plVar13,auVar40);
  dVar60 = (double)CONCAT44(uVar80,uVar8);
  dVar86 = (double)CONCAT44(uVar84,uVar82);
  dVar68 = auVar87._0_8_;
  dVar70 = auVar87._8_8_;
  dStack_280 = local_288;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    auVar5._8_4_ = uStack_490;
    auVar5._0_8_ = CONCAT44(uStack_494,local_498);
    auVar5._12_4_ = uStack_48c;
    local_348._8_8_ =
         local_438 * dVar68 * 1.0 +
         dStack_440 * dVar20 + local_448 * dVar19 * -1.0 + dStack_430 * dVar70;
    local_348._0_8_ =
         dStack_430 * dVar68 * -1.0 +
         local_448 * dVar20 + dStack_440 * dVar19 * 1.0 + local_438 * dVar70;
    local_338._8_8_ =
         local_448 * dVar68 * -1.0 +
         ((dVar19 * local_438 * -1.0 + dStack_440 * dVar70) - dVar20 * dStack_430);
    local_338._0_8_ =
         dStack_440 * dVar68 * 1.0 +
         ((dVar19 * dStack_430 * 1.0 + local_448 * dVar70) - dVar20 * local_438);
    dVar74 = local_418 * dVar60;
    dVar75 = dStack_410 * dVar86;
    dVar89 = local_428 * dVar69;
    dVar73 = dStack_420 * dVar49;
    dVar58 = dVar75 * dVar19 - dVar74 * dVar20;
    dVar77 = dVar89 * dVar20 - dVar75 * dVar68;
    dVar47 = dVar74 * dVar68 - dVar19 * dVar89;
    dVar37 = dVar73 * dVar70 - dVar70 * dVar73;
    dVar77 = dVar77 + dVar77;
    dVar47 = dVar47 + dVar47;
    dVar58 = dVar58 + dVar58;
    dVar37 = dVar37 + dVar37;
    dVar46 = dVar46 + (dVar77 * dVar68 - dVar58 * dVar19) + dVar70 * dVar47 + dVar75;
    local_318 = dVar59 + (dVar47 * dVar19 - dVar20 * dVar77) + dVar70 * dVar58 + dVar89;
    dStack_310 = dVar67 + (dVar37 * dVar70 - dVar37 * dVar70) + dVar70 * dVar37 + dVar73;
    local_328._8_4_ = SUB84(dVar46,0);
    local_328._0_8_ = dVar48 + (dVar58 * dVar20 - dVar68 * dVar47) + dVar70 * dVar77 + dVar74;
    local_328._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    dVar47 = dVar69 * (double)CONCAT44(uStack_494,local_498);
    dVar49 = dVar49 * auVar5._8_8_;
  }
  else {
    dVar47 = dVar47 * dVar69;
    dVar49 = auVar4._8_8_ * dVar49;
    local_488._8_4_ = SUB84(dVar49,0);
    local_488._0_8_ = dVar47;
    local_488._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    dVar67 = dVar20 + dVar20;
    dVar37 = dVar68 + dVar68;
    dVar49 = dVar19 * (dVar19 + dVar19);
    dVar58 = (dVar19 + dVar19) * dVar70;
    local_1a8 = (dVar67 * dVar70 + dVar19 * dVar37) * dVar69;
    dStack_1a0 = (dVar37 * dVar20 - dVar58) * dVar69;
    dVar77 = local_408 * dVar60;
    dVar89 = dStack_400 * dVar86;
    local_1b8 = (dVar37 * dVar20 + dVar58) * dVar86;
    local_1d8 = (dVar19 * dVar37 - dVar67 * dVar70) * dVar60;
    local_218 = (double)CONCAT44(uStack_494,local_498);
    local_1e8._8_8_ = (dVar67 * dVar19 + dVar37 * dVar70) * dVar60;
    local_1e8._0_8_ = (1.0 - (dVar68 * dVar37 + dVar20 * dVar67)) * dVar60;
    dStack_1d0 = 0.0;
    local_1c8._8_8_ = (1.0 - (dVar68 * dVar37 + dVar49)) * dVar86;
    local_1c8._0_8_ = (dVar67 * dVar19 - dVar37 * dVar70) * dVar86;
    uStack_1b0 = 0;
    local_198._8_8_ = 0;
    local_198._0_8_ = (1.0 - (dVar49 + dVar20 * dVar67)) * dVar69;
    local_188._8_4_ = SUB84(dVar46,0);
    local_188._0_8_ = dVar48;
    local_188._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    uStack_170 = 0x3ff0000000000000;
    dVar48 = dStack_430 + dStack_430;
    dVar46 = local_448 + local_448;
    dVar69 = local_438 * (local_438 + local_438);
    local_268 = ((double)DAT_149934d80 - (local_448 * dVar46 + dStack_430 * dVar48)) * local_408;
    dVar67 = (local_438 + local_438) * dStack_440;
    dStack_260 = (dVar48 * local_438 + dVar46 * dStack_440) * local_408;
    local_238 = (dVar46 * dStack_430 + dVar67) * dStack_400;
    local_258 = (local_438 * dVar46 - dVar48 * dStack_440) * local_408;
    uStack_250 = 0;
    local_248._8_8_ = (DAT_149934d80._8_8_ - (local_448 * dVar46 + dVar69)) * dStack_400;
    local_248._0_8_ = (dVar48 * local_438 - dVar46 * dStack_440) * dStack_400;
    uStack_230 = 0;
    dVar49 = (double)local_488._8_8_;
    local_228._8_8_ = (dVar46 * dStack_430 - dVar67) * local_218;
    local_228._0_8_ = (dVar48 * dStack_440 + local_438 * dVar46) * local_218;
    local_218 = (1.0 - (dVar69 + dStack_430 * dVar48)) * local_218;
    uStack_210 = 0;
    local_208._8_8_ = dStack_410;
    local_208._0_8_ = local_418;
    local_1f8 = local_428;
    uStack_1f0 = 0x3ff0000000000000;
    local_178 = dVar59;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= dVar89);
    auVar27._0_8_ = -(ulonglong)(0.0 <= dVar77);
    auVar25 = blendvpd(_DAT_149936790,auVar22,auVar27);
    dVar48 = (double)(~-(ulonglong)(0.0 <= dVar47) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar47) & 0x3ff0000000000000);
    dVar59 = auVar25._0_8_;
    local_158 = local_158 * dVar59;
    local_160 = local_160 * dVar59;
    local_168 = local_168 * dVar59;
    dVar59 = auVar25._8_8_;
    local_138 = local_138 * dVar59;
    local_140 = local_140 * dVar59;
    local_148 = dVar59 * local_148;
    local_118 = local_118 * dVar48;
    local_120 = local_120 * dVar48;
    local_128 = dVar48 * local_128;
    FUN_14481fd10(&local_3b8,&local_168);
    dVar48 = (double)local_3a8._0_8_ * (double)local_3a8._0_8_ + local_3b8 * local_3b8;
    dVar59 = (double)local_3a8._8_8_ * (double)local_3a8._8_8_ + dStack_3b0 * dStack_3b0;
    auVar64._0_8_ = dVar48 + dVar59;
    auVar64._8_8_ = dVar48 + dVar59;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
    auVar25 = sqrtpd(auVar64,auVar64);
    auVar22 = divpd(auVar22,auVar25);
    auVar71._0_8_ = auVar22._0_8_ * (double)local_3a8._0_8_;
    auVar71._8_8_ = auVar22._8_8_ * (double)local_3a8._8_8_;
    local_338 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar28);
    local_348._8_8_ =
         (ulonglong)(dStack_3b0 * auVar22._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
    local_348._0_8_ =
         (ulonglong)(local_3b8 * auVar22._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
    local_328._12_4_ = uStack_fc;
    local_328._8_4_ = uStack_100;
    local_328._0_8_ = local_108;
    local_318 = local_f8;
    dStack_310 = 0.0;
  }
  uVar16 = uStack_470;
  dVar69 = local_478;
  local_308._8_4_ = SUB84(dVar45 * dVar86,0);
  local_308._0_8_ = dVar90 * dVar60;
  local_308._12_4_ = (int)((ulonglong)(dVar45 * dVar86) >> 0x20);
  local_2f8._8_4_ = SUB84(dVar49,0);
  local_2f8._0_8_ = dVar47;
  local_2f8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  local_510 = &DAT_149e1dd24;
  local_518 = (undefined *)CONCAT71(local_518._1_7_,1);
  FUN_14446b7be(param_1,local_348,&local_288,&DAT_149e1dd24);
  dVar47 = local_3f8;
  dVar48 = local_4a0 * (double)local_4f8._0_8_ * 0.07999999821186066;
  dVar49 = local_4b0 * (double)local_4f8._0_8_ * 0.07999999821186066;
  dVar59 = local_4a8 * (double)local_4f8._0_8_ * 0.07999999821186066;
  local_1d8 = local_468 * (double)local_4f8._0_8_ * 0.25;
  local_1e8._8_8_ = dVar69 * (double)local_4f8._0_8_ * 0.25;
  local_1e8._0_8_ = local_3f8 * (double)local_4f8._0_8_ * 0.25;
  local_518 = &DAT_149e1dd24;
  local_510 = (undefined *)((ulonglong)local_510 & 0xffffffff00000000);
  uVar10 = param_1;
  local_168 = dVar59;
  local_160 = dVar49;
  local_158 = dVar48;
  uVar8 = FUN_14446b3fe(param_1,&local_2e8);
  auVar22 = _DAT_149934d80;
  if (1e-08 < *param_4) {
    dVar90 = (double)*param_4;
    local_488 = *(undefined1 (*) [16])(param_5 + 8);
    dVar46 = local_488._0_8_;
    dVar86 = local_488._8_8_;
    auVar25 = *(undefined1 (*) [16])(param_5 + 10);
    dVar60 = auVar25._0_8_;
    auVar61 = minpd(_DAT_149934d80,local_488);
    auVar50 = minpd(ZEXT816(0x3ff0000000000000),auVar25);
    auVar29._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar29);
    auVar41._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
    uVar11 = movmskpd((int)uVar10,auVar41);
    local_4b0 = dVar49;
    local_4a8 = dVar59;
    local_4a0 = dVar48;
    if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar68 = *param_5;
      dVar70 = param_5[1];
      local_3d8 = *(undefined1 (*) [16])(param_5 + 2);
      dVar45 = local_3d8._0_8_;
      dVar67 = local_3d8._8_8_;
      dVar59 = param_5[3];
      dVar48 = param_5[3];
      local_4c8._8_8_ = dVar48 * 1.0;
      local_4c8._0_8_ = dVar59 * 0.0;
      dVar46 = dVar90 * dVar47 * dVar46;
      dVar86 = dVar69 * dVar90 * dVar86;
      local_3e8 = local_468 * dVar90 * dVar60;
      dStack_3e0 = auVar25._8_8_ * 0.0;
      local_3c8._8_4_ = local_3d8._8_4_;
      local_3c8._0_8_ = dVar68;
      local_3c8._12_4_ = local_3d8._12_4_;
      dVar69 = dVar86 * dVar68 - dVar46 * dVar70;
      dVar19 = local_3e8 * dVar70 - dVar86 * dVar45;
      dVar20 = dVar46 * dVar45 - local_3e8 * dVar68;
      dVar90 = dStack_3e0 * dVar67 - dStack_3e0 * dVar67;
      dVar19 = dVar19 + dVar19;
      dVar20 = dVar20 + dVar20;
      dVar69 = dVar69 + dVar69;
      dVar90 = dVar90 + dVar90;
      dVar47 = param_5[1];
      dVar49 = param_5[1];
      dVar37 = dVar45 * 0.0 * -1.0 + dVar47 * 0.0 + *param_5 * 1.0 * 1.0 + dVar59 * 0.0;
      dVar58 = dVar45 * 0.0 * 1.0 + dVar49 * 1.0 + *param_5 * 0.0 * -1.0 + dVar48 * 0.0;
      auVar78._0_8_ = param_5[2] * 1.0 * 1.0 + ((dVar68 * 0.0 * 1.0 + dVar59 * 0.0) - dVar47 * 0.0);
      auVar78._8_8_ =
           param_5[2] * 0.0 * -1.0 + ((dVar68 * 0.0 * -1.0 + dVar48 * 1.0) - dVar49 * 0.0);
      dVar49 = (dVar69 * dVar70 - dVar45 * dVar20) + dVar59 * dVar19 + dVar46 + param_5[4];
      dVar47 = (dVar19 * dVar45 - dVar69 * dVar68) + dVar48 * dVar20 + dVar86 + param_5[5];
      dVar59 = (dVar20 * dVar68 - dVar70 * dVar19) + dVar59 * dVar69 + local_3e8 + param_5[6];
      dVar48 = (dVar90 * dVar67 - dVar90 * (double)local_3c8._8_8_) + dVar48 * dVar90 + dStack_3e0 +
               param_5[7];
      uVar8 = 0;
      uVar79 = local_498;
      uVar81 = uStack_494;
      uVar83 = uStack_490;
      uVar85 = uStack_48c;
      local_458 = auVar25;
    }
    else {
      dVar49 = *param_5;
      dVar45 = param_5[1];
      dVar67 = param_5[2];
      dVar68 = dVar45 + dVar45;
      dVar70 = dVar67 + dVar67;
      dVar37 = dVar49 * (dVar49 + dVar49);
      dVar59 = (DAT_149934d80._8_8_ - (dVar67 * dVar70 + dVar37)) * dVar86;
      dVar48 = param_5[3];
      dVar19 = dVar70 * dVar48;
      dVar20 = (dVar49 + dVar49) * param_5[3];
      dVar48 = dVar68 * dVar48;
      dStack_1a0 = (dVar70 * dVar45 - dVar20) * dVar60;
      local_1a8 = (dVar48 + *param_5 * dVar70) * dVar60;
      local_1b8 = (dVar70 * dVar45 + dVar20) * dVar86;
      local_1e8._8_8_ = (dVar68 * dVar49 + dVar19) * dVar46;
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar67 * dVar70 + dVar45 * dVar68)) * dVar46;
      local_1d8 = (*param_5 * dVar70 - dVar48) * dVar46;
      dStack_1d0 = 0.0;
      local_1c8._8_4_ = SUB84(dVar59,0);
      local_1c8._0_8_ = (dVar68 * dVar49 - dVar19) * dVar86;
      local_1c8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
      uStack_1b0 = 0;
      local_198._8_8_ = 0;
      local_198._0_8_ = (1.0 - (dVar37 + dVar45 * dVar68)) * dVar60;
      local_188 = *(undefined1 (*) [16])(param_5 + 4);
      local_178 = param_5[6];
      uStack_170 = 0x3ff0000000000000;
      local_268 = 1.0;
      dStack_260 = 0.0;
      local_258 = 0.0;
      uStack_250 = 0;
      local_238 = 0.0;
      uStack_230 = 0;
      local_228 = ZEXT816(0);
      local_218 = 1.0;
      uStack_210 = 0;
      local_208._8_8_ = dVar69 * dVar90;
      local_208._0_8_ = dVar90 * dVar47;
      uStack_1f0 = 0x3ff0000000000000;
      local_248 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_1f8 = local_468 * dVar90;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar30._8_8_ = -(ulonglong)(0.0 <= dVar86);
      auVar30._0_8_ = -(ulonglong)(0.0 <= dVar46);
      auVar61 = blendvpd(_DAT_149936790,auVar22,auVar30);
      uVar17 = -(ulonglong)(0.0 <= dVar60 * 1.0);
      dVar48 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
      dVar59 = auVar61._0_8_;
      local_158 = local_158 * dVar59;
      local_160 = local_160 * dVar59;
      local_168 = local_168 * dVar59;
      dVar59 = auVar61._8_8_;
      local_138 = local_138 * dVar59;
      local_140 = local_140 * dVar59;
      local_148 = dVar59 * local_148;
      local_118 = local_118 * dVar48;
      local_120 = local_120 * dVar48;
      local_128 = dVar48 * local_128;
      puVar14 = local_348;
      iVar9 = FUN_14481fd10(puVar14,&local_168);
      uVar8 = SUB84(puVar14,0);
      dVar48 = (double)local_338._0_8_ * (double)local_338._0_8_ +
               (double)local_348._0_8_ * (double)local_348._0_8_;
      dVar59 = (double)local_338._8_8_ * (double)local_338._8_8_ +
               (double)local_348._8_8_ * (double)local_348._8_8_;
      auVar54._0_8_ = dVar48 + dVar59;
      auVar54._8_8_ = dVar48 + dVar59;
      auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
      auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
      auVar61 = sqrtpd(auVar54,auVar54);
      auVar22 = divpd(auVar22,auVar61);
      auVar72._0_8_ = auVar22._0_8_ * (double)local_338._0_8_;
      auVar72._8_8_ = auVar22._8_8_ * (double)local_338._8_8_;
      dVar37 = (double)((ulonglong)((double)local_348._0_8_ * auVar22._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_));
      dVar58 = (double)((ulonglong)((double)local_348._8_8_ * auVar22._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_));
      auVar78 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar72,auVar31);
      dVar47 = (double)CONCAT44(uStack_fc,uStack_100);
      dVar48 = 0.0;
      local_478 = dVar69;
      uStack_470 = uVar16;
      dVar59 = local_f8;
      dVar49 = local_108;
    }
    auVar61 = local_488;
    uVar76 = uStack_48c;
    uVar84 = uStack_490;
    uVar82 = uStack_494;
    uVar80 = local_498;
    auVar22 = _DAT_149934d80;
    dVar60 = dVar60 * 1.0;
    dVar86 = auVar25._8_8_ * 0.0;
    local_478 = -local_478;
    uStack_470 = uStack_470 ^ 0x8000000000000000;
    local_3f8 = -local_3f8;
    uStack_3f0 = uStack_3f0 ^ 0x8000000000000000;
    local_468 = -local_468;
    uStack_460 = uStack_460 ^ 0x8000000000000000;
    local_318 = 0.0;
    dStack_310 = 0.0;
    local_328 = ZEXT816(0);
    dVar69 = local_488._0_8_;
    dVar46 = local_488._8_8_;
    auVar25 = minpd(local_488,_DAT_149934d80);
    auVar55._8_8_ = dVar86;
    auVar55._0_8_ = dVar60;
    auVar50 = minpd(auVar55,ZEXT416(0x3ff00000) << 0x20);
    auVar42._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar9 = movmskpd(iVar9,auVar42);
    auVar56._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
    auVar56._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
    uVar11 = movmskpd(uVar8,auVar56);
    dVar90 = auVar78._0_8_;
    dVar45 = auVar78._8_8_;
    if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar70 = dVar37 * 0.0;
      dVar19 = dVar58 * 0.0;
      dVar20 = dVar45 * 0.0 * 1.0;
      dVar77 = dVar90 * 0.0 * -1.0;
      dVar67 = dVar19 * -1.0 + dVar37 + dVar20 + dVar90 * 0.0;
      dVar68 = dVar70 * 1.0 + dVar58 + dVar77 + dVar45 * 0.0;
      auVar88._0_8_ = ((dVar19 * 1.0 + dVar90) - dVar70) + dVar20;
      auVar88._8_8_ = ((dVar70 * -1.0 + dVar45) - dVar19) + dVar77;
      local_348._8_4_ = SUB84(dVar68,0);
      local_348._0_8_ = dVar67;
      local_348._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
      dVar59 = dVar59 * 1.0;
      dVar48 = dVar48 * 0.0;
      dVar90 = dVar47 * 0.0 - dVar49 * 0.0;
      dVar45 = dVar59 * 0.0 - dVar47 * 0.0;
      dVar70 = dVar49 * 0.0 - dVar59 * 0.0;
      dVar19 = dVar48 * 1.0 - dVar48 * 1.0;
      dVar45 = dVar45 + dVar45;
      dVar70 = dVar70 + dVar70;
      dVar90 = dVar90 + dVar90;
      dVar19 = dVar19 + dVar19;
      local_4d8 = local_4d8 + (dVar90 * 0.0 - dVar70 * 0.0) + dVar49 + dVar45;
      dStack_4d0 = dStack_4d0 + (dVar45 * 0.0 - dVar90 * 0.0) + dVar47 + dVar70;
      local_318 = local_4e8 + (dVar70 * 0.0 - dVar45 * 0.0) + dVar59 + dVar90;
      dStack_310 = dStack_4e0 + (dVar19 * 1.0 - dVar19 * 1.0) + dVar48 + dVar19;
      local_328._8_8_ = dStack_4d0;
      local_328._0_8_ = local_4d8;
    }
    else {
      local_1e8 = ZEXT416(0x3ff00000) << 0x20;
      local_1d8 = 0.0;
      dStack_1d0 = 0.0;
      local_1b8 = 0.0;
      uStack_1b0 = 0;
      local_1a8 = 0.0;
      dStack_1a0 = 0.0;
      local_198 = ZEXT416(0x3ff00000) << 0x20;
      local_188._8_8_ = dStack_4d0;
      local_188._0_8_ = local_4d8;
      local_178 = local_4e8;
      uStack_170 = 0x3ff0000000000000;
      dVar19 = dVar58 + dVar58;
      dVar67 = dVar90 + dVar90;
      dVar70 = dVar37 * (dVar37 + dVar37);
      local_268 = ((double)DAT_149934d80 - (dVar90 * dVar67 + dVar58 * dVar19)) * dVar69;
      dVar68 = (dVar37 + dVar37) * dVar45;
      dVar48 = (dVar67 * dVar58 - dVar68) * dVar60;
      dStack_260 = (dVar19 * dVar37 + dVar67 * dVar45) * dVar69;
      local_238 = (dVar67 * dVar58 + dVar68) * dVar46;
      local_258 = (dVar37 * dVar67 - dVar19 * dVar45) * dVar69;
      uStack_250 = 0;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar90 * dVar67 + dVar70)) * dVar46;
      local_248._0_8_ = (dVar19 * dVar37 - dVar67 * dVar45) * dVar46;
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar48,0);
      local_228._0_8_ = (dVar37 * dVar67 + dVar19 * dVar45) * dVar60;
      local_228._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      local_218 = (1.0 - (dVar70 + dVar58 * dVar19)) * dVar60;
      uStack_210 = 0;
      local_208._8_8_ = dVar47;
      local_208._0_8_ = dVar49;
      uStack_1f0 = 0x3ff0000000000000;
      local_1f8 = dVar59;
      local_1c8 = ZEXT416(0x3ff00000) << 0x60;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar32._8_8_ = -(ulonglong)(0.0 <= dVar46);
      auVar32._0_8_ = -(ulonglong)(0.0 <= dVar69);
      auVar25 = blendvpd(_DAT_149936790,auVar22,auVar32);
      uVar16 = -(ulonglong)(0.0 <= dVar60 * 1.0);
      dVar48 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
      dVar59 = auVar25._0_8_;
      local_158 = local_158 * dVar59;
      local_160 = local_160 * dVar59;
      local_168 = local_168 * dVar59;
      dVar59 = auVar25._8_8_;
      local_138 = local_138 * dVar59;
      local_140 = local_140 * dVar59;
      local_148 = dVar59 * local_148;
      local_118 = local_118 * dVar48;
      local_120 = local_120 * dVar48;
      local_128 = dVar48 * local_128;
      FUN_14481fd10(&local_3b8,&local_168);
      dVar48 = (double)local_3a8._0_8_ * (double)local_3a8._0_8_ + local_3b8 * local_3b8;
      dVar59 = (double)local_3a8._8_8_ * (double)local_3a8._8_8_ + dStack_3b0 * dStack_3b0;
      auVar57._0_8_ = dVar48 + dVar59;
      auVar57._8_8_ = dVar48 + dVar59;
      auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
      auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
      auVar25 = sqrtpd(auVar57,auVar57);
      auVar22 = divpd(auVar22,auVar25);
      auVar65._0_8_ = auVar22._0_8_ * (double)local_3a8._0_8_;
      auVar65._8_8_ = auVar22._8_8_ * (double)local_3a8._8_8_;
      dVar67 = (double)((ulonglong)(local_3b8 * auVar22._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
      dVar68 = (double)((ulonglong)(dStack_3b0 * auVar22._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
      auVar88 = blendvpd(ZEXT416(0x3ff00000) << 0x60,auVar65,auVar33);
      local_348._8_4_ = SUB84(dVar68,0);
      local_348._0_8_ = dVar67;
      local_348._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
      dStack_4d0 = (double)CONCAT44(uStack_fc,uStack_100);
      local_4d8 = local_108;
      local_328._8_8_ = dStack_4d0;
      local_328._0_8_ = local_108;
      local_318 = local_f8;
      dStack_310 = 0.0;
      uVar79 = uVar80;
      uVar81 = uVar82;
      uVar83 = uVar84;
      uVar85 = uVar76;
    }
    dVar60 = dVar60 * 1.0;
    dVar86 = dVar86 * 0.0;
    uVar8 = (undefined4)((ulonglong)dVar86 >> 0x20);
    local_308 = auVar61;
    local_2f8._8_4_ = SUB84(dVar86,0);
    local_2f8._0_8_ = dVar60;
    local_2f8._12_4_ = uVar8;
    plVar13 = *(longlong **)(DAT_14cb0d2b0 + 0x6a0);
    local_4e8 = local_318;
    dStack_4e0 = dStack_310;
    local_338 = auVar88;
    uVar10 = (**(code **)(*plVar13 + 0x2f0))();
    dVar59 = dStack_400;
    dVar48 = local_408;
    auVar22 = _DAT_149934d80;
    local_358 = local_4f8._0_8_;
    local_350 = local_4f8._0_8_;
    local_388 = 0.0;
    dStack_380 = 0.0;
    local_398 = 0.0;
    dStack_390 = 0.0;
    auVar7._8_8_ = dStack_400;
    auVar7._0_8_ = local_408;
    auVar25 = minpd(auVar7,auVar61);
    auVar43._4_4_ = uVar81;
    auVar43._0_4_ = uVar79;
    auVar43._12_4_ = uVar85;
    auVar43._8_4_ = uVar83;
    auVar1._8_4_ = SUB84(dVar86,0);
    auVar1._0_8_ = dVar60;
    auVar1._12_4_ = uVar8;
    auVar61 = minpd(auVar43,auVar1);
    auVar34._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar9 = movmskpd((int)uVar10,auVar34);
    auVar44._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
    auVar44._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
    uVar11 = movmskpd((int)plVar13,auVar44);
    dVar47 = auVar88._0_8_;
    dVar49 = auVar88._8_8_;
    if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
      local_3b8 = dStack_430 * dVar47 * -1.0 +
                  local_448 * dVar68 + dStack_440 * dVar67 * 1.0 + local_438 * dVar49;
      dStack_3b0 = local_438 * dVar47 * 1.0 +
                   dStack_440 * dVar68 + local_448 * dVar67 * -1.0 + dStack_430 * dVar49;
      local_3a8._8_8_ =
           local_448 * dVar47 * -1.0 +
           ((dVar67 * local_438 * -1.0 + dStack_440 * dVar49) - dVar68 * dStack_430);
      local_3a8._0_8_ =
           dStack_440 * dVar47 * 1.0 +
           ((dVar67 * dStack_430 * 1.0 + local_448 * dVar49) - dVar68 * local_438);
      dVar20 = local_418 * dVar69;
      dVar37 = dStack_410 * dVar46;
      dVar58 = local_428 * dVar60;
      dVar77 = dStack_420 * dVar86;
      dVar90 = dVar37 * dVar67 - dVar20 * dVar68;
      dVar45 = dVar58 * dVar68 - dVar37 * dVar47;
      dVar70 = dVar20 * dVar47 - dVar67 * dVar58;
      dVar19 = dVar77 * dVar49 - dVar49 * dVar77;
      dVar45 = dVar45 + dVar45;
      dVar70 = dVar70 + dVar70;
      dVar90 = dVar90 + dVar90;
      dVar19 = dVar19 + dVar19;
      local_398 = local_4d8 + (dVar90 * dVar68 - dVar47 * dVar70) + dVar49 * dVar45 + dVar20;
      dStack_390 = dStack_4d0 + (dVar45 * dVar47 - dVar90 * dVar67) + dVar49 * dVar70 + dVar37;
      local_388 = local_4e8 + (dVar70 * dVar67 - dVar68 * dVar45) + dVar49 * dVar90 + dVar58;
      dStack_380 = dStack_4e0 + (dVar19 * dVar49 - dVar19 * dVar49) + dVar49 * dVar19 + dVar77;
      dVar90 = (double)CONCAT44(uVar81,uVar79) * dVar60;
      dVar86 = (double)CONCAT44(uVar85,uVar83) * dVar86;
    }
    else {
      dVar20 = dVar68 + dVar68;
      dVar37 = dVar47 + dVar47;
      dVar19 = dVar67 * (dVar67 + dVar67);
      dVar58 = (dVar67 + dVar67) * dVar49;
      dVar90 = (double)CONCAT44(uVar81,uVar79) * dVar60;
      dVar86 = (double)CONCAT44(uVar85,uVar83) * dVar86;
      local_4c8._8_4_ = SUB84(dVar86,0);
      local_4c8._0_8_ = dVar90;
      local_4c8._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
      local_1a8 = (dVar20 * dVar49 + dVar67 * dVar37) * dVar60;
      dStack_1a0 = (dVar37 * dVar68 - dVar58) * dVar60;
      dVar45 = local_408 * dVar69;
      dVar70 = dStack_400 * dVar46;
      local_1b8 = (dVar37 * dVar68 + dVar58) * dVar46;
      local_1d8 = (dVar67 * dVar37 - dVar20 * dVar49) * dVar69;
      local_1e8._8_8_ = (dVar20 * dVar67 + dVar37 * dVar49) * dVar69;
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar47 * dVar37 + dVar68 * dVar20)) * dVar69;
      dStack_1d0 = 0.0;
      local_1c8._8_8_ = (DAT_149934d80._8_8_ - (dVar47 * dVar37 + dVar19)) * dVar46;
      local_1c8._0_8_ = (dVar20 * dVar67 - dVar37 * dVar49) * dVar46;
      uStack_1b0 = 0;
      local_198._8_8_ = 0;
      local_198._0_8_ = (1.0 - (dVar19 + dVar68 * dVar20)) * dVar60;
      local_188._8_8_ = dStack_4d0;
      local_188._0_8_ = local_4d8;
      local_178 = local_4e8;
      uStack_170 = 0x3ff0000000000000;
      dVar47 = dStack_430 + dStack_430;
      dVar60 = local_448 + local_448;
      dVar49 = local_438 * (local_438 + local_438);
      local_218 = (1.0 - (dVar49 + dStack_430 * dVar47)) * (double)CONCAT44(uVar81,uVar79);
      dVar67 = (local_438 + local_438) * dStack_440;
      local_268 = ((double)DAT_149934d80 - (local_448 * dVar60 + dStack_430 * dVar47)) * local_408;
      dStack_260 = (dVar47 * local_438 + dVar60 * dStack_440) * local_408;
      local_238 = (dVar60 * dStack_430 + dVar67) * dStack_400;
      local_258 = (local_438 * dVar60 - dVar47 * dStack_440) * local_408;
      dVar86 = (double)local_4c8._8_8_;
      uStack_250 = 0;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (local_448 * dVar60 + dVar49)) * dStack_400;
      local_248._0_8_ = (dVar47 * local_438 - dVar60 * dStack_440) * dStack_400;
      uStack_230 = 0;
      local_228._8_8_ = (dVar60 * dStack_430 - dVar67) * (double)CONCAT44(uVar81,uVar79);
      local_228._0_8_ = (dVar47 * dStack_440 + local_438 * dVar60) * (double)CONCAT44(uVar81,uVar79)
      ;
      uStack_210 = 0;
      local_208._8_8_ = dStack_410;
      local_208._0_8_ = local_418;
      local_1f8 = local_428;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar35._8_8_ = -(ulonglong)(0.0 <= dVar70);
      auVar35._0_8_ = -(ulonglong)(0.0 <= dVar45);
      auVar25 = blendvpd(_DAT_149936790,auVar22,auVar35);
      dVar47 = (double)(~-(ulonglong)(0.0 <= dVar90) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= dVar90) & 0x3ff0000000000000);
      dVar49 = auVar25._0_8_;
      local_158 = local_158 * dVar49;
      local_160 = local_160 * dVar49;
      local_168 = local_168 * dVar49;
      dVar49 = auVar25._8_8_;
      local_138 = local_138 * dVar49;
      local_140 = local_140 * dVar49;
      local_148 = dVar49 * local_148;
      local_118 = local_118 * dVar47;
      local_120 = local_120 * dVar47;
      local_128 = dVar47 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar47 = local_278 * local_278 + local_288 * local_288;
      dVar49 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar66._0_8_ = dVar47 + dVar49;
      auVar66._8_8_ = dVar47 + dVar49;
      auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_);
      auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_);
      auVar25 = sqrtpd(auVar66,auVar66);
      auVar22 = divpd(auVar22,auVar25);
      auVar91._0_8_ = auVar22._0_8_ * local_278;
      auVar91._8_8_ = auVar22._8_8_ * dStack_270;
      local_3b8 = (double)((ulonglong)(local_288 * auVar22._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_));
      dStack_3b0 = (double)((ulonglong)(dStack_280 * auVar22._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_));
      local_3a8 = blendvpd(ZEXT416(0x3ff00000) << 0x60,auVar91,auVar36);
      dStack_390 = (double)CONCAT44(uStack_fc,uStack_100);
      local_398 = local_108;
      local_388 = local_f8;
      dStack_380 = 0.0;
    }
    local_378._8_4_ = SUB84(dVar59 * dVar46,0);
    local_378._0_8_ = dVar48 * dVar69;
    local_378._12_4_ = (int)((ulonglong)(dVar59 * dVar46) >> 0x20);
    local_368._8_4_ = SUB84(dVar86,0);
    local_368._0_8_ = dVar90;
    local_368._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
    local_510 = &DAT_149e1dd24;
    local_518 = (undefined *)CONCAT71(local_518._1_7_,1);
    local_508 = uVar10;
    FUN_14446b7be(param_1,&local_3b8,&local_358,&DAT_149e1dd24);
    local_168 = local_4a8;
    local_160 = local_4b0;
    local_158 = local_4a0;
    local_1d8 = local_468 * (double)local_4f8._0_8_ * 0.25;
    local_1e8._8_8_ = local_478 * (double)local_4f8._0_8_ * 0.25;
    local_1e8._0_8_ = local_3f8 * (double)local_4f8._0_8_ * 0.25;
    local_518 = &DAT_149e1dd24;
    local_510 = (undefined *)((ulonglong)local_510 & 0xffffffff00000000);
    FUN_14446b3fe(param_1,local_348);
  }
  if ((local_e0 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149124924 FUN_149124924 body=12211 status=ok
// SIG undefined FUN_149124924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149124924(undefined8 param_1,int param_2,undefined4 param_3,float *param_4,double *param_5,
                  double *param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  undefined4 unaff_EBP;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar60;
  undefined1 auVar59 [16];
  double dVar61;
  double dVar62;
  double dVar64;
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  double dVar66;
  double dVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined1 auVar72 [16];
  undefined1 auStack_3f8 [32];
  double *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  float *local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  longlong local_2e8 [2];
  double *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double *local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  auVar48 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  dVar52 = DAT_14c8464c0;
  dVar30 = DAT_14c8464c0._8_8_;
  local_3b8 = (float *)DAT_14c8464d0;
  dStack_3b0 = dRam000000014c8464d8;
  local_368 = (double)CONCAT44(local_368._4_4_,param_3);
  if (param_2 == 2) {
    dVar29 = 0.7071067966408575;
    dVar35 = 0.0;
    dVar40 = 0.0;
    dVar41 = 0.7071067657322372;
  }
  else {
    dVar29 = DAT_14c846480;
    dVar35 = DAT_14c846488;
    dVar40 = DAT_14c846490;
    dVar41 = DAT_14c846498;
    if (param_2 == 1) {
      dVar29 = 0.0;
      dVar35 = 0.7071067966408575;
      dVar40 = 0.0;
      dVar41 = 0.7071067657322372;
    }
  }
  auVar42 = *(undefined1 (*) [16])(param_5 + 8);
  dVar13 = auVar42._0_8_;
  dVar36 = auVar42._8_8_;
  auVar43 = *(undefined1 (*) [16])(param_5 + 10);
  dVar46 = auVar43._0_8_;
  dVar28 = auVar43._8_8_;
  auVar24 = minpd(_DAT_14c8464c0,auVar42);
  auVar42._8_8_ = dRam000000014c8464d8;
  auVar42._0_8_ = DAT_14c8464d0;
  auVar42 = minpd(auVar42,auVar43);
  auVar43._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
  auVar43._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
  iVar8 = movmskpd((int)local_f0,auVar43);
  auVar24._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
  uVar9 = movmskpd(param_2,auVar24);
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar60 = *param_5;
    dVar64 = param_5[1];
    dVar54 = param_5[3];
    dVar51 = param_5[3];
    dVar47 = param_5[1];
    dVar69 = param_5[1];
    dVar66 = param_5[2];
    dVar62 = param_5[3];
    dVar55 = param_5[2];
    dVar50 = param_5[2];
    dVar23 = dVar35 * dVar55 * -1.0 + dVar40 * dVar47 + dVar41 * *param_5 * 1.0 + dVar29 * dVar54;
    dVar27 = dVar29 * dVar50 * 1.0 + dVar41 * dVar69 + dVar40 * *param_5 * -1.0 + dVar35 * dVar51;
    auVar48._0_8_ =
         dVar41 * dVar55 * 1.0 + ((*param_5 * dVar35 * 1.0 + dVar40 * dVar54) - dVar29 * dVar47);
    auVar48._8_8_ =
         dVar40 * dVar50 * -1.0 + ((*param_5 * dVar29 * -1.0 + dVar41 * dVar51) - dVar35 * dVar69);
    dVar29 = DAT_14c8464a0 * dVar13;
    dVar35 = DAT_14c8464a8 * dVar36;
    dVar40 = DAT_14c8464b0 * dVar46;
    dVar41 = DAT_14c8464b8 * dVar28;
    dVar55 = dVar35 * dVar60 - dVar29 * dVar64;
    dVar50 = dVar40 * dVar64 - dVar35 * dVar66;
    dVar69 = dVar29 * dVar66 - dVar40 * dVar60;
    dVar47 = dVar41 * dVar62 - dVar41 * dVar62;
    dVar50 = dVar50 + dVar50;
    dVar69 = dVar69 + dVar69;
    dVar55 = dVar55 + dVar55;
    dVar47 = dVar47 + dVar47;
    dVar29 = (dVar55 * dVar64 - dVar66 * dVar69) + dVar54 * dVar50 + dVar29 + param_5[4];
    dVar35 = (dVar50 * dVar66 - dVar55 * dVar60) + dVar51 * dVar69 + dVar35 + param_5[5];
    local_3b8 = (float *)((dVar69 * dVar60 - dVar64 * dVar50) + dVar54 * dVar55 + dVar40 +
                         param_5[6]);
    dStack_3b0 = (dVar47 * dVar62 - dVar47 * dVar62) + dVar51 * dVar47 + dVar41 + param_5[7];
    auVar68._8_8_ = dRam000000014c8464d8 * dVar28;
    auVar68._0_8_ = DAT_14c8464d0 * dVar46;
  }
  else {
    dVar60 = *param_5;
    dVar64 = param_5[1];
    dVar66 = param_5[2];
    dVar54 = dVar64 + dVar64;
    dVar69 = dVar66 + dVar66;
    local_378._8_8_ = DAT_14c8464b8;
    local_378._0_8_ = DAT_14c8464b0;
    dVar50 = dVar60 * (dVar60 + dVar60);
    local_3a8._8_8_ = DAT_14c8464a8;
    local_3a8._0_8_ = DAT_14c8464a0;
    dVar51 = param_5[3];
    dVar47 = dVar69 * dVar51;
    dVar55 = (dVar60 + dVar60) * param_5[3];
    dVar51 = dVar54 * dVar51;
    dVar62 = DAT_14c8464d0 * dVar46;
    local_398._8_8_ = dRam000000014c8464d8 * dVar28;
    local_398._0_8_ = dVar62;
    auVar68 = local_398;
    local_128 = (1.0 - (dVar50 + dVar64 * dVar54)) * dVar46;
    local_138 = (dVar51 + *param_5 * dVar69) * dVar46;
    dStack_130 = (dVar69 * dVar64 - dVar55) * dVar46;
    local_178 = (double *)(((double)DAT_149934d80 - (dVar66 * dVar69 + dVar64 * dVar54)) * dVar13);
    dStack_170 = (dVar54 * dVar60 + dVar47) * dVar13;
    local_148 = (dVar69 * dVar64 + dVar55) * dVar36;
    local_168 = (*param_5 * dVar69 - dVar51) * dVar13;
    dStack_160 = 0.0;
    local_158._8_8_ = (DAT_149934d80._8_8_ - (dVar66 * dVar69 + dVar50)) * dVar36;
    local_158._0_8_ = (dVar54 * dVar60 - dVar47) * dVar36;
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_5[4];
    dStack_110 = param_5[5];
    local_108 = param_5[6];
    dStack_100 = 1.0;
    dVar69 = dVar35 + dVar35;
    dVar51 = dVar40 + dVar40;
    dVar28 = dVar29 * (dVar29 + dVar29);
    local_1a8 = (1.0 - (dVar28 + dVar35 * dVar69)) * DAT_14c8464d0;
    dVar54 = (dVar29 + dVar29) * dVar41;
    dVar46 = (dVar51 * dVar35 - dVar54) * DAT_14c8464d0;
    local_1f8 = (double *)(((double)DAT_149934d80 - (dVar40 * dVar51 + dVar35 * dVar69)) * dVar52);
    dStack_1f0 = (dVar69 * dVar29 + dVar51 * dVar41) * dVar52;
    local_1c8 = (dVar51 * dVar35 + dVar54) * dVar30;
    local_1e8 = (dVar29 * dVar51 - dVar69 * dVar41) * dVar52;
    uStack_1e0 = 0;
    local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar40 * dVar51 + dVar28)) * dVar30;
    local_1d8._0_8_ = (dVar69 * dVar29 - dVar51 * dVar41) * dVar30;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar46,0);
    local_1b8._0_8_ = (dVar69 * dVar41 + dVar29 * dVar51) * DAT_14c8464d0;
    local_1b8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    uStack_1a0 = 0;
    local_198 = DAT_14c8464a0;
    dStack_190 = DAT_14c8464a8;
    local_188._8_8_ = 0x3ff0000000000000;
    local_188._0_8_ = DAT_14c8464b0;
    FUN_1447fea8d(&local_2b8);
    FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar30 * dVar36);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar52 * dVar13);
    auVar42 = blendvpd(_DAT_149936790,auVar48,auVar14);
    uVar12 = -(ulonglong)(0.0 <= dVar62);
    dVar29 = (double)(~uVar12 & 0xbff0000000000000 | uVar12 & 0x3ff0000000000000);
    dVar35 = auVar42._0_8_;
    local_2a8 = local_2a8 * dVar35;
    dStack_2b0 = dStack_2b0 * dVar35;
    local_2b8 = local_2b8 * dVar35;
    dVar35 = auVar42._8_8_;
    local_288 = local_288 * dVar35;
    local_290 = local_290 * dVar35;
    dStack_298 = dVar35 * dStack_298;
    dStack_268 = dStack_268 * dVar29;
    local_270 = local_270 * dVar29;
    local_278 = dVar29 * local_278;
    param_5 = (double *)FUN_14481fd10(&local_2d8,&local_2b8);
    dVar29 = (double)CONCAT44(uStack_2cc,iStack_2d0);
    dVar35 = local_2c8 * local_2c8 + (double)local_2d8 * (double)local_2d8;
    dVar40 = dStack_2c0 * dStack_2c0 + dVar29 * dVar29;
    auVar37._0_8_ = dVar35 + dVar40;
    auVar37._8_8_ = dVar35 + dVar40;
    auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
    auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
    auVar42 = sqrtpd(auVar37,auVar37);
    auVar48 = divpd(auVar48,auVar42);
    auVar49._0_8_ = auVar48._0_8_ * local_2c8;
    auVar49._8_8_ = auVar48._8_8_ * dStack_2c0;
    dVar23 = (double)((ulonglong)((double)local_2d8 * auVar48._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
    dVar27 = (double)((ulonglong)(dVar29 * auVar48._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
    auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar15);
    dStack_3b0 = 0.0;
    local_3b8 = (float *)local_248;
    dVar29 = local_258;
    dVar35 = dStack_250;
  }
  auVar42 = _DAT_149934d80;
  dVar30 = dVar30 * dVar36;
  dVar52 = dVar52 * dVar13;
  uVar71 = (undefined4)((ulonglong)dVar30 >> 0x20);
  uVar70 = SUB84(dVar30,0);
  dVar69 = *param_6 - dVar29;
  dVar46 = param_6[1] - dVar35;
  dVar13 = param_6[2] - (double)local_3b8;
  dVar28 = -dVar23;
  dVar55 = -dVar27;
  dVar50 = auVar48._0_8_;
  dVar36 = dVar50 * -1.0;
  dVar60 = auVar48._8_8_;
  dVar51 = dVar60 * 1.0;
  dVar47 = dVar69 * dVar36 - dVar28 * dVar13;
  dVar54 = dVar46 * dVar28 - dVar55 * dVar69;
  dVar64 = dVar13 * dVar55 - dVar36 * dVar46;
  dVar64 = dVar64 + dVar64;
  dVar47 = dVar47 + dVar47;
  dVar54 = dVar54 + dVar54;
  dVar40 = (double)DAT_149934d80;
  dVar41 = DAT_149934d80._8_8_;
  auVar4._8_4_ = uVar70;
  auVar4._0_8_ = dVar52;
  auVar4._12_4_ = uVar71;
  auVar48 = divpd(_DAT_149934d80,auVar4);
  dVar66 = auVar68._0_8_;
  dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar66)) & (ulonglong)(1.0 / dVar66)) *
           (dVar51 * dVar54 + dVar13 + (dVar47 * dVar28 - dVar64 * dVar55));
  local_3a8 = ZEXT416((uint)ABS((float)dVar28));
  dVar28 = dVar28 * 0.5;
  dVar46 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar30)) & auVar48._8_8_) *
           (dVar23 * dVar54 + dVar36 * dVar64 + dVar51 * dVar47 + dVar46) * 0.0 * 0.5;
  dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar52)) & auVar48._0_8_) *
           ((dVar54 * dVar55 - dVar47 * dVar36) + dVar51 * dVar64 + dVar69) * 0.0 * 0.5;
  auVar5._8_4_ = uVar70;
  auVar5._0_8_ = dVar52;
  auVar5._12_4_ = uVar71;
  auVar48 = minpd(_DAT_149934d80,auVar5);
  auVar43 = minpd(ZEXT816(0x3ff0000000000000),auVar68);
  auVar31._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
  iVar8 = movmskpd(unaff_EBP,auVar31);
  auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
  auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
  uVar9 = movmskpd((int)param_5,auVar44);
  local_398._8_8_ = auVar68._8_8_;
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar36 = dVar50 * 0.0 * -1.0 + dVar27 * 0.0 + dVar23 * 1.0 * 1.0 + dVar60 * 0.0;
    dVar51 = dVar50 * 0.0 * 1.0 + dVar27 * 1.0 + dVar23 * 0.0 * -1.0 + dVar60 * 0.0;
    auVar72._0_8_ = dVar50 * 1.0 * 1.0 + ((dVar23 * 0.0 * 1.0 + dVar60 * 0.0) - dVar27 * 0.0);
    auVar72._8_8_ = dVar50 * 0.0 * -1.0 + ((dVar23 * 0.0 * -1.0 + dVar60 * 1.0) - dVar27 * 0.0);
    dVar13 = dVar13 * dVar52;
    dVar46 = dVar46 * dVar30;
    dVar28 = dVar28 * dVar66;
    dVar54 = (double)local_398._8_8_ * 0.0;
    dVar69 = dVar46 * dVar23 - dVar27 * dVar13;
    dVar47 = dVar28 * dVar27 - dVar50 * dVar46;
    dVar55 = dVar13 * dVar50 - dVar23 * dVar28;
    dVar64 = dVar54 * dVar60 - dVar60 * dVar54;
    dVar47 = dVar47 + dVar47;
    dVar55 = dVar55 + dVar55;
    dVar69 = dVar69 + dVar69;
    dVar64 = dVar64 + dVar64;
    dVar29 = dVar29 + (dVar69 * dVar27 - dVar50 * dVar55) + dVar60 * dVar47 + dVar13;
    dVar35 = dVar35 + (dVar47 * dVar50 - dVar69 * dVar23) + dVar60 * dVar55 + dVar46;
    local_3b8 = (float *)((double)local_3b8 +
                         (dVar55 * dVar23 - dVar27 * dVar47) + dVar60 * dVar69 + dVar28);
    dStack_3b0 = dStack_3b0 + (dVar64 * dVar60 - dVar64 * dVar60) + dVar60 * dVar64 + dVar54;
    auVar59._8_8_ = (double)local_398._8_8_ * 0.0;
    auVar59._0_8_ = dVar66 * 1.0;
    uVar7 = 0;
  }
  else {
    dVar36 = dVar27 + dVar27;
    dVar54 = dVar50 + dVar50;
    dVar51 = dVar23 * (dVar23 + dVar23);
    local_178 = (double *)((dVar40 - (dVar50 * dVar54 + dVar27 * dVar36)) * dVar52);
    dVar69 = (dVar23 + dVar23) * dVar60;
    dStack_130 = (dVar54 * dVar27 - dVar69) * dVar66;
    local_138 = (dVar36 * dVar60 + dVar23 * dVar54) * dVar66;
    dStack_170 = (dVar36 * dVar23 + dVar54 * dVar60) * dVar52;
    local_148 = (dVar54 * dVar27 + dVar69) * dVar30;
    local_168 = (dVar23 * dVar54 - dVar36 * dVar60) * dVar52;
    dStack_160 = 0.0;
    local_158._8_8_ = (dVar41 - (dVar50 * dVar54 + dVar51)) * dVar30;
    local_158._0_8_ = (dVar36 * dVar23 - dVar54 * dVar60) * dVar30;
    uStack_140 = 0;
    local_128 = (1.0 - (dVar51 + dVar27 * dVar36)) * dVar66;
    uStack_120 = 0;
    dStack_100 = 1.0;
    local_1f8 = (double *)&DAT_3ff0000000000000;
    dStack_1f0 = 0.0;
    local_1e8 = 0.0;
    uStack_1e0 = 0;
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    local_1b8 = ZEXT816(0);
    local_1a8 = 1.0;
    uStack_1a0 = 0;
    local_188._8_8_ = 0x3ff0000000000000;
    local_188._0_8_ = dVar28;
    auVar59._0_8_ = dVar66 * 1.0;
    auVar59._8_8_ = (double)local_398._8_8_ * 0.0;
    local_398 = auVar68;
    local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_198 = dVar13;
    dStack_190 = dVar46;
    local_118 = dVar29;
    dStack_110 = dVar35;
    local_108 = (double)local_3b8;
    FUN_1447fea8d(&local_2b8);
    FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar30);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar52);
    auVar48 = blendvpd(_DAT_149936790,auVar42,auVar16);
    dVar29 = (double)(~-(ulonglong)(0.0 <= auVar59._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= auVar59._0_8_) & 0x3ff0000000000000);
    dVar35 = auVar48._0_8_;
    local_2a8 = local_2a8 * dVar35;
    dStack_2b0 = dStack_2b0 * dVar35;
    local_2b8 = local_2b8 * dVar35;
    dVar35 = auVar48._8_8_;
    local_288 = local_288 * dVar35;
    local_290 = local_290 * dVar35;
    dStack_298 = dVar35 * dStack_298;
    dStack_268 = dStack_268 * dVar29;
    local_270 = local_270 * dVar29;
    local_278 = dVar29 * local_278;
    uVar7 = FUN_14481fd10(&local_2d8,&local_2b8);
    dVar29 = (double)CONCAT44(uStack_2cc,iStack_2d0);
    dVar35 = local_2c8 * local_2c8 + (double)local_2d8 * (double)local_2d8;
    dVar13 = dStack_2c0 * dStack_2c0 + dVar29 * dVar29;
    auVar38._0_8_ = dVar35 + dVar13;
    auVar38._8_8_ = dVar35 + dVar13;
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
    auVar48 = sqrtpd(auVar38,auVar38);
    auVar48 = divpd(auVar42,auVar48);
    auVar45._0_8_ = auVar48._0_8_ * local_2c8;
    auVar45._8_8_ = auVar48._8_8_ * dStack_2c0;
    dVar36 = (double)((ulonglong)((double)local_2d8 * auVar48._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
    dVar51 = (double)((ulonglong)(dVar29 * auVar48._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
    auVar72 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar17);
    dStack_3b0 = 0.0;
    local_3b8 = (float *)local_248;
    dVar29 = local_258;
    dVar35 = dStack_250;
  }
  local_398._0_8_ = (undefined8)(float)local_3a8._0_4_;
  local_398._8_8_ = 0;
  auVar48 = minpd(ZEXT816(0x3ff0000000000000),auVar59);
  auVar25._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
  uVar9 = movmskpd(uVar7,auVar25);
  local_378._8_4_ = uVar70;
  local_378._0_8_ = dVar52;
  local_378._12_4_ = uVar71;
  dVar28 = auVar72._0_8_;
  dVar13 = auVar59._0_8_;
  dVar54 = auVar72._8_8_;
  dVar46 = auVar59._8_8_;
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar40 = dVar28 * 0.0 * -1.0 + dVar51 * 0.0 + dVar36 * 1.0 * 1.0 + dVar54 * 0.0;
    dVar69 = dVar28 * 0.0 * 1.0 + dVar51 * 1.0 + dVar36 * 0.0 * -1.0 + dVar54 * 0.0;
    local_3a8._8_8_ = dVar69;
    local_3a8._0_8_ = dVar40;
    dVar41 = dVar28 * 1.0 * 1.0 + ((dVar36 * 0.0 * 1.0 + dVar54 * 0.0) - dVar51 * 0.0);
    dVar47 = dVar28 * 0.0 * -1.0 + ((dVar36 * 0.0 * -1.0 + dVar54 * 1.0) - dVar51 * 0.0);
    dVar52 = dVar52 * 0.0;
    dVar30 = dVar30 * 0.0;
    dVar27 = (double)local_398._0_8_ * 0.5 * dVar13;
    dVar22 = dVar46 * 0.0;
    dVar64 = dVar52 * dVar28 - dVar36 * dVar27;
    dVar56 = dVar22 * dVar54 - dVar54 * dVar22;
    dVar55 = dVar30 * dVar36 - dVar52 * dVar51;
    dVar50 = dVar27 * dVar51 - dVar30 * dVar28;
    dVar55 = dVar55 + dVar55;
    dVar56 = dVar56 + dVar56;
    dVar50 = dVar50 + dVar50;
    dVar64 = dVar64 + dVar64;
    dVar62 = dVar13 * 1.0;
    dVar23 = dVar46 * 0.0;
    dVar13 = (double)local_398._0_8_ * -0.5 * dVar13;
    dVar46 = dVar46 * 0.0;
    dVar58 = dVar52 * dVar28 - dVar36 * dVar13;
    dVar61 = dVar46 * dVar54 - dVar54 * dVar46;
    dVar53 = dVar30 * dVar36 - dVar52 * dVar51;
    dVar57 = dVar13 * dVar51 - dVar30 * dVar28;
    dVar57 = dVar57 + dVar57;
    dVar58 = dVar58 + dVar58;
    dVar53 = dVar53 + dVar53;
    dVar61 = dVar61 + dVar61;
    dVar60 = (dVar55 * dVar51 - dVar28 * dVar64) + dVar54 * dVar50 + dVar52 + dVar29;
    dVar66 = (dVar50 * dVar28 - dVar55 * dVar36) + dVar54 * dVar64 + dVar30 + dVar35;
    dVar55 = (dVar64 * dVar36 - dVar51 * dVar50) + dVar54 * dVar55 + dVar27 + (double)local_3b8;
    dVar50 = (dVar56 * dVar54 - dVar56 * dVar54) + dVar54 * dVar56 + dVar22 + dStack_3b0;
    dVar29 = (dVar53 * dVar51 - dVar28 * dVar58) + dVar54 * dVar57 + dVar52 + dVar29;
    dVar35 = (dVar57 * dVar28 - dVar53 * dVar36) + dVar54 * dVar58 + dVar30 + dVar35;
    auVar63._8_8_ = dVar47;
    auVar63._0_8_ = dVar41;
    dVar52 = (dVar58 * dVar36 - dVar51 * dVar57) + dVar54 * dVar53 + dVar13 + (double)local_3b8;
    dVar30 = (dVar61 * dVar54 - dVar61 * dVar54) + dVar54 * dVar61 + dVar46 + dStack_3b0;
    auVar67._8_8_ = dVar47;
    auVar67._0_8_ = dVar41;
    auVar65 = local_3a8;
  }
  else {
    dVar69 = dVar51 + dVar51;
    dVar47 = dVar28 + dVar28;
    dVar55 = dVar36 * (dVar36 + dVar36);
    local_178 = (double *)((dVar40 - (dVar28 * dVar47 + dVar51 * dVar69)) * dVar52);
    dVar40 = (dVar41 - (dVar28 * dVar47 + dVar55)) * dVar30;
    uVar70 = SUB84(dVar40,0);
    uVar71 = (undefined4)((ulonglong)dVar40 >> 0x20);
    dVar40 = (dVar36 + dVar36) * dVar54;
    dVar28 = (dVar69 * dVar36 - dVar47 * dVar54) * dVar30;
    dVar64 = (dVar47 * dVar51 - dVar40) * dVar13;
    dVar41 = (dVar69 * dVar54 + dVar36 * dVar47) * dVar13;
    local_1f8 = (double *)0x3ff0000000000000;
    dStack_1f0 = 0.0;
    local_1e8 = 0.0;
    uStack_1e0 = 0;
    local_3a8 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    local_1b8 = ZEXT816(0);
    local_1a8 = 1.0;
    uStack_1a0 = 0;
    local_198 = 0.0;
    dStack_190 = 0.0;
    local_188._8_8_ = 0x3ff0000000000000;
    local_188._0_8_ = (double)local_398._0_8_ * 0.5;
    local_128 = (1.0 - (dVar55 + dVar51 * dVar69)) * dVar13;
    dStack_340 = dVar46 * 0.0;
    dStack_170 = (dVar69 * dVar36 + dVar47 * dVar54) * dVar52;
    dVar51 = (dVar47 * dVar51 + dVar40) * dVar30;
    local_328 = (dVar36 * dVar47 - dVar69 * dVar54) * dVar52;
    local_358._8_8_ = 0;
    local_358._0_8_ = local_128;
    dStack_320 = 0.0;
    local_388._8_8_ = dStack_170;
    local_388._0_8_ = local_178;
    dStack_160 = 0.0;
    local_158._8_4_ = uVar70;
    local_158._0_8_ = dVar28;
    local_158._12_4_ = uVar71;
    uStack_140 = 0;
    uStack_120 = 0;
    dStack_3b0 = 1.0;
    dStack_100 = 1.0;
    local_348 = dVar13 * 1.0;
    local_338 = dVar29;
    dStack_330 = dVar35;
    local_168 = local_328;
    local_148 = dVar51;
    local_138 = dVar41;
    dStack_130 = dVar64;
    local_118 = dVar29;
    dStack_110 = dVar35;
    local_108 = (double)local_3b8;
    FUN_1447fea8d(&local_2b8,&local_1f8,&local_178);
    FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
    auVar18._8_8_ = -(ulonglong)(0.0 <= dVar30);
    auVar18._0_8_ = -(ulonglong)(0.0 <= dVar52);
    auVar48 = blendvpd(_DAT_149936790,auVar42,auVar18);
    uVar12 = -(ulonglong)(0.0 <= dVar13 * 1.0);
    dVar52 = (double)(~uVar12 & 0xbff0000000000000 | uVar12 & 0x3ff0000000000000);
    dVar13 = auVar48._0_8_;
    local_2a8 = local_2a8 * dVar13;
    dStack_2b0 = dStack_2b0 * dVar13;
    local_2b8 = local_2b8 * dVar13;
    dVar46 = auVar48._8_8_;
    local_288 = local_288 * dVar46;
    local_290 = local_290 * dVar46;
    dStack_298 = dStack_298 * dVar46;
    dStack_268 = dStack_268 * dVar52;
    local_270 = local_270 * dVar52;
    local_278 = local_278 * dVar52;
    FUN_14481fd10(&local_2d8,&local_2b8);
    dVar55 = local_248;
    dVar66 = dStack_250;
    dVar60 = local_258;
    dVar23 = dStack_340;
    dVar62 = local_348;
    auVar48 = local_3a8;
    dVar30 = (double)CONCAT44(uStack_2cc,iStack_2d0);
    dVar29 = local_2c8 * local_2c8 + (double)local_2d8 * (double)local_2d8;
    dVar35 = dStack_2c0 * dStack_2c0 + dVar30 * dVar30;
    auVar32._0_8_ = dVar29 + dVar35;
    auVar32._8_8_ = dVar29 + dVar35;
    auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar43 = sqrtpd(auVar32,auVar32);
    auVar42 = divpd(auVar42,auVar43);
    auVar39._0_8_ = auVar42._0_8_ * local_2c8;
    auVar39._8_8_ = auVar42._8_8_ * dStack_2c0;
    auVar63 = blendvpd(local_3a8,auVar39,auVar19);
    dVar40 = (double)((ulonglong)((double)local_2d8 * auVar42._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
    dVar69 = (double)((ulonglong)(dVar30 * auVar42._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
    local_178 = (double *)local_388._0_8_;
    dStack_170 = (double)local_388._8_8_;
    local_168 = local_328;
    dStack_160 = dStack_320;
    uStack_140 = 0;
    local_128 = (double)local_358._0_8_;
    uStack_120 = local_358._8_8_;
    local_118 = local_338;
    dStack_110 = dStack_330;
    local_108 = (double)local_3b8;
    dStack_100 = dStack_3b0;
    local_1f8 = (double *)&DAT_3ff0000000000000;
    dStack_1f0 = 0.0;
    local_1e8 = 0.0;
    uStack_1e0 = 0;
    local_1d8 = local_3a8;
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    local_1b8 = ZEXT816(0);
    local_1a8 = 1.0;
    uStack_1a0 = 0;
    local_198 = 0.0;
    dStack_190 = 0.0;
    auVar20._0_8_ = (double)local_398._0_8_ * -0.5;
    auVar20._8_8_ = local_398._8_8_;
    local_188 = blendpd(auVar20,_DAT_149935300,2);
    dVar50 = 0.0;
    local_148 = dVar51;
    local_138 = dVar41;
    dStack_130 = dVar64;
    FUN_1447fea8d(&local_2b8,&local_1f8,&local_178);
    FUN_144a1c686(&local_2b8,0x3e45798ee0000000);
    local_2a8 = local_2a8 * dVar13;
    dStack_2b0 = dStack_2b0 * dVar13;
    local_2b8 = local_2b8 * dVar13;
    local_288 = local_288 * dVar46;
    local_290 = local_290 * dVar46;
    dStack_298 = dVar46 * dStack_298;
    dStack_268 = dStack_268 * dVar52;
    local_270 = local_270 * dVar52;
    local_278 = dVar52 * local_278;
    FUN_14481fd10(&local_2d8,&local_2b8);
    dVar52 = (double)CONCAT44(uStack_2cc,iStack_2d0);
    auVar26._0_8_ = (double)local_2d8 * (double)local_2d8;
    auVar26._8_8_ = dVar52 * dVar52;
    dVar30 = local_2c8 * local_2c8 + auVar26._0_8_;
    dVar29 = dStack_2c0 * dStack_2c0 + auVar26._8_8_;
    auVar33._0_8_ = dVar30 + dVar29;
    auVar33._8_8_ = dVar30 + dVar29;
    auVar42 = sqrtpd(auVar26,auVar33);
    auVar42 = divpd(_DAT_149934d80,auVar42);
    auVar34._0_8_ = auVar42._0_8_ * local_2c8;
    auVar34._8_8_ = auVar42._8_8_ * dStack_2c0;
    auVar65._0_8_ =
         (ulonglong)((double)local_2d8 * auVar42._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
    auVar65._8_8_ =
         (ulonglong)(dVar52 * auVar42._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
    auVar67 = blendvpd(auVar48,auVar34,auVar21);
    dVar30 = 0.0;
    dVar29 = local_258;
    dVar35 = dStack_250;
    dVar52 = local_248;
  }
  uVar70 = (undefined4)((ulonglong)dVar23 >> 0x20);
  local_2d8 = (double *)0x0;
  iStack_2d0 = 2;
  FUN_144756262(&local_2d8,2,0);
  *local_2d8 = dVar40;
  local_2d8[1] = dVar69;
  *(undefined1 (*) [16])(local_2d8 + 2) = auVar63;
  auVar6._8_4_ = SUB84(dVar66,0);
  auVar6._0_8_ = dVar60;
  auVar6._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
  *(undefined1 (*) [16])(local_2d8 + 4) = auVar6;
  local_2d8[6] = dVar55;
  local_2d8[7] = dVar50;
  local_2d8[8] = (double)local_378._0_8_;
  local_2d8[9] = (double)local_378._8_8_;
  auVar2._8_4_ = SUB84(dVar23,0);
  auVar2._0_8_ = dVar62;
  auVar2._12_4_ = uVar70;
  *(undefined1 (*) [16])(local_2d8 + 10) = auVar2;
  *(undefined1 (*) [16])(local_2d8 + 0xc) = auVar65;
  *(undefined1 (*) [16])(local_2d8 + 0xe) = auVar67;
  local_2d8[0x10] = dVar29;
  local_2d8[0x11] = dVar35;
  local_2d8[0x12] = dVar52;
  local_2d8[0x13] = dVar30;
  local_2d8[0x14] = (double)local_378._0_8_;
  local_2d8[0x15] = (double)local_378._8_8_;
  auVar3._8_4_ = SUB84(dVar23,0);
  auVar3._0_8_ = dVar62;
  auVar3._12_4_ = uVar70;
  *(undefined1 (*) [16])(local_2d8 + 0x16) = auVar3;
  if (1e-08 < local_368._0_4_) {
    dVar52 = (double)local_368._0_4_;
    if ((longlong)iStack_2d0 != 0) {
      lVar11 = (longlong)iStack_2d0 * 0x60;
      pdVar10 = local_2d8;
      local_3b8 = param_4;
      do {
        local_3d8 = (double *)&DAT_149e1dd24;
        local_3c8 = 0x20;
        local_3d0 = 0;
        FUN_1490de91e(param_1,pdVar10,&DAT_14c846480);
        local_2a8 = DAT_14c846398 * dVar52;
        dStack_2b0 = DAT_14c846390 * dVar52;
        local_2b8 = DAT_14c846388 * dVar52;
        local_1e8 = DAT_14c8463b0 * dVar52;
        dStack_1f0 = DAT_14c8463a8 * dVar52;
        local_1f8 = (double *)(DAT_14c8463a0 * dVar52);
        local_3d8 = &local_2b8;
        local_178 = local_1f8;
        dStack_170 = dStack_1f0;
        local_168 = local_1e8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        local_2a8 = DAT_14c846398 * dVar52;
        dStack_2b0 = DAT_14c846390 * dVar52;
        local_2b8 = DAT_14c846388 * dVar52;
        local_1e8 = -DAT_14c8463b0 * dVar52;
        dStack_1f0 = -DAT_14c8463a8 * dVar52;
        local_1f8 = (double *)(-DAT_14c8463a0 * dVar52);
        local_3d8 = &local_2b8;
        local_178 = local_1f8;
        dStack_170 = dStack_1f0;
        local_168 = local_1e8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        local_2a8 = DAT_14c8463b0 * dVar52;
        dStack_2b0 = DAT_14c8463a8 * dVar52;
        local_2b8 = DAT_14c8463a0 * dVar52;
        local_1e8 = DAT_14c846398 * dVar52;
        dStack_1f0 = DAT_14c846390 * dVar52;
        local_1f8 = (double *)(DAT_14c846388 * dVar52);
        local_3d8 = &local_2b8;
        local_178 = local_1f8;
        dStack_170 = dStack_1f0;
        local_168 = local_1e8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        local_2a8 = DAT_14c8463b0 * dVar52;
        dStack_2b0 = DAT_14c8463a8 * dVar52;
        local_2b8 = DAT_14c8463a0 * dVar52;
        local_1e8 = -DAT_14c846398 * dVar52;
        dStack_1f0 = -DAT_14c846390 * dVar52;
        local_1f8 = (double *)(-DAT_14c846388 * dVar52);
        local_3d8 = &local_2b8;
        local_178 = local_1f8;
        dStack_170 = dStack_1f0;
        local_168 = local_1e8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        pdVar10 = pdVar10 + 0xc;
        lVar11 = lVar11 + -0x60;
        param_4 = local_3b8;
      } while (lVar11 != 0);
    }
    dVar46 = local_2d8[8] * DAT_14c8463a0 * dVar52;
    dVar36 = local_2d8[9] * DAT_14c8463a8 * dVar52;
    dVar13 = DAT_14c8463b0 * dVar52 * local_2d8[10];
    dVar35 = *local_2d8;
    dVar40 = local_2d8[1];
    dVar41 = local_2d8[2];
    dVar29 = dVar36 * dVar35 - dVar46 * dVar40;
    dVar28 = dVar13 * dVar40 - dVar36 * dVar41;
    dVar51 = dVar46 * dVar41 - dVar35 * dVar13;
    dVar28 = dVar28 + dVar28;
    dVar51 = dVar51 + dVar51;
    dVar29 = dVar29 + dVar29;
    dVar30 = local_2d8[3];
    local_2b8 = (dVar29 * dVar40 - dVar51 * dVar41) + dVar30 * dVar28 + dVar46 + local_2d8[4];
    dStack_2b0 = (dVar41 * dVar28 - dVar35 * dVar29) + local_2d8[3] * dVar51 + dVar36 + local_2d8[5]
    ;
    local_178 = &local_2b8;
    local_2a8 = dVar29 * dVar30 + dVar13 + (dVar51 * dVar35 - dVar28 * dVar40) + local_2d8[6];
    dVar40 = local_2d8[0x14];
    dVar41 = local_2d8[0x15];
    dVar46 = DAT_14c8463a0 * dVar52 * dVar40;
    dVar36 = DAT_14c8463a8 * dVar52 * dVar41;
    local_368 = local_2d8[0x16];
    dStack_360 = local_2d8[0x17];
    dVar28 = DAT_14c8463b0 * dVar52 * local_368;
    dVar13 = local_2d8[0xc];
    local_308 = local_2d8[0xd];
    local_2f8 = *(undefined1 (*) [16])(local_2d8 + 0xe);
    dStack_300 = local_2f8._0_8_;
    dVar30 = dVar36 * dVar13 - dVar46 * local_308;
    dVar29 = dVar28 * local_308 - dVar36 * dStack_300;
    dVar35 = dVar46 * dStack_300 - dVar28 * dVar13;
    dVar29 = dVar29 + dVar29;
    dVar35 = dVar35 + dVar35;
    local_328 = local_2d8[0xf];
    dStack_320 = local_2d8[0xf];
    dVar30 = dVar30 + dVar30;
    local_3b8 = (float *)local_2d8[0x10];
    dStack_3b0 = local_2d8[0x11];
    local_2a0 = (dVar30 * local_308 - dVar35 * dStack_300) + local_328 * dVar29 + dVar46 +
                (double)local_3b8;
    dStack_298 = (dStack_300 * dVar29 - dVar13 * dVar30) + dStack_320 * dVar35 + dVar36 + dStack_3b0
    ;
    local_230 = local_2d8[0x12];
    local_398._0_8_ = local_230;
    local_290 = dVar30 * local_328 + dVar28 + (dVar35 * dVar13 - dVar29 * local_308) + local_230;
    dVar28 = local_2d8[8] * -DAT_14c8463a0 * dVar52;
    dVar51 = local_2d8[9] * -DAT_14c8463a8 * dVar52;
    dVar36 = local_2d8[10] * -DAT_14c8463b0 * dVar52;
    dVar46 = *local_2d8;
    local_318 = local_2d8[1];
    dStack_310 = local_2d8[2];
    dVar30 = dVar51 * dVar46 - dVar28 * local_318;
    dVar29 = dVar36 * local_318 - dVar51 * dStack_310;
    dVar35 = dVar28 * dStack_310 - dVar36 * dVar46;
    dVar29 = dVar29 + dVar29;
    dVar35 = dVar35 + dVar35;
    local_348 = local_2d8[3];
    dStack_340 = local_2d8[3];
    dVar30 = dVar30 + dVar30;
    local_338 = local_2d8[4];
    dStack_330 = local_2d8[5];
    local_288 = (dVar30 * local_318 - dVar35 * dStack_310) + local_348 * dVar29 + dVar28 + local_338
    ;
    dStack_280 = (dStack_310 * dVar29 - dVar46 * dVar30) + dStack_340 * dVar35 + dVar51 + dStack_330
    ;
    local_278 = dVar30 * local_348 + dVar36 + (dVar35 * dVar46 - dVar29 * local_318) + local_2d8[6];
    dVar28 = -DAT_14c8463a0 * dVar52 * dVar40;
    dVar51 = -DAT_14c8463a8 * dVar52 * dVar41;
    dVar36 = -DAT_14c8463b0 * dVar52 * local_368;
    dVar29 = dVar51 * dVar13 - dVar28 * local_308;
    dVar35 = dVar36 * local_308 - dVar51 * dStack_300;
    dVar30 = dVar28 * dStack_300 - dVar13 * dVar36;
    dVar35 = dVar35 + dVar35;
    dVar30 = dVar30 + dVar30;
    dVar29 = dVar29 + dVar29;
    local_270 = (dVar29 * local_308 - dVar30 * dStack_300) + local_328 * dVar35 + dVar28 +
                (double)local_3b8;
    dStack_268 = (dStack_300 * dVar35 - dVar13 * dVar29) + dStack_320 * dVar30 + dVar51 + dStack_3b0
    ;
    local_260 = dVar29 * local_328 + dVar36 + (dVar30 * dVar13 - dVar35 * local_308) + local_230;
    local_3a8._8_8_ = 0;
    local_3a8._0_8_ = DAT_14c846390;
    dVar35 = *(double *)*(undefined1 (*) [16])(local_2d8 + 8);
    local_378 = *(undefined1 (*) [16])(local_2d8 + 8);
    dVar36 = dVar35 * DAT_14c846388 * dVar52;
    dVar28 = local_2d8[9] * DAT_14c846390 * dVar52;
    dVar13 = *(double *)*(undefined1 (*) [16])(local_2d8 + 10);
    local_388 = *(undefined1 (*) [16])(local_2d8 + 10);
    dVar54 = DAT_14c846398 * dVar52 * dVar13;
    dVar29 = dVar28 * dVar46 - local_318 * dVar36;
    dVar51 = dVar54 * local_318 - dStack_310 * dVar28;
    dVar30 = dVar36 * dStack_310 - dVar46 * dVar54;
    dVar51 = dVar51 + dVar51;
    dVar30 = dVar30 + dVar30;
    dVar29 = dVar29 + dVar29;
    local_258 = (dVar29 * local_318 - dVar30 * dStack_310) + local_348 * dVar51 + dVar36 + local_338
    ;
    dStack_250 = (dStack_310 * dVar51 - dVar46 * dVar29) + dStack_340 * dVar30 + dVar28 + dStack_330
    ;
    local_248 = dVar29 * local_348 + dVar54 + (dVar30 * dVar46 - dVar51 * local_318) + local_2d8[6];
    dVar40 = DAT_14c846388 * dVar52 * dVar40;
    dVar41 = DAT_14c846390 * dVar52 * dVar41;
    dVar51 = DAT_14c846398 * dVar52 * local_368;
    dVar46 = local_2d8[0xc];
    dVar36 = local_2d8[0xd];
    dVar28 = local_2d8[0xe];
    dVar54 = dVar41 * dVar46 - dVar40 * dVar36;
    dVar69 = dVar51 * dVar36 - dVar41 * dVar28;
    dVar47 = dVar40 * dVar28 - dVar51 * dVar46;
    dVar69 = dVar69 + dVar69;
    dVar47 = dVar47 + dVar47;
    dVar30 = local_2d8[0xf];
    dVar29 = local_2d8[0xf];
    local_358._8_4_ = SUB84(dVar29,0);
    local_358._0_8_ = dVar30;
    local_358._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    dVar54 = dVar54 + dVar54;
    local_240 = (dVar54 * dVar36 - dVar47 * dVar28) + dVar30 * dVar69 + dVar40 + (double)local_3b8;
    dStack_238 = (dVar28 * dVar69 - dVar46 * dVar54) + dVar29 * dVar47 + dVar41 + dStack_3b0;
    local_230 = dVar54 * dVar30 + dVar51 + (dVar47 * dVar46 - dVar69 * dVar36) + local_230;
    dVar35 = dVar35 * -DAT_14c846388 * dVar52;
    dVar55 = local_2d8[9] * -DAT_14c846390 * dVar52;
    dVar13 = dVar13 * -DAT_14c846398 * dVar52;
    dVar40 = *local_2d8;
    dVar41 = local_2d8[1];
    dVar51 = local_2d8[2];
    dVar69 = dVar55 * dVar40 - dVar35 * dVar41;
    dVar47 = dVar13 * dVar41 - dVar55 * dVar51;
    dVar54 = dVar35 * dVar51 - dVar40 * dVar13;
    dVar47 = dVar47 + dVar47;
    dVar54 = dVar54 + dVar54;
    dVar69 = dVar69 + dVar69;
    dVar29 = local_2d8[3];
    local_228 = (dVar69 * dVar41 - dVar54 * dVar51) + dVar29 * dVar47 + dVar35 + local_2d8[4];
    dStack_220 = (dVar51 * dVar47 - dVar40 * dVar69) + local_2d8[3] * dVar54 + dVar55 + local_2d8[5]
    ;
    local_218 = dVar69 * dVar29 + dVar13 + (dVar54 * dVar40 - dVar47 * dVar41) + local_2d8[6];
    dVar41 = -DAT_14c846388 * dVar52 * local_2d8[0x14];
    dVar13 = -DAT_14c846390 * dVar52 * local_2d8[0x15];
    dVar40 = local_368 * -DAT_14c846398 * dVar52;
    dVar52 = dVar13 * dVar46 - dVar36 * dVar41;
    dVar29 = dVar40 * dVar36 - dVar28 * dVar13;
    dVar35 = dVar41 * dVar28 - dVar46 * dVar40;
    dVar29 = dVar29 + dVar29;
    dVar35 = dVar35 + dVar35;
    dVar52 = dVar52 + dVar52;
    local_210 = (dVar52 * dVar36 - dVar35 * dVar28) + dVar30 * dVar29 + dVar41 + local_2d8[0x10];
    dStack_208 = (dVar28 * dVar29 - dVar46 * dVar52) + (double)local_358._8_8_ * dVar35 + dVar13 +
                 local_2d8[0x11];
    local_200 = dVar52 * dVar30 + dVar40 + (dVar35 * dVar46 - dVar29 * dVar36) + local_2d8[0x12];
    dStack_170 = (double)CONCAT44(dStack_170._4_4_,8);
    local_3d8 = (double *)((ulonglong)local_3d8 & 0xffffffff00000000);
    FUN_144467784(param_1,&DAT_14c846480,&local_178,&DAT_149e1dd24);
  }
  fVar1 = *param_4;
  if (1e-08 < fVar1) {
    if ((longlong)iStack_2d0 != 0) {
      lVar11 = (longlong)iStack_2d0 * 0x60;
      pdVar10 = local_2d8;
      do {
        local_2e8[0] = 0;
        local_2e8[1] = 0;
        FUN_1447a8aa0(local_2e8,8);
        local_3d8 = (double *)&DAT_149e1dd24;
        local_3c8 = 0x20;
        local_3d0 = 0;
        FUN_1490de91e(param_1,pdVar10,&DAT_14c846480);
        dVar52 = (double)*param_4;
        local_2a8 = DAT_14c846398 * dVar52;
        dStack_2b0 = DAT_14c846390 * dVar52;
        local_2b8 = DAT_14c846388 * dVar52;
        local_168 = DAT_14c8463b0 * dVar52;
        dStack_170 = DAT_14c8463a8 * dVar52;
        local_178 = (double *)(DAT_14c8463a0 * dVar52);
        local_1e8 = -DAT_14c8463b0 * dVar52;
        dStack_1f0 = -DAT_14c8463a8 * dVar52;
        local_1f8 = (double *)(-DAT_14c8463a0 * dVar52);
        local_3d8 = &local_2b8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        dVar52 = (double)*param_4;
        local_2a8 = DAT_14c846398 * dVar52;
        dStack_2b0 = DAT_14c846390 * dVar52;
        local_2b8 = DAT_14c846388 * dVar52;
        local_168 = -DAT_14c8463b0 * dVar52;
        dStack_170 = -DAT_14c8463a8 * dVar52;
        local_178 = (double *)(-DAT_14c8463a0 * dVar52);
        local_1e8 = DAT_14c8463b0 * dVar52;
        dStack_1f0 = DAT_14c8463a8 * dVar52;
        local_1f8 = (double *)(DAT_14c8463a0 * dVar52);
        local_3d8 = &local_2b8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        dVar52 = (double)*param_4;
        local_2a8 = DAT_14c8463b0 * dVar52;
        dStack_2b0 = DAT_14c8463a8 * dVar52;
        local_2b8 = DAT_14c8463a0 * dVar52;
        local_168 = DAT_14c846398 * dVar52;
        dStack_170 = DAT_14c846390 * dVar52;
        local_178 = (double *)(DAT_14c846388 * dVar52);
        local_1e8 = -DAT_14c846398 * dVar52;
        dStack_1f0 = -DAT_14c846390 * dVar52;
        local_1f8 = (double *)(-DAT_14c846388 * dVar52);
        local_3d8 = &local_2b8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        dVar52 = (double)*param_4;
        local_2a8 = DAT_14c8463b0 * dVar52;
        dStack_2b0 = DAT_14c8463a8 * dVar52;
        local_2b8 = DAT_14c8463a0 * dVar52;
        local_168 = -DAT_14c846398 * dVar52;
        dStack_170 = -DAT_14c846390 * dVar52;
        local_178 = (double *)(-DAT_14c846388 * dVar52);
        local_1e8 = DAT_14c846398 * dVar52;
        dStack_1f0 = DAT_14c846390 * dVar52;
        local_1f8 = (double *)(DAT_14c846388 * dVar52);
        local_3d8 = &local_2b8;
        FUN_149121ad1(param_1,pdVar10,&local_1f8,&local_178);
        if (local_2e8[0] != 0) {
          FUN_1400020a8();
        }
        pdVar10 = pdVar10 + 0xc;
        lVar11 = lVar11 + -0x60;
      } while (lVar11 != 0);
      fVar1 = *param_4;
    }
    local_3b8 = (float *)(double)fVar1;
    dVar46 = local_2d8[8] * DAT_14c8463a0 * (double)local_3b8;
    dVar36 = local_2d8[9] * DAT_14c8463a8 * (double)local_3b8;
    dVar41 = DAT_14c8463b0 * (double)local_3b8 * local_2d8[10];
    dVar29 = *local_2d8;
    dVar35 = local_2d8[1];
    dVar40 = local_2d8[2];
    dVar30 = dVar36 * dVar29 - dVar46 * dVar35;
    dVar28 = dVar41 * dVar35 - dVar36 * dVar40;
    dVar13 = dVar46 * dVar40 - dVar29 * dVar41;
    dVar28 = dVar28 + dVar28;
    dVar13 = dVar13 + dVar13;
    dVar30 = dVar30 + dVar30;
    dVar52 = local_2d8[3];
    local_2b8 = (dVar30 * dVar35 - dVar13 * dVar40) + dVar52 * dVar28 + dVar46 + local_2d8[4];
    dStack_2b0 = (dVar40 * dVar28 - dVar29 * dVar30) + local_2d8[3] * dVar13 + dVar36 + local_2d8[5]
    ;
    local_278 = local_2d8[6];
    local_358._0_8_ = local_278;
    local_178 = &local_2b8;
    local_2a8 = dVar30 * dVar52 + dVar41 + (dVar13 * dVar29 - dVar28 * dVar35) + local_278;
    dVar41 = local_2d8[0x14];
    dVar13 = local_2d8[0x15];
    dVar29 = DAT_14c8463a0 * (double)local_3b8 * dVar41;
    dVar35 = DAT_14c8463a8 * (double)local_3b8 * dVar13;
    dVar46 = *(double *)*(undefined1 (*) [16])(local_2d8 + 0x16);
    local_398 = *(undefined1 (*) [16])(local_2d8 + 0x16);
    dVar30 = DAT_14c8463b0 * (double)local_3b8 * dVar46;
    dVar52 = local_2d8[0xc];
    local_348 = local_2d8[0xd];
    dStack_340 = local_2d8[0xe];
    dVar40 = dVar35 * dVar52 - dVar29 * local_348;
    dVar36 = dVar30 * local_348 - dVar35 * dStack_340;
    dVar28 = dVar29 * dStack_340 - dVar30 * dVar52;
    dVar36 = dVar36 + dVar36;
    dVar28 = dVar28 + dVar28;
    local_328 = local_2d8[0xf];
    dStack_320 = local_2d8[0xf];
    dVar40 = dVar40 + dVar40;
    local_240 = *(double *)*(undefined1 (*) [16])(local_2d8 + 0x10);
    dStack_238 = local_2d8[0x11];
    local_378 = *(undefined1 (*) [16])(local_2d8 + 0x10);
    local_2a0 = (dVar40 * local_348 - dVar28 * dStack_340) + local_328 * dVar36 + dVar29 + local_240
    ;
    dStack_298 = (dStack_340 * dVar36 - dVar52 * dVar40) + dStack_320 * dVar28 + dVar35 + dStack_238
    ;
    local_230 = local_2d8[0x12];
    local_3a8._0_8_ = local_230;
    local_290 = dVar40 * local_328 + dVar30 + (dVar28 * dVar52 - dVar36 * local_348) + local_230;
    dVar54 = local_2d8[8] * -DAT_14c8463a0 * (double)local_3b8;
    dVar69 = local_2d8[9] * -DAT_14c8463a8 * (double)local_3b8;
    dVar51 = local_2d8[10] * -DAT_14c8463b0 * (double)local_3b8;
    dVar30 = *local_2d8;
    dVar29 = local_2d8[1];
    dVar35 = local_2d8[2];
    dVar40 = dVar69 * dVar30 - dVar54 * dVar29;
    dVar28 = dVar51 * dVar29 - dVar69 * dVar35;
    dVar36 = dVar54 * dVar35 - dVar51 * dVar30;
    dVar28 = dVar28 + dVar28;
    dVar36 = dVar36 + dVar36;
    local_338 = local_2d8[3];
    dStack_330 = local_2d8[3];
    dVar40 = dVar40 + dVar40;
    local_388._8_8_ = local_2d8[5];
    local_288 = (dVar40 * dVar29 - dVar36 * dVar35) + local_338 * dVar28 + dVar54 + local_2d8[4];
    dStack_280 = (dVar35 * dVar28 - dVar30 * dVar40) + dStack_330 * dVar36 + dVar69 +
                 (double)local_388._8_8_;
    local_278 = dVar40 * local_338 + dVar51 + (dVar36 * dVar30 - dVar28 * dVar29) + local_278;
    dVar54 = -DAT_14c8463a0 * (double)local_3b8 * dVar41;
    dVar69 = -DAT_14c8463a8 * (double)local_3b8 * dVar13;
    dVar51 = -DAT_14c8463b0 * (double)local_3b8 * dVar46;
    dVar36 = dVar69 * dVar52 - dVar54 * local_348;
    dVar28 = dVar51 * local_348 - dVar69 * dStack_340;
    dVar40 = dVar54 * dStack_340 - dVar52 * dVar51;
    dVar28 = dVar28 + dVar28;
    dVar40 = dVar40 + dVar40;
    dVar36 = dVar36 + dVar36;
    local_270 = (dVar36 * local_348 - dVar40 * dStack_340) + local_328 * dVar28 + dVar54 + local_240
    ;
    dStack_268 = (dStack_340 * dVar28 - dVar52 * dVar36) + dStack_320 * dVar40 + dVar69 + dStack_238
    ;
    local_260 = dVar36 * local_328 + dVar51 + (dVar40 * dVar52 - dVar28 * local_348) + local_230;
    dVar28 = local_2d8[8] * DAT_14c846388 * (double)local_3b8;
    dVar51 = local_2d8[9] * DAT_14c846390 * (double)local_3b8;
    dVar40 = DAT_14c846398 * (double)local_3b8 * local_2d8[10];
    dVar52 = dVar51 * dVar30 - dVar29 * dVar28;
    dVar54 = dVar40 * dVar29 - dVar35 * dVar51;
    dVar36 = dVar28 * dVar35 - dVar30 * dVar40;
    dVar54 = dVar54 + dVar54;
    dVar36 = dVar36 + dVar36;
    dVar52 = dVar52 + dVar52;
    local_258 = (dVar52 * dVar29 - dVar36 * dVar35) + local_338 * dVar54 + dVar28 + local_2d8[4];
    dStack_250 = (dVar35 * dVar54 - dVar30 * dVar52) + dStack_330 * dVar36 + dVar51 +
                 (double)local_388._8_8_;
    local_388._0_8_ = local_2d8[6];
    local_248 = dVar52 * local_338 + dVar40 + (dVar36 * dVar30 - dVar54 * dVar29) +
                (double)local_388._0_8_;
    dVar41 = DAT_14c846388 * (double)local_3b8 * dVar41;
    dVar13 = DAT_14c846390 * (double)local_3b8 * dVar13;
    dVar28 = DAT_14c846398 * (double)local_3b8 * dVar46;
    dVar36 = local_2d8[0xc];
    local_368 = local_2d8[0xd];
    dStack_360 = local_2d8[0xe];
    dVar29 = dVar13 * dVar36 - dVar41 * local_368;
    dVar35 = dVar28 * local_368 - dVar13 * dStack_360;
    dVar40 = dVar41 * dStack_360 - dVar28 * dVar36;
    dVar35 = dVar35 + dVar35;
    dVar40 = dVar40 + dVar40;
    dVar30 = local_2d8[0xf];
    dVar52 = local_2d8[0xf];
    dVar29 = dVar29 + dVar29;
    local_240 = (dVar29 * local_368 - dVar40 * dStack_360) + dVar30 * dVar35 + dVar41 + local_240;
    dStack_238 = (dStack_360 * dVar35 - dVar36 * dVar29) + dVar52 * dVar40 + dVar13 + dStack_238;
    local_230 = dVar29 * dVar30 + dVar28 + (dVar40 * dVar36 - dVar35 * local_368) + local_230;
    dVar69 = local_2d8[8] * -DAT_14c846388 * (double)local_3b8;
    dVar47 = local_2d8[9] * -DAT_14c846390 * (double)local_3b8;
    dVar54 = local_2d8[10] * -DAT_14c846398 * (double)local_3b8;
    dVar13 = *local_2d8;
    dVar28 = local_2d8[1];
    dVar51 = local_2d8[2];
    dVar35 = dVar47 * dVar13 - dVar69 * dVar28;
    dVar40 = dVar54 * dVar28 - dVar47 * dVar51;
    dVar41 = dVar69 * dVar51 - dVar13 * dVar54;
    dVar40 = dVar40 + dVar40;
    dVar41 = dVar41 + dVar41;
    dVar35 = dVar35 + dVar35;
    dVar29 = local_2d8[3];
    local_228 = (dVar35 * dVar28 - dVar41 * dVar51) + dVar29 * dVar40 + dVar69 + local_2d8[4];
    dStack_220 = (dVar51 * dVar40 - dVar13 * dVar35) + local_2d8[3] * dVar41 + dVar47 + local_2d8[5]
    ;
    local_218 = dVar35 * dVar29 + dVar54 + (dVar41 * dVar13 - dVar40 * dVar28) +
                (double)local_388._0_8_;
    dVar41 = -DAT_14c846388 * (double)local_3b8 * local_2d8[0x14];
    dVar13 = -DAT_14c846390 * (double)local_3b8 * local_2d8[0x15];
    dVar46 = dVar46 * -DAT_14c846398 * (double)local_3b8;
    dVar29 = dVar13 * dVar36 - local_368 * dVar41;
    dVar35 = dVar46 * local_368 - dStack_360 * dVar13;
    dVar40 = dVar41 * dStack_360 - dVar36 * dVar46;
    dVar35 = dVar35 + dVar35;
    dVar40 = dVar40 + dVar40;
    dVar29 = dVar29 + dVar29;
    local_210 = (dVar29 * local_368 - dVar40 * dStack_360) + dVar30 * dVar35 + dVar41 +
                local_2d8[0x10];
    dStack_208 = (dStack_360 * dVar35 - dVar36 * dVar29) + dVar52 * dVar40 + dVar13 +
                 local_2d8[0x11];
    local_200 = dVar29 * dVar30 + dVar46 + (dVar40 * dVar36 - dVar35 * local_368) + local_2d8[0x12];
    dStack_170 = (double)CONCAT44(dStack_170._4_4_,8);
    local_3d8 = (double *)((ulonglong)local_3d8 & 0xffffffff00000000);
    FUN_144467784(param_1,&DAT_14c846480,&local_178,&DAT_149e1dd24);
  }
  if (local_2d8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491278d8 FUN_1491278d8 body=12432 status=ok
// SIG undefined FUN_1491278d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491278d8(undefined8 param_1,float param_2,float *param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
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
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar69;
  double dVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStack_4a8 [32];
  double *local_488;
  undefined4 local_480;
  undefined4 local_478;
  float local_46c;
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_388 [5];
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
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
  undefined1 local_1f8 [12];
  uint uStack_1ec;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [12];
  uint uStack_16c;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_310 = (double)param_2;
  dVar63 = DAT_14c8463b0 * local_310;
  dVar65 = DAT_14c8463a8 * local_310;
  dVar60 = DAT_14c8463a0 * local_310;
  fVar1 = *param_3;
  local_328 = (double)fVar1;
  local_2b8 = DAT_14c8463b0 * local_328;
  dStack_2c0 = DAT_14c8463a8 * local_328;
  local_2c8 = DAT_14c8463a0 * local_328;
  dVar59 = DAT_14c846398 * local_310;
  dVar74 = DAT_14c846390 * local_310;
  dVar71 = DAT_14c846388 * local_310;
  local_2e8 = DAT_14c846398 * local_328;
  dStack_2f0 = DAT_14c846390 * local_328;
  local_2f8 = DAT_14c846388 * local_328;
  local_300 = DAT_14c8463c8 * local_310;
  local_308 = DAT_14c8463c0 * local_310;
  local_310 = local_310 * DAT_14c8463b8;
  local_318 = DAT_14c8463c8 * local_328;
  local_320 = DAT_14c8463c0 * local_328;
  local_328 = DAT_14c8463b8 * local_328;
  pdVar13 = (double *)&DAT_14c846480;
  pdVar14 = local_388;
  local_2e0 = dVar71;
  uStack_2d8 = dVar74;
  local_2d0 = dVar59;
  local_2b0 = dVar60;
  uStack_2a8 = dVar65;
  local_2a0 = dVar63;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar14 = *pdVar13;
    pdVar13 = pdVar13 + 1;
    pdVar14 = pdVar14 + 1;
  }
  local_46c = param_2;
  if (1e-08 < param_2) {
    local_488 = (double *)&DAT_149e1dd24;
    local_478 = 0x20;
    local_480 = 0;
    uVar12 = param_1;
    uVar8 = FUN_1490de91e(param_1,param_4,local_388);
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    local_448 = *(undefined1 (*) [16])(param_4 + 8);
    dVar29 = local_448._0_8_;
    dVar47 = local_448._8_8_;
    local_468 = *(undefined1 (*) [16])(param_4 + 10);
    local_428 = local_348;
    auVar28 = local_428;
    auVar16 = minpd(local_348,local_448);
    local_438 = local_338;
    auVar32 = local_438;
    auVar27 = minpd(local_338,local_468);
    auVar44._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar44._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar44);
    auVar16._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar16._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    uVar10 = movmskpd((int)uVar12,auVar16);
    uVar12 = local_468._0_8_;
    local_428._0_8_ = local_348._0_8_;
    uVar6 = local_428._0_8_;
    local_428._8_8_ = local_348._8_8_;
    uVar7 = local_428._8_8_;
    local_438._0_8_ = local_338._0_8_;
    uVar5 = local_438._0_8_;
    local_438._8_8_ = local_338._8_8_;
    local_438 = auVar32;
    local_428 = auVar28;
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      local_418 = *param_4;
      dStack_410 = param_4[1];
      local_458 = param_4[2];
      dStack_450 = param_4[3];
      local_3f8 = param_4[3];
      dStack_3f0 = param_4[3];
      dVar49 = param_4[1];
      dVar55 = param_4[1];
      dVar2 = param_4[2];
      dVar53 = param_4[2];
      local_408 = local_388[1] * dVar2 * -1.0 +
                  local_388[2] * dVar49 + local_388[3] * *param_4 * 1.0 + local_388[0] * local_3f8;
      dStack_400 = local_388[0] * dVar53 * 1.0 +
                   local_388[3] * dVar55 +
                   local_388[2] * *param_4 * -1.0 + local_388[1] * dStack_3f0;
      dVar55 = local_388[2] * dVar53 * -1.0 +
               ((*param_4 * local_388[0] * -1.0 + local_388[3] * dStack_3f0) - local_388[1] * dVar55
               );
      dVar53 = local_388[4] * dVar29;
      dVar70 = dStack_360 * dVar47;
      dVar73 = local_358 * (double)local_468._0_8_;
      dVar57 = dStack_350 * (double)local_468._8_8_;
      dVar48 = dVar70 * local_418 - dStack_410 * dVar53;
      dVar64 = dVar73 * dStack_410 - local_458 * dVar70;
      dVar54 = dVar53 * local_458 - local_418 * dVar73;
      dVar52 = dVar57 * dStack_450 - dStack_450 * dVar57;
      dVar64 = dVar64 + dVar64;
      dVar54 = dVar54 + dVar54;
      dVar48 = dVar48 + dVar48;
      dVar52 = dVar52 + dVar52;
      local_3c8 = (dVar48 * dStack_410 - local_458 * dVar54) + local_3f8 * dVar64 + dVar53 +
                  param_4[4];
      dStack_3c0 = (dVar64 * local_458 - dVar48 * local_418) + dStack_3f0 * dVar54 + dVar70 +
                   param_4[5];
      local_3b8 = (dVar54 * local_418 - dStack_410 * dVar64) + local_3f8 * dVar48 + dVar73 +
                  param_4[6];
      dStack_3b0 = (dVar52 * dStack_450 - dVar52 * dStack_450) + dStack_3f0 * dVar52 + dVar57 +
                   param_4[7];
      local_3d8._8_4_ = SUB84(dVar55,0);
      local_3d8._0_8_ =
           local_388[3] * dVar2 * 1.0 +
           ((*param_4 * local_388[1] * 1.0 + local_388[2] * local_3f8) - local_388[0] * dVar49);
      local_3d8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      dVar70 = (double)local_438._8_8_ * (double)local_468._8_8_;
      local_3e8 = local_408;
      dStack_3e0 = dStack_400;
    }
    else {
      dVar53 = *param_4;
      dVar2 = param_4[1];
      dVar70 = param_4[2];
      dVar54 = dVar2 + dVar2;
      dVar52 = dVar70 + dVar70;
      dVar48 = dVar53 * (dVar53 + dVar53);
      dVar64 = dVar2 * dVar54;
      local_458 = (1.0 - (dVar48 + dVar64)) * (double)local_468._0_8_;
      dStack_450 = (0.0 - (dVar48 + dVar64)) * (double)local_468._8_8_;
      dVar49 = param_4[3];
      dVar73 = dVar52 * dVar49;
      dVar57 = (dVar53 + dVar53) * param_4[3];
      dVar49 = dVar54 * dVar49;
      dVar55 = (double)local_468._0_8_ * (double)local_438._0_8_;
      auVar32._8_4_ = SUB84((double)local_468._8_8_ * (double)local_438._8_8_,0);
      auVar32._0_8_ = dVar55;
      auVar32._12_4_ = (int)((ulonglong)((double)local_468._8_8_ * (double)local_438._8_8_) >> 0x20)
      ;
      local_1c8 = (dVar52 * dVar2 + dVar57) * dVar47;
      local_1e8 = (*param_4 * dVar52 - dVar49) * dVar29;
      stack0xfffffffffffffe10 = (dVar54 * dVar53 + dVar73) * dVar29;
      local_1f8._0_8_ = (1.0 - (dVar70 * dVar52 + dVar64)) * dVar29;
      uStack_1e0 = 0;
      local_1d8._8_8_ = (1.0 - (dVar70 * dVar52 + dVar48)) * dVar47;
      local_1d8._0_8_ = (dVar54 * dVar53 - dVar73) * dVar47;
      uStack_1c0 = 0;
      local_1b8._8_8_ = (dVar52 * dVar2 - dVar57) * (double)local_468._0_8_;
      local_1b8._0_8_ = (dVar49 + *param_4 * dVar52) * (double)local_468._0_8_;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar53 = local_388[1] + local_388[1];
      dVar48 = local_388[2] + local_388[2];
      dVar54 = local_388[0] * (local_388[0] + local_388[0]);
      local_228 = (1.0 - (dVar54 + local_388[1] * dVar53)) * (double)local_438._0_8_;
      dVar64 = (local_388[0] + local_388[0]) * local_388[3];
      local_238 = (dVar53 * local_388[3] + local_388[0] * dVar48) * (double)local_438._0_8_;
      dStack_230 = (dVar48 * local_388[1] - dVar64) * (double)local_438._0_8_;
      local_468._8_8_ = auVar32._8_8_;
      dVar70 = (double)local_468._8_8_;
      dVar49 = dVar29 * (double)local_428._0_8_;
      dVar2 = dVar47 * (double)local_428._8_8_;
      local_278 = (1.0 - (local_388[2] * dVar48 + local_388[1] * dVar53)) * (double)local_428._0_8_;
      dStack_270 = (dVar53 * local_388[0] + dVar48 * local_388[3]) * (double)local_428._0_8_;
      local_248 = (dVar48 * local_388[1] + dVar64) * (double)local_428._8_8_;
      local_268 = (local_388[0] * dVar48 - dVar53 * local_388[3]) * (double)local_428._0_8_;
      uStack_260 = 0;
      local_258._8_8_ = (1.0 - (local_388[2] * dVar48 + dVar54)) * (double)local_428._8_8_;
      local_258._0_8_ = (dVar53 * local_388[0] - dVar48 * local_388[3]) * (double)local_428._8_8_;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_388[4];
      dStack_210 = dStack_360;
      local_208 = local_358;
      uStack_200 = 0x3ff0000000000000;
      local_468 = auVar32;
      local_1a8 = local_458;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar32 = _DAT_149934d80;
      auVar28._8_8_ = -(ulonglong)(0.0 <= dVar2);
      auVar28._0_8_ = -(ulonglong)(0.0 <= dVar49);
      auVar28 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
      uVar15 = -(ulonglong)(0.0 <= dVar55);
      dVar49 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar55 = auVar28._0_8_;
      local_168 = local_168 * dVar55;
      stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar55;
      local_178._0_8_ = (double)local_178._0_8_ * dVar55;
      dVar55 = auVar28._8_8_;
      local_148 = local_148 * dVar55;
      local_150 = local_150 * dVar55;
      local_158 = dVar55 * local_158;
      local_128 = local_128 * dVar49;
      local_130 = local_130 * dVar49;
      local_138 = dVar49 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar49 = local_288 * local_288 + local_298 * local_298;
      dVar55 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar34._0_8_ = dVar49 + dVar55;
      auVar34._8_8_ = dVar49 + dVar55;
      auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
      auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
      auVar28 = sqrtpd(auVar34,auVar34);
      auVar32 = divpd(auVar32,auVar28);
      auVar46._0_8_ = auVar32._0_8_ * local_288;
      auVar46._8_8_ = auVar32._8_8_ * dStack_280;
      local_3e8 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
      dStack_3e0 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar27);
      local_3c8 = local_118;
      dStack_3c0 = dStack_110;
      local_3b8 = local_108;
      dStack_3b0 = 0.0;
    }
    local_3a8._8_4_ = SUB84((double)uVar7 * dVar47,0);
    local_3a8._0_8_ = (double)uVar6 * dVar29;
    local_3a8._12_4_ = (int)((ulonglong)((double)uVar7 * dVar47) >> 0x20);
    local_398._8_4_ = SUB84(dVar70,0);
    local_398._0_8_ = (double)uVar5 * (double)uVar12;
    local_398._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
    local_488 = &local_2e0;
    FUN_149121ad1(param_1,&local_3e8,&local_2b0,&local_2b0);
    local_1e8 = -dVar63;
    dVar60 = -dVar60;
    uVar10 = (uint)((ulonglong)dVar65 >> 0x20) ^ 0x80000000;
    local_178._8_4_ = SUB84(dVar65,0);
    local_178._0_8_ = dVar60;
    uStack_16c = uVar10;
    local_1f8._8_4_ = SUB84(dVar65,0);
    local_1f8._0_8_ = dVar60;
    uStack_1ec = uVar10;
    local_488 = &local_2e0;
    local_168 = local_1e8;
    FUN_149121ad1(param_1,&local_3e8,local_1f8,local_178);
    local_488 = &local_2e0;
    FUN_149121ad1(param_1,&local_3e8,&local_2e0,&local_2e0);
    local_1e8 = -dVar59;
    local_178._0_8_ = -dVar71;
    register0x00001448 = -dVar74;
    stack0xfffffffffffffe10 = register0x00001448;
    local_1f8._0_8_ = local_178._0_8_;
    local_488 = &local_2e0;
    local_168 = local_1e8;
    FUN_149121ad1(param_1,&local_3e8,local_1f8,local_178);
    fVar1 = *param_3;
  }
  if (1e-08 < fVar1) {
    local_488 = (double *)&DAT_149e1dd24;
    local_478 = 0x20;
    local_480 = 0;
    uVar12 = param_1;
    uVar8 = FUN_1490de91e(param_1,param_4,local_388);
    auVar16 = _DAT_149934d80;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    auVar32 = *(undefined1 (*) [16])(param_4 + 8);
    dVar60 = auVar32._0_8_;
    dVar71 = auVar32._8_8_;
    auVar28 = *(undefined1 (*) [16])(param_4 + 10);
    dVar65 = auVar28._0_8_;
    dVar59 = local_348._0_8_;
    dVar74 = local_348._8_8_;
    dVar63 = local_338._0_8_;
    dVar29 = local_338._8_8_;
    auVar32 = minpd(local_348,auVar32);
    auVar44 = minpd(local_338,auVar28);
    auVar30._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar30);
    auVar40._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar10 = movmskpd((int)uVar12,auVar40);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar57 = *param_4;
      dVar69 = param_4[1];
      dVar3 = param_4[2];
      dVar4 = param_4[3];
      dVar49 = param_4[3];
      dVar47 = param_4[3];
      dVar53 = param_4[1];
      dVar55 = param_4[1];
      dVar2 = param_4[2];
      dVar70 = param_4[2];
      local_3e8 = local_388[1] * dVar2 * -1.0 +
                  local_388[2] * dVar53 + local_388[3] * *param_4 * 1.0 + local_388[0] * dVar49;
      dStack_3e0 = local_388[0] * dVar70 * 1.0 +
                   local_388[3] * dVar55 + local_388[2] * *param_4 * -1.0 + local_388[1] * dVar47;
      dVar48 = local_388[4] * dVar60;
      dVar64 = dStack_360 * dVar71;
      dVar56 = local_358 * dVar65;
      dVar58 = dStack_350 * auVar28._8_8_;
      dVar73 = dVar64 * dVar57 - dVar69 * dVar48;
      dVar72 = dVar56 * dVar69 - dVar3 * dVar64;
      dVar54 = dVar48 * dVar3 - dVar57 * dVar56;
      dVar52 = dVar58 * dVar4 - dVar4 * dVar58;
      dVar72 = dVar72 + dVar72;
      dVar54 = dVar54 + dVar54;
      dVar73 = dVar73 + dVar73;
      dVar52 = dVar52 + dVar52;
      local_3c8 = (dVar73 * dVar69 - dVar3 * dVar54) + dVar49 * dVar72 + dVar48 + param_4[4];
      dStack_3c0 = (dVar72 * dVar3 - dVar73 * dVar57) + dVar47 * dVar54 + dVar64 + param_4[5];
      local_3b8 = (dVar54 * dVar57 - dVar69 * dVar72) + dVar49 * dVar73 + dVar56 + param_4[6];
      dStack_3b0 = (dVar52 * dVar4 - dVar52 * dVar4) + dVar47 * dVar52 + dVar58 + param_4[7];
      local_3d8._8_8_ =
           local_388[2] * dVar70 * -1.0 +
           ((*param_4 * local_388[0] * -1.0 + local_388[3] * dVar47) - local_388[1] * dVar55);
      local_3d8._0_8_ =
           local_388[3] * dVar2 * 1.0 +
           ((*param_4 * local_388[1] * 1.0 + local_388[2] * dVar49) - local_388[0] * dVar53);
    }
    else {
      dVar55 = *param_4;
      dVar53 = param_4[1];
      dVar2 = param_4[2];
      dVar70 = dVar53 + dVar53;
      dVar48 = dVar2 + dVar2;
      dVar49 = dVar55 * (dVar55 + dVar55);
      local_1a8 = (1.0 - (dVar49 + dVar53 * dVar70)) * dVar65;
      dVar47 = param_4[3];
      dVar64 = dVar48 * dVar47;
      dVar54 = (dVar55 + dVar55) * param_4[3];
      dVar47 = dVar70 * dVar47;
      dVar49 = (DAT_149934d80._8_8_ - (dVar2 * dVar48 + dVar49)) * dVar71;
      local_1c8 = (dVar48 * dVar53 + dVar54) * dVar71;
      local_1e8 = (*param_4 * dVar48 - dVar47) * dVar60;
      stack0xfffffffffffffe10 = (dVar70 * dVar55 + dVar64) * dVar60;
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar48 + dVar53 * dVar70)) * dVar60;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar49,0);
      local_1d8._0_8_ = (dVar70 * dVar55 - dVar64) * dVar71;
      local_1d8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_8_ = (dVar48 * dVar53 - dVar54) * dVar65;
      local_1b8._0_8_ = (dVar47 + *param_4 * dVar48) * dVar65;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar49 = local_388[1] + local_388[1];
      dVar55 = local_388[2] + local_388[2];
      dVar47 = local_388[0] * (local_388[0] + local_388[0]);
      local_228 = (1.0 - (dVar47 + local_388[1] * dVar49)) * dVar63;
      dVar53 = (local_388[0] + local_388[0]) * local_388[3];
      local_238 = (dVar49 * local_388[3] + local_388[0] * dVar55) * dVar63;
      dStack_230 = (dVar55 * local_388[1] - dVar53) * dVar63;
      local_278 = ((double)DAT_149934d80 - (local_388[2] * dVar55 + local_388[1] * dVar49)) * dVar59
      ;
      dVar47 = (DAT_149934d80._8_8_ - (local_388[2] * dVar55 + dVar47)) * dVar74;
      dStack_270 = (dVar49 * local_388[0] + dVar55 * local_388[3]) * dVar59;
      local_248 = (dVar55 * local_388[1] + dVar53) * dVar74;
      local_268 = (local_388[0] * dVar55 - dVar49 * local_388[3]) * dVar59;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar47,0);
      local_258._0_8_ = (dVar49 * local_388[0] - dVar55 * local_388[3]) * dVar74;
      local_258._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_388[4];
      dStack_210 = dStack_360;
      local_208 = local_358;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar17._8_8_ = -(ulonglong)(0.0 <= dVar71 * dVar74);
      auVar17._0_8_ = -(ulonglong)(0.0 <= dVar60 * dVar59);
      auVar32 = blendvpd(_DAT_149936790,auVar16,auVar17);
      uVar15 = -(ulonglong)(0.0 <= dVar65 * dVar63);
      dVar47 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar49 = auVar32._0_8_;
      local_168 = local_168 * dVar49;
      stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar49;
      local_178._0_8_ = (double)local_178._0_8_ * dVar49;
      dVar49 = auVar32._8_8_;
      local_148 = local_148 * dVar49;
      local_150 = local_150 * dVar49;
      local_158 = dVar49 * local_158;
      local_128 = local_128 * dVar47;
      local_130 = local_130 * dVar47;
      local_138 = dVar47 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar47 = local_288 * local_288 + local_298 * local_298;
      dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar35._0_8_ = dVar47 + dVar49;
      auVar35._8_8_ = dVar47 + dVar49;
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
      auVar32 = sqrtpd(auVar35,auVar35);
      auVar32 = divpd(auVar16,auVar32);
      auVar66._0_8_ = auVar32._0_8_ * local_288;
      auVar66._8_8_ = auVar32._8_8_ * dStack_280;
      local_3e8 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
      dStack_3e0 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar18);
      local_3c8 = local_118;
      dStack_3c0 = dStack_110;
      local_3b8 = local_108;
      dStack_3b0 = 0.0;
    }
    local_3a8._8_4_ = SUB84(dVar74 * dVar71,0);
    local_3a8._0_8_ = dVar59 * dVar60;
    local_3a8._12_4_ = (int)((ulonglong)(dVar74 * dVar71) >> 0x20);
    local_398._8_8_ = dVar29 * auVar28._8_8_;
    local_398._0_8_ = dVar63 * dVar65;
    dVar60 = -local_2b8;
    dVar65 = -local_2c8;
    dVar59 = -dStack_2c0;
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x10006615 = dVar59;
    FUN_149121ad1(param_1,&local_3e8,local_178,&local_2c8);
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x1000662d = dVar59;
    FUN_149121ad1(param_1,&local_3e8,&local_2c8,local_178);
    dVar60 = -local_2e8;
    dVar65 = -local_2f8;
    dVar59 = -dStack_2f0;
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x10006645 = dVar59;
    FUN_149121ad1(param_1,&local_3e8,local_178,&local_2f8);
    stack0xfffffffffffffe90 = dVar59;
    local_178._0_8_ = dVar65;
    local_488 = &local_328;
    local_168 = dVar60;
    FUN_149121ad1(param_1,&local_3e8,&local_2f8,local_178);
  }
  local_388[0] = 0.0;
  local_388[1] = 0.7071067966408575;
  local_388[2] = 0.0;
  local_388[3] = 0.7071067657322372;
  if (1e-08 < local_46c) {
    local_488 = (double *)&DAT_149e1dd24;
    local_478 = 0x20;
    local_480 = 0;
    uVar12 = param_1;
    uVar8 = FUN_1490de91e(param_1,param_4,local_388);
    auVar16 = _DAT_149934d80;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    auVar32 = *(undefined1 (*) [16])(param_4 + 8);
    dVar60 = auVar32._0_8_;
    dVar71 = auVar32._8_8_;
    auVar28 = *(undefined1 (*) [16])(param_4 + 10);
    dVar65 = auVar28._0_8_;
    dVar59 = local_348._0_8_;
    dVar74 = local_348._8_8_;
    dVar63 = local_338._0_8_;
    dVar29 = local_338._8_8_;
    auVar32 = minpd(local_348,auVar32);
    auVar44 = minpd(local_338,auVar28);
    auVar41._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar41);
    auVar50._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar50._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar10 = movmskpd((int)uVar12,auVar50);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar57 = *param_4;
      dVar69 = param_4[1];
      dVar3 = param_4[2];
      dVar4 = param_4[3];
      dVar49 = param_4[3];
      dVar47 = param_4[3];
      dVar53 = param_4[1];
      dVar55 = param_4[1];
      dVar2 = param_4[2];
      dVar70 = param_4[2];
      local_3e8 = local_388[1] * dVar2 * -1.0 +
                  local_388[2] * dVar53 + local_388[3] * *param_4 * 1.0 + local_388[0] * dVar49;
      dStack_3e0 = local_388[0] * dVar70 * 1.0 +
                   local_388[3] * dVar55 + local_388[2] * *param_4 * -1.0 + local_388[1] * dVar47;
      dVar48 = local_388[4] * dVar60;
      dVar64 = dStack_360 * dVar71;
      dVar56 = local_358 * dVar65;
      dVar58 = dStack_350 * auVar28._8_8_;
      dVar73 = dVar64 * dVar57 - dVar69 * dVar48;
      dVar72 = dVar56 * dVar69 - dVar3 * dVar64;
      dVar54 = dVar48 * dVar3 - dVar57 * dVar56;
      dVar52 = dVar58 * dVar4 - dVar4 * dVar58;
      dVar72 = dVar72 + dVar72;
      dVar54 = dVar54 + dVar54;
      dVar73 = dVar73 + dVar73;
      dVar52 = dVar52 + dVar52;
      local_3c8 = (dVar73 * dVar69 - dVar3 * dVar54) + dVar49 * dVar72 + dVar48 + param_4[4];
      dStack_3c0 = (dVar72 * dVar3 - dVar73 * dVar57) + dVar47 * dVar54 + dVar64 + param_4[5];
      local_3b8 = (dVar54 * dVar57 - dVar69 * dVar72) + dVar49 * dVar73 + dVar56 + param_4[6];
      dStack_3b0 = (dVar52 * dVar4 - dVar52 * dVar4) + dVar47 * dVar52 + dVar58 + param_4[7];
      local_3d8._8_8_ =
           local_388[2] * dVar70 * -1.0 +
           ((*param_4 * local_388[0] * -1.0 + local_388[3] * dVar47) - local_388[1] * dVar55);
      local_3d8._0_8_ =
           local_388[3] * dVar2 * 1.0 +
           ((*param_4 * local_388[1] * 1.0 + local_388[2] * dVar49) - local_388[0] * dVar53);
    }
    else {
      dVar53 = *param_4;
      dVar2 = param_4[1];
      dVar70 = param_4[2];
      dVar48 = dVar2 + dVar2;
      dVar64 = dVar70 + dVar70;
      dVar47 = dVar53 * (dVar53 + dVar53);
      dVar55 = (DAT_149934d80._8_8_ - (dVar70 * dVar64 + dVar47)) * dVar71;
      local_1a8 = (1.0 - (dVar47 + dVar2 * dVar48)) * dVar65;
      dVar47 = param_4[3];
      dVar54 = dVar64 * dVar47;
      dVar49 = (dVar53 + dVar53) * param_4[3];
      dVar47 = dVar48 * dVar47;
      local_1c8 = (dVar64 * dVar2 + dVar49) * dVar71;
      dVar49 = (dVar64 * dVar2 - dVar49) * dVar65;
      local_1e8 = (*param_4 * dVar64 - dVar47) * dVar60;
      stack0xfffffffffffffe10 = (dVar48 * dVar53 + dVar54) * dVar60;
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar70 * dVar64 + dVar2 * dVar48)) * dVar60;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar55,0);
      local_1d8._0_8_ = (dVar48 * dVar53 - dVar54) * dVar71;
      local_1d8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar49,0);
      local_1b8._0_8_ = (dVar47 + *param_4 * dVar64) * dVar65;
      local_1b8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar49 = local_388[1] + local_388[1];
      dVar55 = local_388[2] + local_388[2];
      dVar47 = local_388[0] * (local_388[0] + local_388[0]);
      local_228 = (1.0 - (dVar47 + local_388[1] * dVar49)) * dVar63;
      dVar53 = (local_388[0] + local_388[0]) * local_388[3];
      local_238 = (dVar49 * local_388[3] + local_388[0] * dVar55) * dVar63;
      dStack_230 = (dVar55 * local_388[1] - dVar53) * dVar63;
      local_278 = ((double)DAT_149934d80 - (local_388[2] * dVar55 + local_388[1] * dVar49)) * dVar59
      ;
      dVar47 = (DAT_149934d80._8_8_ - (local_388[2] * dVar55 + dVar47)) * dVar74;
      dStack_270 = (dVar49 * local_388[0] + dVar55 * local_388[3]) * dVar59;
      local_248 = (dVar55 * local_388[1] + dVar53) * dVar74;
      local_268 = (local_388[0] * dVar55 - dVar49 * local_388[3]) * dVar59;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar47,0);
      local_258._0_8_ = (dVar49 * local_388[0] - dVar55 * local_388[3]) * dVar74;
      local_258._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_388[4];
      dStack_210 = dStack_360;
      local_208 = local_358;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar71 * dVar74);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar60 * dVar59);
      auVar32 = blendvpd(_DAT_149936790,auVar16,auVar19);
      uVar15 = -(ulonglong)(0.0 <= dVar65 * dVar63);
      dVar47 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar49 = auVar32._0_8_;
      local_168 = local_168 * dVar49;
      stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar49;
      local_178._0_8_ = (double)local_178._0_8_ * dVar49;
      dVar49 = auVar32._8_8_;
      local_148 = local_148 * dVar49;
      local_150 = local_150 * dVar49;
      local_158 = dVar49 * local_158;
      local_128 = local_128 * dVar47;
      local_130 = local_130 * dVar47;
      local_138 = dVar47 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar47 = local_288 * local_288 + local_298 * local_298;
      dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar36._0_8_ = dVar47 + dVar49;
      auVar36._8_8_ = dVar47 + dVar49;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
      auVar32 = sqrtpd(auVar36,auVar36);
      auVar32 = divpd(auVar16,auVar32);
      auVar67._0_8_ = auVar32._0_8_ * local_288;
      auVar67._8_8_ = auVar32._8_8_ * dStack_280;
      local_3e8 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
      dStack_3e0 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar67,auVar20);
      local_3c8 = local_118;
      dStack_3c0 = dStack_110;
      local_3b8 = local_108;
      dStack_3b0 = 0.0;
    }
    local_3a8._8_4_ = SUB84(dVar74 * dVar71,0);
    local_3a8._0_8_ = dVar59 * dVar60;
    local_3a8._12_4_ = (int)((ulonglong)(dVar74 * dVar71) >> 0x20);
    local_398._8_8_ = dVar29 * auVar28._8_8_;
    local_398._0_8_ = dVar63 * dVar65;
    local_488 = &local_310;
    FUN_149121ad1(param_1,&local_3e8,&local_2b0,&local_2b0);
    local_1e8 = -local_2a0;
    local_178._0_8_ = (ulonglong)local_2b0 ^ 0x8000000000000000;
    local_178._8_4_ = (undefined4)uStack_2a8;
    uStack_16c = uStack_2a8._4_4_ ^ 0x80000000;
    local_1f8._0_8_ = (ulonglong)local_2b0 ^ 0x8000000000000000;
    local_1f8._8_4_ = (undefined4)uStack_2a8;
    uStack_1ec = uStack_2a8._4_4_ ^ 0x80000000;
    local_488 = &local_310;
    local_168 = local_1e8;
    FUN_149121ad1(param_1,&local_3e8,local_1f8,local_178);
    local_488 = &local_310;
    FUN_149121ad1(param_1,&local_3e8,&local_2e0,&local_2e0);
    local_1e8 = -local_2d0;
    local_178._0_8_ = (ulonglong)local_2e0 ^ 0x8000000000000000;
    local_178._8_4_ = (undefined4)uStack_2d8;
    uStack_16c = uStack_2d8._4_4_ ^ 0x80000000;
    local_1f8._0_8_ = (ulonglong)local_2e0 ^ 0x8000000000000000;
    local_1f8._8_4_ = (undefined4)uStack_2d8;
    uStack_1ec = uStack_2d8._4_4_ ^ 0x80000000;
    local_488 = &local_310;
    local_168 = local_1e8;
    FUN_149121ad1(param_1,&local_3e8,local_1f8,local_178);
  }
  if (1e-08 < *param_3) {
    local_488 = (double *)&DAT_149e1dd24;
    local_478 = 0x20;
    local_480 = 0;
    uVar12 = param_1;
    uVar8 = FUN_1490de91e(param_1,param_4,local_388);
    auVar16 = _DAT_149934d80;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    auVar32 = *(undefined1 (*) [16])(param_4 + 8);
    dVar60 = auVar32._0_8_;
    dVar71 = auVar32._8_8_;
    auVar28 = *(undefined1 (*) [16])(param_4 + 10);
    dVar65 = auVar28._0_8_;
    dVar59 = local_348._0_8_;
    dVar74 = local_348._8_8_;
    dVar63 = local_338._0_8_;
    dVar29 = local_338._8_8_;
    auVar32 = minpd(local_348,auVar32);
    auVar44 = minpd(local_338,auVar28);
    auVar31._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar31);
    auVar42._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar10 = movmskpd((int)uVar12,auVar42);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar57 = *param_4;
      dVar69 = param_4[1];
      dVar3 = param_4[2];
      dVar4 = param_4[3];
      dVar49 = param_4[3];
      dVar47 = param_4[3];
      dVar55 = param_4[1];
      dVar53 = param_4[1];
      dVar2 = param_4[2];
      dVar70 = param_4[2];
      local_3e8 = local_388[1] * dVar2 * -1.0 +
                  local_388[2] * dVar55 + local_388[3] * *param_4 * 1.0 + local_388[0] * dVar49;
      dStack_3e0 = local_388[0] * dVar70 * 1.0 +
                   local_388[3] * dVar53 + local_388[2] * *param_4 * -1.0 + local_388[1] * dVar47;
      dVar48 = local_388[4] * dVar60;
      dVar64 = dStack_360 * dVar71;
      dVar56 = local_358 * dVar65;
      dVar58 = dStack_350 * auVar28._8_8_;
      dVar73 = dVar64 * dVar57 - dVar69 * dVar48;
      dVar72 = dVar56 * dVar69 - dVar3 * dVar64;
      dVar54 = dVar48 * dVar3 - dVar57 * dVar56;
      dVar52 = dVar58 * dVar4 - dVar4 * dVar58;
      dVar72 = dVar72 + dVar72;
      dVar54 = dVar54 + dVar54;
      dVar73 = dVar73 + dVar73;
      dVar52 = dVar52 + dVar52;
      local_3c8 = (dVar73 * dVar69 - dVar3 * dVar54) + dVar49 * dVar72 + dVar48 + param_4[4];
      dStack_3c0 = (dVar72 * dVar3 - dVar73 * dVar57) + dVar47 * dVar54 + dVar64 + param_4[5];
      local_3b8 = (dVar54 * dVar57 - dVar69 * dVar72) + dVar49 * dVar73 + dVar56 + param_4[6];
      dStack_3b0 = (dVar52 * dVar4 - dVar52 * dVar4) + dVar47 * dVar52 + dVar58 + param_4[7];
      local_3d8._8_8_ =
           local_388[2] * dVar70 * -1.0 +
           ((*param_4 * local_388[0] * -1.0 + local_388[3] * dVar47) - local_388[1] * dVar53);
      local_3d8._0_8_ =
           local_388[3] * dVar2 * 1.0 +
           ((*param_4 * local_388[1] * 1.0 + local_388[2] * dVar49) - local_388[0] * dVar55);
    }
    else {
      dVar55 = *param_4;
      dVar53 = param_4[1];
      dVar2 = param_4[2];
      dVar70 = dVar53 + dVar53;
      dVar48 = dVar2 + dVar2;
      dVar49 = dVar55 * (dVar55 + dVar55);
      local_1a8 = (1.0 - (dVar49 + dVar53 * dVar70)) * dVar65;
      dVar47 = param_4[3];
      dVar64 = dVar48 * dVar47;
      dVar54 = (dVar55 + dVar55) * param_4[3];
      dVar47 = dVar70 * dVar47;
      dVar49 = (DAT_149934d80._8_8_ - (dVar2 * dVar48 + dVar49)) * dVar71;
      local_1c8 = (dVar48 * dVar53 + dVar54) * dVar71;
      local_1e8 = (*param_4 * dVar48 - dVar47) * dVar60;
      stack0xfffffffffffffe10 = (dVar70 * dVar55 + dVar64) * dVar60;
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar48 + dVar53 * dVar70)) * dVar60;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar49,0);
      local_1d8._0_8_ = (dVar70 * dVar55 - dVar64) * dVar71;
      local_1d8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_8_ = (dVar48 * dVar53 - dVar54) * dVar65;
      local_1b8._0_8_ = (dVar47 + *param_4 * dVar48) * dVar65;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar49 = local_388[1] + local_388[1];
      dVar55 = local_388[2] + local_388[2];
      dVar47 = local_388[0] * (local_388[0] + local_388[0]);
      local_228 = (1.0 - (dVar47 + local_388[1] * dVar49)) * dVar63;
      dVar53 = (local_388[0] + local_388[0]) * local_388[3];
      local_238 = (dVar49 * local_388[3] + local_388[0] * dVar55) * dVar63;
      dStack_230 = (dVar55 * local_388[1] - dVar53) * dVar63;
      local_278 = ((double)DAT_149934d80 - (local_388[2] * dVar55 + local_388[1] * dVar49)) * dVar59
      ;
      dVar47 = (DAT_149934d80._8_8_ - (local_388[2] * dVar55 + dVar47)) * dVar74;
      dStack_270 = (dVar49 * local_388[0] + dVar55 * local_388[3]) * dVar59;
      local_248 = (dVar55 * local_388[1] + dVar53) * dVar74;
      local_268 = (local_388[0] * dVar55 - dVar49 * local_388[3]) * dVar59;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar47,0);
      local_258._0_8_ = (dVar49 * local_388[0] - dVar55 * local_388[3]) * dVar74;
      local_258._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_388[4];
      dStack_210 = dStack_360;
      local_208 = local_358;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar71 * dVar74);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar60 * dVar59);
      auVar32 = blendvpd(_DAT_149936790,auVar16,auVar21);
      uVar15 = -(ulonglong)(0.0 <= dVar65 * dVar63);
      dVar47 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar49 = auVar32._0_8_;
      local_168 = local_168 * dVar49;
      stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar49;
      local_178._0_8_ = (double)local_178._0_8_ * dVar49;
      dVar49 = auVar32._8_8_;
      local_148 = local_148 * dVar49;
      local_150 = local_150 * dVar49;
      local_158 = dVar49 * local_158;
      local_128 = local_128 * dVar47;
      local_130 = local_130 * dVar47;
      local_138 = dVar47 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar47 = local_288 * local_288 + local_298 * local_298;
      dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar37._0_8_ = dVar47 + dVar49;
      auVar37._8_8_ = dVar47 + dVar49;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
      auVar32 = sqrtpd(auVar37,auVar37);
      auVar32 = divpd(auVar16,auVar32);
      auVar68._0_8_ = auVar32._0_8_ * local_288;
      auVar68._8_8_ = auVar32._8_8_ * dStack_280;
      local_3e8 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
      dStack_3e0 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar22);
      local_3c8 = local_118;
      dStack_3c0 = dStack_110;
      local_3b8 = local_108;
      dStack_3b0 = 0.0;
    }
    local_3a8._8_4_ = SUB84(dVar74 * dVar71,0);
    local_3a8._0_8_ = dVar59 * dVar60;
    local_3a8._12_4_ = (int)((ulonglong)(dVar74 * dVar71) >> 0x20);
    local_398._8_8_ = dVar29 * auVar28._8_8_;
    local_398._0_8_ = dVar63 * dVar65;
    dVar60 = -local_2b8;
    dVar65 = -local_2c8;
    dVar59 = -dStack_2c0;
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x1000665d = dVar59;
    FUN_149121ad1(param_1,&local_3e8,local_178,&local_2c8);
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x10006675 = dVar59;
    FUN_149121ad1(param_1,&local_3e8,&local_2c8,local_178);
    dVar60 = -local_2e8;
    dVar65 = -local_2f8;
    dVar59 = -dStack_2f0;
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x1000668d = dVar59;
    FUN_149121ad1(param_1,&local_3e8,local_178,&local_2f8);
    stack0xfffffffffffffe90 = dVar59;
    local_178._0_8_ = dVar65;
    local_488 = &local_328;
    local_168 = dVar60;
    FUN_149121ad1(param_1,&local_3e8,&local_2f8,local_178);
  }
  local_388[0] = 0.7071067966408575;
  local_388[1] = 0.0;
  local_388[2] = 0.0;
  local_388[3] = 0.7071067657322372;
  if (1e-08 < local_46c) {
    local_488 = (double *)&DAT_149e1dd24;
    local_478 = 0x20;
    local_480 = 0;
    uVar12 = param_1;
    uVar8 = FUN_1490de91e(param_1,param_4,local_388);
    auVar16 = _DAT_149934d80;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    auVar32 = *(undefined1 (*) [16])(param_4 + 8);
    dVar60 = auVar32._0_8_;
    dVar71 = auVar32._8_8_;
    auVar28 = *(undefined1 (*) [16])(param_4 + 10);
    dVar65 = auVar28._0_8_;
    dVar59 = local_348._0_8_;
    dVar74 = local_348._8_8_;
    dVar63 = local_338._0_8_;
    dVar29 = local_338._8_8_;
    auVar32 = minpd(local_348,auVar32);
    auVar44 = minpd(local_338,auVar28);
    auVar43._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar43);
    auVar51._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar51._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar10 = movmskpd((int)uVar12,auVar51);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar3 = *param_4;
      dVar4 = param_4[1];
      dVar56 = param_4[2];
      dVar58 = param_4[3];
      dVar49 = param_4[3];
      dVar47 = param_4[3];
      dVar53 = param_4[1];
      dVar55 = param_4[1];
      dVar70 = param_4[2];
      dVar2 = param_4[2];
      local_3e8 = local_388[1] * dVar70 * -1.0 +
                  local_388[2] * dVar53 + local_388[3] * *param_4 * 1.0 + local_388[0] * dVar49;
      dStack_3e0 = local_388[0] * dVar2 * 1.0 +
                   local_388[3] * dVar55 + local_388[2] * *param_4 * -1.0 + local_388[1] * dVar47;
      dVar48 = local_388[4] * dVar60;
      dVar64 = dStack_360 * dVar71;
      dVar54 = local_358 * dVar65;
      dVar52 = dStack_350 * auVar28._8_8_;
      dVar69 = dVar64 * dVar3 - dVar4 * dVar48;
      dVar72 = dVar54 * dVar4 - dVar56 * dVar64;
      dVar73 = dVar48 * dVar56 - dVar3 * dVar54;
      dVar57 = dVar52 * dVar58 - dVar58 * dVar52;
      dVar72 = dVar72 + dVar72;
      dVar73 = dVar73 + dVar73;
      dVar69 = dVar69 + dVar69;
      dVar57 = dVar57 + dVar57;
      local_3c8 = (dVar69 * dVar4 - dVar56 * dVar73) + dVar49 * dVar72 + dVar48 + param_4[4];
      dStack_3c0 = (dVar72 * dVar56 - dVar69 * dVar3) + dVar47 * dVar73 + dVar64 + param_4[5];
      local_3b8 = (dVar73 * dVar3 - dVar4 * dVar72) + dVar49 * dVar69 + dVar54 + param_4[6];
      dStack_3b0 = (dVar57 * dVar58 - dVar57 * dVar58) + dVar47 * dVar57 + dVar52 + param_4[7];
      local_3d8._8_8_ =
           local_388[2] * dVar2 * -1.0 +
           ((*param_4 * local_388[0] * -1.0 + local_388[3] * dVar47) - local_388[1] * dVar55);
      local_3d8._0_8_ =
           local_388[3] * dVar70 * 1.0 +
           ((*param_4 * local_388[1] * 1.0 + local_388[2] * dVar49) - local_388[0] * dVar53);
    }
    else {
      dVar55 = *param_4;
      dVar53 = param_4[1];
      dVar2 = param_4[2];
      dVar48 = dVar53 + dVar53;
      dVar64 = dVar2 + dVar2;
      dVar47 = dVar55 * (dVar55 + dVar55);
      dVar49 = (DAT_149934d80._8_8_ - (dVar2 * dVar64 + dVar47)) * dVar71;
      local_1a8 = (1.0 - (dVar47 + dVar53 * dVar48)) * dVar65;
      dVar47 = param_4[3];
      dVar54 = dVar64 * dVar47;
      dVar52 = (dVar55 + dVar55) * param_4[3];
      dVar47 = dVar48 * dVar47;
      dVar70 = (dVar48 * dVar55 + dVar54) * dVar60;
      local_1c8 = (dVar64 * dVar53 + dVar52) * dVar71;
      local_1e8 = (*param_4 * dVar64 - dVar47) * dVar60;
      local_1f8._8_4_ = SUB84(dVar70,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar64 + dVar53 * dVar48)) * dVar60;
      uStack_1ec = (int)((ulonglong)dVar70 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar49,0);
      local_1d8._0_8_ = (dVar48 * dVar55 - dVar54) * dVar71;
      local_1d8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_8_ = (dVar64 * dVar53 - dVar52) * dVar65;
      local_1b8._0_8_ = (dVar47 + *param_4 * dVar64) * dVar65;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar49 = local_388[1] + local_388[1];
      dVar55 = local_388[2] + local_388[2];
      dVar47 = local_388[0] * (local_388[0] + local_388[0]);
      local_228 = (1.0 - (dVar47 + local_388[1] * dVar49)) * dVar63;
      dVar53 = (local_388[0] + local_388[0]) * local_388[3];
      local_238 = (dVar49 * local_388[3] + local_388[0] * dVar55) * dVar63;
      dStack_230 = (dVar55 * local_388[1] - dVar53) * dVar63;
      local_278 = ((double)DAT_149934d80 - (local_388[2] * dVar55 + local_388[1] * dVar49)) * dVar59
      ;
      dVar47 = (DAT_149934d80._8_8_ - (local_388[2] * dVar55 + dVar47)) * dVar74;
      dStack_270 = (dVar49 * local_388[0] + dVar55 * local_388[3]) * dVar59;
      local_248 = (dVar55 * local_388[1] + dVar53) * dVar74;
      local_268 = (local_388[0] * dVar55 - dVar49 * local_388[3]) * dVar59;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar47,0);
      local_258._0_8_ = (dVar49 * local_388[0] - dVar55 * local_388[3]) * dVar74;
      local_258._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_388[4];
      dStack_210 = dStack_360;
      local_208 = local_358;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar23._8_8_ = -(ulonglong)(0.0 <= dVar71 * dVar74);
      auVar23._0_8_ = -(ulonglong)(0.0 <= dVar60 * dVar59);
      auVar32 = blendvpd(_DAT_149936790,auVar16,auVar23);
      uVar15 = -(ulonglong)(0.0 <= dVar65 * dVar63);
      dVar47 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar49 = auVar32._0_8_;
      local_168 = local_168 * dVar49;
      stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar49;
      local_178._0_8_ = (double)local_178._0_8_ * dVar49;
      dVar49 = auVar32._8_8_;
      local_148 = local_148 * dVar49;
      local_150 = local_150 * dVar49;
      local_158 = dVar49 * local_158;
      local_128 = local_128 * dVar47;
      local_130 = local_130 * dVar47;
      local_138 = dVar47 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar47 = local_288 * local_288 + local_298 * local_298;
      dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar38._0_8_ = dVar47 + dVar49;
      auVar38._8_8_ = dVar47 + dVar49;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar32 = sqrtpd(auVar38,auVar38);
      auVar32 = divpd(auVar16,auVar32);
      auVar61._0_8_ = auVar32._0_8_ * local_288;
      auVar61._8_8_ = auVar32._8_8_ * dStack_280;
      local_3e8 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
      dStack_3e0 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar24);
      local_3c8 = local_118;
      dStack_3c0 = dStack_110;
      local_3b8 = local_108;
      dStack_3b0 = 0.0;
    }
    local_3a8._8_8_ = dVar74 * dVar71;
    local_3a8._0_8_ = dVar59 * dVar60;
    local_398._8_8_ = dVar29 * auVar28._8_8_;
    local_398._0_8_ = dVar63 * dVar65;
    local_488 = &local_310;
    FUN_149121ad1(param_1,&local_3e8,&local_2b0,&local_2b0);
    local_1e8 = -local_2a0;
    local_178._0_8_ = (ulonglong)local_2b0 ^ 0x8000000000000000;
    local_178._8_4_ = (undefined4)uStack_2a8;
    uStack_16c = uStack_2a8._4_4_ ^ 0x80000000;
    local_1f8._0_8_ = (ulonglong)local_2b0 ^ 0x8000000000000000;
    local_1f8._8_4_ = (undefined4)uStack_2a8;
    uStack_1ec = uStack_2a8._4_4_ ^ 0x80000000;
    local_488 = &local_310;
    local_168 = local_1e8;
    FUN_149121ad1(param_1,&local_3e8,local_1f8,local_178);
    local_488 = &local_310;
    FUN_149121ad1(param_1,&local_3e8,&local_2e0,&local_2e0);
    local_1e8 = -local_2d0;
    local_178._0_8_ = (ulonglong)local_2e0 ^ 0x8000000000000000;
    local_178._8_4_ = (undefined4)uStack_2d8;
    uStack_16c = uStack_2d8._4_4_ ^ 0x80000000;
    local_1f8._0_8_ = (ulonglong)local_2e0 ^ 0x8000000000000000;
    local_1f8._8_4_ = (undefined4)uStack_2d8;
    uStack_1ec = uStack_2d8._4_4_ ^ 0x80000000;
    local_488 = &local_310;
    local_168 = local_1e8;
    FUN_149121ad1(param_1,&local_3e8,local_1f8,local_178);
  }
  if (1e-08 < *param_3) {
    local_488 = (double *)&DAT_149e1dd24;
    local_478 = 0x20;
    local_480 = 0;
    uVar12 = param_1;
    uVar8 = FUN_1490de91e(param_1,param_4,local_388);
    auVar16 = _DAT_149934d80;
    local_3b8 = 0.0;
    dStack_3b0 = 0.0;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    auVar32 = *(undefined1 (*) [16])(param_4 + 8);
    dVar60 = auVar32._0_8_;
    dVar71 = auVar32._8_8_;
    auVar28 = *(undefined1 (*) [16])(param_4 + 10);
    dVar65 = auVar28._0_8_;
    dVar59 = local_348._0_8_;
    dVar74 = local_348._8_8_;
    dVar63 = local_338._0_8_;
    auVar32 = minpd(local_348,auVar32);
    auVar44 = minpd(local_338,auVar28);
    auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar33);
    auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar10 = movmskpd((int)uVar12,auVar45);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar54 = *param_4;
      dVar52 = param_4[1];
      dVar73 = param_4[2];
      dVar57 = param_4[3];
      dVar47 = param_4[3];
      dVar29 = param_4[3];
      dVar49 = param_4[1];
      dVar55 = param_4[1];
      dVar53 = param_4[2];
      dVar2 = param_4[2];
      local_3e8 = local_388[1] * dVar53 * -1.0 +
                  local_388[2] * dVar49 + local_388[3] * *param_4 * 1.0 + local_388[0] * dVar47;
      dStack_3e0 = local_388[0] * dVar2 * 1.0 +
                   local_388[3] * dVar55 + local_388[2] * *param_4 * -1.0 + local_388[1] * dVar29;
      local_388[4] = local_388[4] * dVar60;
      dStack_360 = dStack_360 * dVar71;
      local_358 = local_358 * dVar65;
      dStack_350 = dStack_350 * auVar28._8_8_;
      dVar64 = dStack_360 * dVar54 - dVar52 * local_388[4];
      dVar69 = local_358 * dVar52 - dVar73 * dStack_360;
      dVar70 = local_388[4] * dVar73 - dVar54 * local_358;
      dVar48 = dStack_350 * dVar57 - dVar57 * dStack_350;
      dVar69 = dVar69 + dVar69;
      dVar70 = dVar70 + dVar70;
      dVar64 = dVar64 + dVar64;
      dVar48 = dVar48 + dVar48;
      local_3c8 = (dVar64 * dVar52 - dVar73 * dVar70) + dVar47 * dVar69 + local_388[4] + param_4[4];
      dStack_3c0 = (dVar69 * dVar73 - dVar64 * dVar54) + dVar29 * dVar70 + dStack_360 + param_4[5];
      local_3b8 = (dVar70 * dVar54 - dVar52 * dVar69) + dVar47 * dVar64 + local_358 + param_4[6];
      dStack_3b0 = (dVar48 * dVar57 - dVar48 * dVar57) + dVar29 * dVar48 + dStack_350 + param_4[7];
      local_3d8._8_8_ =
           local_388[2] * dVar2 * -1.0 +
           ((*param_4 * local_388[0] * -1.0 + local_388[3] * dVar29) - local_388[1] * dVar55);
      local_3d8._0_8_ =
           local_388[3] * dVar53 * 1.0 +
           ((*param_4 * local_388[1] * 1.0 + local_388[2] * dVar47) - local_388[0] * dVar49);
    }
    else {
      dVar55 = *param_4;
      dVar53 = param_4[1];
      dVar2 = param_4[2];
      dVar70 = dVar53 + dVar53;
      dVar48 = dVar2 + dVar2;
      dVar47 = dVar55 * (dVar55 + dVar55);
      local_1a8 = (1.0 - (dVar47 + dVar53 * dVar70)) * dVar65;
      dVar29 = param_4[3];
      dVar64 = dVar48 * dVar29;
      dVar54 = (dVar55 + dVar55) * param_4[3];
      dVar29 = dVar70 * dVar29;
      dVar49 = (dVar70 * dVar55 + dVar64) * dVar60;
      local_1c8 = (dVar48 * dVar53 + dVar54) * dVar71;
      local_1e8 = (*param_4 * dVar48 - dVar29) * dVar60;
      local_1f8._8_4_ = SUB84(dVar49,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar48 + dVar53 * dVar70)) * dVar60;
      uStack_1ec = (int)((ulonglong)dVar49 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar2 * dVar48 + dVar47)) * dVar71;
      local_1d8._0_8_ = (dVar70 * dVar55 - dVar64) * dVar71;
      uStack_1c0 = 0;
      local_1b8._8_8_ = (dVar48 * dVar53 - dVar54) * dVar65;
      local_1b8._0_8_ = (dVar29 + *param_4 * dVar48) * dVar65;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar47 = local_388[1] + local_388[1];
      dVar49 = local_388[2] + local_388[2];
      dVar29 = local_388[0] * (local_388[0] + local_388[0]);
      local_228 = (1.0 - (dVar29 + local_388[1] * dVar47)) * dVar63;
      dVar55 = (local_388[0] + local_388[0]) * local_388[3];
      local_238 = (dVar47 * local_388[3] + local_388[0] * dVar49) * dVar63;
      dStack_230 = (dVar49 * local_388[1] - dVar55) * dVar63;
      local_278 = ((double)DAT_149934d80 - (local_388[2] * dVar49 + local_388[1] * dVar47)) * dVar59
      ;
      dVar29 = (DAT_149934d80._8_8_ - (local_388[2] * dVar49 + dVar29)) * dVar74;
      dStack_270 = (dVar47 * local_388[0] + dVar49 * local_388[3]) * dVar59;
      local_248 = (dVar49 * local_388[1] + dVar55) * dVar74;
      local_268 = (local_388[0] * dVar49 - dVar47 * local_388[3]) * dVar59;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar29,0);
      local_258._0_8_ = (dVar47 * local_388[0] - dVar49 * local_388[3]) * dVar74;
      local_258._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_388[4];
      dStack_210 = dStack_360;
      local_208 = local_358;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar25._8_8_ = -(ulonglong)(0.0 <= dVar71 * dVar74);
      auVar25._0_8_ = -(ulonglong)(0.0 <= dVar60 * dVar59);
      auVar32 = blendvpd(_DAT_149936790,auVar16,auVar25);
      uVar15 = -(ulonglong)(0.0 <= dVar65 * dVar63);
      dVar29 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar47 = auVar32._0_8_;
      local_168 = local_168 * dVar47;
      stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar47;
      local_178._0_8_ = (double)local_178._0_8_ * dVar47;
      dVar47 = auVar32._8_8_;
      local_148 = local_148 * dVar47;
      local_150 = local_150 * dVar47;
      local_158 = dVar47 * local_158;
      local_128 = local_128 * dVar29;
      local_130 = local_130 * dVar29;
      local_138 = dVar29 * local_138;
      FUN_14481fd10(&local_298,local_178);
      dVar29 = local_288 * local_288 + local_298 * local_298;
      dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar39._0_8_ = dVar29 + dVar47;
      auVar39._8_8_ = dVar29 + dVar47;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
      auVar32 = sqrtpd(auVar39,auVar39);
      auVar32 = divpd(auVar16,auVar32);
      auVar62._0_8_ = auVar32._0_8_ * local_288;
      auVar62._8_8_ = auVar32._8_8_ * dStack_280;
      local_3e8 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
      dStack_3e0 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
      local_3d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar26);
      local_3c8 = local_118;
      dStack_3c0 = dStack_110;
      local_3b8 = local_108;
      dStack_3b0 = 0.0;
    }
    local_3a8._8_8_ = dVar74 * dVar71;
    local_3a8._0_8_ = dVar59 * dVar60;
    local_398._8_8_ = local_338._8_8_ * auVar28._8_8_;
    local_398._0_8_ = dVar63 * dVar65;
    dVar60 = -local_2b8;
    dVar65 = -local_2c8;
    dVar59 = -dStack_2c0;
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x100066a5 = dVar59;
    FUN_149121ad1(param_1,&local_3e8,local_178,&local_2c8);
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x100066bd = dVar59;
    FUN_149121ad1(param_1,&local_3e8,&local_2c8,local_178);
    dVar60 = -local_2e8;
    dVar65 = -local_2f8;
    dVar59 = -dStack_2f0;
    local_488 = &local_328;
    local_168 = dVar60;
    local_178._0_8_ = dVar65;
    unique0x100066d5 = dVar59;
    FUN_149121ad1(param_1,&local_3e8,local_178,&local_2f8);
    stack0xfffffffffffffe90 = dVar59;
    local_178._0_8_ = dVar65;
    local_488 = &local_328;
    local_168 = dVar60;
    FUN_149121ad1(param_1,&local_3e8,&local_2f8,local_178);
  }
  if ((local_f0 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912a9a0 FUN_14912a9a0 body=74 status=ok
// SIG undefined FUN_14912a9a0(void)

undefined1 FUN_14912a9a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x3b8))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar2) == *param_2) {
        return 1;
      }
      bVar3 = (longlong)(int)plVar1[1] * 8 + -8 != lVar2;
      lVar2 = lVar2 + 8;
    } while (bVar3);
  }
  return 0;
}



// FUNCTION 14912a9ea FUN_14912a9ea body=73 status=ok
// SIG undefined FUN_14912a9ea(void)

ulonglong FUN_14912a9ea(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x3b8))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = (longlong)(int)plVar1[1] << 3;
    uVar3 = 0;
    do {
      if (*(longlong *)(*plVar1 + uVar3 * 8) == *param_2) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 14912aa34 FUN_14912aa34 body=106 status=ok
// SIG undefined FUN_14912aa34(void)

undefined8 * FUN_14912aa34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc041f0) {
    FUN_144b3d300(&DAT_14cc041f0);
    if (DAT_14cc041f0 == -1) {
      DAT_14cc041e0 = 0;
      uRam000000014cc041e8 = 0;
      atexit((_func_5014 *)&LAB_1444809d5);
      _Init_thread_footer(&DAT_14cc041f0);
    }
  }
  return &DAT_14cc041e0;
}



// FUNCTION 14912aab6 FUN_14912aab6 body=38 status=ok
// SIG undefined FUN_14912aab6(void)

undefined8 FUN_14912aab6(undefined8 param_1,int param_2)

{
  FUN_1457b26f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912aae8 FUN_14912aae8 body=62 status=ok
// SIG undefined FUN_14912aae8(void)

void FUN_14912aae8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1457dcce6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912ab52 FUN_14912ab52 body=99 status=ok
// SIG undefined FUN_14912ab52(void)

void FUN_14912ab52(longlong *param_1,longlong param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && param_3 == '\x01') {
    FUN_1408ccbd2(local_28);
    (**(code **)(*param_1 + 0x80))(param_1,local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912abf6 FUN_14912abf6 body=22 status=ok
// SIG undefined FUN_14912abf6(void)

undefined8 FUN_14912abf6(undefined8 param_1,undefined8 param_2)

{
  FUN_1490fac22();
  return param_2;
}



// FUNCTION 14912ac88 FUN_14912ac88 body=42 status=ok
// SIG undefined FUN_14912ac88(void)

void FUN_14912ac88(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_2);
  return;
}



// FUNCTION 14912acc8 FUN_14912acc8 body=54 status=ok
// SIG undefined FUN_14912acc8(void)

undefined1 FUN_14912acc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490f25f0(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14912ad26 FUN_14912ad26 body=59 status=ok
// SIG undefined FUN_14912ad26(void)

undefined8 FUN_14912ad26(longlong *param_1)

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



// FUNCTION 14912ad6c FUN_14912ad6c body=53 status=ok
// SIG undefined FUN_14912ad6c(void)

void FUN_14912ad6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14912ae70 FUN_14912ae70 body=89 status=ok
// SIG undefined FUN_14912ae70(void)

void FUN_14912ae70(longlong *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *(undefined2 *)(param_2 + 4);
  uVar2 = FUN_144a78877(*param_2,*(undefined2 *)(param_2 + 2));
  FUN_144a78877(uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912b000 FUN_14912b000 body=59 status=ok
// SIG undefined FUN_14912b000(void)

undefined8 FUN_14912b000(longlong *param_1)

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



// FUNCTION 14912b0de FUN_14912b0de body=47 status=ok
// SIG undefined FUN_14912b0de(void)

void FUN_14912b0de(undefined8 param_1,longlong *param_2)

{
  if (param_2[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14912b124 FUN_14912b124 body=54 status=ok
// SIG undefined FUN_14912b124(void)

undefined1 FUN_14912b124(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14912b21e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14912b182 FUN_14912b182 body=59 status=ok
// SIG undefined FUN_14912b182(void)

undefined8 FUN_14912b182(longlong *param_1)

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



// FUNCTION 14912b21e FUN_14912b21e body=143 status=ok
// SIG undefined FUN_14912b21e(void)

longlong FUN_14912b21e(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_14054c6c4();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 14912b2ae FUN_14912b2ae body=51 status=ok
// SIG undefined FUN_14912b2ae(void)

void FUN_14912b2ae(longlong *param_1)

{
  if ((char)param_1[9] == '\x01') {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14912b398 FUN_14912b398 body=63 status=ok
// SIG undefined FUN_14912b398(void)

undefined1 FUN_14912b398(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490f4cdc(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14912b400 FUN_14912b400 body=59 status=ok
// SIG undefined FUN_14912b400(void)

undefined8 FUN_14912b400(longlong *param_1)

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



// FUNCTION 14912b44c FUN_14912b44c body=40 status=ok
// SIG undefined FUN_14912b44c(void)

void FUN_14912b44c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1490f4e6e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14912b4c4 FUN_14912b4c4 body=29 status=ok
// SIG undefined FUN_14912b4c4(void)

undefined8 FUN_14912b4c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912b580 FUN_14912b580 body=70 status=ok
// SIG undefined FUN_14912b580(void)

void FUN_14912b580(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490ddcda(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912b62e FUN_14912b62e body=29 status=ok
// SIG undefined FUN_14912b62e(void)

undefined8 FUN_14912b62e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912b68a FUN_14912b68a body=73 status=ok
// SIG undefined FUN_14912b68a(void)

undefined1 FUN_14912b68a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_140bee9ec(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14912b6fc FUN_14912b6fc body=70 status=ok
// SIG undefined FUN_14912b6fc(void)

void FUN_14912b6fc(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14912b7bf(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912b74e FUN_14912b74e body=34 status=ok
// SIG undefined FUN_14912b74e(void)

void FUN_14912b74e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1490e6fda(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14912b7bf FUN_14912b7bf body=152 status=ok
// SIG undefined FUN_14912b7bf(void)

void FUN_14912b7bf(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_1;
  }
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar5,puVar7);
  iVar1 = *(int *)(param_1 + 3);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[2];
    lVar8 = 0;
    do {
      iVar5 = *(int *)(lVar2 + 8 + lVar8);
      puVar7 = &DAT_149dfb77a;
      iVar6 = 0;
      if (iVar5 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar8);
        iVar6 = iVar5 + -1;
      }
      uVar4 = FUN_144a49b4a(iVar6,puVar7);
      uVar3 = FUN_144a78877(uVar3,uVar4);
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar8);
  }
  FUN_144a78877(uVar3,*(undefined1 *)(param_1 + 4));
  return;
}



// FUNCTION 14912b932 FUN_14912b932 body=88 status=ok
// SIG undefined FUN_14912b932(void)

undefined1 FUN_14912b932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490eded0(param_2,param_3);
    FUN_147def1f0(param_2 + 0x10,param_3 + 0x10);
    FUN_14058acb2(param_2 + 0x60,param_3 + 0x60);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 14912b9b2 FUN_14912b9b2 body=70 status=ok
// SIG undefined FUN_14912b9b2(void)

void FUN_14912b9b2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14912ba81(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912ba0a FUN_14912ba0a body=40 status=ok
// SIG undefined FUN_14912ba0a(void)

void FUN_14912ba0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1490ee25a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14912ba81 FUN_14912ba81 body=726 status=ok
// SIG undefined FUN_14912ba81(void)

undefined4 FUN_14912ba81(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar11 = 0;
  uVar4 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar9 = *param_1;
    lVar12 = (longlong)(int)param_1[1] * 0x28;
    uVar4 = 0;
    do {
      uVar3 = FUN_14912b7bf(lVar9);
      uVar4 = FUN_144a78877(uVar4,uVar3);
      lVar9 = lVar9 + 0x28;
      lVar12 = lVar12 + -0x28;
    } while (lVar12 != 0);
  }
  plVar1 = param_1 + 2;
  plVar2 = param_1 + 4;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  plStack_60 = plVar2;
  if ((int)param_1[7] != 0) {
    FUN_1449c0562(&local_68);
    iVar11 = (int)param_1[7];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_68;
  plStack_80 = plStack_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar11) || (plStack_60 != plVar2)) {
    do {
      lVar9 = *local_90;
      lVar12 = (longlong)iStack_74 * 0x20;
      iVar6 = *(int *)(lVar9 + 8 + lVar12);
      if (iVar6 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(lVar9 + lVar12);
      }
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar7,puVar8);
      uVar4 = FUN_144a78877(uVar4,(uVar5 >> 2) + uVar5 * 0x40 + *(int *)(lVar9 + 0x10 + lVar12) +
                                  0x9e3779b9 ^ uVar5);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (plStack_80 != plVar2 || iStack_74 != iVar11));
  }
  plVar1 = param_1 + 0xc;
  local_98 = param_1 + 0xe;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  plStack_60 = local_98;
  if ((int)param_1[0x11] == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = (int)param_1[0x11];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88._0_4_ = (undefined4)local_68;
  local_88._4_4_ = local_68._4_4_;
  plStack_80 = plStack_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar11) || (plStack_60 != local_98)) {
    do {
      lVar9 = *local_90;
      lVar12 = (longlong)iStack_74;
      iVar6 = *(int *)(lVar9 + 8 + lVar12 * 0x28);
      puVar10 = &DAT_149dfb77a;
      puVar8 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar8 = *(undefined2 **)(lVar9 + lVar12 * 0x28);
      }
      iVar13 = 0;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = iVar13;
      }
      uVar5 = FUN_144a49b4a(iVar7,puVar8);
      iVar6 = *(int *)(lVar9 + 0x18 + lVar12 * 0x28);
      if (iVar6 != 0) {
        puVar10 = *(undefined2 **)(lVar9 + 0x10 + lVar12 * 0x28);
        iVar13 = iVar6 + -1;
      }
      iVar6 = FUN_144a49b4a(iVar13,puVar10);
      uVar4 = FUN_144a78877(uVar4,(uVar5 >> 2) + uVar5 * 0x40 + iVar6 + 0x9e3779b9 ^ uVar5);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (plStack_80 != local_98 || iStack_74 != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912bd80 FUN_14912bd80 body=47 status=ok
// SIG undefined FUN_14912bd80(void)

void FUN_14912bd80(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14912bdc6 FUN_14912bdc6 body=75 status=ok
// SIG undefined FUN_14912bdc6(void)

undefined8 FUN_14912bdc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    FUN_14054c6c4(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14912be3a FUN_14912be3a body=59 status=ok
// SIG undefined FUN_14912be3a(void)

undefined8 FUN_14912be3a(longlong *param_1)

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



// FUNCTION 14912bed8 FUN_14912bed8 body=51 status=ok
// SIG undefined FUN_14912bed8(void)

void FUN_14912bed8(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 14912bf58 FUN_14912bf58 body=70 status=ok
// SIG undefined FUN_14912bf58(void)

undefined8 FUN_14912bf58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1400e9262(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14912bfc6 FUN_14912bfc6 body=59 status=ok
// SIG undefined FUN_14912bfc6(void)

undefined8 FUN_14912bfc6(longlong *param_1)

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



// FUNCTION 14912c00c FUN_14912c00c body=37 status=ok
// SIG undefined FUN_14912c00c(void)

void FUN_14912c00c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14912c082 FUN_14912c082 body=130 status=ok
// SIG undefined FUN_14912c082(void)

void FUN_14912c082(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912c16e FUN_14912c16e body=59 status=ok
// SIG undefined FUN_14912c16e(void)

undefined8 FUN_14912c16e(longlong *param_1)

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



// FUNCTION 14912c20e FUN_14912c20e body=29 status=ok
// SIG undefined FUN_14912c20e(void)

undefined8 FUN_14912c20e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912c22c FUN_14912c22c body=161 status=ok
// SIG undefined FUN_14912c22c(void)

void FUN_14912c22c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 14912c2ce FUN_14912c2ce body=138 status=ok
// SIG undefined FUN_14912c2ce(void)

void FUN_14912c2ce(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 14912c37c FUN_14912c37c body=205 status=ok
// SIG undefined FUN_14912c37c(void)

undefined8 FUN_14912c37c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
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
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      lVar1 = param_3 + lVar14;
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined4 *)(lVar1 + 0x28);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      uVar11 = *(undefined4 *)(lVar1 + 0x3c);
      uVar12 = *(undefined4 *)(lVar1 + 0x40);
      uVar13 = *(undefined4 *)(lVar1 + 0x44);
      lVar2 = param_2 + 0x48 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar14);
      memcpy((void *)(param_2 + lVar14 + 0x60),_Src,0x98);
      FUN_1490e1992(param_2 + lVar14 + 0xf8,param_3 + lVar14 + 0xf8);
      FUN_145c50a48(param_2 + lVar14 + 0x108,param_3 + lVar14 + 0x108);
      *(undefined8 *)(param_2 + lVar14 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      lVar14 = lVar14 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912c472 FUN_14912c472 body=59 status=ok
// SIG undefined FUN_14912c472(void)

undefined8 FUN_14912c472(longlong *param_1)

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



// FUNCTION 14912c4be FUN_14912c4be body=49 status=ok
// SIG undefined FUN_14912c4be(void)

void FUN_14912c4be(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 14912c540 FUN_14912c540 body=91 status=ok
// SIG undefined FUN_14912c540(void)

longlong FUN_14912c540(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140d693fe(param_1);
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



// FUNCTION 14912c5c4 FUN_14912c5c4 body=101 status=ok
// SIG undefined FUN_14912c5c4(void)

undefined1 FUN_14912c5c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912c652 FUN_14912c652 body=133 status=ok
// SIG undefined FUN_14912c652(void)

undefined4 FUN_14912c652(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  FUN_1400021e4(param_2,&local_28);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14912c73e FUN_14912c73e body=123 status=ok
// SIG undefined FUN_14912c73e(void)

undefined8 * FUN_14912c73e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14912c7ba();
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



// FUNCTION 14912c7ba FUN_14912c7ba body=389 status=ok
// SIG undefined FUN_14912c7ba(void)

longlong * FUN_14912c7ba(longlong *param_1,longlong *param_2)

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
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
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



// FUNCTION 14912c940 FUN_14912c940 body=122 status=ok
// SIG undefined FUN_14912c940(void)

longlong FUN_14912c940(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14912c9ba(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14912c9ba FUN_14912c9ba body=117 status=ok
// SIG undefined FUN_14912c9ba(void)

undefined8 * FUN_14912c9ba(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1456c3d84(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14912ca9c FUN_14912ca9c body=59 status=ok
// SIG undefined FUN_14912ca9c(void)

undefined8 FUN_14912ca9c(longlong *param_1)

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



// FUNCTION 14912cbc2 FUN_14912cbc2 body=54 status=ok
// SIG undefined FUN_14912cbc2(void)

undefined1 FUN_14912cbc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14912ccd6(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14912cc20 FUN_14912cc20 body=59 status=ok
// SIG undefined FUN_14912cc20(void)

undefined8 FUN_14912cc20(longlong *param_1)

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



// FUNCTION 14912cc66 FUN_14912cc66 body=34 status=ok
// SIG undefined FUN_14912cc66(void)

void FUN_14912cc66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14598baf4(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14912ccd6 FUN_14912ccd6 body=110 status=ok
// SIG undefined FUN_14912ccd6(void)

longlong FUN_14912ccd6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  FUN_14912cd44(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x50);
    }
  }
  *(longlong *)(param_1 + 0x50) = lVar4;
  return param_1;
}



// FUNCTION 14912cd44 FUN_14912cd44 body=130 status=ok
// SIG undefined FUN_14912cd44(void)

void FUN_14912cd44(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912cdc8 FUN_14912cdc8 body=38 status=ok
// SIG undefined FUN_14912cdc8(void)

undefined8 FUN_14912cdc8(undefined8 param_1,int param_2)

{
  FUN_14598baf4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912ce78 FUN_14912ce78 body=59 status=ok
// SIG undefined FUN_14912ce78(void)

undefined8 FUN_14912ce78(longlong *param_1)

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



// FUNCTION 14912cf18 FUN_14912cf18 body=29 status=ok
// SIG undefined FUN_14912cf18(void)

undefined8 FUN_14912cf18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912d000 FUN_14912d000 body=59 status=ok
// SIG undefined FUN_14912d000(void)

undefined8 FUN_14912d000(longlong *param_1)

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



// FUNCTION 14912d0a0 FUN_14912d0a0 body=29 status=ok
// SIG undefined FUN_14912d0a0(void)

undefined8 FUN_14912d0a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912d0f2 FUN_14912d0f2 body=132 status=ok
// SIG undefined FUN_14912d0f2(void)

undefined8 FUN_14912d0f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      *(undefined4 *)(param_2 + 8 + lVar4) = *(undefined4 *)(param_3 + 8 + lVar4);
      FUN_14115e0ba(param_2 + 0x10 + lVar4,param_3 + 0x10 + lVar4);
      puVar1 = (undefined8 *)(param_3 + 0x98 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x98 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined4 *)(param_2 + 0xa8 + lVar4) = *(undefined4 *)(param_3 + 0xa8 + lVar4);
      lVar4 = lVar4 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912d19e FUN_14912d19e body=59 status=ok
// SIG undefined FUN_14912d19e(void)

undefined8 FUN_14912d19e(longlong *param_1)

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



// FUNCTION 14912d240 FUN_14912d240 body=91 status=ok
// SIG undefined FUN_14912d240(void)

undefined8 * FUN_14912d240(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb02f60;
  param_1[2] = &DAT_14a176f00;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912d29c FUN_14912d29c body=88 status=ok
// SIG undefined FUN_14912d29c(void)

void FUN_14912d29c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *param_1 = &PTR_FUN_14bb02f60;
    param_1[2] = &DAT_14a176f00;
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 3);
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}



// FUNCTION 14912d328 FUN_14912d328 body=70 status=ok
// SIG undefined FUN_14912d328(void)

undefined1 FUN_14912d328(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912d396 FUN_14912d396 body=59 status=ok
// SIG undefined FUN_14912d396(void)

undefined8 FUN_14912d396(longlong *param_1)

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



// FUNCTION 14912d438 FUN_14912d438 body=428 status=ok
// SIG undefined FUN_14912d438(void)

undefined8 * FUN_14912d438(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined **local_b8 [13];
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14bb03140;
  pppuVar1 = (undefined ***)(param_1 + 1);
  FUN_14109baa4(pppuVar1);
  FUN_14109baa4(local_b8);
  *(undefined4 *)(param_1 + 0xe) = local_50;
  *(undefined1 *)((longlong)param_1 + 0x74) = local_4c;
  *(undefined1 *)((longlong)param_1 + 0x75) = local_4b;
  if (pppuVar1 != local_b8) {
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    param_1[0xf] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0x84) = local_40._4_4_;
    local_40 = 0;
  }
  if (DAT_14c950c29 == '\x01') {
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0x11] = local_38;
  local_b8[0] = (undefined **)&DAT_14a176f00;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_b8[0] = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  uVar2 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_bc);
  local_d0 = local_bc;
  local_d8 = 0;
  FUN_1406507bc(uVar2,local_b8,0,0);
  uVar2 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_c0);
  local_d0 = local_c0;
  local_d8 = 0;
  FUN_1406507bc(uVar2,local_b8,0x3f800000,0x3f800000);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912d5e6 FUN_14912d5e6 body=88 status=ok
// SIG undefined FUN_14912d5e6(void)

undefined8 * FUN_14912d5e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb03140;
  param_1[1] = &DAT_14a176f00;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912d640 FUN_14912d640 body=85 status=ok
// SIG undefined FUN_14912d640(void)

void FUN_14912d640(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *param_1 = &PTR_FUN_14bb03140;
    param_1[1] = &DAT_14a176f00;
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 2);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14912d728 FUN_14912d728 body=59 status=ok
// SIG undefined FUN_14912d728(void)

undefined8 FUN_14912d728(longlong *param_1)

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



// FUNCTION 14912d7c8 FUN_14912d7c8 body=29 status=ok
// SIG undefined FUN_14912d7c8(void)

undefined8 FUN_14912d7c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912d888 FUN_14912d888 body=59 status=ok
// SIG undefined FUN_14912d888(void)

undefined8 FUN_14912d888(longlong *param_1)

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



// FUNCTION 14912d928 FUN_14912d928 body=29 status=ok
// SIG undefined FUN_14912d928(void)

undefined8 FUN_14912d928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912d9d8 FUN_14912d9d8 body=59 status=ok
// SIG undefined FUN_14912d9d8(void)

undefined8 FUN_14912d9d8(longlong *param_1)

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



// FUNCTION 14912da78 FUN_14912da78 body=29 status=ok
// SIG undefined FUN_14912da78(void)

undefined8 FUN_14912da78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912db28 FUN_14912db28 body=59 status=ok
// SIG undefined FUN_14912db28(void)

undefined8 FUN_14912db28(longlong *param_1)

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



// FUNCTION 14912dbc8 FUN_14912dbc8 body=29 status=ok
// SIG undefined FUN_14912dbc8(void)

undefined8 FUN_14912dbc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912dc1a FUN_14912dc1a body=229 status=ok
// SIG undefined FUN_14912dc1a(void)

undefined8 FUN_14912dc1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xb1);
      lVar16 = lVar16 + 0x1e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912dd28 FUN_14912dd28 body=59 status=ok
// SIG undefined FUN_14912dd28(void)

undefined8 FUN_14912dd28(longlong *param_1)

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



// FUNCTION 14912dd74 FUN_14912dd74 body=49 status=ok
// SIG undefined FUN_14912dd74(void)

void FUN_14912dd74(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 14912ddf4 FUN_14912ddf4 body=256 status=ok
// SIG undefined FUN_14912ddf4(void)

void FUN_14912ddf4(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb03aa0;
  uVar1 = DAT_14c8464e8;
  param_1[0x27] = DAT_14c8464e0;
  param_1[0x28] = uVar1;
  param_1[0x29] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar1;
  param_1[0x26] = DAT_14c8464f0;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x2e;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x3a) = 1;
  return;
}



// FUNCTION 14912def4 FUN_14912def4 body=52 status=ok
// SIG undefined FUN_14912def4(void)

undefined8 * FUN_14912def4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912df2a FUN_14912df2a body=204 status=ok
// SIG undefined FUN_14912df2a(void)

void FUN_14912df2a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bb03c80;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0x3f800000;
  param_2[0x27] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x28) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x2a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x36) = 1;
  return;
}



// FUNCTION 14912dff6 FUN_14912dff6 body=204 status=ok
// SIG undefined FUN_14912dff6(void)

void FUN_14912dff6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bb03c80;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0x3f800000;
  param_2[0x27] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x28) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x2a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x36) = 1;
  return;
}



// FUNCTION 14912e0e6 FUN_14912e0e6 body=63 status=ok
// SIG undefined FUN_14912e0e6(void)

undefined1 FUN_14912e0e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14912e240(param_2,param_3);
    param_3 = param_3 + 0x1c0;
    param_2 = param_2 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14912e14e FUN_14912e14e body=59 status=ok
// SIG undefined FUN_14912e14e(void)

undefined8 FUN_14912e14e(longlong *param_1)

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



// FUNCTION 14912e1f0 FUN_14912e1f0 body=79 status=ok
// SIG undefined FUN_14912e1f0(void)

undefined8 * FUN_14912e1f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb03c80;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912e240 FUN_14912e240 body=169 status=ok
// SIG undefined FUN_14912e240(void)

longlong FUN_14912e240(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_14591e93c(param_1 + 0x48,param_2 + 0x48);
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x98);
  FUN_1490e1992(param_1 + 0xf8,param_2 + 0xf8);
  FUN_145c50a48(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  FUN_1405b70a4(param_1 + 0x120,param_2 + 0x120);
  memcpy((void *)(param_1 + 0x130),(void *)(param_2 + 0x130),0x81);
  return param_1;
}



// FUNCTION 14912e2ea FUN_14912e2ea body=76 status=ok
// SIG undefined FUN_14912e2ea(void)

void FUN_14912e2ea(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *param_1 = &PTR_FUN_14bb03c80;
    if (param_1[0x24] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_1 + 2);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14912e336 FUN_14912e336 body=101 status=ok
// SIG undefined FUN_14912e336(void)

void FUN_14912e336(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb03ec0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[1] = DAT_14c8464e0;
  param_2[2] = uVar1;
  param_2[3] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_2 + 0x34) = &DAT_41200000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x16) = 1;
  return;
}



// FUNCTION 14912e39c FUN_14912e39c body=101 status=ok
// SIG undefined FUN_14912e39c(void)

void FUN_14912e39c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb03ec0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[1] = DAT_14c8464e0;
  param_2[2] = uVar1;
  param_2[3] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_2 + 0x34) = &DAT_41200000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x16) = 1;
  return;
}



// FUNCTION 14912e426 FUN_14912e426 body=71 status=ok
// SIG undefined FUN_14912e426(void)

undefined8 FUN_14912e426(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa9);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912e496 FUN_14912e496 body=59 status=ok
// SIG undefined FUN_14912e496(void)

undefined8 FUN_14912e496(longlong *param_1)

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



// FUNCTION 14912e542 FUN_14912e542 body=29 status=ok
// SIG undefined FUN_14912e542(void)

undefined8 FUN_14912e542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912e594 FUN_14912e594 body=229 status=ok
// SIG undefined FUN_14912e594(void)

undefined8 FUN_14912e594(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xa1);
      lVar16 = lVar16 + 0x1d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912e6a2 FUN_14912e6a2 body=59 status=ok
// SIG undefined FUN_14912e6a2(void)

undefined8 FUN_14912e6a2(longlong *param_1)

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



// FUNCTION 14912e6ee FUN_14912e6ee body=49 status=ok
// SIG undefined FUN_14912e6ee(void)

void FUN_14912e6ee(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 14912e76e FUN_14912e76e body=245 status=ok
// SIG undefined FUN_14912e76e(void)

void FUN_14912e76e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb040a0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar1;
  param_1[0x26] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_1 + 0x14c) = &DAT_41200000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x2c;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 14912e864 FUN_14912e864 body=52 status=ok
// SIG undefined FUN_14912e864(void)

undefined8 * FUN_14912e864(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912e89a FUN_14912e89a body=29 status=ok
// SIG undefined FUN_14912e89a(void)

undefined8 FUN_14912e89a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912e8ec FUN_14912e8ec body=229 status=ok
// SIG undefined FUN_14912e8ec(void)

undefined8 FUN_14912e8ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xe1);
      lVar16 = lVar16 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912e9fa FUN_14912e9fa body=59 status=ok
// SIG undefined FUN_14912e9fa(void)

undefined8 FUN_14912e9fa(longlong *param_1)

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



// FUNCTION 14912ea46 FUN_14912ea46 body=49 status=ok
// SIG undefined FUN_14912ea46(void)

void FUN_14912ea46(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14912eac6 FUN_14912eac6 body=231 status=ok
// SIG undefined FUN_14912eac6(void)

void FUN_14912eac6(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb04300;
  param_1[0x33] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f80000000000000;
  param_1[0x32] = &DAT_41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 14912ebae FUN_14912ebae body=52 status=ok
// SIG undefined FUN_14912ebae(void)

undefined8 * FUN_14912ebae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912ec18 FUN_14912ec18 body=229 status=ok
// SIG undefined FUN_14912ec18(void)

undefined8 FUN_14912ec18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xe1);
      lVar16 = lVar16 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912ed26 FUN_14912ed26 body=59 status=ok
// SIG undefined FUN_14912ed26(void)

undefined8 FUN_14912ed26(longlong *param_1)

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



// FUNCTION 14912ed72 FUN_14912ed72 body=49 status=ok
// SIG undefined FUN_14912ed72(void)

void FUN_14912ed72(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14912ee28 FUN_14912ee28 body=229 status=ok
// SIG undefined FUN_14912ee28(void)

undefined8 FUN_14912ee28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xf1);
      lVar16 = lVar16 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912ef36 FUN_14912ef36 body=59 status=ok
// SIG undefined FUN_14912ef36(void)

undefined8 FUN_14912ef36(longlong *param_1)

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



// FUNCTION 14912ef82 FUN_14912ef82 body=49 status=ok
// SIG undefined FUN_14912ef82(void)

void FUN_14912ef82(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14912f002 FUN_14912f002 body=244 status=ok
// SIG undefined FUN_14912f002(void)

void FUN_14912f002(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb04640;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f80000000000000;
  param_1[0x32] = &DAT_41200000;
  param_1[0x33] = 0x43b40000;
  *(undefined4 *)(param_1 + 0x34) = 0x10;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x36;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}



// FUNCTION 14912f0f6 FUN_14912f0f6 body=52 status=ok
// SIG undefined FUN_14912f0f6(void)

undefined8 * FUN_14912f0f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912f160 FUN_14912f160 body=229 status=ok
// SIG undefined FUN_14912f160(void)

undefined8 FUN_14912f160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xf1);
      lVar16 = lVar16 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912f26e FUN_14912f26e body=59 status=ok
// SIG undefined FUN_14912f26e(void)

undefined8 FUN_14912f26e(longlong *param_1)

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



// FUNCTION 14912f2ba FUN_14912f2ba body=49 status=ok
// SIG undefined FUN_14912f2ba(void)

void FUN_14912f2ba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}


