// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406d3bdc FUN_1406d3bdc body=57 status=ok
// SIG undefined FUN_1406d3bdc(void)

void FUN_1406d3bdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ae8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ae8 = FUN_140002ddd(FUN_1465d5248,uVar1,L"OakDiscoveryLocationTypeDef");
  }
  return;
}



// FUNCTION 1406d3c16 FUN_1406d3c16 body=259 status=ok
// SIG undefined FUN_1406d3c16(void)

void FUN_1406d3c16(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar3 == (longlong *)0x0) {
    FUN_140fabbbc(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((longlong *)param_1[0x1b] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0xd4) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x1a);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1406d3ca9;
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0xd4))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      uVar6 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))();
      goto LAB_1406d3ca9;
    }
  }
  uVar6 = 0;
LAB_1406d3ca9:
  lVar7 = param_1[0x19];
  uVar5 = FUN_14041acbe(param_1);
  uVar2 = FUN_140ddd928(param_1);
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,uVar5,param_2,lVar7,uVar6,uVar4);
  return;
}



// FUNCTION 1406d3d1a FUN_1406d3d1a body=127 status=ok
// SIG undefined FUN_1406d3d1a(void)

undefined8 * FUN_1406d3d1a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1406d3d9a();
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



// FUNCTION 1406d3d9a FUN_1406d3d9a body=150 status=ok
// SIG undefined FUN_1406d3d9a(void)

longlong * FUN_1406d3d9a(longlong *param_1,longlong *param_2)

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



// FUNCTION 1406d3e30 FUN_1406d3e30 body=330 status=ok
// SIG undefined FUN_1406d3e30(void)

void FUN_1406d3e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1406d3f7c(0,&local_58);
  lVar3 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar4 = 0;
    local_68 = param_4 + 200;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if ((lVar2 != 0) &&
         (local_70 = FUN_141717630(param_2,*(undefined8 *)(lVar2 + 0x18)), local_70 != 0)) {
        local_5c = 0;
        local_60 = *(undefined4 *)(local_70 + 0xc);
        local_5c = FUN_145782296(&DAT_14c9647b8);
        FUN_1406afd60(param_3,lVar2,&local_60);
        iVar1 = *(int *)(param_4 + 0xd0);
        *(uint *)(param_4 + 0xd0) = iVar1 + 1U;
        if (*(uint *)(param_4 + 0xd4) < iVar1 + 1U) {
          FUN_1447f76d2(local_68,iVar1);
        }
        *(longlong *)(*(longlong *)(param_4 + 200) + (longlong)iVar1 * 8) = lVar2;
        FUN_1406d3e30(lVar2,local_70,param_3,param_4);
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406d3f7c FUN_1406d3f7c body=149 status=ok
// SIG undefined FUN_1406d3f7c(void)

void FUN_1406d3f7c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  code *local_28;
  code **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_14079e7a6(param_2,0);
  }
  local_30 = &local_40;
  local_20 = &local_38;
  local_38 = FUN_142809844;
  local_28 = FUN_1449cc908;
  local_48 = 0;
  local_40 = param_2;
  FUN_14482c30e(param_1,&local_28,0,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d4012 FUN_1406d4012 body=1600 status=ok
// SIG undefined FUN_1406d4012(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1406d4012(int param_1,longlong *param_2,undefined8 *param_3,uint *param_4,byte param_5)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  undefined8 unaff_RBX;
  ulonglong uVar12;
  byte bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  char cVar19;
  byte bVar20;
  undefined1 uVar21;
  bool bVar22;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  longlong *local_1d0;
  uint *local_1c8;
  uint *local_1c0;
  uint *local_1b8;
  uint *local_1b0;
  byte local_1a8;
  int local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  uint local_17c;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  int local_16c;
  uint *local_168;
  longlong *local_160;
  undefined8 *local_158;
  uint local_150;
  uint local_14c;
  uint local_148 [4];
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128 [112];
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar5 = 0;
  if (param_1 == 0) {
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                      *(byte *)(param_2 + 2) & *(byte *)(param_3 + 2));
    uVar5 = (uint)param_5;
    if (*(char *)((longlong)param_3 + 0x11) == '\0') {
      uVar5 = 0;
    }
    if (*(char *)((longlong)param_2 + 0x11) == '\0') {
      uVar5 = 0;
    }
  }
  else {
    uVar12 = 0;
    if (param_1 == 1) {
      uVar12 = (ulonglong)(*(byte *)(param_2 + 2) | *(byte *)(param_3 + 2));
      uVar5 = (uint)param_5;
      if (*(char *)((longlong)param_3 + 0x11) == '\0' && *(char *)((longlong)param_2 + 0x11) == '\0'
         ) {
        uVar5 = 0;
      }
    }
  }
  local_168 = param_4;
  iVar6 = FUN_1402c7454(param_2,uVar12 & 0xffffffff);
  iVar15 = 0;
  if (((int)param_2[1] != 0) && (*(char *)((longlong)param_2 + 0x11) != '\0')) {
    iVar7 = 0;
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      iVar7 = (*(char *)((longlong)param_2 + 0x11) != '\x01') - 7;
    }
    iVar15 = iVar7 + -6;
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      iVar15 = iVar7;
    }
  }
  iVar8 = FUN_1402c7454(param_3,uVar12 & 0xffffffff);
  iVar7 = 0;
  if ((*(int *)(param_3 + 1) != 0) && (*(char *)((longlong)param_3 + 0x11) != '\0')) {
    iVar10 = 0;
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      iVar10 = (*(char *)((longlong)param_3 + 0x11) != '\x01') - 7;
    }
    iVar7 = iVar10 + -6;
    if ((*(byte *)(param_3 + 2) & 2) == 0) {
      iVar7 = iVar10;
    }
  }
  uVar16 = iVar15 + iVar6;
  uVar18 = iVar7 + iVar8;
  cVar19 = (char)uVar5;
  uVar9 = cVar19 == '\x01' | 6;
  if ((uVar12 & 1) == 0) {
    uVar9 = 0;
  }
  local_174 = uVar9 + 6;
  if ((uVar12 & 2) == 0) {
    local_174 = uVar9;
  }
  if (param_1 == 0) {
    local_178 = uVar18;
    if (uVar16 < uVar18) {
      local_178 = uVar16;
    }
  }
  else {
    local_178 = 0;
    if ((param_1 == 1) && (local_178 = uVar16, uVar16 < uVar18)) {
      local_178 = uVar18;
    }
  }
  local_138 = 0;
  local_178 = local_178 + local_174;
  uStack_130 = (ulonglong)local_178;
  local_170 = (int)uVar12;
  local_16c = param_1;
  if (local_178 != 0) {
    FUN_144941252(&local_138,0);
  }
  local_148[3] = 0;
  local_148[2] = 0;
  local_148[1] = 0;
  FUN_1406d47c2(param_2,uVar5,3,local_b8);
  FUN_1406d47c2(param_3,uVar5,3,local_128);
  puVar2 = local_168;
  iVar15 = local_16c;
  bVar22 = *(char *)((longlong)param_2 + 0x11) != '\0';
  bVar20 = bVar22 & *(byte *)(param_2 + 2);
  bVar13 = (*(byte *)(param_2 + 2) & 2) >> 1 & bVar22;
  bVar22 = *(char *)((longlong)param_3 + 0x11) != '\0';
  bVar17 = bVar22 & *(byte *)(param_3 + 2);
  bVar11 = (*(byte *)(param_3 + 2) & 2) >> 1 & bVar22;
  local_190 = 1;
  local_198 = 1;
  local_1b8 = local_168;
  local_1d0 = &local_138;
  local_1d8 = local_148 + 2;
  local_1c8 = local_148 + 1;
  local_1a8 = bVar17;
  local_1a0 = (cVar19 == '\x01') + 3;
  local_17c = uVar5;
  local_158 = param_3;
  local_1b0._0_1_ = bVar20;
  local_1c0._0_1_ = cVar19;
  FUN_1406d49e2(local_16c,local_b8,local_148 + 3,local_128);
  local_190 = 1;
  local_198 = 2;
  local_1a0 = 3;
  local_1b8 = puVar2;
  uVar21 = (undefined1)local_17c;
  local_1c8 = local_148 + 1;
  local_1d8 = local_148 + 2;
  puVar1 = local_148 + 3;
  local_1d0 = &local_138;
  local_1a8 = bVar17;
  local_160 = param_2;
  local_1b0._0_1_ = bVar20;
  local_1c0._0_1_ = uVar21;
  FUN_1406d49e2(iVar15,local_b8,puVar1,local_128);
  local_190 = 2;
  local_198 = 1;
  local_1a0 = 3;
  local_1b8 = puVar2;
  local_1c8 = local_148 + 1;
  local_1d8 = local_148 + 2;
  local_1d0 = &local_138;
  local_1a8 = bVar11;
  local_1b0._0_1_ = bVar13;
  local_1c0._0_1_ = uVar21;
  FUN_1406d49e2(iVar15,local_b8,puVar1,local_128);
  plVar3 = local_160;
  local_190 = 2;
  local_198 = 2;
  local_1a0 = 3;
  local_1b0 = (uint *)CONCAT71(local_1b0._1_7_,bVar13);
  local_1b8 = puVar2;
  local_1c0 = (uint *)CONCAT71(local_1c0._1_7_,uVar21);
  local_1c8 = local_148 + 1;
  local_1d0 = &local_138;
  local_1d8 = local_148 + 2;
  local_1a8 = bVar11;
  FUN_1406d49e2(iVar15,local_b8,puVar1,local_128);
  puVar4 = local_158;
  puVar1 = local_168;
  local_14c = 0;
  local_148[0] = 0;
  if (((int)plVar3[1] != 0) && (*(char *)((longlong)plVar3 + 0x11) != '\0')) {
    uVar5 = 0;
    if ((*(byte *)(plVar3 + 2) & 1) != 0) {
      uVar5 = *(char *)((longlong)plVar3 + 0x11) == '\x01' | 6;
    }
    local_148[0] = uVar5 + 6;
    if ((*(byte *)(plVar3 + 2) & 2) == 0) {
      local_148[0] = uVar5;
    }
  }
  if ((*(int *)(local_158 + 1) != 0) &&
     (local_14c = 0, *(char *)((longlong)local_158 + 0x11) != '\0')) {
    uVar5 = 0;
    if ((*(byte *)(local_158 + 2) & 1) != 0) {
      uVar5 = *(char *)((longlong)local_158 + 0x11) == '\x01' | 6;
    }
    local_14c = uVar5 + 6;
    if ((*(byte *)(local_158 + 2) & 2) == 0) {
      local_14c = uVar5;
    }
  }
  local_150 = local_174;
  if (local_174 < local_178) {
    do {
      local_1a8 = 3;
      local_1c8 = (uint *)(CONCAT71(local_1c8._1_7_,*(undefined1 *)(puVar4 + 2)) &
                          0xffffffffffffff01);
      local_1d0 = (longlong *)(CONCAT71(local_1d0._1_7_,(char)plVar3[2]) & 0xffffffffffffff01);
      local_1d8 = puVar1;
      local_1a0._0_1_ = 1;
      local_1c0 = local_148;
      local_1b8 = &local_14c;
      local_1b0 = &local_150;
      FUN_1406d4654(iVar15,*plVar3,*puVar4,&local_138);
      local_1a8 = 3;
      local_1c8 = (uint *)CONCAT71(local_1c8._1_7_,(*(byte *)(puVar4 + 2) & 2) >> 1);
      local_1d0 = (longlong *)CONCAT71(local_1d0._1_7_,(*(byte *)(plVar3 + 2) & 2) >> 1);
      local_1d8 = puVar1;
      local_1a0 = CONCAT31(local_1a0._1_3_,2);
      local_1c0 = local_148;
      local_1b8 = &local_14c;
      local_1b0 = &local_150;
      FUN_1406d4654(iVar15,*plVar3,*puVar4,&local_138);
    } while (local_150 < local_178);
  }
  uVar21 = (undefined1)local_17c;
  uVar14 = (undefined1)local_170;
  if (&local_138 == plVar3) {
    *(undefined1 *)((longlong)plVar3 + 0x11) = uVar21;
    *(undefined1 *)(plVar3 + 2) = uVar14;
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    *plVar3 = local_138;
    *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_130._4_4_;
    *(undefined1 *)((longlong)plVar3 + 0x11) = uVar21;
    *(undefined1 *)(plVar3 + 2) = uVar14;
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406d4654 FUN_1406d4654 body=364 status=ok
// SIG undefined FUN_1406d4654(void)

void FUN_1406d4654(int param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5,byte param_6,byte param_7,uint *param_8,uint *param_9,
                  uint *param_10,undefined1 param_11,undefined1 param_12)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_6 | param_7) == 1) {
    local_68 = param_4;
    if ((param_6 == 0) || (param_7 == 0)) {
      if (param_6 == 0) {
        if (param_1 == 1) {
          *(undefined8 *)(*param_4 + (longlong)(int)*param_10 * 8) =
               *(undefined8 *)(param_3 + (ulonglong)*param_9 * 8);
        }
      }
      else {
        param_9 = param_8;
        if (param_1 == 1) {
          *(undefined8 *)(*param_4 + (longlong)(int)*param_10 * 8) =
               *(undefined8 *)(param_2 + (ulonglong)*param_8 * 8);
        }
      }
    }
    else {
      local_58 = *(undefined8 *)(param_3 + (ulonglong)*param_9 * 8);
      local_60 = *(undefined8 *)(param_2 + (ulonglong)*param_8 * 8);
      local_49 = param_12;
      local_4a = param_11;
      pcVar1 = (code *)*param_5;
      plVar3 = param_5 + 4;
      if ((longlong *)param_5[2] != (longlong *)0x0) {
        plVar3 = (longlong *)param_5[2];
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      local_78 = &local_49;
      uVar2 = (*pcVar1)(uVar2,&local_60,&local_58,&local_4a);
      *(undefined8 *)(*local_68 + (longlong)(int)*param_10 * 8) = uVar2;
      *param_8 = *param_8 + 1;
      *param_9 = *param_9 + 1;
      param_9 = param_10;
    }
    *param_9 = *param_9 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406d47c2 FUN_1406d47c2 body=450 status=ok
// SIG undefined FUN_1406d47c2(void)

int FUN_1406d47c2(undefined8 param_1,uint param_2,char param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
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
  double local_a8;
  double dStack_a0;
  char local_98;
  undefined7 uStack_97;
  char local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar3 = 0;
  do {
    if (param_3 == '\x02') {
      FUN_1406d4986(param_1,&local_c8);
      if (local_98 == '\x01') {
        *param_4 = (double)CONCAT44(uStack_c4,local_c8);
        param_4[1] = (double)CONCAT44(uStack_bc,uStack_c0);
        param_4[2] = (double)CONCAT44(uStack_b4,local_b8);
        param_4[3] = (double)CONCAT44(uStack_ac,uStack_b0);
        param_4[4] = local_a8;
        param_4[5] = dStack_a0;
LAB_1406d4923:
        iVar2 = 6;
      }
      else {
        iVar2 = 0;
      }
LAB_1406d4928:
      if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
        return iVar2 + iVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (param_3 != '\x03') {
      FUN_1406d4b96(param_1,&local_c8);
      iVar2 = 0;
      if (local_68 != '\x01') goto LAB_1406d4928;
      local_e8 = local_c8;
      uStack_e4 = uStack_c4;
      uStack_e0 = uStack_c0;
      uStack_dc = uStack_bc;
      local_d8 = local_b8;
      uStack_d4 = uStack_b4;
      uStack_d0 = uStack_b0;
      uStack_cc = uStack_ac;
      if ((char)param_2 == '\x02') {
        FUN_1449413b4(&local_e8,&local_100);
        *param_4 = local_100 * -0.017453292519943295;
        param_4[1] = local_f8 * -0.017453292519943295;
        param_4[2] = local_f0 * 0.017453292519943295;
        param_4[3] = local_a8;
        param_4[4] = dStack_a0;
        param_4[5] = (double)CONCAT71(uStack_97,local_98);
        goto LAB_1406d4923;
      }
      if ((param_2 & 0xff) == 1) {
        *(undefined4 *)param_4 = local_c8;
        *(undefined4 *)((longlong)param_4 + 4) = uStack_c4;
        *(undefined4 *)(param_4 + 1) = uStack_c0;
        *(undefined4 *)((longlong)param_4 + 0xc) = uStack_bc;
        *(undefined4 *)(param_4 + 2) = local_b8;
        *(undefined4 *)((longlong)param_4 + 0x14) = uStack_b4;
        *(undefined4 *)(param_4 + 3) = uStack_b0;
        *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_ac;
        param_4[4] = local_a8;
        param_4[5] = dStack_a0;
        param_4[6] = (double)CONCAT71(uStack_97,local_98);
        iVar2 = 7;
      }
      goto LAB_1406d4928;
    }
    uVar1 = FUN_1406d47c2(param_1,param_2,1,param_4);
    param_4 = param_4 + uVar1;
    iVar3 = iVar3 + uVar1;
    param_3 = '\x02';
  } while( true );
}



// FUNCTION 1406d4986 FUN_1406d4986 body=91 status=ok
// SIG undefined FUN_1406d4986(void)

void FUN_1406d4986(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  
  if ((*(byte *)(param_1 + 2) & 2) == 0) {
    uVar9 = 0;
  }
  else {
    if ((int)param_1[1] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if (((*(byte *)(param_1 + 2) & 1) != 0) && (*(char *)((longlong)param_1 + 0x11) != '\0')) {
        uVar10 = (ulonglong)(*(char *)((longlong)param_1 + 0x11) == '\x01') | 6;
      }
    }
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + uVar10 * 8);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 8);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    puVar2 = (undefined8 *)(lVar3 + 0x20 + uVar10 * 8);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    *param_2 = *puVar1;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[4] = uVar7;
    param_2[5] = uVar8;
    uVar9 = 1;
  }
  *(undefined1 *)(param_2 + 6) = uVar9;
  return;
}



// FUNCTION 1406d49e2 FUN_1406d49e2 body=435 status=ok
// SIG undefined FUN_1406d49e2(void)

void FUN_1406d49e2(undefined4 param_1,longlong param_2,uint *param_3,undefined8 param_4,
                  uint *param_5,longlong *param_6,int *param_7,char param_8,undefined8 param_9,
                  byte param_10,byte param_11,int param_12,undefined1 param_13,undefined1 param_14)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  byte local_90;
  byte local_88;
  uint *local_80;
  uint *local_78;
  int *local_70;
  undefined1 local_68;
  undefined1 local_60;
  int local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_10 | param_11) == 1) {
    uVar1 = *param_3;
    local_50 = *param_5;
    local_54 = *param_7;
    uVar2 = uVar1 + param_12;
    local_4c = uVar1;
    if ((uVar1 < uVar2) && (local_50 < local_50 + param_12)) {
      do {
        if (param_8 == '\0') {
          if (param_10 != 0) {
            *(undefined8 *)(*param_6 + (longlong)local_54 * 8) =
                 *(undefined8 *)(param_2 + (ulonglong)uVar1 * 8);
            uVar1 = uVar1 + 1;
            local_4c = uVar1;
          }
          if (param_11 != 0) {
            local_50 = local_50 + 1;
          }
          local_54 = local_54 + 1;
        }
        else {
          local_60 = param_14;
          local_68 = param_13;
          local_70 = &local_54;
          local_88 = param_11;
          local_90 = param_10;
          local_98 = param_9;
          local_80 = &local_4c;
          local_78 = &local_50;
          FUN_1406d4654(param_1,param_2,param_4,param_6);
          uVar1 = local_4c;
        }
        uVar2 = *param_3 + param_12;
      } while ((uVar1 < uVar2) && (local_50 < *param_5 + param_12));
    }
    if (param_10 != 0) {
      *param_3 = uVar2;
    }
    if (param_11 != 0) {
      *param_5 = *param_5 + param_12;
    }
    *param_7 = *param_7 + param_12;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d4b96 FUN_1406d4b96 body=663 status=ok
// SIG undefined FUN_1406d4b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1406d4b96(longlong *param_1,undefined1 (*param_2) [16])

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double _X;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_b8;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
LAB_1406d4e26:
    uVar12 = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x11) == '\x02') {
      pdVar1 = (double *)*param_1;
      local_b8 = pdVar1[5];
      uVar16 = SUB84(pdVar1[4],0);
      uVar17 = (undefined4)((ulonglong)pdVar1[4] >> 0x20);
      uVar18 = SUB84(pdVar1[3],0);
      uVar19 = (undefined4)((ulonglong)pdVar1[3] >> 0x20);
      auVar14._8_8_ = pdVar1[2] * 57.29577951308232;
      auVar14._0_8_ = pdVar1[1] * -57.29577951308232;
      auVar14 = divpd(auVar14,_DAT_1499387d0);
      auVar13._0_8_ = (*pdVar1 * -57.29577951308232) / 360.0;
      auVar13._8_8_ = 0;
      auVar14 = roundpd(auVar14,auVar14,3);
      auVar13 = roundpd(auVar13,auVar13,3);
      dVar10 = (pdVar1[1] * -57.29577951308232 - auVar14._0_8_ * (double)DAT_1499387d0) *
               0.008726646259971648;
      dVar11 = (pdVar1[2] * 57.29577951308232 - auVar14._8_8_ * DAT_1499387d0._8_8_) *
               0.008726646259971648;
      dVar15 = (*pdVar1 * -57.29577951308232 - auVar13._0_8_ * (double)DAT_1499387d0) *
               0.008726646259971648;
      _X = (0.0 - auVar13._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar3 = sin(dVar10);
      dVar4 = sin(dVar11);
      dVar5 = sin(dVar15);
      sin(_X);
      dVar6 = cos(dVar10);
      dVar7 = cos(dVar11);
      dVar8 = cos(dVar15);
      cos(_X);
      dVar11 = -(dVar7 * dVar3 * dVar5) + dVar4 * dVar6 * dVar8;
      dVar15 = dVar4 * dVar3 * dVar5 + dVar7 * dVar6 * dVar8;
      dVar10 = dVar3 * dVar4 * dVar8 - dVar6 * dVar7 * dVar5;
      dVar3 = -(dVar3 * dVar7 * dVar8) - dVar6 * dVar4 * dVar5;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x11) != '\x01') goto LAB_1406d4e26;
      pdVar1 = (double *)*param_1;
      local_b8 = pdVar1[6];
      uVar16 = SUB84(pdVar1[5],0);
      uVar17 = (undefined4)((ulonglong)pdVar1[5] >> 0x20);
      uVar18 = SUB84(pdVar1[4],0);
      uVar19 = (undefined4)((ulonglong)pdVar1[4] >> 0x20);
      dVar10 = *pdVar1;
      dVar3 = pdVar1[1];
      dVar11 = pdVar1[2];
      dVar15 = pdVar1[3];
    }
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar10;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *param_2 = auVar2;
    auVar9._8_4_ = SUB84(dVar15,0);
    auVar9._0_8_ = dVar11;
    auVar9._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    param_2[1] = auVar9;
    *(undefined4 *)param_2[2] = uVar18;
    *(undefined4 *)(param_2[2] + 4) = uVar19;
    *(undefined4 *)(param_2[2] + 8) = uVar16;
    *(undefined4 *)(param_2[2] + 0xc) = uVar17;
    *(double *)param_2[3] = local_b8;
    *(undefined8 *)(param_2[3] + 8) = 0;
    *(undefined8 *)param_2[4] = 0x3ff0000000000000;
    *(undefined8 *)(param_2[4] + 8) = 0x3ff0000000000000;
    *(undefined8 *)param_2[5] = 0x3ff0000000000000;
    *(undefined8 *)(param_2[5] + 8) = 0;
    uVar12 = 1;
  }
  param_2[6][0] = uVar12;
  return param_2;
}



// FUNCTION 1406d4e2e FUN_1406d4e2e body=578 status=ok
// SIG undefined FUN_1406d4e2e(void)

ulonglong FUN_1406d4e2e(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 == '\0') {
    lVar3 = FUN_1406d51c0();
    param_1 = param_1 + 0x9e;
    local_48 = &DAT_14a171d50;
    local_40 = 0;
    lStack_38 = 0;
    local_30 = 0;
    FUN_1401004a0(&local_48,param_1);
    if (*(longlong *)(lVar3 + 0x98) == local_40) {
      uVar1 = *(uint *)(lVar3 + 0xa8);
      uVar6 = (uint)local_30;
      if ((int)uVar1 < (int)(uint)local_30) {
        uVar6 = uVar1;
      }
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if ((*(ulonglong *)(lStack_38 + uVar7 * 8) &
              ~*(ulonglong *)(*(longlong *)(lVar3 + 0xa0) + uVar7 * 8)) != 0) goto LAB_1406d4f0a;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      bVar9 = true;
      if ((int)uVar1 < (int)(uint)local_30) {
        lVar5 = 0;
        do {
          bVar9 = *(longlong *)((longlong)(int)uVar1 * 8 + lStack_38 + lVar5 * 8) == 0;
          if (!bVar9) break;
          iVar4 = (int)lVar5;
          lVar5 = lVar5 + 1;
        } while (~uVar1 + (uint)local_30 != iVar4);
      }
    }
    else {
LAB_1406d4f0a:
      bVar9 = false;
    }
    local_48 = &DAT_14a171d50;
    uVar7 = local_30 >> 0x20;
    local_30 = local_30 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      FUN_140115c12(&lStack_38,0);
    }
    local_40 = 0;
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    if (!bVar9) {
      local_48 = &DAT_14a171d50;
      local_40 = 0;
      lStack_38 = 0;
      local_30 = 0;
      FUN_1401004a0(&local_48,param_1);
      uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (*(longlong *)(lVar3 + 0xb8) == local_40) {
        uVar1 = *(uint *)(lVar3 + 200);
        uVar6 = (uint)local_30;
        if ((int)uVar1 < (int)(uint)local_30) {
          uVar6 = uVar1;
        }
        if (0 < (int)uVar6) {
          uVar8 = 0;
          do {
            if ((*(ulonglong *)(lStack_38 + uVar8 * 8) &
                ~*(ulonglong *)(*(longlong *)(lVar3 + 0xc0) + uVar8 * 8)) != 0) goto LAB_1406d4fbb;
            uVar8 = uVar8 + 1;
          } while (uVar6 != uVar8);
        }
        if ((int)uVar1 < (int)(uint)local_30) {
          lVar3 = 0;
          do {
            bVar9 = *(longlong *)((longlong)(int)uVar1 * 8 + lStack_38 + lVar3 * 8) != 0;
            uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar9);
            if (bVar9) break;
            iVar4 = (int)lVar3;
            lVar3 = lVar3 + 1;
          } while (~uVar1 + (uint)local_30 != iVar4);
        }
        else {
          uVar7 = 0;
        }
      }
LAB_1406d4fbb:
      local_48 = &DAT_14a171d50;
      uVar8 = local_30 >> 0x20;
      local_30 = local_30 & 0xffffffff00000000;
      if ((int)uVar8 != 0) {
        FUN_140115c12(&lStack_38,0);
      }
      local_40 = 0;
      if (lStack_38 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1406d4fe6;
    }
  }
  uVar7 = 0;
LAB_1406d4fe6:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1406d5072 FUN_1406d5072 body=333 status=ok
// SIG undefined FUN_1406d5072(void)

ulonglong FUN_1406d5072(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined8 unaff_RSI;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_1401badd8();
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x53c) == '\0')) {
    lVar4 = FUN_1406d51c0();
    local_48 = &DAT_14a171d50;
    local_40 = 0;
    lStack_38 = 0;
    local_30 = 0;
    FUN_1401004a0(&local_48,param_1 + 0x4f0);
    if (*(longlong *)(lVar4 + 0xf8) == local_40) {
      uVar1 = *(uint *)(lVar4 + 0x108);
      uVar6 = (uint)local_30;
      if ((int)uVar1 < (int)(uint)local_30) {
        uVar6 = uVar1;
      }
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if ((*(ulonglong *)(lStack_38 + uVar7 * 8) &
              ~*(ulonglong *)(*(longlong *)(lVar4 + 0x100) + uVar7 * 8)) != 0) goto LAB_1406d515f;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      uVar7 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      if ((int)uVar1 < (int)(uint)local_30) {
        lVar4 = 0;
        do {
          bVar8 = *(longlong *)((longlong)(int)uVar1 * 8 + lStack_38 + lVar4 * 8) == 0;
          uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar8);
          if (!bVar8) break;
          iVar5 = (int)lVar4;
          lVar4 = lVar4 + 1;
        } while (~uVar1 + (uint)local_30 != iVar5);
      }
    }
    else {
LAB_1406d515f:
      uVar7 = 0;
    }
    local_48 = &DAT_14a171d50;
    uVar2 = local_30 >> 0x20;
    local_30 = local_30 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      FUN_140115c12(&lStack_38,0);
    }
    local_40 = 0;
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1406d51c0 FUN_1406d51c0 body=453 status=ok
// SIG undefined FUN_1406d51c0(void)

longlong * FUN_1406d51c0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbcd5c8 == (longlong *)0x0) {
    memset(&DAT_14cbcd5d0,0,0x2d8);
    FUN_14571fdc8(&DAT_14cbcd5d0);
    DAT_14cbcd5c8 = (longlong *)&DAT_14cbcd5d0;
  }
  plVar1 = DAT_14cbcd5c8;
  plVar3 = DAT_14cbcd5c8 + 1;
  cVar2 = (char)DAT_14cbcd5c8[2];
  plVar4 = plVar3;
  if (cVar2 == '\0') {
LAB_1406d51f3:
    if (*plVar4 == 0) goto LAB_1406d52c8;
    plVar4 = plVar3;
    if (cVar2 == '\0') {
LAB_1406d5204:
      if (*plVar4 == 0) goto LAB_1406d5269;
      if ((((int)DAT_14cbcd5c8[3] == *(int *)(*plVar4 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar3 == 0 ||
          (plVar3 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar3 + 0x28)),
          plVar3 == (longlong *)0x0)))) goto LAB_1406d5218;
      cVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar4 = (longlong *)(*plVar3 + 0x30);
        goto LAB_1406d5204;
      }
LAB_1406d5269:
      if (((DAT_14c9a1ab0 == 0) || (*plVar3 == 0)) ||
         (plVar3 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar3 + 0x28)),
         plVar3 == (longlong *)0x0)) goto LAB_1406d5218;
      puVar5 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar3 + 0x2a0))(plVar3,plVar1,puVar5);
    }
    if (cVar2 == '\0') goto LAB_1406d5218;
  }
  else {
    if (cVar2 == '\x02') {
      plVar4 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1406d51f3;
    }
LAB_1406d52c8:
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_1406d5218;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1446ddda2(&local_38,"def_globals_oak_mission",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar1,&local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1406d5218:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 1406d5386 FUN_1406d5386 body=228 status=ok
// SIG undefined FUN_1406d5386(void)

void FUN_1406d5386(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  undefined1 local_4a [2];
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  uVar2 = param_3 & 0xffff;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0xb8))(param_2,&local_40,uVar2);
  (**(code **)(*param_1 + 0xb8))(param_1,&local_48,uVar2);
  uVar1 = (undefined2)(uVar2 >> 3);
  local_58 = uVar1;
  (**(code **)(*param_2 + 0xb0))(param_2,local_4a,&local_48,param_3 & 7);
  local_58 = uVar1;
  (**(code **)(*param_1 + 0xb0))(param_1,local_4a,&local_40,param_3 & 7);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d546c FUN_1406d546c body=603 status=ok
// SIG undefined FUN_1406d546c(void)

undefined8 * FUN_1406d546c(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  sbyte sVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  
  *param_2 = 0;
  uVar11 = (uint)param_3 & 7;
  uVar12 = (ulonglong)(uVar11 << 5);
  uVar6 = (param_3 & 0xffff) >> 3;
  lVar13 = *(longlong *)(param_1 + 0x18 + uVar12);
  iVar14 = (int)uVar6;
  puVar1 = (undefined8 *)(lVar13 + (ulonglong)(uint)(iVar14 << 4));
  lVar13 = *(longlong *)(lVar13 + (ulonglong)(uint)(iVar14 << 4));
  cVar2 = *(char *)(lVar13 + 0xd);
  if ((lVar13 == 0) || (cVar2 != '\x01')) {
    if (lVar13 == 0 || cVar2 != '\0') {
      if (lVar13 == 0 || cVar2 != '\x02') goto LAB_1406d54c5;
      FUN_146e051b2(param_1 + 0x158,*(undefined2 *)(puVar1 + 1));
    }
    else {
      FUN_146e0515a(param_1 + 0x138,*(undefined2 *)(puVar1 + 1));
    }
  }
  else {
LAB_1406d54c5:
    uVar3 = *(ushort *)(puVar1 + 1);
    if (*(int *)(param_1 + 0x120) == uVar3 + 1) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x118) + (ulonglong)uVar3 * 8) = 0;
      iVar8 = *(int *)(param_1 + 0x130);
      uVar7 = iVar8 + 1;
      *(uint *)(param_1 + 0x130) = uVar7;
      if (*(uint *)(param_1 + 0x134) < uVar7) {
        FUN_14488eebe((longlong *)(param_1 + 0x128));
      }
      *(ushort *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 2) = uVar3;
    }
  }
  lVar13 = uVar12 + param_1;
  if (puVar1 != param_2) {
    *param_2 = *puVar1;
    *puVar1 = 0;
  }
  lVar4 = *(longlong *)(lVar13 + 0x18);
  if (*(uint *)(lVar13 + 0x20) == iVar14 + 1U) {
    lVar10 = (ulonglong)*(uint *)(lVar13 + 0x20) * 0x10;
    puVar1 = *(undefined8 **)(lVar4 + -0x10 + lVar10);
    *(undefined8 *)(lVar4 + -0x10 + lVar10) = 0;
    iVar14 = *(int *)(lVar13 + 0x20);
    lVar4 = *(longlong *)(lVar13 + 0x18);
    lVar10 = (longlong)iVar14 * 0x10;
    puVar5 = *(undefined8 **)(lVar4 + -0x10 + lVar10);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
      iVar8 = *(int *)(lVar13 + 0x20) - iVar14;
      if (iVar8 != 0) {
        memmove((void *)(lVar4 + lVar10 + -0x10),(void *)(lVar4 + lVar10),(longlong)iVar8 << 4);
        iVar14 = *(int *)(lVar13 + 0x20);
      }
    }
    iVar14 = iVar14 + -1;
    *(int *)(lVar13 + 0x20) = iVar14;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1406d5550;
    (**(code **)*puVar1)(puVar1,1);
  }
  else {
    puVar1 = *(undefined8 **)(lVar4 + (ulonglong)(uint)(iVar14 << 4));
    *(undefined8 *)(lVar4 + (ulonglong)(uint)(iVar14 << 4)) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    iVar14 = *(int *)(lVar13 + 0x30);
    *(uint *)(lVar13 + 0x30) = iVar14 + 1U;
    if (*(uint *)(lVar13 + 0x34) < iVar14 + 1U) {
      FUN_14488eebe((longlong *)(lVar13 + 0x28),iVar14);
    }
    *(short *)(*(longlong *)(lVar13 + 0x28) + (longlong)iVar14 * 2) = (short)uVar6;
  }
  iVar14 = *(int *)(lVar13 + 0x20);
LAB_1406d5550:
  if (iVar14 == 0) {
    sVar9 = (sbyte)uVar11;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & (-2 << sVar9 | 0xfeU >> 8 - sVar9);
  }
  return param_2;
}



// FUNCTION 1406d56c8 FUN_1406d56c8 body=764 status=ok
// SIG undefined FUN_1406d56c8(void)

short * FUN_1406d56c8(longlong param_1,short *param_2,longlong *param_3,ushort param_4,
                     ushort param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort *puVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_98 [43];
  byte local_6d;
  int local_6c;
  longlong *local_68;
  int local_5c;
  ushort *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_3;
  *param_3 = 0;
  cVar1 = *(char *)(lVar4 + 0xd);
  if ((lVar4 == 0) || (cVar1 != '\x01')) {
    if (lVar4 == 0 || cVar1 != '\0') {
      if (lVar4 == 0 || cVar1 != '\x02') goto LAB_1406d5720;
      local_50 = lVar4;
      uVar11 = FUN_146e050f0(param_1 + 0x158);
    }
    else {
      local_50 = lVar4;
      uVar11 = FUN_146e05086(param_1 + 0x138);
    }
    uVar12 = (ulonglong)uVar11;
  }
  else {
LAB_1406d5720:
    iVar3 = *(int *)(param_1 + 0x130);
    if ((longlong)iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x120);
      uVar12 = (ulonglong)iVar3;
      *(uint *)(param_1 + 0x120) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x124) < iVar3 + 1U) {
        FUN_1406d5bee((longlong *)(param_1 + 0x118),iVar3);
      }
      lVar17 = *(longlong *)(param_1 + 0x118);
    }
    else {
      uVar12 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x128) + -2 + (longlong)iVar3 * 2);
      *(int *)(param_1 + 0x130) = iVar3 + -1;
      FUN_144715f92(param_1 + 0x128);
      lVar17 = *(longlong *)(param_1 + 0x118);
    }
    *(longlong *)(lVar17 + uVar12 * 8) = lVar4;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | (byte)(1 << ((byte)param_4 & 0x1f));
  *param_2 = (param_4 & 7) + param_5 * 8;
  param_1 = param_1 + (ulonglong)param_4 * 0x20;
  uVar2 = *(ushort *)(param_1 + 0x20);
  uVar11 = (uint)uVar2;
  if ((uint)param_5 < (uint)uVar2) {
    iVar3 = *(int *)(param_1 + 0x30);
    lVar17 = (longlong)iVar3;
    if (lVar17 != 0) {
      puVar14 = *(ushort **)(param_1 + 0x28);
      local_6d = *puVar14 == param_5;
      iVar15 = 0;
      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
      do {
        iVar8 = (int)local_68;
        bVar9 = local_6d ^ 1;
        lVar10 = (longlong)(int)local_68;
        lVar13 = lVar10;
        iVar7 = (int)local_68 + 1;
        if ((int)local_68 + 1 < iVar3) {
          iVar7 = iVar3;
        }
        do {
          lVar13 = lVar13 + 1;
          if (lVar17 <= lVar13) {
            local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar7);
            break;
          }
          local_68 = (longlong *)CONCAT44(local_68._4_4_,(int)local_68 + 1);
          local_6c = iVar15;
          local_58 = puVar14;
        } while ((bool)(local_6d & 1) == (puVar14[lVar13] == param_5));
        bVar6 = local_6d & 1;
        local_6d = bVar9;
        if (bVar6 == 0) {
          local_5c = (int)local_68 - iVar8;
          local_6c = iVar15;
          local_58 = puVar14;
          if (iVar15 != iVar8) {
            memmove(puVar14 + iVar15,puVar14 + lVar10,(longlong)local_5c * 2);
          }
          iVar15 = local_6c + local_5c;
          puVar14 = local_58;
        }
      } while (lVar13 < lVar17);
      *(int *)(param_1 + 0x30) = iVar15;
    }
  }
  else {
    FUN_1406d59c6((longlong *)(param_1 + 0x18),param_5 + 1);
    uVar16 = param_5 - 1;
    if (uVar16 != uVar2 && (int)(uint)uVar2 <= (int)uVar16) {
      local_68 = (longlong *)(param_1 + 0x28);
      do {
        iVar3 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
          FUN_14488eebe(local_68,iVar3);
        }
        *(short *)(*local_68 + (longlong)iVar3 * 2) = (short)uVar11;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar16);
    }
  }
  lVar17 = *(longlong *)(param_1 + 0x18);
  lVar13 = (ulonglong)param_5 * 0x10;
  puVar5 = *(undefined8 **)(lVar17 + lVar13);
  *(longlong *)(lVar17 + lVar13) = lVar4;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  *(short *)(lVar17 + lVar13 + 8) = (short)uVar12;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406d59c6 FUN_1406d59c6 body=281 status=ok
// SIG undefined FUN_1406d59c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406d59c6(longlong *param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar6 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar6) {
      FUN_1406d5ae0(param_1,iVar1);
    }
    auVar2 = _DAT_149931e80;
    if (uVar6 != 0) {
      lVar4 = (ulonglong)uVar6 - 1;
      auVar7._8_4_ = (int)lVar4;
      auVar7._0_8_ = lVar4;
      auVar7._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1 + 0x10);
      uVar5 = 0;
      auVar8 = pmovsxbq(in_XMM1,0x100);
      auVar7 = auVar7 ^ _DAT_149931e80;
      do {
        if ((bool)(~(auVar7._0_8_ < (longlong)(uVar5 ^ auVar2._0_8_)) & 1)) {
          puVar3[-2] = 0;
        }
        auVar9._8_4_ = (int)uVar5;
        auVar9._0_8_ = uVar5;
        auVar9._12_4_ = (int)(uVar5 >> 0x20);
        if ((longlong)((auVar9._8_8_ | auVar8._8_8_) ^ auVar2._8_8_) <= auVar7._8_8_) {
          *puVar3 = 0;
        }
        uVar5 = uVar5 + 2;
        puVar3 = puVar3 + 4;
      } while (((ulonglong)uVar6 + 1 & 0xfffffffffffffffe) != uVar5);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e04dcc(param_1,param_2,iVar1 - param_2);
    FUN_146e04e26(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1406d5ae0 FUN_1406d5ae0 body=269 status=ok
// SIG undefined FUN_1406d5ae0(void)

void FUN_1406d5ae0(longlong param_1,int param_2)

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



// FUNCTION 1406d5bee FUN_1406d5bee body=353 status=ok
// SIG undefined FUN_1406d5bee(void)

void FUN_1406d5bee(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406d5c73;
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
LAB_1406d5c73:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406d5d50 FUN_1406d5d50 body=715 status=ok
// SIG undefined FUN_1406d5d50(void)

byte * FUN_1406d5d50(undefined8 *param_1,byte *param_2,longlong param_3,int param_4,byte param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  undefined1 auStack_78 [46];
  char local_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb42528 == 0) {
    iVar3 = DAT_14c762948;
    if (DAT_14c762948 == -1) {
      iVar3 = DAT_14c762934;
    }
    if (DAT_14c762938 != -1) {
      iVar3 = DAT_14c762938;
    }
    if (iVar3 == -1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 1 << ((byte)iVar3 & 0x1f);
    }
    if (DAT_14c76294c == 0xffffffff) {
      DAT_14c76294c = 0;
      uVar10 = uVar5;
      if ((DAT_14c762940 & DAT_14c76293c) == 0xffffffff) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar4 = DAT_14c76293c;
        if (DAT_14c76293c == 0xffffffff) {
          uVar4 = 0;
        }
        uVar8 = 0x1f;
        if (DAT_14c762940 != 0xffffffff) {
          uVar8 = DAT_14c762940;
        }
        if ((int)uVar8 < (int)uVar4) goto LAB_1406d5da5;
        uVar7 = 0;
        do {
          uVar7 = uVar7 | 1 << (uVar4 & 0x1f);
          uVar4 = uVar4 + 1;
        } while (uVar8 + 1 != uVar4);
      }
LAB_1406d5d9b:
      uVar5 = uVar10;
      DAT_14c76294c = uVar7;
    }
  }
  else {
    uVar5 = 0xffffffff;
    uVar7 = 0xffffffff;
    uVar10 = 0xffffffff;
    if (DAT_14c76294c == 0xffffffff) goto LAB_1406d5d9b;
  }
LAB_1406d5da5:
  uVar7 = DAT_14c76294c;
  uVar10 = 1 << ((byte)param_4 & 0x1f);
  if (param_4 == -1) {
    uVar10 = 0xffffffff;
  }
  if ((DAT_14c76294c & uVar10) == 0) {
    bVar2 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 4) & uVar10) != 0) {
      param_5 = (uVar5 & uVar10) != 0 | param_5;
      bVar2 = 1;
      bVar11 = 1;
      goto LAB_1406d5ddc;
    }
    bVar2 = 1;
  }
  bVar11 = 0;
  param_5 = 0;
LAB_1406d5ddc:
  if ((0 < (int)*(uint *)(param_1 + 1)) && (param_3 != 0)) {
    lVar6 = param_3;
    do {
      lVar12 = (ulonglong)*(uint *)(param_1 + 1) << 4;
      plVar9 = (longlong *)*param_1;
      do {
        if (*plVar9 == *(longlong *)(lVar6 + 0x18)) {
          if ((plVar9 != (longlong *)0x0) && ((*(uint *)((longlong)plVar9 + 0xc) & uVar10) != 0)) {
            param_5 = bVar2;
            bVar11 = bVar2;
            if ((*(uint *)(plVar9 + 1) & uVar10) == 0) {
              param_5 = 0;
              bVar11 = param_5;
            }
            goto LAB_1406d5de3;
          }
          break;
        }
        plVar9 = plVar9 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
      lVar6 = *(longlong *)(lVar6 + 0x60);
    } while (lVar6 != 0);
  }
LAB_1406d5de3:
  if ((longlong)*(int *)(param_1 + 3) != 0) {
    lVar6 = param_1[2];
    lVar12 = (longlong)*(int *)(param_1 + 3) * 0x30 + lVar6;
    do {
      local_49 = '\x01';
      local_4a = '\0';
      cVar1 = FUN_143aa4920(lVar6,param_3,&local_49,&local_4a);
      if (((uVar7 & uVar10) == 0) || (*(char *)(lVar6 + 8) != '\x01')) {
        if (*(char *)(lVar6 + 8) == '\x02') {
          if (cVar1 != '\0') {
            param_5 = 0;
          }
          if (local_4a == '\0') {
            bVar11 = 0;
          }
        }
      }
      else {
        if (cVar1 != '\0') {
          param_5 = 1;
        }
        if (local_49 != '\0') {
          bVar11 = 1;
        }
      }
      if (((uVar7 & uVar10) == 0) || (*(char *)(lVar6 + 9) != '\x01')) {
        if (*(char *)(lVar6 + 9) == '\x02') {
          if (cVar1 == '\0') {
            param_5 = 0;
          }
          if (local_49 == '\0') {
            bVar11 = 0;
          }
        }
      }
      else {
        if (cVar1 == '\0') {
          param_5 = 1;
        }
        if (local_4a != '\0') {
          bVar11 = 1;
        }
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar12);
  }
  *param_2 = param_5;
  param_2[1] = bVar11;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406d601c FUN_1406d601c body=2848 status=ok
// SIG undefined FUN_1406d601c(void)

ulonglong FUN_1406d601c(longlong param_1,longlong param_2,int param_3,char param_4)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  DWORD DVar8;
  DWORD DVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_98;
  undefined1 local_8d;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  ulonglong local_48;
  
  lVar11 = DAT_14cae3fc8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar18 = 0;
  if (((&DAT_14ca814b8)
       [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0xf] ==
       1) || (DAT_14cae3fd0 < 1)) goto LAB_1406d6351;
  iVar17 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if ((iVar17 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar17 == 2)))) {
    uVar18 = 0;
  }
  else if (iVar17 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar18 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar18 = 1;
  }
  if (*(int *)(lVar11 + uVar18 * 4) < 1) goto LAB_1406d634f;
  if (param_3 == 2) {
    if (DAT_14ca63b80 == (longlong *)0x0) {
switchD_1406d61c3_default:
      uStack_78 = 0x4109;
      uVar16 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar16 = DAT_14ca84e48;
      }
      uStack_70 = 0;
      uStack_6c = 0;
      uVar19 = 0x1000;
      if (DAT_14ca84e48 < 0x1000) {
        uVar19 = DAT_14ca84e48;
      }
      local_80 = (undefined8 *)CONCAT44(uVar19 + (uVar19 == 0),uVar16 + (uVar16 == 0));
      puVar1 = (ulonglong *)(param_1 + 0x70);
      uVar23 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar18 = uVar23 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar18) {
        FUN_140023dd8(puVar1,0x160);
        uVar23 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar18 = uVar23 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar18;
      FUN_1456bd266(uVar23,L"HairCoverageData",&local_80,0);
      iVar17 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar17 + 1U) {
        FUN_144737178(param_1 + 0x188,iVar17);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar17 * 8) = uVar23;
      *(int *)(uVar23 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar21 + 4;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puVar1,0x30);
        puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar21 + 4;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar21 = &DAT_14a21e100;
      puVar21[2] = 0;
      *(undefined4 *)(puVar21 + 3) = 0x2000;
      iVar17 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar17 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar17);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar17 * 8) = puVar21;
      puVar21[2] = uVar23;
      *(undefined4 *)(puVar21 + 3) = 0x2000;
      FUN_147178082();
      FUN_140069376(param_1);
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 0x39;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puVar1,0x1d0);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar20 + 0x39;
      }
      *puVar1 = (ulonglong)puVar14;
      uStack_78 = (undefined4)DAT_14c9d4c28;
      uStack_74 = (undefined4)((ulonglong)DAT_14c9d4c28 >> 0x20);
      if (DAT_14c9d4c28 != 0) {
        LOCK();
        *(int *)(DAT_14c9d4c28 + 8) = *(int *)(DAT_14c9d4c28 + 8) + 1;
        UNLOCK();
      }
      uStack_70 = 0x4c9d4be0;
      uStack_6c = 1;
      local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,2);
      local_80 = puVar21 + 2;
      FUN_140068f1a(puVar20,&local_8c,&local_80,0x18);
      *puVar20 = &PTR_FUN_14a21e110;
      puVar20[0x37] = puVar21 + 2;
      *(undefined4 *)(puVar20 + 0x38) = 0x4000;
      iVar17 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar17 + 1U) {
        FUN_14470e57a(param_1 + 0x168,iVar17);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar17 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar20);
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_4e = 0xff000d00;
      local_80 = (undefined8 *)&DAT_00020008;
      local_54 = 0x10001;
      local_50 = 0x101;
      uStack_78 = 1;
      local_60 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      iVar17 = 0x40;
      if (DAT_14ca84e40 < 0x40) {
        iVar17 = DAT_14ca84e40;
      }
      local_5c = 1;
      if (1 < iVar17) {
        local_5c = iVar17;
      }
      uVar18 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar13 = uVar18 + 0x120;
      local_58 = local_5c;
      if (*(ulonglong *)(param_1 + 0x78) < uVar13) {
        FUN_140023dd8(puVar1,0x128);
        uVar18 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar13 = uVar18 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar13;
      FUN_1456bbb8c(uVar18,L"Hair.CoverageLUT",&local_80,0);
      iVar17 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar17 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar17);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar17 * 8) = uVar18;
      *(int *)(uVar18 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar21 + 6;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puVar1,0x40);
        puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar21 + 6;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar21 = &PTR_FUN_14a222168;
      puVar21[3] = 0;
      puVar21[4] = 0;
      iVar17 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar17 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar17);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar17 * 8) = puVar21;
      puVar21[2] = 0x4000000040;
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puVar1,0x50);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar20 + 9;
      }
      lVar11 = param_1 + 0x198;
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar20[1] = *(undefined8 *)(uVar23 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 3;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar20 + 5) = 0xd;
      *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
      puVar20[7] = 0;
      puVar20[8] = uVar23;
      iVar17 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar17 + 1U) {
        local_98 = lVar11;
        FUN_1447568fc(lVar11,iVar17);
        lVar11 = local_98;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar17 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar21[3] = puVar20;
      uVar2 = *(undefined1 *)(uVar18 + 0x94);
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puVar1,0x50);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar20 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar20[1] = *(undefined8 *)(uVar18 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 0;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar20 + 6) = uVar2;
      *(undefined1 *)(puVar20 + 7) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x35) = 0;
      puVar20[8] = uVar18;
      iVar17 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar17 + 1U) {
        FUN_1447568fc(lVar11,iVar17);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar17 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar21[4] = puVar20;
      uVar4 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145e50ac8();
      FUN_1448e935e(uVar4,&local_80,&DAT_14c9d2680,0);
      FUN_145e50ac8();
      local_8c = 0x800000008;
      local_84 = 1;
      local_a8 = &local_8c;
      FUN_147177fb1(param_1,&local_8d,&local_80,puVar21 + 2);
      puVar14 = (undefined8 *)FUN_14495f742(param_1,uVar18);
      if ((*(byte *)(uVar18 + 0x20) & 0xc) == 0) {
        if ((*(byte *)(uVar18 + 0x20) & 0x10) != 0) {
          FUN_140069376(param_1);
        }
        iVar17 = *(int *)(param_1 + 0x5a0);
        *(uint *)(param_1 + 0x5a0) = iVar17 + 1U;
        if (*(uint *)(param_1 + 0x5a4) < iVar17 + 1U) {
          FUN_1400f155a((longlong *)(param_1 + 0x598),iVar17);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)iVar17 * 8) = uVar18;
        *(undefined4 *)(uVar18 + 0x1c) = 0x70;
        *(byte *)(uVar18 + 0x20) = *(byte *)(uVar18 + 0x20) & 0xe8 | 0x15;
        *(undefined4 *)(uVar18 + 0x58) = 0x70;
      }
      plVar12 = (longlong *)*puVar14;
      plVar22 = DAT_14ca63b80;
      plVar5 = DAT_14ca63b70;
      plVar6 = DAT_14ca63b78;
      plVar7 = plVar12;
      if (DAT_14ca63b80 == plVar12) goto LAB_1406d6351;
      goto LAB_1406d640a;
    }
    lVar11 = (**(code **)(*(longlong *)DAT_14ca63b80[1] + 8))();
    sVar15 = 1;
    switch(*(undefined1 *)(lVar11 + 0x32)) {
    case 0:
    case 3:
      break;
    case 1:
    case 4:
      sVar15 = *(short *)(lVar11 + 0x2e);
      break;
    case 2:
      sVar15 = *(short *)(lVar11 + 0x2c);
      break;
    default:
      goto switchD_1406d61c3_default;
    }
    if (((*(int *)(lVar11 + 0x24) != 0x40) || (*(int *)(lVar11 + 0x28) != 0x40)) || (sVar15 != 1))
    goto switchD_1406d61c3_default;
    goto joined_r0x0001406d630b;
  }
  if (param_3 != 1) {
    if (param_3 != 0) goto LAB_1406d634f;
    if (DAT_14ca63b70 == (longlong *)0x0) goto LAB_1406d6382;
    lVar11 = (**(code **)(*(longlong *)DAT_14ca63b70[1] + 8))();
    switch(*(undefined1 *)(lVar11 + 0x32)) {
    case 0:
    case 3:
      iVar17 = *(int *)(lVar11 + 0x24);
      iVar10 = *(int *)(lVar11 + 0x28);
      uVar16 = 1;
      break;
    case 1:
    case 4:
      uVar3 = *(ushort *)(lVar11 + 0x2e);
      goto LAB_1406d62df;
    case 2:
      uVar3 = *(ushort *)(lVar11 + 0x2c);
LAB_1406d62df:
      uVar16 = (uint)uVar3;
      iVar17 = *(int *)(lVar11 + 0x24);
      iVar10 = *(int *)(lVar11 + 0x28);
      break;
    default:
      iVar17 = 0;
      iVar10 = 0;
      uVar16 = 0;
    }
    if (((iVar17 != DAT_14c7602dc) || (iVar10 != DAT_14c7602e0)) || (DAT_14c7602e4 != uVar16)) {
LAB_1406d6382:
      uVar18 = FUN_142c4e32a(param_1,param_2,0);
      plVar12 = (longlong *)FUN_14495f742(param_1,uVar18);
      if ((*(byte *)(uVar18 + 0x20) & 0xc) == 0) {
        if ((*(byte *)(uVar18 + 0x20) & 0x10) != 0) {
          FUN_140069376(param_1);
        }
        iVar17 = *(int *)(param_1 + 0x5a0);
        *(uint *)(param_1 + 0x5a0) = iVar17 + 1U;
        if (*(uint *)(param_1 + 0x5a4) < iVar17 + 1U) {
          FUN_1400f155a((longlong *)(param_1 + 0x598),iVar17);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)iVar17 * 8) = uVar18;
        *(undefined4 *)(uVar18 + 0x1c) = 0x70;
        *(byte *)(uVar18 + 0x20) = *(byte *)(uVar18 + 0x20) & 0xe8 | 0x15;
        *(undefined4 *)(uVar18 + 0x58) = 0x70;
      }
      plVar12 = (longlong *)*plVar12;
      plVar22 = DAT_14ca63b70;
      plVar5 = plVar12;
      plVar6 = DAT_14ca63b78;
      plVar7 = DAT_14ca63b80;
      if (DAT_14ca63b70 == plVar12) goto LAB_1406d6351;
      goto LAB_1406d640a;
    }
    goto joined_r0x0001406d630b;
  }
  if (DAT_14ca63b78 == (longlong *)0x0) goto LAB_1406d624b;
  lVar11 = (**(code **)(*(longlong *)DAT_14ca63b78[1] + 8))();
  switch(*(undefined1 *)(lVar11 + 0x32)) {
  case 0:
  case 3:
    iVar17 = *(int *)(lVar11 + 0x24);
    iVar10 = *(int *)(lVar11 + 0x28);
    uVar16 = 1;
    break;
  case 1:
  case 4:
    uVar3 = *(ushort *)(lVar11 + 0x2e);
    goto LAB_1406d620e;
  case 2:
    uVar3 = *(ushort *)(lVar11 + 0x2c);
LAB_1406d620e:
    uVar16 = (uint)uVar3;
    iVar17 = *(int *)(lVar11 + 0x24);
    iVar10 = *(int *)(lVar11 + 0x28);
    break;
  default:
    iVar17 = 0;
    iVar10 = 0;
    uVar16 = 0;
  }
  if (((iVar17 == DAT_14c7602dc) && (iVar10 == DAT_14c7602e0)) && (DAT_14c7602e4 == uVar16)) {
joined_r0x0001406d630b:
    if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
LAB_1406d634f:
    uVar18 = 0;
  }
  else {
LAB_1406d624b:
    uVar18 = FUN_142c4e32a(param_1,param_2,1);
    plVar12 = (longlong *)FUN_14495f742(param_1,uVar18);
    if ((*(byte *)(uVar18 + 0x20) & 0xc) == 0) {
      if ((*(byte *)(uVar18 + 0x20) & 0x10) != 0) {
        FUN_140069376(param_1);
      }
      iVar17 = *(int *)(param_1 + 0x5a0);
      *(uint *)(param_1 + 0x5a0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x5a4) < iVar17 + 1U) {
        FUN_1400f155a((longlong *)(param_1 + 0x598),iVar17);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)iVar17 * 8) = uVar18;
      *(undefined4 *)(uVar18 + 0x1c) = 0x70;
      *(byte *)(uVar18 + 0x20) = *(byte *)(uVar18 + 0x20) & 0xe8 | 0x15;
      *(undefined4 *)(uVar18 + 0x58) = 0x70;
    }
    plVar12 = (longlong *)*plVar12;
    plVar22 = DAT_14ca63b78;
    plVar5 = DAT_14ca63b70;
    plVar6 = plVar12;
    plVar7 = DAT_14ca63b80;
    if (DAT_14ca63b78 != plVar12) {
LAB_1406d640a:
      DAT_14ca63b80 = plVar7;
      DAT_14ca63b78 = plVar6;
      DAT_14ca63b70 = plVar5;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x30))();
      }
      if (plVar22 != (longlong *)0x0) {
        (**(code **)(*plVar22 + 0x38))(plVar22);
      }
    }
  }
LAB_1406d6351:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d6b62 FUN_1406d6b62 body=3699 status=ok
// SIG undefined FUN_1406d6b62(void)

void FUN_1406d6b62(undefined8 *param_1,longlong param_2,ulonglong param_3,uint param_4,
                  longlong param_5,float param_6,char param_7,char param_8,longlong *param_9)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  short sVar10;
  undefined2 uVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar19;
  short sVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ushort uVar24;
  ushort uVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_288 [32];
  float *local_268;
  longlong *local_260;
  undefined2 local_258;
  longlong *local_250;
  byte local_241;
  ulonglong local_240;
  longlong *local_238;
  int local_22c;
  undefined8 *local_228;
  longlong local_220;
  uint *local_218;
  uint *local_210;
  int local_208 [2];
  float local_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  undefined1 local_1ec [4];
  undefined4 local_1e8;
  undefined4 local_1e4;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1c0;
  longlong *local_1b8;
  uint local_1a0 [40];
  uint *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_228 = param_1;
  local_220 = param_2;
  if (0 < (int)param_4) {
    local_218 = (uint *)(ulonglong)param_4;
    iVar17 = (int)param_3;
    local_240 = param_3;
    if (param_8 == '\0') {
      if (param_7 == '\x01') {
LAB_1406d78d5:
        local_250 = param_9;
        local_258 = CONCAT11(local_258._1_1_,param_7);
        local_260 = (longlong *)CONCAT44(local_260._4_4_,param_6);
        local_268 = (float *)param_5;
        FUN_146945dfe(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_288);
      }
      lVar22 = (longlong)iVar17;
      lVar26 = (longlong)(int)(param_4 + iVar17);
      do {
        uVar3 = *(ushort *)(param_2 + lVar22 * 2);
        if ((0x7f < uVar3) &&
           (((((((uVar3 & 0xffc0) == 0x1bc0 || ((ushort)(uVar3 + 0x5580) < 0x60)) ||
               ((ushort)(uVar3 + 0xe5e0) < 0x90)) ||
              (((ushort)(uVar3 + 0xe700) < 0x50 || (uVar24 = uVar3 & 0xff80, uVar24 == 0xd80)))) ||
             ((((((uVar3 & 0xffe0) == 0x19e0 ||
                 ((uVar24 == 0x1780 || (uVar25 = uVar3 & 0xff00, uVar25 == 0xf00)))) ||
                (uVar24 == 0xe00)) ||
               ((((uVar24 == 0xd00 || (uVar25 == 0xc00)) || (uVar25 == 0xb00)) ||
                (((uVar24 == 0xa80 || (uVar24 == 0x980)) ||
                 (((ushort)(uVar3 + 0xe330) < 0x30 ||
                  (((uVar3 & 0xffe0) == 0xa8e0 || (uVar24 == 0x900)))))))))) ||
              (((uVar3 & 0xffd0) == 0xfe00 ||
               ((((((ushort)(uVar3 + 0xce40) < 0x30 || ((ushort)(uVar3 + 0xcf67) < 2)) ||
                  ((ushort)(uVar3 + 0xdf30) < 0x30)) ||
                 (((uVar3 & 0xffc0) == 0x1dc0 || ((ushort)(uVar3 + 0xe550) < 0x50)))) ||
                ((uVar3 == 0x200d || ((ushort)(uVar3 - 0x300) < 0x70)))))))))) ||
            (((uVar3 & 0xfc00) == 0xd800 && lVar22 + 1 < lVar26 &&
             ((*(ushort *)(param_2 + 2 + lVar22 * 2) & 0xfc00) == 0xdc00)))))) goto LAB_1406d78d5;
        lVar22 = lVar22 + 1;
      } while (lVar22 < lVar26);
    }
    else {
      if (param_8 == '\x02') goto LAB_1406d78d5;
      lVar26 = (longlong)(int)(param_4 + iVar17);
    }
    uVar23 = (ulonglong)iVar17;
    local_100 = (uint *)0x0;
    local_f8 = 0x400000000;
    fVar29 = 1.0;
    plVar15 = (longlong *)0x0;
    local_238 = (longlong *)0x0;
    lVar22 = 0;
    do {
      uVar3 = *(ushort *)(local_220 + uVar23 * 2);
      cVar7 = FUN_140665610(uVar3);
      bVar27 = (uVar3 & 0xfffd) != 0x2009;
      local_200 = 1.0;
      lVar13 = FUN_1406d80a6(local_228[1],param_5,uVar3,&local_200);
      uVar8 = 0;
      if ((bVar27 && uVar3 != 0x202f) && cVar7 == '\0') {
        uVar8 = (undefined1)*(undefined4 *)(param_5 + 0x54);
      }
      local_268 = (float *)CONCAT71(local_268._1_7_,uVar8);
      FUN_1406d7b94(local_228[2],&local_1c0,lVar13,uVar3);
      puVar21 = local_228;
      if (local_1c0 == (longlong *)0x0) {
        uVar18 = 0x20;
        if ((bVar27 && uVar3 != 0x202f) && cVar7 == '\0') {
          uVar18 = 0xfffd;
        }
        lVar13 = FUN_1406d80a6(local_228[1],param_5,uVar18,&local_200);
        local_268 = (float *)CONCAT71(local_268._1_7_,*(undefined1 *)(param_5 + 0x54));
        FUN_1406d7b94(puVar21[2],&local_1e0,lVar13,uVar18);
        FUN_146946d96(&local_1c0,&local_1e0);
        plVar16 = local_1d8;
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1d8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        if (local_1c0 != (longlong *)0x0) goto LAB_1406d6d3e;
        plVar16 = (longlong *)0x0;
      }
      else {
LAB_1406d6d3e:
        plVar16 = local_1c0;
        if ((*(byte *)(*local_1c0 + 8) & 1) == 0) {
          local_200 = 1.0;
        }
      }
      uVar6 = local_f8;
      if ((((lVar22 != lVar13) || (plVar15 != plVar16)) || (fVar29 != local_200)) ||
         (NAN(fVar29) || NAN(local_200))) {
        plVar16 = local_238;
        if (lVar22 != 0) {
          lVar19 = (longlong)(int)local_f8;
          uVar12 = (int)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar12);
          if (local_f8._4_4_ < uVar12) {
            FUN_1406da4f6(local_1a0,uVar6 & 0xffffffff);
          }
          plVar16 = local_238;
          if (local_238 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_238 + 1) = (int)local_238[1] + 1;
            UNLOCK();
          }
          puVar14 = local_100;
          if (local_100 == (uint *)0x0) {
            puVar14 = local_1a0;
          }
          puVar14[lVar19 * 10] = (uint)local_240;
          puVar14[lVar19 * 10 + 1] = (int)uVar23 - (uint)local_240;
          *(longlong *)(puVar14 + lVar19 * 10 + 2) = lVar22;
          *(longlong **)(puVar14 + lVar19 * 10 + 4) = plVar15;
          *(longlong **)(puVar14 + lVar19 * 10 + 6) = local_238;
          puVar14[lVar19 * 10 + 8] = (uint)fVar29;
          if (local_238 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_238 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_238)(local_238);
              LOCK();
              piVar2 = (int *)((longlong)plVar16 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          plVar16 = (longlong *)0x0;
        }
        plVar15 = local_1c0;
        if (local_1b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
          UNLOCK();
        }
        local_238 = local_1b8;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar16 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        local_240 = uVar23 & 0xffffffff;
        lVar22 = lVar13;
        fVar29 = local_200;
      }
      plVar16 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      uVar6 = local_f8;
      uVar23 = uVar23 + 1;
    } while ((longlong)uVar23 < lVar26);
    plVar16 = local_238;
    if (lVar22 != 0) {
      lVar26 = (longlong)(int)local_f8;
      uVar12 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,uVar12);
      if (local_f8._4_4_ < uVar12) {
        FUN_1406da4f6(local_1a0,uVar6 & 0xffffffff);
      }
      if (local_238 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_238 + 1) = (int)local_238[1] + 1;
        UNLOCK();
      }
      puVar14 = local_100;
      if (local_100 == (uint *)0x0) {
        puVar14 = local_1a0;
      }
      puVar14[lVar26 * 10] = (uint)local_240;
      puVar14[lVar26 * 10 + 1] = (int)uVar23 - (uint)local_240;
      *(longlong *)(puVar14 + lVar26 * 10 + 2) = lVar22;
      *(longlong **)(puVar14 + lVar26 * 10 + 4) = plVar15;
      *(longlong **)(puVar14 + lVar26 * 10 + 6) = local_238;
      puVar14[lVar26 * 10 + 8] = (uint)fVar29;
      plVar16 = local_238;
    }
    local_238 = plVar16;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar16 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    iVar17 = (int)local_218 + (int)param_9[1];
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    if (*(int *)((longlong)param_9 + 0xc) < iVar17) {
      FUN_1406d9c90(param_9);
    }
    puVar14 = local_100;
    if (local_100 == (uint *)0x0) {
      puVar14 = local_1a0;
    }
    if ((longlong)(int)local_f8 == 0) {
      uVar23 = 0;
    }
    else {
      local_210 = puVar14 + (longlong)(int)local_f8 * 10;
      do {
        plVar15 = *(longlong **)(puVar14 + 4);
        if (plVar15 != (longlong *)0x0) {
          local_241 = (*(uint *)(*plVar15 + 8) & 0x40) == 0 && *(int *)(param_5 + 0x4c) == 0;
          local_1e4 = 0;
          FUN_1406d99f9(plVar15,*(undefined8 *)(puVar14 + 2),&local_1e4);
          fVar31 = (float)puVar14[8] * param_6;
          iVar17 = *(int *)(param_5 + 0x4c);
          fVar29 = *(float *)(param_5 + 0x48);
          fVar30 = 0.0;
          if (iVar17 != 0) {
            fVar30 = ((float)iVar17 * fVar31 * fVar29) / 1000.0;
          }
          local_22c = (int)CONCAT62((uint6)(ushort)((uint)iVar17 >> 0x10),0xffff);
          if (*(char *)(param_5 + 0x55) == '\x01') {
            local_22c = (int)(float)(-(uint)(*(float *)(param_5 + 0x58) != 0.0) &
                                    (uint)(fVar29 * *(float *)(param_5 + 0x58) * fVar31));
          }
          uVar4 = **(undefined8 **)(puVar14 + 4);
          fVar28 = 0.0;
          if (0.0 <= fVar29) {
            fVar28 = fVar29;
          }
          fVar29 = 0.0;
          if (0.0 <= fVar31) {
            fVar29 = fVar31;
          }
          iVar17 = FUN_144b42fe0(((int)(fVar28 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar29 * 65536.0)
                                );
          FUN_14011ecb7(uVar4,iVar17 + 0x20 >> 6);
          FUN_1406d996e(*(undefined8 *)(puVar14 + 2),local_1ec);
          fVar29 = *(float *)(param_5 + 0x50);
          if (5.0 <= fVar29) {
            fVar29 = 5.0;
          }
          if (fVar29 <= -5.0) {
            fVar29 = -5.0;
          }
          plVar15 = (longlong *)FUN_14001cc68(0x38,0x10);
          uVar5 = local_1e4;
          plVar15[1] = (longlong)&DAT_100000001;
          *plVar15 = (longlong)&PTR_FUN_149eda190;
          uVar18 = *(undefined4 *)(param_5 + 0x48);
          local_1c0 = *(longlong **)(puVar14 + 4);
          local_1b8 = *(longlong **)(puVar14 + 6);
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_1b8 + 0xc) = *(int *)((longlong)local_1b8 + 0xc) + 1;
            UNLOCK();
          }
          local_250 = (longlong *)CONCAT62(local_250._2_6_,(short)local_1e8);
          local_258 = CONCAT11(local_258._1_1_,local_1ec[0]);
          local_218 = puVar14;
          local_268._0_4_ = fVar31;
          local_260._0_4_ = fVar29;
          FUN_1406d9b98(plVar15 + 2,&local_1c0,local_1e4,uVar18);
          puVar14 = local_218;
          puVar21 = local_228;
          local_1c0 = plVar15 + 2;
          local_1b8 = plVar15;
          local_268._0_4_ = fVar31;
          FUN_1406d9de0(*local_228,&local_1e0,**(undefined8 **)(local_218 + 4),
                        *(undefined4 *)(param_5 + 0x48));
          local_260 = (longlong *)CONCAT44(local_260._4_4_,fVar31);
          local_268 = (float *)CONCAT44(local_268._4_4_,*(undefined4 *)(param_5 + 0x48));
          FUN_1406da070(*puVar21,&local_200,**(undefined8 **)(puVar14 + 4),uVar5);
          if (0 < (int)puVar14[1]) {
            local_240 = CONCAT44(local_240._4_4_,(int)fVar30);
            lVar26 = 0;
            do {
              uVar23 = (ulonglong)*puVar14 + lVar26;
              uVar3 = *(ushort *)(local_220 + ((int)*puVar14 + lVar26) * 2);
              local_258 = (undefined2)local_240;
              local_268 = &local_200;
              local_260 = param_9;
              cVar7 = FUN_1406d88a2(local_228,local_220,uVar23 & 0xffffffff,&local_1c0);
              if (cVar7 == '\0') {
                iVar17 = FUN_144b42f90(**(undefined8 **)(puVar14 + 4),uVar3);
                if ((uVar3 != 0) && (iVar17 == 0)) {
                  iVar17 = FUN_144b42f90(**(undefined8 **)(puVar14 + 4),0xfffd);
                }
                local_208[0] = 0;
                cVar7 = FUN_1406d7a52(CONCAT44(uStack_1fc,local_200),iVar17,local_208);
                local_238 = (longlong *)CONCAT44(local_238._4_4_,iVar17);
                if (cVar7 == '\0') {
                  sVar20 = 0;
                }
                else {
                  sVar20 = (short)((local_208[0] + 0x200U >> 10) + 0x20 >> 6);
                }
                uVar12 = FUN_1406d79dc(param_9);
                plVar15 = local_1b8;
                puVar21 = (undefined8 *)((longlong)(int)uVar12 * 0xa8 + *param_9);
                if (local_1b8 == (longlong *)0x0) {
                  *puVar21 = local_1c0;
                  plVar16 = (longlong *)puVar21[1];
                  if (plVar16 != (longlong *)0x0) {
                    puVar21[1] = 0;
LAB_1406d780f:
                    LOCK();
                    plVar15 = plVar16 + 1;
                    *(int *)plVar15 = (int)*plVar15 + -1;
                    UNLOCK();
                    if ((int)*plVar15 == 0) {
                      (**(code **)*plVar16)(plVar16);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar16 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar17 = *piVar2;
                      UNLOCK();
joined_r0x0001406d7848:
                      if (iVar17 == 0) {
                        (**(code **)(*plVar16 + 0x10))(plVar16);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
                  UNLOCK();
                  *puVar21 = local_1c0;
                  plVar16 = (longlong *)puVar21[1];
                  if (local_1b8 == plVar16) {
                    LOCK();
                    plVar16 = local_1b8 + 1;
                    *(int *)plVar16 = (int)*plVar16 + -1;
                    UNLOCK();
                    if ((int)*plVar16 == 0) {
                      (**(code **)*local_1b8)(local_1b8);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar15 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar17 = *piVar2;
                      UNLOCK();
                      plVar16 = plVar15;
                      goto joined_r0x0001406d7848;
                    }
                  }
                  else {
                    puVar21[1] = local_1b8;
                    if (plVar16 != (longlong *)0x0) goto LAB_1406d780f;
                  }
                }
                *(undefined4 *)(puVar21 + 2) = local_238._0_4_;
                *(int *)((longlong)puVar21 + 0x14) = (int)uVar23;
                sVar10 = sVar20;
                if (*(char *)(param_5 + 0x55) != '\0') {
                  sVar10 = (short)local_22c;
                }
                *(short *)(puVar21 + 3) = sVar10;
                *(undefined2 *)((longlong)puVar21 + 0x1a) = 0;
                uVar11 = 0;
                if (*(char *)(param_5 + 0x55) == '\x01') {
                  uVar11 = (undefined2)(((int)(short)local_22c - (int)sVar20) / 2);
                }
                *(undefined2 *)((longlong)puVar21 + 0x1c) = uVar11;
                *(undefined2 *)((longlong)puVar21 + 0x1e) = 0;
                *(undefined4 *)(puVar21 + 4) = 0x10100;
                cVar7 = FUN_140665610(uVar3);
                puVar14 = local_218;
                bVar9 = (uVar3 != 0x202f && (uVar3 & 0xfffd) != 0x2009) && cVar7 == '\0';
                *(byte *)((longlong)puVar21 + 0x24) = bVar9;
                if (0 < (int)uVar12 && (local_241 & 1) == 0) {
                  lVar22 = (ulonglong)uVar12 * 0xa8 + *param_9;
                  if ((short)local_240 != 0) {
                    *(short *)(lVar22 + -0x90) = *(short *)(lVar22 + -0x90) + (short)local_240;
                    bVar9 = *(byte *)((longlong)puVar21 + 0x24);
                  }
                  if ((((bVar9 & 1) != 0) && (*(char *)(param_5 + 0x55) == '\0')) &&
                     ((local_1e0 != 0 &&
                      (cVar7 = FUN_1406d7e20(local_1e0,*(undefined4 *)(lVar22 + -0x98),
                                             *(undefined4 *)(puVar21 + 2),local_208), cVar7 != '\0')
                      ))) {
                    cVar7 = (char)(local_208[0] + 0x20U >> 6);
                    *(short *)(lVar22 + -0x90) = *(short *)(lVar22 + -0x90) + (short)cVar7;
                    *(char *)(lVar22 + -0x88) = cVar7;
                  }
                }
              }
              lVar26 = lVar26 + 1;
            } while ((int)lVar26 < (int)puVar14[1]);
          }
          plVar15 = local_1f8;
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_1f8 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_1f8)(local_1f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          plVar15 = local_1d8;
          if (local_1d8 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_1d8 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_1d8)(local_1d8);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          plVar15 = local_1b8;
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_1b8 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_1b8)(local_1b8);
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
        puVar14 = puVar14 + 10;
      } while (puVar14 != local_210);
      uVar23 = local_f8 & 0xffffffff;
    }
    puVar14 = local_1a0;
    if (local_100 != (uint *)0x0) {
      puVar14 = local_100;
    }
    FUN_1406d99b0(puVar14,uVar23);
    if (local_100 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406d79dc FUN_1406d79dc body=60 status=ok
// SIG undefined FUN_1406d79dc(void)

int FUN_1406d79dc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14694d62a(param_1,iVar1);
  }
  FUN_1406d7a18((longlong)iVar1 * 0xa8 + *param_1);
  return iVar1;
}



// FUNCTION 1406d7a18 FUN_1406d7a18 body=57 status=ok
// SIG undefined FUN_1406d7a18(void)

void FUN_1406d7a18(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
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
  return;
}



// FUNCTION 1406d7a52 FUN_1406d7a52 body=320 status=ok
// SIG undefined FUN_1406d7a52(void)

undefined8 FUN_1406d7a52(longlong *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  uint *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  local_44 = param_2;
  if (lVar2 == 0) {
LAB_1406d7b5b:
    uVar7 = 0;
  }
  else {
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
      plVar6 = param_1 + 9;
      if ((longlong *)param_1[10] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[10];
      }
      iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
      if (iVar4 != -1) {
        lVar3 = param_1[2];
        do {
          lVar1 = lVar3 + (longlong)iVar4 * 0x10;
          if (*(uint *)(lVar3 + (longlong)iVar4 * 0x10) == param_2) {
            if ((lVar1 != 0) && ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0)) {
              *param_3 = *(undefined4 *)(lVar1 + 4);
              goto LAB_1406d7ace;
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 8);
        } while (iVar4 != -1);
      }
    }
    if ((*(uint *)(param_1 + 1) & 1) == 0) {
      FUN_14011ecb7(lVar2,*(undefined4 *)((longlong)param_1 + 0xc));
      iVar4 = FUN_144b43000(*param_1,param_2,(int)param_1[1],param_3);
      if (iVar4 != 0) goto LAB_1406d7b5b;
      if ((*(uint *)(*param_1 + 8) & 3) == 2) {
        uVar5 = FUN_144b42fe0(*param_3,*(undefined4 *)
                                        ((ulonglong)((*(uint *)(param_1 + 1) & 0x10) >> 2) + 0x1c +
                                        *(longlong *)(*param_1 + 0x80)));
        goto LAB_1406d7b7d;
      }
    }
    else {
      iVar4 = FUN_144b43000(lVar2,param_2,*(uint *)(param_1 + 1),param_3);
      if (iVar4 != 0) goto LAB_1406d7b5b;
      uVar5 = FUN_144b55580(*param_3,*(undefined4 *)((longlong)param_1 + 0xc),0x40);
LAB_1406d7b7d:
      *param_3 = uVar5;
    }
    local_40 = &local_44;
    local_38 = param_3;
    FUN_1406da702(param_1 + 2,local_2c);
LAB_1406d7ace:
    uVar7 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d7b94 FUN_1406d7b94 body=651 status=ok
// SIG undefined FUN_1406d7b94(void)

undefined8 **
FUN_1406d7b94(longlong param_1,undefined8 **param_2,undefined8 param_3,int param_4,char param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_2 + 9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x11) = 0;
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  FUN_1406d8dea(*(undefined8 *)(param_1 + 0x10),&local_48);
  plVar4 = local_40;
  if (&local_48 == param_2) {
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
LAB_1406d7bf2:
    puVar6 = *param_2;
  }
  else {
    *param_2 = local_48;
    puVar6 = local_48;
    if (local_40 != (longlong *)0x0) {
      param_2[1] = local_40;
      goto LAB_1406d7bf2;
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
LAB_1406d7c73:
    if (param_4 == 0xfffd || param_5 != '\0') {
LAB_1406d7c86:
      lVar7 = FUN_1412ce748();
      if (*(char *)(lVar7 + 0x120) == '\x01') {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = FUN_1412ce748();
        uVar8 = FUN_1428643b4(uVar8);
        FUN_1406d8dea(uVar2,&local_48,uVar8);
        plVar4 = local_40;
        if (&local_48 != param_2) {
          *param_2 = local_48;
          local_48 = (undefined8 *)0x0;
          plVar3 = param_2[1];
          if (local_40 != plVar3) {
            local_40 = (longlong *)0x0;
            param_2[1] = plVar4;
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
          }
        }
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (*param_2 != (undefined8 *)0x0) {
          iVar5 = FUN_144b42f90(**param_2,param_4);
          *(int *)(param_2 + 2) = iVar5;
          if (iVar5 != 0) {
            *(undefined1 *)(param_2 + 3) = 1;
            *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 0x20;
          }
        }
      }
    }
  }
  else {
    if (*(char *)(puVar6 + 3) == '\x01') {
      *param_2 = (undefined8 *)0x0;
      plVar4 = param_2[1];
      if (plVar4 != (longlong *)0x0) {
        param_2[1] = (undefined8 *)0x0;
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      goto LAB_1406d7c4c;
    }
    iVar5 = FUN_144b42f90(*puVar6,param_4);
    *(int *)(param_2 + 2) = iVar5;
    *(undefined1 *)(param_2 + 3) = 0;
    if (*param_2 == (undefined8 *)0x0) goto LAB_1406d7c73;
    if (((param_4 == 0xfffd || param_5 != '\0') && (param_4 != 0)) && (iVar5 == 0))
    goto LAB_1406d7c86;
  }
  if ((param_4 != 0) && (*(int *)(param_2 + 2) == 0)) {
    *param_2 = (undefined8 *)0x0;
    plVar4 = param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = (undefined8 *)0x0;
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
LAB_1406d7c4c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d7e20 FUN_1406d7e20 body=645 status=ok
// SIG undefined FUN_1406d7e20(void)

undefined8 FUN_1406d7e20(longlong *param_1,uint param_2,ulonglong param_3,undefined8 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  uint *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_4c = (int)param_3;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    uVar8 = param_2 >> 0xd ^ -param_2;
    uVar9 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - param_2;
    uVar10 = uVar9 >> 0xd ^ (param_2 - uVar8) - uVar9;
    uVar11 = uVar10 >> 0xc ^ (uVar8 - uVar9) - uVar10;
    uVar8 = uVar11 << 0x10 ^ (uVar9 - uVar10) - uVar11;
    uVar9 = uVar8 >> 5 ^ (uVar10 - uVar11) - uVar8;
    uVar10 = uVar9 >> 3 ^ (uVar11 - uVar8) - uVar9;
    uVar8 = uVar10 << 10 ^ (uVar8 - uVar9) - uVar10;
    uVar9 = (uint)(param_3 >> 0xd) & 0x7ffff ^ (uVar8 >> 0xf ^ uVar9 - (uVar10 + uVar8)) - local_4c;
    uVar10 = uVar9 << 8 ^ (-0x61c88647 - uVar9) - local_4c;
    uVar8 = uVar10 >> 0xd ^ (local_4c - uVar9) - uVar10;
    uVar11 = uVar8 >> 0xc ^ (uVar9 - uVar10) - uVar8;
    uVar9 = uVar11 << 0x10 ^ (uVar10 - uVar8) - uVar11;
    uVar10 = uVar9 >> 5 ^ (uVar8 - uVar11) - uVar9;
    uVar8 = uVar10 >> 3 ^ (uVar11 - uVar9) - uVar10;
    uVar9 = uVar8 << 10 ^ (uVar9 - uVar10) - uVar8;
    plVar6 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[10];
    }
    uVar8 = *(uint *)((longlong)plVar6 +
                     (ulonglong)((int)param_1[0xb] - 1U & (uVar9 >> 0xf ^ uVar10 - (uVar8 + uVar9)))
                     * 4);
    if (uVar8 != 0xffffffff) {
      lVar2 = param_1[2];
      do {
        puVar1 = (uint *)(lVar2 + (longlong)(int)uVar8 * 0x18);
        if ((*puVar1 == param_2) && (*(int *)(lVar2 + 4 + (longlong)(int)uVar8 * 0x18) == local_4c))
        {
          if ((puVar1 != (uint *)0x0) && (puVar1 + 2 != (uint *)0x0)) {
            *param_4 = *(undefined8 *)(puVar1 + 2);
            goto LAB_1406d801b;
          }
          break;
        }
        uVar8 = puVar1[4];
      } while (uVar8 != 0xffffffff);
    }
  }
  local_58 = param_4;
  if ((int)param_1[1] == 2) {
    iVar3 = FUN_144b3da40(*param_1,param_2,param_3 & 0xffffffff,2);
    if (iVar3 != 0) goto LAB_1406d805d;
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar5 = FUN_144b42fe0(*(undefined4 *)param_4,uVar4);
    *(undefined4 *)param_4 = uVar5;
    uVar5 = *(undefined4 *)((longlong)param_4 + 4);
LAB_1406d8084:
    uVar4 = FUN_144b42fe0(uVar5,uVar4);
    *(undefined4 *)((longlong)param_4 + 4) = uVar4;
  }
  else {
    FUN_14011ecb7(*param_1,*(undefined4 *)((longlong)param_1 + 0xc));
    iVar3 = FUN_144b3da40(*param_1,param_2,param_3 & 0xffffffff,(int)param_1[1]);
    if (iVar3 != 0) {
LAB_1406d805d:
      uVar7 = 0;
      goto LAB_1406d801d;
    }
    if ((*(uint *)(*param_1 + 8) & 3) == 2) {
      uVar4 = FUN_144b42fe0(*(undefined4 *)param_4,
                            *(undefined4 *)(*(longlong *)(*param_1 + 0x80) + 0x1c));
      *(undefined4 *)param_4 = uVar4;
      uVar4 = *(undefined4 *)(*(longlong *)(*param_1 + 0x80) + 0x20);
      uVar5 = *(undefined4 *)((longlong)param_4 + 4);
      goto LAB_1406d8084;
    }
  }
  local_48 = &local_50;
  local_40 = param_4;
  FUN_14011ef66(param_1 + 2,local_34);
LAB_1406d801b:
  uVar7 = 1;
LAB_1406d801d:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d80a6 FUN_1406d80a6 body=1025 status=ok
// SIG undefined FUN_1406d80a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406d80a6(undefined8 param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c968418) && (FUN_144b3d300(&DAT_14c968418), DAT_14c968418 == -1)) {
    _DAT_14c968408 = 0;
    _DAT_14c968410 = 0;
    DAT_14c9683f0 = 0;
    uRam000000014c9683f8 = 0;
    _DAT_14c9683fe = 0;
    uRam000000014c968400 = 0;
    atexit((_func_5014 *)&LAB_142864210);
    _Init_thread_footer(&DAT_14c968418);
  }
  local_80 = param_2;
  local_78 = param_1;
  local_70 = param_3;
  local_68 = param_2;
  uVar5 = FUN_1406d8740(param_2);
  lVar6 = FUN_1406d84a8(param_1,uVar5);
  uVar19 = 0x3f800000;
  if (lVar6 == 0) {
LAB_1406d8497:
    puVar13 = &DAT_14c9683f0;
  }
  else {
    uVar2 = *(uint *)(lVar6 + 0x40);
    if ((((uVar2 == 0) || (lVar11 = *(longlong *)(lVar6 + 0x38), param_3 < *(int *)(lVar11 + 4))) ||
        ((int)uVar2 < 1)) || (*(int *)(lVar11 + 0xc + (longlong)(int)(uVar2 - 1) * 0x20) < param_3))
    {
LAB_1406d814f:
      uVar2 = *(uint *)(lVar6 + 0x50);
      if ((uVar2 != 0) &&
         (((lVar11 = *(longlong *)(lVar6 + 0x48), *(int *)(lVar11 + 4) <= param_3 &&
           (0 < (int)uVar2)) &&
          (param_3 <= *(int *)(lVar11 + 0xc + (longlong)(int)(uVar2 - 1) * 0x20))))) {
        uVar12 = 0;
        uVar10 = uVar2;
        do {
          uVar1 = (uVar10 >> 1) + uVar12;
          if (*(int *)(lVar11 + 4 + (ulonglong)uVar1 * 0x20) < param_3) {
            uVar12 = uVar1 + (uVar10 & 1);
          }
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar3);
        if ((int)uVar12 < (int)uVar2) {
          cVar4 = FUN_145737fa8(lVar11 + (ulonglong)uVar12 * 0x20,param_3);
          if ((cVar4 != '\0') &&
             (plVar7 = *(longlong **)(lVar11 + 0x10 + (ulonglong)uVar12 * 0x20),
             plVar7 != (longlong *)0x0)) goto LAB_1406d8185;
        }
        if ((int)uVar12 <= (int)uVar2 && 0 < (int)uVar12) {
          lVar16 = (ulonglong)(uVar12 - 1) * 0x20;
          cVar4 = FUN_145737fa8(lVar11 + lVar16,param_3);
          if ((cVar4 != '\0') &&
             (plVar7 = *(longlong **)(lVar11 + 0x10 + lVar16), plVar7 != (longlong *)0x0))
          goto LAB_1406d8185;
        }
      }
      plVar7 = (longlong *)(lVar6 + 8);
      if (*(longlong **)(lVar6 + 0x28) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar6 + 0x28);
      }
      plVar7 = (longlong *)*plVar7;
      if (plVar7 == (longlong *)0x0) goto LAB_1406d8497;
    }
    else {
      uVar15 = 0;
      uVar9 = (ulonglong)uVar2;
      uVar10 = uVar2;
      do {
        uVar9 = uVar9 >> 1;
        uVar12 = (uint)uVar9 + (int)uVar15;
        if (*(int *)(lVar11 + 4 + (ulonglong)uVar12 * 0x20) < param_3) {
          uVar15 = (ulonglong)(uVar12 + (uVar10 & 1));
        }
        bVar3 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar3);
      iVar14 = (int)uVar15;
      if ((int)uVar2 <= iVar14) {
LAB_1406d8289:
        if (iVar14 <= (int)uVar2 && 0 < iVar14) {
          lVar16 = (ulonglong)(iVar14 - 1) * 0x20;
          cVar4 = FUN_145737fa8(lVar11 + lVar16,param_3);
          if ((cVar4 != '\0') &&
             (plVar7 = *(longlong **)(lVar11 + 0x10 + lVar16), plVar7 != (longlong *)0x0))
          goto LAB_1406d8185;
        }
        goto LAB_1406d814f;
      }
      cVar4 = FUN_145737fa8(lVar11 + uVar15 * 0x20,param_3);
      if ((cVar4 == '\0') ||
         (plVar7 = *(longlong **)(lVar11 + 0x10 + uVar15 * 0x20), plVar7 == (longlong *)0x0))
      goto LAB_1406d8289;
    }
LAB_1406d8185:
    lVar6 = FUN_1406d84a8(param_1,uVar5);
    if (lVar6 == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(lVar6 + 8);
      if (*(undefined8 **)(lVar6 + 0x28) != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(lVar6 + 0x28);
      }
      plVar17 = (longlong *)*puVar8;
    }
    lVar6 = FUN_1406d84a8(param_1,uVar5);
    if (lVar6 == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      lVar11 = lVar6 + 8;
      if (*(longlong *)(lVar6 + 0x28) != 0) {
        lVar11 = *(longlong *)(lVar6 + 0x28);
      }
      plVar18 = *(longlong **)(lVar11 + 0x10);
    }
    puVar8 = (undefined8 *)FUN_1406d8658(&local_78,plVar7,plVar17,0);
    if (puVar8 == (undefined8 *)0x0) {
      if (plVar7 != plVar17) {
        puVar8 = (undefined8 *)FUN_1406d8658(&local_78,plVar17,0,0);
        plVar7 = plVar17;
        if (puVar8 != (undefined8 *)0x0) goto LAB_1406d81fc;
      }
      puVar8 = (undefined8 *)FUN_1406d8658(&local_78,plVar18,plVar17,1);
      plVar7 = plVar18;
      if ((puVar8 == (undefined8 *)0x0) &&
         (puVar8 = (undefined8 *)FUN_140af7f98(plVar17,local_80 + 0x40), plVar7 = plVar17,
         puVar8 == (undefined8 *)0x0)) {
        if ((int)((longlong *)*plVar17)[1] < 1) goto LAB_1406d8497;
        puVar8 = (undefined8 *)(*(longlong *)*plVar17 + 8);
        puVar13 = &DAT_14c9683f0;
        if (puVar8 == (undefined8 *)0x0) goto LAB_1406d8206;
      }
    }
LAB_1406d81fc:
    uVar19 = (undefined4)plVar7[5];
    puVar13 = puVar8;
  }
LAB_1406d8206:
  *local_88 = uVar19;
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 1406d84a8 FUN_1406d84a8 body=431 status=ok
// SIG undefined FUN_1406d84a8(void)

undefined8 FUN_1406d84a8(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  longlong **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar5 = param_1 + 0x40;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x48);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar4 >> 0x10 ^ uVar4))
                               * 4);
      if (iVar7 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar7 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x20) == param_2) {
            if ((lVar5 != 0) && ((undefined8 *)(lVar5 + 8) != (undefined8 *)0x0)) {
              uVar8 = *(undefined8 *)(lVar5 + 8);
              goto LAB_1406d8549;
            }
            break;
          }
          iVar7 = *(int *)(lVar5 + 0x18);
        } while (iVar7 != -1);
      }
    }
    plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149eda350;
    FUN_145738186(plVar6 + 2,param_2);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_40 = &local_48;
    local_38 = &local_58;
    local_58 = plVar6 + 2;
    local_50 = plVar6;
    FUN_145738030(plVar1,&local_2c);
    plVar3 = local_50;
    uVar8 = *(undefined8 *)(*plVar1 + 8 + (longlong)local_2c * 0x20);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
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
  }
LAB_1406d8549:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d8658 FUN_1406d8658 body=231 status=ok
// SIG undefined FUN_1406d8658(void)

longlong FUN_1406d8658(undefined8 *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  lVar3 = FUN_140af7f98(param_2,param_1[2] + 0x40);
  if ((lVar3 == 0) ||
     ((param_4 == '\0' &&
      (cVar2 = FUN_14171dd1a(uVar1,lVar3,*(undefined4 *)(param_1 + 1)), cVar2 == '\0')))) {
    if ((param_2 != param_3 && param_3 != (longlong *)0x0) &&
       (lVar3 = FUN_140af7f98(param_3,param_1[2] + 0x40), lVar3 != 0)) {
      uVar4 = FUN_1469365e6(uVar1,lVar3);
      lVar3 = FUN_146936a2e(uVar1,param_2,uVar4);
      if (lVar3 != 0) {
        if (param_4 != '\0') {
          return lVar3;
        }
        cVar2 = FUN_14171dd1a(uVar1,lVar3,*(undefined4 *)(param_1 + 1));
        if (cVar2 != '\0') {
          return lVar3;
        }
      }
    }
    if ((((int)((longlong *)*param_2)[1] < 1) || (lVar3 = *(longlong *)*param_2 + 8, lVar3 == 0)) ||
       ((param_4 == '\0' &&
        (cVar2 = FUN_14171dd1a(uVar1,lVar3,*(undefined4 *)(param_1 + 1)), cVar2 == '\0')))) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



// FUNCTION 1406d8740 FUN_1406d8740 body=353 status=ok
// SIG undefined FUN_1406d8740(void)

code * FUN_1406d8740(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
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
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (DAT_14c9684a8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1469380b7;
      local_50 = FUN_1462798ef;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/SlateCore",L"FontProviderInterface",&DAT_14c9684a8,&DAT_1469380b6);
    }
    plVar3 = (longlong *)FUN_144718840(lVar2,DAT_14c9684a8);
    if (plVar3 != (longlong *)0x0) {
      pcVar4 = (code *)(**(code **)(*plVar3 + 0x10))(plVar3);
      goto joined_r0x0001406d87c2;
    }
  }
  pcVar4 = (code *)param_1[6];
joined_r0x0001406d87c2:
  if (pcVar4 == (code *)0x0) {
    uVar5 = FUN_1412ce748();
    FUN_146938288(uVar5,&local_28);
    pcVar4 = local_28;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar4;
}



// FUNCTION 1406d88a2 FUN_1406d88a2 body=1297 status=ok
// SIG undefined FUN_1406d88a2(void)

undefined8
FUN_1406d88a2(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,undefined8 param_5,
             undefined8 param_6,short param_7)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  short sVar11;
  longlong *plVar12;
  ushort uVar13;
  bool bVar14;
  undefined1 auStack_88 [34];
  short local_66;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_5;
  uVar13 = *(ushort *)(param_2 + (longlong)(int)param_3 * 2);
  local_60 = param_1;
  local_58 = param_4;
  cVar5 = FUN_1406d8db4(uVar13);
  if ((cVar5 == '\0') && (uVar13 != 0x200b)) {
    if (uVar13 == 9) {
      local_64 = 0;
      local_66 = 0;
      FUN_1428662dc(&local_60,0x20);
      uVar6 = 4;
      if (4 < (int)param_3) {
        uVar6 = param_3;
      }
      sVar11 = 4;
      if ((int)(uVar6 - 4) < (int)param_3) {
        lVar8 = (ulonglong)uVar6 - 4;
        sVar11 = 0;
        do {
          if (*(short *)(param_2 + lVar8 * 2) == 9) {
            sVar11 = 0;
          }
          else {
            uVar13 = sVar11 + 4;
            if (-1 < (short)(sVar11 + 1U)) {
              uVar13 = sVar11 + 1U;
            }
            sVar11 = (sVar11 - (uVar13 & 0xfffc)) + 1;
          }
          lVar8 = lVar8 + 1;
        } while ((int)param_3 != lVar8);
        sVar11 = 4 - sVar11;
      }
      plVar10 = (longlong *)FUN_146946e0a(param_6);
      lVar8 = *param_4;
      plVar3 = (longlong *)param_4[1];
      if (plVar3 == (longlong *)0x0) {
        *plVar10 = lVar8;
        plVar12 = (longlong *)plVar10[1];
        if (plVar12 != (longlong *)0x0) {
          plVar10[1] = 0;
LAB_1406d8b5b:
          LOCK();
          plVar3 = plVar12 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x0001406d8b88:
            if (iVar7 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *plVar10 = lVar8;
        plVar12 = (longlong *)plVar10[1];
        if (plVar3 == plVar12) {
          LOCK();
          plVar12 = plVar3 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar12 = plVar3;
            goto joined_r0x0001406d8b88;
          }
        }
        else {
          plVar10[1] = (longlong)plVar3;
          if (plVar12 != (longlong *)0x0) goto LAB_1406d8b5b;
        }
      }
      *(undefined4 *)(plVar10 + 2) = local_64;
      *(uint *)((longlong)plVar10 + 0x14) = param_3;
      *(short *)(plVar10 + 3) = sVar11 * (param_7 + local_66);
    }
    else {
      uVar9 = 0;
      if ((0x26 < uVar13 - 0x2009) ||
         ((0x4020000001U >> ((ulonglong)(uVar13 - 0x2009) & 0x3f) & 1) == 0)) goto LAB_1406d893a;
      plVar3 = (longlong *)*param_4;
      plVar10 = (longlong *)plVar3[1];
      if (plVar10 != (longlong *)0x0) {
        iVar7 = (int)plVar10[1];
        do {
          if (iVar7 == 0) goto LAB_1406d8be4;
          LOCK();
          iVar2 = (int)plVar10[1];
          bVar14 = iVar7 == iVar2;
          if (bVar14) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar2 = iVar7;
          }
          iVar7 = iVar2;
          UNLOCK();
        } while (!bVar14);
        puVar4 = (undefined8 *)*plVar3;
        if ((puVar4 != (undefined8 *)0x0) && (iVar7 = FUN_144b42f90(*puVar4), iVar7 != 0)) {
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          uVar9 = 0;
          goto LAB_1406d893a;
        }
        LOCK();
        plVar3 = plVar10 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
LAB_1406d8be4:
      if (uVar13 == 0x2026) {
        local_64 = 0;
        local_66 = 0;
        FUN_1428662dc(&local_60,0x2e);
        iVar7 = 3;
        do {
          plVar10 = (longlong *)FUN_146946e0a(param_6);
          lVar8 = *param_4;
          plVar3 = (longlong *)param_4[1];
          if (plVar3 == (longlong *)0x0) {
            *plVar10 = lVar8;
            plVar12 = (longlong *)plVar10[1];
            if (plVar12 != (longlong *)0x0) {
              plVar10[1] = 0;
LAB_1406d8c64:
              LOCK();
              plVar3 = plVar12 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar2 = *piVar1;
                UNLOCK();
joined_r0x0001406d8c96:
                if (iVar2 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            *plVar10 = lVar8;
            plVar12 = (longlong *)plVar10[1];
            if (plVar3 == plVar12) {
              LOCK();
              plVar12 = plVar3 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar2 = *piVar1;
                UNLOCK();
                plVar12 = plVar3;
                goto joined_r0x0001406d8c96;
              }
            }
            else {
              plVar10[1] = (longlong)plVar3;
              if (plVar12 != (longlong *)0x0) goto LAB_1406d8c64;
            }
          }
          *(undefined4 *)(plVar10 + 2) = local_64;
          *(uint *)((longlong)plVar10 + 0x14) = param_3;
          *(short *)(plVar10 + 3) = local_66 + param_7;
          *(undefined8 *)((longlong)plVar10 + 0x1d) = 0x100010100000000;
          *(undefined4 *)((longlong)plVar10 + 0x1a) = 0;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        goto LAB_1406d8b40;
      }
      local_64 = 0;
      local_66 = 0;
      FUN_1428662dc(&local_60,0x20);
      plVar10 = (longlong *)FUN_146946e0a(param_6);
      lVar8 = *param_4;
      plVar3 = (longlong *)param_4[1];
      if (plVar3 == (longlong *)0x0) {
        *plVar10 = lVar8;
        plVar12 = (longlong *)plVar10[1];
        if (plVar12 != (longlong *)0x0) {
          plVar10[1] = 0;
LAB_1406d8d45:
          LOCK();
          plVar3 = plVar12 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x0001406d8d72:
            if (iVar7 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *plVar10 = lVar8;
        plVar12 = (longlong *)plVar10[1];
        if (plVar3 == plVar12) {
          LOCK();
          plVar12 = plVar3 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar12 = plVar3;
            goto joined_r0x0001406d8d72;
          }
        }
        else {
          plVar10[1] = (longlong)plVar3;
          if (plVar12 != (longlong *)0x0) goto LAB_1406d8d45;
        }
      }
      *(undefined4 *)(plVar10 + 2) = local_64;
      *(uint *)((longlong)plVar10 + 0x14) = param_3;
      *(short *)(plVar10 + 3) = (short)((((int)param_7 + (int)local_66) * 2) / 3);
    }
    *(undefined8 *)((longlong)plVar10 + 0x1d) = 0x10100000000;
    *(undefined4 *)((longlong)plVar10 + 0x1a) = 0;
  }
  else {
    plVar10 = (longlong *)FUN_146946e0a(param_6);
    lVar8 = *param_4;
    plVar3 = (longlong *)param_4[1];
    if (plVar3 == (longlong *)0x0) {
      *plVar10 = lVar8;
      plVar12 = (longlong *)plVar10[1];
      if (plVar12 != (longlong *)0x0) {
        plVar10[1] = 0;
LAB_1406d8a76:
        LOCK();
        plVar3 = plVar12 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
joined_r0x0001406d8b18:
          if (iVar7 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *plVar10 = lVar8;
      plVar12 = (longlong *)plVar10[1];
      if (plVar3 == plVar12) {
        LOCK();
        plVar12 = plVar3 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar12 = plVar3;
          goto joined_r0x0001406d8b18;
        }
      }
      else {
        plVar10[1] = (longlong)plVar3;
        if (plVar12 != (longlong *)0x0) goto LAB_1406d8a76;
      }
    }
    *(undefined4 *)(plVar10 + 2) = 0;
    *(uint *)((longlong)plVar10 + 0x14) = param_3;
    plVar10[3] = 0;
    *(undefined1 *)(plVar10 + 4) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x21) = 0x101;
  }
LAB_1406d8b40:
  uVar9 = 1;
LAB_1406d893a:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d8db4 FUN_1406d8db4 body=54 status=ok
// SIG undefined FUN_1406d8db4(void)

undefined8 FUN_1406d8db4(ushort param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if (((param_1 != 0x61c) && (1 < param_1 - 0x200e)) &&
     ((uVar2 = param_1 - 0x202a, 0x3f < uVar2 ||
      ((0xf00000000000001fU >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1406d8dea FUN_1406d8dea body=2947 status=ok
// SIG undefined FUN_1406d8dea(void)

longlong * FUN_1406d8dea(undefined8 *param_1,longlong *param_2,LARGE_INTEGER param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  LARGE_INTEGER LVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  LARGE_INTEGER local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = param_1 + 0xb;
  uVar7 = FUN_14020648b(param_3.QuadPart);
  iVar8 = FUN_1402062fe(plVar3,uVar7,param_3.QuadPart);
  if ((iVar8 == -1) || (lVar17 = (longlong)iVar8 * 0x40 + *plVar3, lVar17 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar17 + 0x28);
    *param_2 = lVar10;
    lVar17 = *(longlong *)(lVar17 + 0x30);
    param_2[1] = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
      lVar10 = *param_2;
    }
    if (lVar10 != 0) goto LAB_1406d8e68;
  }
  cVar5 = FUN_145ae1b1a(param_3.QuadPart);
  if (cVar5 == '\0') goto LAB_1406d8e68;
  FUN_145ae1bc8(param_3.QuadPart,&local_88);
  plVar13 = local_88;
  if ((local_88 != (longlong *)0x0) && (0 < (int)local_88[1])) {
    lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
    if (lVar17 == 0) {
      local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
    }
    else {
      uVar12 = FUN_1406d9ab2();
      plVar15 = (longlong *)FUN_144718840(lVar17,uVar12);
      uVar7 = (**(code **)(*plVar15 + 0x28))(plVar15);
      local_a0 = (longlong *)CONCAT44(local_a0._4_4_,uVar7);
    }
    plVar15 = uStack_80;
    uVar7 = *(undefined4 *)(param_3.QuadPart + 0x18);
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)FUN_14001cc68(0x130,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_149eda2f0;
    local_70.QuadPart = (LONGLONG)plVar13;
    local_68 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_b8 = CONCAT31(local_b8._1_3_,(char)local_a0);
    FUN_146279560(plVar11 + 2,*param_1,&local_70,uVar7);
    if (plVar11 == (longlong *)0x0) {
      *param_2 = 0x10;
      plVar13 = (longlong *)param_2[1];
      if (plVar13 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_1406d8fd8:
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
        if (plVar11 != (longlong *)0x0) goto LAB_1406d8ffe;
      }
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *param_2 = (longlong)(plVar11 + 2);
      plVar13 = (longlong *)param_2[1];
      if (plVar11 == plVar13) {
        LOCK();
        plVar13 = plVar11 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      else {
        param_2[1] = (longlong)plVar11;
        if (plVar13 != (longlong *)0x0) goto LAB_1406d8fd8;
      }
LAB_1406d8ffe:
      LOCK();
      plVar13 = plVar11 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar15 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  plVar13 = uStack_80;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar15 = uStack_80 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  lVar17 = *param_2;
  iVar8 = 0;
  if (lVar17 == 0) {
    cVar5 = FUN_1462794cc(param_3.QuadPart);
    if (cVar5 == '\0') {
      if (DAT_14c9683b8 == '\x01') {
        puVar14 = (undefined8 *)FUN_14001cc68(0x80,0x10);
        puVar14[1] = 0;
        *puVar14 = &PTR_FUN_149e06640;
        *(undefined4 *)(puVar14 + 2) = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        *(undefined2 *)(puVar14 + 5) = 3;
        puVar14[6] = 0xffffffffffffffff;
        puVar14[7] = 0;
        *puVar14 = &PTR_FUN_149eda310;
        FUN_145af800c(puVar14 + 9,param_3.QuadPart);
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        iVar9 = *(int *)(param_1 + 0x16);
        *(uint *)(param_1 + 0x16) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0xb4) < iVar9 + 1U) {
          FUN_14694f2ec(param_1 + 0x15,iVar9);
        }
        *(undefined8 **)(param_1[0x15] + (longlong)iVar9 * 8) = puVar14;
        local_a8 = 0;
        local_b0 = 0xffffffffffffffff;
        local_b8 = local_b8 & 0xffffff00;
        uVar6 = 0;
        FUN_1402a8900(puVar14,0,DAT_14c8442c0,3);
        lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
        if (lVar17 != 0) {
          uVar12 = FUN_1406d9ab2();
          plVar13 = (longlong *)FUN_144718840(lVar17,uVar12);
          uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
        }
        local_70.s.LowPart._0_1_ = uVar6;
        plVar13 = (longlong *)FUN_14694f371();
        if (plVar13 == (longlong *)0x0) {
          *param_2 = 0x10;
          plVar15 = (longlong *)param_2[1];
          if (plVar15 == (longlong *)0x0) goto LAB_1406d9091;
          param_2[1] = 0;
LAB_1406d95e2:
          LOCK();
          plVar11 = plVar15 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          if (plVar13 == (longlong *)0x0) goto LAB_1406d9091;
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          *param_2 = (longlong)(plVar13 + 2);
          plVar15 = (longlong *)param_2[1];
          if (plVar13 == plVar15) {
            LOCK();
            plVar15 = plVar13 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
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
          else {
            param_2[1] = (longlong)plVar13;
            if (plVar15 != (longlong *)0x0) goto LAB_1406d95e2;
          }
        }
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            lVar17 = *plVar13;
LAB_1406d98e4:
            (**(code **)(lVar17 + 0x10))(plVar13);
          }
        }
LAB_1406d9091:
        LVar16.QuadPart = 0;
      }
      else {
        QueryPerformanceCounter(&local_70);
        dVar4 = (double)local_70.QuadPart * DAT_14c83f420;
        local_88 = (longlong *)0x0;
        uStack_80 = (longlong *)0x0;
        lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
        LVar16 = param_3;
        if (lVar17 != 0) {
          uVar12 = FUN_1406d9ab2();
          plVar13 = (longlong *)FUN_144718840(lVar17,uVar12);
          LVar16.QuadPart = (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        if (*(int *)(LVar16.QuadPart + 8) == 0) {
          puVar18 = &DAT_149dfb77a;
        }
        else {
          puVar18 = *(undefined2 **)LVar16;
        }
        LVar16.QuadPart = 0;
        cVar5 = FUN_14158b496(&local_88,puVar18,0);
        if (cVar5 != '\0') {
          iVar9 = (int)uStack_80 + 0x7fe;
          if (-1 < (int)uStack_80 + 0x3ff) {
            iVar9 = (int)uStack_80 + 0x3ff;
          }
          lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
          LVar16 = param_3;
          if (lVar17 != 0) {
            uVar12 = FUN_1406d9ab2();
            plVar13 = (longlong *)FUN_144718840(lVar17,uVar12);
            LVar16.QuadPart = (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          if (*(int *)(LVar16.QuadPart + 8) == 0) {
            puVar18 = &DAT_149dfb77a;
          }
          else {
            puVar18 = *(undefined2 **)LVar16;
          }
          QueryPerformanceCounter(&local_70);
          local_b8 = iVar9 >> 10;
          FUN_140002266(&local_70,
                        L"Took %f seconds to synchronously load lazily loaded font \'%s\' (%dK)",
                        (double)(float)(((double)local_70.QuadPart * DAT_14c83f420 + 16777216.0) -
                                       (dVar4 + 16777216.0)),puVar18);
          LVar16 = local_70;
          lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
          if (lVar17 == 0) {
            local_94 = 0;
          }
          else {
            uVar12 = FUN_1406d9ab2();
            plVar13 = (longlong *)FUN_144718840(lVar17,uVar12);
            local_94 = (**(code **)(*plVar13 + 0x28))(plVar13);
          }
          local_90 = (undefined8 *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_3.QuadPart + 0x18))
          ;
          plVar13 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar13[1] = (longlong)&DAT_100000001;
          *plVar13 = (longlong)&PTR_FUN_149eda5e0;
          local_a0 = plVar13 + 2;
          plVar13[2] = (longlong)local_88;
          local_88 = (longlong *)0x0;
          *(int *)(plVar13 + 3) = (int)uStack_80;
          *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_80._4_4_;
          uStack_80 = (longlong *)0x0;
          plVar15 = (longlong *)FUN_14001cc68(0x130,0x10);
          plVar15[1] = (longlong)&DAT_100000001;
          *plVar15 = (longlong)&PTR_FUN_149eda2f0;
          local_70.QuadPart = (LONGLONG)local_a0;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_b8 = CONCAT31(local_b8._1_3_,(char)local_94);
          local_a0 = plVar13;
          local_68 = plVar13;
          FUN_146279560(plVar15 + 2,*param_1,&local_70,(ulonglong)local_90 & 0xffffffff);
          if (plVar15 == (longlong *)0x0) {
            *param_2 = 0x10;
            plVar13 = (longlong *)param_2[1];
            if (plVar13 != (longlong *)0x0) {
              param_2[1] = 0;
LAB_1406d962b:
              LOCK();
              plVar11 = plVar13 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
              if (plVar15 != (longlong *)0x0) goto LAB_1406d990b;
            }
          }
          else {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            *param_2 = (longlong)(plVar15 + 2);
            plVar13 = (longlong *)param_2[1];
            if (plVar15 == plVar13) {
              LOCK();
              plVar13 = plVar15 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
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
            else {
              param_2[1] = (longlong)plVar15;
              if (plVar13 != (longlong *)0x0) goto LAB_1406d962b;
            }
LAB_1406d990b:
            LOCK();
            plVar13 = plVar15 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          plVar13 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_a0 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_a0 + 0x10))();
              }
            }
          }
        }
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar17 = *param_2;
    }
    else {
      if (cVar5 != '\x01') goto LAB_1406d9091;
      lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
      LVar16 = param_3;
      if (lVar17 == 0) {
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_3.QuadPart + 0x18));
        local_94 = 0;
      }
      else {
        uVar12 = FUN_1406d9ab2();
        plVar13 = (longlong *)FUN_144718840(lVar17,uVar12);
        local_94 = (**(code **)(*plVar13 + 0x28))(plVar13);
        lVar17 = *(longlong *)(param_3.QuadPart + 0x20);
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_3.QuadPart + 0x18));
        if (lVar17 != 0) {
          uVar12 = FUN_1406d9ab2();
          plVar13 = (longlong *)FUN_144718840(lVar17,uVar12);
          LVar16.QuadPart = (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      plVar13 = (longlong *)FUN_14001cc68(0x130,0x10);
      plVar13[1] = (longlong)&DAT_100000001;
      *plVar13 = (longlong)&PTR_FUN_149eda2f0;
      plVar15 = plVar13 + 2;
      local_90 = (undefined8 *)*param_1;
      plVar13[2] = 0;
      plVar13[3] = 0;
      *(undefined8 *)((longlong)plVar13 + 0x19) = 0;
      *(undefined8 *)((longlong)plVar13 + 0x21) = 0;
      FUN_146936ce0(plVar13 + 6,LVar16.QuadPart);
      *(undefined2 *)(plVar13 + 0x19) = 0;
      *(undefined8 *)((longlong)plVar13 + 0xcc) = 0;
      plVar13[0x1f] = 0;
      *(undefined4 *)(plVar13 + 0x20) = 0;
      plVar13[0x1b] = 0;
      plVar13[0x1c] = 0;
      *(undefined8 *)((longlong)plVar13 + 0x104) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar13 + 0x10c) = 0;
      plVar13[0x23] = 0;
      *(undefined4 *)(plVar13 + 0x24) = 0;
      *(char *)(plVar13 + 0x25) = (char)local_94;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[10] = 0;
      plVar13[0xb] = 0;
      plVar13[0xc] = 0;
      plVar13[0xd] = 0;
      plVar13[0xe] = 0;
      plVar13[0xf] = 0;
      plVar13[0x10] = 0;
      *(int *)(plVar13 + 9) = (int)plVar13[7];
      plVar13[10] = (longlong)(plVar13 + 6);
      plVar13[0xd] = (longlong)FUN_146936d40;
      plVar13[0xc] = (longlong)FUN_146936d68;
      plVar13[0x11] = 0;
      plVar13[0x12] = 0;
      plVar13[0x15] = 0;
      plVar13[0x16] = 0;
      plVar13[0x13] = 0;
      plVar13[0x14] = 0;
      plVar13[0x17] = 0;
      plVar13[0x18] = 0;
      *(undefined4 *)(plVar13 + 0x11) = 2;
      plVar13[0x15] = (longlong)(plVar13 + 8);
      iVar9 = FUN_144b54ae0(*local_90,plVar13 + 0x11,(ulonglong)local_a0 & 0xffffffff,plVar15);
      if (iVar9 != 0) {
        *plVar15 = 0;
      }
      FUN_146279652(plVar15);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        *param_2 = (longlong)plVar15;
        plVar15 = (longlong *)param_2[1];
        if (plVar13 == plVar15) {
          LOCK();
          plVar15 = plVar13 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
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
        else {
          param_2[1] = (longlong)plVar13;
          if (plVar15 != (longlong *)0x0) goto LAB_1406d982b;
        }
LAB_1406d9877:
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            lVar17 = *plVar13;
            goto LAB_1406d98e4;
          }
        }
        goto LAB_1406d9091;
      }
      *param_2 = 0x10;
      plVar15 = (longlong *)param_2[1];
      if (plVar15 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_1406d982b:
        LOCK();
        plVar11 = plVar15 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        if (plVar13 == (longlong *)0x0) goto LAB_1406d9091;
        goto LAB_1406d9877;
      }
      LVar16.QuadPart = 0;
      lVar17 = 0x10;
    }
    if (lVar17 != 0) goto LAB_1406d909c;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      param_2[1] = 0;
      LOCK();
      plVar13 = plVar3 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  }
  else {
    LVar16.QuadPart = 0;
LAB_1406d909c:
    lVar10 = *(longlong *)(param_3.QuadPart + 0x20);
    uVar6 = 0;
    if (lVar10 != 0) {
      uVar12 = FUN_1406d9ab2();
      plVar13 = (longlong *)FUN_144718840(lVar10,uVar12);
      iVar8 = (**(code **)(*plVar13 + 0x38))(plVar13);
      iVar8 = iVar8 << 6;
      lVar10 = *(longlong *)(param_3.QuadPart + 0x20);
      if (lVar10 == 0) {
        uVar6 = 0;
      }
      else {
        uVar12 = FUN_1406d9ab2();
        plVar13 = (longlong *)FUN_144718840(lVar10,uVar12);
        uVar6 = (**(code **)(*plVar13 + 0x30))(plVar13);
      }
    }
    *(undefined1 *)(lVar17 + 0xb8) = uVar6;
    *(int *)(lVar17 + 0xbc) = iVar8;
    lVar10 = *(longlong *)(param_3.QuadPart + 0x20);
    iVar8 = 0;
    uVar6 = 0;
    if (lVar10 != 0) {
      uVar12 = FUN_1406d9ab2();
      plVar13 = (longlong *)FUN_144718840(lVar10,uVar12);
      iVar8 = (**(code **)(*plVar13 + 0x48))(plVar13);
      iVar8 = iVar8 << 6;
      lVar10 = *(longlong *)(param_3.QuadPart + 0x20);
      if (lVar10 == 0) {
        uVar6 = 0;
      }
      else {
        uVar12 = FUN_1406d9ab2();
        plVar13 = (longlong *)FUN_144718840(lVar10,uVar12);
        uVar6 = (**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    *(undefined1 *)(lVar17 + 0xb9) = uVar6;
    *(int *)(lVar17 + 0xc0) = iVar8;
    local_70 = param_3;
    local_68 = param_2;
    FUN_145af7e58(plVar3,&local_88);
  }
  if ((longlong *)LVar16.QuadPart != (longlong *)0x0) {
    FUN_1400020a8(LVar16.QuadPart);
  }
LAB_1406d8e68:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406d996e FUN_1406d996e body=66 status=ok
// SIG undefined FUN_1406d996e(void)

undefined8 * FUN_1406d996e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    uVar2 = FUN_1406d9ab2();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  }
  return param_2;
}



// FUNCTION 1406d99b0 FUN_1406d99b0 body=73 status=ok
// SIG undefined FUN_1406d99b0(void)

void FUN_1406d99b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1406d99f9 FUN_1406d99f9 body=131 status=ok
// SIG undefined FUN_1406d99f9(void)

void FUN_1406d99f9(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar3 = uVar1 | 0x100000;
  *param_3 = uVar3;
  if ((*(byte *)(*param_1 + 8) & 1) != 0) {
    uVar3 = uVar1 | 0x100008;
    *param_3 = uVar3;
  }
  if (DAT_14c75ed40 == 0) {
    uVar3 = uVar3 | 0x20020;
  }
  else {
    uVar2 = FUN_1406d9a7c(param_2);
    switch(uVar2) {
    case 1:
      uVar3 = *param_3 | 0x20;
      goto LAB_1406d9a5c;
    case 2:
      uVar3 = 0x10000;
      break;
    case 3:
      uVar3 = 0x20020;
      break;
    case 4:
      uVar3 = 0x8002;
      break;
    default:
      goto switchD_1406d9a53_default;
    }
    uVar3 = uVar3 | *param_3;
  }
LAB_1406d9a5c:
  *param_3 = uVar3;
switchD_1406d9a53_default:
  return;
}



// FUNCTION 1406d9a7c FUN_1406d9a7c body=54 status=ok
// SIG undefined FUN_1406d9a7c(void)

undefined1 FUN_1406d9a7c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = FUN_1406d9ab2();
    plVar4 = (longlong *)FUN_144718840(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001406d9aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    return uVar3;
  }
  return *(undefined1 *)(param_1 + 0x14);
}



// FUNCTION 1406d9ab2 FUN_1406d9ab2 body=228 status=ok
// SIG undefined FUN_1406d9ab2(void)

longlong FUN_1406d9ab2(void)

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
  if (DAT_14c968490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_146937f05;
    local_40 = FUN_1462797f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/SlateCore",L"FontFaceInterface",&DAT_14c968490,&DAT_146937f04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c968490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406d9b98 FUN_1406d9b98 body=247 status=ok
// SIG undefined FUN_1406d9b98(void)

longlong *
FUN_1406d9b98(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined2 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_7;
  *(undefined2 *)((longlong)param_1 + 0x26) = param_8;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1406d9c32;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if ((longlong *)*param_1 != (longlong *)0x0) {
      lVar4 = *(longlong *)*param_1;
      fVar8 = 1.0;
      if (((*(uint *)(lVar4 + 8) & 3) == 2) &&
         (iVar6 = *(int *)(*(longlong *)(lVar4 + 0x80) + 0x1c), 0x10000 < iVar6)) {
        fVar8 = (float)iVar6 * 1.5258789e-05;
      }
      *(float *)((longlong)param_1 + 0x1c) = fVar8;
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
LAB_1406d9c32:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 1406d9c90 FUN_1406d9c90 body=336 status=ok
// SIG undefined FUN_1406d9c90(void)

void FUN_1406d9c90(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xa8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar4 + 0xf;
        if (param_2 < 0xc3) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1406d9cfc;
              lVar1 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar5 & 0xfffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1406d9cfc:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4 >> 3;
    iVar6 = SUB164(auVar3 * ZEXT816(0xc30c30c30c30c31),8);
    iVar8 = 0x7fffffff;
    if ((int)param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0xa8,8);
  }
  return;
}



// FUNCTION 1406d9de0 FUN_1406d9de0 body=549 status=ok
// SIG undefined FUN_1406d9de0(void)

longlong *
FUN_1406d9de0(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_3 == 0) || ((*(byte *)(param_3 + 8) & 0x40) == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_98 = param_5;
  FUN_1406da352(local_88,param_3,0);
  plVar8 = (longlong *)(param_1 + 0xa0);
  iVar3 = FUN_1406da006(plVar8,local_78,local_88);
  if (iVar3 == -1) {
LAB_1406d9ef0:
    local_70 = local_88;
    FUN_145738a8a(plVar8,&local_64,local_78);
    lVar6 = *plVar8;
    lVar4 = (longlong)local_64 * 0x30;
  }
  else {
    lVar6 = *plVar8;
    lVar4 = (longlong)iVar3 * 0x30;
    if (lVar6 + lVar4 == 0) goto LAB_1406d9ef0;
  }
  lVar6 = lVar6 + lVar4;
  plVar8 = (longlong *)(lVar6 + 0x18);
  if (*plVar8 != 0) goto LAB_1406d9e92;
  plVar5 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149eda3b0;
  FUN_145738536(plVar5 + 2,param_3,param_4,param_5);
  if (plVar5 == (longlong *)0x0) {
    *plVar8 = 0x10;
    plVar7 = *(longlong **)(lVar6 + 0x20);
    if (plVar7 == (longlong *)0x0) goto LAB_1406d9e92;
    *(undefined8 *)(lVar6 + 0x20) = 0;
LAB_1406d9fbd:
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
    if (plVar5 == (longlong *)0x0) goto LAB_1406d9e92;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *plVar8 = (longlong)(plVar5 + 2);
    plVar7 = *(longlong **)(lVar6 + 0x20);
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      *(longlong **)(lVar6 + 0x20) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_1406d9fbd;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1406d9e92:
  *param_2 = *plVar8;
  lVar6 = *(longlong *)(lVar6 + 0x20);
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1406da006 FUN_1406da006 body=105 status=ok
// SIG undefined FUN_1406da006(void)

int FUN_1406da006(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(int *)(lVar2 + lVar4 + 8) == (int)param_3[1])) &&
           (*(int *)(lVar2 + lVar4 + 0xc) == *(int *)((longlong)param_3 + 0xc))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406da070 FUN_1406da070 body=630 status=ok
// SIG undefined FUN_1406da070(void)

longlong *
FUN_1406da070(longlong param_1,longlong *param_2,longlong param_3,uint param_4,undefined4 param_5,
             undefined4 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_3 == 0) ||
     (((param_4 & 1) != 0 &&
      (((*(uint *)(param_3 + 8) & 0x2001) != 1 ||
       (((*(uint *)(param_3 + 8) & 2) != 0 && (*(int *)(param_3 + 0x10) < 1)))))))) {
    *param_2 = *(longlong *)(param_1 + 0xf0);
    lVar5 = *(longlong *)(param_1 + 0xf8);
    goto LAB_1406da131;
  }
  local_98 = param_6;
  FUN_1406da352(local_88,param_3,param_4,param_5);
  plVar8 = (longlong *)(param_1 + 0x50);
  iVar3 = FUN_1406da2e8(plVar8,local_78,local_88);
  if (iVar3 == -1) {
LAB_1406da174:
    local_70 = local_88;
    FUN_1457386d0(plVar8,&local_64,local_78);
    lVar5 = *plVar8;
    lVar4 = (longlong)local_64 * 0x30;
  }
  else {
    lVar5 = *plVar8;
    lVar4 = (longlong)iVar3 * 0x30;
    if (lVar5 + lVar4 == 0) goto LAB_1406da174;
  }
  lVar5 = lVar5 + lVar4;
  plVar8 = (longlong *)(lVar5 + 0x18);
  if (*plVar8 == 0) {
    plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149eda390;
    local_98 = param_6;
    FUN_1457385ca(plVar6 + 2,param_3,param_4,param_5);
    if (plVar6 == (longlong *)0x0) {
      *plVar8 = 0x10;
      plVar7 = *(longlong **)(lVar5 + 0x20);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(lVar5 + 0x20) = 0;
LAB_1406da290:
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
        if (plVar6 != (longlong *)0x0) goto LAB_1406da211;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *plVar8 = (longlong)(plVar6 + 2);
      plVar7 = *(longlong **)(lVar5 + 0x20);
      if (plVar6 == plVar7) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      else {
        *(longlong **)(lVar5 + 0x20) = plVar6;
        if (plVar7 != (longlong *)0x0) goto LAB_1406da290;
      }
LAB_1406da211:
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  *param_2 = *plVar8;
  lVar5 = *(longlong *)(lVar5 + 0x20);
LAB_1406da131:
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406da2e8 FUN_1406da2e8 body=105 status=ok
// SIG undefined FUN_1406da2e8(void)

int FUN_1406da2e8(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(int *)(lVar2 + lVar4 + 8) == (int)param_3[1])) &&
           (*(int *)(lVar2 + lVar4 + 0xc) == *(int *)((longlong)param_3 + 0xc))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406da352 FUN_1406da352 body=420 status=ok
// SIG undefined FUN_1406da352(void)

ulonglong *
FUN_1406da352(ulonglong *param_1,ulonglong param_2,undefined4 param_3,float param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = param_2;
  fVar9 = 0.0;
  if (0.0 <= param_4) {
    fVar9 = param_4;
  }
  fVar8 = 0.0;
  if (0.0 <= param_5) {
    fVar8 = param_5;
  }
  *(undefined4 *)(param_1 + 1) = param_3;
  iVar1 = FUN_144b42fe0(((int)(fVar9 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar8 * 65536.0));
  uVar2 = iVar1 + 0x20 >> 6;
  *(uint *)((longlong)param_1 + 0xc) = uVar2;
  uVar3 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = (uint)param_1[1];
  uVar4 = uVar3 >> 0xd ^ (uVar4 >> 0x10 ^ uVar4) - uVar3;
  uVar5 = uVar4 << 8 ^ (-0x61c88647 - uVar3) - uVar4;
  uVar7 = uVar5 >> 0xd ^ (uVar3 - uVar4) - uVar5;
  uVar6 = uVar7 >> 0xc ^ (uVar4 - uVar5) - uVar7;
  uVar3 = uVar6 << 0x10 ^ (uVar5 - uVar7) - uVar6;
  uVar4 = uVar3 >> 5 ^ (uVar7 - uVar6) - uVar3;
  uVar5 = uVar4 >> 3 ^ (uVar6 - uVar3) - uVar4;
  uVar3 = uVar5 << 10 ^ (uVar3 - uVar4) - uVar5;
  uVar3 = uVar2 >> 0xd ^ (uVar3 >> 0xf ^ uVar4 - (uVar5 + uVar3)) - uVar2;
  uVar4 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar2 = uVar4 >> 0xd ^ (uVar2 - uVar3) - uVar4;
  uVar3 = uVar2 >> 0xc ^ (uVar3 - uVar4) - uVar2;
  uVar4 = uVar3 << 0x10 ^ (uVar4 - uVar2) - uVar3;
  uVar5 = uVar4 >> 5 ^ (uVar2 - uVar3) - uVar4;
  uVar2 = uVar5 >> 3 ^ (uVar3 - uVar4) - uVar5;
  uVar3 = uVar2 << 10 ^ (uVar4 - uVar5) - uVar2;
  *(uint *)(param_1 + 2) = uVar3 >> 0xf ^ uVar5 - (uVar2 + uVar3);
  return param_1;
}



// FUNCTION 1406da4f6 FUN_1406da4f6 body=523 status=ok
// SIG undefined FUN_1406da4f6(void)

void FUN_1406da4f6(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xa8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 4;
LAB_1406da51f:
    if (*(void **)((longlong)param_1 + 0xa0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xa0),(longlong)param_2 * 0x28);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0xac)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406da5d3;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_1406da5d3:
    uVar7 = uVar7 / 0x28;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0xac) = 0x7fffffff;
      uVar7 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xac) = uVar6;
      if (uVar6 < 5) goto LAB_1406da51f;
    }
    if (*(longlong *)((longlong)param_1 + 0xa0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xa0,0,uVar7,0x28);
      memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x28);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,uVar7,0x28);
  return;
}



// FUNCTION 1406da702 FUN_1406da702 body=1365 status=ok
// SIG undefined FUN_1406da702(void)

int * FUN_1406da702(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_144869a3c(param_1,iVar17);
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
    plVar6 = param_1 + 2;
    iVar9 = iVar21 + 1;
    iVar12 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar12 = iVar21;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar5 = iVar21;
        }
        else {
          uVar16 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar16) {
              uVar8 = uVar16;
            }
          }
          else {
            uVar8 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar8 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar16 <= iVar5) {
            iVar9 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar6,iVar5);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar6;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar19 = (longlong)iVar17;
    iVar21 = *(int *)(*param_1 + 4 + lVar19 * 0x10);
    *(int *)(param_1 + 6) = iVar21;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x10) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar16 = 1;
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar1;
  }
  iVar21 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar21 = iVar17;
  }
  puVar10[iVar21 >> 5] = puVar10[iVar21 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  lVar20 = *param_1;
  lVar19 = lVar19 * 0x10;
  puVar2 = (undefined8 *)(lVar20 + lVar19);
  puVar4 = (undefined4 *)param_3[1];
  uVar8 = *(uint *)*param_3;
  *(uint *)(lVar20 + lVar19) = uVar8;
  *(undefined4 *)(lVar20 + 4 + lVar19) = *puVar4;
  *(undefined4 *)(lVar20 + 8 + lVar19) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar18 != 0) && (uVar18 != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
    if (iVar21 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar21 * 0x10);
        if (*(uint *)(*param_1 + (longlong)iVar21 * 0x10) == uVar8) {
          *puVar3 = *puVar2;
          FUN_14694ff36(param_1,iVar17);
          iVar17 = iVar21;
          goto LAB_1406da8b1;
        }
        iVar21 = *(int *)(puVar3 + 1);
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar18) {
    uVar11 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar16 <= (int)param_1[9])) {
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)puVar2 + 0xc) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 1) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar17;
    goto LAB_1406da8b1;
  }
  *(uint *)(param_1 + 9) = uVar16;
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
    uVar16 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar16 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
LAB_1406da943:
    uVar8 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
           0xffffffff;
      uVar8 = uVar8 + 1;
    } while (uVar16 != uVar8);
  }
  else {
    if (uVar16 == 0) goto LAB_1406da8b1;
    FUN_1446efa72(plVar6,0,uVar16,4);
    if (0 < (int)uVar16) goto LAB_1406da943;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar11 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_1406da8b1;
        iVar9 = iVar9 + 0x20;
        uVar16 = puVar10[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar22 = uVar15 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 < iVar21) {
    uVar16 = 0xffffffff;
    do {
      lVar19 = *param_1;
      lVar20 = (longlong)iVar5 * 0x10;
      uVar22 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar19 + lVar20);
      iVar21 = (int)uVar22;
      *(int *)(lVar19 + 0xc + lVar20) = iVar21;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      *(undefined4 *)(lVar19 + 8 + lVar20) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar14;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar16 = ~(uint)uVar15 & uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar5 = (int)uVar11;
      lVar19 = (longlong)iVar5;
      uVar8 = puVar10[lVar19] & uVar16;
      if (uVar8 == 0) {
        iVar12 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar12 = iVar21 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar12 <= iVar5) break;
        lVar20 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar8 = puVar10[lVar19 + lVar20 + 1];
          if (uVar8 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar13 - lVar19 == lVar20) goto LAB_1406da8b1;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar20 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar22 = uVar15 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar5 = (iVar9 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar21);
  }
LAB_1406da8b1:
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 1406dac58 FUN_1406dac58 body=239 status=ok
// SIG undefined FUN_1406dac58(void)

undefined8 * FUN_1406dac58(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  puVar5 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0x100000000;
  *(undefined4 *)(param_1 + 5) = param_3;
  if ((longlong)(int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined8 *)*param_2;
    puVar6 = puVar3 + (longlong)(int)param_2[1] * 6;
    do {
      iVar1 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 4) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
        FUN_145738434(puVar5,iVar1);
      }
      puVar2 = (undefined8 *)param_1[3];
      if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
        puVar2 = puVar5;
      }
      puVar2[(longlong)iVar1 * 2] = *puVar3;
      puVar2[(longlong)iVar1 * 2 + 1] = puVar3 + 1;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar6);
    uVar4 = *(undefined4 *)(param_1 + 4);
    puVar3 = (undefined8 *)param_1[3];
  }
  local_38 = &LAB_1406db028;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  FUN_1406dad48(puVar5,uVar4);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406dad48 FUN_1406dad48 body=734 status=ok
// SIG undefined FUN_1406dad48(void)

void FUN_1406dad48(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_398 [44];
  int local_36c;
  undefined8 *local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar16 + fVar16);
    plVar12 = &local_358;
    do {
      puVar7 = (undefined8 *)*plVar12;
      puVar13 = (undefined8 *)plVar12[1];
      iVar11 = (int)plVar12[2];
      uVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar7) >> 4) + 1;
      puVar9 = puVar7;
      puVar10 = puVar7;
      puVar15 = puVar13;
      if (iVar11 != 0) {
LAB_1406dadef:
        if (8 < (int)uVar8) {
          uVar2 = puVar10[(ulonglong)(uVar8 >> 1) * 2];
          uVar3 = (puVar10 + (ulonglong)(uVar8 >> 1) * 2)[1];
          uVar4 = puVar10[1];
          puVar10[(ulonglong)(uVar8 >> 1) * 2] = *puVar10;
          (puVar10 + (ulonglong)(uVar8 >> 1) * 2)[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          puVar14 = puVar13 + 2;
          puVar9 = puVar10;
          local_36c = iVar11;
          local_368 = puVar7;
          local_360 = puVar15;
          local_58 = uVar2;
          uStack_50 = uVar3;
          do {
            puVar15 = puVar9 + 2;
            puVar5 = puVar9 + 2;
            do {
              puVar9 = puVar5;
              puVar7 = puVar15;
              if (puVar13 < puVar9) break;
              cVar6 = (*(code *)*param_3)(puVar10,puVar9);
              puVar15 = puVar7 + 2;
              puVar5 = puVar9 + 2;
            } while (cVar6 == '\0');
            puVar5 = puVar14 + -4;
            do {
              puVar1 = puVar14;
              puVar15 = puVar5;
              puVar14 = puVar1 + -2;
              if (puVar14 <= puVar10) break;
              cVar6 = (*(code *)*param_3)(puVar14,puVar10);
              puVar5 = puVar15 + -2;
            } while (cVar6 == '\0');
            if (puVar14 < puVar9) goto LAB_1406daeaa;
            uVar2 = *puVar9;
            uVar3 = puVar9[1];
            uVar4 = puVar1[-1];
            *puVar9 = *puVar14;
            puVar9[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar14 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar1 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar1 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar1 + -4) = uStack_50._4_4_;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while( true );
        }
        for (; puVar9 = puVar10, puVar7 = puVar10, puVar10 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar15 = puVar9, puVar7 = puVar7 + 2, puVar7 <= puVar13) {
            cVar6 = (*(code *)*param_3)(puVar15,puVar7);
            puVar9 = puVar7;
            if (cVar6 == '\0') {
              puVar9 = puVar15;
            }
          }
          local_58 = *puVar15;
          uStack_50 = puVar15[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          uVar2 = puVar13[1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        goto LAB_1406daf75;
      }
LAB_1406db00d:
      FUN_14694ec66(puVar9,uVar8,param_3);
LAB_1406daf75:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406daeaa:
  local_58 = *puVar10;
  uStack_50 = puVar10[1];
  uVar3 = local_58;
  uVar4 = uStack_50;
  uVar2 = puVar1[-1];
  *puVar10 = *puVar14;
  puVar10[1] = uVar2;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar14 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar1 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar1 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar1 + -4) = uStack_50._4_4_;
  iVar11 = local_36c + -1;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)puVar15 - (longlong)local_368 < (longlong)local_360 - (longlong)puVar7) {
    if (puVar9 < puVar13) {
      *plVar12 = (longlong)puVar9;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar11;
      plVar12 = plVar12 + 3;
    }
    puVar7 = puVar10;
    puVar9 = puVar10;
    puVar13 = puVar1 + -4;
    if (puVar14 <= puVar10 + 2) goto LAB_1406daf75;
  }
  else {
    if (puVar10 + 2 < puVar14) {
      *plVar12 = (longlong)puVar10;
      plVar12[1] = (longlong)(puVar1 + -4);
      *(int *)(plVar12 + 2) = iVar11;
      plVar12 = plVar12 + 3;
    }
    puVar15 = puVar13;
    if (puVar13 <= puVar9) goto LAB_1406daf75;
  }
  uVar8 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar7) >> 4) + 1;
  puVar10 = puVar9;
  if (iVar11 == 0) goto LAB_1406db00d;
  goto LAB_1406dadef;
}



// FUNCTION 1406db03a FUN_1406db03a body=433 status=ok
// SIG undefined FUN_1406db03a(void)

void FUN_1406db03a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x10 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1406db1ec FUN_1406db1ec body=433 status=ok
// SIG undefined FUN_1406db1ec(void)

void FUN_1406db1ec(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x10 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1406db39e FUN_1406db39e body=486 status=ok
// SIG undefined FUN_1406db39e(void)

void FUN_1406db39e(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 1406db586 FUN_1406db586 body=982 status=ok
// SIG undefined FUN_1406db586(void)

void FUN_1406db586(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar15 = FUN_140d5712e();
  lVar16 = FUN_140d5712e();
  uVar17 = *(undefined8 *)(lVar16 + 0x28);
  plVar20 = *(longlong **)(lVar16 + 0x30);
  if (plVar20 == (longlong *)0x0) {
    uVar17 = FUN_14142d806(uVar17);
    FUN_1406db95e(uVar15,&local_88,uVar17);
  }
  else {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    uVar17 = FUN_14142d806(uVar17);
    FUN_1406db95e(uVar15,&local_88,uVar17);
    LOCK();
    plVar18 = plVar20 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar2 = (int *)((longlong)plVar20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  local_a8 = param_1 + 7;
  iVar6 = *(int *)((longlong)param_1 + 0x44);
  FUN_145738ef1(param_1[7],(int)param_1[8]);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    FUN_14694ee50(local_a8);
  }
  plVar20 = param_1 + 9;
  iVar6 = *(int *)((longlong)param_1 + 0x54);
  FUN_145738ef1(param_1[9],(int)param_1[10]);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x54) != 0)) {
    FUN_14694ee50(plVar20);
  }
  lVar16 = *param_1;
  if (0 < *(int *)(lVar16 + 0x30)) {
    local_98 = param_1 + 1;
    lVar23 = 0;
    local_90 = plVar20;
    do {
      lVar22 = lVar23 + 2;
      if (lVar22 < (int)param_1[6]) {
        lVar16 = lVar23 * 0x38 + *(longlong *)(lVar16 + 0x28);
        plVar18 = (longlong *)param_1[5];
        if ((longlong *)param_1[5] == (longlong *)0x0) {
          plVar18 = local_98;
        }
        lVar9 = plVar18[lVar22 * 2];
        plVar18 = (longlong *)plVar18[lVar22 * 2 + 1];
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
          UNLOCK();
        }
        if (*(int *)(lVar16 + 0x30) < 2) {
LAB_1406db6a4:
          if (plVar20 != (longlong *)0x0) {
            iVar6 = *(int *)(lVar16 + 0x20);
            if ((longlong)iVar6 != 0) {
              lVar16 = *(longlong *)(lVar16 + 0x18);
              lVar22 = 0;
              local_a0 = lVar23;
              do {
                if (((*(char *)(lVar16 + lVar22) == '\x02') ||
                    (cVar5 = *(char *)(lVar16 + 8 + lVar22), cVar5 == '\x02')) ||
                   ((iVar7 = *(int *)(lVar16 + 0xc + lVar22), iVar8 = *(int *)(lVar16 + 4 + lVar22),
                    iVar8 == iVar7 || iVar8 < iVar7 &&
                    ((iVar8 != iVar7 || ((*(char *)(lVar16 + lVar22) != '\0' && (cVar5 != '\0'))))))
                   )) {
                  iVar7 = (int)plVar20[1];
                  *(uint *)(plVar20 + 1) = iVar7 + 1U;
                  if (*(uint *)((longlong)plVar20 + 0xc) < iVar7 + 1U) {
                    FUN_145738f3c(plVar20,iVar7);
                    lVar23 = local_a0;
                  }
                  lVar10 = *plVar20;
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                    UNLOCK();
                  }
                  puVar3 = (undefined4 *)(lVar16 + lVar22);
                  lVar24 = (longlong)iVar7 * 0x20;
                  uVar11 = puVar3[1];
                  uVar12 = puVar3[2];
                  uVar13 = puVar3[3];
                  puVar4 = (undefined4 *)(lVar10 + lVar24);
                  *puVar4 = *puVar3;
                  puVar4[1] = uVar11;
                  puVar4[2] = uVar12;
                  puVar4[3] = uVar13;
                  *(longlong *)(lVar10 + 0x10 + lVar24) = lVar9;
                  *(longlong **)(lVar10 + 0x18 + lVar24) = plVar18;
                }
                lVar22 = lVar22 + 0x10;
              } while ((longlong)iVar6 << 4 != lVar22);
            }
          }
        }
        else {
          local_78 = (undefined1 *)0x0;
          uStack_70 = 0;
          bVar14 = 1;
          FUN_1403de9f2(lVar16 + 0x28,&local_78,&DAT_149e06120,1);
          if ((longlong)(int)uStack_70 == 0) {
            uVar19 = 0;
          }
          else {
            lVar22 = (longlong)(int)uStack_70 * 0x10;
            puVar21 = local_78;
            do {
              lVar22 = lVar22 + -0x10;
              bVar14 = FUN_144a23846(&local_88,puVar21);
              if (bVar14 != 0) break;
              puVar21 = puVar21 + 0x10;
            } while (lVar22 != 0);
            bVar14 = bVar14 ^ 1;
            uVar19 = uStack_70 & 0xffffffff;
          }
          FUN_1447a1747(local_78,uVar19);
          if (local_78 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          plVar20 = local_a8;
          if (bVar14 == 0) goto LAB_1406db6a4;
        }
        plVar20 = local_90;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar18 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
      lVar23 = lVar23 + 1;
      lVar16 = *param_1;
    } while (lVar23 < *(int *)(lVar16 + 0x30));
  }
  local_78 = &LAB_1406dbdb8;
  FUN_1406dba29(param_1[7],(int)param_1[8],&local_78);
  local_78 = &LAB_1406dbdb8;
  FUN_1406dba29(param_1[9],(int)param_1[10],&local_78);
  FUN_1406db978(local_a8);
  FUN_1406db978(plVar20);
  FUN_1447a1747(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406db95e FUN_1406db95e body=26 status=ok
// SIG undefined FUN_1406db95e(void)

undefined8 FUN_1406db95e(longlong param_1,undefined8 param_2)

{
  FUN_1406dbdc2(*(undefined8 *)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 1406db978 FUN_1406db978 body=177 status=ok
// SIG undefined FUN_1406db978(void)

void FUN_1406db978(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  if (1 < iVar7) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x10 + lVar5) == *(longlong *)(lVar3 + 0x30 + lVar5)) {
        cVar4 = FUN_14694a640(lVar3 + lVar5,lVar3 + lVar5 + 0x20);
        uVar1 = *(uint *)(lVar3 + lVar5 + 0xc);
        if ((cVar4 != '\0') || (uVar1 + 1 == *(int *)(lVar3 + 0x24 + lVar5))) {
          uVar2 = *(uint *)(lVar3 + 0x2c + lVar5);
          if ((int)uVar1 < (int)uVar2) {
            uVar1 = uVar2;
          }
          *(ulonglong *)(lVar3 + lVar5) = ((ulonglong)*(uint *)(lVar3 + 4 + lVar5) << 0x20) + 1;
          *(ulonglong *)(lVar3 + 8 + lVar5) = ((ulonglong)uVar1 << 0x20) + 1;
          FUN_14694a75c(param_1,(int)lVar6 + 1);
          iVar7 = (int)param_1[1];
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < iVar7 + -1);
  }
  return;
}



// FUNCTION 1406dba29 FUN_1406dba29 body=909 status=ok
// SIG undefined FUN_1406dba29(void)

void FUN_1406dba29(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar17 + fVar17);
    plVar14 = &local_368;
    do {
      puVar13 = (undefined8 *)*plVar14;
      puVar11 = (undefined8 *)plVar14[1];
      iVar12 = (int)plVar14[2];
      uVar8 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar13) >> 5) + 1;
      puVar15 = puVar11;
      puVar16 = puVar13;
      if (iVar12 != 0) {
LAB_1406dbaf9:
        if (8 < (int)uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 1);
          uVar1 = puVar13[uVar9 * 4];
          uVar2 = (puVar13 + uVar9 * 4)[1];
          local_58 = puVar13[uVar9 * 4 + 2];
          uStack_50 = (puVar13 + uVar9 * 4 + 2)[1];
          uVar3 = *puVar13;
          uVar4 = puVar13[1];
          uVar5 = puVar13[3];
          puVar13[uVar9 * 4 + 2] = puVar13[2];
          (puVar13 + uVar9 * 4 + 2)[1] = uVar5;
          puVar13[uVar9 * 4] = uVar3;
          (puVar13 + uVar9 * 4)[1] = uVar4;
          local_68._0_4_ = (undefined4)uVar1;
          local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar2;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar13[2] = local_58;
          puVar13[3] = uStack_50;
          *(undefined4 *)puVar13 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar13 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_60._4_4_;
          local_380 = puVar15 + 4;
          local_388 = puVar13;
          local_68 = uVar1;
          uStack_60 = uVar2;
          do {
            puVar7 = local_388 + 4;
            puVar10 = puVar7;
            do {
              local_388 = puVar10;
              local_370 = puVar7;
              if (puVar15 < puVar10) break;
              cVar6 = (*(code *)*param_3)(puVar13,puVar10);
              puVar10 = local_388 + 4;
              puVar7 = local_370 + 4;
            } while (cVar6 == '\0');
            puVar10 = local_380 + -8;
            do {
              local_380 = local_380 + -4;
              local_378 = puVar10;
              if (local_380 <= puVar13) break;
              cVar6 = (*(code *)*param_3)(local_380,puVar13);
              puVar10 = local_378 + -4;
            } while (cVar6 == '\0');
            if (local_380 < local_388) goto LAB_1406dbccd;
            uVar1 = *local_388;
            uVar2 = local_388[1];
            local_58 = local_388[2];
            uStack_50 = local_388[3];
            uVar3 = *local_380;
            uVar4 = local_380[1];
            uVar5 = local_380[3];
            local_388[2] = local_380[2];
            local_388[3] = uVar5;
            *local_388 = uVar3;
            local_388[1] = uVar4;
            local_68._0_4_ = (undefined4)uVar1;
            local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar2;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            local_380[2] = local_58;
            local_380[3] = uStack_50;
            *(undefined4 *)local_380 = (undefined4)local_68;
            *(undefined4 *)((longlong)local_380 + 4) = local_68._4_4_;
            *(undefined4 *)(local_380 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)local_380 + 0xc) = uStack_60._4_4_;
            local_68 = uVar1;
            uStack_60 = uVar2;
          } while( true );
        }
        for (; puVar16 = puVar13, puVar11 = puVar13, puVar13 < puVar15; puVar15 = puVar15 + -4) {
          while (puVar10 = puVar16, puVar11 = puVar11 + 4, puVar11 <= puVar15) {
            cVar6 = (*(code *)*param_3)(puVar10,puVar11);
            puVar16 = puVar11;
            if (cVar6 == '\0') {
              puVar16 = puVar10;
            }
          }
          local_68 = *puVar10;
          uStack_60 = puVar10[1];
          local_58 = puVar10[2];
          uStack_50 = puVar10[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          uVar1 = *puVar15;
          uVar2 = puVar15[1];
          uVar3 = puVar15[3];
          puVar10[2] = puVar15[2];
          puVar10[3] = uVar3;
          *puVar10 = uVar1;
          puVar10[1] = uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar15[2] = local_58;
          puVar15[3] = uStack_50;
          *(undefined4 *)puVar15 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_1406dbb85;
      }
LAB_1406dbb9c:
      local_388 = puVar13;
      FUN_14694ee80(local_388,uVar8,param_3);
LAB_1406dbb85:
      plVar14 = plVar14 + -3;
    } while (&local_368 <= plVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406dbccd:
  local_68 = *puVar13;
  uStack_60 = puVar13[1];
  local_58 = puVar13[2];
  uStack_50 = puVar13[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  uVar1 = *local_380;
  uVar2 = local_380[1];
  uVar3 = local_380[3];
  puVar13[2] = local_380[2];
  puVar13[3] = uVar3;
  *puVar13 = uVar1;
  puVar13[1] = uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_380[2] = local_58;
  local_380[3] = uStack_50;
  *(undefined4 *)local_380 = (undefined4)local_68;
  *(undefined4 *)((longlong)local_380 + 4) = local_68._4_4_;
  *(undefined4 *)(local_380 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)local_380 + 0xc) = uStack_60._4_4_;
  iVar12 = iVar12 + -1;
  puVar10 = local_380 + -4;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)local_378 - (longlong)puVar16 < (longlong)puVar11 - (longlong)local_370) {
    if (local_388 < puVar15) {
      *plVar14 = (longlong)local_388;
      plVar14[1] = (longlong)puVar15;
      *(int *)(plVar14 + 2) = iVar12;
      plVar14 = plVar14 + 3;
    }
    puVar15 = local_378;
    puVar11 = puVar13;
    if (local_380 <= puVar13 + 4) goto LAB_1406dbb85;
  }
  else {
    if (puVar13 + 4 < local_380) {
      *plVar14 = (longlong)puVar13;
      plVar14[1] = (longlong)puVar10;
      *(int *)(plVar14 + 2) = iVar12;
      plVar14 = plVar14 + 3;
    }
    puVar10 = puVar15;
    puVar13 = local_388;
    puVar11 = local_370;
    if (puVar15 <= local_388) goto LAB_1406dbb85;
  }
  local_370 = puVar11;
  local_378 = puVar15;
  local_388 = puVar13;
  uVar8 = (int)((ulonglong)((longlong)local_378 - (longlong)local_370) >> 5) + 1;
  puVar11 = local_378;
  puVar13 = local_388;
  puVar15 = puVar10;
  puVar16 = local_370;
  if (iVar12 == 0) goto LAB_1406dbb9c;
  goto LAB_1406dbaf9;
}



// FUNCTION 1406dbdc2 FUN_1406dbdc2 body=5005 status=ok
// SIG undefined FUN_1406dbdc2(void)

/* WARNING: Removing unreachable block (ram,0x0001406dc912) */

longlong * FUN_1406dbdc2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  undefined2 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  longlong *plVar24;
  longlong **pplVar25;
  undefined8 *puVar26;
  int *piVar27;
  longlong lVar28;
  longlong lVar29;
  ushort uVar30;
  ulonglong uVar31;
  ushort uVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  longlong *plVar37;
  longlong *plVar38;
  ulonglong uVar39;
  longlong *plVar40;
  int iVar41;
  undefined8 *puVar42;
  longlong *plVar43;
  bool bVar44;
  float fVar45;
  undefined1 auStack_478 [40];
  longlong *local_450;
  longlong local_448;
  longlong *local_440;
  longlong *local_438;
  undefined1 local_429;
  longlong *local_428;
  undefined8 uStack_420;
  undefined8 *local_418;
  undefined8 uStack_410;
  void *local_408;
  ulonglong uStack_400;
  undefined2 *local_3f8;
  ulonglong uStack_3f0;
  void *local_3e8;
  ulonglong uStack_3e0;
  undefined2 *local_3d8;
  ulonglong uStack_3d0;
  longlong local_3c0 [2];
  longlong local_3b0;
  longlong *local_3a8;
  undefined8 uStack_3a0;
  void *local_398;
  ulonglong uStack_390;
  void *local_388;
  ulonglong uStack_380;
  void *local_378;
  ulonglong uStack_370;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_3b0 = param_1;
  FUN_140cd39b6(local_3c0);
  FUN_1406dd7f4(param_1);
  iVar15 = *(int *)(param_3 + 1);
  uVar39 = 0;
  iVar18 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar18 = 0;
  }
  if (0 < iVar18) {
    if (iVar15 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = (undefined2 *)*param_3;
    }
    lVar29 = 0;
    uVar39 = 0;
    do {
      uVar23 = ((uint)(0x19 < (ushort)puVar17[lVar29] - 0x61) * 0x20 + (uint)(ushort)puVar17[lVar29]
               ) - 0x20;
      uVar34 = (uint)(uVar39 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar39 ^ uVar23) & 0xff) * 4);
      uVar39 = (ulonglong)
               (uVar34 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar23 >> 8 & 0xff) * 4));
      lVar29 = lVar29 + 1;
    } while (iVar18 != (int)lVar29);
  }
  iVar15 = FUN_1457511aa((longlong *)(param_1 + 0xe0),uVar39,param_3);
  if ((iVar15 != -1) &&
     (lVar29 = (longlong)iVar15 * 0x28 + *(longlong *)(param_1 + 0xe0), lVar29 != 0)) {
    FUN_144a787a6(local_3c0,lVar29 + 0x10);
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_3d8 = (undefined2 *)0x0;
  uStack_3d0 = 0;
  local_3e8 = (void *)0x0;
  uStack_3e0 = 0;
  local_3f8 = (undefined2 *)0x0;
  uStack_3f0 = 0;
  local_408 = (void *)0x0;
  uStack_400 = 0;
  cVar14 = FUN_1406dd384(&local_3b0,local_3c0);
  local_440 = param_2;
  if (cVar14 != '\0') {
    local_418 = (undefined8 *)0x0;
    uStack_410 = 0;
    local_448 = param_1;
    if ((int)uStack_3e0 < 2) {
      if (1 < (int)uStack_3d0) {
        puVar17 = local_3f8;
        if ((int)uStack_3f0 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        iVar15 = (int)uStack_3f0 + -1;
        if ((int)uStack_3f0 == 0) {
          iVar15 = 0;
        }
        uVar16 = FUN_144a49b4a(iVar15,puVar17);
        iVar15 = FUN_140c9ecde((longlong *)(param_1 + 0x88),uVar16,&local_3f8);
        if (iVar15 != -1) {
          lVar28 = *(longlong *)(param_1 + 0x88);
          lVar29 = lVar28 + (longlong)iVar15 * 0x28;
          if (((lVar29 != 0) && (lVar28 + (longlong)iVar15 * 0x28 != -0x10)) &&
             ((longlong)*(int *)(lVar29 + 0x18) != 0)) {
            piVar27 = *(int **)(lVar29 + 0x10);
            piVar1 = piVar27 + *(int *)(lVar29 + 0x18);
            do {
              uVar39 = uStack_410;
              if (1 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x28 + (longlong)*piVar27 * 0x40)) {
                lVar29 = *(longlong *)(param_1 + 0x28) + (longlong)*piVar27 * 0x40;
                iVar15 = *(int *)(lVar29 + 0x38);
                if ((int)uStack_3d0 == iVar15) {
                  if (1 < (int)uStack_3d0) {
                    lVar28 = 0;
                    while( true ) {
                      uVar30 = *(ushort *)((longlong)local_3d8 + lVar28);
                      uVar31 = (ulonglong)uVar30;
                      uVar32 = *(ushort *)(*(longlong *)(lVar29 + 0x30) + lVar28);
                      if (uVar30 != uVar32) {
                        if ((uVar32 | uVar30) < 0x80) {
                          uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
                          uVar33 = (ulonglong)uVar32;
                          uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar33];
                          if ((&DAT_149e05da0)[uVar31] == (&DAT_149e05da0)[uVar33])
                          goto LAB_1406dc80e;
                        }
                        bVar44 = uVar30 == uVar32;
                        goto LAB_1406dc83f;
                      }
                      if (uVar30 == 0) break;
LAB_1406dc80e:
                      lVar28 = lVar28 + 2;
                    }
                  }
                }
                else {
                  bVar44 = iVar15 + (int)uStack_3d0 == 1;
LAB_1406dc83f:
                  param_2 = local_440;
                  param_1 = local_448;
                  if (!bVar44) goto LAB_1406dc788;
                }
                lVar29 = (longlong)(int)uStack_410;
                uVar23 = (int)uStack_410 + 1;
                uStack_410 = CONCAT44(uStack_410._4_4_,uVar23);
                if (uStack_410._4_4_ < uVar23) {
                  FUN_1406dd284(&local_418,uVar39 & 0xffffffff);
                }
                FUN_1467d7630(local_418 + lVar29 * 8);
                param_2 = local_440;
                param_1 = local_448;
              }
LAB_1406dc788:
              piVar27 = piVar27 + 1;
            } while (piVar27 != piVar1);
          }
        }
      }
      if ((int)uStack_410 == 0) {
        uStack_410 = CONCAT44(uStack_410._4_4_,1);
        if (uStack_410._4_4_ == 0) goto LAB_1406dbf32;
        goto LAB_1406dbf3e;
      }
    }
    else {
      uStack_410 = 1;
LAB_1406dbf32:
      FUN_1406dd284(&local_418,0);
LAB_1406dbf3e:
      pvVar2 = local_408;
      puVar26 = local_418;
      *local_418 = 0;
      lVar29 = (longlong)(int)uStack_400;
      *(int *)(local_418 + 1) = (int)uStack_400;
      if (lVar29 == 0) {
        *(undefined4 *)((longlong)local_418 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(local_418,uStack_400 & 0xffffffff,0);
        memcpy((void *)*puVar26,pvVar2,lVar29 * 2);
      }
      puVar17 = local_3f8;
      puVar26[2] = 0;
      lVar29 = (longlong)(int)uStack_3f0;
      *(int *)(puVar26 + 3) = (int)uStack_3f0;
      if (lVar29 == 0) {
        *(undefined4 *)((longlong)puVar26 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar26 + 2,uStack_3f0 & 0xffffffff,0);
        memcpy((void *)puVar26[2],puVar17,lVar29 * 2);
      }
      pvVar2 = local_3e8;
      puVar26[4] = 0;
      lVar29 = (longlong)(int)uStack_3e0;
      *(int *)(puVar26 + 5) = (int)uStack_3e0;
      if (lVar29 == 0) {
        *(undefined4 *)((longlong)puVar26 + 0x2c) = 0;
      }
      else {
        FUN_1446dd670(puVar26 + 4,uStack_3e0 & 0xffffffff,0);
        memcpy((void *)puVar26[4],pvVar2,lVar29 * 2);
      }
      puVar17 = local_3d8;
      puVar26[6] = 0;
      lVar29 = (longlong)(int)uStack_3d0;
      *(int *)(puVar26 + 7) = (int)uStack_3d0;
      if (lVar29 == 0) {
        *(undefined4 *)((longlong)puVar26 + 0x3c) = 0;
      }
      else {
        FUN_1446dd670(puVar26 + 6,uStack_3d0 & 0xffffffff,0);
        memcpy((void *)puVar26[6],puVar17,lVar29 * 2);
      }
    }
    local_428 = (longlong *)0x0;
    uStack_420 = 0;
    if ((int)uStack_410 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((int)uStack_410 * 3);
    }
    if ((int)uStack_410 != 0) {
      FUN_1406dd1ae(&local_428);
      if ((longlong)(int)uStack_410 != 0) {
        puVar42 = local_418 + (longlong)(int)uStack_410 * 8;
        puVar26 = local_418;
        do {
          FUN_1412abbc6(&local_a8,puVar26 + 2,puVar26 + 4,puVar26 + 6);
          if ((longlong)(int)uStack_a0 != 0) {
            lVar28 = (longlong)(int)uStack_a0 * 0x10 + local_a8;
            lVar29 = local_a8;
            do {
              local_378 = (void *)0x0;
              uStack_370 = 0;
              local_388 = (void *)0x0;
              uStack_380 = 0;
              local_398 = (void *)0x0;
              uStack_390 = 0;
              local_3a8 = (longlong *)0x0;
              uStack_3a0 = (longlong *)0x0;
              cVar14 = FUN_1406dd384(&local_3b0,lVar29,&local_3a8);
              if (cVar14 != '\0') {
                lVar21 = (longlong)(int)uStack_420;
                if (lVar21 != 0) {
                  plVar19 = local_428;
LAB_1406dc27e:
                  if ((int)plVar19[1] == (int)uStack_3a0) {
                    if (1 < (int)uStack_3a0) {
                      local_450 = local_3a8;
                      lVar36 = 0;
                      do {
                        uVar30 = *(ushort *)(*plVar19 + lVar36);
                        uVar32 = *(ushort *)((longlong)local_3a8 + lVar36);
                        if (uVar30 == uVar32) {
                          if (uVar30 == 0) break;
                        }
                        else {
                          if (0x7f < (uVar32 | uVar30)) {
                            iVar15 = (uint)uVar30 - (uint)uVar32;
                            goto LAB_1406dca79;
                          }
                          if ((&DAT_149e05da0)[uVar30] != (&DAT_149e05da0)[(uint)uVar32])
                          goto code_r0x0001406dca77;
                        }
                        lVar36 = lVar36 + 2;
                      } while( true );
                    }
                    goto LAB_1406dca81;
                  }
                  if ((int)plVar19[1] + (int)uStack_3a0 == 1) goto LAB_1406dca81;
                  goto LAB_1406dc298;
                }
LAB_1406dc0f8:
                uVar23 = (int)uStack_420 + 1;
                uStack_420 = CONCAT44(uStack_420._4_4_,uVar23);
                if (uStack_420._4_4_ < uVar23) {
                  FUN_1406dd284(&local_428);
                }
                plVar38 = local_3a8;
                plVar19 = local_428 + lVar21 * 8;
                local_428[lVar21 * 8] = 0;
                lVar36 = (longlong)(int)uStack_3a0;
                *(int *)(local_428 + lVar21 * 8 + 1) = (int)uStack_3a0;
                if (lVar36 == 0) {
                  *(undefined4 *)((longlong)plVar19 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(plVar19,(ulonglong)uStack_3a0 & 0xffffffff,0);
                  memcpy((void *)*plVar19,plVar38,lVar36 * 2);
                }
                pvVar2 = local_398;
                plVar19[2] = 0;
                lVar21 = (longlong)(int)uStack_390;
                *(int *)(plVar19 + 3) = (int)uStack_390;
                if (lVar21 == 0) {
                  *(undefined4 *)((longlong)plVar19 + 0x1c) = 0;
                }
                else {
                  FUN_1446dd670(plVar19 + 2,uStack_390 & 0xffffffff,0);
                  memcpy((void *)plVar19[2],pvVar2,lVar21 * 2);
                }
                pvVar2 = local_388;
                plVar19[4] = 0;
                lVar21 = (longlong)(int)uStack_380;
                *(int *)(plVar19 + 5) = (int)uStack_380;
                if (lVar21 == 0) {
                  *(undefined4 *)((longlong)plVar19 + 0x2c) = 0;
                }
                else {
                  FUN_1446dd670(plVar19 + 4,uStack_380 & 0xffffffff,0);
                  memcpy((void *)plVar19[4],pvVar2,lVar21 * 2);
                }
                pvVar2 = local_378;
                plVar19[6] = 0;
                lVar21 = (longlong)(int)uStack_370;
                *(int *)(plVar19 + 7) = (int)uStack_370;
                if (lVar21 == 0) {
                  *(undefined4 *)((longlong)plVar19 + 0x3c) = 0;
                  param_2 = local_440;
                }
                else {
                  FUN_1446dd670(plVar19 + 6,uStack_370 & 0xffffffff,0);
                  memcpy((void *)plVar19[6],pvVar2,lVar21 * 2);
                  param_2 = local_440;
                }
              }
LAB_1406dc1f4:
              if (local_378 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_388 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_398 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_3a8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              lVar29 = lVar29 + 0x10;
            } while (lVar29 != lVar28);
          }
          FUN_1447a1747(local_a8);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          puVar26 = puVar26 + 8;
          param_1 = local_448;
        } while (puVar26 != puVar42);
      }
    }
    plVar19 = local_428;
    puVar17 = local_3d8;
    if ((int)uStack_3d0 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    lVar29 = 0;
    while( true ) {
      uVar30 = *(ushort *)((longlong)puVar17 + lVar29);
      uVar39 = (ulonglong)uVar30;
      uVar32 = *(ushort *)((longlong)&DAT_149e179d4 + lVar29);
      if (uVar30 != uVar32) break;
      if (uVar30 == 0) goto LAB_1406dc39b;
LAB_1406dc322:
      lVar29 = lVar29 + 2;
    }
    if ((uVar32 | uVar30) < 0x80) {
      uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar39];
      uVar31 = (ulonglong)uVar32;
      uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar31];
      if ((&DAT_149e05da0)[uVar39] == (&DAT_149e05da0)[uVar31]) goto LAB_1406dc322;
    }
    if (uVar30 != uVar32) {
      lVar29 = 0;
      goto LAB_1406dc358;
    }
LAB_1406dc39b:
    local_429 = true;
    goto LAB_1406dc39d;
  }
  goto LAB_1406dc892;
code_r0x0001406dca77:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar30] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar32];
LAB_1406dca79:
  if (iVar15 == 0) {
LAB_1406dca81:
    param_2 = local_440;
    if ((int)((ulonglong)~((longlong)plVar19 - (longlong)local_428) >> 6) != 0) goto LAB_1406dc1f4;
    goto LAB_1406dc0f8;
  }
LAB_1406dc298:
  plVar19 = plVar19 + 8;
  if (plVar19 == local_428 + lVar21 * 8) goto LAB_1406dc0f8;
  goto LAB_1406dc27e;
LAB_1406dc358:
  uVar30 = *(ushort *)((longlong)puVar17 + lVar29);
  uVar23 = (uint)uVar30;
  uVar32 = *(ushort *)((longlong)&DAT_149e179da + lVar29);
  uVar34 = (uint)uVar32;
  if (uVar30 != uVar32) {
    if ((uVar32 | uVar30) < 0x80) {
      uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar30];
      uVar34 = (uint)(byte)(&DAT_149e05da0)[uVar32];
      if ((&DAT_149e05da0)[uVar30] == (&DAT_149e05da0)[uVar32]) goto LAB_1406dc370;
    }
    iVar15 = uVar23 - uVar34;
    goto LAB_1406dc7ac;
  }
  if (uVar30 == 0) goto LAB_1406dc7aa;
LAB_1406dc370:
  lVar29 = lVar29 + 2;
  goto LAB_1406dc358;
LAB_1406dd019:
  local_a8 = *plVar43;
  uStack_a0 = plVar43[1];
  local_98 = plVar43[2];
  uStack_90 = plVar43[3];
  local_88 = plVar43[4];
  uStack_80 = plVar43[5];
  local_78 = plVar43[6];
  uStack_70 = plVar43[7];
  lVar6 = local_a8;
  lVar7 = uStack_a0;
  lVar29 = *plVar40;
  lVar28 = plVar20[-7];
  lVar21 = plVar20[-6];
  lVar36 = plVar20[-5];
  lVar3 = plVar20[-4];
  lVar4 = plVar20[-3];
  lVar5 = plVar20[-1];
  plVar43[6] = plVar20[-2];
  plVar43[7] = lVar5;
  plVar43[4] = lVar3;
  plVar43[5] = lVar4;
  plVar43[2] = lVar21;
  plVar43[3] = lVar36;
  *plVar43 = lVar29;
  plVar43[1] = lVar28;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  plVar20[-2] = local_78;
  plVar20[-1] = uStack_70;
  plVar20[-4] = local_88;
  plVar20[-3] = uStack_80;
  plVar20[-6] = local_98;
  plVar20[-5] = uStack_90;
  *(undefined4 *)plVar40 = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar20 + -0x3c) = local_a8._4_4_;
  *(int *)(plVar20 + -7) = (int)uStack_a0;
  *(undefined4 *)((longlong)plVar20 + -0x34) = uStack_a0._4_4_;
  iVar15 = iVar15 + -1;
  plVar20 = plVar20 + -0x10;
  param_1 = local_448;
  local_a8 = lVar6;
  uStack_a0 = lVar7;
  if ((longlong)plVar24 - (longlong)plVar38 < (longlong)plVar37 - (longlong)local_438) {
    if (local_450 < plVar19) {
      *pplVar25 = local_450;
      pplVar25[1] = plVar19;
      *(int *)(pplVar25 + 2) = iVar15;
      pplVar25 = pplVar25 + 3;
    }
    plVar38 = plVar43;
    if (plVar40 <= plVar43 + 8) goto LAB_1406dc6cc;
  }
  else {
    if (plVar43 + 8 < plVar40) {
      *pplVar25 = plVar43;
      pplVar25[1] = plVar20;
      *(int *)(pplVar25 + 2) = iVar15;
      pplVar25 = pplVar25 + 3;
    }
    plVar24 = plVar19;
    plVar20 = plVar19;
    plVar43 = local_450;
    plVar38 = local_438;
    if (plVar19 <= local_450) goto LAB_1406dc6cc;
  }
  local_438 = plVar38;
  local_450 = plVar43;
  iVar18 = (int)((ulonglong)((longlong)plVar24 - (longlong)local_438) >> 6);
  uVar23 = iVar18 + 1;
  plVar19 = plVar20;
  plVar37 = plVar24;
  plVar38 = local_438;
  plVar43 = local_450;
  if (iVar15 == 0) goto LAB_1406dcaa2;
  goto LAB_1406dc5f0;
LAB_1406dc7aa:
  iVar15 = 0;
LAB_1406dc7ac:
  local_429 = iVar15 == 0;
LAB_1406dc39d:
  iVar15 = (int)uStack_420;
  uVar39 = (ulonglong)(int)uStack_420;
  if (1 < (longlong)uVar39) {
    memset(&local_398,0,0x2f0);
    local_3a8 = plVar19;
    uStack_3a0 = plVar19 + uVar39 * 8 + -8;
    fVar45 = logf((float)iVar15);
    local_398 = (void *)CONCAT44(local_398._4_4_,(int)(longlong)(fVar45 + fVar45));
    pplVar25 = &local_3a8;
    do {
      plVar38 = *pplVar25;
      plVar19 = pplVar25[1];
      iVar15 = *(int *)(pplVar25 + 2);
      iVar18 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar38) >> 6);
      uVar23 = iVar18 + 1;
      plVar37 = plVar19;
      plVar43 = plVar38;
      if (iVar15 != 0) {
LAB_1406dc5f0:
        param_1 = local_448;
        if (8 < (int)uVar23) {
          uVar39 = (ulonglong)(uVar23 >> 1);
          lVar29 = plVar43[uVar39 * 8];
          lVar28 = (plVar43 + uVar39 * 8)[1];
          local_98 = plVar43[uVar39 * 8 + 2];
          uStack_90 = (plVar43 + uVar39 * 8 + 2)[1];
          local_88 = plVar43[uVar39 * 8 + 4];
          uStack_80 = (plVar43 + uVar39 * 8 + 4)[1];
          local_78 = plVar43[uVar39 * 8 + 6];
          uStack_70 = (plVar43 + uVar39 * 8 + 6)[1];
          lVar21 = *plVar43;
          lVar36 = plVar43[1];
          lVar3 = plVar43[2];
          lVar4 = plVar43[3];
          lVar5 = plVar43[4];
          lVar6 = plVar43[5];
          lVar7 = plVar43[7];
          plVar43[uVar39 * 8 + 6] = plVar43[6];
          (plVar43 + uVar39 * 8 + 6)[1] = lVar7;
          plVar43[uVar39 * 8 + 4] = lVar5;
          (plVar43 + uVar39 * 8 + 4)[1] = lVar6;
          plVar43[uVar39 * 8 + 2] = lVar3;
          (plVar43 + uVar39 * 8 + 2)[1] = lVar4;
          plVar43[uVar39 * 8] = lVar21;
          (plVar43 + uVar39 * 8)[1] = lVar36;
          local_a8._0_4_ = (undefined4)lVar29;
          local_a8._4_4_ = (undefined4)((ulonglong)lVar29 >> 0x20);
          uStack_a0._0_4_ = (int)lVar28;
          uStack_a0._4_4_ = (undefined4)((ulonglong)lVar28 >> 0x20);
          plVar43[6] = local_78;
          plVar43[7] = uStack_70;
          plVar43[4] = local_88;
          plVar43[5] = uStack_80;
          plVar43[2] = local_98;
          plVar43[3] = uStack_90;
          *(undefined4 *)plVar43 = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar43 + 4) = local_a8._4_4_;
          *(int *)(plVar43 + 1) = (int)uStack_a0;
          *(undefined4 *)((longlong)plVar43 + 0xc) = uStack_a0._4_4_;
          plVar40 = plVar19 + 8;
          local_450 = plVar43;
          local_a8 = lVar29;
          uStack_a0 = lVar28;
          do {
            plVar20 = local_450 + 8;
            plVar22 = plVar20;
            do {
              local_450 = plVar22;
              local_438 = plVar20;
              if (plVar19 < plVar22) break;
              cVar14 = FUN_1406ddb96(&local_429,plVar43,plVar22);
              plVar22 = plVar22 + 8;
              plVar20 = local_438 + 8;
            } while (cVar14 == '\0');
            plVar22 = plVar40 + -0x10;
            do {
              plVar20 = plVar40;
              plVar24 = plVar22;
              plVar40 = plVar20 + -8;
              if (plVar40 <= plVar43) break;
              cVar14 = FUN_1406ddb96(&local_429,plVar40,plVar43);
              plVar22 = plVar24 + -8;
            } while (cVar14 == '\0');
            if (plVar40 < local_450) goto LAB_1406dd019;
            lVar29 = *local_450;
            lVar28 = local_450[1];
            local_98 = local_450[2];
            uStack_90 = local_450[3];
            local_88 = local_450[4];
            uStack_80 = local_450[5];
            local_78 = local_450[6];
            uStack_70 = local_450[7];
            lVar21 = *plVar40;
            lVar36 = plVar20[-7];
            lVar3 = plVar20[-6];
            lVar4 = plVar20[-5];
            lVar5 = plVar20[-4];
            lVar6 = plVar20[-3];
            lVar7 = plVar20[-1];
            local_450[6] = plVar20[-2];
            local_450[7] = lVar7;
            local_450[4] = lVar5;
            local_450[5] = lVar6;
            local_450[2] = lVar3;
            local_450[3] = lVar4;
            *local_450 = lVar21;
            local_450[1] = lVar36;
            local_a8._0_4_ = (undefined4)lVar29;
            local_a8._4_4_ = (undefined4)((ulonglong)lVar29 >> 0x20);
            uStack_a0._0_4_ = (int)lVar28;
            uStack_a0._4_4_ = (undefined4)((ulonglong)lVar28 >> 0x20);
            plVar20[-2] = local_78;
            plVar20[-1] = uStack_70;
            plVar20[-4] = local_88;
            plVar20[-3] = uStack_80;
            plVar20[-6] = local_98;
            plVar20[-5] = uStack_90;
            *(undefined4 *)plVar40 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar20 + -0x3c) = local_a8._4_4_;
            *(int *)(plVar20 + -7) = (int)uStack_a0;
            *(undefined4 *)((longlong)plVar20 + -0x34) = uStack_a0._4_4_;
            local_a8 = lVar29;
            uStack_a0 = lVar28;
          } while( true );
        }
        for (; plVar37 = plVar43, plVar38 = plVar43, plVar43 < plVar19; plVar19 = plVar19 + -8) {
          while (plVar40 = plVar37, plVar38 = plVar38 + 8, plVar38 <= plVar19) {
            cVar14 = FUN_1406ddb96(&local_429,plVar40,plVar38);
            plVar37 = plVar38;
            if (cVar14 == '\0') {
              plVar37 = plVar40;
            }
          }
          local_a8 = *plVar40;
          uStack_a0 = plVar40[1];
          local_98 = plVar40[2];
          uStack_90 = plVar40[3];
          local_88 = plVar40[4];
          uStack_80 = plVar40[5];
          local_78 = plVar40[6];
          uStack_70 = plVar40[7];
          lVar6 = local_a8;
          lVar7 = uStack_a0;
          lVar29 = *plVar19;
          lVar28 = plVar19[1];
          lVar21 = plVar19[2];
          lVar36 = plVar19[3];
          lVar3 = plVar19[4];
          lVar4 = plVar19[5];
          lVar5 = plVar19[7];
          plVar40[6] = plVar19[6];
          plVar40[7] = lVar5;
          plVar40[4] = lVar3;
          plVar40[5] = lVar4;
          plVar40[2] = lVar21;
          plVar40[3] = lVar36;
          *plVar40 = lVar29;
          plVar40[1] = lVar28;
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          plVar19[6] = local_78;
          plVar19[7] = uStack_70;
          plVar19[4] = local_88;
          plVar19[5] = uStack_80;
          plVar19[2] = local_98;
          plVar19[3] = uStack_90;
          *(undefined4 *)plVar19 = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
          *(int *)(plVar19 + 1) = (int)uStack_a0;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar6;
          uStack_a0 = lVar7;
        }
        goto LAB_1406dc6cc;
      }
LAB_1406dcaa2:
      local_450 = plVar43;
      param_1 = local_448;
      if (uVar23 != 0) {
        iVar15 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
        iVar18 = iVar15;
joined_r0x0001406dcac9:
        do {
          iVar41 = iVar15 * 2 + 1;
          if (iVar41 < (int)uVar23) {
            iVar35 = iVar15 * 2 + 2;
            if ((iVar35 < (int)uVar23) &&
               (cVar14 = FUN_1406ddb96(&local_429,local_450 + (longlong)iVar35 * 8,
                                       local_450 + (longlong)iVar41 * 8), cVar14 == '\0')) {
              iVar41 = iVar35;
            }
            plVar38 = local_450 + (longlong)iVar15 * 8;
            plVar19 = local_450 + (longlong)iVar41 * 8;
            cVar14 = FUN_1406ddb96(&local_429,plVar38,plVar19);
            if (cVar14 != '\0') {
              local_a8 = *plVar38;
              uStack_a0 = plVar38[1];
              local_98 = plVar38[2];
              uStack_90 = plVar38[3];
              local_88 = plVar38[4];
              uStack_80 = plVar38[5];
              local_78 = plVar38[6];
              uStack_70 = plVar38[7];
              lVar6 = local_a8;
              lVar7 = uStack_a0;
              lVar29 = *plVar19;
              lVar28 = plVar19[1];
              lVar21 = plVar19[2];
              lVar36 = plVar19[3];
              lVar3 = plVar19[4];
              lVar4 = plVar19[5];
              lVar5 = plVar19[7];
              plVar38[6] = plVar19[6];
              plVar38[7] = lVar5;
              plVar38[4] = lVar3;
              plVar38[5] = lVar4;
              plVar38[2] = lVar21;
              plVar38[3] = lVar36;
              *plVar38 = lVar29;
              plVar38[1] = lVar28;
              local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
              uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
              plVar19[6] = local_78;
              plVar19[7] = uStack_70;
              plVar19[4] = local_88;
              plVar19[5] = uStack_80;
              plVar19[2] = local_98;
              plVar19[3] = uStack_90;
              *(undefined4 *)plVar19 = (undefined4)local_a8;
              *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
              *(int *)(plVar19 + 1) = (int)uStack_a0;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
              iVar15 = iVar41;
              local_a8 = lVar6;
              uStack_a0 = lVar7;
              goto joined_r0x0001406dcac9;
            }
          }
          bVar44 = iVar18 != 0;
          iVar15 = iVar18 + -1;
          iVar18 = iVar15;
        } while (bVar44);
        param_1 = local_448;
        if (1 < (int)uVar23) {
          uVar39 = (ulonglong)uVar23 - 1;
          local_a8 = *local_450;
          uStack_a0 = local_450[1];
          local_98 = local_450[2];
          uStack_90 = local_450[3];
          local_88 = local_450[4];
          uStack_80 = local_450[5];
          local_78 = local_450[6];
          uStack_70 = local_450[7];
          lVar12 = local_78;
          lVar13 = uStack_70;
          lVar10 = local_88;
          lVar11 = uStack_80;
          lVar8 = local_98;
          lVar9 = uStack_90;
          lVar6 = local_a8;
          lVar7 = uStack_a0;
          lVar29 = local_450[uVar39 * 8];
          lVar28 = (local_450 + uVar39 * 8)[1];
          lVar21 = local_450[uVar39 * 8 + 2];
          lVar36 = (local_450 + uVar39 * 8 + 2)[1];
          lVar3 = local_450[uVar39 * 8 + 4];
          lVar4 = (local_450 + uVar39 * 8 + 4)[1];
          lVar5 = (local_450 + uVar39 * 8 + 6)[1];
          local_450[6] = local_450[uVar39 * 8 + 6];
          local_450[7] = lVar5;
          local_450[4] = lVar3;
          local_450[5] = lVar4;
          local_450[2] = lVar21;
          local_450[3] = lVar36;
          *local_450 = lVar29;
          local_450[1] = lVar28;
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          plVar19 = local_450 + uVar39 * 8 + 6;
          *(undefined4 *)plVar19 = (undefined4)local_78;
          *(undefined4 *)((longlong)plVar19 + 4) = local_78._4_4_;
          *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_70._4_4_;
          plVar19 = local_450 + uVar39 * 8 + 4;
          *(undefined4 *)plVar19 = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar19 + 4) = local_88._4_4_;
          *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_80._4_4_;
          plVar19 = local_450 + uVar39 * 8 + 2;
          *(undefined4 *)plVar19 = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar19 + 4) = local_98._4_4_;
          *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_90._4_4_;
          plVar19 = local_450 + uVar39 * 8;
          *(undefined4 *)plVar19 = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
          *(int *)(plVar19 + 1) = (int)uStack_a0;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar6;
          uStack_a0 = lVar7;
          local_98 = lVar8;
          uStack_90 = lVar9;
          local_88 = lVar10;
          uStack_80 = lVar11;
          local_78 = lVar12;
          uStack_70 = lVar13;
          if (uVar23 != 2) {
            do {
              iVar15 = 0;
              iVar41 = 1;
              iVar18 = 0;
              do {
                iVar15 = iVar15 + 2;
                iVar35 = iVar41;
                if (((longlong)iVar15 < (longlong)uVar39) &&
                   (cVar14 = FUN_1406ddb96(&local_429,local_450 + (longlong)iVar15 * 8,
                                           local_450 + (longlong)iVar41 * 8), cVar14 == '\0')) {
                  iVar35 = iVar15;
                }
                plVar38 = local_450 + (longlong)iVar18 * 8;
                plVar19 = local_450 + (longlong)iVar35 * 8;
                cVar14 = FUN_1406ddb96(&local_429,plVar38,plVar19);
                if (cVar14 == '\0') break;
                lVar29 = *plVar38;
                lVar28 = plVar38[1];
                lVar21 = plVar38[2];
                lVar36 = plVar38[3];
                lVar3 = plVar38[4];
                lVar4 = plVar38[5];
                lVar5 = plVar38[6];
                lVar6 = plVar38[7];
                lVar7 = *plVar19;
                lVar8 = plVar19[1];
                lVar9 = plVar19[2];
                lVar10 = plVar19[3];
                lVar11 = plVar19[4];
                lVar12 = plVar19[5];
                lVar13 = plVar19[7];
                plVar38[6] = plVar19[6];
                plVar38[7] = lVar13;
                plVar38[4] = lVar11;
                plVar38[5] = lVar12;
                plVar38[2] = lVar9;
                plVar38[3] = lVar10;
                *plVar38 = lVar7;
                plVar38[1] = lVar8;
                local_a8._0_4_ = (undefined4)lVar29;
                local_a8._4_4_ = (undefined4)((ulonglong)lVar29 >> 0x20);
                uStack_a0._0_4_ = (int)lVar28;
                uStack_a0._4_4_ = (undefined4)((ulonglong)lVar28 >> 0x20);
                local_98._0_4_ = (undefined4)lVar21;
                local_98._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
                uStack_90._0_4_ = (undefined4)lVar36;
                uStack_90._4_4_ = (undefined4)((ulonglong)lVar36 >> 0x20);
                local_88._0_4_ = (undefined4)lVar3;
                local_88._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
                uStack_80._0_4_ = (undefined4)lVar4;
                uStack_80._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
                local_78._0_4_ = (undefined4)lVar5;
                local_78._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
                uStack_70._0_4_ = (undefined4)lVar6;
                uStack_70._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
                *(undefined4 *)(plVar19 + 6) = (undefined4)local_78;
                *(undefined4 *)((longlong)plVar19 + 0x34) = local_78._4_4_;
                *(undefined4 *)(plVar19 + 7) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)plVar19 + 0x3c) = uStack_70._4_4_;
                *(undefined4 *)(plVar19 + 4) = (undefined4)local_88;
                *(undefined4 *)((longlong)plVar19 + 0x24) = local_88._4_4_;
                *(undefined4 *)(plVar19 + 5) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)plVar19 + 0x2c) = uStack_80._4_4_;
                *(undefined4 *)(plVar19 + 2) = (undefined4)local_98;
                *(undefined4 *)((longlong)plVar19 + 0x14) = local_98._4_4_;
                *(undefined4 *)(plVar19 + 3) = (undefined4)uStack_90;
                *(undefined4 *)((longlong)plVar19 + 0x1c) = uStack_90._4_4_;
                *(undefined4 *)plVar19 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
                *(int *)(plVar19 + 1) = (int)uStack_a0;
                *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
                iVar15 = iVar35 * 2;
                iVar41 = iVar35 * 2 + 1;
                local_a8 = lVar29;
                uStack_a0 = lVar28;
                local_98 = lVar21;
                uStack_90 = lVar36;
                local_88 = lVar3;
                uStack_80 = lVar4;
                local_78 = lVar5;
                uStack_70 = lVar6;
                iVar18 = iVar35;
              } while ((longlong)iVar41 < (longlong)uVar39);
              uVar31 = uVar39 - 1;
              local_a8 = *local_450;
              uStack_a0 = local_450[1];
              local_98 = local_450[2];
              uStack_90 = local_450[3];
              local_88 = local_450[4];
              uStack_80 = local_450[5];
              local_78 = local_450[6];
              uStack_70 = local_450[7];
              lVar12 = local_78;
              lVar13 = uStack_70;
              lVar10 = local_88;
              lVar11 = uStack_80;
              lVar8 = local_98;
              lVar9 = uStack_90;
              lVar6 = local_a8;
              lVar7 = uStack_a0;
              lVar29 = local_450[uVar31 * 8];
              lVar28 = (local_450 + uVar31 * 8)[1];
              lVar21 = local_450[uVar31 * 8 + 2];
              lVar36 = (local_450 + uVar31 * 8 + 2)[1];
              lVar3 = local_450[uVar31 * 8 + 4];
              lVar4 = (local_450 + uVar31 * 8 + 4)[1];
              lVar5 = (local_450 + uVar31 * 8 + 6)[1];
              local_450[6] = local_450[uVar31 * 8 + 6];
              local_450[7] = lVar5;
              local_450[4] = lVar3;
              local_450[5] = lVar4;
              local_450[2] = lVar21;
              local_450[3] = lVar36;
              *local_450 = lVar29;
              local_450[1] = lVar28;
              local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
              uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
              local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              plVar19 = local_450 + uVar31 * 8 + 6;
              *(undefined4 *)plVar19 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar19 + 4) = local_78._4_4_;
              *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_70._4_4_;
              plVar19 = local_450 + uVar31 * 8 + 4;
              *(undefined4 *)plVar19 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar19 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_80._4_4_;
              plVar19 = local_450 + uVar31 * 8 + 2;
              *(undefined4 *)plVar19 = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar19 + 4) = local_98._4_4_;
              *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_90._4_4_;
              plVar19 = local_450 + uVar31 * 8;
              *(undefined4 *)plVar19 = (undefined4)local_a8;
              *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
              *(int *)(plVar19 + 1) = (int)uStack_a0;
              *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
              bVar44 = 2 < uVar39;
              uVar39 = uVar31;
              param_1 = local_448;
              local_a8 = lVar6;
              uStack_a0 = lVar7;
              local_98 = lVar8;
              uStack_90 = lVar9;
              local_88 = lVar10;
              uStack_80 = lVar11;
              local_78 = lVar12;
              uStack_70 = lVar13;
            } while (bVar44);
          }
        }
      }
LAB_1406dc6cc:
      pplVar25 = pplVar25 + -3;
    } while (&local_3a8 <= pplVar25);
    uVar39 = uStack_420 & 0xffffffff;
    param_2 = local_440;
  }
  iVar15 = (int)uVar39;
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar39 & 0xffffffff);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar15) {
    FUN_1408be2c4(param_2,uVar39 & 0xffffffff);
    iVar15 = (int)uStack_420;
  }
  if (iVar15 == 0) {
    uVar39 = 0;
  }
  else {
    lVar29 = (longlong)iVar15 << 6;
    plVar19 = local_428;
    do {
      FUN_140e82a34(param_1);
      cVar14 = FUN_140e82874(*(undefined8 *)(param_1 + 0x138),plVar19);
      if (cVar14 != '\0') {
        iVar15 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
          FUN_1447a1bd6(param_2,iVar15);
        }
        lVar28 = *param_2;
        lVar21 = (longlong)iVar15 * 0x10;
        puVar26 = (undefined8 *)(lVar28 + lVar21);
        *(undefined8 *)(lVar28 + lVar21) = 0;
        iVar15 = (int)plVar19[1];
        pvVar2 = (void *)*plVar19;
        *(int *)(lVar28 + 8 + lVar21) = iVar15;
        if ((longlong)iVar15 == 0) {
          *(undefined4 *)((longlong)puVar26 + 0xc) = 0;
          param_1 = local_448;
        }
        else {
          FUN_1446dd670(puVar26,iVar15,0);
          memcpy((void *)*puVar26,pvVar2,(longlong)iVar15 * 2);
          param_1 = local_448;
        }
      }
      plVar19 = plVar19 + 8;
      lVar29 = lVar29 + -0x40;
    } while (lVar29 != 0);
    uVar39 = uStack_420 & 0xffffffff;
  }
  FUN_1406dd150(local_428,uVar39);
  if (local_428 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1406dd150(local_418,uStack_410 & 0xffffffff);
  if (local_418 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((int)param_2[1] != 0) goto LAB_1406dc4b6;
LAB_1406dc892:
  FUN_140056680(&local_3a8,&DAT_149e19e7a);
  iVar15 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
    FUN_1447a1bd6(local_440,iVar15);
  }
  lVar29 = *local_440;
  lVar28 = (longlong)iVar15 * 0x10;
  *(undefined8 *)(lVar29 + lVar28) = 0;
  *(longlong **)(lVar29 + lVar28) = local_3a8;
  local_3a8 = (longlong *)0x0;
  *(int *)(lVar29 + 8 + lVar28) = (int)uStack_3a0;
  *(undefined4 *)(lVar29 + 0xc + lVar28) = uStack_3a0._4_4_;
  uStack_3a0 = (longlong *)0x0;
  param_2 = local_440;
LAB_1406dc4b6:
  if (local_3d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_3f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_408 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406dd150 FUN_1406dd150 body=93 status=ok
// SIG undefined FUN_1406dd150(void)

void FUN_1406dd150(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1406dd1ae FUN_1406dd1ae body=214 status=ok
// SIG undefined FUN_1406dd1ae(void)

void FUN_1406dd1ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1406dd284 FUN_1406dd284 body=255 status=ok
// SIG undefined FUN_1406dd284(void)

void FUN_1406dd284(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1406dd384 FUN_1406dd384 body=1135 status=ok
// SIG undefined FUN_1406dd384(void)

ulonglong FUN_1406dd384(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  uint uVar8;
  undefined *unaff_RBX;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  iVar5 = (int)param_2[1];
  uVar15 = 0;
  iVar12 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar12 = 0;
  }
  if (0 < iVar12) {
    if (iVar5 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = (undefined2 *)*param_2;
    }
    lVar13 = 0;
    unaff_RBX = &DAT_14c75d150;
    do {
      uVar8 = ((uint)(ushort)puVar11[lVar13] + (uint)(0x19 < (ushort)puVar11[lVar13] - 0x61) * 0x20)
              - 0x20;
      uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar8) & 0xff) * 4);
      uVar15 = uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
      lVar13 = lVar13 + 1;
    } while (iVar12 != (int)lVar13);
  }
  if (*(int *)(lVar6 + 0x40) != *(int *)(lVar6 + 0x6c)) {
    lVar13 = lVar6 + 0x70;
    if (*(longlong *)(lVar6 + 0x78) != 0) {
      lVar13 = *(longlong *)(lVar6 + 0x78);
    }
    iVar12 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar6 + 0x80) - 1U & uVar15) * 4);
    if (iVar12 != -1) {
      lVar13 = *(longlong *)(lVar6 + 0x38);
LAB_1406dd46f:
      lVar10 = (longlong)iVar12 * 0x20;
      puVar14 = (undefined8 *)(lVar13 + lVar10);
      iVar12 = *(int *)(lVar13 + 8 + lVar10);
      if (iVar12 != iVar5) {
        if (iVar12 + iVar5 == 1) goto LAB_1406dd4ec;
        goto LAB_1406dd4d7;
      }
      if (1 < iVar5) {
        unaff_RBX = (undefined *)*puVar14;
        lVar16 = 0;
        do {
          uVar3 = *(ushort *)(unaff_RBX + lVar16);
          uVar4 = *(ushort *)(*param_2 + lVar16);
          if (uVar3 == uVar4) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar3)) {
              iVar12 = (uint)uVar3 - (uint)uVar4;
              goto LAB_1406dd4c8;
            }
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x0001406dd4c5;
          }
          lVar16 = lVar16 + 2;
        } while( true );
      }
      goto LAB_1406dd4ec;
    }
  }
LAB_1406dd648:
  FUN_14588f74c(lVar6,&local_50,param_2,0);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_50 != 0);
  if (local_50 != 0) {
    if ((undefined8 *)(local_50 + 0x28) != param_3) {
      iVar5 = *(int *)(local_50 + 0x30);
      pvVar7 = *(void **)(local_50 + 0x28);
      *(int *)(param_3 + 1) = iVar5;
      if (iVar5 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_3,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*param_3,pvVar7,(longlong)iVar5 * 2);
        }
      }
    }
    puVar14 = param_3 + 2;
    if (puVar14 != (undefined8 *)(local_50 + 0x78)) {
      iVar5 = *(int *)(local_50 + 0x80);
      pvVar7 = *(void **)(local_50 + 0x78);
      *(int *)(param_3 + 3) = iVar5;
      if (iVar5 == 0 && *(int *)((longlong)param_3 + 0x1c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar14,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar14,pvVar7,(longlong)iVar5 * 2);
        }
      }
    }
    puVar14 = param_3 + 4;
    if (puVar14 != (undefined8 *)(local_50 + 0xb8)) {
      iVar5 = *(int *)(local_50 + 0xc0);
      pvVar7 = *(void **)(local_50 + 0xb8);
      *(int *)(param_3 + 5) = iVar5;
      if (iVar5 == 0 && *(int *)((longlong)param_3 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x2c) = 0;
      }
      else {
        FUN_1446dd670(puVar14,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar14,pvVar7,(longlong)iVar5 * 2);
        }
      }
    }
    puVar14 = param_3 + 6;
    if (puVar14 != (undefined8 *)(local_50 + 0x98)) {
      iVar5 = *(int *)(local_50 + 0xa0);
      pvVar7 = *(void **)(local_50 + 0x98);
      *(int *)(param_3 + 7) = iVar5;
      if (iVar5 == 0 && *(int *)((longlong)param_3 + 0x3c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x3c) = 0;
      }
      else {
        FUN_1446dd670(puVar14,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar14,pvVar7,(longlong)iVar5 * 2);
        }
      }
    }
  }
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
LAB_1406dd620:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
code_r0x0001406dd4c5:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_1406dd4c8:
  if (iVar12 == 0) {
LAB_1406dd4ec:
    if ((puVar14 != (undefined8 *)0x0) && ((int *)(puVar14 + 2) != (int *)0x0)) {
      puVar14 = (undefined8 *)((longlong)*(int *)(puVar14 + 2) * 0x40 + *(longlong *)(lVar6 + 0x28))
      ;
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (puVar14 != param_3) {
        iVar5 = *(int *)(puVar14 + 1);
        pvVar7 = (void *)*puVar14;
        *(int *)(param_3 + 1) = iVar5;
        if (iVar5 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_3,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*param_3,pvVar7,(longlong)iVar5 * 2);
          }
        }
        iVar5 = *(int *)(puVar14 + 3);
        pvVar7 = (void *)puVar14[2];
        *(int *)(param_3 + 3) = iVar5;
        if (iVar5 == 0 && *(int *)((longlong)param_3 + 0x1c) == 0) {
          *(undefined4 *)((longlong)param_3 + 0x1c) = 0;
        }
        else {
          FUN_1446dd670(param_3 + 2,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)param_3[2],pvVar7,(longlong)iVar5 * 2);
          }
        }
        iVar5 = *(int *)(puVar14 + 5);
        pvVar7 = (void *)puVar14[4];
        *(int *)(param_3 + 5) = iVar5;
        if (iVar5 == 0 && *(int *)((longlong)param_3 + 0x2c) == 0) {
          *(undefined4 *)((longlong)param_3 + 0x2c) = 0;
        }
        else {
          FUN_1446dd670(param_3 + 4,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)param_3[4],pvVar7,(longlong)iVar5 * 2);
          }
        }
        iVar5 = *(int *)(puVar14 + 7);
        pvVar7 = (void *)puVar14[6];
        *(int *)(param_3 + 7) = iVar5;
        if (iVar5 == 0 && *(int *)((longlong)param_3 + 0x3c) == 0) {
          *(undefined4 *)((longlong)param_3 + 0x3c) = 0;
        }
        else {
          FUN_1446dd670(param_3 + 6,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)param_3[6],pvVar7,(longlong)iVar5 * 2);
          }
        }
      }
      goto LAB_1406dd620;
    }
    goto LAB_1406dd648;
  }
LAB_1406dd4d7:
  iVar12 = *(int *)(lVar13 + 0x18 + lVar10);
  if (iVar12 == -1) goto LAB_1406dd648;
  goto LAB_1406dd46f;
}



// FUNCTION 1406dd7f4 FUN_1406dd7f4 body=927 status=ok
// SIG undefined FUN_1406dd7f4(void)

void FUN_1406dd7f4(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [3];
  uint local_80;
  longlong *local_78;
  undefined2 **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((DAT_14c872ce0 != 0 && *(char *)(param_1 + 0xd8) == '\0') &&
     (*(char *)(DAT_14c872ce0 + 9) == '\x01')) {
    *(undefined1 *)(param_1 + 0xd8) = 1;
    FUN_14626a1f4(local_98 + 2);
    uVar8 = local_80;
    local_c0 = param_1 + 0xe0;
    if ((uint)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114)) < local_80) {
      if ((int)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)local_80);
      }
      FUN_140b80270(local_c0,local_80);
      iVar4 = 1;
      if (3 < uVar8) {
        uVar8 = (uVar8 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x128) == 0) || (*(int *)(param_1 + 0x128) < iVar4)) {
        *(int *)(param_1 + 0x128) = iVar4;
        FUN_140b7fdd8(local_c0);
      }
    }
    if ((longlong)(int)local_80 != 0) {
      local_b0 = (longlong)(int)local_80 * 0x10 + local_98[2];
      local_b8 = param_1 + 0x70;
      lVar9 = local_98[2];
      do {
        local_98[0] = 0;
        local_98[1] = 0;
        local_a8 = (undefined2 *)0x0;
        uStack_a0 = 0;
        FUN_140056680(&local_78,&DAT_149e06120);
        local_d0 = 0;
        local_d8 = 0;
        cVar3 = FUN_1407cdbc6(lVar9,&local_78,local_98);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') {
          uVar8 = 0;
          iVar4 = (int)uStack_a0 + -1;
          if ((int)uStack_a0 == 0) {
            iVar4 = 0;
          }
          if (0 < iVar4) {
            puVar7 = &DAT_149dfb77a;
            if ((int)uStack_a0 != 0) {
              puVar7 = local_a8;
            }
            lVar11 = 0;
            do {
              uVar5 = ((uint)(ushort)puVar7[lVar11] +
                      (uint)(0x19 < (ushort)puVar7[lVar11] - 0x61) * 0x20) - 0x20;
              uVar8 = uVar8 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar5) & 0xff) * 4);
              uVar8 = uVar8 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
              lVar11 = lVar11 + 1;
            } while (iVar4 != (int)lVar11);
          }
          if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
            lVar11 = *(longlong *)(param_1 + 0x78);
            if (*(longlong *)(param_1 + 0x78) == 0) {
              lVar11 = local_b8;
            }
            iVar4 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar8) * 4);
            if (iVar4 != -1) {
              lVar11 = *(longlong *)(param_1 + 0x38);
LAB_1406dda3e:
              lVar10 = (longlong)iVar4 * 0x20;
              iVar4 = *(int *)(lVar11 + 8 + lVar10);
              if (iVar4 != (int)uStack_a0) {
                if (iVar4 + (int)uStack_a0 == 1) goto LAB_1406ddac6;
                goto LAB_1406ddab1;
              }
              if (1 < (int)uStack_a0) {
                lVar12 = 0;
                do {
                  uVar1 = *(ushort *)(*(longlong *)(lVar11 + lVar10) + lVar12);
                  uVar2 = *(ushort *)((longlong)local_a8 + lVar12);
                  if (uVar1 == uVar2) {
                    if (uVar1 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar2 | uVar1)) {
                      iVar4 = (uint)uVar1 - (uint)uVar2;
                      goto LAB_1406ddaa3;
                    }
                    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                    goto code_r0x0001406ddaa0;
                  }
                  lVar12 = lVar12 + 2;
                } while( true );
              }
              goto LAB_1406ddac6;
            }
          }
        }
LAB_1406ddaf8:
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != local_b0);
    }
    cVar3 = FUN_1467d74bc(local_c0);
    if (cVar3 != '\0') {
      uVar8 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
      iVar4 = 1;
      if (3 < uVar8) {
        uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar9 & 0x1f);
      }
      *(int *)(param_1 + 0x128) = iVar4;
      FUN_140b7fdd8(local_c0);
    }
    FUN_1447a1747(local_98[2],local_80);
    if (local_98[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001406ddaa0:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1406ddaa3:
  if (iVar4 == 0) {
LAB_1406ddac6:
    local_78 = local_98;
    local_70 = &local_a8;
    FUN_1411f1c38(local_c0,local_64,&local_78,0);
    goto LAB_1406ddaf8;
  }
LAB_1406ddab1:
  iVar4 = *(int *)(lVar11 + 0x18 + lVar10);
  if (iVar4 == -1) goto LAB_1406ddaf8;
  goto LAB_1406dda3e;
}



// FUNCTION 1406ddb96 FUN_1406ddb96 body=300 status=ok
// SIG undefined FUN_1406ddb96(void)

bool FUN_1406ddb96(char *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  if (*param_1 == '\0') {
    iVar10 = *(int *)(param_3 + 0x28);
    iVar9 = *(int *)(param_3 + 0x38);
    bVar11 = false;
    bVar12 = false;
  }
  else {
    if (*(int *)(param_2 + 0x28) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_2 + 0x20);
    }
    lVar5 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar6 + lVar5);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)&DAT_149e18ec8 + lVar5);
      uVar7 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1406ddbed;
        }
        iVar3 = uVar4 - uVar7;
        goto LAB_1406ddc13;
      }
      if (uVar1 == 0) break;
LAB_1406ddbed:
      lVar5 = lVar5 + 2;
    }
    iVar3 = 0;
LAB_1406ddc13:
    iVar10 = *(int *)(param_3 + 0x28);
    if (iVar10 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_3 + 0x20);
    }
    iVar9 = *(int *)(param_3 + 0x38);
    lVar5 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar6 + lVar5);
      uVar7 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)&DAT_149e18ec8 + lVar5);
      uVar4 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1406ddc40;
        }
        iVar8 = uVar7 - uVar4;
        goto LAB_1406ddc6a;
      }
      if (uVar1 == 0) break;
LAB_1406ddc40:
      lVar5 = lVar5 + 2;
    }
    iVar8 = 0;
LAB_1406ddc6a:
    bVar11 = iVar3 == 0;
    bVar12 = iVar8 == 0;
  }
  return (byte)((1 < iVar10) * '\x02' + (1 < iVar9) * '\x04' | bVar12) <=
         (byte)((1 < *(int *)(param_2 + 0x38)) * '\x04' + (1 < *(int *)(param_2 + 0x28)) * '\x02' |
               bVar11);
}



// FUNCTION 1406ddcc2 FUN_1406ddcc2 body=501 status=ok
// SIG undefined FUN_1406ddcc2(void)

longlong FUN_1406ddcc2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4,
                      undefined8 param_5,longlong *param_6,undefined8 param_7,undefined4 param_8)

{
  ushort *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar9 = &DAT_149dfb77a;
  puVar8 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar8 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(param_1,puVar8,1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(param_1 + 0x20) = *param_4;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x34) = param_5;
  *(undefined4 *)(param_1 + 0x3c) = param_8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x200000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_145739258(param_1,param_6);
  FUN_140d2be42(&local_60,param_2);
  if (local_58 != 0) {
    puVar9 = (undefined2 *)CONCAT44(uStack_5c,local_60);
  }
  FUN_1446f470e(&local_50,puVar9,1);
  *(undefined8 *)(param_1 + 8) = local_50;
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_3;
  iVar6 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar6 = 0;
  }
  lVar12 = (longlong)iVar6;
  lVar10 = lVar2 + lVar12 * 2 + 2;
  lVar13 = lVar12 * -2;
  do {
    lVar11 = lVar2;
    if (lVar13 == 0) break;
    puVar1 = (ushort *)(lVar10 + -4);
    lVar10 = lVar10 + -2;
    lVar13 = lVar13 + 2;
  } while ((0x3f < *puVar1) ||
          (lVar11 = lVar10, (1L << ((byte)*puVar1 & 0x3f) & 0x400400000000000U) == 0));
  iVar7 = iVar6 - (int)((ulonglong)(lVar11 - lVar2) >> 1);
  if (iVar6 <= iVar7) {
    iVar7 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  FUN_1446f82e2(&local_60,iVar6,(lVar2 + lVar12 * 2) - (ulonglong)(uint)(iVar6 * 2),1);
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_5c,local_60);
  FUN_1406ddeb8(&DAT_14c927a10,&local_60,param_7);
  *(undefined4 *)(param_1 + 0x30) = local_60;
  FUN_140958ed1(*param_6,(int)param_6[1]);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1406ddeb8 FUN_1406ddeb8 body=210 status=ok
// SIG undefined FUN_1406ddeb8(void)

undefined8 FUN_1406ddeb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined1 *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_34 = 2;
    iVar2 = 0;
  }
  else {
    FUN_140204e64(local_48,local_38,0);
    puVar1 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar1 = local_48;
    }
    memcpy(puVar1,_Src,lVar3 << 2);
    iVar2 = local_38;
  }
  puVar1 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar1 = local_48;
  }
  FUN_1406de246(puVar1,iVar2);
  FUN_1406ddf8c(param_1,param_2,local_48);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ddf8c FUN_1406ddf8c body=530 status=ok
// SIG undefined FUN_1406ddf8c(void)

int * FUN_1406ddf8c(longlong param_1,int *param_2,int *param_3)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = param_3[4];
  piVar4 = *(int **)(param_3 + 2);
  if (*(int **)(param_3 + 2) == (int *)0x0) {
    piVar4 = param_3;
  }
  iVar6 = iVar1;
  if (1 < (longlong)iVar1) {
    lVar7 = (longlong)iVar1 * 4 + -4;
    piVar2 = piVar4;
    piVar9 = piVar4;
    do {
      piVar3 = piVar2;
      if ((*piVar2 != piVar9[1]) && (piVar3 = piVar2 + 1, piVar9 != piVar2)) {
        *piVar3 = piVar9[1];
      }
      piVar9 = piVar9 + 1;
      lVar7 = lVar7 + -4;
      piVar2 = piVar3;
    } while (lVar7 != 0);
    iVar6 = param_3[4];
    iVar1 = (int)((ulonglong)((longlong)piVar3 + (4 - (longlong)piVar4)) >> 2);
    uVar8 = iVar1 - iVar6;
    if (uVar8 != 0 && iVar6 <= iVar1) {
      param_3[4] = iVar1;
      if ((uint)(param_3[5] - iVar6) < uVar8) {
        FUN_140fadf14(param_3);
      }
      piVar4 = *(int **)(param_3 + 2);
      if (*(int **)(param_3 + 2) == (int *)0x0) {
        piVar4 = param_3;
      }
      memset(piVar4 + iVar6,0,(longlong)(int)uVar8 << 2);
      goto LAB_1406ddfd9;
    }
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 < iVar6) {
    param_3[4] = iVar1;
    FUN_14686007e(param_3);
  }
LAB_1406ddfd9:
  *param_2 = -1;
  iVar1 = param_3[4];
  if ((longlong)iVar1 != 0) {
    local_40 = *(undefined8 **)(param_3 + 2);
    puVar5 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      puVar5 = &local_48;
      local_48 = *(undefined8 *)param_3;
    }
    param_3[2] = 0;
    param_3[3] = 0;
    local_38 = iVar1;
    local_34 = param_3[5];
    param_3[4] = 0;
    param_3[5] = 2;
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar8 = *(int *)((longlong)puVar5 + lVar7) + (uVar8 >> 2) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8;
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar1 * 4 != lVar7);
    SRWLock = (PSRWLOCK)(param_1 + 0x50);
    AcquireSRWLockShared(SRWLock);
    iVar1 = FUN_1406de1a0(param_1,uVar8,&local_48);
    *param_2 = iVar1;
    ReleaseSRWLockShared(SRWLock);
    if (iVar1 == -1) {
      AcquireSRWLockExclusive(SRWLock);
      iVar1 = FUN_1406de1a0(param_1,uVar8,&local_48);
      *param_2 = iVar1;
      if (iVar1 == -1) {
        FUN_145738fc2(param_1,param_2,uVar8,&local_48);
      }
      ReleaseSRWLockExclusive(SRWLock);
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406de1a0 FUN_1406de1a0 body=166 status=ok
// SIG undefined FUN_1406de1a0(void)

int FUN_1406de1a0(longlong *param_1,uint param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  void *_Buf1;
  int iVar5;
  void *_Buf2;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      iVar1 = *(int *)((longlong)param_3 + 0x10);
      _Buf2 = *(void **)((longlong)param_3 + 8);
      if (*(void **)((longlong)param_3 + 8) == (void *)0x0) {
        _Buf2 = param_3;
      }
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        if (*(int *)(lVar2 + 0x10 + lVar6) == iVar1) {
          if (iVar1 == 0) {
            return iVar5;
          }
          _Buf1 = *(void **)(lVar2 + lVar6 + 8);
          if (_Buf1 == (void *)0x0) {
            _Buf1 = (void *)(lVar2 + lVar6);
          }
          iVar3 = memcmp(_Buf1,_Buf2,(longlong)iVar1 << 2);
          if (iVar3 == 0) {
            return iVar5;
          }
        }
        iVar5 = *(int *)(lVar2 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406de246 FUN_1406de246 body=550 status=ok
// SIG undefined FUN_1406de246(void)

void FUN_1406de246(longlong param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      piVar2 = (int *)*plVar8;
      piVar9 = (int *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar2) >> 2);
      piVar7 = piVar2;
      piVar13 = piVar9;
      if (iVar11 != 0) {
LAB_1406de309:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          iVar4 = piVar2[uVar5];
          piVar2[uVar5] = *piVar2;
          *piVar2 = iVar4;
          piVar6 = piVar9 + 1;
          piVar3 = piVar2;
          do {
            piVar1 = piVar3 + 1;
            piVar10 = piVar3 + 1;
            do {
              piVar3 = piVar10;
              piVar14 = piVar1;
              if (piVar9 < piVar3) break;
              piVar1 = piVar14 + 1;
              piVar10 = piVar3 + 1;
            } while (*piVar3 <= *piVar2);
            piVar1 = piVar6 + -2;
            do {
              piVar10 = piVar6;
              piVar15 = piVar1;
              piVar6 = piVar10 + -1;
              if (piVar6 <= piVar2) break;
              piVar1 = piVar15 + -1;
            } while (*piVar2 <= *piVar6);
            if (piVar6 < piVar3) goto LAB_1406de37f;
            iVar4 = *piVar3;
            *piVar3 = *piVar6;
            *piVar6 = iVar4;
          } while( true );
        }
        if (piVar2 < piVar9) {
          do {
            piVar7 = piVar2;
            if (piVar2 + 1 <= piVar9) {
              piVar13 = piVar2 + 1;
              iVar11 = *piVar2;
              do {
                iVar4 = *piVar13;
                iVar12 = iVar11;
                if (iVar11 <= iVar4) {
                  iVar12 = iVar4;
                }
                if (iVar11 < iVar4) {
                  piVar7 = piVar13;
                }
                piVar13 = piVar13 + 1;
                iVar11 = iVar12;
              } while (piVar13 <= piVar9);
            }
            iVar11 = *piVar7;
            *piVar7 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar2 < piVar9);
        }
        goto LAB_1406de451;
      }
LAB_1406de466:
      FUN_1467ae310(piVar2);
LAB_1406de451:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1406de37f:
  iVar4 = *piVar2;
  *piVar2 = *piVar6;
  *piVar6 = iVar4;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar15 - (longlong)piVar7 < (longlong)piVar13 - (longlong)piVar14) {
    if (piVar3 < piVar9) {
      *plVar8 = (longlong)piVar3;
      plVar8[1] = (longlong)piVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar14 = piVar2;
    if (piVar6 <= piVar2 + 1) goto LAB_1406de451;
  }
  else {
    if (piVar2 + 1 < piVar6) {
      *plVar8 = (longlong)piVar2;
      plVar8[1] = (longlong)piVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar2 = piVar3;
    piVar10 = piVar9;
    piVar15 = piVar9;
    if (piVar9 <= piVar3) goto LAB_1406de451;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar14) >> 2);
  piVar7 = piVar14;
  piVar9 = piVar10;
  piVar13 = piVar15;
  if (iVar11 == 0) goto LAB_1406de466;
  goto LAB_1406de309;
}



// FUNCTION 1406de46e FUN_1406de46e body=523 status=ok
// SIG undefined FUN_1406de46e(void)

void FUN_1406de46e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  uVar3 = local_60;
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar9 = *local_78;
        lVar12 = (longlong)iVar4 * 0x20;
        lVar2 = lVar9 + lVar12;
        lVar6 = *(longlong *)(lVar9 + 8 + lVar12);
        if (lVar6 == 0) {
          lVar6 = lVar2;
        }
        lVar9 = (longlong)*(int *)(lVar9 + 0x10 + lVar12);
        if (lVar9 == 0) {
          uVar11 = 0;
        }
        else {
          lVar12 = 0;
          uVar11 = 0;
          do {
            uVar11 = uVar11 ^ *(int *)(lVar6 + lVar12) + (uVar11 >> 2) + uVar11 * 0x40 + 0x9e3779b9;
            lVar12 = lVar12 + 4;
          } while (lVar9 * 4 != lVar12);
        }
        uVar10 = (longlong)(int)uVar11 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar10;
        *(int *)(lVar2 + 0x1c) = iVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406de67a FUN_1406de67a body=93 status=ok
// SIG undefined FUN_1406de67a(void)

void FUN_1406de67a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
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
  FUN_145739686();
  return;
}



// FUNCTION 1406de6e0 FUN_1406de6e0 body=144 status=ok
// SIG undefined FUN_1406de6e0(void)

undefined8 FUN_1406de6e0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb26518;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb26518 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406de772 FUN_1406de772 body=2889 status=ok
// SIG undefined FUN_1406de772(void)

void FUN_1406de772(longlong param_1)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  double *pdVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  code **ppcVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
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
  float fVar30;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  code **local_490;
  undefined1 *local_488;
  undefined8 local_480;
  wchar_t *local_478;
  code *local_470;
  undefined1 *local_468;
  code **local_460;
  code *local_458;
  code *local_450;
  undefined1 local_441;
  longlong *local_440;
  longlong local_438;
  longlong local_430;
  code **local_428;
  longlong local_420;
  longlong local_418;
  undefined1 local_410 [4];
  undefined4 local_40c;
  undefined4 local_36c;
  byte local_363;
  undefined1 local_358 [24];
  undefined4 local_340;
  undefined1 local_310 [8];
  longlong *local_308;
  longlong local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  code *local_2c0 [56];
  code **local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_441 = *(undefined1 *)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x98) = 1;
  dVar20 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0xc0),0x4076800000000000);
  dVar21 = (double)FUN_144719204(*(undefined8 *)(param_1 + 200),0x4076800000000000);
  dVar22 = sin(dVar20 * 0.017453292519943295);
  dVar20 = cos(dVar20 * 0.017453292519943295);
  dVar23 = sin(dVar21 * 0.017453292519943295);
  dVar21 = cos(dVar21 * 0.017453292519943295);
  fVar1 = *(float *)(param_1 + 0xa4);
  local_2d8 = (double)fVar1;
  local_2c8 = dVar22 * local_2d8;
  local_2d0 = dVar23 * dVar20 * local_2d8;
  local_2d8 = local_2d8 * dVar21 * dVar20;
  local_2c0[0] = *(code **)(param_1 + 0xe0);
  FUN_1400b5020(local_310,&DAT_14cbc2058,local_2c0);
  local_418 = local_300;
  LOCK();
  *(int *)(local_300 + 8) = *(int *)(local_300 + 8) + 1;
  UNLOCK();
  local_420 = local_2e8;
  LOCK();
  *(int *)(local_2e8 + 8) = *(int *)(local_2e8 + 8) + 1;
  UNLOCK();
  if (local_308 == local_2f0) {
    local_440 = (longlong *)0x0;
  }
  else {
    local_438 = param_1 + 0xa8;
    local_428 = (code **)(param_1 + 0xe8);
    local_430 = param_1 + 0x148;
    fVar30 = 1.1754944e-38;
    local_440 = (longlong *)0x0;
    plVar15 = local_308;
    do {
      lVar7 = plVar15[2];
      lVar8 = *(longlong *)(lVar7 + 8);
      if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
        FUN_1456cec3c(lVar8);
      }
      plVar6 = *(longlong **)(lVar7 + 0x10);
      if ((plVar6 != (longlong *)0x0 && lVar8 != 0) &&
         (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(), plVar6 != (longlong *)0x0)) {
        pcVar3 = *(code **)(*plVar6 + 0x10);
        if (pcVar3 == (code *)&LAB_144a13144) {
          plVar13 = plVar6 + 0x25d;
        }
        else if (pcVar3 == (code *)&LAB_144a1313c) {
          plVar13 = plVar6 + 0x13;
        }
        else {
          plVar13 = (longlong *)(*pcVar3)(plVar6);
        }
        if (((char)plVar13[3] != '\x01') || ((char)plVar13[8] == '\0')) {
          pcVar3 = *(code **)(*plVar6 + 0x10);
          if (pcVar3 == (code *)&LAB_144a13144) {
            plVar13 = plVar6 + 0x25d;
          }
          else if (pcVar3 == (code *)&LAB_144a1313c) {
            plVar13 = plVar6 + 0x13;
          }
          else {
            plVar13 = (longlong *)(*pcVar3)(plVar6);
          }
          if ((char)plVar13[8] == '\0') {
            pcVar3 = *(code **)(*plVar6 + 0x10);
            if (pcVar3 == (code *)&LAB_144a13144) {
              puVar12 = (uint *)(plVar6 + 0x25d);
            }
            else if (pcVar3 == (code *)&LAB_144a1313c) {
              puVar12 = (uint *)(plVar6 + 0x13);
            }
            else {
              puVar12 = (uint *)(*pcVar3)(plVar6);
            }
            if (((((puVar12[1] != 0) && (uVar2 = *puVar12, -1 < (int)uVar2)) &&
                 ((int)uVar2 < DAT_14c9647dc)) &&
                ((plVar13 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar12[1])))) &&
               (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
                ((plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0 &&
                 ((*(byte *)((longlong)plVar13 + 0x61) & 1) == 0)))))) {
              if (DAT_14cb22240 == 0) {
                local_2c0[0] = FUN_1449e2820;
                local_450 = FUN_14081d0ea;
                local_458 = (code *)&LAB_1464376fa;
                local_468 = &LAB_147f28935;
                local_470 = FUN_146437c39;
                local_478 = L"Engine";
                local_480 = 0;
                local_488 = (undefined1 *)CONCAT44(local_488._4_4_,0x10004001);
                local_490 = (code **)CONCAT44(local_490._4_4_,8);
                local_498 = 0x28;
                local_460 = local_2c0;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
              }
              lVar7 = (**(code **)(*plVar13 + 0x288))(plVar13,DAT_14cb22240);
              if (lVar7 == 0) {
LAB_1406deb43:
                lVar8 = 0;
              }
              else {
                if (DAT_14cb22240 == 0) {
                  local_2c0[0] = FUN_1449e2820;
                  local_450 = FUN_14081d0ea;
                  local_458 = (code *)&LAB_1464376fa;
                  local_468 = &LAB_147f28935;
                  local_470 = FUN_146437c39;
                  local_478 = L"Engine";
                  local_480 = 0;
                  local_488 = (undefined1 *)CONCAT44(local_488._4_4_,0x10004001);
                  local_490 = (code **)CONCAT44(local_490._4_4_,8);
                  local_498 = 0x28;
                  local_460 = local_2c0;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
                }
                lVar8 = FUN_144718840(lVar7,DAT_14cb22240);
                if (lVar7 == lVar8) goto LAB_1406deb43;
              }
              if (lVar8 != *(longlong *)(param_1 + 0x30)) {
                if (DAT_14cb56270 == 0) {
                  local_2c0[0] = FUN_1449e2820;
                  local_450 = FUN_14081d0ea;
                  local_458 = FUN_1427b09ee;
                  local_468 = &LAB_148630fef;
                  local_470 = FUN_1464b6a91;
                  local_478 = L"Engine";
                  local_480 = 0;
                  local_488 = (undefined1 *)CONCAT44(local_488._4_4_,0x10004001);
                  local_490 = (code **)CONCAT44(local_490._4_4_,8);
                  local_498 = 0x28;
                  local_460 = local_2c0;
                  FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                &DAT_148630fee);
                }
                plVar9 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,DAT_14cb56270);
                if (plVar9 != (longlong *)0x0) {
                  if (DAT_14cb56270 == 0) {
                    local_2c0[0] = FUN_1449e2820;
                    local_450 = FUN_14081d0ea;
                    local_458 = FUN_1427b09ee;
                    local_468 = &LAB_148630fef;
                    local_470 = FUN_1464b6a91;
                    local_478 = L"Engine";
                    local_480 = 0;
                    local_488 = (undefined1 *)CONCAT44(local_488._4_4_,0x10004001);
                    local_490 = (code **)CONCAT44(local_490._4_4_,8);
                    local_498 = 0x28;
                    local_460 = local_2c0;
                    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,
                                  &DAT_148630fee);
                  }
                  plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb56270);
                  if ((plVar10 != (longlong *)0x0 && plVar9 != plVar10) &&
                     (cVar4 = (**(code **)(*plVar10 + 0x40))(plVar10), cVar4 == '\0')) {
                    lVar7 = plVar13[0x39];
                    if (lVar7 == 0) {
                      pdVar11 = (double *)&DAT_14c8464e0;
                      dVar24 = DAT_14c8464f0;
                    }
                    else {
                      pdVar11 = (double *)(lVar7 + 0x260);
                      dVar24 = *(double *)(lVar7 + 0x270);
                    }
                    dVar24 = dVar24 - *(double *)(param_1 + 0xb8);
                    dVar26 = pdVar11[1] - *(double *)(param_1 + 0xb0);
                    dVar25 = *pdVar11 - *(double *)(param_1 + 0xa8);
                    dVar27 = dVar25 * dVar25 + dVar26 * dVar26;
                    dVar28 = dVar24 * dVar24 + dVar27;
                    dVar29 = dVar28 / (double)(fVar1 * fVar1);
                    if (dVar29 <= 0.0) {
                      dVar29 = 0.0;
                    }
                    if (0.0 < (float)(1.0 - dVar29)) {
                      dVar28 = 1.0 / SQRT(dVar28);
                      fVar18 = (float)(dVar24 * dVar28 * dVar22 +
                                      dVar25 * dVar28 * dVar21 * dVar20 +
                                      dVar26 * dVar28 * dVar23 * dVar20);
                      if (10000.0 <= dVar27) {
                        if (0.707 <= fVar18) goto LAB_1406dece1;
                      }
                      else if (0.0 <= fVar18) {
LAB_1406dece1:
                        lVar7 = *(longlong *)(param_1 + 0x158);
                        if (*(longlong *)(param_1 + 0x158) == 0) {
                          lVar7 = local_430;
                        }
                        if ((longlong)*(int *)(param_1 + 0x160) != 0) {
                          lVar8 = 0;
                          do {
                            if (*(int *)(lVar7 + lVar8) == *(int *)((longlong)plVar13 + 0xc))
                            goto LAB_1406decbd;
                            lVar8 = lVar8 + 4;
                          } while ((longlong)*(int *)(param_1 + 0x160) * 4 != lVar8);
                        }
                        local_100 = (code **)0x0;
                        local_f8 = 0x800000000;
                        pcVar3 = *(code **)(*plVar6 + 0x10);
                        if (pcVar3 == (code *)&LAB_144a13144) {
                          plVar6 = plVar6 + 0x25d;
                        }
                        else if (pcVar3 == (code *)&LAB_144a1313c) {
                          plVar6 = plVar6 + 0x13;
                        }
                        else {
                          plVar6 = (longlong *)(*pcVar3)(plVar6);
                        }
                        FUN_1447c2ee4(plVar6,local_2c0);
                        local_498 = *(undefined4 *)(param_1 + 0xa0);
                        local_488 = (undefined1 *)0x0;
                        local_490 = local_2c0;
                        fVar19 = (float)FUN_1441df72e(param_1,local_438,&local_2d8,
                                                      *(undefined8 *)(param_1 + 0xd8));
                        fVar18 = fVar30;
                        plVar6 = local_440;
                        if (0.0 < fVar19) {
                          ppcVar16 = local_100;
                          if (local_100 == (code **)0x0) {
                            ppcVar16 = local_2c0;
                          }
                          if ((longlong)(int)local_f8 != 0) {
                            lVar7 = (longlong)(int)local_f8 * 0x38;
                            do {
                              memset(local_410,0,0x100);
                              local_340 = 0xffffffff;
                              local_40c = 0x3f800000;
                              local_36c = 0xffffffff;
                              local_488 = &DAT_14cad0f10;
                              local_490 = local_428;
                              local_498 = 3;
                              FUN_1400b50cc(*(undefined8 *)(param_1 + 0xe0),local_410,local_438,
                                            ppcVar16);
                              if (((local_363 & 1) == 0) ||
                                 (plVar6 = (longlong *)FUN_14485cccc(local_358), plVar6 == plVar13))
                              {
                                fVar18 = fVar19 + (float)(1.0 - dVar29);
                                plVar6 = plVar13;
                                if (fVar18 <= fVar30) {
                                  fVar18 = fVar30;
                                  plVar6 = local_440;
                                }
                                break;
                              }
                              ppcVar16 = ppcVar16 + 7;
                              lVar7 = lVar7 + -0x38;
                              plVar6 = local_440;
                            } while (lVar7 != 0);
                          }
                        }
                        local_440 = plVar6;
                        fVar30 = fVar18;
                        if (local_100 != (code **)0x0) {
                          FUN_1400020a8();
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
LAB_1406decbd:
      do {
        plVar15 = (longlong *)*plVar15;
        if (plVar15 == (longlong *)0x0) break;
        lVar7 = FUN_1447c2c38(plVar15[2]);
      } while (lVar7 != *local_2f8);
    } while (plVar15 != local_2f0);
  }
  LOCK();
  *(int *)(local_420 + 8) = *(int *)(local_420 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_418 + 8) = *(int *)(local_418 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_2e8 + 8) = *(int *)(local_2e8 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_300 + 8) = *(int *)(local_300 + 8) + -1;
  UNLOCK();
  if (local_440 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)local_440 + 0xc);
    *(uint *)(param_1 + 0x90) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar17 = iVar5 == 0;
      if (bVar17) {
        *(int *)(lVar7 + 0x10) = iVar14;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar5 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0x94) = iVar5;
  *(undefined1 *)(param_1 + 0x98) = local_441;
  if ((local_f0 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406df2bc FUN_1406df2bc body=242 status=ok
// SIG undefined FUN_1406df2bc(void)

undefined8 FUN_1406df2bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      lVar1 = param_2 + lVar8;
      lVar2 = param_3 + lVar8;
      FUN_140427308(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined4 *)(lVar2 + 0x2c);
      uVar5 = *(undefined4 *)(lVar2 + 0x30);
      uVar6 = *(undefined4 *)(lVar2 + 0x34);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = uVar4;
      *(undefined4 *)(lVar1 + 0x30) = uVar5;
      *(undefined4 *)(lVar1 + 0x34) = uVar6;
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0x40 + lVar8);
        _Src = *(void **)(param_3 + 0x38 + lVar8);
        *(int *)(param_2 + 0x40 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x44 + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0x44 + lVar8) = 0;
        }
        else {
          puVar7 = (undefined8 *)(param_2 + lVar8 + 0x38);
          FUN_1446dd670(puVar7,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar7,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      FUN_1406df3ae(param_2 + lVar8 + 0x48,param_3 + lVar8 + 0x48);
      *(undefined2 *)(param_2 + lVar8 + 0x58) = *(undefined2 *)(param_3 + lVar8 + 0x58);
      lVar8 = lVar8 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406df3ae FUN_1406df3ae body=93 status=ok
// SIG undefined FUN_1406df3ae(void)

undefined8 * FUN_1406df3ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140298c7d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406df4e0(param_1,iVar1);
      FUN_1406df40b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1406df40b FUN_1406df40b body=135 status=ok
// SIG undefined FUN_1406df40b(void)

void FUN_1406df40b(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      *(undefined2 *)(param_1 + -0x40) = 0;
      *(undefined8 *)(param_1 + -0x3c) = 0;
      *(undefined8 *)(param_1 + -0x30) = 0;
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined4 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined4 *)(param_1 + -0x38) = *(undefined4 *)(param_2 + -0x38);
      *(undefined8 *)(param_1 + -0x40) = *(undefined8 *)(param_2 + -0x40);
      FUN_1447715ec(param_1 + -0x30,param_2 + -0x30);
      *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + -8);
      FUN_1406df492(param_1,param_2);
      param_1 = param_1 + 0x70;
      param_2 = param_2 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406df492 FUN_1406df492 body=78 status=ok
// SIG undefined FUN_1406df492(void)

void FUN_1406df492(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  if ((*(longlong *)(param_2 + 0x10) != 0) || (*(int *)(param_2 + 0x18) != 0)) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1406df4e0 FUN_1406df4e0 body=229 status=ok
// SIG undefined FUN_1406df4e0(void)

void FUN_1406df4e0(longlong param_1,int param_2,int param_3)

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
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1406df5c6 FUN_1406df5c6 body=298 status=ok
// SIG undefined FUN_1406df5c6(void)

void FUN_1406df5c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FUN_1406df764();
  iVar3 = *(int *)(param_1 + 0x4f8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x4f0);
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(lVar4 + lVar9);
      if (lVar7 != 0) {
        uVar6 = FUN_1406df6f0();
        cVar5 = FUN_1448093f4(lVar7,uVar6);
        lVar7 = *(longlong *)(lVar4 + lVar9);
        if (cVar5 == '\0') {
          uVar6 = FUN_1406df72a();
          cVar5 = FUN_1448093f4(lVar7,uVar6);
          if (cVar5 == '\0') goto LAB_1406df62e;
          lVar7 = *(longlong *)(lVar4 + lVar9);
          plVar8 = *(longlong **)(lVar4 + 8 + lVar9);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          lVar7 = FUN_140cd3166(lVar7 + 0x58);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          *(longlong *)(param_1 + 0xe80) = lVar7;
        }
        else {
          plVar8 = *(longlong **)(lVar4 + 8 + lVar9);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          lVar7 = FUN_140c01bae(lVar7 + 0x58);
          if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar7);
          }
          *(longlong *)(param_1 + 0xe88) = lVar7;
        }
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
      }
LAB_1406df62e:
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  return;
}



// FUNCTION 1406df6f0 FUN_1406df6f0 body=57 status=ok
// SIG undefined FUN_1406df6f0(void)

void FUN_1406df6f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a300 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a300 = FUN_140002ddd(FUN_146525c23,uVar1,L"InventoryMaterialParamsDataAssetAspect");
  }
  return;
}



// FUNCTION 1406df72a FUN_1406df72a body=57 status=ok
// SIG undefined FUN_1406df72a(void)

void FUN_1406df72a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a340 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a340 = FUN_140002ddd(FUN_146525d3b,uVar1,L"InventoryMaterialsDataAssetAspect");
  }
  return;
}



// FUNCTION 1406df764 FUN_1406df764 body=183 status=ok
// SIG undefined FUN_1406df764(void)

void FUN_1406df764(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1406df934();
  lVar3 = param_1[0x1a2];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x1a1];
    lVar4 = 0;
    do {
      (**(code **)(*param_1 + 0x8c8))(param_1,*(undefined8 *)(lVar1 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  if ((param_1[0x1a9] != 0) && (*(char *)((longlong)param_1 + 0xd44) != -1)) {
                    /* WARNING: Could not recover jumptable at 0x0001406df818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x850))(param_1,1);
    return;
  }
  lVar3 = param_1[0x1a2];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x1a1];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      *(byte *)(lVar2 + 0x78) = *(byte *)(lVar2 + 0x78) & 0xf7;
      FUN_140cf5864(lVar2);
      FUN_140cf57c4(lVar2);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1406df81c FUN_1406df81c body=117 status=ok
// SIG undefined FUN_1406df81c(void)

void FUN_1406df81c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xbf0);
  if ((char)uVar2 != '\0') {
    lVar3 = 8;
    uVar4 = 0;
    do {
      if (((int)uVar4 < (int)uVar2) &&
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + lVar3), plVar1 != (longlong *)0x0
         )) {
        (**(code **)(*plVar1 + 0x380))(plVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0xbf0);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x88;
    } while (uVar4 < (uVar2 & 0xff));
  }
  FUN_1406df892(param_1 + 0xb00,param_2);
  return;
}



// FUNCTION 1406df892 FUN_1406df892 body=162 status=ok
// SIG undefined FUN_1406df892(void)

void FUN_1406df892(longlong *param_1,undefined8 param_2)

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
        goto LAB_1406df91f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1406df91f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1406df934 FUN_1406df934 body=325 status=ok
// SIG undefined FUN_1406df934(void)

void FUN_1406df934(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
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
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  if (plVar2 != (longlong *)0x0) {
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
      plVar2 = *(longlong **)(param_1 + 0x1c8);
      if (plVar2 == (longlong *)0x0) goto LAB_1406df99f;
    }
    if ((((DAT_14cad2858 != 0) && (lVar1 = plVar2[2], lVar1 != 0)) &&
        (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      (**(code **)(*plVar2 + 0xcb0))(plVar2);
      *(byte *)(plVar2 + 0x18e) = *(byte *)(plVar2 + 0x18e) | 8;
    }
  }
LAB_1406df99f:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406dfa7a FUN_1406dfa7a body=350 status=ok
// SIG undefined FUN_1406dfa7a(void)

longlong *
FUN_1406dfa7a(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  if ((longlong *)*param_4 == (longlong *)0x0) {
    puVar6 = (undefined8 *)0x0;
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_4 + 0x28))();
    puVar6 = (undefined8 *)*param_4;
  }
  if (param_5 != 0) {
    local_48 = 0;
    local_50 = puVar6 == (undefined8 *)0x0;
    local_60 = param_6;
    local_68 = param_5;
    local_58 = plVar5;
    FUN_1402b3334(&local_40,param_3,param_7);
    if (&local_40 == param_2) {
LAB_1406dfbb4:
      if (local_40 != 0) {
        LOCK();
        puVar1 = (uint *)(local_40 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    else {
      lVar3 = *param_2;
      *param_2 = local_40;
      local_40 = 0;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        goto LAB_1406dfbb4;
      }
    }
    puVar6 = (undefined8 *)*param_4;
  }
  if (puVar6 == (undefined8 *)0x0) goto LAB_1406dfadf;
  if (plVar5 == (longlong *)0x0) {
LAB_1406dfb85:
    (**(code **)*puVar6)(puVar6,1);
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar4 != 0) goto LAB_1406dfadf;
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 != (undefined8 *)0x0) goto LAB_1406dfb85;
  }
  *param_4 = 0;
LAB_1406dfadf:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406dfbe0 FUN_1406dfbe0 body=244 status=ok
// SIG undefined FUN_1406dfbe0(void)

void FUN_1406dfbe0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b080120;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbc) = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x144) = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  return;
}



// FUNCTION 1406dfcd4 FUN_1406dfcd4 body=335 status=ok
// SIG undefined FUN_1406dfcd4(void)

undefined8 * FUN_1406dfcd4(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  *param_1 = &PTR_FUN_14b081e90;
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
  plVar1 = DAT_14c844840;
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[4] = DAT_14cb70df8;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 1406dfe24 FUN_1406dfe24 body=1986 status=ok
// SIG undefined FUN_1406dfe24(void)

undefined8 FUN_1406dfe24(longlong param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 *local_170;
  uint local_164;
  uint *local_160;
  uint *local_158;
  longlong *local_150;
  longlong local_148;
  uint local_140;
  int local_13c;
  ulonglong local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 *local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  int local_f0;
  undefined1 local_e4 [4];
  longlong local_e0;
  undefined8 local_d8;
  uint *local_d0;
  int local_c8;
  uint local_c4;
  uint local_c0;
  ulonglong local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  int local_a0;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar11 = param_2 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  local_150 = param_2;
  local_148 = param_1;
  plStack_b0 = plVar11;
  if ((int)param_2[5] == 0) {
    uVar12 = 1;
    uVar16 = 0;
    uVar3 = 0;
    uVar7 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar7 = local_b8 & 0xffffffff;
    uVar12 = local_b8 >> 0x20;
    uVar3 = local_a8 >> 0x20;
    uVar16 = *(uint *)(local_150 + 5);
    uVar6 = (uint)local_a8;
  }
  if (((uint)uVar3 != uVar16) || (plStack_b0 != plVar11)) {
    local_108 = local_148 + 0x80;
    iVar18 = local_a0;
    local_164 = uVar16;
    local_130 = plStack_b0;
    local_128 = plVar11;
    do {
      lVar5 = *local_150;
      lVar9 = (longlong)(int)uVar3 * 0xb8;
      puVar19 = (undefined8 *)(lVar5 + lVar9);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      local_13c = iVar18;
      local_138 = uVar12;
      local_100 = uVar7;
      local_110 = FUN_140d68e64(local_148,puVar19);
      FUN_1406e2264(local_110,puVar19);
      lVar9 = lVar9 + lVar5;
      puVar10 = (uint *)(lVar9 + 0x20);
      local_c4 = *(uint *)(lVar9 + 0x38);
      uVar3 = (ulonglong)local_c4;
      iVar18 = 0;
      uVar7 = 1;
      iVar17 = 0;
      uVar12 = 0;
      if (local_c4 != 0) {
        puVar13 = (uint *)puVar19[6];
        if ((uint *)puVar19[6] == (uint *)0x0) {
          puVar13 = puVar10;
        }
        uVar16 = *puVar13;
        if (uVar16 == 0) {
          iVar18 = local_c4 + 0x1e;
          if (-1 < (int)(local_c4 - 1)) {
            iVar18 = local_c4 - 1;
          }
          uVar7 = 0;
          uVar12 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar12 = uVar7;
          }
          iVar18 = (int)uVar12 + 1;
          iVar17 = (int)uVar12 * 0x20 + 0x20;
          iVar1 = 0;
          do {
            if (uVar12 == uVar7) {
              uVar7 = 1;
              uVar12 = uVar3;
              goto LAB_1406e0056;
            }
            iVar1 = iVar1 + 0x20;
            uVar16 = puVar13[uVar7 + 1];
            uVar7 = uVar7 + 1;
          } while (uVar16 == 0);
          iVar18 = (int)uVar7;
          iVar17 = iVar1;
        }
        else {
          iVar17 = 0;
        }
        uVar7 = (ulonglong)(-uVar16 & uVar16);
        uVar12 = uVar7 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar16 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        uVar12 = (ulonglong)uVar16;
        if ((int)local_c4 <= (int)uVar16) {
          uVar12 = uVar3;
        }
      }
LAB_1406e0056:
      local_d8 = (void *)CONCAT44(1 << ((byte)local_c4 & 0x1f),(int)local_c4 >> 5);
      local_c8 = -1 << ((byte)local_c4 & 0x1f);
      local_c0 = local_c4 & 0xffffffe0;
      local_140 = uVar6;
      local_d0 = puVar10;
      if (*(uint *)(puVar19 + 7) != local_c4) {
        local_160 = puVar10;
        FUN_1449c0562(&local_d8);
        uVar3 = (ulonglong)local_c4;
      }
      local_160 = local_d0;
      if (((int)uVar12 != (int)uVar3) || (puVar10 != local_d0)) {
        uVar16 = 0xffffffff;
        local_158 = puVar10;
        local_120 = puVar19;
        local_118 = uVar3;
        do {
          lVar5 = puVar19[2];
          lVar9 = (longlong)(int)uVar12 * 0x40;
          local_e0 = *(longlong *)(lVar5 + lVar9);
          local_d8 = (void *)0x0;
          uVar6 = *(uint *)(lVar5 + 0x18 + lVar9);
          _Src = *(void **)(lVar5 + 0x10 + lVar9);
          local_d0 = (uint *)CONCAT44(local_d0._4_4_,uVar6);
          if ((longlong)(int)uVar6 == 0) {
            local_d0 = (uint *)(ulonglong)uVar6;
          }
          else {
            FUN_1446dd670(&local_d8,uVar6,0);
            memcpy(local_d8,_Src,(longlong)(int)uVar6 * 2);
          }
          puVar19 = local_120;
          puVar10 = local_158;
          if (*(char *)((longlong)local_150 + 0xb2) != '\0') {
            if ((int)plStack_b0 != local_84) {
              uVar6 = (uint)((ulonglong)local_e0 >> 0x10);
              uVar15 = (uint)local_e0 & 0xffff;
              puVar2 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar2 = local_80;
              }
              for (iVar1 = *(int *)(puVar2 + (ulonglong)
                                             (local_70 - 1U &
                                             (int)((ulonglong)local_e0 >> 0x20) +
                                             ((uint)local_e0 << 0x10 | uVar15) +
                                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4)) * 4);
                  iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_b8 + 8)) {
                if (*(longlong *)(local_b8 + (longlong)iVar1 * 0x10) == local_e0)
                goto LAB_1406e0171;
              }
            }
            FUN_1406e05e8(local_110);
            FUN_144a13f80(&local_b8,local_e4,&local_e0,0);
          }
LAB_1406e0171:
          local_f8 = *puVar19;
          local_f0 = *(int *)(puVar19 + 1) + -1;
          if (*(int *)(puVar19 + 1) == 0) {
            local_f0 = 0;
          }
          local_170 = &local_d8;
          local_178 = local_e0;
          FUN_1406e07e8(local_148,local_110,&local_f8);
          if (local_d8 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar16 = uVar16 & ~(uint)uVar7;
          puVar13 = (uint *)puVar19[6];
          if ((uint *)puVar19[6] == (uint *)0x0) {
            puVar13 = puVar10;
          }
          uVar6 = *(uint *)(puVar19 + 7);
          lVar5 = (longlong)iVar18;
          uVar15 = puVar13[lVar5] & uVar16;
          if (uVar15 == 0) {
            iVar1 = uVar6 + 0x1e;
            if (-1 < (int)(uVar6 - 1)) {
              iVar1 = uVar6 - 1;
            }
            iVar1 = iVar1 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar4 = iVar1;
            if (iVar1 < iVar18) {
              iVar4 = iVar18;
            }
            if (iVar18 < iVar1) {
              lVar9 = 0;
              do {
                uVar15 = puVar13[lVar5 + lVar9 + 1];
                if (uVar15 != 0) {
                  iVar18 = iVar18 + (int)lVar9 + 1;
                  uVar16 = 0xffffffff;
                  goto LAB_1406e024c;
                }
                iVar17 = iVar17 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar4 - lVar5 != lVar9);
              uVar16 = 0xffffffff;
              iVar18 = iVar4;
            }
            iVar18 = iVar18 + 1;
            puVar10 = local_158;
            uVar12 = (ulonglong)uVar6;
            puVar19 = local_120;
          }
          else {
LAB_1406e024c:
            uVar7 = (ulonglong)(-uVar15 & uVar15);
            uVar12 = uVar7 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar15 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            uVar12 = (ulonglong)uVar15;
            if ((int)uVar6 <= (int)uVar15) {
              uVar12 = (ulonglong)uVar6;
            }
          }
        } while (((int)uVar12 != (int)local_118) || (puVar10 != local_160));
      }
      local_70 = 0;
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      plVar8 = local_128;
      plVar11 = local_130;
      uVar3 = local_138;
      iVar18 = local_13c;
      uVar6 = local_140;
      uVar12 = (ulonglong)plStack_b0 >> 0x20;
      plStack_b0 = (longlong *)((ulonglong)plStack_b0 & 0xffffffff00000000);
      if ((int)uVar12 != 0) {
        FUN_14472eb64(&local_b8,0);
      }
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        FUN_1446efbd8(&local_a8,0);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar6 = uVar6 & ~(uint)uVar3;
      plVar14 = (longlong *)plVar11[2];
      if ((longlong *)plVar11[2] == (longlong *)0x0) {
        plVar14 = plVar11;
      }
      uVar16 = *(uint *)(plVar11 + 3);
      iVar17 = (int)local_100;
      lVar5 = (longlong)iVar17;
      uVar15 = *(uint *)((longlong)plVar14 + lVar5 * 4) & uVar6;
      uVar7 = local_100;
      if (uVar15 == 0) {
        iVar1 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar1 = uVar16 - 1;
        }
        iVar1 = iVar1 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar4 = iVar1;
        if (iVar1 < iVar17) {
          iVar4 = iVar17;
        }
        if (iVar17 < iVar1) {
          lVar9 = 0;
          do {
            uVar15 = *(uint *)((longlong)plVar14 + lVar9 * 4 + lVar5 * 4 + 4);
            if (uVar15 != 0) {
              uVar7 = (ulonglong)(iVar17 + (int)lVar9 + 1);
              uVar6 = 0xffffffff;
              goto LAB_1406e0472;
            }
            iVar18 = iVar18 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar4 - lVar5 != lVar9);
          uVar6 = 0xffffffff;
          iVar17 = iVar4;
        }
        uVar7 = (ulonglong)(iVar17 + 1);
        plVar8 = local_128;
        plVar11 = local_130;
        uVar12 = local_138;
        uVar15 = uVar16;
      }
      else {
LAB_1406e0472:
        uVar12 = (ulonglong)(-uVar15 & uVar15);
        uVar3 = uVar12 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar15 = (iVar18 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if ((int)uVar16 <= (int)uVar15) {
          uVar15 = uVar16;
        }
      }
      uVar3 = (ulonglong)uVar15;
    } while ((uVar15 != local_164) || (plVar11 != plVar8));
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e05e8 FUN_1406e05e8 body=173 status=ok
// SIG undefined FUN_1406e05e8(void)

int FUN_1406e05e8(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar5 = (longlong)
            (int)(((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar3 + uVar5 * 4);
    iVar7 = 0;
    if (iVar1 != -1) {
      piVar4 = (int *)((longlong)plVar3 + uVar5 * 4);
      iVar7 = 0;
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_1406e0696(param_1);
          iVar7 = iVar7 + 1;
        }
        else {
          piVar4 = (int *)(*param_1 + (longlong)iVar1 * 0x40 + 0x38);
        }
        iVar1 = *piVar4;
      } while (iVar1 != -1);
    }
  }
  return iVar7;
}



// FUNCTION 1406e0696 FUN_1406e0696 body=96 status=ok
// SIG undefined FUN_1406e0696(void)

void FUN_1406e0696(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_1406e06f6(param_1,param_2,1);
  return;
}



// FUNCTION 1406e06f6 FUN_1406e06f6 body=103 status=ok
// SIG undefined FUN_1406e06f6(void)

void FUN_1406e06f6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x40 + *param_1 + 0x20);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      if (plVar2[-2] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1406e075e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406e075e FUN_1406e075e body=138 status=ok
// SIG undefined FUN_1406e075e(void)

void FUN_1406e075e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
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
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406e07e8 FUN_1406e07e8 body=1504 status=ok
// SIG undefined FUN_1406e07e8(void)

void FUN_1406e07e8(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  longlong param_5,undefined8 **param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_cc [4];
  undefined8 *local_c8;
  undefined8 **ppuStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 *local_88;
  undefined8 **ppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  ppuVar3 = param_6;
  lVar14 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar16 = (uint)param_5;
  switch(param_4) {
  case 0:
    cVar4 = FUN_1406e17dc(param_2,param_5,param_6);
    if (cVar4 == '\0') {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        uVar8 = (uint)((ulonglong)lVar14 >> 0x10);
        uVar7 = uVar16 & 0xffff;
        plVar6 = param_2 + 7;
        if ((longlong *)param_2[8] != (longlong *)0x0) {
          plVar6 = (longlong *)param_2[8];
        }
        iVar5 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar14 >> 0x20) + (uVar16 << 0x10 | uVar7) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            lVar15 = *param_2 + (longlong)iVar5 * 0x40;
            if (*(longlong *)(*param_2 + (longlong)iVar5 * 0x40) == lVar14) {
              if ((lVar15 != 0) && (lVar15 != -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
              }
              break;
            }
            iVar5 = *(int *)(lVar15 + 0x38);
          } while (iVar5 != -1);
        }
      }
      FUN_1406e0f38(&local_88,ppuVar3,7);
      local_c8 = &param_5;
      ppuStack_c0 = &local_88;
      FUN_1406e1016(param_2,local_cc);
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
      if (ppuStack_80 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  case 3:
    local_d8 = 7;
    FUN_140de70ba(&local_88,0,0,param_6);
    if ((int)param_2[9] != 0) {
      uVar16 = (uint)((ulonglong)param_5 >> 0x10);
      uVar8 = (uint)param_5 & 0xffff;
      plVar6 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_2[8];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (longlong)
                      (int)((int)param_2[9] - 1U &
                           ((uint)param_5 << 0x10 | uVar8) + (int)((ulonglong)param_5 >> 0x20) +
                           (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar8 >> 4)) * 4);
      do {
        iVar13 = iVar5;
        if (iVar13 == -1) goto LAB_1406e0a9f;
        lVar14 = *param_2;
        lVar15 = (longlong)iVar13 * 0x40;
        iVar5 = *(int *)(lVar14 + 0x38 + lVar15);
      } while (*(longlong *)(lVar14 + lVar15) != param_5);
      while (*(int *)(lVar14 + 0x30 + lVar15) != (int)uStack_60) {
        do {
          iVar13 = iVar5;
          if (iVar13 == -1) goto LAB_1406e0a9f;
          lVar15 = (longlong)iVar13 * 0x40;
          iVar5 = *(int *)(lVar14 + 0x38 + lVar15);
        } while (*(longlong *)(lVar14 + lVar15) != param_5);
      }
      FUN_1406e0696(param_2,iVar13);
    }
LAB_1406e0a9f:
    if (uStack_70 != 0) {
      FUN_1400020a8();
    }
    if (ppuStack_80 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)((longlong)param_2 + 0x34) != 0) {
      local_a8 = 0;
      uVar18 = 0;
      uStack_a0 = 0;
      local_c8 = (undefined8 *)0x0;
      ppuStack_c0 = (undefined8 **)0x0;
      uStack_9c = 0x80;
      uStack_98 = 0xffffffff;
      uStack_94 = 0;
      FUN_140b7cc1c(&local_c8,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
      iVar5 = (int)param_2[5];
      if (iVar5 == 0) {
        uVar17 = 1;
        iVar13 = 0;
        iVar12 = 0;
      }
      else {
        puVar11 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_2 + 2);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar13 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar13 = iVar5 + -1;
          }
          uVar18 = 0;
          uVar17 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar17 = uVar18;
          }
          iVar12 = 0;
          do {
            if (uVar17 == uVar18) goto LAB_1406e0cb3;
            iVar12 = iVar12 + 0x20;
            uVar16 = puVar11[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar18 = 0;
          iVar12 = 0;
        }
        uVar17 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar13 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar13) {
          iVar13 = iVar5;
        }
      }
      if (iVar13 < iVar5) {
        uVar16 = 0xffffffff;
        do {
          FUN_1406e119c(&local_c8,&local_88);
          lVar14 = *param_2;
          lVar15 = (longlong)iVar13 * 0x40;
          *ppuStack_80 = *(undefined8 **)(lVar14 + lVar15);
          *(undefined1 *)(ppuStack_80 + 1) = *(undefined1 *)(lVar14 + 8 + lVar15);
          ppuStack_80[2] = (undefined8 *)0x0;
          ppuStack_80[2] = *(undefined8 **)(lVar14 + 0x10 + lVar15);
          *(undefined8 *)(lVar14 + 0x10 + lVar15) = 0;
          *(undefined4 *)(ppuStack_80 + 3) = *(undefined4 *)(lVar14 + 0x18 + lVar15);
          *(undefined4 *)((longlong)ppuStack_80 + 0x1c) = *(undefined4 *)(lVar14 + 0x1c + lVar15);
          *(undefined8 *)(lVar14 + 0x18 + lVar15) = 0;
          ppuStack_80[4] = (undefined8 *)0x0;
          ppuStack_80[4] = *(undefined8 **)(lVar14 + 0x20 + lVar15);
          *(undefined8 *)(lVar14 + 0x20 + lVar15) = 0;
          *(undefined4 *)(ppuStack_80 + 5) = *(undefined4 *)(lVar14 + 0x28 + lVar15);
          *(undefined4 *)((longlong)ppuStack_80 + 0x2c) = *(undefined4 *)(lVar14 + 0x2c + lVar15);
          *(undefined8 *)(lVar14 + 0x28 + lVar15) = 0;
          *(undefined4 *)(ppuStack_80 + 6) = *(undefined4 *)(lVar14 + 0x30 + lVar15);
          ppuStack_80[7] = *(undefined8 **)(lVar14 + 0x38 + lVar15);
          uVar16 = ~(uint)uVar17 & uVar16;
          puVar11 = (uint *)param_2[4];
          if ((uint *)param_2[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_2 + 2);
          }
          iVar5 = (int)param_2[5];
          iVar13 = (int)uVar18;
          lVar14 = (longlong)iVar13;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar9 = iVar5 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar9 <= iVar13) break;
            lVar15 = 0;
            while( true ) {
              iVar12 = iVar12 + 0x20;
              uVar8 = puVar11[lVar14 + lVar15 + 1];
              if (uVar8 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar10 - lVar14 == lVar15) goto LAB_1406e0cb3;
            }
            uVar18 = (ulonglong)(iVar13 + (int)lVar15 + 1);
            uVar16 = 0xffffffff;
          }
          uVar17 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar17 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar13 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar13 < iVar5);
      }
LAB_1406e0cb3:
      local_58 = param_2[6];
      local_88 = (undefined8 *)*param_2;
      ppuStack_80 = (undefined8 **)param_2[1];
      lVar14 = param_2[2];
      lVar15 = param_2[3];
      local_68 = param_2[4];
      lVar2 = param_2[5];
      param_2[6] = CONCAT44(uStack_94,uStack_98);
      param_2[4] = local_a8;
      param_2[5] = CONCAT44(uStack_9c,uStack_a0);
      param_2[2] = CONCAT44(uStack_b4,local_b8);
      param_2[3] = CONCAT44(uStack_ac,uStack_b0);
      *param_2 = (longlong)local_c8;
      param_2[1] = (longlong)ppuStack_c0;
      uStack_98 = (undefined4)local_58;
      uStack_94 = (undefined4)((ulonglong)local_58 >> 0x20);
      local_78._0_4_ = (undefined4)lVar14;
      local_78._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
      uStack_70._0_4_ = (undefined4)lVar15;
      uStack_70._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
      uStack_60._0_4_ = (int)lVar2;
      uStack_60._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_a0 = (int)uStack_60;
      uStack_9c = uStack_60._4_4_;
      local_b8 = (undefined4)local_78;
      uStack_b4 = local_78._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      local_c8 = local_88;
      ppuStack_c0 = ppuStack_80;
      local_a8 = local_68;
      local_78 = lVar14;
      uStack_70 = lVar15;
      uStack_60 = lVar2;
      FUN_140b7cbe4();
      uVar16 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
      if (uVar16 < 4) {
        iVar5 = 1;
      }
      else {
        uVar18 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar14 & 0x1f);
      }
      *(int *)(param_2 + 9) = iVar5;
      FUN_1406e1ba4(param_2);
    }
    break;
  case 4:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  case 5:
    param_2 = param_2 + 10;
    goto LAB_1406e0dbf;
  case 6:
    param_2 = (longlong *)FUN_145739a68(param_1 + 0x80,param_3);
LAB_1406e0dbf:
    local_88 = &param_5;
    ppuStack_80 = ppuVar3;
    FUN_145739864(param_2,&local_c8,&local_88,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e0e38 FUN_1406e0e38 body=254 status=ok
// SIG undefined FUN_1406e0e38(void)

void FUN_1406e0e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_58;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_2;
  cVar1 = FUN_1406e17dc();
  if (cVar1 == '\0') {
    if (param_4 == '\0') {
      FUN_1406e0f38(local_70,param_3,8);
      lVar2 = FUN_144a1cd4a(param_1,local_40,local_70);
      if (lVar2 == 0) {
        local_38 = &local_40;
        local_30 = local_70;
        FUN_1406e1016(param_1,local_24);
      }
    }
    else {
      FUN_1406e0f38(local_70,param_3,8);
      local_38 = &local_40;
      local_30 = local_70;
      FUN_1406e1016(param_1,local_24);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406e0f38 FUN_1406e0f38 body=96 status=ok
// SIG undefined FUN_1406e0f38(void)

undefined1 * FUN_1406e0f38(undefined1 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  uVar1 = FUN_144a1ccda(puVar2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_1406e0f98(param_1);
  return param_1;
}



// FUNCTION 1406e0f98 FUN_1406e0f98 body=107 status=ok
// SIG undefined FUN_1406e0f98(void)

void FUN_1406e0f98(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  lVar1 = FUN_1406e1468(puVar2,local_20);
  if (lVar1 == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1406e1016 FUN_1406e1016 body=389 status=ok
// SIG undefined FUN_1406e1016(void)

undefined4 * FUN_1406e1016(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406e119c(param_1,local_38);
  puVar1 = (undefined1 *)param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  local_30[2] = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined4 *)(local_30 + 3) = *(undefined4 *)(puVar1 + 0x10);
  *(undefined4 *)((longlong)local_30 + 0x1c) = *(undefined4 *)(puVar1 + 0x14);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  local_30[4] = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(local_30 + 5) = *(undefined4 *)(puVar1 + 0x20);
  *(undefined4 *)((longlong)local_30 + 0x2c) = *(undefined4 *)(puVar1 + 0x24);
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(local_30 + 6) = *(undefined4 *)(puVar1 + 0x28);
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  if (uVar5 < 4) {
    iVar6 = 1;
  }
  else {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  uVar2 = *local_30;
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_30 + 0x3c) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1406e1ba4(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e119c FUN_1406e119c body=716 status=ok
// SIG undefined FUN_1406e119c(void)

int * FUN_1406e119c(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1406e1393;
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
LAB_1406e1393:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x40);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1406e1468 FUN_1406e1468 body=882 status=ok
// SIG undefined FUN_1406e1468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1406e1468(wchar_t *param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *_Str2;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  _Str2 = wcschr(param_1,L'%');
  do {
    if (_Str2 == (wchar_t *)0x0) {
      lVar4 = 0;
LAB_1406e17a2:
      if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c866f00) && (FUN_144b3d300(&DAT_14c866f00), DAT_14c866f00 == -1)) {
      FUN_140056680(&local_70,&DAT_14c764000);
      DAT_14c866e20 = L"%GAME%";
      _DAT_14c866e28 = (undefined4)local_70;
      uRam000000014c866e2c = local_70._4_4_;
      uRam000000014c866e30 = (undefined4)uStack_68;
      uRam000000014c866e34 = uStack_68._4_4_;
      local_70 = 0;
      uStack_68 = 0;
      DAT_14c866e38 = 6;
      uVar2 = FUN_140d6afb0();
      FUN_140056680(&local_80,uVar2);
      DAT_14c866e40 = L"%GAMEDIR%";
      _DAT_14c866e48 = (undefined4)local_80;
      uRam000000014c866e4c = local_80._4_4_;
      uRam000000014c866e50 = (undefined4)uStack_78;
      uRam000000014c866e54 = uStack_78._4_4_;
      local_80 = 0;
      uStack_78 = 0;
      DAT_14c866e58 = 9;
      uVar2 = FUN_140d6ac5a();
      FUN_140056680(&local_90,uVar2);
      _DAT_14c866e60 = L"%ENGINEDIR%";
      _DAT_14c866e68 = (undefined4)local_90;
      uRam000000014c866e6c = local_90._4_4_;
      uRam000000014c866e70 = (undefined4)uStack_88;
      uRam000000014c866e74 = uStack_88._4_4_;
      local_90 = 0;
      uStack_88 = 0;
      _DAT_14c866e78 = 0xb;
      FUN_145cbe9b2(&local_a0);
      _DAT_14c866e80 = L"%ENGINEUSERDIR%";
      _DAT_14c866e88 = (undefined4)local_a0;
      uRam000000014c866e8c = local_a0._4_4_;
      uRam000000014c866e90 = (undefined4)uStack_98;
      uRam000000014c866e94 = uStack_98._4_4_;
      local_a0 = 0;
      uStack_98 = 0;
      _DAT_14c866e98 = 0xf;
      FUN_14626bf40(&local_b0);
      _DAT_14c866ea0 = L"%ENGINEVERSIONAGNOSTICUSERDIR%";
      _DAT_14c866ea8 = (undefined4)local_b0;
      uRam000000014c866eac = local_b0._4_4_;
      uRam000000014c866eb0 = (undefined4)uStack_a8;
      uRam000000014c866eb4 = uStack_a8._4_4_;
      local_b0 = 0;
      uStack_a8 = 0;
      _DAT_14c866eb8 = 0x1e;
      uVar2 = FUN_14577aebc();
      FUN_140056680(&local_c0,uVar2);
      FUN_1448097c4(&local_c0,&DAT_149e01f64,&DAT_149e065c6,0);
      _DAT_14c866ec0 = L"%APPSETTINGSDIR%";
      DAT_14c866ec8._0_4_ = (undefined4)local_c0;
      DAT_14c866ec8._4_4_ = local_c0._4_4_;
      uRam000000014c866ed0 = (undefined4)uStack_b8;
      uRam000000014c866ed4 = uStack_b8._4_4_;
      local_c0 = 0;
      uStack_b8 = 0;
      _DAT_14c866ed8 = 0x10;
      puVar3 = (undefined8 *)FUN_14047ac8c();
      _DAT_14c866ee0 = L"%GAMESAVEDDIR%";
      DAT_14c866ee8 = (void *)0x0;
      _DAT_14c866ef0 = *(int *)(puVar3 + 1);
      lVar4 = (longlong)_DAT_14c866ef0;
      local_c8 = (void *)*puVar3;
      if (lVar4 == 0) {
        _DAT_14c866ef4 = 0;
      }
      else {
        FUN_1446dd670(&DAT_14c866ee8,_DAT_14c866ef0,0);
        memcpy(DAT_14c866ee8,local_c8,lVar4 * 2);
      }
      _DAT_14c866ef8 = 0xe;
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      atexit(FUN_14277a7dc);
      _Init_thread_footer(&DAT_14c866f00);
    }
    lVar4 = 0;
    do {
      iVar1 = wcsncmp(*(wchar_t **)((longlong)&DAT_14c866e20 + lVar4),_Str2,
                      (longlong)*(int *)((longlong)&DAT_14c866e38 + lVar4));
      if (iVar1 == 0) {
        lVar4 = (longlong)&DAT_14c866e20 + lVar4;
        if (lVar4 != 0) {
          *param_2 = _Str2;
          goto LAB_1406e17a2;
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != 0xe0);
    _Str2 = wcschr(_Str2 + 1,L'%');
  } while( true );
}



// FUNCTION 1406e17dc FUN_1406e17dc body=967 status=ok
// SIG undefined FUN_1406e17dc(void)

ulonglong FUN_1406e17dc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  uint *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    uVar15 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar1 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    iVar2 = *(int *)((longlong)plVar1 +
                    (ulonglong)
                    ((int)param_1[0x13] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                    (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar12 = param_1[10] + (longlong)iVar2 * 0x20;
        if (*(longlong *)(param_1[10] + (longlong)iVar2 * 0x20) == param_2) {
          uVar17 = 0;
          if ((lVar12 != 0) && (lVar12 + 8 != 0)) {
            FUN_1400b22c2(&local_88,&DAT_149e2783e);
            FUN_1407ec8fc(local_70,lVar12 + 8,&local_88);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            local_88 = 0;
            uStack_80 = 0;
            FUN_1406e1e5a(param_3,local_70,&local_88);
            uVar17 = 0;
            if (0x7ffffffe < (int)uStack_80 - 2U) goto LAB_1406e1b50;
            puVar14 = (uint *)(param_1 + 2);
            local_98 = 0;
            uStack_90 = 0;
            iVar2 = (int)param_1[5];
            if (iVar2 == 0) {
              uVar18 = 1;
              iVar3 = 0;
              iVar10 = 0;
              goto LAB_1406e19c5;
            }
            puVar7 = (uint *)param_1[4];
            if ((uint *)param_1[4] == (uint *)0x0) {
              puVar7 = puVar14;
            }
            uVar15 = *puVar7;
            if (uVar15 != 0) {
              uVar17 = 0;
              iVar10 = 0;
              goto LAB_1406e19a1;
            }
            iVar3 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar3 = iVar2 + -1;
            }
            uVar17 = 0;
            uVar18 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar18 = uVar17;
            }
            iVar10 = 0;
            goto LAB_1406e1988;
          }
          break;
        }
        iVar2 = *(int *)(lVar12 + 0x18);
        uVar17 = 0;
      } while (iVar2 != -1);
      goto LAB_1406e1811;
    }
  }
  uVar17 = 0;
  goto LAB_1406e1811;
LAB_1406e1b21:
  bVar19 = uVar8 == uVar11;
LAB_1406e1a2d:
  puVar14 = local_a0;
  if (bVar19) {
LAB_1406e1b2b:
    FUN_1457397c0(*param_1 + lVar16 + 8,param_3);
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    goto LAB_1406e1b41;
  }
LAB_1406e1a38:
  uVar15 = uVar15 & ~(uint)uVar18;
  puVar7 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar7 = puVar14;
  }
  iVar2 = (int)param_1[5];
  iVar3 = (int)uVar17;
  lVar12 = (longlong)iVar3;
  uVar4 = puVar7[lVar12] & uVar15;
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
    if (iVar5 <= iVar3) goto LAB_1406e1b9f;
    lVar16 = 0;
    while( true ) {
      iVar10 = iVar10 + 0x20;
      uVar4 = puVar7[lVar12 + lVar16 + 1];
      if (uVar4 != 0) break;
      lVar16 = lVar16 + 1;
      if (iVar6 - lVar12 == lVar16) goto LAB_1406e1b9f;
    }
    uVar17 = (ulonglong)(iVar3 + (int)lVar16 + 1);
    uVar15 = 0xffffffff;
  }
  uVar18 = (ulonglong)(-uVar4 & uVar4);
  uVar9 = uVar18 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar3 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar3) goto LAB_1406e1b9f;
  goto LAB_1406e19d8;
  while( true ) {
    iVar10 = iVar10 + 0x20;
    uVar15 = puVar7[uVar17 + 1];
    uVar17 = uVar17 + 1;
    if (uVar15 != 0) break;
LAB_1406e1988:
    if (uVar18 == uVar17) goto LAB_1406e1b9f;
  }
LAB_1406e19a1:
  uVar18 = (ulonglong)(-uVar15 & uVar15);
  uVar9 = uVar18 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar3 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
LAB_1406e19c5:
  if (iVar3 < iVar2) {
    uVar15 = 0xffffffff;
    local_a0 = puVar14;
LAB_1406e19d8:
    lVar12 = *param_1;
    lVar16 = (longlong)iVar3 * 0x40;
    if (*(longlong *)(lVar12 + lVar16) == param_2) {
      FUN_1406e1e5a((ulonglong)(*(int *)(lVar12 + 0x28 + lVar16) - 2U < 0x7fffffff) * 0x10 +
                    lVar12 + lVar16 + 0x10,local_70);
      if ((int)uStack_90 != (int)uStack_80) {
        bVar19 = (int)uStack_80 + (int)uStack_90 == 1;
        goto LAB_1406e1a2d;
      }
      if (1 < (int)uStack_90) {
        lVar12 = 0;
        do {
          uVar8 = *(ushort *)(local_98 + lVar12);
          uVar9 = (ulonglong)uVar8;
          uVar11 = *(ushort *)(local_88 + lVar12);
          if (uVar8 == uVar11) {
            if (uVar8 == 0) break;
          }
          else {
            if (0x7f < (uVar11 | uVar8)) goto LAB_1406e1b21;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar13 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar13]) goto LAB_1406e1b21;
          }
          lVar12 = lVar12 + 2;
        } while( true );
      }
      goto LAB_1406e1b2b;
    }
    goto LAB_1406e1a38;
  }
LAB_1406e1b9f:
  uVar17 = 0;
LAB_1406e1b41:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_1406e1b50:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
LAB_1406e1811:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e1ba4 FUN_1406e1ba4 body=694 status=ok
// SIG undefined FUN_1406e1ba4(void)

void FUN_1406e1ba4(longlong *param_1)

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
  int iVar15;
  longlong lVar16;
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
    if ((int)uVar10 < 1) goto LAB_1406e1c0a;
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
LAB_1406e1c0a:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
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
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x40;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x3c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x38 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1406e1e5a FUN_1406e1e5a body=273 status=ok
// SIG undefined FUN_1406e1e5a(void)

void FUN_1406e1e5a(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  wint_t *pwVar2;
  short sVar3;
  wint_t _C;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  wint_t *pwVar7;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1446f8c06(param_3,0);
  }
  if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
    *(undefined2 *)*param_3 = 0;
  }
  iVar4 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
    iVar4 = *(int *)(param_2 + 1) + -1;
  }
  iVar4 = FUN_1447ee042(param_1,puVar6,iVar4,1,0,0xffffffff);
  if (-1 < iVar4) {
    iVar5 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar5 = 0;
    }
    psVar1 = (short *)(*param_1 + (longlong)(iVar5 + iVar4) * 2);
    sVar3 = *psVar1;
    pwVar2 = (wint_t *)(psVar1 + (sVar3 == 0x22));
    _C = *pwVar2;
    for (pwVar7 = pwVar2;
        (_C != 0 &&
        (((sVar3 == 0x22 && (_C != 0x22)) ||
         ((sVar3 != 0x22 && ((iVar4 = iswalnum(_C), iVar4 != 0 || (*pwVar7 == 0x5f))))))));
        pwVar7 = pwVar7 + 1) {
      _C = pwVar7[1];
    }
    FUN_1400020e8(param_3,pwVar2,(ulonglong)((longlong)pwVar7 - (longlong)pwVar2) >> 1 & 0xffffffff)
    ;
    return;
  }
  return;
}



// FUNCTION 1406e1f6c FUN_1406e1f6c body=136 status=ok
// SIG undefined FUN_1406e1f6c(void)

longlong FUN_1406e1f6c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  if ((undefined8 *)(param_1 + 8) != param_2) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  uVar1 = FUN_144a1ccda(puVar2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1446f8c06(param_1 + 0x18,0);
  }
  FUN_1406e0f98(param_1);
  return param_1;
}



// FUNCTION 1406e2264 FUN_1406e2264 body=982 status=ok
// SIG undefined FUN_1406e2264(void)

void FUN_1406e2264(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_b8 [40];
  int local_90;
  uint local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  uint *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = (int)param_3[5];
  if (iVar2 == 0) {
    uVar19 = 1;
    uVar18 = 0;
    iVar15 = 0;
    iVar13 = 0;
  }
  else {
    puVar16 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar16 = (uint *)(param_3 + 2);
    }
    uVar20 = *puVar16;
    if (uVar20 == 0) {
      iVar13 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar13 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar19 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar19 = uVar18;
      }
      iVar13 = 0;
      do {
        if (uVar19 == uVar18) goto LAB_1406e25b5;
        iVar13 = iVar13 + 0x20;
        uVar20 = puVar16[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
    }
    uVar19 = (ulonglong)(-uVar20 & uVar20);
    uVar17 = uVar19 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar15 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar15) {
      iVar15 = iVar2;
    }
  }
  if (iVar15 < iVar2) {
    uVar20 = 0xffffffff;
    local_78 = param_1 + 0x50;
    local_70 = (uint *)(param_3 + 2);
    local_68 = param_2;
    do {
      lVar14 = (longlong)iVar15 * 0x68;
      iVar2 = *(int *)(*param_3 + 8 + lVar14);
      iVar15 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar15 = 0;
      }
      puVar9 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar9 = *(undefined2 **)(*param_3 + lVar14);
      }
      local_8c = uVar20;
      cVar5 = FUN_144a38768(local_68,puVar9,iVar15,1);
      if (cVar5 != '\0') {
        lVar11 = *param_3;
        puVar16 = (uint *)(lVar11 + lVar14 + 0x20);
        iVar2 = *(int *)(lVar11 + lVar14 + 0x38);
        if (iVar2 == 0) {
          uVar21 = 1;
          uVar17 = 0;
          iVar15 = 0;
          iVar12 = 0;
        }
        else {
          puVar10 = *(uint **)(lVar11 + 0x30 + lVar14);
          if (puVar10 == (uint *)0x0) {
            puVar10 = puVar16;
          }
          uVar20 = *puVar10;
          if (uVar20 == 0) {
            iVar15 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar15 = iVar2 + -1;
            }
            uVar17 = 0;
            uVar21 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar21 = uVar17;
            }
            iVar12 = 0;
            do {
              if (uVar21 == uVar17) goto LAB_1406e2510;
              iVar12 = iVar12 + 0x20;
              uVar20 = puVar10[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar20 == 0);
          }
          else {
            uVar17 = 0;
            iVar12 = 0;
          }
          uVar21 = (ulonglong)(-uVar20 & uVar20);
          uVar1 = uVar21 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar15 = (iVar12 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar15) {
            iVar15 = iVar2;
          }
        }
        if (iVar15 < iVar2) {
          local_80 = (longlong *)(lVar11 + lVar14 + 0x10);
          uVar20 = 0xffffffff;
          local_90 = iVar13;
          local_88 = param_3;
          do {
            plVar4 = local_80;
            local_58 = *local_80 + (longlong)iVar15 * 0x20 + 8;
            local_60 = (longlong)iVar15 * 0x20 + *local_80;
            FUN_1406e263c(local_78,local_4c,&local_60,0);
            uVar20 = ~(uint)uVar21 & uVar20;
            puVar10 = (uint *)plVar4[4];
            if (puVar10 == (uint *)0x0) {
              puVar10 = puVar16;
            }
            iVar2 = (int)plVar4[5];
            iVar15 = (int)uVar17;
            lVar14 = (longlong)iVar15;
            uVar6 = puVar10[lVar14] & uVar20;
            param_3 = local_88;
            iVar13 = local_90;
            if (uVar6 == 0) {
              iVar7 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar7 = iVar2 + -1;
              }
              iVar7 = iVar7 >> 5;
              iVar8 = iVar7;
              if (iVar7 < iVar15) {
                iVar8 = iVar15;
              }
              if (iVar7 <= iVar15) break;
              lVar11 = 0;
              while( true ) {
                iVar12 = iVar12 + 0x20;
                uVar6 = puVar10[lVar14 + lVar11 + 1];
                if (uVar6 != 0) break;
                lVar11 = lVar11 + 1;
                if (iVar8 - lVar14 == lVar11) goto LAB_1406e2510;
              }
              uVar17 = (ulonglong)(iVar15 + (int)lVar11 + 1);
              uVar20 = 0xffffffff;
            }
            uVar21 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar21 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar15 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          } while (iVar15 < iVar2);
        }
      }
LAB_1406e2510:
      uVar20 = local_8c & ~(uint)uVar19;
      puVar16 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar16 = local_70;
      }
      iVar2 = (int)param_3[5];
      iVar15 = (int)uVar18;
      lVar14 = (longlong)iVar15;
      uVar6 = puVar16[lVar14] & uVar20;
      if (uVar6 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar7 = iVar12;
        if (iVar12 < iVar15) {
          iVar7 = iVar15;
        }
        if (iVar12 <= iVar15) break;
        lVar11 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar16[lVar14 + lVar11 + 1];
          if (uVar6 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar14 == lVar11) goto LAB_1406e25b5;
        }
        uVar18 = (ulonglong)(iVar15 + (int)lVar11 + 1);
        uVar20 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar6 & uVar6);
      uVar17 = uVar19 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar15 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar2);
  }
LAB_1406e25b5:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e263c FUN_1406e263c body=346 status=ok
// SIG undefined FUN_1406e263c(void)

undefined4 *
FUN_1406e263c(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406e28c6(param_1,local_48);
  FUN_1406e2798(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_1406e2804(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1406e2aa2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e2798 FUN_1406e2798 body=107 status=ok
// SIG undefined FUN_1406e2798(void)

undefined8 * FUN_1406e2798(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1406e2804 FUN_1406e2804 body=193 status=ok
// SIG undefined FUN_1406e2804(void)

void FUN_1406e2804(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1457399de(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1406e287b;
    }
  }
  uVar6 = 0;
LAB_1406e287b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1406e28c6 FUN_1406e28c6 body=476 status=ok
// SIG undefined FUN_1406e28c6(void)

int * FUN_1406e28c6(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1406e2aa2 FUN_1406e2aa2 body=691 status=ok
// SIG undefined FUN_1406e2aa2(void)

void FUN_1406e2aa2(longlong *param_1)

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
  int iVar15;
  longlong lVar16;
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
    if ((int)uVar10 < 1) goto LAB_1406e2b08;
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
LAB_1406e2b08:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
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
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1406e2d56 FUN_1406e2d56 body=687 status=ok
// SIG undefined FUN_1406e2d56(void)

double * FUN_1406e2d56(longlong *param_1,double *param_2,double *param_3,longlong param_4,
                      byte param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar10 = *(double *)(param_4 + 0x58);
  dVar8 = *(double *)(param_4 + 0x60);
  dVar6 = *(double *)(param_4 + 0x68);
  dVar4 = (-(double)param_1[0x46] * dVar10 - dVar8 * (double)param_1[0x47]) -
          dVar6 * (double)param_1[0x48];
  if ((((0.9998999834060669 <= dVar4 | param_5 |
        -(dVar4 <= 9.999999747378752e-05 ||
         (*(double *)(param_4 + 0x40) * -(double)param_1[0x46] -
         (double)param_1[0x47] * *(double *)(param_4 + 0x48)) -
         (double)param_1[0x48] * *(double *)(param_4 + 0x50) <= 9.999999747378752e-05)) & 1) == 0)
     && (cVar5 = (**(code **)(*param_1 + 0x878))(param_1,param_4), cVar5 != '\0')) {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar4 = (double)-(float)(dVar6 * dVar3 + dVar10 * dVar1 + dVar8 * dVar2) / dVar4;
    dVar10 = (double)param_1[0x46];
    dVar8 = (double)param_1[0x47];
    dVar6 = (double)param_1[0x48];
    dVar7 = dVar3 * dVar6 + dVar1 * dVar10 + dVar2 * dVar8;
    dVar6 = (dVar3 - dVar6 * dVar7) - dVar6 * dVar4;
    dVar8 = (dVar2 - dVar8 * dVar7) - dVar8 * dVar4;
    dVar10 = (dVar1 - dVar7 * dVar10) - dVar4 * dVar10;
    if ((*(byte *)((longlong)param_1 + 0x5b4) & 1) == 0) {
      dVar4 = dVar6 * dVar6 + dVar10 * dVar10 + dVar8 * dVar8;
      if (((dVar4 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar11 = dVar10, NAN(dVar4))) &&
         (dVar7 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar4)) {
        dVar4 = 1.0 / SQRT(dVar4);
        dVar7 = dVar6 * dVar4;
        dVar9 = dVar8 * dVar4;
        dVar11 = dVar10 * dVar4;
      }
      dVar10 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
      dVar6 = dVar7 * dVar10;
      dVar8 = dVar9 * dVar10;
      dVar10 = dVar11 * dVar10;
    }
    *param_2 = dVar10;
    param_2[1] = dVar8;
    param_2[2] = dVar6;
  }
  else {
    param_2[2] = param_3[2];
    dVar10 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = dVar10;
  }
  return param_2;
}



// FUNCTION 1406e3006 FUN_1406e3006 body=536 status=ok
// SIG undefined FUN_1406e3006(void)

bool FUN_1406e3006(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  double dVar3;
  bool bVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  if (((*(byte *)(param_2 + 0xad) & 3) != 1) ||
     (dVar3 = (-*(double *)(param_1 + 0x230) * *(double *)(param_2 + 0x58) -
              *(double *)(param_2 + 0x60) * *(double *)(param_1 + 0x238)) -
              *(double *)(param_2 + 0x68) * *(double *)(param_1 + 0x240),
     dVar3 < 9.999999747378752e-05)) {
    bVar4 = false;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x228);
    if (((((*(int *)(param_2 + 0xdc) != 0) && (uVar2 = *(uint *)(param_2 + 0xd8), -1 < (int)uVar2))
         && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_2 + 0xdc))))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar6 = *plVar7, lVar6 != 0)))) {
      if (((((*(byte *)(lVar6 + 0x44d) & 0x10) == 0) && (*(int *)(lVar6 + 0x414) != 0)) &&
          (uVar2 = *(uint *)(lVar6 + 0x410), -1 < (int)uVar2)) &&
         (((((int)uVar2 < DAT_14c9647dc &&
            (plVar7 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == *(int *)(lVar6 + 0x414))) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar6 = *plVar7;
        }
        else {
          lVar6 = 0;
        }
        pcVar5 = (char *)(lVar6 + 200);
      }
      else {
        pcVar5 = (char *)(lVar6 + 0x520);
      }
      cVar1 = *pcVar5;
      if (cVar1 == '\x03') {
        fVar9 = 2.0;
      }
      else if (cVar1 == '\x02') {
        fVar8 = *(float *)(pcVar5 + 4);
        if ((*(float *)(pcVar5 + 8) != fVar8) || (NAN(*(float *)(pcVar5 + 8)) || NAN(fVar8))) {
          fVar8 = cosf(fVar8 * 0.017453292);
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          *(float *)(pcVar5 + 0xc) = fVar8;
          *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar5 + 4);
        }
        else {
          fVar8 = *(float *)(pcVar5 + 0xc);
        }
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
      }
      else if (cVar1 == '\x01') {
        fVar8 = *(float *)(pcVar5 + 4);
        if ((*(float *)(pcVar5 + 8) != fVar8) || (NAN(*(float *)(pcVar5 + 8)) || NAN(fVar8))) {
          fVar8 = cosf(fVar8 * 0.017453292);
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          *(float *)(pcVar5 + 0xc) = fVar8;
          *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar5 + 4);
        }
        else {
          fVar8 = *(float *)(pcVar5 + 0xc);
        }
        if (fVar8 <= fVar9) {
          fVar9 = fVar8;
        }
      }
    }
    bVar4 = (double)fVar9 <= dVar3;
  }
  return bVar4;
}



// FUNCTION 1406e321e FUN_1406e321e body=75 status=ok
// SIG undefined FUN_1406e321e(void)

void FUN_1406e321e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1447addd0(param_2,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e326a FUN_1406e326a body=297 status=ok
// SIG undefined FUN_1406e326a(void)

undefined8 FUN_1406e326a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1406e338c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1406e338c;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1406e338c:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1406e3337;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1406e3337;
    }
  }
  uVar6 = 0;
LAB_1406e3337:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e3394 FUN_1406e3394 body=70 status=ok
// SIG undefined FUN_1406e3394(void)

void FUN_1406e3394(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = param_1[0x16];
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    if (lVar1 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x0001406e33c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa80))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1406e33ee FUN_1406e33ee body=186 status=ok
// SIG undefined FUN_1406e33ee(void)

void FUN_1406e33ee(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x40;
        lVar1 = lVar2 + lVar7;
        if (*(longlong *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x40 + lVar2 + 0x38);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x38);
          FUN_140931af6(*param_1 + lVar7 + 8);
          FUN_1406e34a8(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x38);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 1406e34a8 FUN_1406e34a8 body=114 status=ok
// SIG undefined FUN_1406e34a8(void)

void FUN_1406e34a8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1406e3520 FUN_1406e3520 body=337 status=ok
// SIG undefined FUN_1406e3520(void)

bool FUN_1406e3520(longlong *param_1)

{
  char cVar1;
  bool bVar2;
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
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 8))();
  if (lVar3 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       ((*(byte *)(lVar3 + 0x65) & 0x18) != 0x10)) {
      bVar2 = false;
      goto LAB_1406e35ad;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar3 != 0) {
    cVar1 = FUN_1406e3672(lVar3);
    bVar2 = true;
    if (cVar1 != '\0') goto LAB_1406e35ad;
  }
  lVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  bVar2 = 0 < *(int *)(lVar3 + 200);
LAB_1406e35ad:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e3672 FUN_1406e3672 body=139 status=ok
// SIG undefined FUN_1406e3672(void)

ulonglong FUN_1406e3672(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = FUN_1406e36fe(param_1);
    if (*(char *)(param_1 + 0x38) == '\0') {
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) != '\x01')) goto LAB_1406e36b2;
      lVar1 = lVar1 + 0x20;
    }
    else {
LAB_1406e36c8:
      lVar1 = param_1 + 0x40;
    }
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    if (lVar1 != 0) goto LAB_1406e36a4;
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') goto LAB_1406e36c8;
LAB_1406e36b2:
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = param_1;
    lVar1 = FUN_1406e36fe(param_1);
    if (*(char *)(param_1 + 0x39) != '\0') goto LAB_1406e36f4;
    if (lVar1 == 0) goto LAB_1406e36be;
    uVar2 = lVar1 + 0x70;
    uVar3 = 0;
    if (*(char *)(lVar1 + 0x19) != '\0') {
      uVar3 = uVar2;
    }
  }
  else if (*(char *)(param_1 + 0x39) == '\x01') {
LAB_1406e36f4:
    uVar3 = param_1 + 0x90;
  }
  else {
LAB_1406e36be:
    uVar3 = 0;
  }
  uVar2 = CONCAT71((int7)(uVar2 >> 8),uVar3 != 0);
LAB_1406e36a4:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1406e36fe FUN_1406e36fe body=138 status=ok
// SIG undefined FUN_1406e36fe(void)

longlong FUN_1406e36fe(undefined8 *param_1)

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
    if (DAT_14cb8d760 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb8d760,local_40);
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



// FUNCTION 1406e378a FUN_1406e378a body=102 status=ok
// SIG undefined FUN_1406e378a(void)

ulonglong FUN_1406e378a(longlong param_1)

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
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1406e37d3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1406e37d3;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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



// FUNCTION 1406e3802 FUN_1406e3802 body=61 status=ok
// SIG undefined FUN_1406e3802(void)

longlong FUN_1406e3802(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406131f8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1406e383f(lVar2);
  return lVar2;
}



// FUNCTION 1406e383f FUN_1406e383f body=26 status=ok
// SIG undefined FUN_1406e383f(void)

void FUN_1406e383f(undefined8 *param_1)

{
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1406e3860 FUN_1406e3860 body=57 status=ok
// SIG undefined FUN_1406e3860(void)

void FUN_1406e3860(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66670 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66670 = FUN_140002ddd(FUN_14650f872,uVar1,L"GbxStatusEffectGraphSettings");
  }
  return;
}



// FUNCTION 1406e389a FUN_1406e389a body=439 status=ok
// SIG undefined FUN_1406e389a(void)

void FUN_1406e389a(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe0));
  if ((*(byte *)(param_2 + 0x243) >> 2 & 3) == param_3) goto LAB_1406e395d;
  *(byte *)(param_2 + 0x243) = *(byte *)(param_2 + 0x243) & 0xf3 | param_3 * '\x04' & 0xc;
  if (param_3 == 0) {
    local_40 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    local_38 = &local_40;
    FUN_144a1ce12(param_1 + 0xe8);
    local_40 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    local_38 = &local_40;
    FUN_144a1ce12(param_1 + 0xf8);
    goto LAB_1406e395d;
  }
  if (param_3 == 1) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    plVar2 = (longlong *)(param_1 + 0xe8);
    uVar3 = (ulonglong)*(int *)(param_1 + 0xf0);
    uVar1 = *(int *)(param_1 + 0xf0) + 1;
    *(uint *)(param_1 + 0xf0) = uVar1;
    if (*(uint *)(param_1 + 0xf4) < uVar1) {
LAB_1406e3a14:
      FUN_1458edfd8(plVar2,uVar3 & 0xffffffff);
    }
  }
  else {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    plVar2 = (longlong *)(param_1 + 0xf8);
    uVar3 = (ulonglong)*(int *)(param_1 + 0x100);
    uVar1 = *(int *)(param_1 + 0x100) + 1;
    *(uint *)(param_1 + 0x100) = uVar1;
    if (*(uint *)(param_1 + 0x104) < uVar1) goto LAB_1406e3a14;
  }
  *(longlong *)(*plVar2 + uVar3 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
LAB_1406e395d:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e3a52 FUN_1406e3a52 body=185 status=ok
// SIG undefined FUN_1406e3a52(void)

void FUN_1406e3a52(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x90);
  uVar4 = 0;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x98) << 3;
    do {
      if (*plVar6 != 0) {
        FUN_14009fd82(DAT_14c82b500,plVar6,1);
        puVar3 = (undefined8 *)*plVar6;
        if (puVar3 != (undefined8 *)0x0) {
          *plVar6 = 0;
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar4 = *(undefined4 *)(param_1 + 0x98);
    plVar6 = *(longlong **)(param_1 + 0x90);
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  FUN_144717c65(plVar6,uVar4);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_147486664(param_1 + 0x90);
    return;
  }
  return;
}



// FUNCTION 1406e3b0c FUN_1406e3b0c body=131 status=ok
// SIG undefined FUN_1406e3b0c(void)

void FUN_1406e3b0c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar6 = FUN_1400ef5b4();
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (cVar4 != '\0') {
            (**(code **)(*plVar3 + 0x98))(plVar3);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 1406e3b96 FUN_1406e3b96 body=76 status=ok
// SIG undefined FUN_1406e3b96(void)

void FUN_1406e3b96(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x424) < 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    FUN_147f5bb6c(param_1 + 0x418,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  FUN_1408f9a78(param_1);
  return;
}



// FUNCTION 1406e3bef FUN_1406e3bef body=801 status=ok
// SIG undefined FUN_1406e3bef(void)

void FUN_1406e3bef(uint param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  
  uVar17 = 0x22;
  if (2 < (int)param_1) {
    cVar6 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar5 = DAT_14ca43398;
    if (cVar6 != '\0') {
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar13 = 0;
      }
      else if (iVar2 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar13 = 1;
      }
      uVar17 = 0x22 - (*(int *)(lVar5 + uVar13 * 4) == 0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b61e0) {
    FUN_144b3d300(&DAT_14c9b61e0);
    if (DAT_14c9b61e0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar11 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
      if (plVar11 == (longlong *)0x0) {
        DAT_14c9b61d8 = 0;
      }
      else {
        DAT_14c9b61d8 = (**(code **)(*plVar11 + 0x68))(plVar11);
      }
      _Init_thread_footer(&DAT_14c9b61e0);
    }
  }
  if ((DAT_14c9b61d8 == 0) || (*(int *)(DAT_14c9b61d8 + 4) != 2)) {
    puVar9 = &DAT_14c9c0d50;
  }
  else {
    puVar9 = &DAT_14c9b7ad0;
  }
  puVar16 = &DAT_14c9c0e90;
  if ((uVar17 & 2) == 0) {
    puVar16 = &DAT_14c9c07b0;
  }
  uVar3 = *puVar9;
  uVar4 = *(undefined8 *)(puVar16 + 0x10);
  puVar9 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar14 = (uint *)*puVar9;
  if (puVar14 != (uint *)0x0) goto LAB_1406e3d13;
  while( true ) {
    FUN_14472e504(puVar9);
    puVar14 = (uint *)*puVar9;
LAB_1406e3d13:
    puVar10 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar15 = puVar14[0x12];
    if (puVar10 + 0x13 <= puVar14 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
      LOCK();
      uVar1 = *puVar14;
      *puVar14 = *puVar14 + uVar15 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar15) != 0xffffffff) break;
      puVar14 = (uint *)*puVar9;
      *puVar14 = 0xffffffff;
      *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
      puVar14[0x12] = 0;
      *puVar9 = puVar14;
      puVar10 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
      uVar15 = 0;
      if (puVar10 + 0x13 <= puVar14 + 0x4000) {
        uVar15 = 1;
        goto LAB_1406e3d8f;
      }
    }
  }
  uVar15 = uVar15 + 1;
LAB_1406e3d8f:
  *(undefined8 **)(puVar14 + 0x10) = puVar10 + 0x14;
  puVar14[0x12] = uVar15;
  *(int *)(puVar10 + -1) = ((int)puVar10 + -8) - (int)puVar14;
  *(undefined4 *)((longlong)puVar10 + -4) = 0x98;
  *(undefined4 *)(puVar10 + 1) =
       *(undefined4 *)(&DAT_14ca11fcc + (ulonglong)(2 < (int)param_1) * 0xe8);
  *(undefined2 *)(puVar10 + 2) = 0x22b;
  puVar10[3] = param_2;
  *(uint *)(puVar10 + 4) = param_1;
  puVar10[5] = param_3;
  puVar10[6] = param_4;
  *(undefined1 *)(puVar10 + 7) = 0x3a;
  *puVar10 = &PTR_FUN_14a1f0c90;
  puVar10[8] = uVar3;
  puVar10[9] = uVar4;
  *(uint *)(puVar10 + 10) = uVar17;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  *(undefined4 *)(puVar10 + 0xf) = 0;
  *(undefined4 *)(puVar10 + 0x10) = 0xf;
  *(undefined2 *)((longlong)puVar10 + 0x84) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x86) = 1;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar10 + 0x11) = uVar12;
  *(undefined1 *)((longlong)puVar10 + 0x8c) = 0;
  *(undefined4 *)(puVar10 + 0x12) = 0;
  return;
}



// FUNCTION 1406e3f1d FUN_1406e3f1d body=798 status=ok
// SIG undefined FUN_1406e3f1d(void)

void FUN_1406e3f1d(uint param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  
  uVar17 = 0x22;
  if (2 < (int)param_1) {
    cVar6 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar5 = DAT_14ca43398;
    if (cVar6 != '\0') {
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar13 = 0;
      }
      else if (iVar2 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar13 = 1;
      }
      uVar17 = 0x22 - (*(int *)(lVar5 + uVar13 * 4) == 0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b61e0) {
    FUN_144b3d300(&DAT_14c9b61e0);
    if (DAT_14c9b61e0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar11 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
      if (plVar11 == (longlong *)0x0) {
        DAT_14c9b61d8 = 0;
      }
      else {
        DAT_14c9b61d8 = (**(code **)(*plVar11 + 0x68))(plVar11);
      }
      _Init_thread_footer(&DAT_14c9b61e0);
    }
  }
  if ((DAT_14c9b61d8 == 0) || (*(int *)(DAT_14c9b61d8 + 4) != 2)) {
    puVar9 = &DAT_14c9c0d50;
  }
  else {
    puVar9 = &DAT_14c9b7ad0;
  }
  puVar16 = &DAT_14c9c0e90;
  if ((uVar17 & 2) == 0) {
    puVar16 = &DAT_14c9c07b0;
  }
  uVar3 = *puVar9;
  uVar4 = *(undefined8 *)(puVar16 + 0x10);
  puVar9 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar14 = (uint *)*puVar9;
  if (puVar14 != (uint *)0x0) goto LAB_1406e4041;
  while( true ) {
    FUN_14472e504(puVar9);
    puVar14 = (uint *)*puVar9;
LAB_1406e4041:
    puVar10 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar15 = puVar14[0x12];
    if (puVar10 + 0x13 <= puVar14 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
      LOCK();
      uVar1 = *puVar14;
      *puVar14 = *puVar14 + uVar15 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar15) != 0xffffffff) break;
      puVar14 = (uint *)*puVar9;
      *puVar14 = 0xffffffff;
      *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
      puVar14[0x12] = 0;
      *puVar9 = puVar14;
      puVar10 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
      uVar15 = 0;
      if (puVar10 + 0x13 <= puVar14 + 0x4000) {
        uVar15 = 1;
        goto LAB_1406e40bd;
      }
    }
  }
  uVar15 = uVar15 + 1;
LAB_1406e40bd:
  *(undefined8 **)(puVar14 + 0x10) = puVar10 + 0x14;
  puVar14[0x12] = uVar15;
  *(int *)(puVar10 + -1) = ((int)puVar10 + -8) - (int)puVar14;
  *(undefined4 *)((longlong)puVar10 + -4) = 0x98;
  *(undefined4 *)(puVar10 + 1) = (&DAT_14ca11f28)[(ulonglong)(2 < (int)param_1) * 0x3a];
  *(undefined2 *)(puVar10 + 2) = 0x202;
  puVar10[3] = param_2;
  *(uint *)(puVar10 + 4) = param_1;
  puVar10[5] = param_3;
  puVar10[6] = param_4;
  *(undefined1 *)(puVar10 + 7) = 0x3a;
  *puVar10 = &PTR_FUN_14a1f0c90;
  puVar10[8] = uVar3;
  puVar10[9] = uVar4;
  *(uint *)(puVar10 + 10) = uVar17;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  *(undefined4 *)(puVar10 + 0xf) = 0;
  *(undefined4 *)(puVar10 + 0x10) = 0xf;
  *(undefined2 *)((longlong)puVar10 + 0x84) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x86) = 1;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar10 + 0x11) = uVar12;
  *(undefined1 *)((longlong)puVar10 + 0x8c) = 0;
  *(undefined4 *)(puVar10 + 0x12) = 0;
  return;
}



// FUNCTION 1406e423c FUN_1406e423c body=305 status=ok
// SIG undefined FUN_1406e423c(void)

void FUN_1406e423c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1406e42d6;
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
LAB_1406e42af:
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
      goto LAB_1406e42af;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1406e42d6;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1406e42d6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e436e FUN_1406e436e body=1083 status=ok
// SIG undefined FUN_1406e436e(void)

void FUN_1406e436e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  char cVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) goto LAB_1406e45bd;
  lVar4 = param_1 + 0x208;
  FUN_1448d5e3c(&local_48,lVar4);
  plVar2 = local_40;
  lVar6 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar9 = FUN_1406e4c92(lVar5,lVar6 + 0x10);
  if ((cVar9 != '\0') && (puVar7 = *(ushort **)(lVar5 + 0x80), puVar7 != (ushort *)0x0)) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_1406e45bd;
  FUN_1448d5e3c(&local_48,lVar4);
  plVar2 = local_40;
  lVar8 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar9 = FUN_1406e5ab0(lVar6,lVar8 + 0x1b0);
  if ((cVar9 != '\0') && (puVar7 = *(ushort **)(lVar5 + 0x80), puVar7 != (ushort *)0x0)) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_1406e45bd;
  FUN_1448d5e3c(&local_48,lVar4);
  plVar2 = local_40;
  lVar8 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar9 = FUN_1406e47aa(lVar6,lVar8 + 0x60);
  if ((cVar9 != '\0') && (puVar7 = *(ushort **)(lVar5 + 0x80), puVar7 != (ushort *)0x0)) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_1406e45bd;
  FUN_1448d5e3c(&local_48,lVar4);
  plVar2 = local_40;
  lVar8 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar9 = FUN_1406e521a(lVar6,lVar8 + 0x40);
  if ((cVar9 != '\0') && (puVar7 = *(ushort **)(lVar5 + 0x80), puVar7 != (ushort *)0x0)) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_1406e45bd;
  FUN_1448d5e3c(&local_48,lVar4);
  plVar2 = local_40;
  lVar8 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar9 = FUN_1406e4832(lVar6,lVar8 + 0x90);
  if (cVar9 == '\0') {
    FUN_1448d5e3c(&local_48,lVar4);
    plVar2 = local_40;
    lVar8 = local_48;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    cVar9 = FUN_1406e49e0(lVar6,lVar8 + 0x2f0);
    if (cVar9 != '\0') goto LAB_1406e4628;
  }
  else {
LAB_1406e4628:
    puVar7 = *(ushort **)(lVar5 + 0x80);
    if (puVar7 != (ushort *)0x0) {
      *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 != 0) {
    FUN_1448d5e3c(&local_48,lVar4);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)local_40 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    cVar9 = FUN_1406e48e2(lVar6,local_48 + 0x500);
    if ((cVar9 != '\0') && (puVar7 = *(ushort **)(lVar5 + 0x80), puVar7 != (ushort *)0x0)) {
      *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
LAB_1406e45bd:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e47aa FUN_1406e47aa body=135 status=ok
// SIG undefined FUN_1406e47aa(void)

ulonglong FUN_1406e47aa(longlong param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  SRWLock = (PSRWLOCK)(lVar4 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0x308);
  iVar2 = *(int *)(lVar4 + 0xa8);
  if (iVar1 != iVar2) {
    *(int *)(param_1 + 0x308) = iVar2;
    lVar4 = lVar4 + 0x88;
    FUN_144a787a6(param_1 + 0x2d0,lVar4);
    puVar3 = *(ushort **)(param_1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared(SRWLock);
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),iVar1 != iVar2) & 0xffffffff;
}



// FUNCTION 1406e4832 FUN_1406e4832 body=175 status=ok
// SIG undefined FUN_1406e4832(void)

ulonglong FUN_1406e4832(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  lVar1 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x110));
  if (*(int *)(param_1 + 0x318) != *(int *)(lVar1 + 0x108)) {
    *(int *)(param_1 + 0x318) = *(int *)(lVar1 + 0x108);
    if (*(int *)(lVar1 + 0x50) == 0) {
      if (*(int *)(lVar1 + 0x60) == 0) {
        if (*(int *)(param_1 + 0x224) != *(int *)(lVar1 + 0x7c)) {
          puVar2 = (undefined4 *)(lVar1 + 0x7c);
          puVar3 = (undefined8 *)(lVar1 + 0x70);
LAB_1406e4891:
          *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(puVar3 + 1);
          *(undefined8 *)(param_1 + 0x218) = *puVar3;
          *(undefined4 *)(param_1 + 0x224) = *puVar2;
          uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_1406e485f;
        }
      }
      else if (*(int *)(param_1 + 0x224) != *(int *)(lVar1 + 0x6c)) {
        puVar3 = (undefined8 *)(lVar1 + 0x60);
        puVar2 = (undefined4 *)(lVar1 + 0x6c);
        goto LAB_1406e4891;
      }
    }
    else if (*(int *)(param_1 + 0x224) != *(int *)(lVar1 + 0x5c)) {
      puVar3 = (undefined8 *)(lVar1 + 0x50);
      puVar2 = (undefined4 *)(lVar1 + 0x5c);
      goto LAB_1406e4891;
    }
  }
  uVar4 = 0;
LAB_1406e485f:
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x110));
  return uVar4 & 0xffffffff;
}



// FUNCTION 1406e48e2 FUN_1406e48e2 body=252 status=ok
// SIG undefined FUN_1406e48e2(void)

ulonglong FUN_1406e48e2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x20));
  if (*(int *)(param_1 + 800) != *(int *)(lVar3 + 0x18)) {
    *(int *)(param_1 + 800) = *(int *)(lVar3 + 0x18);
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_1413a454c(local_38,*(undefined4 *)(lVar3 + 0x10),0);
    FUN_140008f88(param_1 + 0x2e8,local_38);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    plVar4 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (*(int *)(param_1 + 0x2fc) != *(int *)(lVar3 + 0x14)) {
      *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(lVar3 + 0x10);
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(lVar3 + 0x14);
      uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_1406e491b;
    }
  }
  uVar5 = 0;
LAB_1406e491b:
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e49e0 FUN_1406e49e0 body=587 status=ok
// SIG undefined FUN_1406e49e0(void)

ulonglong FUN_1406e49e0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x18));
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_144a78877(*(undefined4 *)(param_1 + 0x218),*(int *)(param_1 + 0x220));
  }
  iVar5 = FUN_1406e4c2c(param_2);
  if (iVar5 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x1d0 + *param_2;
  }
  lVar11 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  if (*(int *)(param_1 + 0x31c) == (int)param_2[0x17]) {
LAB_1406e4a62:
    uVar9 = 0;
    goto LAB_1406e4a64;
  }
  *(int *)(param_1 + 0x31c) = (int)param_2[0x17];
  iVar5 = *(int *)(param_1 + 0x22c);
  if (lVar11 == 0) {
    if (*(char *)(param_1 + 0x228) == '\0') {
      if (iVar5 != 0) goto LAB_1406e4a62;
      iVar5 = 1;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    *(undefined1 *)(param_1 + 0x228) = 0;
    *(int *)(param_1 + 0x22c) = iVar5;
    uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    goto LAB_1406e4a64;
  }
  if (*(char *)(param_1 + 0x228) == '\0') {
    iVar5 = iVar5 + 1;
LAB_1406e4abc:
    *(undefined1 *)(param_1 + 0x228) = 1;
    *(int *)(param_1 + 0x22c) = iVar5;
    bVar10 = 1;
  }
  else {
    if (iVar5 == 0) {
      iVar5 = 1;
      goto LAB_1406e4abc;
    }
    bVar10 = 0;
  }
  bVar1 = FUN_1449a0272(param_1 + 0x230,lVar11);
  bVar2 = FUN_1449a0272(param_1 + 0x260,lVar11 + 0x10);
  bVar3 = FUN_1449a0272(param_1 + 0x278,lVar11 + 0x30);
  uVar6 = FUN_1449a0272(param_1 + 0x290,lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x28) < 2) {
    FUN_144a5dc74(local_78);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"UIMissionLog_NoLocation",0);
    FUN_140ac6c96(&local_68,local_78);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    uVar8 = FUN_1447a1f4a(local_78);
    bVar4 = FUN_1449a0272(param_1 + 0x248,uVar8);
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
  }
  else {
    bVar4 = FUN_1449a0272(param_1 + 0x248,lVar11 + 0x20);
  }
  uVar9 = (ulonglong)
          CONCAT31((int3)((uint)uVar6 >> 8),(byte)uVar6 | bVar3 | bVar2 | bVar1 | bVar10 | bVar4);
LAB_1406e4a64:
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x18));
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e4c2c FUN_1406e4c2c body=101 status=ok
// SIG undefined FUN_1406e4c2c(void)

int FUN_1406e4c2c(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x1d0;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x1c8 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406e4c92 FUN_1406e4c92 body=1414 status=ok
// SIG undefined FUN_1406e4c92(void)

ulonglong FUN_1406e4c92(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  PSRWLOCK SRWLock;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_d8 [40];
  int local_b0;
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  PSRWLOCK local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_2 = (longlong *)*param_2;
  SRWLock = (PSRWLOCK)(param_2 + 4);
  AcquireSRWLockShared(SRWLock);
  iVar14 = *(int *)((longlong)param_1 + 0x30c);
  iVar16 = (int)param_2[3];
  plVar7 = param_1;
  if (iVar14 != iVar16) {
    *(int *)((longlong)param_1 + 0x30c) = iVar16;
    local_b0 = iVar16;
    local_ac = iVar14;
    local_a8 = param_1;
    local_90 = SRWLock;
    if ((longlong)(int)param_2[1] != 0) {
      plVar7 = (longlong *)*param_2;
      plVar12 = plVar7 + (longlong)(int)param_2[1] * 8;
      local_a0 = param_1 + 0x2e;
      local_98 = param_1 + 0x2b;
      param_1 = param_1 + 0x28;
LAB_1406e4d4f:
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      FUN_1400b2348(plVar7,&local_78,1);
      plVar2 = local_78;
      uVar9 = (int)uStack_70 - 1;
      if ((int)uStack_70 == 0) {
        uVar9 = 0;
      }
      if (0 < (int)uVar9) {
        uVar10 = 0;
        do {
          uVar8 = *(ushort *)((longlong)local_78 + uVar10 * 2);
          *(ushort *)((longlong)local_78 + uVar10 * 2) =
               (ushort)(uVar8 - 0x41 < 0x1a) * 0x20 + uVar8;
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      plVar5 = local_78;
      if ((int)uStack_70 == 0) {
        plVar5 = (longlong *)&DAT_149dfb77a;
      }
      lVar11 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)plVar5 + lVar11);
        uVar10 = (ulonglong)uVar8;
        uVar13 = *(ushort *)((longlong)&DAT_14ae66bec + lVar11);
        if (uVar8 != uVar13) break;
        if (uVar8 == 0) goto LAB_1406e4f0e;
LAB_1406e4dda:
        lVar11 = lVar11 + 2;
      }
      if ((uVar13 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar15 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar15]) goto LAB_1406e4dda;
      }
      if (uVar8 != uVar13) {
        lVar11 = 0;
        goto LAB_1406e4e0a;
      }
LAB_1406e4f0e:
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_140e6da68(&local_78,plVar7[6],0,&local_88);
      plVar5 = local_78;
      if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
        plVar5 = (longlong *)(**(code **)(*local_78 + 0x50))();
      }
      FUN_1447a1fc0(plVar5);
      pcVar3 = *(code **)(*local_78 + 0x28);
      plVar5 = param_1;
      if (pcVar3 == FUN_14482841c) {
        plVar6 = local_78 + 3;
        if (local_78[5] != 0) {
          plVar6 = (longlong *)(local_78[5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar6 = local_78 + 2;
      }
      else {
        plVar6 = (longlong *)(*pcVar3)(local_78);
      }
      goto LAB_1406e4f8c;
    }
LAB_1406e50bf:
    SRWLock = local_90;
    plVar12 = local_a8;
    if ((int)local_a8[0x29] < 2) {
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_1413a454c(&local_78,0,0);
      plVar7 = local_78;
      if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
        plVar7 = (longlong *)(**(code **)(*local_78 + 0x50))();
      }
      FUN_1447a1fc0(plVar7);
      pcVar3 = *(code **)(*local_78 + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar7 = local_78 + 3;
        if (local_78[5] != 0) {
          plVar7 = (longlong *)(local_78[5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar7 = local_78 + 2;
      }
      else {
        plVar7 = (longlong *)(*pcVar3)(local_78);
      }
      FUN_1449a0272(plVar12 + 0x28,plVar7);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      plVar7 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    puVar4 = (ushort *)plVar12[0x10];
    iVar14 = local_ac;
    iVar16 = local_b0;
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(plVar12 + 0xf) & 0x3f));
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)plVar7 >> 8),iVar14 != iVar16) & 0xffffffff;
LAB_1406e4e0a:
  uVar8 = *(ushort *)((longlong)plVar5 + lVar11);
  uVar10 = (ulonglong)uVar8;
  uVar13 = *(ushort *)((longlong)L"eridium" + lVar11);
  if (uVar8 == uVar13) {
    if (uVar8 == 0) goto LAB_1406e4fe9;
LAB_1406e4e28:
    lVar11 = lVar11 + 2;
    goto LAB_1406e4e0a;
  }
  if ((uVar13 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar15 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar15]) goto LAB_1406e4e28;
  }
  if (uVar8 != uVar13) {
    lVar11 = 0;
    goto LAB_1406e4e58;
  }
LAB_1406e4fe9:
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_140e6da68(&local_78,plVar7[6],0,&local_88);
  plVar5 = local_78;
  if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_78 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar3 = *(code **)(*local_78 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar5 = local_98;
    plVar6 = local_78 + 3;
    if (local_78[5] != 0) {
      plVar5 = local_98;
      plVar6 = (longlong *)(local_78[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar5 = local_98;
    plVar6 = local_78 + 2;
  }
  else {
    plVar6 = (longlong *)(*pcVar3)(local_78);
    plVar5 = local_98;
  }
  goto LAB_1406e4f8c;
LAB_1406e4e58:
  uVar8 = *(ushort *)((longlong)plVar5 + lVar11);
  uVar10 = (ulonglong)uVar8;
  uVar13 = *(ushort *)((longlong)&DAT_14b9d55b8 + lVar11);
  if (uVar8 == uVar13) {
    if (uVar8 == 0) goto LAB_1406e4ea0;
LAB_1406e4e72:
    lVar11 = lVar11 + 2;
    goto LAB_1406e4e58;
  }
  if ((uVar13 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar15 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar15]) goto LAB_1406e4e72;
  }
  if (uVar8 != uVar13) goto LAB_1406e4fca;
LAB_1406e4ea0:
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_140e6da68(&local_78,plVar7[6],0,&local_88);
  plVar5 = local_78;
  if (*(code **)(*local_78 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_78 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar3 = *(code **)(*local_78 + 0x28);
  plVar5 = local_a0;
  if (pcVar3 == FUN_14482841c) {
    plVar6 = local_78 + 3;
    if (local_78[5] != 0) {
      plVar6 = (longlong *)(local_78[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar6 = local_78 + 2;
  }
  else {
    plVar6 = (longlong *)(*pcVar3)(local_78);
    plVar5 = local_a0;
  }
LAB_1406e4f8c:
  FUN_1449a0272(plVar5,plVar6);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_80 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1406e4fca:
  if (plVar2 != (longlong *)0x0) {
    FUN_1400020a8(plVar2);
  }
  plVar7 = plVar7 + 8;
  if (plVar7 == plVar12) goto LAB_1406e50bf;
  goto LAB_1406e4d4f;
}



// FUNCTION 1406e521a FUN_1406e521a body=2196 status=ok
// SIG undefined FUN_1406e521a(void)

byte FUN_1406e521a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_2c8 [46];
  byte local_29a;
  byte local_299;
  longlong local_298;
  undefined4 *local_290;
  longlong local_288 [2];
  longlong *local_278 [2];
  undefined8 local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong *plStack_250;
  longlong *local_248 [2];
  undefined8 local_238;
  longlong *plStack_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *plStack_210;
  longlong *local_200 [2];
  longlong *local_1f0 [2];
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  int local_1a0 [6];
  longlong local_188;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  int local_16c;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_108;
  int local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  param_2 = (longlong *)*param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 5));
  if (*(int *)(param_1 + 0x314) != (int)param_2[4]) {
    *(int *)(param_1 + 0x314) = (int)param_2[4];
    if ((longlong)(int)param_2[1] != 0) {
      lVar6 = *param_2;
      lVar8 = (longlong)(int)param_2[1] * 0xf8 + lVar6;
      local_290 = (undefined4 *)(param_1 + 0x1d0);
      bVar7 = 0;
      local_298 = lVar8;
      do {
        memset(local_1a0,0,0xf0);
        local_88[0] = 0;
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_f8 = 0;
        local_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
          lVar8 = local_298;
        }
        local_c8 = DAT_14c844840;
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
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_1407f50ea(local_1a0);
        local_b0 = *(undefined4 *)(lVar6 + 0xf0);
        puVar9 = (undefined4 *)(param_1 + 0x188);
        if ((local_1a0[0] == DAT_14cbe3cd8) || (puVar9 = local_290, local_1a0[0] == DAT_14cbe3d00))
        {
          iVar3 = puVar9[1];
          if (iVar3 != local_104) {
            *puVar9 = local_108;
            puVar9[1] = local_104;
          }
          iVar4 = puVar9[3];
          if (iVar4 != local_174) {
            puVar9[2] = local_178;
            puVar9[3] = local_174;
          }
          local_299 = iVar3 != local_104 || iVar4 != local_174;
          iVar3 = puVar9[5];
          if (iVar3 != local_16c) {
            puVar9[4] = local_170;
            puVar9[5] = local_16c;
          }
          local_29a = iVar3 != local_16c;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
          local_1e0 = DAT_14c844840;
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
          local_1d8 = 0;
          FUN_140ac6c96(&DAT_14cbe3ff8,&local_1e0);
          local_218 = (longlong *)0x0;
          plStack_210 = (longlong *)0x0;
          FUN_1413a454c(local_200,local_178,0,&local_218);
          FUN_14023409e(&local_228,&local_1e0,1);
          local_a8 = CONCAT44(local_a8._4_4_,4);
          FUN_14023423e(&local_98,local_200);
          local_1c0 = &local_a8;
          local_1b8 = local_88;
          FUN_14010d304(&local_1b0,&local_1c0);
          local_1d0 = local_228;
          local_1c8 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_220 + 1) = (int)local_220[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_1f0,&local_1d0,&local_1b0);
          FUN_14007f2db(local_1b0,local_1a8);
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          if (local_98 != (longlong *)0x0) {
            (**(code **)(*local_98 + 0x10))();
          }
          plVar5 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_220 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (local_200[0] != (longlong *)0x0) {
            (**(code **)(*local_200[0] + 0x10))();
          }
          FUN_140008f88(puVar9 + 10,local_1f0);
          if (local_1f0[0] != (longlong *)0x0) {
            (**(code **)(*local_1f0[0] + 0x10))();
          }
          plVar5 = plStack_210;
          if (plStack_210 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_210 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_210)(plStack_210);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          local_238 = 0;
          plStack_230 = (longlong *)0x0;
          FUN_140e6da68(&local_218,local_148,0,&local_238);
          local_258 = 0;
          plStack_250 = (longlong *)0x0;
          FUN_140e6da68(local_248,local_158,0,&local_258);
          FUN_1400b22c2(local_288,"{0} / {1}");
          FUN_140233b1a(local_278,local_288);
          FUN_14023409e(&local_268,local_278,1);
          local_a8 = CONCAT44(local_a8._4_4_,4);
          FUN_14023423e(&local_98,local_248);
          local_88[0] = CONCAT44(local_88[0]._4_4_,4);
          FUN_14023423e(local_78,&local_218);
          local_1c0 = &local_a8;
          local_1b8 = (undefined8 *)local_68;
          FUN_14010d304(&local_1b0,&local_1c0);
          local_1d0 = local_268;
          local_1c8 = local_260;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_260 + 1) = (int)local_260[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_1f0,&local_1d0,&local_1b0);
          FUN_14007f2db(local_1b0,local_1a8);
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          bVar7 = bVar7 | local_29a | local_299;
          lVar8 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_a8 + lVar8) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_a8 + lVar8) + 0x10))();
              *(undefined8 *)((longlong)&local_a8 + lVar8) = 0;
              *(undefined4 *)((longlong)&uStack_a0 + lVar8) = 0;
            }
            plVar5 = local_260;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != -0x10);
          if (local_260 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_260 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_260)(local_260);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          lVar8 = local_298;
          if (local_248[0] != (longlong *)0x0) {
            (**(code **)(*local_248[0] + 0x10))();
          }
          if (local_218 != (longlong *)0x0) {
            (**(code **)(*local_218 + 0x10))();
          }
          FUN_140008f88(puVar9 + 0xe);
          if (local_1f0[0] != (longlong *)0x0) {
            (**(code **)(*local_1f0[0] + 0x10))();
          }
          if (local_278[0] != (longlong *)0x0) {
            (**(code **)(*local_278[0] + 0x10))();
          }
          if (local_288[0] != 0) {
            FUN_1400020a8();
          }
          plVar5 = plStack_250;
          if (plStack_250 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_250 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_250)(plStack_250);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          plVar5 = plStack_230;
          if (plStack_230 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_230 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_230)(plStack_230);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (local_1e0 != (longlong *)0x0) {
            (**(code **)(*local_1e0 + 0x10))();
          }
        }
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        lVar6 = lVar6 + 0xf8;
      } while (lVar6 != lVar8);
      goto LAB_1406e5267;
    }
  }
  bVar7 = 0;
LAB_1406e5267:
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 5));
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7 & 1;
}



// FUNCTION 1406e5ab0 FUN_1406e5ab0 body=2266 status=ok
// SIG undefined FUN_1406e5ab0(void)

ulonglong FUN_1406e5ab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  longlong *unaff_RBX;
  byte bVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  byte bVar20;
  undefined8 in_R11;
  bool bVar22;
  undefined1 auStack_1a8 [44];
  uint local_17c;
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168 [2];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  ulonglong uVar21;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar8 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x1c0));
  iVar4 = *(int *)(param_1 + 0x310);
  iVar5 = *(int *)(lVar8 + 0x1b8);
  if (iVar4 == iVar5) goto LAB_1406e5b05;
  *(int *)(param_1 + 0x310) = iVar5;
  iVar11 = *(int *)(param_1 + 0xdc);
  iVar13 = *(int *)(lVar8 + 0x5c);
  if (iVar11 != iVar13) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar8 + 0x58);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(lVar8 + 0x5c);
  }
  iVar17 = *(int *)(param_1 + 0xd4);
  iVar6 = *(int *)(lVar8 + 0x54);
  if (iVar17 == iVar6) {
    iVar10 = *(int *)(param_1 + 0xd0);
  }
  else {
    iVar10 = *(int *)(lVar8 + 0x50);
    *(int *)(param_1 + 0xd0) = iVar10;
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(lVar8 + 0x54);
  }
  iVar7 = *(int *)(param_1 + 0xd8);
  iVar18 = *(int *)(param_1 + 0xe4);
  if ((bool)*(char *)(param_1 + 0xe0) == iVar7 <= iVar10) {
    in_R11 = 0;
    bVar22 = iVar18 == 0;
    iVar18 = 0;
    if (bVar22) goto LAB_1406e5f64;
  }
  else {
LAB_1406e5f64:
    *(bool *)(param_1 + 0xe0) = iVar7 <= iVar10;
    *(int *)(param_1 + 0xe4) = iVar18 + 1;
    in_R11 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
  }
  bVar20 = (byte)in_R11 | (iVar11 != iVar13 || iVar17 != iVar6);
  uVar21 = CONCAT71((int7)((ulonglong)in_R11 >> 8),bVar20);
  if (bVar20 == 1) {
    local_17c = (uint)uVar21;
    if (iVar10 < iVar7) {
      pcVar14 = "ItemContainerCountFormat";
    }
    else {
      pcVar14 = "ItemContainerFullCountFormat";
    }
    uStack_88 = 0;
    local_90 = 0;
    local_98[0] = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    FUN_1446ddda2(&local_a8,pcVar14,0);
    FUN_1410d1eba(local_e8,&local_a8);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    FUN_1413a454c(local_108,*(undefined4 *)(param_1 + 0xd8),0);
    local_138 = 0;
    plStack_130 = (longlong *)0x0;
    FUN_1413a454c(local_128,*(undefined4 *)(param_1 + 0xd0),0);
    FUN_14023409e(&local_148,local_e8,1);
    local_a8 = CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_128);
    uStack_88 = CONCAT44(uStack_88._4_4_,4);
    FUN_14023423e(local_78,local_108);
    local_c8 = &local_a8;
    local_c0 = local_68;
    FUN_14010d304(&local_b8);
    local_d8 = local_148;
    local_d0 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f8,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar19 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_a8 + lVar19) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_a8 + lVar19) + 0x10))();
        *(undefined8 *)((longlong)&local_a8 + lVar19) = 0;
        *(undefined4 *)((longlong)local_98 + lVar19 + -8) = 0;
      }
      lVar19 = lVar19 + -0x20;
    } while (lVar19 != -0x10);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar3 = (int *)((longlong)local_140 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    FUN_1447a1f4a(local_f8);
    FUN_144a787a6(param_1 + 0xc0);
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    plVar1 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_130 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_110 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    uVar21 = (ulonglong)local_17c;
  }
  if ((longlong)*(int *)(lVar8 + 0x88) == 0) {
    iVar11 = 0;
    iVar13 = 0;
  }
  else {
    lVar19 = 0;
    iVar13 = 0;
    iVar11 = 0;
    do {
      uVar15 = *(uint *)(*(longlong *)(lVar8 + 0x80) + 0x18 + lVar19);
      iVar13 = iVar13 + (uint)((uVar15 >> 3 & 1) != 0);
      iVar11 = iVar11 + (uint)((uVar15 >> 2 & 1) != 0);
      lVar19 = lVar19 + 0x430;
    } while ((longlong)*(int *)(lVar8 + 0x88) * 0x430 - lVar19 != 0);
  }
  iVar17 = *(int *)(param_1 + 0x134);
  if (iVar13 == *(int *)(param_1 + 0x130)) {
    bVar20 = 0;
    bVar22 = iVar17 == 0;
    iVar17 = 0;
    if (bVar22) goto LAB_1406e5f7d;
  }
  else {
LAB_1406e5f7d:
    *(int *)(param_1 + 0x130) = iVar13;
    *(int *)(param_1 + 0x134) = iVar17 + 1;
    bVar20 = 1;
  }
  iVar13 = *(int *)(param_1 + 0x13c);
  if (iVar11 == *(int *)(param_1 + 0x138)) {
    bVar16 = 0;
    bVar22 = iVar13 == 0;
    iVar13 = 0;
    if (bVar22) goto LAB_1406e5f94;
  }
  else {
LAB_1406e5f94:
    *(int *)(param_1 + 0x138) = iVar11;
    *(int *)(param_1 + 0x13c) = iVar13 + 1;
    bVar16 = 1;
  }
  if (((byte)(bVar20 | bVar16 | (byte)uVar21) == 1) &&
     (puVar9 = *(ushort **)(param_1 + 0x80), puVar9 != (ushort *)0x0)) {
    *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  iVar11 = *(int *)(param_1 + 0x11c);
  iVar13 = *(int *)(lVar8 + 0x14);
  if (iVar11 != iVar13) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar8 + 0x10);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(lVar8 + 0x14);
  }
  iVar17 = *(int *)(param_1 + 0x114);
  iVar6 = *(int *)(lVar8 + 0xc);
  if (iVar17 == iVar6) {
    iVar10 = *(int *)(param_1 + 0x110);
  }
  else {
    iVar10 = *(int *)(lVar8 + 8);
    *(int *)(param_1 + 0x110) = iVar10;
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar8 + 0xc);
  }
  iVar7 = *(int *)(param_1 + 0x118);
  uVar15 = *(uint *)(param_1 + 0x124);
  unaff_RBX = (longlong *)(ulonglong)uVar15;
  if ((bool)*(char *)(param_1 + 0x120) == iVar7 <= iVar10) {
    if (uVar15 == 0) {
      uVar15 = 0;
      goto LAB_1406e5fdf;
    }
    if ((iVar11 == iVar13) && (iVar17 == iVar6)) goto LAB_1406e5b05;
  }
  else {
LAB_1406e5fdf:
    *(bool *)(param_1 + 0x120) = iVar7 <= iVar10;
    *(uint *)(param_1 + 0x124) = uVar15 + 1;
  }
  if (iVar10 < iVar7) {
    pcVar14 = "ItemContainerCountFormat";
  }
  else {
    pcVar14 = "ItemContainerFullCountFormat";
  }
  uStack_88 = 0;
  local_90 = 0;
  local_98[0] = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  FUN_1446ddda2(&local_a8,pcVar14,0);
  FUN_1410d1eba(local_e8,&local_a8);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  FUN_1413a454c(local_158,*(undefined4 *)(param_1 + 0x118),0);
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  FUN_1413a454c(local_168,*(undefined4 *)(param_1 + 0x110),0);
  FUN_14023409e(&local_178,local_e8,1);
  local_a8 = CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_168);
  uStack_88 = CONCAT44(uStack_88._4_4_,4);
  FUN_14023423e(local_78,local_158);
  local_c8 = &local_a8;
  local_c0 = local_68;
  FUN_14010d304(&local_b8);
  local_d8 = local_178;
  local_d0 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_f8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar19 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_a8 + lVar19) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_a8 + lVar19) + 0x10))();
      *(undefined8 *)((longlong)&local_a8 + lVar19) = 0;
      *(undefined4 *)((longlong)local_98 + lVar19 + -8) = 0;
    }
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != -0x10);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar3 = (int *)((longlong)local_170 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_170 + 0x10))(local_170);
      }
    }
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  uVar12 = FUN_1447a1f4a(local_f8);
  FUN_144a787a6(param_1 + 0x100,uVar12);
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  plVar1 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_130 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  unaff_RBX = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar3 = (int *)((longlong)unaff_RBX + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  puVar9 = *(ushort **)(param_1 + 0x80);
  if (puVar9 != (ushort *)0x0) {
    *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
LAB_1406e5b05:
  ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 0x1c0));
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar4 != iVar5) & 0xffffffff;
}



// FUNCTION 1406e638c FUN_1406e638c body=264 status=ok
// SIG undefined FUN_1406e638c(void)

void FUN_1406e638c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  ulonglong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a1e97a();
  if (*(char *)(param_1 + 0xb08) == '\x01') {
    if (param_1 == 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar2 = *(uint *)(lVar6 + 0x10);
        bVar7 = uVar2 == 0;
        if (bVar7) {
          *(uint *)(lVar6 + 0x10) = uVar5;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar7) {
          uVar2 = uVar5;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14b41f750;
    local_40 = (ulonglong)uVar4 | uVar3 << 0x20;
    local_68 = FUN_143e0803a;
    FUN_1406e8fb6(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406e6496 FUN_1406e6496 body=139 status=ok
// SIG undefined FUN_1406e6496(void)

void FUN_1406e6496(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0xb8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x2d8);
  *(uint *)(lVar2 + 0x2d8) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x2dc) < iVar1 + 1U) {
    FUN_1406e8e54((longlong *)(lVar2 + 0x2d0),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x2d0) + (longlong)iVar1 * 8) = param_2;
  if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001406e6503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  return;
}



// FUNCTION 1406e6522 FUN_1406e6522 body=10545 status=ok
// SIG undefined FUN_1406e6522(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406e6522(LARGE_INTEGER param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  LARGE_INTEGER *pLVar16;
  char *pcVar17;
  char *pcVar18;
  uint *puVar19;
  uint *puVar20;
  byte bVar21;
  int iVar22;
  DWORD DVar23;
  uint uVar24;
  longlong *plVar26;
  longlong lVar27;
  uint uVar28;
  undefined8 unaff_RBP;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  undefined1 auVar40 [12];
  float fVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar51;
  double dVar52;
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  double dVar70;
  float fVar78;
  undefined1 auVar72 [16];
  float fVar77;
  double dVar71;
  double dVar79;
  double dVar80;
  float fVar82;
  double dVar81;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar83;
  double dVar84;
  float fVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar89;
  double dVar91;
  float fVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar108;
  float fVar109;
  undefined1 auVar107 [16];
  float fVar110;
  float fVar111;
  undefined1 auVar112 [16];
  float fVar113;
  float fVar114;
  float fVar117;
  float fVar118;
  undefined1 auVar115 [16];
  float fVar119;
  float fVar120;
  undefined1 auVar116 [16];
  undefined1 auStack_4c8 [32];
  double *local_4a8;
  undefined1 local_4a0;
  ulonglong local_490;
  uint local_484;
  longlong *local_480;
  undefined1 local_478 [8];
  float fStack_470;
  float fStack_46c;
  undefined1 local_468 [8];
  double dStack_460;
  longlong *local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  double local_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [12];
  float fStack_3dc;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  LARGE_INTEGER local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 uStack_390;
  double local_388;
  undefined8 uStack_380;
  double local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_308;
  undefined8 local_300 [3];
  undefined8 local_2e8;
  longlong local_2d8;
  longlong *local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined1 local_238;
  longlong local_208;
  longlong local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
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
  undefined2 uStack_170;
  undefined6 uStack_16e;
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
  LARGE_INTEGER LVar25;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if ((*(longlong *)(param_1.QuadPart + 0xa48) == 0) ||
     (*(char *)(*(longlong *)(param_1.QuadPart + 0xa48) + 0xa8) != '\x01')) {
LAB_1406e669d:
    uVar24 = 0;
  }
  else {
    iVar22 = *(int *)(param_1.QuadPart + 0x808);
    if (iVar22 < 1) {
      pauVar14 = (undefined1 (*) [16])&DAT_14c846060;
    }
    else {
      pauVar14 = (undefined1 (*) [16])FUN_1406cf6b2((char *)(param_1.QuadPart + 0x9a0));
      iVar22 = *(int *)(param_1.QuadPart + 0x808);
    }
    auVar105 = *pauVar14;
    auVar88 = pauVar14[1];
    *(byte *)(param_1.QuadPart + 0x9a4) = *(byte *)(param_1.QuadPart + 0x9a4) | 3;
    dVar71 = DAT_14c8464e8;
    *(double *)(param_1.QuadPart + 0xa10) = DAT_14c8464e0;
    *(double *)(param_1.QuadPart + 0xa18) = dVar71;
    *(double *)(param_1.QuadPart + 0xa20) = DAT_14c8464f0;
    auVar86._8_8_ = DAT_14c8464e8;
    auVar86._0_8_ = DAT_14c8464e0;
    *(undefined1 (*) [16])(param_1.QuadPart + 0x9f8) = auVar86;
    *(double *)(param_1.QuadPart + 0xa08) = DAT_14c8464f0;
    *(char *)(param_1.QuadPart + 0xa28) = '\0';
    if (iVar22 < 1) {
      if ((longlong)*(int *)(param_1.QuadPart + 0x818) != 0) {
        lVar37 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1.QuadPart + 0x810) + 8 + lVar37) != 0) &&
             (*(longlong *)(*(longlong *)(param_1.QuadPart + 0x810) + lVar37) != 0))
          goto LAB_1406e663d;
          lVar37 = lVar37 + 0x10;
        } while ((longlong)*(int *)(param_1.QuadPart + 0x818) * 0x10 != lVar37);
      }
      goto LAB_1406e669d;
    }
LAB_1406e663d:
    iVar22 = param_1.s.LowPart + 0x9a0;
    pfVar15 = (float *)FUN_1406cf6b2();
    fVar103 = (float)DAT_149931fa0;
    fVar83 = DAT_149931fa0._12_4_;
    fVar89 = DAT_149931fa0._4_4_;
    fVar90 = DAT_149931fa0._8_4_;
    auVar99._4_4_ = -(uint)(fVar89 < ABS(auVar88._4_4_ - pfVar15[5]));
    auVar99._0_4_ = -(uint)(fVar103 < ABS(auVar88._0_4_ - pfVar15[4]));
    auVar99._8_4_ = -(uint)(fVar90 < ABS(auVar88._8_4_ - pfVar15[6]));
    auVar99._12_4_ = -(uint)(fVar83 < ABS(auVar88._12_4_ - pfVar15[7]));
    iVar22 = movmskps(iVar22,auVar99);
    if (iVar22 == 0) {
      auVar55._4_4_ =
           -(uint)(fVar89 < (float)((uint)(auVar105._4_4_ - pfVar15[1]) & DAT_1499319a0._4_4_));
      auVar55._0_4_ = -(uint)(fVar103 < (float)((uint)(auVar105._0_4_ - *pfVar15) & DAT_1499319a0));
      auVar55._8_4_ =
           -(uint)(fVar90 < (float)((uint)(auVar105._8_4_ - pfVar15[2]) & DAT_1499319a0._8_4_));
      auVar55._12_4_ =
           -(uint)(fVar83 < (float)((uint)(auVar105._12_4_ - pfVar15[3]) & DAT_1499319a0._12_4_));
      iVar22 = movmskps((int)pfVar15,auVar55);
      auVar88._4_4_ =
           -(uint)(fVar89 < (float)((uint)(auVar105._4_4_ + pfVar15[1]) & DAT_1499319a0._4_4_));
      auVar88._0_4_ = -(uint)(fVar103 < (float)((uint)(auVar105._0_4_ + *pfVar15) & DAT_1499319a0));
      auVar88._8_4_ =
           -(uint)(fVar90 < (float)((uint)(auVar105._8_4_ + pfVar15[2]) & DAT_1499319a0._8_4_));
      auVar88._12_4_ =
           -(uint)(fVar83 < (float)((uint)(auVar105._12_4_ + pfVar15[3]) & DAT_1499319a0._12_4_));
      iVar13 = movmskps(0,auVar88);
      uVar24 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar13 == 0 || iVar22 == 0);
    }
    else {
      uVar24 = 0;
    }
    uVar24 = uVar24 ^ 1;
  }
  auVar105 = _DAT_1499387d0;
  iVar22 = *(int *)(param_1.QuadPart + 0x140);
  if ((longlong)iVar22 != 0) {
    lVar37 = *(longlong *)(param_1.QuadPart + 0x138);
    lVar34 = 0;
    dVar71 = (double)DAT_1499387d0;
    dVar81 = DAT_1499387d0._8_8_;
    do {
      lVar27 = *(longlong *)(lVar37 + lVar34);
      if (lVar27 != 0) {
        auVar88 = *(undefined1 (*) [16])(lVar27 + 0x1b0);
        dVar52 = auVar88._0_8_;
        dVar54 = auVar88._8_8_;
        dVar80 = *(double *)(lVar27 + 0x1c0);
        pLVar16 = *(LARGE_INTEGER **)(lVar27 + 0x230);
        if (pLVar16 == (LARGE_INTEGER *)0x0) {
          pLVar16 = (LARGE_INTEGER *)FUN_14001cc68(0x40,0x10);
          LVar25 = DAT_14c8463d8;
          *pLVar16 = DAT_14c8463d0;
          pLVar16[1] = LVar25;
          LVar25 = DAT_14c8463e8;
          pLVar16[2] = DAT_14c8463e0;
          pLVar16[3] = LVar25;
          LVar25 = DAT_14c846500;
          pLVar16[4] = DAT_14c8464f8;
          pLVar16[5] = LVar25;
          pLVar16[6] = DAT_14c846508;
          *(LARGE_INTEGER **)(lVar27 + 0x230) = pLVar16;
        }
        if ((((((double)pLVar16[4] != dVar52) || (NAN((double)pLVar16[4]) || NAN(dVar52))) ||
             ((double)pLVar16[5] != dVar54)) ||
            ((NAN((double)pLVar16[5]) || NAN(dVar54) || ((double)pLVar16[6] != dVar80)))) ||
           (NAN((double)pLVar16[6]) || NAN(dVar80))) {
          auVar61._8_8_ = 0;
          auVar61._0_8_ = dVar80;
          auVar88 = divpd(auVar88,auVar105);
          auVar86 = divpd(auVar61,auVar105);
          auVar88 = roundpd(auVar88,auVar88,3);
          auVar86 = roundpd(auVar86,auVar86,3);
          auVar100._0_8_ = dVar52 - auVar88._0_8_ * dVar71;
          auVar100._8_8_ = dVar54 - auVar88._8_8_ * dVar81;
          auVar62._0_8_ = dVar80 - auVar86._0_8_ * dVar71;
          auVar62._8_8_ = 0.0 - auVar86._8_8_ * dVar81;
          auVar97._0_8_ = auVar100._0_8_ + dVar71;
          auVar97._8_8_ = auVar100._8_8_ + dVar81;
          auVar72._0_8_ = auVar62._0_8_ + dVar71;
          auVar72._8_8_ = auVar62._8_8_ + dVar81;
          auVar41._8_8_ = -(ulonglong)(0.0 <= auVar100._8_8_);
          auVar41._0_8_ = -(ulonglong)(0.0 <= auVar100._0_8_);
          auVar86 = blendvpd(auVar97,auVar100,auVar41);
          auVar42._8_8_ = -(ulonglong)(0.0 <= auVar62._8_8_);
          auVar42._0_8_ = -(ulonglong)(0.0 <= auVar62._0_8_);
          auVar88 = blendvpd(auVar72,auVar62,auVar42);
          auVar63._0_8_ = auVar86._0_8_ + -360.0;
          auVar63._8_8_ = auVar86._8_8_ + -360.0;
          auVar85._0_8_ = auVar88._0_8_ + -360.0;
          auVar85._8_8_ = auVar88._8_8_ + 0.0;
          auVar43._8_8_ = -(ulonglong)(180.0 < auVar86._8_8_);
          auVar43._0_8_ = -(ulonglong)(180.0 < auVar86._0_8_);
          auVar99 = blendvpd(auVar86,auVar63,auVar43);
          auVar44._8_8_ = -(ulonglong)(180.0 < auVar88._8_8_);
          auVar44._0_8_ = -(ulonglong)(180.0 < auVar88._0_8_);
          auVar88 = blendvpd(auVar88,auVar85,auVar44);
          *(undefined1 (*) [16])(pLVar16 + 4) = auVar99;
          dVar80 = auVar88._0_8_;
          pLVar16[6].QuadPart = (LONGLONG)dVar80;
          auVar101._8_8_ = 0;
          auVar101._0_8_ = dVar80;
          auVar88 = divpd(auVar99,auVar105);
          auVar86 = divpd(auVar101,auVar105);
          auVar88 = roundpd(auVar88,auVar88,3);
          auVar86 = roundpd(auVar86,auVar86,3);
          dVar70 = (auVar99._0_8_ - auVar88._0_8_ * dVar71) * 0.008726646259971648;
          dVar79 = (auVar99._8_8_ - auVar88._8_8_ * dVar81) * 0.008726646259971648;
          dVar84 = (dVar80 - auVar86._0_8_ * dVar71) * 0.008726646259971648;
          dVar91 = (0.0 - auVar86._8_8_ * dVar81) * 0.008726646259971648;
          dVar80 = sin(dVar70);
          dVar52 = sin(dVar79);
          dVar54 = sin(dVar84);
          sin(dVar91);
          dVar70 = cos(dVar70);
          dVar79 = cos(dVar79);
          dVar84 = cos(dVar84);
          cos(dVar91);
          auVar98._0_8_ = -(dVar79 * dVar80 * dVar54) + dVar52 * dVar70 * dVar84;
          auVar98._8_8_ = dVar52 * dVar80 * dVar54 + dVar79 * dVar70 * dVar84;
          *pLVar16 = (LARGE_INTEGER)(dVar80 * dVar52 * dVar84 - dVar70 * dVar79 * dVar54);
          pLVar16[1] = (LARGE_INTEGER)(-(dVar80 * dVar79 * dVar84) - dVar70 * dVar52 * dVar54);
          *(undefined1 (*) [16])(pLVar16 + 2) = auVar98;
        }
        local_2a8 = *(char **)pLVar16;
        uStack_2a0 = pLVar16[1];
        _local_298 = *(undefined1 (*) [16])(pLVar16 + 2);
        local_4a0 = 0;
        local_4a8 = (double *)&local_2a8;
        FUN_140092404(lVar27,*(undefined8 *)(lVar27 + 0x120),*(undefined8 *)(lVar27 + 0x128),0);
      }
      lVar34 = lVar34 + 8;
    } while ((longlong)iVar22 * 8 != lVar34);
  }
  local_484 = uVar24;
  if ((*(char *)(param_1.QuadPart + 0x9c) < '\0') &&
     ((*(longlong *)(param_1.QuadPart + 0xa8) == 0 || (iVar22 = FUN_14487fd02(), iVar22 != 3)))) {
    FUN_1474a76dc(param_1.QuadPart);
  }
  if ((((*(longlong *)(param_1.QuadPart + 0xa40) != 0) &&
       (lVar37 = *(longlong *)(param_1.QuadPart + 0xa48), lVar37 != 0)) &&
      (0 < *(int *)(lVar37 + 0x148))) &&
     ((*(longlong *)(param_1.QuadPart + 0x660) != 0 &&
      (uVar24 = *(uint *)(*(longlong *)(param_1.QuadPart + 0x660) + 0x1e8), uVar24 != 0xffffffff))))
  {
    uVar28 = 1 << ((byte)uVar24 & 0x1f);
    lVar34 = lVar37 + 0x130;
    if (*(longlong *)(lVar37 + 0x140) != 0) {
      lVar34 = *(longlong *)(lVar37 + 0x140);
    }
    uVar30 = uVar24 + 0x1f;
    if (-1 < (int)uVar24) {
      uVar30 = uVar24;
    }
    uVar29 = *(uint *)(*(longlong *)(lVar37 + 0xb8) + 200);
    lVar37 = (longlong)((int)uVar30 >> 5);
    uVar30 = *(uint *)(lVar34 + lVar37 * 4);
    bVar38 = (uVar30 >> (uVar24 & 0x1f) & 1) == 0;
    bVar21 = *(byte *)(param_1.QuadPart + 0xa8c);
    if ((bool)bVar21 != bVar38) {
      *(bool *)(param_1.QuadPart + 0xa8c) = bVar38;
      pcVar17 = (char *)(param_1.QuadPart + 0xad8);
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17[2] = '\0';
      pcVar17[3] = '\0';
      if ((uVar30 & uVar28) == 0) {
        *(int *)(param_1.QuadPart + 0xab0) = *(int *)(param_1.QuadPart + 0xa88);
        uVar30 = *(int *)(param_1.QuadPart + 0xa88) + 0x1f;
        if (0x1f < uVar30) {
          uVar35 = uVar30 >> 5;
          if (*(int *)(param_1.QuadPart + 0xab4) + 0x1fU >> 5 < uVar35) {
            if ((0x9f < uVar30) || (*(longlong *)(param_1.QuadPart + 0xaa8) != 0)) {
              uVar31 = 0;
              if (0x9f < uVar30) {
                uVar31 = uVar35;
              }
              FUN_1446efa72((char *)(param_1.QuadPart + 0xaa8),0,uVar31,4);
            }
            *(uint *)(param_1.QuadPart + 0xab4) = uVar30 & 0xffffffe0;
          }
          pcVar17 = *(char **)(param_1.QuadPart + 0xaa8);
          if (*(char **)(param_1.QuadPart + 0xaa8) == (char *)0x0) {
            pcVar17 = (char *)(param_1.QuadPart + 0xa98);
          }
          if (uVar30 < 0x120) {
            uVar35 = uVar30 >> 3 & 0x3c;
          }
          else {
            uVar35 = uVar35 << 2;
          }
          memset(pcVar17,0,(ulonglong)uVar35);
          iVar22 = *(int *)(param_1.QuadPart + 0xab0);
          iVar13 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar13 = iVar22;
          }
          if (iVar22 % 0x20 != 0) {
            pcVar17 = (char *)(param_1.QuadPart + 0xa98);
            if (*(char **)(param_1.QuadPart + 0xaa8) != (char *)0x0) {
              pcVar17 = *(char **)(param_1.QuadPart + 0xaa8);
            }
            bVar21 = -(char)(iVar22 % 0x20);
            *(uint *)(pcVar17 + (longlong)(iVar13 >> 5) * 4) =
                 (uint)(*(int *)(pcVar17 + (longlong)(iVar13 >> 5) * 4) << (bVar21 & 0x1f)) >>
                 (bVar21 & 0x1f);
          }
        }
        *(int *)(param_1.QuadPart + 0xad0) = *(int *)(param_1.QuadPart + 0xa88);
        uVar30 = *(int *)(param_1.QuadPart + 0xa88) + 0x1f;
        if (0x1f < uVar30) {
          uVar35 = uVar30 >> 5;
          if (*(int *)(param_1.QuadPart + 0xad4) + 0x1fU >> 5 < uVar35) {
            if ((0x9f < uVar30) || (*(longlong *)(param_1.QuadPart + 0xac8) != 0)) {
              uVar31 = 0;
              if (0x9f < uVar30) {
                uVar31 = uVar35;
              }
              FUN_1446efa72((char *)(param_1.QuadPart + 0xac8),0,uVar31,4);
            }
            *(uint *)(param_1.QuadPart + 0xad4) = uVar30 & 0xffffffe0;
          }
          pcVar17 = *(char **)(param_1.QuadPart + 0xac8);
          if (*(char **)(param_1.QuadPart + 0xac8) == (char *)0x0) {
            pcVar17 = (char *)(param_1.QuadPart + 0xab8);
          }
          if (uVar30 < 0x120) {
            uVar35 = uVar30 >> 3 & 0x3c;
          }
          else {
            uVar35 = uVar35 << 2;
          }
          memset(pcVar17,0,(ulonglong)uVar35);
          iVar22 = *(int *)(param_1.QuadPart + 0xad0);
          iVar13 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar13 = iVar22;
          }
          if (iVar22 % 0x20 != 0) {
            pcVar17 = (char *)(param_1.QuadPart + 0xab8);
            if (*(char **)(param_1.QuadPart + 0xac8) != (char *)0x0) {
              pcVar17 = *(char **)(param_1.QuadPart + 0xac8);
            }
            bVar21 = -(char)(iVar22 % 0x20);
            *(uint *)(pcVar17 + (longlong)(iVar13 >> 5) * 4) =
                 (uint)(*(int *)(pcVar17 + (longlong)(iVar13 >> 5) * 4) << (bVar21 & 0x1f)) >>
                 (bVar21 & 0x1f);
          }
        }
        QueryPerformanceCounter((LARGE_INTEGER *)&local_2a8);
        auVar105._0_8_ = (double)CONCAT44(0x43300000,(DWORD)local_2a8);
        auVar105._8_4_ = SUB84(local_2a8,4);
        auVar105._12_4_ = 0x45300000;
        dVar71 = ((auVar105._0_8_ - 4503599627370496.0) + (auVar105._8_8_ - 1.9342813113834067e+25))
                 * DAT_14c83f418 * 1000.0;
      }
      else {
        pcVar17 = (char *)(param_1.QuadPart + 0xab0);
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        pcVar17[2] = '\0';
        pcVar17[3] = '\0';
        if (0x80 < *(uint *)(param_1.QuadPart + 0xab4)) {
          pcVar17 = (char *)(param_1.QuadPart + 0xab4);
          pcVar17[0] = -0x80;
          pcVar17[1] = '\0';
          pcVar17[2] = '\0';
          pcVar17[3] = '\0';
          FUN_1446efbd8((char *)(param_1.QuadPart + 0xa98),0);
        }
        pcVar17 = (char *)(param_1.QuadPart + 0xad0);
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        pcVar17[2] = '\0';
        pcVar17[3] = '\0';
        dVar71 = 0.0;
        if (0x80 < *(uint *)(param_1.QuadPart + 0xad4)) {
          pcVar17 = (char *)(param_1.QuadPart + 0xad4);
          pcVar17[0] = -0x80;
          pcVar17[1] = '\0';
          pcVar17[2] = '\0';
          pcVar17[3] = '\0';
          FUN_1446efbd8((char *)(param_1.QuadPart + 0xab8),0);
        }
      }
      *(double *)(param_1.QuadPart + 0xa90) = dVar71;
      bVar21 = *(byte *)(param_1.QuadPart + 0xa8c);
    }
    if ((bVar21 & 1) != 0) {
      pcVar17 = (char *)(param_1.QuadPart + 0xa98);
      if (*(char **)(param_1.QuadPart + 0xaa8) != (char *)0x0) {
        pcVar17 = *(char **)(param_1.QuadPart + 0xaa8);
      }
      if ((*(uint *)(pcVar17 + lVar37 * 4) & uVar28) == 0) {
        *(uint *)(pcVar17 + lVar37 * 4) = *(uint *)(pcVar17 + lVar37 * 4) | uVar28;
        *(int *)(param_1.QuadPart + 0xad8) = *(int *)(param_1.QuadPart + 0xad8) + 1;
      }
    }
    FUN_14327b568((char *)(param_1.QuadPart + 0xa88),uVar24);
    if (*(char *)(param_1.QuadPart + 0xa8c) == '\x01') {
      FUN_1401c0802(&local_2a8,*(undefined8 *)(param_1.QuadPart + 0xa48));
      if ((((local_278._0_8_ != 0) && (CONCAT44(uStack_23c,local_240) != 0)) && (0 < (int)uVar29))
         && (local_208 != 0)) {
        pcVar17 = (char *)(param_1.QuadPart + 0xa98);
        uVar32 = 0;
        do {
          bVar21 = *(byte *)(param_1.QuadPart + 0xa8c);
          uVar24 = (uint)uVar32;
          bVar6 = (byte)uVar32;
          if (bVar21 == 1) {
            pcVar18 = *(char **)(param_1.QuadPart + 0xaa8);
            if (*(char **)(param_1.QuadPart + 0xaa8) == (char *)0x0) {
              pcVar18 = pcVar17;
            }
            uVar36 = uVar32 >> 5 & 0x7ffffff;
            if ((*(uint *)(pcVar18 + uVar36 * 4) >> (uVar24 & 0x1f) & 1) == 0) {
              pcVar18 = *(char **)(param_1.QuadPart + 0xac8);
              if (*(char **)(param_1.QuadPart + 0xac8) == (char *)0x0) {
                pcVar18 = (char *)(param_1.QuadPart + 0xab8);
              }
              if ((*(uint *)(pcVar18 + uVar36 * 4) & 1 << (bVar6 & 0x1f)) == 0) goto LAB_1406e6c53;
            }
          }
          else {
LAB_1406e6c53:
            lVar37 = *(longlong *)(param_1.QuadPart + 0xa40);
            if ((((int)uVar24 < *(int *)(lVar37 + 0x418)) &&
                (lVar34 = (longlong)*(int *)(*(longlong *)(lVar37 + 0x410) + uVar32 * 4),
                lVar34 != -1)) &&
               (lVar37 = *(longlong *)(*(longlong *)(lVar37 + 0x440) + lVar34 * 8), lVar37 != 0)) {
              if (bVar21 == 0) {
LAB_1406e6cb5:
                cVar12 = *(char *)(*(longlong *)(local_208 + 0x10) + uVar32);
                if (cVar12 != '\x02') {
                  lVar34 = local_278._0_8_ + 0x10;
                  if (*(longlong *)(local_278._0_8_ + 0x20) != 0) {
                    lVar34 = *(longlong *)(local_278._0_8_ + 0x20);
                  }
                  uVar36 = uVar32 >> 5 & 0x7ffffff;
                  lVar27 = local_200 + 0xd8;
                  if (*(longlong *)(local_200 + 0xe8) != 0) {
                    lVar27 = *(longlong *)(local_200 + 0xe8);
                  }
                  if ((((*(uint *)(lVar34 + uVar36 * 4) >> (uVar24 & 0x1f) & 1) == 0) ||
                      ((1 << (bVar6 & 0x1f) & *(uint *)(lVar27 + uVar36 * 4)) != 0)) ||
                     (((cVar3 = *(char *)(*(longlong *)(CONCAT44(uStack_23c,local_240) + 0x10) +
                                         uVar32), cVar3 != '\x04' && (cVar3 != '\x01')) ||
                      (cVar12 != '\0')))) goto LAB_1406e6d48;
                }
                if (bVar21 != 0) {
                  pcVar18 = *(char **)(param_1.QuadPart + 0xaa8);
                  if (*(char **)(param_1.QuadPart + 0xaa8) == (char *)0x0) {
                    pcVar18 = pcVar17;
                  }
                  uVar36 = uVar32 >> 5 & 0x7ffffff;
                  if ((*(uint *)(pcVar18 + uVar36 * 4) >> (uVar24 & 0x1f) & 1) == 0) {
                    *(uint *)(pcVar18 + uVar36 * 4) =
                         *(uint *)(pcVar18 + uVar36 * 4) | 1 << (bVar6 & 0x1f);
                    *(int *)(param_1.QuadPart + 0xad8) = *(int *)(param_1.QuadPart + 0xad8) + 1;
                    bVar21 = *(byte *)(param_1.QuadPart + 0xa8c);
                  }
                }
              }
              else {
                pcVar18 = *(char **)(param_1.QuadPart + 0xaa8);
                if (*(char **)(param_1.QuadPart + 0xaa8) == (char *)0x0) {
                  pcVar18 = pcVar17;
                }
                if ((*(uint *)(pcVar18 + (uVar32 >> 5 & 0x7ffffff) * 4) >> (uVar24 & 0x1f) & 1) == 0
                   ) goto LAB_1406e6cb5;
              }
LAB_1406e6d48:
              if ((bVar21 & 1) != 0) {
                pcVar18 = *(char **)(param_1.QuadPart + 0xaa8);
                if (*(char **)(param_1.QuadPart + 0xaa8) == (char *)0x0) {
                  pcVar18 = pcVar17;
                }
                if (((*(uint *)(pcVar18 + (uVar32 >> 5 & 0x7ffffff) * 4) >> (uVar24 & 0x1f) & 1) !=
                     0) && (*(char *)(lVar37 + 0x1b9) == '\x01')) {
                  local_428._0_8_ = *(longlong *)(param_1.QuadPart + 0xa48);
                  lVar37 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0xa48) + 0xb8);
                  if ((lVar37 != 0) && ((longlong)uVar32 < (longlong)*(int *)(lVar37 + 0x148))) {
                    local_458 = (longlong *)(*(longlong *)(lVar37 + 0x140) + uVar32 * 0x50);
                    lVar37 = *(longlong *)(lVar37 + 0x140) + uVar32 * 0x50;
                    puVar19 = (uint *)(lVar37 + 0x10);
                    local_408._0_8_ = puVar19;
                    uVar24 = *(uint *)(lVar37 + 0x28);
                    local_478 = (undefined1  [8])CONCAT44(0,uVar24);
                    if (uVar24 == 0) {
                      uVar33 = 1;
                      auVar10._12_4_ = 0;
                      auVar10._0_12_ = stack0xfffffffffffffb9c;
                      _local_468 = auVar10 << 0x20;
                      local_490 = 0;
                      uVar36 = 0;
                    }
                    else {
                      puVar20 = (uint *)local_458[4];
                      if ((uint *)local_458[4] == (uint *)0x0) {
                        puVar20 = puVar19;
                      }
                      uVar28 = *puVar20;
                      if (uVar28 == 0) {
                        iVar22 = uVar24 + 0x1e;
                        if (-1 < (int)(uVar24 - 1)) {
                          iVar22 = uVar24 - 1;
                        }
                        local_490 = 0;
                        uVar36 = (ulonglong)(uint)(iVar22 >> 5);
                        if (iVar22 >> 5 < 1) {
                          uVar36 = 0;
                        }
                        auVar9._12_4_ = 0;
                        auVar9._0_12_ = stack0xfffffffffffffb9c;
                        _local_468 = auVar9 << 0x20;
                        do {
                          if (uVar36 == local_490) goto LAB_1406e6ef4;
                          local_468._0_4_ = local_468._0_4_ + 0x20;
                          uVar28 = puVar20[local_490 + 1];
                          local_490 = local_490 + 1;
                        } while (uVar28 == 0);
                      }
                      else {
                        auVar11._12_4_ = 0;
                        auVar11._0_12_ = stack0xfffffffffffffb9c;
                        _local_468 = auVar11 << 0x20;
                        local_490 = 0;
                      }
                      uVar33 = (ulonglong)(-uVar28 & uVar28);
                      uVar36 = uVar33 * 2 + 1;
                      lVar37 = 0x3f;
                      if (uVar36 != 0) {
                        for (; uVar36 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                        }
                      }
                      uVar28 = (local_468._0_4_ - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                      uVar36 = (ulonglong)uVar28;
                      if ((int)uVar24 <= (int)uVar28) {
                        uVar36 = CONCAT44(0,uVar24);
                      }
                    }
                    if ((uint)uVar36 != uVar24) {
                      local_480 = (longlong *)CONCAT44(local_480._4_4_,0xffffffff);
                      do {
                        uVar24 = *(uint *)(*local_458 + (longlong)(int)uVar36 * 0xc);
                        cVar12 = FUN_144a7ef0c(local_428._0_8_,(ulonglong)uVar24);
                        if ((((cVar12 != '\0') && (-1 < (int)uVar24)) &&
                            (lVar37 = *(longlong *)(param_1.QuadPart + 0xa40),
                            (int)uVar24 < *(int *)(lVar37 + 0x418))) &&
                           ((lVar34 = (longlong)
                                      *(int *)(*(longlong *)(lVar37 + 0x410) + (ulonglong)uVar24 * 4
                                              ), lVar34 != -1 &&
                            (*(longlong *)(*(longlong *)(lVar37 + 0x440) + lVar34 * 8) != 0))))
                        goto LAB_1406e6d67;
                        uVar24 = (uint)local_480 & ~(uint)uVar33;
                        lVar37 = local_458[4];
                        if (local_458[4] == 0) {
                          lVar37 = local_408._0_8_;
                        }
                        uVar28 = *(uint *)(local_458 + 5);
                        lVar34 = (longlong)(int)local_490;
                        local_480 = (longlong *)CONCAT44(local_480._4_4_,uVar24);
                        uVar24 = *(uint *)(lVar37 + lVar34 * 4) & uVar24;
                        if (uVar24 == 0) {
                          iVar22 = uVar28 + 0x1e;
                          if (-1 < (int)(uVar28 - 1)) {
                            iVar22 = uVar28 - 1;
                          }
                          iVar22 = iVar22 >> 5;
                          local_468._0_4_ = local_468._0_4_ + 0x20;
                          iVar13 = iVar22;
                          if (iVar22 < (int)local_490) {
                            iVar13 = (int)local_490;
                          }
                          if ((int)local_490 < iVar22) {
                            lVar27 = 0;
                            do {
                              uVar24 = *(uint *)(lVar37 + lVar34 * 4 + 4 + lVar27 * 4);
                              if (uVar24 != 0) {
                                local_490 = (ulonglong)((int)local_490 + (int)lVar27 + 1);
                                local_480 = (longlong *)CONCAT44(local_480._4_4_,0xffffffff);
                                goto LAB_1406e700b;
                              }
                              local_468._0_4_ = local_468._0_4_ + 0x20;
                              lVar27 = lVar27 + 1;
                            } while (iVar13 - lVar34 != lVar27);
                            local_480 = (longlong *)CONCAT44(local_480._4_4_,0xffffffff);
                            lVar34 = (longlong)iVar13;
                          }
                          local_490 = lVar34 + 1;
                          uVar24 = uVar28;
                        }
                        else {
LAB_1406e700b:
                          uVar33 = (ulonglong)(-uVar24 & uVar24);
                          uVar36 = uVar33 * 2 + 1;
                          lVar37 = 0x3f;
                          if (uVar36 != 0) {
                            for (; uVar36 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                            }
                          }
                          uVar24 = (local_468._0_4_ - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                          if ((int)uVar28 <= (int)uVar24) {
                            uVar24 = uVar28;
                          }
                        }
                        uVar36 = (ulonglong)uVar24;
                      } while (uVar24 != local_478._0_4_);
                    }
                  }
                  goto LAB_1406e6ef4;
                }
              }
            }
            else {
LAB_1406e6ef4:
              FUN_14327b568((char *)(param_1.QuadPart + 0xa88),uVar32 & 0xffffffff);
            }
          }
LAB_1406e6d67:
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar29);
      }
    }
  }
  uVar24 = local_484;
  if (*(char *)(param_1.QuadPart + 0xa8c) != '\x01') {
    if (*(char *)(param_1.QuadPart + 0x84e) == '\x01') {
      FUN_1474a778c(param_1.QuadPart);
    }
    goto LAB_1406e87d0;
  }
  if ((DAT_14caa9610 == '\x01') && (0 < *(int *)(param_1.QuadPart + 0x7e8))) {
    uStack_2a0 = (LONGLONG)DAT_14c8464e0;
    uStack_290 = DAT_14c8464f0;
    local_298 = (undefined1  [8])DAT_14c8464e8;
    local_288 = DAT_14c8464e0;
    uStack_280 = DAT_14c8464e8;
    local_260 = DAT_14c8464f0;
    local_278._8_8_ = DAT_14c8464e0;
    local_278._0_8_ = DAT_14c8464f0;
    dStack_268 = DAT_14c8464e8;
    local_258 = DAT_14c8464e0;
    dStack_250 = DAT_14c8464e8;
    local_248 = DAT_14c8464f0;
    local_240 = 0;
    local_238 = 0;
    if (*(longlong *)(param_1.QuadPart + 0x660) == 0) {
      uStack_23c = 0xffffffff;
    }
    else {
      uStack_23c = *(undefined4 *)(*(longlong *)(param_1.QuadPart + 0x660) + 0x1e8);
    }
    if (((char *)param_1.QuadPart != (char *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1.QuadPart);
    }
    local_2a8 = (char *)param_1;
    FUN_1417962d4((char *)(param_1.QuadPart + 0x7e0));
    pcVar17 = (char *)(param_1.QuadPart + 0x7e8);
    pcVar17[0] = '\0';
    pcVar17[1] = '\0';
    pcVar17[2] = '\0';
    pcVar17[3] = '\0';
    if (*(int *)(param_1.QuadPart + 0x7ec) != 0) {
      FUN_1407d9874((char *)(param_1.QuadPart + 0x7e0),0);
    }
  }
  if (*(int *)(param_1.QuadPart + 0xad8) < 1) {
    FUN_14049898e(param_1.QuadPart);
  }
  else if (*(char *)(param_1.QuadPart + 0x4b) == '\0') {
    pbVar4 = *(byte **)(param_1.QuadPart + 0x60);
    if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
      *(char *)(param_1.QuadPart + 0x4b) = '\x01';
    }
    else {
      uVar5 = *(undefined8 *)(pbVar4 + 0x28);
      FUN_1402eb48e(uVar5,(char *)(param_1.QuadPart + 0x40));
      *(char *)(param_1.QuadPart + 0x4b) = '\x01';
      FUN_1402eb97e(uVar5,(char *)(param_1.QuadPart + 0x40));
      if (*(char *)(param_1.QuadPart + 0x4b) == '\0') {
        *(undefined4 *)(*(longlong *)(param_1.QuadPart + 0x60) + 0x24) = 0xbf800000;
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa9830) && (FUN_144b3d300(&DAT_14caa9830), DAT_14caa9830 == -1)) {
    local_2a8 = "MassToLocal";
    uStack_2a0._0_5_ = 0xb;
    uVar28 = FUN_14001a6c0(&local_2a8,1);
    DAT_14caa9828 = (ulonglong)uVar28;
    _Init_thread_footer(&DAT_14caa9830);
  }
  lVar37 = *(longlong *)(param_1.QuadPart + 0xa48);
  if ((((lVar37 != 0) && (*(char *)(param_1.QuadPart + 0x6ba) == '\x01')) &&
      (*(char *)(param_1.QuadPart + 0x6b9) == '\x01')) &&
     ((*(longlong *)(param_1.QuadPart + 0xa40) != 0 &&
      (FUN_1401c0a16(local_300), local_2d0 != (longlong *)0x0)))) {
    lVar34 = *(longlong *)(param_1.QuadPart + 0x660);
    auVar102 = _DAT_14c8464c0;
    dVar71 = DAT_14c8464b0;
    if (*(char *)(lVar34 + 0x106) == '\x01') {
      auVar105 = *(undefined1 (*) [16])(param_1.QuadPart + 0x280);
      auVar88 = *(undefined1 (*) [16])(param_1.QuadPart + 0x290);
      auVar94._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar105._8_8_));
      auVar94._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar105._0_8_));
      iVar22 = movmskpd((int)local_2d0,auVar94);
      auVar95._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar88._8_8_));
      auVar95._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar88._0_8_));
      uVar28 = movmskpd((int)lVar37,auVar95);
      if ((uVar28 & 0x3fffffff) == 0 && iVar22 == 0) {
        dStack_460 = (double)DAT_14c846488;
        local_468 = (undefined1  [8])DAT_14c846480;
        local_428._8_8_ = DAT_14c846498;
        local_428._0_8_ = DAT_14c846490;
        local_3f8 = DAT_14c8464a0;
        dStack_3f0 = DAT_14c8464a8;
        uStack_450 = uRam000000014c8464d8;
        local_458 = DAT_14c8464d0;
      }
      else {
        auVar99 = divpd(_DAT_149934d80,auVar105);
        auVar86 = divpd(ZEXT816(0x3ff0000000000000),auVar88);
        auVar102._0_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar105._0_8_)) & auVar99._0_8_);
        auVar102._8_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar105._8_8_)) & auVar99._8_8_);
        local_458 = (longlong *)
                    (-(ulonglong)(9.99999993922529e-09 < ABS(auVar88._0_8_)) & auVar86._0_8_);
        dVar71 = *(double *)(param_1.QuadPart + 0x250) * -1.0;
        dVar81 = *(double *)(param_1.QuadPart + 600) * 1.0;
        dVar52 = -*(double *)(param_1.QuadPart + 0x240);
        dVar54 = -*(double *)(param_1.QuadPart + 0x248);
        dVar84 = *(double *)(param_1.QuadPart + 0x260) * auVar102._0_8_;
        dVar91 = *(double *)(param_1.QuadPart + 0x268) * auVar102._8_8_;
        uStack_450 = 0;
        dVar93 = *(double *)(param_1.QuadPart + 0x270) * (double)local_458;
        dVar70 = dVar91 * dVar52 - dVar54 * dVar84;
        dVar79 = dVar93 * dVar54 - dVar71 * dVar91;
        dVar80 = dVar84 * dVar71 - dVar52 * dVar93;
        dVar79 = dVar79 + dVar79;
        dVar80 = dVar80 + dVar80;
        dVar70 = dVar70 + dVar70;
        unique0x10000747 = SUB84(*(double *)(param_1.QuadPart + 0x248),0);
        local_468 = (undefined1  [8])dVar52;
        unique0x1000074b = (int)((ulonglong)dVar54 >> 0x20);
        local_428._8_4_ = SUB84(dVar81,0);
        local_428._0_8_ = dVar71;
        local_428._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
        local_3f8 = 0.0 - ((dVar70 * dVar54 - dVar80 * dVar71) + dVar81 * dVar79 + dVar84);
        dStack_3f0 = 0.0 - (dVar70 * *(double *)(param_1.QuadPart + 0x240) + dVar71 * dVar79 +
                           dVar81 * dVar80 + dVar91);
        dVar71 = 0.0 - (dVar81 * dVar70 + dVar93 + (dVar80 * dVar52 - dVar79 * dVar54));
      }
      uVar5 = *(undefined8 *)(lVar34 + 0x218);
      plVar26 = *(longlong **)(lVar34 + 0x220);
      if (plVar26 == (longlong *)0x0) {
        local_490 = FUN_1417966ba(uVar5,DAT_14caa9828);
      }
      else {
        LOCK();
        *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
        UNLOCK();
        local_490 = FUN_1417966ba(uVar5,DAT_14caa9828);
        LOCK();
        plVar1 = plVar26 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          uVar24 = local_484;
          if (*piVar2 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            uVar24 = local_484;
          }
        }
      }
      local_480 = (longlong *)FUN_1406cf856((char *)(param_1.QuadPart + 0x9a0));
      uVar32 = (ulonglong)*(uint *)(*(longlong *)(param_1.QuadPart + 0x660) + 0x1e8);
      if (local_2d0 != (longlong *)0x0) goto LAB_1406e73a1;
      uVar28 = FUN_1401f66f6(local_300[0],local_2e8);
    }
    else {
      dStack_460 = (double)DAT_14c846488;
      local_468 = (undefined1  [8])DAT_14c846480;
      local_428._8_8_ = DAT_14c846498;
      local_428._0_8_ = DAT_14c846490;
      local_3f8 = DAT_14c8464a0;
      dStack_3f0 = DAT_14c8464a8;
      local_458 = DAT_14c8464d0;
      uStack_450 = uRam000000014c8464d8;
      uVar32 = (ulonglong)*(uint *)(lVar34 + 0x1e8);
      local_490 = 0;
      local_480 = (longlong *)0x0;
LAB_1406e73a1:
      uVar28 = (**(code **)(*local_2d0 + 0x60))();
    }
    if (0 < (int)uVar28) {
      dVar52 = dStack_460 + dStack_460;
      dVar54 = (double)local_428._0_8_ + (double)local_428._0_8_;
      dVar80 = (double)local_468 * ((double)local_468 + (double)local_468);
      uStack_350 = 0x3ff0000000000000;
      local_398 = auVar102._0_8_;
      local_3a8 = (1.0 - ((double)local_428._0_8_ * dVar54 + dStack_460 * dVar52)) * local_398;
      dVar79 = auVar102._8_8_;
      dVar81 = (1.0 - ((double)local_428._0_8_ * dVar54 + dVar80)) * dVar79;
      local_388 = (1.0 - (dVar80 + dStack_460 * dVar52)) * (double)local_458;
      dVar80 = ((double)local_468 + (double)local_468) * (double)local_428._8_8_;
      dStack_3a0 = (dVar52 * (double)local_468 + dVar54 * (double)local_428._8_8_) * local_398;
      local_378 = (dVar54 * dStack_460 + dVar80) * dVar79;
      dVar70 = (dVar52 * (double)local_428._8_8_ + (double)local_468 * dVar54) * (double)local_458;
      dVar80 = (dVar54 * dStack_460 - dVar80) * (double)local_458;
      local_398 = ((double)local_468 * dVar54 - dVar52 * (double)local_428._8_8_) * local_398;
      uStack_380 = 0;
      uStack_390 = 0;
      uStack_370 = 0;
      local_368._8_4_ = SUB84(dVar81,0);
      local_368._0_8_ = (dVar52 * (double)local_468 - dVar54 * (double)local_428._8_8_) * dVar79;
      local_368._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
      local_338 = dStack_460;
      dStack_330 = (double)local_468;
      local_348 = (double)local_428._8_8_;
      dStack_340 = (double)local_428._0_8_;
      lVar37 = 0;
      uVar36 = 0;
      bVar38 = false;
      local_408 = auVar102;
      local_358 = dVar71;
      do {
        fVar103 = *(float *)(local_2d0[2] + uVar36 * 4);
        if (((uVar32 * 0x30 != lVar37) && (fVar103 < 1.0)) &&
           ((lVar34 = *(longlong *)(param_1.QuadPart + 0xa40),
            (int)(uint)uVar36 < *(int *)(lVar34 + 0x418) &&
            (((lVar27 = (longlong)*(int *)(*(longlong *)(lVar34 + 0x410) + uVar36 * 4), lVar27 != -1
              && (*(longlong *)(*(longlong *)(lVar34 + 0x440) + lVar27 * 8) != 0)) &&
             (*(char *)(param_1.QuadPart + 0xa8c) == '\x01')))))) {
          pcVar17 = *(char **)(param_1.QuadPart + 0xac8);
          if (*(char **)(param_1.QuadPart + 0xac8) == (char *)0x0) {
            pcVar17 = (char *)(param_1.QuadPart + 0xab8);
          }
          if ((*(uint *)(pcVar17 + (uVar36 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar36 & 0x1f) & 1) != 0
             ) {
            *(undefined1 *)(local_2d8 + 8) = 1;
            *(undefined4 *)(*(longlong *)(local_2d8 + 0x10) + uVar36 * 4) = 0x3f800000;
            fVar103 = 1.0;
          }
        }
        if ((0.0 < fVar103) && (fVar103 <= 1.0)) {
          fVar103 = 1.0 - fVar103;
          if (1e-08 <= fVar103) {
            if (((local_480 != (longlong *)0x0) && (local_490 != 0)) &&
               (*(char *)(*(longlong *)(param_1.QuadPart + 0x660) + 0x106) != '\0')) {
              LVar25 = param_1;
              cVar12 = FUN_1417967be(param_1.QuadPart,uVar36 & 0xffffffff);
              DVar23 = LVar25.s.LowPart;
              lVar34 = *(longlong *)(param_1.QuadPart + 0xa48);
              if (*(char *)(lVar34 + 0x118) == '\0') {
                DVar23 = 0xc0;
                plVar26 = (longlong *)(*(longlong *)(lVar34 + 0xb8) + 0xc0);
              }
              else {
                plVar26 = (longlong *)(lVar34 + 0x108);
              }
              _local_3e8 = ZEXT416((uint)(float)local_308);
              lVar34 = *plVar26;
              auVar88 = *(undefined1 (*) [16])(lVar34 + 0x20 + lVar37);
              lVar27 = *local_480;
              auVar105 = *(undefined1 (*) [16])(lVar27 + 0x20 + lVar37);
              auVar56._4_4_ = -(uint)(1e-08 < ABS(auVar105._4_4_));
              auVar56._0_4_ = -(uint)(1e-08 < ABS(auVar105._0_4_));
              auVar56._8_4_ = -(uint)(1e-08 < ABS(auVar105._8_4_));
              auVar56._12_4_ = -(uint)(1e-08 < ABS(auVar105._12_4_));
              iVar22 = movmskps(DVar23,auVar56);
              if (iVar22 == 0) {
                auVar40 = DAT_14c846070._0_12_;
                auVar105 = _DAT_14c846080;
                fVar83 = _DAT_14c846060;
                fVar89 = fRam000000014c846064;
                fVar90 = fRam000000014c846068;
                fVar92 = fRam000000014c84606c;
              }
              else {
                auVar86 = divps(_DAT_149e1ef10,auVar105);
                auVar105 = insertps(auVar105,0x3f800000,0x30);
                auVar64._0_4_ = -(uint)(1e-08 < ABS(auVar105._0_4_)) & auVar86._0_4_;
                auVar64._4_4_ = -(uint)(1e-08 < ABS(auVar105._4_4_)) & auVar86._4_4_;
                auVar64._8_4_ = -(uint)(1e-08 < ABS(auVar105._8_4_)) & auVar86._8_4_;
                auVar64._12_4_ = -(uint)(1e-08 < ABS(auVar105._12_4_)) & auVar86._12_4_;
                auVar105 = blendps(auVar64,ZEXT816(0),8);
                pfVar15 = (float *)(lVar27 + lVar37);
                fVar83 = *pfVar15 * -1.0;
                fVar89 = pfVar15[1] * -1.0;
                fVar90 = pfVar15[2] * -1.0;
                fVar92 = pfVar15[3] * 1.0;
                pfVar15 = (float *)(lVar27 + 0x10 + lVar37);
                fVar39 = *pfVar15 * auVar105._0_4_;
                fVar50 = pfVar15[1] * auVar105._4_4_;
                fVar51 = pfVar15[2] * auVar105._8_4_;
                fVar53 = pfVar15[3] * auVar105._12_4_;
                fVar69 = fVar50 * fVar83 - fVar89 * fVar39;
                fVar77 = fVar51 * fVar89 - fVar90 * fVar50;
                fVar78 = fVar39 * fVar90 - fVar83 * fVar51;
                fVar82 = fVar53 * fVar92 - fVar92 * fVar53;
                fVar69 = fVar69 + fVar69;
                fVar77 = fVar77 + fVar77;
                fVar78 = fVar78 + fVar78;
                fVar82 = fVar82 + fVar82;
                auVar45._0_4_ =
                     0.0 - ((fVar69 * fVar89 - fVar78 * fVar90) + fVar92 * fVar77 + fVar39);
                auVar45._4_4_ =
                     0.0 - ((fVar77 * fVar90 - fVar69 * fVar83) + fVar92 * fVar78 + fVar50);
                auVar45._8_4_ =
                     0.0 - ((fVar78 * fVar83 - fVar77 * fVar89) + fVar92 * fVar69 + fVar51);
                auVar45._12_4_ =
                     0.0 - ((fVar82 * fVar92 - fVar82 * fVar92) + fVar92 * fVar82 + fVar53);
                auVar86 = blendps(auVar45,ZEXT816(0),8);
                auVar40 = auVar86._0_12_;
              }
              auVar57._0_8_ = (double)auVar105._0_4_;
              auVar57._8_8_ = (double)auVar105._4_4_;
              auVar115._0_8_ = (double)auVar105._8_4_;
              auVar115._8_8_ = (double)auVar105._12_4_;
              dVar71 = (double)fVar83;
              dVar81 = (double)fVar89;
              dVar52 = (double)fVar90;
              dVar54 = (double)fVar92;
              auVar105 = minpd(auVar102,auVar57);
              auVar7._8_8_ = uStack_450;
              auVar7._0_8_ = local_458;
              auVar86 = minpd(auVar7,auVar115);
              auVar65._8_8_ = -(ulonglong)(auVar105._8_8_ < 0.0);
              auVar65._0_8_ = -(ulonglong)(auVar105._0_8_ < 0.0);
              iVar13 = movmskpd((int)lVar27,auVar65);
              auVar96._8_8_ = -(ulonglong)(auVar86._8_8_ < 0.0);
              auVar96._0_8_ = -(ulonglong)(auVar86._0_8_ < 0.0);
              uVar24 = movmskpd(iVar22,auVar96);
              _local_478 = auVar88;
              if ((uVar24 & 0x3fffffff) == 0 && iVar13 == 0) {
                dVar79 = local_338 * dVar52 * -1.0 +
                         (double)local_428._0_8_ * dVar81 +
                         local_348 * dVar71 * 1.0 + (double)local_468 * dVar54;
                dVar84 = dStack_330 * dVar52 * 1.0 +
                         (double)local_428._8_8_ * dVar81 +
                         dStack_340 * dVar71 * -1.0 + dStack_460 * dVar54;
                auVar75._0_8_ =
                     dVar52 * local_348 * 1.0 +
                     ((dVar71 * local_338 * 1.0 + dVar54 * (double)local_428._0_8_) -
                     dVar81 * (double)local_468);
                auVar75._8_8_ =
                     dVar52 * dStack_340 * -1.0 +
                     ((dVar71 * dStack_330 * -1.0 + dVar54 * (double)local_428._8_8_) -
                     dVar81 * dStack_460);
              }
              else {
                dVar93 = dVar81 + dVar81;
                dVar79 = dVar52 + dVar52;
                local_418._8_4_ = SUB84(dVar54 + dVar54,0);
                local_418._0_8_ = dVar79;
                local_418._12_4_ = (int)((ulonglong)(dVar54 + dVar54) >> 0x20);
                dVar84 = (dVar71 + dVar71) * dVar71;
                local_448 = 1.0 - (dVar52 * dVar79 + dVar93 * dVar81);
                uStack_440 = 1.0 - (dVar52 * dVar79 + dVar84);
                dVar91 = (dVar71 + dVar71) * dVar54;
                local_158 = (dVar93 * dVar71 - dVar79 * dVar54) * auVar57._8_8_;
                dStack_130 = (dVar79 * dVar81 - dVar91) * auVar115._0_8_;
                local_3b8 = auVar102._0_8_ * auVar57._0_8_;
                dStack_3b0 = auVar102._8_8_ * auVar57._8_8_;
                local_178 = local_448 * auVar57._0_8_;
                dStack_150 = uStack_440 * auVar57._8_8_;
                dVar52 = (dVar93 * dVar71 + dVar79 * dVar54) * auVar57._0_8_;
                local_148 = (dVar79 * dVar81 + dVar91) * auVar57._8_8_;
                local_138 = (dVar71 * dVar79 + dVar93 * dVar54) * auVar115._0_8_;
                local_168 = (dVar71 * dVar79 - dVar93 * dVar54) * auVar57._0_8_;
                uStack_170 = SUB82(dVar52,0);
                uStack_16e = (undefined6)((ulonglong)dVar52 >> 0x10);
                uStack_160 = 0;
                uStack_140 = 0;
                local_128 = (1.0 - (dVar84 + dVar93 * dVar81)) * auVar115._0_8_;
                uStack_120 = 0;
                local_118 = (double)auVar40._0_4_;
                dStack_110 = (double)auVar40._4_4_;
                local_108 = (double)auVar40._8_4_;
                uStack_100 = 0x3ff0000000000000;
                local_1f8 = local_3a8;
                dStack_1f0 = dStack_3a0;
                local_1e8 = local_398;
                uStack_1e0 = uStack_390;
                local_1d8 = local_368._0_8_;
                uStack_1d0 = local_368._8_8_;
                local_1c8 = local_378;
                uStack_1c0 = uStack_370;
                local_1b8._8_4_ = SUB84(dVar80,0);
                local_1b8._0_8_ = dVar70;
                local_1b8._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
                local_1a8 = local_388;
                uStack_1a0 = uStack_380;
                local_198 = local_3f8;
                dStack_190 = dStack_3f0;
                local_188 = local_358;
                uStack_180 = uStack_350;
                FUN_1447fea8d(&local_2a8,&local_1f8);
                local_3c0.s = uStack_2a0;
                local_3c8 = (double)local_298;
                dVar71 = (double)local_298 * (double)local_298 +
                         (double)local_2a8 * (double)local_2a8 +
                         (double)uStack_2a0 * (double)uStack_2a0;
                local_3d0 = (double)local_278._0_8_;
                dVar81 = (double)local_278._0_8_ * (double)local_278._0_8_ +
                         local_288 * local_288 + uStack_280 * uStack_280;
                local_3d8 = local_258;
                dVar52 = local_258 * local_258 + dStack_268 * dStack_268 + local_260 * local_260;
                uVar33 = -(ulonglong)(0.0 <= dVar71 + -9.99999993922529e-09);
                dVar71 = (double)(~uVar33 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar71)) & uVar33);
                uVar33 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
                dVar81 = (double)(~uVar33 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar81)) & uVar33);
                uVar33 = -(ulonglong)(0.0 <= dVar52 + -9.99999993922529e-09);
                dVar52 = (double)(~uVar33 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar52)) & uVar33);
                local_448 = local_288 * dVar81;
                local_418._0_8_ = uStack_280 * dVar81;
                local_430 = dStack_268 * dVar52;
                auVar46._8_8_ = -(ulonglong)(0.0 <= dStack_3b0);
                auVar46._0_8_ = -(ulonglong)(0.0 <= local_3b8);
                auVar105 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar46);
                uVar33 = -(ulonglong)(0.0 <= auVar115._0_8_ * (double)local_458);
                dStack_268 = (double)(~uVar33 & 0xbff0000000000000 | uVar33 & 0x3ff0000000000000);
                dVar54 = auVar105._0_8_;
                local_2a8 = (char *)((double)local_2a8 * dVar71 * dVar54);
                uStack_2a0 = (LARGE_INTEGER)((double)uStack_2a0 * dVar71 * dVar54);
                local_298 = (undefined1  [8])(dVar71 * (double)local_298 * dVar54);
                dVar71 = auVar105._8_8_;
                uStack_280 = uStack_280 * dVar81 * dVar71;
                local_288 = dVar71 * local_448;
                local_278._0_8_ = dVar81 * (double)local_278._0_8_ * dVar71;
                local_258 = dVar52 * local_258 * dStack_268;
                local_260 = local_260 * dVar52 * dStack_268;
                dStack_268 = dStack_268 * local_430;
                FUN_14481fd10(&local_2c8,&local_2a8);
                dVar71 = local_2b8 * local_2b8 + local_2c8 * local_2c8;
                dVar81 = dStack_2b0 * dStack_2b0 + dStack_2c0 * dStack_2c0;
                auVar66._0_8_ = dVar71 + dVar81;
                auVar66._8_8_ = dVar71 + dVar81;
                auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_);
                auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_);
                auVar105 = sqrtpd(auVar66,auVar66);
                auVar105 = divpd(_DAT_149934d80,auVar105);
                auVar87._0_8_ = auVar105._0_8_ * local_2b8;
                auVar87._8_8_ = auVar105._8_8_ * dStack_2b0;
                dVar79 = (double)((ulonglong)(local_2c8 * auVar105._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_));
                dVar84 = (double)((ulonglong)(dStack_2c0 * auVar105._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_));
                auVar75 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar87,auVar47);
                auVar88 = *(undefined1 (*) [16])(lVar34 + 0x20 + lVar37);
              }
              uVar24 = -(uint)(1e-08 < local_478._0_4_);
              fVar103 = (float)(~uVar24 & (uint)fVar103 | (uint)(fVar103 / local_478._0_4_) & uVar24
                               );
              if (cVar12 == '\0') {
                dVar71 = 0.0;
              }
              else {
                dVar71 = (double)-(float)local_3e8._0_4_;
              }
              dVar91 = dVar79 * 0.0 + dVar84 * -0.0;
              dVar81 = auVar75._0_8_;
              dVar52 = auVar75._8_8_;
              dVar93 = dVar81 * 0.0 - dVar71 * dVar79;
              dVar54 = dVar84 * dVar71 + dVar81 * -0.0;
              dVar91 = dVar91 + dVar91;
              dVar93 = dVar93 + dVar93;
              dVar54 = dVar54 + dVar54;
              lVar27 = *(longlong *)(local_490 + 0x10);
              auVar73._4_12_ = auVar75._4_12_;
              fVar83 = 1.0 - fVar103;
              auVar73._0_4_ =
                   (float)((dVar79 * dVar93 - dVar54 * dVar84) + dVar52 * dVar91 + dVar71 +
                          *(double *)(lVar27 + 0x30 + lVar37 * 2)) * fVar83;
              fVar53 = fVar83 * (float)((dVar84 * dVar91 - dVar93 * dVar81) + dVar52 * dVar54 + 0.0
                                       + *(double *)(lVar27 + 0x20 + lVar37 * 2));
              auVar105 = insertps(ZEXT416((uint)fVar53),
                                  ZEXT416((uint)((float)((dVar81 * dVar54 - dVar91 * dVar79) +
                                                         dVar52 * dVar93 + 0.0 +
                                                        *(double *)(lVar27 + 0x28 + lVar37 * 2)) *
                                                fVar83)),0x1c);
              fVar69 = auVar105._4_4_;
              auVar86 = insertps(auVar105,auVar73,0x20);
              auVar105 = pshufb(ZEXT416((uint)fVar103),_DAT_149f5d880);
              auVar99 = minps(auVar105,auVar88);
              auVar74._4_4_ = -(uint)(auVar99._4_4_ < 0.0);
              auVar74._0_4_ = -(uint)(auVar99._0_4_ < 0.0);
              auVar74._8_4_ = -(uint)(auVar99._8_4_ < 0.0);
              auVar74._12_4_ = -(uint)(auVar99._12_4_ < 0.0);
              iVar22 = movmskps((int)lVar27,auVar74);
              fVar92 = auVar88._0_4_;
              fVar39 = auVar88._4_4_;
              fVar50 = auVar88._8_4_;
              fVar51 = auVar88._12_4_;
              fVar103 = auVar105._0_4_;
              fVar83 = auVar105._4_4_;
              fVar89 = auVar105._8_4_;
              fVar90 = auVar86._8_4_;
              if (iVar22 == 0) {
                pfVar15 = (float *)(lVar34 + lVar37);
                fVar53 = *pfVar15;
                fVar69 = pfVar15[1];
                fVar77 = pfVar15[2];
                fVar78 = pfVar15[3];
                fVar82 = auVar86._0_4_ * fVar92;
                fVar59 = auVar86._4_4_ * fVar39;
                fVar90 = fVar90 * fVar50;
                fVar60 = auVar86._12_4_ * fVar51;
                fVar113 = fVar59 * fVar53 - fVar82 * fVar69;
                fVar117 = fVar90 * fVar69 - fVar59 * fVar77;
                fVar118 = fVar82 * fVar77 - fVar90 * fVar53;
                fVar120 = fVar60 * fVar78 - fVar60 * fVar78;
                fVar113 = fVar113 + fVar113;
                fVar117 = fVar117 + fVar117;
                fVar118 = fVar118 + fVar118;
                fVar120 = fVar120 + fVar120;
                auVar112._0_4_ =
                     fVar77 * DAT_14c846344 * -1.0 +
                     fVar69 * DAT_14c846348 * 1.0 +
                     fVar53 * DAT_14c84634c * 1.0 + DAT_14c84633c._4_4_ * fVar78;
                auVar112._4_4_ =
                     fVar77 * DAT_14c84633c._4_4_ * 1.0 +
                     fVar69 * DAT_14c84634c * 1.0 +
                     fVar53 * DAT_14c846348 * -1.0 + DAT_14c846344 * fVar78;
                auVar112._8_4_ =
                     fVar77 * DAT_14c84634c * 1.0 +
                     fVar69 * DAT_14c84633c._4_4_ * -1.0 +
                     fVar53 * DAT_14c846344 * 1.0 + DAT_14c846348 * fVar78;
                auVar112._12_4_ =
                     fVar77 * DAT_14c846348 * -1.0 +
                     fVar69 * DAT_14c846344 * -1.0 +
                     fVar53 * DAT_14c84633c._4_4_ * -1.0 + DAT_14c84634c * fVar78;
                pfVar15 = (float *)(lVar34 + 0x10 + lVar37);
                auVar116._0_4_ =
                     (fVar113 * fVar69 - fVar118 * fVar77) + fVar78 * fVar117 + fVar82 + *pfVar15;
                auVar116._4_4_ =
                     (fVar117 * fVar77 - fVar113 * fVar53) + fVar78 * fVar118 + fVar59 + pfVar15[1];
                auVar116._8_4_ =
                     (fVar118 * fVar53 - fVar117 * fVar69) + fVar78 * fVar113 + fVar90 + pfVar15[2];
                auVar116._12_4_ =
                     (fVar120 * fVar78 - fVar120 * fVar78) + fVar78 * fVar120 + fVar60 + pfVar15[3];
                auVar106._4_4_ = fVar83 * fVar39;
                auVar106._0_4_ = fVar103 * fVar92;
                auVar106._8_4_ = fVar89 * fVar50;
                auVar106._12_4_ = auVar105._12_4_ * fVar51;
              }
              else {
                auVar88 = blendps(ZEXT416((uint)fVar53),ZEXT816(0),0xe);
                auVar106._0_4_ = fVar103 * fVar92;
                auVar106._4_4_ = fVar83 * fVar39;
                auVar106._8_4_ = fVar89 * fVar50;
                auVar106._12_4_ = auVar105._12_4_ * fVar51;
                pfVar15 = (float *)(lVar34 + lVar37);
                fVar53 = *pfVar15;
                fVar77 = pfVar15[1];
                fVar78 = pfVar15[2];
                fVar82 = pfVar15[3];
                fVar60 = fVar53 + fVar53;
                fVar113 = fVar77 + fVar77;
                fVar117 = fVar78 + fVar78;
                fVar59 = fVar82 * (fVar82 + fVar82);
                auVar107._0_4_ = (1.0 - (fVar78 * fVar117 + fVar77 * fVar113)) * fVar92;
                auVar107._4_4_ = (1.0 - (fVar78 * fVar117 + fVar53 * fVar60)) * fVar39;
                auVar107._8_4_ = (1.0 - (fVar77 * fVar113 + fVar53 * fVar60)) * fVar50;
                auVar107._12_4_ = (0.0 - (fVar59 + fVar59)) * fVar51;
                fVar114 = (fVar113 * fVar53 + fVar117 * fVar82) * fVar92;
                auVar67._4_4_ = (fVar117 * fVar77 + fVar60 * fVar82) * fVar39;
                auVar67._0_4_ = fVar114;
                fVar119 = (fVar117 * fVar53 + fVar113 * fVar82) * fVar50;
                fVar39 = (fVar113 * fVar53 - fVar117 * fVar82) * fVar39;
                fVar50 = (fVar117 * fVar77 - fVar60 * fVar82) * fVar50;
                fVar92 = (fVar117 * fVar53 - fVar113 * fVar82) * fVar92;
                auVar86 = blendps(auVar107,ZEXT816(0),8);
                auVar67._8_4_ = fVar119;
                auVar67._12_4_ = (fVar60 * fVar53 + fVar60 * fVar82) * fVar51;
                auVar105 = insertps(auVar67,auVar67,0x4c);
                fVar78 = auVar105._0_4_;
                fVar82 = auVar105._8_4_;
                fVar108 = auVar86._8_4_;
                fVar110 = auVar86._12_4_;
                auVar105 = insertps(*(undefined1 (*) [16])(lVar34 + 0x10 + lVar37),
                                    ZEXT816(0x3f800000),0x30);
                fVar53 = DAT_14c846344 + DAT_14c846344;
                fVar77 = DAT_14c846348 + DAT_14c846348;
                fVar51 = DAT_14c84633c._4_4_ * (DAT_14c84633c._4_4_ + DAT_14c84633c._4_4_);
                fVar117 = (1.0 - (DAT_14c846348 * fVar77 + DAT_14c846344 * fVar53)) * fVar103;
                fVar120 = (1.0 - (DAT_14c846348 * fVar77 + fVar51)) * fVar83;
                fVar109 = (1.0 - (DAT_14c846344 * fVar53 + fVar51)) * fVar89;
                fVar51 = (DAT_14c84633c._4_4_ + DAT_14c84633c._4_4_) * DAT_14c84634c;
                fVar59 = (fVar53 * DAT_14c84633c._4_4_ + fVar77 * DAT_14c84634c) * fVar103;
                fVar60 = (fVar77 * DAT_14c846344 + fVar51) * fVar83;
                fVar113 = (fVar77 * DAT_14c84633c._4_4_ + fVar53 * DAT_14c84634c) * fVar89;
                fVar83 = (fVar53 * DAT_14c84633c._4_4_ - fVar77 * DAT_14c84634c) * fVar83;
                fVar89 = (fVar77 * DAT_14c846344 - fVar51) * fVar89;
                fVar103 = (fVar77 * DAT_14c84633c._4_4_ - fVar53 * DAT_14c84634c) * fVar103;
                fVar51 = auVar88._0_4_;
                local_478._0_4_ = auVar105._0_4_;
                local_478._4_4_ = auVar105._4_4_;
                fStack_470 = auVar105._8_4_;
                fStack_46c = auVar105._12_4_;
                local_278._0_4_ =
                     fVar90 * fVar119 + fVar69 * fVar39 + fVar51 * auVar107._0_4_ +
                     (float)local_478._0_4_;
                local_278._4_4_ =
                     fVar90 * fVar50 + fVar69 * auVar107._4_4_ + fVar51 * fVar114 +
                     (float)local_478._4_4_;
                local_278._8_4_ = fVar90 * fVar108 + fVar69 * fVar78 + fVar51 * fVar92 + fStack_470;
                local_278._12_4_ = fVar90 * fVar110 + fVar69 * fVar82 + fVar51 * 0.0 + fStack_46c;
                fVar51 = (float)local_478._0_4_ * 0.0;
                fVar53 = (float)local_478._4_4_ * 0.0;
                fVar69 = fStack_470 * 0.0;
                fVar77 = fStack_46c * 0.0;
                fVar111 = fVar103 * fVar119 + fVar59 * fVar39 + fVar117 * auVar107._0_4_ + fVar51;
                local_478._4_4_ =
                     fVar103 * fVar50 + fVar59 * auVar107._4_4_ + fVar117 * fVar114 + fVar53;
                local_3e8._8_4_ = fVar103 * fVar108 + fVar59 * fVar78 + fVar117 * fVar92 + fVar69;
                fStack_470 = fVar103 * fVar110 + fVar59 * fVar82 + fVar117 * 0.0 + fVar77;
                fVar59 = fVar60 * fVar119 + fVar120 * fVar39 + fVar83 * auVar107._0_4_ + fVar51;
                fVar117 = fVar60 * fVar50 + fVar120 * auVar107._4_4_ + fVar83 * fVar114 + fVar53;
                fVar118 = fVar60 * fVar108 + fVar120 * fVar78 + fVar83 * fVar92 + fVar69;
                fVar51 = fVar109 * fVar119 + fVar89 * fVar39 + fVar113 * auVar107._0_4_ + fVar51;
                fVar53 = fVar109 * fVar50 + fVar89 * auVar107._4_4_ + fVar113 * fVar114 + fVar53;
                fVar69 = fVar109 * fVar108 + fVar89 * fVar78 + fVar113 * fVar92 + fVar69;
                fVar39 = fVar109 * fVar110 + fVar89 * fVar82 + fVar113 * 0.0 + fVar77;
                local_448 = (double)CONCAT44(fVar53,fVar51);
                uStack_440 = (double)CONCAT44(fVar39,fVar69);
                local_478._0_4_ = local_478._4_4_;
                fStack_46c = fStack_470;
                auVar40._4_8_ = local_278._8_8_;
                auVar40._0_4_ = local_478._4_4_;
                auVar58._0_8_ = auVar40._0_8_ << 0x20;
                auVar58._8_4_ = local_3e8._8_4_;
                auVar58._12_4_ = fStack_470;
                local_3e8._0_8_ = auVar58._8_8_;
                fStack_3dc = fStack_470;
                fVar103 = (float)local_3e8._8_4_ * (float)local_3e8._8_4_ +
                          fVar111 * fVar111 + (float)local_478._4_4_ * (float)local_478._4_4_;
                fVar90 = fVar118 * fVar118 + fVar59 * fVar59 + fVar117 * fVar117;
                fVar92 = fVar69 * fVar69 + fVar51 * fVar51 + fVar53 * fVar53;
                uVar24 = -(uint)(0.0 <= fVar103 + -1e-08);
                fVar89 = (float)(~uVar24 & 0x3f800000 | (uint)(1.0 / SQRT(fVar103)) & uVar24);
                uVar24 = -(uint)(0.0 <= fVar90 + -1e-08);
                fVar90 = (float)(~uVar24 & 0x3f800000 | (uint)(1.0 / SQRT(fVar90)) & uVar24);
                uVar24 = -(uint)(0.0 <= fVar92 + -1e-08);
                fVar103 = (float)(~uVar24 & 0x3f800000 | (uint)(1.0 / SQRT(fVar92)) & uVar24);
                auVar48._4_4_ = -(uint)(0.0 <= auVar106._4_4_);
                auVar48._0_4_ = -(uint)(0.0 <= auVar106._0_4_);
                auVar48._8_4_ = -(uint)(0.0 <= auVar106._8_4_);
                auVar48._12_4_ = -(uint)(0.0 <= auVar106._12_4_);
                auVar105 = blendvps(_DAT_149f63320,_DAT_149e1ef10,auVar48);
                fVar92 = auVar105._0_4_;
                local_2a8._4_4_ = (float)local_478._4_4_ * fVar89 * fVar92;
                local_2a8._0_4_ = fVar111 * fVar89 * fVar92;
                uStack_2a0._4_4_ = fStack_470;
                uStack_2a0._0_4_ = fVar89 * (float)local_3e8._8_4_ * fVar92;
                fVar89 = auVar105._4_4_;
                local_298._4_4_ = fVar117 * fVar90 * fVar89;
                local_298._0_4_ = fVar59 * fVar90 * fVar89;
                uStack_290._0_4_ = fVar90 * fVar118 * fVar89;
                uStack_290._4_4_ = fVar60 * fVar110 + fVar120 * fVar82 + fVar83 * 0.0 + fVar77;
                fVar83 = auVar105._8_4_;
                local_288 = (double)CONCAT44(fVar53 * fVar103 * fVar83,fVar83 * fVar51 * fVar103);
                uStack_280 = (double)CONCAT44(fVar39,fVar103 * fVar69 * fVar83);
                FUN_14066c2ac(&local_178,&local_2a8);
                auVar8._8_2_ = uStack_170;
                auVar8._0_8_ = local_178;
                auVar8._10_6_ = uStack_16e;
                fVar103 = (float)((uint6)uStack_16e >> 0x10);
                fVar90 = SUB84(local_178,0);
                fVar92 = (float)((ulonglong)local_178 >> 0x20);
                fVar39 = auVar8._8_4_;
                fVar83 = fVar90 * fVar90 + fVar92 * fVar92;
                fVar89 = fVar39 * fVar39 + fVar103 * fVar103;
                auVar68._0_4_ = fVar89 + fVar83;
                auVar68._4_4_ = fVar89 + fVar83;
                auVar68._8_4_ = fVar83 + fVar89;
                auVar68._12_4_ = fVar83 + fVar89;
                auVar49._4_4_ = -(uint)(1e-08 <= auVar68._4_4_);
                auVar49._0_4_ = -(uint)(1e-08 <= auVar68._0_4_);
                auVar49._8_4_ = -(uint)(1e-08 <= auVar68._8_4_);
                auVar49._12_4_ = -(uint)(1e-08 <= auVar68._12_4_);
                auVar105 = sqrtps(auVar68,auVar68);
                auVar105 = divps(_DAT_1499314a0,auVar105);
                auVar76._0_4_ = auVar105._0_4_ * fVar90;
                auVar76._4_4_ = auVar105._4_4_ * fVar92;
                auVar76._8_4_ = auVar105._8_4_ * fVar39;
                auVar76._12_4_ = auVar105._12_4_ * fVar103;
                auVar112 = blendvps(_DAT_149932320,auVar76,auVar49);
                auVar116 = blendps(local_278,_DAT_149931140,8);
              }
              auVar102 = local_408;
              lVar34 = *(longlong *)(param_1.QuadPart + 0xa48);
              if (*(char *)(lVar34 + 0x118) == '\0') {
                local_2a8 = (char *)0x0;
                uStack_2a0._0_2_ = 1;
                local_4a8 = (double *)&local_2a8;
                FUN_140b19abe(lVar34,DAT_14c9974b0,DAT_14c9974a8,lVar34 + 0xf8);
                local_4a8 = (double *)DAT_14c9974a8;
                FUN_1408a6bca(lVar34,*(undefined8 *)(lVar34 + 0xb8),DAT_14c9974b0,DAT_14c9974b0);
                *(undefined1 *)(lVar34 + 0x118) = 1;
              }
              lVar34 = *(longlong *)(lVar34 + 0x108);
              *(undefined1 (*) [16])(lVar34 + lVar37) = auVar112;
              *(undefined1 (*) [16])(lVar34 + 0x10 + lVar37) = auVar116;
              *(undefined1 (*) [16])(lVar34 + 0x20 + lVar37) = auVar106;
              bVar38 = true;
            }
          }
          else {
            lVar34 = *(longlong *)(param_1.QuadPart + 0xa48);
            if (*(char *)(lVar34 + 0x118) == '\0') {
              plVar26 = (longlong *)(*(longlong *)(lVar34 + 0xb8) + 0xc0);
            }
            else {
              plVar26 = (longlong *)(lVar34 + 0x108);
            }
            pLVar16 = (LARGE_INTEGER *)(*plVar26 + lVar37);
            local_2a8 = *(char **)pLVar16;
            uStack_2a0 = pLVar16[1];
            _local_298 = *(undefined1 (*) [16])(*plVar26 + 0x10 + lVar37);
            auVar104._8_8_ = 0;
            auVar104._0_8_ = DAT_14c846330;
            auVar105 = insertps(auVar104,DAT_14c846338,0x28);
            if (*(char *)(lVar34 + 0x118) == '\0') {
              local_178 = 0.0;
              uStack_170 = 1;
              local_4a8 = &local_178;
              FUN_140b19abe(lVar34,DAT_14c9974b0,DAT_14c9974a8,lVar34 + 0xf8);
              local_4a8 = (double *)DAT_14c9974a8;
              FUN_1408a6bca(lVar34,*(undefined8 *)(lVar34 + 0xb8),DAT_14c9974b0,DAT_14c9974b0);
              *(undefined1 *)(lVar34 + 0x118) = 1;
            }
            lVar34 = *(longlong *)(lVar34 + 0x108);
            *(undefined1 (*) [16])(lVar34 + 0x10 + lVar37) = _local_298;
            *(LARGE_INTEGER *)(lVar34 + lVar37) = (LARGE_INTEGER)local_2a8;
            ((LARGE_INTEGER *)(lVar34 + lVar37))[1] = uStack_2a0;
            *(undefined1 (*) [16])(lVar34 + 0x20 + lVar37) = auVar105;
            bVar38 = true;
          }
        }
        uVar36 = uVar36 + 1;
        lVar37 = lVar37 + 0x30;
      } while ((ulonglong)uVar28 * 0x30 != lVar37);
      uVar24 = local_484;
      if (bVar38) {
        *(undefined1 *)(*(longlong *)(param_1.QuadPart + 0xa48) + 0xa8) = 1;
        *(byte *)(param_1.QuadPart + 0x9a4) = *(byte *)(param_1.QuadPart + 0x9a4) | 3;
        dVar71 = DAT_14c8464e8;
        *(double *)(param_1.QuadPart + 0xa10) = DAT_14c8464e0;
        *(double *)(param_1.QuadPart + 0xa18) = dVar71;
        *(double *)(param_1.QuadPart + 0xa20) = DAT_14c8464f0;
        dVar71 = DAT_14c8464e8;
        *(double *)(param_1.QuadPart + 0x9f8) = DAT_14c8464e0;
        *(double *)(param_1.QuadPart + 0xa00) = dVar71;
        *(double *)(param_1.QuadPart + 0xa08) = DAT_14c8464f0;
        *(char *)(param_1.QuadPart + 0xa28) = '\0';
      }
    }
  }
  if ((*(char *)(param_1.QuadPart + 0x872) == '\0') && (*(int *)(param_1.QuadPart + 0xad8) < 1)) {
    uVar28 = *(uint *)(param_1.QuadPart + 0xad0);
    pcVar17 = (char *)(param_1.QuadPart + 0xab8);
    if (*(char **)(param_1.QuadPart + 0xac8) != (char *)0x0) {
      pcVar17 = *(char **)(param_1.QuadPart + 0xac8);
    }
    uVar30 = 0xffffffff >> (-(char)((int)uVar28 % 0x20) & 0x1fU);
    if ((int)uVar28 % 0x20 < 1) {
      uVar30 = 0xffffffff;
    }
    if ((int)uVar28 < 1) {
      uVar29 = 0;
    }
    else {
      uVar32 = (ulonglong)uVar28 + 0x1f >> 5;
      uVar35 = 0xffffffff;
      if (uVar28 < 0x21) {
        uVar35 = uVar30;
      }
      uVar36 = 0;
      uVar29 = 0;
      do {
        uVar33 = (ulonglong)(uVar35 & *(uint *)(pcVar17 + uVar36 * 4)) -
                 (ulonglong)((uVar35 & *(uint *)(pcVar17 + uVar36 * 4)) >> 1 & 0x55555555);
        uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
        uVar29 = uVar29 + (byte)(((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
        bVar38 = uVar32 - 2 == uVar36;
        uVar36 = uVar36 + 1;
        uVar35 = 0xffffffff;
        if (bVar38) {
          uVar35 = uVar30;
        }
      } while (uVar32 != uVar36);
    }
    if ((uVar29 == uVar28) &&
       (*(char *)(param_1.QuadPart + 0x872) = '\x01', 0 < *(int *)(param_1.QuadPart + 0x7f8))) {
      FUN_1447cd2ec((char *)(param_1.QuadPart + 0x7f0),0);
    }
  }
LAB_1406e87d0:
  if (((*(longlong *)(param_1.QuadPart + 0xa48) != 0) &&
      (*(char *)(*(longlong *)(param_1.QuadPart + 0xa48) + 0xa8) == '\x01')) &&
     (((*(longlong *)(param_1.QuadPart + 0x878) != 0 &&
       (*(longlong *)(param_1.QuadPart + 0x880) != 0)) ||
      (cVar12 = FUN_14327f08c(*(undefined8 *)(param_1.QuadPart + 0x660)), cVar12 != '\0')))) {
    FUN_1432795ee(param_1.QuadPart);
    if ((*(byte *)(param_1.QuadPart + 0x851) & 2) != 0) {
      FUN_140ca2e9a(param_1.QuadPart);
    }
    if (*(longlong *)(param_1.QuadPart + 0x5a8) != 0) {
      if ((*(byte *)(*(longlong *)(param_1.QuadPart + 0x5a8) + 0x74) & 8) != 0) {
        FUN_14327ff72();
      }
      FUN_1448c69c8(param_1.QuadPart);
      FUN_1448c6f34(param_1.QuadPart);
    }
    if (((*(char *)(param_1.QuadPart + 0x850) == '\x01') &&
        ((lVar37 = *(longlong *)(param_1.QuadPart + 0xb0), lVar37 != 0 ||
         (lVar37 = FUN_1448abda6(param_1.QuadPart), lVar37 != 0)))) &&
       (((bVar21 = *(byte *)(lVar37 + 0x152), bVar21 == 1 ||
         ((bVar21 < 7 && ((0x68U >> (bVar21 & 0x1f) & 1) != 0)))) &&
        (((*(byte *)(param_1.QuadPart + 0x9e) & 0x40) != 0 &&
         (((*(byte *)(param_1.QuadPart + 0x9c) & 1) != 0 &&
          ((char)((char)DAT_14c872be0 + *(char *)(param_1.QuadPart + 0x958)) == '\0')))))))) {
      FUN_14348be42(param_1.QuadPart);
    }
  }
  if ((char)uVar24 != '\0') {
    if (0 < *(int *)(param_1.QuadPart + 0x808)) {
      FUN_1447cd2ec((char *)(param_1.QuadPart + 0x800),0);
    }
    if ((longlong)*(int *)(param_1.QuadPart + 0x818) != 0) {
      lVar37 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1.QuadPart + 0x810) + 8 + lVar37) != 0) &&
           (*(longlong *)(*(longlong *)(param_1.QuadPart + 0x810) + lVar37) != 0)) {
          FUN_1474acdbc((char *)(param_1.QuadPart + 0x810),param_1.QuadPart);
          break;
        }
        lVar37 = lVar37 + 0x10;
      } while ((longlong)*(int *)(param_1.QuadPart + 0x818) * 0x10 != lVar37);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e8e54 FUN_1406e8e54 body=353 status=ok
// SIG undefined FUN_1406e8e54(void)

void FUN_1406e8e54(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406e8edb;
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
LAB_1406e8edb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1406e8fb6 FUN_1406e8fb6 body=144 status=ok
// SIG undefined FUN_1406e8fb6(void)

void FUN_1406e8fb6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_1 != 0) &&
     (((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 != 0 || (lVar1 = FUN_1448abda6(), lVar1 != 0))
      && (0 < (longlong)DAT_14cb24a48)))) {
    lVar4 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(DAT_14cb24a40 + lVar4) == lVar1) {
        lVar2 = *(longlong *)(DAT_14cb24a40 + 8 + lVar4);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)DAT_14cb24a48 * 0x10 != lVar4);
    if (lVar2 != 0) {
      FUN_1406e9046(lVar2 + 0x60,param_2);
    }
  }
  if (*param_2 == 0) {
    return;
  }
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001406e9030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 1406e9046 FUN_1406e9046 body=110 status=ok
// SIG undefined FUN_1406e9046(void)

bool FUN_1406e9046(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  lVar1 = *param_2;
  puVar3[2] = lVar1;
  puVar3[4] = 0;
  if (lVar1 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,puVar3 + 4);
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar3;
    *puVar2 = puVar3;
  }
  return puVar3 != (undefined8 *)0x0;
}



// FUNCTION 1406e90b4 FUN_1406e90b4 body=174 status=ok
// SIG undefined FUN_1406e90b4(void)

void FUN_1406e90b4(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar2 = (longlong *)FUN_145a7712c();
    lVar1 = plVar2[0x22];
    if (plVar2[0x22] == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
  }
  DAT_14cb24ad0 = lVar1;
  lVar1 = DAT_14cb24ad0;
  (**(code **)(param_1[-0x15e] + 0x528))(param_1 + -0x15e,local_58,param_1 + -0x116);
  (**(code **)(*param_1 + 0x20))(param_1,local_58,*(undefined4 *)(lVar1 + 0x50),(float)local_28);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406e9164 FUN_1406e9164 body=298 status=ok
// SIG undefined FUN_1406e9164(void)

void FUN_1406e9164(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_d8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  memset(local_1a8,0,0x100);
  local_d8 = 0xffffffff;
  local_1a4 = 0x3f800000;
  local_104 = 0xffffffff;
  local_9c = 3;
  local_98 = 0;
  local_88 = (longlong *)0x0;
  local_180 = *param_2;
  uStack_178 = param_2[1];
  local_170 = param_2[2];
  local_150 = (undefined4)DAT_14c8464e0;
  uStack_14c = DAT_14c8464e0._4_4_;
  uStack_148 = (undefined4)DAT_14c8464e8;
  uStack_144 = DAT_14c8464e8._4_4_;
  local_140 = DAT_14c8464f0;
  local_100 = 0xffffffff;
  local_a0 = 0x7f7fffff;
  local_a8 = param_4;
  local_a4 = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,local_1a8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e9290 FUN_1406e9290 body=290 status=ok
// SIG undefined FUN_1406e9290(void)

undefined8 FUN_1406e9290(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1406e93ab;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1406e93ab;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1406e93ab:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1406e9356;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_1406e9356;
    }
  }
  uVar6 = 0;
LAB_1406e9356:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406e93b4 FUN_1406e93b4 body=58 status=ok
// SIG undefined FUN_1406e93b4(void)

void FUN_1406e93b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1406f625c(param_3);
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001406e93e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x330))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1406e93ee FUN_1406e93ee body=58 status=ok
// SIG undefined FUN_1406e93ee(void)

void FUN_1406e93ee(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1406f625c(param_3);
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001406e941d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x338))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1406e9428 FUN_1406e9428 body=92 status=ok
// SIG undefined FUN_1406e9428(void)

void FUN_1406e9428(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1406e9484(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406e9484 FUN_1406e9484 body=43 status=ok
// SIG undefined FUN_1406e9484(void)

void FUN_1406e9484(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1406e94b0 FUN_1406e94b0 body=65 status=ok
// SIG undefined FUN_1406e94b0(void)

undefined8 FUN_1406e94b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3b38) + 0x18))
                    (*(longlong *)(param_1 + 0x4208) + 0x3b38);
  cVar1 = FUN_140226b70(uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_1406e94f2(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1406e94f2 FUN_1406e94f2 body=178 status=ok
// SIG undefined FUN_1406e94f2(void)

bool FUN_1406e94f2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd8))(param_1 + 0x178);
  if (cVar2 == '\0') {
    if ((*(longlong *)(&DAT_00001ce8 + param_1) == 0) ||
       (*(byte *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x178) < 2)) {
      cVar2 = *(char *)(param_1 + 0x1ee0);
joined_r0x0001406e9576:
      if (cVar2 != '\0') {
LAB_1406e9588:
        if (*(longlong *)(param_1 + 0x1eb8) != 0) {
          bVar3 = FUN_1489a1546();
          return (bool)(bVar3 ^ 1);
        }
        goto LAB_1406e9512;
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x1eb8);
      if (plVar1 != (longlong *)0x0) {
        if (*(code **)(*plVar1 + 0x40) != (code *)&LAB_1449cc0ea) {
          cVar2 = (**(code **)(*plVar1 + 0x40))();
          goto joined_r0x0001406e9576;
        }
        if ((*(char *)((longlong)plVar1 + 0xb2) != '\0') ||
           ((*(char *)((longlong)plVar1 + 0x79) == '\0' &&
            (((int)plVar1[4] < 1 || ((char)plVar1[0xf] != '\x01')))))) goto LAB_1406e9563;
        goto LAB_1406e9588;
      }
    }
LAB_1406e9563:
    bVar4 = (*(byte *)(param_1 + 0x1f18) & 1) == 0;
  }
  else {
LAB_1406e9512:
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 1406e95a4 FUN_1406e95a4 body=829 status=ok
// SIG undefined FUN_1406e95a4(void)

int * FUN_1406e95a4(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_140044672(param_1,iVar25);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar15 = iVar17 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar22 = param_1 + 2;
    iVar21 = iVar17 + 1;
    iVar27 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    if (iVar27 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar21;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar21 = 0x80;
          iVar15 = iVar17;
        }
        else {
          uVar16 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar16) {
              uVar18 = uVar16;
            }
          }
          else {
            uVar18 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar18 << 2,0);
          iVar15 = (int)(uVar23 >> 2);
          iVar21 = -0x20;
          if ((int)uVar16 <= iVar15) {
            iVar21 = iVar15 << 5;
          }
          iVar15 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar21;
        FUN_1446efbd8(plVar22,iVar15);
        iVar21 = (int)param_1[5] + 1;
      }
      iVar15 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar15 = iVar21;
      }
      *(int *)(param_1 + 5) = iVar21;
      if (iVar21 % 0x20 != 0) {
        plVar26 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar26 = plVar22;
        }
        bVar20 = -(char)(iVar21 % 0x20);
        *(uint *)((longlong)plVar26 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar26 + (longlong)(iVar15 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[4];
    }
    bVar20 = (byte)iVar17 & 0x1f;
    puVar3 = (uint *)((longlong)plVar22 + (longlong)(iVar27 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar19 = (longlong)iVar25;
    iVar17 = *(int *)(*param_1 + 4 + lVar19 * 0x30);
    *(int *)(param_1 + 6) = iVar17;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x30) = 0xffffffff;
    }
  }
  plVar22 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar22 = (longlong *)param_1[4];
  }
  iVar17 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar17 = iVar25;
  }
  puVar3 = (uint *)((longlong)plVar22 + (longlong)(iVar17 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar25 & 0x1f);
  lVar24 = *param_1;
  lVar19 = lVar19 * 0x30;
  puVar1 = (undefined4 *)(lVar24 + lVar19);
  puVar4 = (undefined4 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  uVar10 = puVar4[4];
  uVar11 = puVar4[5];
  uVar12 = puVar4[6];
  puVar2 = (undefined4 *)(lVar24 + 0xc + lVar19);
  *puVar2 = puVar4[3];
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2 = (undefined4 *)(lVar24 + lVar19);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  *(undefined8 *)(lVar24 + 0x20 + lVar19) = *puVar5;
  *(undefined4 *)(lVar24 + 0x28 + lVar19) = 0xffffffff;
  uVar16 = FUN_1406e99b6(puVar1);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar17 = FUN_1406e98e2(param_1,uVar16,puVar1);
    if (iVar17 != -1) {
      lVar19 = *param_1;
      lVar24 = (longlong)iVar17 * 0x30;
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      uVar10 = puVar1[4];
      uVar11 = puVar1[5];
      uVar12 = puVar1[6];
      uVar13 = puVar1[7];
      *(undefined8 *)(lVar19 + 0x20 + lVar24) = *(undefined8 *)(puVar1 + 8);
      puVar2 = (undefined4 *)(lVar19 + 0x10 + lVar24);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar2 = (undefined4 *)(lVar19 + lVar24);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      FUN_1474399c0(param_1,iVar25);
      cVar14 = '\x01';
      goto LAB_1406e96d1;
    }
  }
  cVar14 = '\0';
  iVar17 = iVar25;
LAB_1406e96d1:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar14;
  }
  if (cVar14 == '\0') {
    uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar18 < 4) {
      iVar25 = 1;
    }
    else {
      uVar23 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar25 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar25 <= (int)param_1[9])) {
      uVar16 = (int)param_1[9] - 1U & uVar16;
      puVar1[0xb] = uVar16;
      plVar22 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar22 = param_1 + 7;
      }
      puVar1[10] = *(undefined4 *)
                    ((longlong)plVar22 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
      plVar22 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar22 = param_1 + 7;
      }
      *(int *)((longlong)plVar22 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
           iVar17;
    }
    else {
      *(int *)(param_1 + 9) = iVar25;
      FUN_1406e9e9a(param_1);
    }
  }
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 1406e98e2 FUN_1406e98e2 body=113 status=ok
// SIG undefined FUN_1406e98e2(void)

int FUN_1406e98e2(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_1406e9953(lVar1 + (longlong)iVar4 * 0x30,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406e9953 FUN_1406e9953 body=99 status=ok
// SIG undefined FUN_1406e9953(void)

undefined4 FUN_1406e9953(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
      ((((param_1[3] != param_2[3] || (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) ||
        ((NAN(*(float *)(param_1 + 4)) || NAN(*(float *)(param_2 + 4)) ||
         ((*(float *)(param_1 + 8) != *(float *)(param_2 + 8) ||
          (NAN(*(float *)(param_1 + 8)) || NAN(*(float *)(param_2 + 8)))))))) ||
       (*(float *)(param_1 + 0xc) != *(float *)(param_2 + 0xc))))) ||
     (((NAN(*(float *)(param_1 + 0xc)) || NAN(*(float *)(param_2 + 0xc)) ||
       (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) ||
      (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),param_1[0x18] == param_2[0x18]);
  }
  return uVar1;
}



// FUNCTION 1406e99b6 FUN_1406e99b6 body=1251 status=ok
// SIG undefined FUN_1406e99b6(void)

uint FUN_1406e99b6(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (uint)*param_1 - (uint)param_1[1];
  uVar4 = iVar1 * 0x100 ^ 0x9e3779b9 - *param_1;
  uVar3 = uVar4 >> 0xd ^ ((uint)param_1[1] - iVar1) - uVar4;
  uVar2 = uVar3 >> 0xc ^ (iVar1 - uVar4) - uVar3;
  uVar6 = uVar2 << 0x10 ^ (uVar4 - uVar3) - uVar2;
  uVar4 = uVar6 >> 5 ^ (uVar3 - uVar2) - uVar6;
  uVar3 = uVar4 >> 3 ^ (uVar2 - uVar6) - uVar4;
  uVar2 = uVar3 << 10 ^ (uVar6 - uVar4) - uVar3;
  uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar3 + uVar2);
  iVar1 = uVar2 - param_1[2];
  uVar4 = iVar1 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar3 = uVar4 >> 0xd ^ ((uint)param_1[2] - iVar1) - uVar4;
  uVar2 = uVar3 >> 0xc ^ (iVar1 - uVar4) - uVar3;
  uVar6 = uVar2 << 0x10 ^ (uVar4 - uVar3) - uVar2;
  uVar4 = uVar6 >> 5 ^ (uVar3 - uVar2) - uVar6;
  uVar3 = uVar4 >> 3 ^ (uVar2 - uVar6) - uVar4;
  uVar2 = uVar3 << 10 ^ (uVar6 - uVar4) - uVar3;
  uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar3 + uVar2);
  iVar1 = uVar2 - param_1[3];
  uVar2 = iVar1 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar4 = uVar2 >> 0xd ^ ((uint)param_1[3] - iVar1) - uVar2;
  uVar3 = uVar4 >> 0xc ^ (iVar1 - uVar2) - uVar4;
  uVar2 = uVar3 << 0x10 ^ (uVar2 - uVar4) - uVar3;
  uVar5 = uVar2 >> 5 ^ (uVar4 - uVar3) - uVar2;
  uVar6 = uVar5 >> 3 ^ (uVar3 - uVar2) - uVar5;
  uVar4 = uVar6 << 10 ^ (uVar2 - uVar5) - uVar6;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = uVar2 >> 0xd ^ (uVar4 >> 0xf ^ uVar5 - (uVar6 + uVar4)) - uVar2;
  uVar4 = uVar6 << 8 ^ (-0x61c88647 - uVar2) - uVar6;
  uVar2 = uVar4 >> 0xd ^ (uVar2 - uVar6) - uVar4;
  uVar6 = uVar2 >> 0xc ^ (uVar6 - uVar4) - uVar2;
  uVar4 = uVar6 << 0x10 ^ (uVar4 - uVar2) - uVar6;
  uVar2 = uVar4 >> 5 ^ (uVar2 - uVar6) - uVar4;
  uVar6 = uVar2 >> 3 ^ (uVar6 - uVar4) - uVar2;
  uVar4 = uVar6 << 10 ^ (uVar4 - uVar2) - uVar6;
  uVar2 = uVar3 >> 0xd ^ (uVar4 >> 0xf ^ uVar2 - (uVar6 + uVar4)) - uVar3;
  uVar4 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
  uVar6 = uVar4 >> 0xd ^ (uVar3 - uVar2) - uVar4;
  uVar2 = uVar6 >> 0xc ^ (uVar2 - uVar4) - uVar6;
  uVar3 = uVar2 << 0x10 ^ (uVar4 - uVar6) - uVar2;
  uVar4 = uVar3 >> 5 ^ (uVar6 - uVar2) - uVar3;
  uVar6 = uVar4 >> 3 ^ (uVar2 - uVar3) - uVar4;
  uVar3 = uVar6 << 10 ^ (uVar3 - uVar4) - uVar6;
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar4 = uVar2 >> 0xd ^ (uVar3 >> 0xf ^ uVar4 - (uVar6 + uVar3)) - uVar2;
  uVar3 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
  uVar6 = uVar3 >> 0xd ^ (uVar2 - uVar4) - uVar3;
  uVar2 = uVar6 >> 0xc ^ (uVar4 - uVar3) - uVar6;
  uVar4 = uVar2 << 0x10 ^ (uVar3 - uVar6) - uVar2;
  uVar3 = uVar4 >> 5 ^ (uVar6 - uVar2) - uVar4;
  uVar6 = uVar3 >> 3 ^ (uVar2 - uVar4) - uVar3;
  uVar4 = uVar6 << 10 ^ (uVar4 - uVar3) - uVar6;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = uVar2 >> 0xd ^ (uVar4 >> 0xf ^ uVar3 - (uVar6 + uVar4)) - uVar2;
  uVar3 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
  uVar6 = uVar3 >> 0xd ^ (uVar2 - uVar4) - uVar3;
  uVar2 = uVar6 >> 0xc ^ (uVar4 - uVar3) - uVar6;
  uVar3 = uVar2 << 0x10 ^ (uVar3 - uVar6) - uVar2;
  uVar4 = uVar3 >> 5 ^ (uVar6 - uVar2) - uVar3;
  uVar6 = uVar4 >> 3 ^ (uVar2 - uVar3) - uVar4;
  uVar3 = uVar6 << 10 ^ (uVar3 - uVar4) - uVar6;
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar4 = uVar2 >> 0xd ^ (uVar3 >> 0xf ^ uVar4 - (uVar6 + uVar3)) - uVar2;
  uVar3 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
  uVar6 = uVar3 >> 0xd ^ (uVar2 - uVar4) - uVar3;
  uVar2 = uVar6 >> 0xc ^ (uVar4 - uVar3) - uVar6;
  uVar3 = uVar2 << 0x10 ^ (uVar3 - uVar6) - uVar2;
  uVar6 = uVar3 >> 5 ^ (uVar6 - uVar2) - uVar3;
  uVar4 = uVar6 >> 3 ^ (uVar2 - uVar3) - uVar6;
  uVar2 = uVar4 << 10 ^ (uVar3 - uVar6) - uVar4;
  uVar2 = uVar2 >> 0xf ^ uVar6 - (uVar4 + uVar2);
  iVar1 = uVar2 - param_1[0x18];
  uVar4 = iVar1 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[0x18] - iVar1) - uVar4;
  uVar3 = uVar2 >> 0xc ^ (iVar1 - uVar4) - uVar2;
  uVar4 = uVar3 << 0x10 ^ (uVar4 - uVar2) - uVar3;
  uVar6 = uVar4 >> 5 ^ (uVar2 - uVar3) - uVar4;
  uVar3 = uVar6 >> 3 ^ (uVar3 - uVar4) - uVar6;
  uVar2 = uVar3 << 10 ^ (uVar4 - uVar6) - uVar3;
  return uVar2 >> 0xf ^ uVar6 - (uVar3 + uVar2);
}



// FUNCTION 1406e9e9a FUN_1406e9e9a body=580 status=ok
// SIG undefined FUN_1406e9e9a(void)

void FUN_1406e9e9a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar10 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
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
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar10 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar9 = *param_1;
        lVar12 = (longlong)iVar7 * 0x30;
        local_74 = iVar5;
        iVar5 = FUN_1406e99b6(lVar12 + lVar9);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x2c + lVar12) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar9 + 0x28 + lVar12) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar10 = ~(uint)uVar11 & uVar10;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar9 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4) & uVar10;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar12 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4 + lVar9 * 4 + 4);
            if (uVar4 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar3 - lVar9 == lVar12) goto LAB_1406ea0b7;
          }
          iVar13 = iVar13 + (int)lVar12 + 1;
          uVar10 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar11 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_1406ea0b7:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ea0e0 FUN_1406ea0e0 body=95 status=ok
// SIG undefined FUN_1406ea0e0(void)

void FUN_1406ea0e0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1406ea140(param_1,param_2,1);
  return;
}



// FUNCTION 1406ea140 FUN_1406ea140 body=138 status=ok
// SIG undefined FUN_1406ea140(void)

void FUN_1406ea140(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406ea1ca FUN_1406ea1ca body=136 status=ok
// SIG undefined FUN_1406ea1ca(void)

void FUN_1406ea1ca(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1406ea252(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff)
             ,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146e9e91e(param_1);
    return;
  }
  return;
}



// FUNCTION 1406ea252 FUN_1406ea252 body=353 status=ok
// SIG undefined FUN_1406ea252(void)

void FUN_1406ea252(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406ea2d7;
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
LAB_1406ea2d7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1406ea3b4 FUN_1406ea3b4 body=2341 status=ok
// SIG undefined FUN_1406ea3b4(void)

ulonglong FUN_1406ea3b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  bool bVar16;
  char cVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  double *pdVar21;
  uint uVar22;
  uint uVar23;
  undefined *puVar24;
  longlong lVar25;
  undefined7 uVar27;
  ulonglong uVar26;
  longlong lVar28;
  longlong *plVar29;
  int iVar30;
  undefined8 ****ppppuVar31;
  code ****ppppcVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1c8 [32];
  char *local_1a8;
  int local_19c;
  undefined8 local_198;
  undefined8 *local_190;
  longlong *local_188;
  undefined1 *local_180;
  undefined8 **local_178;
  longlong local_170;
  longlong *local_168;
  undefined1 **local_160;
  code *local_158;
  longlong **local_150;
  code **local_148;
  code ***local_140;
  code ***local_138;
  ushort local_128;
  byte local_120;
  undefined8 ***local_118 [3];
  ushort local_100;
  byte local_f8;
  char local_d0 [8];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  int local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  bVar4 = *(byte *)(param_1 + 0x26c);
  bVar5 = *(byte *)(param_1 + 0x26d);
  fVar35 = *(float *)(param_1 + 0x270);
  fVar37 = *(float *)(param_1 + 0x274);
  FUN_1406eacda();
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar25 = *(longlong *)(param_1 + 0x40);
  if (lVar25 == 0) {
    lVar28 = 0;
    local_c8 = 0;
LAB_1406ea995:
    local_c0 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    if (*(int *)(lVar25 + 0x4c) == 0) {
LAB_1406ea657:
      lVar28 = 0;
    }
    else {
      uVar22 = *(uint *)(lVar25 + 0x48);
      lVar28 = 0;
      if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
        plVar29 = (longlong *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
        if ((plVar29 == (longlong *)0x0) ||
           (((int)plVar29[2] != *(int *)(lVar25 + 0x4c) ||
            ((*(uint *)(plVar29 + 1) & 0x10200000) != 0)))) goto LAB_1406ea657;
        lVar28 = *plVar29;
      }
    }
    plVar29 = *(longlong **)(lVar25 + 0x118);
    local_c8 = param_1;
    if (plVar29 == (longlong *)0x0) goto LAB_1406ea995;
    LOCK();
    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar29 + 0xc) = *(int *)((longlong)plVar29 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar29 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar29)(plVar29);
      LOCK();
      piVar2 = (int *)((longlong)plVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
    LOCK();
    *(int *)((longlong)plVar29 + 0xc) = *(int *)((longlong)plVar29 + 0xc) + 1;
    UNLOCK();
    bVar16 = false;
    local_c0 = plVar29;
  }
  plVar29 = local_c0;
  local_a8 = 0;
  local_d0[0] = '\x03';
  local_b8._0_4_ = 0;
  if (lVar28 == 0) {
    iVar19 = 0;
    uVar22 = (uint)local_b8;
  }
  else {
    uVar22 = *(uint *)(lVar28 + 0xc);
    local_b8 = (ulonglong)uVar22;
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    iVar19 = *(int *)(lVar25 + 0x10);
    if (*(int *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar19 = DAT_14c964868 + 1;
      UNLOCK();
      iVar30 = DAT_14c964868 + 1;
      bVar33 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar19;
      if (bVar33) {
        local_19c = iVar30;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar30);
        iVar30 = local_19c;
      }
      LOCK();
      iVar19 = *(int *)(lVar25 + 0x10);
      bVar33 = iVar19 == 0;
      if (bVar33) {
        *(int *)(lVar25 + 0x10) = iVar30;
        iVar19 = 0;
      }
      UNLOCK();
      uVar22 = (uint)local_b8;
      if (bVar33) {
        iVar19 = iVar30;
      }
    }
  }
  local_b8._0_4_ = uVar22;
  local_b8 = CONCAT44(iVar19,(uint)local_b8);
  local_b0 = 2;
  if (local_a8 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_a8 + -1,1);
    local_a8 = 0;
  }
  if (!bVar16) {
    LOCK();
    piVar2 = (int *)((longlong)plVar29 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
    }
  }
  pcVar3 = (char *)(param_1 + 0x26c);
  uVar27 = (undefined7)((ulonglong)param_1 >> 8);
  if (((((*(char *)(lVar6 + 0x1d8) == '\x01') &&
        (plVar29 = *(longlong **)(param_1 + 0xf0), plVar29 != (longlong *)0x0)) &&
       (*(int *)(param_1 + 0xec) != 0)) &&
      ((uVar22 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar22 && ((int)uVar22 < DAT_14c9647dc)))) &&
     ((lVar25 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8), lVar25 != 0 &&
      ((*(int *)(lVar25 + 0x10) == *(int *)(param_1 + 0xec) &&
       ((*(uint *)(lVar25 + 8) & 0x10200000) == 0)))))) {
    uVar20 = FUN_140343d7a(param_1);
    FUN_1406ec3c4(lVar6,local_118,local_d0,uVar20);
    uVar18 = FUN_14070c9d0(pcVar3,*(undefined4 *)(param_2 + 8),*(float *)(lVar6 + 0x21c) + 0.5);
    local_1a8 = local_d0;
    cVar17 = FUN_1406ec4ca((undefined8 *)(lVar6 + 0xe0),plVar29,local_118,uVar18);
    if (cVar17 != '\0') {
LAB_1406ea98a:
      uVar26 = CONCAT71(uVar27,1);
      goto LAB_1406ea597;
    }
    if ((*(char *)(param_1 + 0x26d) == '\x01') && (*pcVar3 == '\0')) {
      if (*(code **)(*plVar29 + 0x10) == (code *)&LAB_144944cea) {
        plVar29 = plVar29 + 0xe1;
      }
      else {
        plVar29 = (longlong *)(**(code **)(*plVar29 + 0x10))(plVar29);
      }
      local_198 = *(undefined8 *)(lVar6 + 0xe0);
      local_190 = &local_198;
      local_188 = &local_170;
      local_170 = 0;
      local_178 = &local_190;
      local_180 = &LAB_143cbcae0;
      if (plVar29[8] != 0) {
        local_150 = &local_168;
        local_160 = &local_180;
        local_148 = &local_158;
        local_158 = FUN_143cbca2e;
        local_138 = &local_148;
        uVar18 = SUB84(&local_140,0);
        local_140 = (code ***)FUN_1487df56e;
        local_168 = plVar29;
        FUN_1447c5ba2();
        if (local_170 != 0) {
          lVar25 = local_170;
          pdVar21 = (double *)FUN_1447c6d68();
          if (*(char *)(param_1 + 0x250) == '\x01') {
            lVar28 = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x238) - pdVar21[1]));
            auVar11._8_4_ = (int)lVar28;
            auVar11._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x230) - *pdVar21));
            auVar11._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
            uVar22 = movmskpd((int)lVar25,auVar11);
            lVar25 = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x248) - pdVar21[3]));
            auVar10._8_4_ = (int)lVar25;
            auVar10._0_8_ =
                 -(ulonglong)
                  (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x240) - pdVar21[2]));
            auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
            iVar19 = movmskpd(uVar18,auVar10);
            uVar23 = iVar19 << 2 | uVar22;
            if (uVar23 != 0) {
              lVar25 = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x238) + pdVar21[1]));
              auVar8._8_4_ = (int)lVar25;
              auVar8._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x230) + *pdVar21))
              ;
              auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
              iVar19 = movmskpd(uVar22,auVar8);
              lVar25 = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x248) + pdVar21[3]));
              auVar9._8_4_ = (int)lVar25;
              auVar9._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(param_1 + 0x240) + pdVar21[2]));
              auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
              uVar22 = movmskpd(uVar23,auVar9);
              if ((uVar22 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_1406ea9f8;
            }
            if (*(char *)(param_1 + 0x264) == '\x01') {
              fVar36 = *(float *)(param_1 + 0x260);
            }
            else {
              FUN_1447c3578(lVar6 + 0x1e0,&local_140,local_d0);
              fVar36 = (float)FUN_144a7ecd0(&local_140);
              pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_120 * 0x120));
              if (pcVar7 != (code *)0x0) {
                ppppcVar32 = &local_140;
                if (0x18 < local_128) {
                  ppppcVar32 = (code ****)local_140;
                }
                (*pcVar7)(ppppcVar32);
              }
              if (0x18 < local_128) {
                FUN_1400020a8(local_140);
              }
              fVar36 = fVar36 + *(float *)(param_2 + 8);
              *(float *)(param_1 + 0x260) = fVar36;
              *(undefined1 *)(param_1 + 0x264) = 1;
            }
            if (fVar36 <= *(float *)(param_2 + 8)) goto LAB_1406ea98a;
          }
          else {
LAB_1406ea9f8:
            if (pdVar21 != (double *)(param_1 + 0x230)) {
              uVar18 = *(undefined4 *)pdVar21;
              uVar12 = *(undefined4 *)((longlong)pdVar21 + 4);
              uVar13 = *(undefined4 *)(pdVar21 + 1);
              uVar14 = *(undefined4 *)((longlong)pdVar21 + 0xc);
              dVar15 = pdVar21[3];
              *(double *)(param_1 + 0x240) = pdVar21[2];
              *(double *)(param_1 + 0x248) = dVar15;
              *(undefined4 *)(param_1 + 0x230) = uVar18;
              *(undefined4 *)(param_1 + 0x234) = uVar12;
              *(undefined4 *)(param_1 + 0x238) = uVar13;
              *(undefined4 *)(param_1 + 0x23c) = uVar14;
              *(undefined1 *)(param_1 + 0x250) = 1;
            }
            if (*(char *)(param_1 + 0x264) == '\x01') {
              *(undefined1 *)(param_1 + 0x264) = 0;
            }
          }
        }
      }
    }
  }
  if (*(char *)(lVar6 + 0x261) == '\x01') {
    cVar17 = FUN_1406eaf76(param_1);
    if (cVar17 == '\0') {
      FUN_140c8251c(param_1);
      uVar26 = CONCAT71(uVar27,2);
      goto LAB_1406ea597;
    }
    FUN_1406eb3e8(param_1);
  }
  if (((*(char *)(lVar6 + 0x220) == '\x01') && ((bVar5 & 1) != 0)) && ((bVar4 & 1) != 0)) {
    if ((*(char *)(param_1 + 0x26d) != '\x01') || (*pcVar3 == '\x01')) {
      fVar35 = *(float *)(param_2 + 8) - fVar35;
      fVar36 = 0.0;
      if (fVar37 <= 0.0 || fVar35 <= fVar37) {
        fVar37 = fVar37 - fVar35;
      }
      else {
        fVar37 = 0.0;
      }
      if ((*(char *)(param_1 + 0x26d) != '\0') && (*pcVar3 == '\x01')) {
        fVar35 = *(float *)(param_1 + 0x274);
        fVar34 = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x270);
        if (fVar35 <= 0.0 || fVar34 <= fVar35) {
          fVar36 = fVar35 - fVar34;
        }
      }
      if (ABS(fVar37 - fVar36) <= 0.5) goto LAB_1406ea595;
    }
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
    FUN_1447c3578(lVar6 + 0x228,local_118,local_d0);
    iVar19 = FUN_1405d5f74(local_118);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppuVar31 = local_118;
      if (0x18 < local_100) {
        ppppuVar31 = (undefined8 ****)local_118[0];
      }
      (*pcVar7)(ppppuVar31);
    }
    if (0x18 < local_100) {
      FUN_1400020a8(local_118[0]);
    }
    if (iVar19 <= *(int *)(param_1 + 0x268)) {
      uVar26 = CONCAT71(uVar27,'\x02' - (*(int *)(param_1 + 0x268) < iVar19 |
                                        *(byte *)(lVar6 + 0x260) & 1));
      goto LAB_1406ea597;
    }
  }
LAB_1406ea595:
  uVar26 = 0;
LAB_1406ea597:
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar28 = (longlong)local_a8 + -1;
    lVar25 = lVar28 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
    if (*(longlong *)(lVar6 + lVar25) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar19 = (int)lVar28;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar19;
    }
    *(undefined4 *)(lVar6 + lVar25) = 0xffffffff;
    iVar30 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar30 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar25) = iVar30;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar24 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar24 = DAT_14c9a3dc0;
    }
    iVar30 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar30 = iVar19;
    }
    bVar4 = (byte)lVar28 & 0x1f;
    DAT_14c9a3dd0 = iVar19;
    *(uint *)(puVar24 + (longlong)(iVar30 >> 5) * 4) =
         *(uint *)(puVar24 + (longlong)(iVar30 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a8 = 0;
  }
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26 & 0xffffffff;
}



// FUNCTION 1406eacda FUN_1406eacda body=667 status=ok
// SIG undefined FUN_1406eacda(void)

void FUN_1406eacda(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (((*(char *)(lVar4 + 0x220) == '\0') && (*(char *)(lVar4 + 0x1d8) == '\0')) &&
     (*(char *)(lVar4 + 0x219) != '\x01')) goto LAB_1406ead1c;
  plVar11 = *(longlong **)(param_1 + 0xe0);
  bVar5 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_1406eae20:
    plVar11 = (longlong *)0x0;
LAB_1406eae22:
    uVar9 = FUN_140343d7a(param_1);
    FUN_14070cbf4(&local_50,uVar9);
    plVar10 = local_48;
    uVar13 = local_50;
    local_50 = 0;
    plVar12 = plVar11;
    if (local_48 == plVar11) {
LAB_1406eaf16:
      plVar11 = local_48;
      plVar10 = plVar12;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_48 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      local_48 = (longlong *)0x0;
      if (!bVar5) {
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        plVar12 = plVar10;
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        goto LAB_1406eaf16;
      }
    }
    plVar11 = plVar10;
    *(ulonglong *)(param_1 + 0xd8) = uVar13;
    plVar10 = *(longlong **)(param_1 + 0xe0);
    if (plVar10 != plVar11) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(param_1 + 0xe0);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0xe0) = plVar11;
    }
    local_50 = local_50 & 0xffffffff00000000;
    if (uVar13 != 0) goto LAB_1406ead82;
LAB_1406eaeb2:
    if (*(char *)(param_1 + 0x26c) != '\0') {
      *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 8);
    }
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined2 *)(param_1 + 0x26c) = 0x100;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_1406eae20;
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar14 = iVar8 == iVar6;
      if (bVar14) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar14);
    uVar13 = *(ulonglong *)(param_1 + 0xd8);
    if (uVar13 == 0) {
      bVar5 = false;
      goto LAB_1406eae22;
    }
    local_50 = local_50 & 0xffffffff00000000;
LAB_1406ead82:
    cVar7 = FUN_1406ec14a(uVar13,&local_50);
    if ((cVar7 == '\0') || ((float)local_50 <= 0.1)) goto LAB_1406eaeb2;
    if ((*(char *)(param_1 + 0x26d) == '\x01') && (*(char *)(param_1 + 0x26c) == '\x01')) {
      fVar3 = *(float *)(param_1 + 0x274);
      fVar15 = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x270);
      fVar16 = 0.0;
      if (fVar3 <= 0.0 || fVar15 <= fVar3) {
        fVar16 = fVar3 - fVar15;
      }
      if (fVar16 < (float)local_50) goto LAB_1406eadfd;
    }
    else {
LAB_1406eadfd:
      *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 8);
      *(undefined2 *)(param_1 + 0x26c) = 0x101;
      *(float *)(param_1 + 0x274) = (float)local_50;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_1406ead1c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406eaf76 FUN_1406eaf76 body=1136 status=ok
// SIG undefined FUN_1406eaf76(void)

ulonglong FUN_1406eaf76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  undefined7 uVar14;
  ulonglong uVar13;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [72];
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  char local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar19 = *(longlong *)(param_1 + 0x40);
  if (lVar19 == 0) {
    lVar15 = 0;
    local_70 = 0;
  }
  else {
    if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_1406eb25c:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar19 + 0x48);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar18 == (longlong *)0x0) ||
           (((int)plVar18[2] != *(int *)(lVar19 + 0x4c) ||
            ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_1406eb25c;
        lVar15 = *plVar18;
      }
    }
    plVar18 = *(longlong **)(lVar19 + 0x118);
    local_70 = param_1;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      bVar6 = false;
      local_68 = plVar18;
      goto LAB_1406eb04f;
    }
  }
  local_68 = (longlong *)0x0;
  bVar6 = true;
LAB_1406eb04f:
  plVar18 = local_68;
  local_50 = 0;
  local_78[0] = '\x03';
  local_60._0_4_ = 0;
  if (lVar15 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_60;
  }
  else {
    uVar3 = *(uint *)(lVar15 + 0xc);
    local_60 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar8 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar19 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar19 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_60;
      if (bVar20) {
        iVar8 = iVar12;
      }
    }
  }
  local_60._0_4_ = uVar3;
  local_60 = CONCAT44(iVar8,(uint)local_60);
  local_58 = 2;
  if (local_50 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_50 + -1,1);
    local_50 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar18 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  uVar9 = FUN_140343d7a(param_1);
  FUN_1447c3578(*(longlong *)(param_1 + 0x48) + 0x80,local_a0,local_78);
  lVar19 = param_1 + 0xf8;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar19 = *(longlong *)(param_1 + 0x218);
  }
  uVar14 = (undefined7)((ulonglong)uVar9 >> 8);
  if ((longlong)*(int *)(param_1 + 0x220) == 0) {
    uVar13 = CONCAT71(uVar14,1);
  }
  else {
    lVar15 = (longlong)*(int *)(param_1 + 0x220) * 0x60;
    lVar17 = 0;
    do {
      local_f8 = *(undefined8 *)(lVar19 + 8);
      local_f0 = *(undefined4 *)(lVar19 + 0x10);
      FUN_14070d2c0(local_e8,local_a0,&local_f8,uVar9);
      if (*(byte *)(lVar19 + 0x58) < 6) {
        *(undefined1 *)(lVar19 + 0x58) = 0xff;
      }
      FUN_140219b74(lVar19 + 0x18,local_e8);
      cVar7 = FUN_1456ca660(lVar19 + 0x18);
      lVar10 = lVar17;
      if (lVar17 == 0) {
        lVar10 = lVar19;
      }
      if (cVar7 == '\0') {
        lVar17 = lVar10;
      }
      lVar19 = lVar19 + 0x60;
      lVar15 = lVar15 + -0x60;
    } while (lVar15 != 0);
    uVar13 = CONCAT71(uVar14,lVar17 == 0);
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar16 = local_a0;
    if (0x18 < local_88) {
      ppppuVar16 = (undefined8 ****)local_a0[0];
    }
    (*pcVar4)(ppppuVar16);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  lVar19 = DAT_14c9a3da0;
  if ((longlong)local_50 != 0) {
    lVar15 = (longlong)local_50 + -1;
    lVar17 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar19 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar19 = DAT_14c9a3da0;
    iVar8 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar19 + lVar17) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar19 + 4 + lVar17) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    bVar5 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_50 = 0;
  }
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_68 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1406eb3e8 FUN_1406eb3e8 body=3085 status=ok
// SIG undefined FUN_1406eb3e8(void)

void FUN_1406eb3e8(code *******param_1)

{
  code *****pppppcVar1;
  int *piVar2;
  char cVar3;
  code ******ppppppcVar4;
  code ******ppppppcVar5;
  code ******ppppppcVar6;
  code *****pppppcVar7;
  code *pcVar8;
  code *****pppppcVar9;
  code ****ppppcVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  longlong *******ppppppplVar14;
  longlong lVar15;
  undefined *puVar16;
  code *******pppppppcVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  float unaff_XMM6_Da;
  float fVar25;
  undefined1 auStack_158 [32];
  code ******local_138;
  code *****local_130;
  code *****local_128;
  code *****local_120;
  longlong *local_118;
  undefined1 *local_110;
  code *****local_108;
  longlong local_100;
  code ******local_f8;
  code *local_f0;
  code ******local_e8;
  code ****local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  int local_c8;
  longlong ******local_c0;
  undefined1 **local_b8;
  ushort local_a8;
  byte local_a0;
  code ******local_98;
  longlong ******local_90;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  ppppppcVar4 = param_1[0x1e];
  if (((((ppppppcVar4 == (code ******)0x0) || (*(int *)((longlong)param_1 + 0xec) == 0)) ||
       (uVar13 = *(uint *)(param_1 + 0x1d), (int)uVar13 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar13 ||
       (lVar15 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar15 == 0)))) ||
     ((*(int *)(lVar15 + 0x10) != *(int *)((longlong)param_1 + 0xec) ||
      ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) goto LAB_1406eb676;
  local_130 = (code *****)param_1[9];
  if ((*ppppppcVar4)[2] == (code ****)&LAB_144944cea) {
    ppppppplVar14 = (longlong *******)(ppppppcVar4 + 0xe1);
  }
  else {
    ppppppplVar14 = (longlong *******)(*(code *)(*ppppppcVar4)[2])(ppppppcVar4);
  }
  pppppppcVar17 = param_1 + 0x1f;
  if ((code *******)param_1[0x43] != (code *******)0x0) {
    pppppppcVar17 = (code *******)param_1[0x43];
  }
  local_138 = (code ******)param_1;
  if ((longlong)*(int *)(param_1 + 0x44) != 0) {
    pppppppcVar17 = pppppppcVar17 + 3;
    lVar15 = (longlong)*(int *)(param_1 + 0x44) * 0x60;
    do {
      local_128 = (code *****)pppppppcVar17[-3];
      local_100 = 0;
      local_120 = (code *****)&local_128;
      local_118 = &local_100;
      local_108 = (code *****)&local_120;
      local_110 = &LAB_143cbcae0;
      if (ppppppplVar14[8] != (longlong ******)0x0) {
        local_b8 = &local_110;
        local_90 = (longlong ******)&local_c0;
        local_98 = (code ******)FUN_143cbca2e;
        local_f0 = FUN_1487df56e;
        local_f8 = (code ******)&local_98;
        local_e8 = (code ******)&local_f8;
        local_c0 = (longlong ******)ppppppplVar14;
        FUN_1447c5ba2(ppppppplVar14[8],&local_f0);
        lVar19 = local_100;
        if (local_100 != 0) {
          FUN_1406ebff6(local_100,3,pppppppcVar17);
          iVar12 = *(int *)((longlong)pppppppcVar17 + -4);
          if ((-1 < (longlong)iVar12) && (iVar12 < *(int *)(local_130 + 0x56))) {
            FUN_14056efae(lVar19 + 0x5d0,local_138 + 0x45,local_130[0x55] + (longlong)iVar12 * 7);
          }
        }
      }
      pppppppcVar17 = pppppppcVar17 + 0xc;
      lVar15 = lVar15 + -0x60;
    } while (lVar15 != 0);
  }
  pppppcVar9 = local_130;
  ppppppcVar6 = local_138;
  ppppppcVar4 = (code ******)local_138[0x1c];
  if (ppppppcVar4 == (code ******)0x0) goto LAB_1406eb676;
  iVar12 = *(int *)(ppppppcVar4 + 1);
  do {
    if (iVar12 == 0) goto LAB_1406eb676;
    LOCK();
    iVar18 = *(int *)(ppppppcVar4 + 1);
    bVar23 = iVar12 == iVar18;
    if (bVar23) {
      *(int *)(ppppppcVar4 + 1) = iVar12 + 1;
      iVar18 = iVar12;
    }
    iVar12 = iVar18;
    UNLOCK();
  } while (!bVar23);
  ppppppcVar5 = (code ******)local_138[0x1b];
  if ((((ppppppcVar5 != (code ******)0x0) && (*(int *)((longlong)ppppppcVar5 + 0x14) != 0)) &&
      (uVar13 = *(uint *)(ppppppcVar5 + 2), -1 < (int)uVar13)) &&
     ((((int)uVar13 < DAT_14c9647dc &&
       (plVar21 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar21 != (longlong *)0x0)) &&
      (((int)plVar21[2] == *(int *)((longlong)ppppppcVar5 + 0x14) &&
       (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar15 = *plVar21, lVar15 != 0)))))))) {
    cVar3 = *(char *)(local_130 + 0x3b);
    if (cVar3 == '\x01') {
      ppppppcVar5 = (code ******)local_138[8];
      if (ppppppcVar5 == (code ******)0x0) {
        lVar19 = 0;
        pppppppcVar17 = (code *******)0x0;
LAB_1406ebed0:
        local_e0 = (code ****)0x0;
        bVar23 = true;
        local_e8 = (code ******)pppppppcVar17;
      }
      else {
        if (*(int *)((longlong)ppppppcVar5 + 0x4c) == 0) {
LAB_1406ebc82:
          lVar19 = 0;
        }
        else {
          uVar13 = *(uint *)(ppppppcVar5 + 9);
          lVar19 = 0;
          if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
            plVar21 = (longlong *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
            if ((plVar21 == (longlong *)0x0) ||
               (((int)plVar21[2] != *(int *)((longlong)ppppppcVar5 + 0x4c) ||
                ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))) goto LAB_1406ebc82;
            lVar19 = *plVar21;
          }
        }
        pppppcVar7 = ppppppcVar5[0x23];
        pppppppcVar17 = (code *******)local_138;
        if (pppppcVar7 == (code *****)0x0) goto LAB_1406ebed0;
        LOCK();
        *(int *)(pppppcVar7 + 1) = *(int *)(pppppcVar7 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)pppppcVar7 + 0xc) = *(int *)((longlong)pppppcVar7 + 0xc) + 1;
        UNLOCK();
        LOCK();
        pppppcVar1 = pppppcVar7 + 1;
        *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
        UNLOCK();
        if (*(int *)pppppcVar1 == 0) {
          (*(code *)**pppppcVar7)(pppppcVar7);
          LOCK();
          piVar2 = (int *)((longlong)pppppcVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppppcVar7)[2])(pppppcVar7);
          }
        }
        local_e8 = ppppppcVar6;
        LOCK();
        *(int *)((longlong)pppppcVar7 + 0xc) = *(int *)((longlong)pppppcVar7 + 0xc) + 1;
        UNLOCK();
        bVar23 = false;
        local_e0 = (code ****)pppppcVar7;
      }
      ppppcVar10 = local_e0;
      local_f0 = (code *)CONCAT71(local_f0._1_7_,3);
      local_c8 = 0;
      local_d8._0_4_ = 0;
      if (lVar19 == 0) {
        iVar12 = 0;
        uVar13 = (uint)local_d8;
      }
      else {
        uVar13 = *(uint *)(lVar19 + 0xc);
        local_d8 = (ulonglong)uVar13;
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar12 = *(int *)(lVar19 + 0x10);
        if (*(int *)(lVar19 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar12 = *(int *)(lVar19 + 0x10);
          bVar24 = iVar12 == 0;
          if (bVar24) {
            *(int *)(lVar19 + 0x10) = iVar18;
            iVar12 = 0;
          }
          UNLOCK();
          uVar13 = (uint)local_d8;
          if (bVar24) {
            iVar12 = iVar18;
          }
        }
      }
      local_d8._0_4_ = uVar13;
      local_d8 = CONCAT44(iVar12,(uint)local_d8);
      local_d0 = 2;
      if (local_c8 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_c8 + -1,1);
        local_c8 = 0;
      }
      pppppppcVar17 = (code *******)local_138;
      if (!bVar23) {
        LOCK();
        piVar2 = (int *)((longlong)ppppcVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppcVar10)[2])(ppppcVar10);
        }
      }
      FUN_1447c3578(pppppcVar9 + 0x1d,&local_c0,&local_f0);
      if (local_a0 == 3) {
        unaff_XMM6_Da = local_c0._0_4_;
        bVar11 = 3;
      }
      else {
        FUN_1400b56fe(&local_98,&local_c0,3);
        unaff_XMM6_Da = 0.0;
        if (local_78 != 0) {
          unaff_XMM6_Da = local_98._0_4_;
        }
        pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar8 != (code *)0x0) {
          pppppppcVar17 = &local_98;
          if (0x18 < local_80) {
            pppppppcVar17 = (code *******)local_98;
          }
          (*pcVar8)(pppppppcVar17);
        }
        pppppppcVar17 = (code *******)local_138;
        bVar11 = local_a0;
        if (0x18 < local_80) {
          FUN_1400020a8(local_98);
          pppppppcVar17 = (code *******)local_138;
          bVar11 = local_a0;
        }
      }
      pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar11 * 0x120));
      if (pcVar8 != (code *)0x0) {
        ppppppplVar14 = &local_c0;
        if (0x18 < local_a8) {
          ppppppplVar14 = (longlong *******)local_c0;
        }
        (*pcVar8)(ppppppplVar14);
        pppppppcVar17 = (code *******)local_138;
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      lVar19 = DAT_14c9a3da0;
      if ((longlong)local_c8 != 0) {
        lVar22 = (longlong)local_c8 + -1;
        lVar20 = lVar22 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
        if (*(longlong *)(lVar19 + lVar20) != 0) {
          FUN_1400020a8();
        }
        lVar19 = DAT_14c9a3da0;
        iVar12 = (int)lVar22;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
        }
        *(undefined4 *)(lVar19 + lVar20) = 0xffffffff;
        iVar18 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar18 = DAT_14c9a3dd0;
        }
        *(int *)(lVar19 + 4 + lVar20) = iVar18;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar16 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar16 = DAT_14c9a3dc0;
        }
        iVar18 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar18 = iVar12;
        }
        bVar11 = (byte)lVar22 & 0x1f;
        DAT_14c9a3dd0 = iVar12;
        *(uint *)(puVar16 + (longlong)(iVar18 >> 5) * 4) =
             *(uint *)(puVar16 + (longlong)(iVar18 >> 5) * 4) &
             (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
        local_c8 = 0;
        pppppppcVar17 = (code *******)local_138;
      }
      if (((char)local_f0 == '\x03') && ((code *****)local_e0 != (code *****)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_e0)[2])();
        }
      }
      fVar25 = unaff_XMM6_Da;
      if (*(char *)(pppppcVar9 + 0x54) != '\0') goto LAB_1406eb6b4;
    }
    else {
      pppppppcVar17 = (code *******)local_138;
      if (*(char *)(local_130 + 0x54) != '\x01') goto LAB_1406eb66c;
LAB_1406eb6b4:
      ppppppcVar6 = pppppppcVar17[8];
      if (ppppppcVar6 == (code ******)0x0) {
        lVar19 = 0;
        pppppppcVar17 = (code *******)0x0;
LAB_1406ebde0:
        local_e0 = (code ****)0x0;
        bVar23 = true;
        local_e8 = (code ******)pppppppcVar17;
      }
      else {
        if (*(int *)((longlong)ppppppcVar6 + 0x4c) == 0) {
LAB_1406ebaf8:
          lVar19 = 0;
        }
        else {
          uVar13 = *(uint *)(ppppppcVar6 + 9);
          lVar19 = 0;
          if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
            plVar21 = (longlong *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
            if ((plVar21 == (longlong *)0x0) ||
               (((int)plVar21[2] != *(int *)((longlong)ppppppcVar6 + 0x4c) ||
                ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))) goto LAB_1406ebaf8;
            lVar19 = *plVar21;
          }
        }
        pppppcVar7 = ppppppcVar6[0x23];
        if (pppppcVar7 == (code *****)0x0) goto LAB_1406ebde0;
        LOCK();
        *(int *)(pppppcVar7 + 1) = *(int *)(pppppcVar7 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)pppppcVar7 + 0xc) = *(int *)((longlong)pppppcVar7 + 0xc) + 1;
        UNLOCK();
        LOCK();
        pppppcVar1 = pppppcVar7 + 1;
        *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
        UNLOCK();
        if (*(int *)pppppcVar1 == 0) {
          (*(code *)**pppppcVar7)(pppppcVar7);
          LOCK();
          piVar2 = (int *)((longlong)pppppcVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppppcVar7)[2])(pppppcVar7);
          }
        }
        LOCK();
        *(int *)((longlong)pppppcVar7 + 0xc) = *(int *)((longlong)pppppcVar7 + 0xc) + 1;
        UNLOCK();
        bVar23 = false;
        local_e8 = (code ******)pppppppcVar17;
        local_e0 = (code ****)pppppcVar7;
      }
      ppppcVar10 = local_e0;
      local_f0 = (code *)CONCAT71(local_f0._1_7_,3);
      local_c8 = 0;
      local_d8._0_4_ = 0;
      if (lVar19 == 0) {
        iVar12 = 0;
        uVar13 = (uint)local_d8;
      }
      else {
        uVar13 = *(uint *)(lVar19 + 0xc);
        local_d8 = (ulonglong)uVar13;
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar12 = *(int *)(lVar19 + 0x10);
        if (*(int *)(lVar19 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar12 = *(int *)(lVar19 + 0x10);
          bVar24 = iVar12 == 0;
          if (bVar24) {
            *(int *)(lVar19 + 0x10) = iVar18;
            iVar12 = 0;
          }
          UNLOCK();
          uVar13 = (uint)local_d8;
          if (bVar24) {
            iVar12 = iVar18;
          }
        }
      }
      local_d8._0_4_ = uVar13;
      local_d8 = CONCAT44(iVar12,(uint)local_d8);
      local_d0 = 2;
      if (local_c8 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_c8 + -1,1);
        local_c8 = 0;
      }
      if (!bVar23) {
        LOCK();
        piVar2 = (int *)((longlong)ppppcVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppcVar10)[2])(ppppcVar10);
        }
      }
      FUN_1447c3578(pppppcVar9 + 0x4d,&local_c0,&local_f0);
      if (local_a0 == 3) {
        uVar13 = 3;
        pppppppcVar17 = (code *******)local_138;
        fVar25 = local_c0._0_4_;
      }
      else {
        FUN_1400b56fe(&local_98,&local_c0,3);
        fVar25 = 0.0;
        if (local_78 != 0) {
          fVar25 = local_98._0_4_;
        }
        pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar8 != (code *)0x0) {
          pppppppcVar17 = &local_98;
          if (0x18 < local_80) {
            pppppppcVar17 = (code *******)local_98;
          }
          (*pcVar8)(pppppppcVar17);
        }
        pppppppcVar17 = (code *******)local_138;
        if (0x18 < local_80) {
          FUN_1400020a8(local_98);
        }
        uVar13 = (uint)local_a0;
      }
      pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar13 * 0x120));
      if (pcVar8 != (code *)0x0) {
        ppppppplVar14 = &local_c0;
        if (0x18 < local_a8) {
          ppppppplVar14 = (longlong *******)local_c0;
        }
        (*pcVar8)(ppppppplVar14);
        pppppppcVar17 = (code *******)local_138;
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      lVar19 = DAT_14c9a3da0;
      if ((longlong)local_c8 != 0) {
        lVar22 = (longlong)local_c8 + -1;
        lVar20 = lVar22 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
        if (*(longlong *)(lVar19 + lVar20) != 0) {
          FUN_1400020a8();
        }
        lVar19 = DAT_14c9a3da0;
        iVar12 = (int)lVar22;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
        }
        *(undefined4 *)(lVar19 + lVar20) = 0xffffffff;
        iVar18 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar18 = DAT_14c9a3dd0;
        }
        *(int *)(lVar19 + 4 + lVar20) = iVar18;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar16 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar16 = DAT_14c9a3dc0;
        }
        iVar18 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar18 = iVar12;
        }
        bVar11 = (byte)lVar22 & 0x1f;
        DAT_14c9a3dd0 = iVar12;
        *(uint *)(puVar16 + (longlong)(iVar18 >> 5) * 4) =
             *(uint *)(puVar16 + (longlong)(iVar18 >> 5) * 4) &
             (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
        local_c8 = 0;
        pppppppcVar17 = (code *******)local_138;
      }
      if (((char)local_f0 == '\x03') && ((code *****)local_e0 != (code *****)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_e0)[2])();
        }
      }
      if ((cVar3 != '\0') && (unaff_XMM6_Da <= fVar25)) {
        fVar25 = unaff_XMM6_Da;
      }
    }
    FUN_1406ec1d8(lVar15,pppppppcVar17 + 0x45,fVar25 * 0.5);
  }
LAB_1406eb66c:
  LOCK();
  ppppppcVar6 = ppppppcVar4 + 1;
  *(int *)ppppppcVar6 = *(int *)ppppppcVar6 + -1;
  UNLOCK();
  if (*(int *)ppppppcVar6 == 0) {
    (*(code *)**ppppppcVar4)(ppppppcVar4);
    LOCK();
    piVar2 = (int *)((longlong)ppppppcVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*ppppppcVar4)[2])(ppppppcVar4);
    }
  }
LAB_1406eb676:
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406ebff6 FUN_1406ebff6 body=182 status=ok
// SIG undefined FUN_1406ebff6(void)

void FUN_1406ebff6(longlong param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = param_1;
  if ((*(byte *)(param_1 + 0x7e8) & 2) == 0) {
    do {
      lVar4 = lVar1;
      if ((*(byte *)(lVar4 + 0x7e8) & 2) == 0) {
        uVar5 = (ulonglong)param_2;
        goto LAB_1406ec01b;
      }
      lVar1 = *(longlong *)(lVar4 + 0xd0);
    } while (*(longlong *)(lVar4 + 0xd0) != 0);
    uVar5 = (ulonglong)(*(int *)(lVar4 + 0x288) + -1);
LAB_1406ec01b:
    lVar4 = lVar4 + uVar5 * 0x48;
    bVar3 = *(byte *)(lVar4 + 0x118);
    if (*(char *)(param_3 + 0x40) == -1 || bVar3 == 0xff) {
      if ((bVar3 != 0xff) || (*(char *)(param_3 + 0x40) != -1)) goto LAB_1406ec06a;
    }
    else {
      cVar2 = FUN_1406ec0ac(lVar4 + 0xd8,param_3);
      if (cVar2 == '\0') {
        bVar3 = *(byte *)(lVar4 + 0x118);
LAB_1406ec06a:
        if (bVar3 < 6) {
          *(undefined1 *)(lVar4 + 0x118) = 0xff;
        }
        FUN_140219b74(lVar4 + 0xd8,param_3);
        FUN_140219c88(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406ec0ac FUN_1406ec0ac body=157 status=ok
// SIG undefined FUN_1406ec0ac(void)

ulonglong FUN_1406ec0ac(double *param_1,double *param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 8) == *(char *)(param_2 + 8)) {
    switch(*(char *)(param_1 + 8)) {
    case '\0':
    case '\x01':
      if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
        if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
          return (ulonglong)(-(uint)(param_2[2] == param_1[2]) & 1);
        }
      }
      break;
    case '\x02':
      uVar1 = FUN_1400b74f2();
      return uVar1;
    case '\x03':
      uVar1 = FUN_1400b7604();
      return uVar1;
    case '\x04':
      uVar1 = FUN_1447508ba();
      return uVar1;
    case '\x05':
      uVar1 = FUN_1400b75cc();
      return uVar1;
    default:
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
  return 0;
}



// FUNCTION 1406ec14a FUN_1406ec14a body=141 status=ok
// SIG undefined FUN_1406ec14a(void)

ulonglong FUN_1406ec14a(longlong param_1,float *param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  float fVar3;
  
  if ((*(longlong *)(param_1 + 0x520) != 0) && (*(longlong *)(param_1 + 0x4b0) != 0)) {
    cVar1 = FUN_1449c239e();
    if (cVar1 == '\x05') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (param_2 != (float *)0x0) {
        if (*(char *)(param_1 + 0x580) == '\x01') {
          fVar3 = (1.0 - *(float *)(param_1 + 0x52c)) * *(float *)(param_1 + 0x528);
        }
        else if (*(longlong **)(param_1 + 0x520) == (longlong *)0x0) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x520) + 0x2b0))();
          fVar3 = fVar3 - *(float *)(param_1 + 0x510);
        }
        *param_2 = fVar3;
      }
      goto LAB_1406ec1a5;
    }
  }
  uVar2 = 0;
LAB_1406ec1a5:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1406ec1d8 FUN_1406ec1d8 body=492 status=ok
// SIG undefined FUN_1406ec1d8(void)

void FUN_1406ec1d8(longlong param_1,longlong *param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  puVar9 = (undefined4 *)(param_1 + 0x1b20);
  puVar4 = *(undefined4 **)(param_1 + 0x1b50);
  puVar5 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = puVar9;
  }
  iVar2 = *(int *)(param_1 + 7000);
  lVar12 = (longlong)iVar2;
  if (lVar12 != 0) {
    lVar11 = lVar12 * 0xc;
    do {
      if (*(longlong *)(puVar5 + 1) == *param_2) {
        if (puVar5 != (undefined4 *)0x0) goto LAB_1406ec239;
        break;
      }
      puVar5 = puVar5 + 3;
      lVar11 = lVar11 + -0xc;
    } while (lVar11 != 0);
  }
  *(uint *)(param_1 + 7000) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1b5c) < iVar2 + 1U) {
    FUN_147e44c3a(puVar9,iVar2);
    puVar4 = *(undefined4 **)(param_1 + 0x1b50);
  }
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = puVar9;
  }
  puVar4[lVar12 * 3 + 2] = 0;
  *(undefined8 *)(puVar4 + lVar12 * 3) = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x1b50);
  if (*(undefined4 **)(param_1 + 0x1b50) == (undefined4 *)0x0) {
    puVar4 = puVar9;
  }
  puVar5 = puVar4 + lVar12 * 3;
  *(longlong *)(puVar4 + lVar12 * 3 + 1) = *param_2;
LAB_1406ec239:
  *puVar5 = param_3;
  fVar1 = *(float *)(param_1 + 0x1b60);
  if ((longlong)*(int *)(param_1 + 7000) < 1) {
    fVar13 = *(float *)(param_1 + 0x1b18);
  }
  else {
    if (*(undefined4 **)(param_1 + 0x1b50) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(param_1 + 0x1b50);
    }
    fVar13 = (float)puVar9[(longlong)*(int *)(param_1 + 7000) * 3 + -3];
  }
  if ((fVar1 != fVar13) || (NAN(fVar1) || NAN(fVar13))) {
    *(float *)(param_1 + 0x1b60) = fVar13;
    uVar3 = *(ulonglong *)(param_1 + 0x38);
    if (uVar3 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406ec3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x58))(fVar1,param_1,uVar3,3);
      return;
    }
    uVar10 = (uint)uVar3;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
        lVar12 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar12 + 0x18);
        if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar12 + 8);
        }
        *puVar7 = *puVar7 | 8;
        *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1406ec3c4 FUN_1406ec3c4 body=261 status=ok
// SIG undefined FUN_1406ec3c4(void)

undefined8 FUN_1406ec3c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 == DAT_14cb72618) {
    local_5c[0] = 0;
  }
  else if ((lVar1 == DAT_14cb72620) || ((lVar1 != DAT_14cb72628 && (lVar1 != DAT_14cb725f8)))) {
    local_5c[0] = 1;
  }
  else {
    local_5c[0] = 2;
  }
  local_58 = 0;
  local_54 = 0;
  FUN_1447c3578(param_1 + 0x80,local_50);
  FUN_14070d2c0(param_2,local_50,local_5c,param_4);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar3 = local_50;
    if (0x18 < local_38) {
      pppuVar3 = (undefined8 ***)local_50[0];
    }
    (*pcVar2)(pppuVar3);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ec4ca FUN_1406ec4ca body=2791 status=ok
// SIG undefined FUN_1406ec4ca(void)

undefined8
FUN_1406ec4ca(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4,undefined8 param_5
             )

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  code ****ppppcVar15;
  double extraout_XMM0_Qa;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_210;
  wchar_t *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  code ***local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  longlong **local_1d0;
  longlong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  code ***local_1a0;
  undefined8 local_198;
  code ***local_190;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  char local_128;
  undefined8 ***local_110;
  undefined1 **ppuStack_108;
  double local_100;
  ushort local_f8;
  byte local_f0;
  code ***local_e8;
  undefined8 ***pppuStack_e0;
  double local_d8;
  double dStack_d0;
  byte local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  cVar4 = FUN_1456ca660(param_3);
  if (cVar4 != '\0') {
    ppppuVar7 = (undefined8 ****)(**(code **)(*param_2 + 0x10))(param_2);
    local_1c0 = *param_1;
    local_1b8 = &local_1c0;
    local_1b0 = &local_1a8;
    local_1a8 = 0;
    local_1d0 = &local_1b8;
    local_1d8 = &LAB_143cbcae0;
    if (ppppuVar7[8] != (undefined8 ***)0x0) {
      pppuStack_e0 = &local_110;
      ppuStack_108 = &local_1d8;
      local_e8 = (code ***)FUN_143cbca2e;
      local_190 = (code ***)&local_1a0;
      local_198 = FUN_1487df56e;
      local_1a0 = (code ***)&local_e8;
      local_110 = ppppuVar7;
      FUN_1447c5ba2();
      lVar13 = local_1a8;
      if ((local_1a8 != 0) && (FUN_14186d5a6(local_1a8,&local_198,param_3), local_128 == '\x01')) {
        if (*param_1 != DAT_14cb72618) goto LAB_1406ec823;
        dVar17 = local_138 - local_148 * 0.0;
        dVar16 = local_148 * 0.0 - local_140;
        dVar18 = local_140 * 0.0 + local_138 * -0.0;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar17 + dVar17;
        dVar18 = dVar18 + dVar18;
        if ((ABS((local_140 * dVar16 - dVar17 * local_138) + dVar18 * local_130 + 1.0) <= 1e-08) &&
           (uVar8 = 1,
           ABS((local_138 * dVar18 - dVar16 * local_148) + local_130 * dVar17 + 0.0) <= 1e-08))
        goto LAB_1406eca8d;
        if ((*(int *)((longlong)ppppuVar7 + 0x15c) == 0) ||
           ((uVar12 = *(uint *)(ppppuVar7 + 0x2b), (int)uVar12 < 0 || (DAT_14c9647dc <= (int)uVar12)
            ))) {
LAB_1406ec823:
          puVar9 = (undefined8 *)FUN_1407726b2(lVar13);
          uVar19 = (undefined4)*puVar9;
          uVar20 = (undefined4)((ulonglong)*puVar9 >> 0x20);
          uVar22 = (undefined4)puVar9[1];
          uVar23 = (undefined4)((ulonglong)puVar9[1] >> 0x20);
        }
        else {
          uVar11 = uVar12 >> 0x10;
          pdVar14 = (double *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar11 * 8));
          if ((pdVar14 == (double *)0x0) ||
             (((*(int *)(pdVar14 + 2) != *(int *)((longlong)ppppuVar7 + 0x15c) ||
               (((ulonglong)pdVar14[1] & 0x10200000) != 0)) || (dVar16 = *pdVar14, dVar16 == 0.0))))
          goto LAB_1406ec823;
          lVar13 = *(longlong *)((longlong)dVar16 + 0x1c8);
          if (lVar13 == 0) {
            uVar19 = SUB84(DAT_14c8464f8,0);
            uVar20 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
            uVar22 = SUB84(DAT_14c846500,0);
            uVar23 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
          }
          else {
            ppppcVar15 = *(code *****)(lVar13 + 0x240);
            ppppuVar7 = *(undefined8 *****)(lVar13 + 0x248);
            dVar17 = *(double *)(lVar13 + 0x250);
            dVar18 = *(double *)(lVar13 + 600);
            pdVar14 = *(double **)(lVar13 + 0x228);
            local_e8 = (code ***)ppppcVar15;
            pppuStack_e0 = ppppuVar7;
            local_d8 = dVar17;
            dStack_d0 = dVar18;
            if (pdVar14 == (double *)0x0) {
              uVar11 = 0x40;
              pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
              dVar16 = DAT_14c8463d8;
              *pdVar14 = DAT_14c8463d0;
              pdVar14[1] = dVar16;
              dVar16 = DAT_14c8463e8;
              pdVar14[2] = DAT_14c8463e0;
              pdVar14[3] = dVar16;
              dVar16 = DAT_14c846500;
              pdVar14[4] = DAT_14c8464f8;
              pdVar14[5] = dVar16;
              dVar16 = DAT_14c846508;
              pdVar14[6] = DAT_14c846508;
              *(double **)(lVar13 + 0x228) = pdVar14;
            }
            auVar2._8_4_ = (int)-(ulonglong)((double)ppppuVar7 != pdVar14[1]);
            auVar2._0_8_ = -(ulonglong)((double)ppppcVar15 != *pdVar14);
            auVar2._12_4_ = (int)(-(ulonglong)((double)ppppuVar7 != pdVar14[1]) >> 0x20);
            iVar6 = movmskpd(SUB84(dVar16,0),auVar2);
            auVar3._8_4_ = (int)-(ulonglong)(dVar18 != pdVar14[3]);
            auVar3._0_8_ = -(ulonglong)(dVar17 != pdVar14[2]);
            auVar3._12_4_ = (int)(-(ulonglong)(dVar18 != pdVar14[3]) >> 0x20);
            uVar12 = movmskpd(uVar11,auVar3);
            if ((uVar12 & 0x3fffffff) != 0 || iVar6 != 0) {
              pdVar14[2] = local_d8;
              pdVar14[3] = dStack_d0;
              *pdVar14 = (double)local_e8;
              pdVar14[1] = (double)pppuStack_e0;
              FUN_1448052ee(&local_e8,&local_110);
              pdVar14[6] = local_100;
              pdVar14[4] = (double)local_110;
              pdVar14[5] = (double)ppuStack_108;
            }
            uVar19 = SUB84(pdVar14[4],0);
            uVar20 = (undefined4)((ulonglong)pdVar14[4] >> 0x20);
            uVar22 = SUB84(pdVar14[5],0);
            uVar23 = (undefined4)((ulonglong)pdVar14[5] >> 0x20);
          }
        }
        FUN_1448052ee(&local_148,&local_1d8);
        FUN_1447c3578(param_1 + 8,&local_110,param_5);
        if (local_f0 == 3) {
          fVar21 = local_110._0_4_;
          bVar5 = 3;
        }
        else {
          FUN_1400b56fe(&local_e8,&local_110,3);
          fVar21 = 0.0;
          if (local_c8 != 0) {
            fVar21 = local_e8._0_4_;
          }
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppcVar15 = &local_e8;
            if (0x18 < dStack_d0._0_2_) {
              ppppcVar15 = (code ****)local_e8;
            }
            (*pcVar1)(ppppcVar15);
          }
          bVar5 = local_f0;
          if (0x18 < dStack_d0._0_2_) {
            FUN_1400020a8(local_e8);
            bVar5 = local_f0;
          }
        }
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
        if (pcVar1 != (code *)0x0) {
          ppppuVar7 = &local_110;
          if (0x18 < local_f8) {
            ppppuVar7 = (undefined8 ****)local_110;
          }
          (*pcVar1)(ppppuVar7);
        }
        if (0x18 < local_f8) {
          FUN_1400020a8(local_110);
        }
        dVar16 = (double)FUN_144719204((double)CONCAT44(uVar23,uVar22) + (double)fVar21,
                                       0x4076800000000000);
        dVar16 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                         (ulonglong)(dVar16 + 360.0) & -(ulonglong)(dVar16 < 0.0));
        dVar16 = (double)FUN_144719204((double)local_1d0 -
                                       (double)(float)(double)(~-(ulonglong)(180.0 < dVar16) &
                                                               (ulonglong)dVar16 |
                                                              (ulonglong)(dVar16 + -360.0) &
                                                              -(ulonglong)(180.0 < dVar16)),
                                       0x4076800000000000);
        dVar16 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                         (ulonglong)(dVar16 + 360.0) & -(ulonglong)(dVar16 < 0.0));
        fVar21 = 3.4e+38;
        if ((char)local_190 != '\0') {
          fVar21 = local_198._4_4_;
        }
        fVar24 = 0.0;
        if ((fVar21 < 3.4e+38) && ((char)param_1[0x1e] != '\0')) {
          FUN_1447c3578(param_1 + 0x17,&local_110,param_5);
          if (local_f0 == 3) {
            uVar12 = 3;
            fVar21 = local_110._0_4_;
          }
          else {
            FUN_1400b56fe(&local_e8,&local_110,3);
            fVar21 = 0.0;
            if (local_c8 != 0) {
              fVar21 = local_e8._0_4_;
            }
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
            if (pcVar1 != (code *)0x0) {
              ppppcVar15 = &local_e8;
              if (0x18 < dStack_d0._0_2_) {
                ppppcVar15 = (code ****)local_e8;
              }
              (*pcVar1)(ppppcVar15);
            }
            if (0x18 < dStack_d0._0_2_) {
              FUN_1400020a8(local_e8);
            }
            uVar12 = (uint)local_f0;
          }
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar7 = &local_110;
            if (0x18 < local_f8) {
              ppppuVar7 = (undefined8 ****)local_110;
            }
            (*pcVar1)(ppppuVar7);
          }
          if (0x18 < local_f8) {
            FUN_1400020a8(local_110);
          }
          fVar24 = 0.0;
          if (0.0 < fVar21) {
            plVar10 = (longlong *)FUN_1447262c2(param_5);
            if (plVar10 != (longlong *)0x0) {
              if (DAT_14cac9ca8 == 0) {
                local_e8 = (code ***)FUN_141030f22;
                local_1e0 = FUN_14081d0ea;
                local_1e8 = FUN_14081d0ea;
                local_1f8 = &LAB_1478c0a72;
                local_200 = &LAB_1417b2375;
                local_208 = L"Engine";
                local_210 = 0x1000000000;
                local_218 = 0x10000004;
                local_220 = 8;
                local_228 = 0x390;
                local_1f0 = (code ***)&local_e8;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
                  == DAT_14cac9ca8 + 0x30)) {
                (**(code **)(*plVar10 + 0x528))(plVar10,&local_e8,&local_110);
              }
            }
            fVar24 = (float)FUN_144a7ed88();
            fVar24 = fVar24 * 57.295776;
          }
        }
        lVar13 = 0x78;
        if (param_4 == '\0') {
          lVar13 = 8;
        }
        if ((char)param_1[0x16] == '\0') {
          lVar13 = 8;
        }
        FUN_1447c3578(lVar13 + (longlong)param_1,&local_110,param_5);
        if (local_f0 == 3) {
          uVar12 = 3;
          fVar21 = local_110._0_4_;
        }
        else {
          FUN_1400b56fe(&local_e8,&local_110,3);
          fVar21 = 0.0;
          if (local_c8 != 0) {
            fVar21 = local_e8._0_4_;
          }
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppcVar15 = &local_e8;
            if (0x18 < dStack_d0._0_2_) {
              ppppcVar15 = (code ****)local_e8;
            }
            (*pcVar1)(ppppcVar15);
          }
          if (0x18 < dStack_d0._0_2_) {
            FUN_1400020a8(local_e8);
          }
          uVar12 = (uint)local_f0;
        }
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
        if (pcVar1 != (code *)0x0) {
          ppppuVar7 = &local_110;
          if (0x18 < local_f8) {
            ppppuVar7 = (undefined8 ****)local_110;
          }
          (*pcVar1)(ppppuVar7);
        }
        fVar24 = fVar21 * 0.5 + fVar24;
        if (0x18 < local_f8) {
          FUN_1400020a8(local_110);
        }
        if (ABS((float)(double)(~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                               (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16))) <=
            fVar24) {
          if (*param_1 != DAT_14cb72618) {
            dVar16 = (double)FUN_144719204(CONCAT44(uVar20,uVar19),0x4076800000000000);
            dVar16 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                             (ulonglong)(dVar16 + 360.0) & -(ulonglong)(dVar16 < 0.0));
            FUN_144719204((double)local_1d8 -
                          (double)(float)(double)(~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16
                                                 | (ulonglong)(dVar16 + -360.0) &
                                                   -(ulonglong)(180.0 < dVar16)),0x4076800000000000)
            ;
            dVar16 = (double)(~-(ulonglong)(extraout_XMM0_Qa < 0.0) & (ulonglong)extraout_XMM0_Qa |
                             (ulonglong)(extraout_XMM0_Qa + 360.0) &
                             -(ulonglong)(extraout_XMM0_Qa < 0.0));
            if (fVar24 < ABS((float)(double)(~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                                            (ulonglong)(dVar16 + -360.0) &
                                            -(ulonglong)(180.0 < dVar16)))) goto LAB_1406eca8b;
          }
          uVar8 = 1;
          goto LAB_1406eca8d;
        }
      }
    }
  }
LAB_1406eca8b:
  uVar8 = 0;
LAB_1406eca8d:
  if ((local_c0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1406ecfb2 FUN_1406ecfb2 body=521 status=ok
// SIG undefined FUN_1406ecfb2(void)

void FUN_1406ecfb2(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 2;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  *puVar1 = &PTR_FUN_14a4af990;
  puVar1[0x1f] = &PTR_FUN_14a4afd00;
  puVar1[0x25] = &PTR_FUN_14a4afd50;
  puVar1[0x26] = &PTR_FUN_14a4afd80;
  *(undefined4 *)(puVar1 + 0x27) = 0;
  lVar4 = 0x140;
  do {
    FUN_1406ed1bc((longlong)puVar1 + lVar4);
    lVar4 = lVar4 + 0x118;
  } while (lVar4 != 0x488);
  lVar4 = 0x488;
  do {
    FUN_1406ed1bc((longlong)puVar1 + lVar4);
    lVar4 = lVar4 + 0x118;
  } while (lVar4 != 2000);
  lVar4 = 2000;
  do {
    FUN_1406ed1bc((longlong)puVar1 + lVar4);
    lVar4 = lVar4 + 0x118;
  } while (lVar4 != 0xb18);
  FUN_1406ed278(puVar1 + 0x163);
  puVar1[0x185] = 0;
  puVar1[0x186] = 0;
  *(undefined1 *)(puVar1 + 0x187) = 0;
  local_48 = 0xd2704c107b5ae74c;
  uStack_40 = 0xb212a5aa9585798;
  iVar3 = FUN_1448a256a(puVar1);
  if (iVar3 < 4) {
    cVar2 = '\0';
  }
  else {
    local_58 = 0xd2704c107b5ae74c;
    uStack_50 = 0xb212a5aa9585798;
    iVar3 = FUN_1448a256a(puVar1);
    cVar2 = '\x02' - (iVar3 < 6);
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(char *)((longlong)puVar1 + 0x59) = cVar2;
  *(undefined4 *)(puVar1 + 0x27) = 0x1ff;
  *(undefined1 *)((longlong)puVar1 + 0xda) = 1;
  *(undefined2 *)(puVar1 + 0x1b) = 0x101;
  *(undefined1 *)(puVar1 + 0x38) = 1;
  puVar1[0x37] = 0;
  *(undefined1 *)(puVar1 + 0x5b) = 1;
  puVar1[0x5a] = 0;
  *(undefined1 *)(puVar1 + 0x7e) = 1;
  puVar1[0x7d] = 0;
  *(undefined1 *)(puVar1 + 0xa1) = 1;
  puVar1[0xa0] = 0;
  *(undefined1 *)(puVar1 + 0xc4) = 1;
  puVar1[0xc3] = 0;
  *(undefined1 *)(puVar1 + 0xe7) = 1;
  puVar1[0xe6] = 0;
  *(undefined1 *)(puVar1 + 0x10a) = 1;
  puVar1[0x109] = 0x3ff0000000000000;
  *(undefined1 *)(puVar1 + 0x12d) = 1;
  puVar1[300] = 0x3ff0000000000000;
  *(undefined1 *)(puVar1 + 0x150) = 1;
  puVar1[0x14f] = 0x3ff0000000000000;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ed1bc FUN_1406ed1bc body=187 status=ok
// SIG undefined FUN_1406ed1bc(void)

void FUN_1406ed1bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a4644a0;
  *(undefined2 *)(param_1 + 10) = 0x404;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0x10000ea60;
  return;
}



// FUNCTION 1406ed278 FUN_1406ed278 body=187 status=ok
// SIG undefined FUN_1406ed278(void)

void FUN_1406ed278(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a46ea60;
  *(undefined2 *)(param_1 + 10) = 0x404;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0x10000ea60;
  return;
}



// FUNCTION 1406ed334 FUN_1406ed334 body=477 status=ok
// SIG undefined FUN_1406ed334(void)

undefined8 * FUN_1406ed334(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  longlong local_60;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a488de0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0x18) = (*(uint *)(param_1 + 0x18) & 0xfffffffc) + 1;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(byte *)((longlong)param_1 + 0xd4) = *(byte *)((longlong)param_1 + 0xd4) & 0xfe;
  *(undefined2 *)(param_1 + 0x1b) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xda) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  local_58 = "EaseInFunction";
  local_50 = 0xe;
  local_4c = 0;
  uVar1 = FUN_14001a6c0(&local_58,1);
  local_78 = FUN_1406ed582();
  local_68 = 0;
  local_70 = 1;
  lVar2 = FUN_140486aac(param_2,param_1,uVar1,local_78);
  local_60 = lVar2;
  FUN_144757f48(lVar2,1);
  *(undefined1 *)(lVar2 + 0x30) = 10;
  FUN_1406ed512(param_1 + 0xd,&local_60);
  local_58 = "EaseOutFunction";
  local_50 = 0xf;
  local_4c = 0;
  uVar1 = FUN_14001a6c0(&local_58,1);
  local_78 = FUN_1406ed582();
  local_68 = 0;
  local_70 = 1;
  pcVar3 = (char *)FUN_140486aac(param_2,param_1,uVar1,local_78);
  local_58 = pcVar3;
  FUN_144757f48(pcVar3,1);
  pcVar3[0x30] = '\n';
  FUN_1406ed512(param_1 + 0x10,&local_58);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ed512 FUN_1406ed512 body=111 status=ok
// SIG undefined FUN_1406ed512(void)

longlong * FUN_1406ed512(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1406ed582 FUN_1406ed582 body=221 status=ok
// SIG undefined FUN_1406ed582(void)

longlong FUN_1406ed582(void)

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
  if (DAT_14cab32b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14756d44b;
    local_40 = FUN_1432dd35d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneBuiltInEasingFunction",&DAT_14cab32b8,
                  &DAT_14756d44a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab32b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ed660 FUN_1406ed660 body=232 status=ok
// SIG undefined FUN_1406ed660(void)

undefined8 * FUN_1406ed660(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a492200;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  plVar5 = DAT_14cab3bf8;
  if (((((*(uint *)(param_1 + 1) & 8) != 0) && (DAT_14cab3bf0 != (longlong *)0x0)) &&
      (DAT_14cab3bf8 != (longlong *)0x0)) && (0 < (int)DAT_14cab3bf8[1])) {
    iVar3 = (int)DAT_14cab3bf8[1];
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      plVar4 = DAT_14cab3bf0;
    }
    (**(code **)(*plVar4 + 0x10))(0,param_1);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  return param_1;
}



// FUNCTION 1406ed755 FUN_1406ed755 body=812 status=ok
// SIG undefined FUN_1406ed755(void)

undefined8 * FUN_1406ed755(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b6240) && (FUN_144b3d300(&DAT_14c9b6240), DAT_14c9b6240 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c9b6238 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"r.Translucency.gbx.AfterMotionBlur.ForceDepthTestEnabled",1);
    _Init_thread_footer(&DAT_14c9b6240);
  }
  if (DAT_14c9b6238 == (longlong *)0x0) {
    puVar8 = &DAT_14c9c0d98;
    uVar12 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_14c9b6238 + 0xb0))();
    uVar12 = 0x11;
    if (iVar5 == 0) {
      uVar12 = 0;
    }
    puVar8 = &DAT_14c9c0d38;
    if (iVar5 == 0) {
      puVar8 = &DAT_14c9c0d98;
    }
  }
  uVar3 = *puVar8;
  puVar8 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar9 = (uint *)*puVar8;
  if (puVar9 != (uint *)0x0) goto LAB_1406ed803;
  while( true ) {
    FUN_14472e504(puVar8);
    puVar9 = (uint *)*puVar8;
LAB_1406ed803:
    puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar10 = puVar9[0x12];
    if (puVar13 + 0x13 <= puVar9 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
      LOCK();
      uVar1 = *puVar9;
      *puVar9 = *puVar9 + uVar10 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar10) != 0xffffffff) break;
      puVar9 = (uint *)*puVar8;
      *puVar9 = 0xffffffff;
      *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar8 = puVar9;
      puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
      uVar10 = 0;
      if (puVar13 + 0x13 <= puVar9 + 0x4000) {
        uVar10 = 1;
        goto LAB_1406ed881;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_1406ed881:
  *(undefined8 **)(puVar9 + 0x10) = puVar13 + 0x14;
  puVar9[0x12] = uVar10;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar9;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11f64 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x1111;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar3;
  *(undefined4 *)(puVar13 + 10) = uVar12;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 4;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar4 = DAT_14ca1c600;
  uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar11 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar11 = 1;
  }
  uVar12 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar4 + uVar11 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar2 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 0;
  if (param_2 != 0) {
    uVar12 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar12;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 1406edaa2 FUN_1406edaa2 body=380 status=ok
// SIG undefined FUN_1406edaa2(void)

undefined8 FUN_1406edaa2(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  int local_28;
  short local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_24 = -1;
  cVar3 = FUN_1406edc20(param_2,0);
  uVar6 = 0;
  if (cVar3 == '\0') goto LAB_1406edb99;
  if (local_24 < *(short *)(param_1 + 0x50)) {
    uVar9 = local_30 & 0xffffffff;
    if ((int)local_30 != 0) {
      if (local_28 != 0) {
        uVar5 = FUN_144a78877(uVar9,local_28);
        uVar9 = (ulonglong)uVar5;
      }
      iVar4 = FUN_140988aa2((longlong *)(param_1 + 0xb8),uVar9,&local_30);
      if (iVar4 != -1) {
        lVar7 = *(longlong *)(param_1 + 0xb8);
        uVar6 = 0;
        if ((lVar7 + (longlong)iVar4 * 0x20 == 0) ||
           (plVar8 = (longlong *)(lVar7 + (longlong)iVar4 * 0x20 + 0x10), plVar8 == (longlong *)0x0)
           ) goto LAB_1406edb99;
LAB_1406edb63:
        puVar2 = (undefined8 *)*plVar8;
        if (puVar2 != (undefined8 *)0x0) {
          cVar3 = FUN_1406edc20(param_2,1,&local_30);
          if (cVar3 == '\0') {
            uVar6 = *puVar2;
          }
          else {
            uVar6 = FUN_1406edcf6(puVar2,*(undefined2 *)(param_1 + 0x52),&local_30);
          }
          goto LAB_1406edb99;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar7 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xa8);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & (int)local_24) * 4);
    if (iVar4 != -1) {
      uVar6 = 0;
      do {
        psVar1 = (short *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x18);
        if (*psVar1 == local_24) {
          uVar6 = 0;
          if ((psVar1 != (short *)0x0) &&
             (plVar8 = (longlong *)(psVar1 + 4), uVar6 = 0, plVar8 != (longlong *)0x0))
          goto LAB_1406edb63;
          break;
        }
        iVar4 = *(int *)(psVar1 + 8);
      } while (iVar4 != -1);
      goto LAB_1406edb99;
    }
  }
  uVar6 = 0;
LAB_1406edb99:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1406edc20 FUN_1406edc20 body=213 status=ok
// SIG undefined FUN_1406edc20(void)

undefined2 FUN_1406edc20(int *param_1,uint param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  sVar1 = *(short *)((longlong)param_1 + (ulonglong)param_2 * 2 + 0x28);
  *(short *)(param_3 + 3) = sVar1;
  iVar2 = param_1[1];
  if (((((int)param_2 < iVar2) && (*param_1 != 0)) && (iVar2 != 0)) && (*param_1 != DAT_14c948000))
  {
    if ((iVar2 < 2) && (param_1[9] < 1)) {
      param_1 = param_1 + 2;
    }
    else {
      param_1 = *(int **)(param_1 + 6);
    }
    if (iVar2 != 1 || (int)param_2 < 1) {
      local_10 = param_1[(longlong)(int)param_2 * 3 + 2];
      local_18 = *(undefined8 *)(param_1 + (longlong)(int)param_2 * 3);
      goto LAB_1406edc59;
    }
  }
  local_10 = DAT_14c948620;
  local_18 = DAT_14c948618;
LAB_1406edc59:
  param_3[2] = local_10;
  *(undefined8 *)param_3 = local_18;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT11((char)((ushort)sVar1 >> 8),*param_3 != 0 || -1 < sVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406edcf6 FUN_1406edcf6 body=209 status=ok
// SIG undefined FUN_1406edcf6(void)

longlong FUN_1406edcf6(longlong param_1,short param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  sVar2 = (short)param_3[3];
  if (sVar2 < param_2) {
    iVar3 = *param_3;
    if (iVar3 != 0) {
      if (param_3[2] != 0) {
        iVar3 = FUN_144a78877(iVar3,param_3[2]);
      }
      iVar3 = FUN_14096a6cc((longlong *)(param_1 + 0x58),iVar3,param_3);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x58);
        if ((lVar4 + (longlong)iVar3 * 0x20 != 0) &&
           (plVar5 = (longlong *)((longlong)iVar3 * 0x20 + lVar4 + 0x10), plVar5 != (longlong *)0x0)
           ) {
          lVar4 = *plVar5;
LAB_1406edd63:
          if (lVar4 != 0) {
            return lVar4;
          }
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (int)sVar2) * 4);
    if (iVar3 != -1) {
      do {
        psVar1 = (short *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x18);
        if (*psVar1 == sVar2) {
          if (psVar1 == (short *)0x0) {
            return 0;
          }
          if ((longlong *)(psVar1 + 4) == (longlong *)0x0) {
            return 0;
          }
          lVar4 = *(longlong *)(psVar1 + 4);
          goto LAB_1406edd63;
        }
        iVar3 = *(int *)(psVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1406eddc8 FUN_1406eddc8 body=380 status=ok
// SIG undefined FUN_1406eddc8(void)

undefined8 * FUN_1406eddc8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14a9b3030;
  param_1[0x72] = &PTR_FUN_14a9b3670;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = param_1;
  if ((param_1 != (undefined8 *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = &PTR_FUN_14a9bb430;
  param_1[0x7f] = param_1 + 0x72;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  FUN_1446f470e(&local_38,L"Root",1);
  uVar2 = FUN_1406edf46();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_38,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x73] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x73];
  }
  param_1[0x39] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406edf46 FUN_1406edf46 body=228 status=ok
// SIG undefined FUN_1406edf46(void)

longlong FUN_1406edf46(void)

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
  if (DAT_14cae8da0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147b97757;
    local_40 = FUN_1417ddf07;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelInstanceComponent",&DAT_14cae8da0,&DAT_147b97756);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8da0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ee02c FUN_1406ee02c body=424 status=ok
// SIG undefined FUN_1406ee02c(void)

undefined8 * FUN_1406ee02c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a77e150;
  param_1[5] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = &PTR_FUN_14a5f7830;
  *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  memset(param_1 + 0x10,0,0xd8);
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000000;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x31] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  memset((void *)((longlong)param_1 + 0x1ac),0,0xa4);
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x65) = 2;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 2;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 2;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0x200000000;
  FUN_1403123fe(param_1);
  return param_1;
}



// FUNCTION 1406ee1e1 FUN_1406ee1e1 body=815 status=ok
// SIG undefined FUN_1406ee1e1(void)

undefined8 * FUN_1406ee1e1(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b6250) && (FUN_144b3d300(&DAT_14c9b6250), DAT_14c9b6250 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c9b6248 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"r.Translucency.gbx.AfterMotionBlur.ForceDepthTestEnabled",1);
    _Init_thread_footer(&DAT_14c9b6250);
  }
  if (DAT_14c9b6248 == (longlong *)0x0) {
    puVar8 = &DAT_14c9c0d98;
    uVar12 = 0;
  }
  else {
    iVar5 = (**(code **)(*DAT_14c9b6248 + 0xb0))();
    uVar12 = 0x11;
    if (iVar5 == 0) {
      uVar12 = 0;
    }
    puVar8 = &DAT_14c9c0d38;
    if (iVar5 == 0) {
      puVar8 = &DAT_14c9c0d98;
    }
  }
  uVar3 = *puVar8;
  puVar8 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar9 = (uint *)*puVar8;
  if (puVar9 != (uint *)0x0) goto LAB_1406ee28f;
  while( true ) {
    FUN_14472e504(puVar8);
    puVar9 = (uint *)*puVar8;
LAB_1406ee28f:
    puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar10 = puVar9[0x12];
    if (puVar13 + 0x13 <= puVar9 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
      LOCK();
      uVar1 = *puVar9;
      *puVar9 = *puVar9 + uVar10 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar10) != 0xffffffff) break;
      puVar9 = (uint *)*puVar8;
      *puVar9 = 0xffffffff;
      *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar8 = puVar9;
      puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
      uVar10 = 0;
      if (puVar13 + 0x13 <= puVar9 + 0x4000) {
        uVar10 = 1;
        goto LAB_1406ee30d;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_1406ee30d:
  *(undefined8 **)(puVar9 + 0x10) = puVar13 + 0x14;
  puVar9[0x12] = uVar10;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar9;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fe8 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x3232;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar3;
  *(undefined4 *)(puVar13 + 10) = uVar12;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 0xc;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar4 = DAT_14ca1c600;
  uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar11 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar11 = 1;
  }
  uVar12 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar4 + uVar11 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar2 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 0;
  if (param_2 != 0) {
    uVar12 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar12;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 1406ee510 FUN_1406ee510 body=123 status=ok
// SIG undefined FUN_1406ee510(void)

undefined1 FUN_1406ee510(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
    puVar2 = (undefined1 *)*param_1;
    lVar1 = (longlong)*(int *)(param_1 + 1) * 0x118;
    do {
      if (*(int *)(puVar2 + 4) == param_2) {
        if (puVar2 != (undefined1 *)0x0) goto LAB_1406ee57b;
        break;
      }
      puVar2 = puVar2 + 0x118;
      lVar1 = lVar1 + -0x118;
    } while (lVar1 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x47) != 0) {
    lVar3 = 0;
    lVar1 = 0;
    do {
      if (*(int *)(param_1[0x46] + lVar3) == param_2) {
        lVar1 = param_1[0x46] - lVar1;
        if (lVar1 == 0) {
          return 2;
        }
        puVar2 = (undefined1 *)(lVar1 + 0x10);
LAB_1406ee57b:
        return *puVar2;
      }
      lVar1 = lVar1 + -0x28;
      lVar3 = lVar3 + 0x28;
    } while (-lVar1 != (longlong)*(int *)(param_1 + 0x47) * 0x28);
  }
  return 2;
}



// FUNCTION 1406ee58c FUN_1406ee58c body=220 status=ok
// SIG undefined FUN_1406ee58c(void)

undefined4 *
FUN_1406ee58c(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee66a(param_1,&local_30,param_4,0);
  bVar4 = true;
  if (local_30 == (longlong *)0x0) goto LAB_1406ee5c5;
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\0') {
    uVar7 = (**(code **)(*local_30 + 0x30))();
LAB_1406ee619:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar7;
    uVar6 = 2;
  }
  else {
    if (cVar3 == '\x01') {
      uVar7 = *(undefined4 *)((longlong)local_30 + 0x6c);
      goto LAB_1406ee619;
    }
    if (cVar3 != '\x02') goto LAB_1406ee5c5;
    lVar5 = local_30[0xf];
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = (int)lVar5;
    uVar6 = 3;
  }
  *(undefined1 *)(param_2 + 8) = uVar6;
  bVar4 = false;
LAB_1406ee5c5:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (bVar4) {
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 8) = 3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406ee66a FUN_1406ee66a body=1010 status=ok
// SIG undefined FUN_1406ee66a(void)

undefined8 *
FUN_1406ee66a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
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
  code *local_58;
  longlong *plStack_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_1447262c2(param_3);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_148715fe1;
      local_80 = FUN_146508b0f;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb652c0);
    if (plVar4 != (longlong *)0x0) {
      if (DAT_14cb652c0 == 0) {
        local_70 = &local_58;
        local_58 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_148715fe1;
        local_80 = FUN_146508b0f;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb652c0);
      if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
        uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_1406eea98(uVar6,&local_58,&DAT_14cbd3378);
        plVar4 = plStack_50;
        pcVar2 = local_58;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar5 = plStack_50 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (pcVar2 != (code *)0x0) {
          lVar7 = *(longlong *)(param_1 + 0x10);
          if (lVar7 == 0) {
            uVar6 = FUN_1406eea5e();
            lVar7 = FUN_14477b664(uVar6);
            *(longlong *)(param_1 + 0x10) = lVar7;
          }
          lVar9 = *(longlong *)(param_1 + 0x18);
          if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
            plVar4 = *(longlong **)(lVar7 + 0xb8);
            if (plVar4 == (longlong *)0x0) {
LAB_1406eea55:
              lVar9 = 0;
            }
            else {
              cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4);
              if (cVar3 == '\0') goto LAB_1406eea55;
              uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar9 = FUN_144aff482(uVar6,(longlong *)(param_1 + 8));
            }
            *(longlong *)(param_1 + 0x18) = lVar9;
          }
          local_58 = (code *)0x0;
          plStack_50 = (longlong *)0x0;
          local_48 = 0;
          uVar6 = FUN_1406eea5e();
          plStack_50 = (longlong *)FUN_14477b664(uVar6);
          lVar7 = FUN_1406eea5e();
          uVar6 = FUN_1406eea5e();
          FUN_1402d1bfa(&local_40,uVar6,lVar9);
          if (local_58 != local_40) {
            local_48 = 0;
          }
          local_58 = local_40;
          lVar8 = FUN_1406eea5e();
          if (lVar7 == 0) {
LAB_1406ee7e7:
            lVar8 = lVar7;
          }
          else if (lVar8 == 0) {
            lVar8 = 0;
          }
          else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                   == lVar8 + 0x30)) goto LAB_1406ee7e7;
          if (plStack_50 != (longlong *)lVar8) {
            local_48 = 0;
          }
          uVar6 = FUN_14477b664(lVar8);
          plStack_50 = (longlong *)FUN_14477b664(uVar6);
          if ((local_40 != (code *)0x0) && (plStack_50 != (longlong *)0x0)) {
            local_48 = lVar9;
          }
          FUN_1406eed88(pcVar2,param_2,&local_58,param_4);
          goto LAB_1406ee82f;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1406ee82f:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406eea5e FUN_1406eea5e body=57 status=ok
// SIG undefined FUN_1406eea5e(void)

void FUN_1406eea5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3778 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3778 = FUN_140002ddd(FUN_1465b96d6,uVar1,L"GbxSkillTokenStackDef");
  }
  return;
}



// FUNCTION 1406eea98 FUN_1406eea98 body=178 status=ok
// SIG undefined FUN_1406eea98(void)

longlong * FUN_1406eea98(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_1406eeb4e();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1406eeaee;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1406eeaee:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406eeb4e FUN_1406eeb4e body=57 status=ok
// SIG undefined FUN_1406eeb4e(void)

void FUN_1406eeb4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3790 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3790 = FUN_140002ddd(FUN_1465b9c6e,uVar1,L"GbxSkillTokenStackProvider");
  }
  return;
}



// FUNCTION 1406eeb88 FUN_1406eeb88 body=391 status=ok
// SIG undefined FUN_1406eeb88(void)

undefined8 * FUN_1406eeb88(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x20c) & 1) != 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  plVar3 = (longlong *)(param_1 + 0x148);
  plVar1 = param_3 + 1;
  uVar5 = FUN_1447addd0(plVar1,0x10);
  iVar6 = FUN_1406eed16(plVar3,uVar5,plVar1);
  if (iVar6 != -1) {
    lVar4 = *plVar3 + (longlong)iVar6 * 0x28;
    if ((lVar4 != 0) && (*plVar3 + (longlong)iVar6 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar4 + 0x10);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      param_2[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      goto LAB_1406eec1b;
    }
  }
  (**(code **)(*param_3 + 8))(param_3,&local_60);
  local_70 = local_60;
  local_68 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FUN_14573a330(local_60,param_1 + 0x20,&local_70);
  local_50 = plVar1;
  local_48 = &local_60;
  FUN_14573a3d4(plVar3,&local_3c,&local_50,0);
  lVar4 = *(longlong *)(param_1 + 0x148);
  *param_2 = *(undefined8 *)(lVar4 + 0x10 + (longlong)local_3c * 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x18 + (longlong)local_3c * 0x28);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_1406eec1b:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406eed16 FUN_1406eed16 body=113 status=ok
// SIG undefined FUN_1406eed16(void)

int FUN_1406eed16(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1406eed88 FUN_1406eed88 body=945 status=ok
// SIG undefined FUN_1406eed88(void)

longlong * FUN_1406eed88(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = param_3[1];
  if (lVar8 == 0) {
    uVar7 = FUN_1406eea5e();
    lVar8 = FUN_14477b664(uVar7);
    param_3[1] = lVar8;
  }
  if (param_3[2] == 0) {
    if ((lVar8 == 0) || (*param_3 == 0)) {
LAB_1406eeea1:
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    plVar10 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
      param_3[2] = 0;
      goto LAB_1406eeea1;
    }
    uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar8 = FUN_144aff482(uVar7,param_3);
    param_3[2] = lVar8;
    if (lVar8 == 0) goto LAB_1406eeea1;
  }
  FUN_144224464(param_1,&local_48,param_3);
  plVar10 = local_40;
  *param_2 = local_48;
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
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if (param_4 != '\x01' || *param_2 != 0) goto LAB_1406eee37;
  lVar8 = param_3[1];
  if (lVar8 == 0) {
    uVar7 = FUN_1406eea5e();
    lVar8 = FUN_14477b664(uVar7);
    param_3[1] = lVar8;
  }
  if (((param_3[2] == 0) && (lVar8 != 0)) && (*param_3 != 0)) {
    plVar10 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar8 = FUN_144aff482(uVar7,param_3);
    }
    param_3[2] = lVar8;
  }
  FUN_1458bb1f1(&local_48);
  lVar8 = local_48;
  FUN_140df6136(param_1,&local_68);
  plVar10 = local_60;
  local_58 = local_68;
  local_50 = local_60;
  if (local_60 == (longlong *)0x0) {
    FUN_1456e5ab2(lVar8,&local_58);
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    FUN_1456e5ab2(lVar8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_60 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  lVar8 = local_48;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1406ef11f:
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1406ef11f;
      uVar7 = *puVar9;
    }
  }
  FUN_1458f8bd2(local_48,uVar7);
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_14663597a((longlong *)(param_1 + 0x28),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar8;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_40;
  if (local_40 == (longlong *)0x0) {
LAB_1406ef085:
    plVar10 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    lVar8 = local_48;
    if (local_40 == (longlong *)0x0) goto LAB_1406ef085;
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar10 = local_40;
  }
  *param_2 = lVar8;
  plVar5 = (longlong *)param_2[1];
  if (plVar10 == plVar5) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar5 = plVar10;
        goto joined_r0x0001406ef0cc;
      }
    }
  }
  else {
    param_2[1] = (longlong)plVar10;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001406ef0cc:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_1406eee37:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406ef13a FUN_1406ef13a body=452 status=ok
// SIG undefined FUN_1406ef13a(void)

void FUN_1406ef13a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406ef318 FUN_1406ef318 body=57 status=ok
// SIG undefined FUN_1406ef318(void)

void FUN_1406ef318(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f620 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f620 = FUN_140002ddd(FUN_146540aba,uVar1,L"UnlockableEntryDef");
  }
  return;
}



// FUNCTION 1406ef352 FUN_1406ef352 body=43 status=ok
// SIG undefined FUN_1406ef352(void)

bool FUN_1406ef352(undefined2 *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1406ef37d(*param_1);
  if ((cVar1 == '\0') || ((*(byte *)((longlong)param_1 + 0x3f) & 4) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 8) == 3;
  }
  return bVar2;
}



// FUNCTION 1406ef37d FUN_1406ef37d body=151 status=ok
// SIG undefined FUN_1406ef37d(void)

undefined8 FUN_1406ef37d(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  cVar3 = FUN_14019108b();
  lVar2 = DAT_14ca1cda8;
  if ((cVar3 == '\0') || ((~(&DAT_14ca814c8)[(param_1 & 0xffff) * 0xf] & 0x10400000) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar6 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar8 = 0;
    }
    else if (uVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = CONCAT44(extraout_var,DVar5);
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    uVar7 = CONCAT71((int7)(uVar6 >> 8),*(int *)(lVar2 + uVar8 * 4) != 0);
  }
  return uVar7;
}



// FUNCTION 1406ef414 FUN_1406ef414 body=2219 status=ok
// SIG undefined FUN_1406ef414(void)

void FUN_1406ef414(longlong param_1,longlong *param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  double *pdVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar25;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar26 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  ulonglong local_80;
  longlong *plVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar15 = (longlong *)param_2[0x86];
  uVar7 = (**(code **)(*plVar15 + 0x5e0))();
  uVar13 = SUB84(plVar15,0);
  *(undefined1 *)(param_1 + 0x13) = uVar7;
  *(undefined1 *)(param_1 + 0x11) = uVar7;
  lVar12 = param_2[0x39];
  if (lVar12 == 0) {
    puVar10 = &DAT_14c8464e0;
    uVar21 = (undefined4)DAT_14c8464f0;
    uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar21 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
    puVar10 = (undefined8 *)(lVar12 + 0x260);
  }
  uVar2 = puVar10[1];
  *(undefined8 *)(param_1 + 0x240) = *puVar10;
  *(undefined8 *)(param_1 + 0x248) = uVar2;
  *(ulonglong *)(param_1 + 0x250) = CONCAT44(uVar25,uVar21);
  lVar12 = param_2[0x39];
  if (lVar12 == 0) {
    local_88 = DAT_14c846508;
    local_98 = (undefined4)DAT_14c8464f8;
    uStack_94 = DAT_14c8464f8._4_4_;
    uStack_90 = (undefined4)DAT_14c846500;
    uStack_8c = DAT_14c846500._4_4_;
  }
  else {
    dVar22 = *(double *)(lVar12 + 0x240);
    dVar23 = *(double *)(lVar12 + 0x248);
    puVar4 = *(undefined8 **)(lVar12 + 0x250);
    dVar24 = *(double *)(lVar12 + 600);
    pdVar11 = *(double **)(lVar12 + 0x228);
    local_b8 = dVar22;
    uStack_b0 = dVar23;
    local_a8 = puVar4;
    dStack_a0 = dVar24;
    if (pdVar11 == (double *)0x0) {
      uVar13 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar6 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar6;
      dVar6 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar6;
      dVar6 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar11[5] = dVar6;
      puVar10 = DAT_14c846508;
      pdVar11[6] = (double)DAT_14c846508;
      *(double **)(lVar12 + 0x228) = pdVar11;
    }
    auVar26._8_8_ = -(ulonglong)(dVar24 != pdVar11[3]);
    auVar26._0_8_ = -(ulonglong)((double)puVar4 != pdVar11[2]);
    auVar3._8_4_ = (int)-(ulonglong)(dVar23 != pdVar11[1]);
    auVar3._0_8_ = -(ulonglong)(dVar22 != *pdVar11);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar23 != pdVar11[1]) >> 0x20);
    iVar9 = movmskpd((int)puVar10,auVar3);
    uVar14 = movmskpd(uVar13,auVar26);
    if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
      pdVar11[2] = (double)local_a8;
      pdVar11[3] = dStack_a0;
      *(undefined4 *)pdVar11 = (undefined4)local_b8;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_b8._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_b0._4_4_;
      FUN_1448052ee(&local_b8,&local_98);
      pdVar11[6] = (double)local_88;
      pdVar11[4] = (double)CONCAT44(uStack_94,local_98);
      pdVar11[5] = (double)CONCAT44(uStack_8c,uStack_90);
    }
    local_88 = (undefined8 *)pdVar11[6];
    local_98 = *(undefined4 *)(pdVar11 + 4);
    uStack_94 = *(undefined4 *)((longlong)pdVar11 + 0x24);
    uStack_90 = *(undefined4 *)(pdVar11 + 5);
    uStack_8c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
  }
  *(undefined8 **)(param_1 + 0x268) = local_88;
  *(undefined4 *)(param_1 + 600) = local_98;
  *(undefined4 *)(param_1 + 0x25c) = uStack_94;
  *(undefined4 *)(param_1 + 0x260) = uStack_90;
  *(undefined4 *)(param_1 + 0x264) = uStack_8c;
  (**(code **)(*param_2 + 0x328))(param_2,&local_b8);
  *(undefined8 **)(param_1 + 0x280) = local_a8;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)local_b8;
  *(undefined4 *)(param_1 + 0x274) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 0x278) = (undefined4)uStack_b0;
  *(undefined4 *)(param_1 + 0x27c) = uStack_b0._4_4_;
  lVar12 = param_2[0x8a];
  if (lVar12 == 0) {
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)((longlong)param_2 + 0x444);
  }
  else {
    uVar14 = *(uint *)(lVar12 + 0xc);
    *(uint *)(param_1 + 0x2d0) = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar9 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar9 = *(int *)(lVar19 + 0x10);
      bVar20 = iVar9 == 0;
      if (bVar20) {
        *(int *)(lVar19 + 0x10) = iVar17;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar9 = iVar17;
      }
    }
    *(int *)(param_1 + 0x2d4) = iVar9;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x444);
    *(undefined8 *)(param_1 + 0x2d8) = uVar2;
    if (*(char *)(lVar12 + 0x1fb) == '\x02') {
      *(longlong *)(param_1 + 0x298) = param_2[0x8d];
      uVar13 = *(undefined4 *)((longlong)param_2 + 0x45c);
      lVar19 = param_2[0x8c];
      uVar21 = *(undefined4 *)((longlong)param_2 + 0x464);
      *(int *)(param_1 + 0x288) = (int)param_2[0x8b];
      *(undefined4 *)(param_1 + 0x28c) = uVar13;
      *(int *)(param_1 + 0x290) = (int)lVar19;
      *(undefined4 *)(param_1 + 0x294) = uVar21;
    }
    if ((DAT_14c7613d8 != 0) && (*(char *)(lVar12 + 0x1fb) == '\x02')) {
      if (iVar9 == 0) {
LAB_1406efad6:
        uVar16 = 0;
      }
      else {
        uVar14 = *(uint *)(param_1 + 0x2d0);
        uVar16 = 0;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if ((puVar10 == (undefined8 *)0x0) ||
             ((*(int *)(puVar10 + 2) != iVar9 || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
          goto LAB_1406efad6;
          uVar16 = *puVar10;
        }
      }
      FUN_1406efcee(uVar16,uVar2,param_1 + 0x328,param_1 + 0x2a0);
    }
  }
  lVar12 = *(longlong *)(param_2[0x86] + 0x110);
  if (lVar12 != 0) {
    if (*(longlong *)(lVar12 + 0x120) == 0) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      iVar9 = 0;
    }
    else {
      uVar14 = *(uint *)(*(longlong *)(lVar12 + 0x120) + 0xc);
      *(uint *)(param_1 + 0x2e8) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar9 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar9 = *(int *)(lVar19 + 0x10);
        bVar20 = iVar9 == 0;
        if (bVar20) {
          *(int *)(lVar19 + 0x10) = iVar17;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar9 = iVar17;
        }
      }
    }
    *(int *)(param_1 + 0x2ec) = iVar9;
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(lVar12 + 0x128);
    uVar2 = *(undefined8 *)(lVar12 + 0x198);
    uVar16 = *(undefined8 *)(lVar12 + 0x1a0);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(lVar12 + 0x1a8);
    *(undefined8 *)(param_1 + 0x2f8) = uVar2;
    *(undefined8 *)(param_1 + 0x300) = uVar16;
    uVar13 = *(undefined4 *)(lVar12 + 0x1b0);
    uVar21 = *(undefined4 *)(lVar12 + 0x1b4);
    uVar25 = *(undefined4 *)(lVar12 + 0x1b8);
    uVar5 = *(undefined4 *)(lVar12 + 0x1bc);
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(lVar12 + 0x1c0);
    *(undefined4 *)(param_1 + 0x310) = uVar13;
    *(undefined4 *)(param_1 + 0x314) = uVar21;
    *(undefined4 *)(param_1 + 0x318) = uVar25;
    *(undefined4 *)(param_1 + 0x31c) = uVar5;
  }
  plVar15 = (longlong *)param_2[0x78];
  if (plVar15 == (longlong *)0x0) {
    local_a8 = DAT_14c846508;
    local_b8 = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    uStack_b0 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  }
  else {
    (**(code **)(*plVar15 + 0x680))(plVar15,&local_b8);
  }
  dVar22 = (double)FUN_144719204((int)local_a8,0x4076800000000000);
  dVar23 = (double)FUN_144719204(SUB84(uStack_b0,0),0x4076800000000000);
  dVar24 = (double)FUN_144719204(SUB84(local_b8,0),0x4076800000000000);
  *(ulonglong *)(param_1 + 0x2b8) =
       ~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
       (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0);
  *(ulonglong *)(param_1 + 0x2c0) =
       ~-(ulonglong)(dVar23 < 0.0) & (ulonglong)dVar23 |
       (ulonglong)(dVar23 + 360.0) & -(ulonglong)(dVar23 < 0.0);
  *(ulonglong *)(param_1 + 0x2c8) =
       ~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
       (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0);
  if ((param_2[0x78] == 0) && (plVar15 = (longlong *)param_2[0x2d], plVar15 != (longlong *)0x0)) {
    lVar12 = FUN_14490fee6();
    if ((*(int *)(lVar12 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
        lVar12 + 0x30)) {
      (**(code **)(*plVar15 + 0x680))(plVar15,&local_98);
      FUN_141706d70(&local_98,&local_b8);
      *(undefined8 **)(param_1 + 0x2c8) = local_a8;
      *(undefined4 *)(param_1 + 0x2b8) = (undefined4)local_b8;
      *(undefined4 *)(param_1 + 700) = local_b8._4_4_;
      *(undefined4 *)(param_1 + 0x2c0) = (undefined4)uStack_b0;
      *(undefined4 *)(param_1 + 0x2c4) = uStack_b0._4_4_;
    }
  }
  if (param_3 != 0) {
    if ((param_3 == 1) && ((char)param_2[0xaa] < '\0')) {
      FUN_140fb3d70(param_2 + 0xb7,param_2[0x86] + 0xd88);
    }
    goto LAB_1406ef834;
  }
  if (((param_2[0x85] != 0) && (lVar12 = *(longlong *)(param_2[0x85] + 0xae8), lVar12 != 0)) &&
     (plVar15 = *(longlong **)(lVar12 + 0x358), plVar15 != (longlong *)0x0)) {
    if (*(int *)((longlong)plVar15 + 0x1b4) < 1) {
      lVar12 = *plVar15;
      if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) {
        FUN_1456cec3c(lVar12);
      }
      local_b8 = 0.0;
      FUN_14485c47a(&local_b8,lVar12);
      *(double *)(param_1 + 0x364) = local_b8;
      *(int *)(param_1 + 0x36c) = (int)plVar15[0x29];
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)((longlong)plVar15 + 0x44);
      fVar1 = *(float *)((longlong)plVar15 + 0x14c);
      lVar12 = FUN_14479d2ce(param_1 + 0x364);
      *(float *)(param_1 + 0x374) = fVar1 * *(float *)(lVar12 + 0xb0);
      *(char *)(param_1 + 0x380) = (char)param_2[0xc0];
      *(undefined4 *)(param_1 + 900) = *(undefined4 *)((longlong)param_2 + 0x604);
      plVar15 = param_2 + 0xc2;
      plVar18 = (longlong *)(param_1 + 0x390);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *plVar18 = *plVar15;
        plVar15 = plVar15 + 1;
        plVar18 = plVar18 + 1;
      }
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  if ((0 < (int)param_2[0xb9]) || (0 < (int)param_2[0xbb])) {
    FUN_140fb3d70(param_1 + 0x3f0,param_2 + 0xb7);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  lVar12 = param_2[0xae];
  *(int *)(param_1 + 0x2e0) = (int)lVar12;
  iVar9 = DAT_14cad1f98;
  *(int *)(param_1 + 0x2e4) = DAT_14cad1f98;
  if ((*(int *)(param_1 + 0x1f8) != (int)lVar12) || (*(int *)(param_1 + 0x1fc) != iVar9)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  if ((((*(double *)(param_1 + 0x60) != 0.0) || (NAN(*(double *)(param_1 + 0x60)))) ||
      (*(double *)(param_1 + 0x68) != 0.0)) || (NAN(*(double *)(param_1 + 0x68)))) {
    bVar20 = false;
  }
  else {
    bVar20 = *(double *)(param_1 + 0x70) == 0.0;
  }
  if (((*(double *)(param_1 + 0x270) != 0.0) || (NAN(*(double *)(param_1 + 0x270)))) ||
     ((*(double *)(param_1 + 0x278) != 0.0 || (NAN(*(double *)(param_1 + 0x278)))))) {
    if (bVar20 != false) goto LAB_1406ef8a8;
  }
  else if (bVar20 != (*(double *)(param_1 + 0x280) == 0.0)) {
LAB_1406ef8a8:
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  bVar8 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x12) != *(char *)(param_1 + 0x13)) {
    bVar8 = bVar8 | 8;
    *(byte *)(param_1 + 0x10) = bVar8;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x550) >> 3 ^ bVar8) & 1) != 0) {
    *(byte *)(param_1 + 0x10) = bVar8 | 8;
  }
LAB_1406ef834:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406efcee FUN_1406efcee body=541 status=ok
// SIG undefined FUN_1406efcee(void)

ulonglong FUN_1406efcee(longlong *param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1 == (longlong *)0x0) {
    uVar6 = 0;
    local_108 = DAT_14c8463d0;
    dStack_100 = DAT_14c8463d8;
    local_f8 = DAT_14c8463e0;
    dStack_f0 = DAT_14c8463e8;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_2 == 0);
    if (param_2 != 0) {
      cVar5 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2);
      if (cVar5 != '\0') {
        (**(code **)(*param_1 + 0x4a8))(param_1,&local_108,param_2,0);
        uVar6 = CONCAT71((int7)((ulonglong)&local_108 >> 8),1);
        goto LAB_1406efdc6;
      }
    }
    local_108 = (double)param_1[0x48];
    dStack_100 = (double)param_1[0x49];
    local_f8 = (double)param_1[0x4a];
    dStack_f0 = (double)param_1[0x4b];
  }
LAB_1406efdc6:
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar7 = dStack_100 * dVar1 - local_108 * dVar2;
  dVar8 = local_108 * dVar3 - local_f8 * dVar1;
  dVar7 = dVar7 + dVar7;
  dVar4 = local_f8 * dVar2 - dStack_100 * dVar3;
  dVar8 = dVar8 + dVar8;
  dVar4 = dVar4 + dVar4;
  *param_4 = (dVar8 * local_f8 - dVar7 * dStack_100) + dStack_f0 * dVar4 + dVar1;
  param_4[1] = (local_108 * dVar7 - dVar4 * local_f8) + dStack_f0 * dVar8 + dVar2;
  param_4[2] = (dStack_100 * dVar4 - local_108 * dVar8) + dStack_f0 * dVar7 + dVar3;
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406eff12 FUN_1406eff12 body=297 status=ok
// SIG undefined FUN_1406eff12(void)

void FUN_1406eff12(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 local_58;
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb42180);
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    piVar5 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_58,0);
    if (piVar5 == (int *)0x0) {
      local_38 = -1;
    }
    else {
      local_38 = *piVar5;
      if ((longlong)local_38 != -1) {
        iVar2 = param_3[1];
        iVar3 = param_3[2];
        iVar4 = param_3[3];
        piVar5 = (int *)(*(longlong *)(param_1 + 0x698) + (longlong)local_38);
        *piVar5 = *param_3;
        piVar5[1] = iVar2;
        piVar5[2] = iVar3;
        piVar5[3] = iVar4;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_1406eff76;
      }
    }
    local_68 = &local_38;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_58,0,0);
    iVar2 = param_3[1];
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    piVar5 = (int *)(*(longlong *)(param_1 + 0x698) + (longlong)local_38);
    *piVar5 = *param_3;
    piVar5[1] = iVar2;
    piVar5[2] = iVar3;
    piVar5[3] = iVar4;
    FUN_140219f72(lVar1);
  }
  else {
    local_38 = *param_3;
    iStack_34 = param_3[1];
    iStack_30 = param_3[2];
    iStack_2c = param_3[3];
    FUN_1406f003c(*(longlong *)(param_1 + 0x760),param_2);
  }
LAB_1406eff76:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f003c FUN_1406f003c body=234 status=ok
// SIG undefined FUN_1406f003c(void)

void FUN_1406f003c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1406f00c3;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42180);
  local_38 = 0;
  uStack_30 = 0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  piVar6 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_48,0);
  if (piVar6 == (int *)0x0) {
    local_24 = -1;
LAB_1406f00ea:
    local_58 = &local_24;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_48,0,0);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(plVar2[4] + (longlong)local_24);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_140219f72(plVar2);
  }
  else {
    local_24 = *piVar6;
    if ((longlong)local_24 == -1) goto LAB_1406f00ea;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(plVar2[4] + (longlong)local_24);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1406f00c3:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f0128 FUN_1406f0128 body=34 status=ok
// SIG undefined FUN_1406f0128(void)

ulonglong FUN_1406f0128(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 1406f014a FUN_1406f014a body=476 status=ok
// SIG undefined FUN_1406f014a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406f014a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3ab18) && (FUN_144b3d300(&DAT_14cb3ab18), DAT_14cb3ab18 == -1)) {
    local_58 = &local_10;
    local_50 = DAT_14cb3aa88;
    local_48 = DAT_14cb3aa90;
    local_40 = DAT_14cb3aa98;
    local_38 = DAT_14cb3aaa0;
    local_30 = DAT_14cb3aaa8;
    local_28 = DAT_14cb3aab0;
    local_20 = DAT_14cb3aab8;
    local_18 = DAT_14cb3aac0;
    DAT_14cb3aae8 = 0;
    _DAT_14cb3aaf0 = 0;
    DAT_14cb3aac8 = 0;
    _DAT_14cb3aad0 = 0;
    _DAT_14cb3aaf4 = 0xffffffff00000080;
    DAT_14cb3aafc = 0;
    DAT_14cb3ab08 = (undefined *)0x0;
    DAT_14cb3ab10 = 0;
    local_60 = &local_50;
    FUN_1415d1052(&DAT_14cb3aac8);
    atexit(FUN_143a08bc7);
    _Init_thread_footer(&DAT_14cb3ab18);
  }
  if (DAT_14cb3aad0 != DAT_14cb3aafc) {
    uVar1 = (uint)((ulonglong)param_1 >> 0x10);
    uVar3 = (uint)param_1 & 0xffff;
    puVar4 = &DAT_14cb3ab00;
    if (DAT_14cb3ab08 != (undefined *)0x0) {
      puVar4 = DAT_14cb3ab08;
    }
    uVar2 = (ulonglong)
            (DAT_14cb3ab10 - 1U &
            (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar3) +
            (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4));
    iVar5 = *(int *)(puVar4 + uVar2 * 4);
    if (iVar5 != -1) {
      do {
        bVar6 = *(longlong *)(DAT_14cb3aac8 + (longlong)iVar5 * 0x10) == param_1;
        uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar6);
        if (bVar6) break;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + DAT_14cb3aac8 + 8);
      } while (iVar5 != -1);
      goto LAB_1406f01ee;
    }
  }
  uVar2 = 0;
LAB_1406f01ee:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1406f0328 FUN_1406f0328 body=95 status=ok
// SIG undefined FUN_1406f0328(void)

void FUN_1406f0328(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x70 + lVar3;
    do {
      iVar1 = *(int *)(lVar3 + 0x30);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x28);
        lVar5 = 0;
        do {
          (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x50))();
          lVar5 = lVar5 + 0x30;
        } while ((longlong)iVar1 * 0x30 != lVar5);
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 1406f038a FUN_1406f038a body=40 status=ok
// SIG undefined FUN_1406f038a(void)

undefined8 FUN_1406f038a(undefined8 param_1,int param_2)

{
  FUN_1406f03b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406f03b2 FUN_1406f03b2 body=175 status=ok
// SIG undefined FUN_1406f03b2(void)

void FUN_1406f03b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2b5bc0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x36);
  if ((param_1[0x1c] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1c] + 0x50));
  }
  if ((param_1[0x16] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x16] + 0x50));
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1406f0462 FUN_1406f0462 body=55 status=ok
// SIG undefined FUN_1406f0462(void)

void FUN_1406f0462(longlong *param_1)

{
  FUN_1406f049a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1406f049a FUN_1406f049a body=540 status=ok
// SIG undefined FUN_1406f049a(void)

void FUN_1406f049a(longlong *param_1,int param_2)

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
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar13 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_1406f04cf;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)
                [*(byte *)((longlong)iVar6 * 0x60 + *param_1 + 0x50)])();
      uVar11 = ~(uint)uVar13 & uVar11;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
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
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1406f04cf;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1406f04cf:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1406f06b6 caseD_1 body=1 status=ok
// SIG undefined caseD_1(void)

void switchD_143c3d4dc::caseD_1(void)

{
  return;
}



// FUNCTION 1406f06b8 caseD_5 body=1 status=ok
// SIG undefined caseD_5(void)

void switchD_143c3d4dc::caseD_5(void)

{
  return;
}



// FUNCTION 1406f06ba FUN_1406f06ba body=70 status=ok
// SIG undefined FUN_1406f06ba(void)

longlong FUN_1406f06ba(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14008ff36(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_1406f0700(lVar2,1);
  return lVar2;
}



// FUNCTION 1406f0700 FUN_1406f0700 body=30 status=ok
// SIG undefined FUN_1406f0700(void)

void FUN_1406f0700(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1406f071e FUN_1406f071e body=255 status=ok
// SIG undefined FUN_1406f071e(void)

void FUN_1406f071e(longlong param_1,int param_2)

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



// FUNCTION 1406f081e FUN_1406f081e body=59 status=ok
// SIG undefined FUN_1406f081e(void)

void FUN_1406f081e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1406f0882(param_1 + 0x70);
  FUN_1406f085a(param_1 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406f0855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1406f085a FUN_1406f085a body=39 status=ok
// SIG undefined FUN_1406f085a(void)

void FUN_1406f085a(longlong param_1)

{
  FUN_1406f08dc();
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1406f0882 FUN_1406f0882 body=89 status=ok
// SIG undefined FUN_1406f0882(void)

void FUN_1406f0882(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((plVar3 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar3 != (longlong *)0x0 && (*(uint *)(plVar3 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((*plVar3 != 0 && ((char)param_1[3] == '\x01')))
      ))) {
    piVar1 = (int *)(*plVar3 + 0x430);
    *piVar1 = *piVar1 + -1;
  }
  return;
}



// FUNCTION 1406f08dc FUN_1406f08dc body=113 status=ok
// SIG undefined FUN_1406f08dc(void)

void FUN_1406f08dc(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  
  puVar3 = (ushort *)*param_1;
  if (puVar3 != (ushort *)0x0) {
    bVar1 = *(byte *)((longlong)param_1 + 0xc);
    if (bVar1 != 0) {
      lVar4 = 0;
      do {
        lVar2 = 0;
        if ((ulonglong)*puVar3 != 0xffff) {
          lVar2 = *param_1 + (ulonglong)*puVar3;
        }
        (**(code **)(param_1[3] + 8 + lVar4))(lVar2);
        lVar4 = lVar4 + 0x10;
        puVar3 = puVar3 + 3;
      } while ((ulonglong)bVar1 * 0x10 != lVar4);
      puVar3 = (ushort *)*param_1;
    }
    FUN_1400020a8(puVar3);
    return;
  }
  return;
}



// FUNCTION 1406f094e FUN_1406f094e body=100 status=ok
// SIG undefined FUN_1406f094e(void)

void FUN_1406f094e(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    FUN_140498b54(param_1,param_3,param_4);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar1 = *param_2;
      lVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar4 * 4) = uVar1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1406f09b8 FUN_1406f09b8 body=257 status=ok
// SIG undefined FUN_1406f09b8(void)

undefined4 FUN_1406f09b8(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar9[1];
    plVar8 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1406f09f5;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar8 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1406f09f5:
  plVar7 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  iVar5 = (**(code **)(*DAT_14c8445c0 + 0xb0))();
  if (iVar5 != 0) {
    (**(code **)(*plVar7 + 0x78))(plVar7,uVar6);
    iVar5 = (**(code **)(*plVar7 + 0x88))(plVar7);
    if (iVar5 - 0xac00U < 0x2ba4) {
      while ((cVar4 = (**(code **)(*plVar7 + 0x30))(plVar7), cVar4 != '\0' &&
             (iVar5 = (**(code **)(*plVar7 + 0x98))(plVar7), iVar5 - 0xac00U < 0x2ba4))) {
        uVar6 = *(undefined4 *)((longlong)plVar7 + 0xc);
      }
    }
  }
  uVar6 = (**(code **)(*plVar8 + 0x78))(plVar8,uVar6);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  if (!bVar2) {
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
  }
  return uVar6;
}



// FUNCTION 1406f0aba FUN_1406f0aba body=187 status=ok
// SIG undefined FUN_1406f0aba(void)

void FUN_1406f0aba(longlong *param_1,float param_2)

{
  char cVar1;
  float fVar2;
  
  if ((((*(byte *)(param_1 + 0x5a) & 1) != 0) && (0.0 < *(float *)(param_1 + 0x5c))) &&
     (fVar2 = *(float *)(param_1 + 0x5c) - param_2, *(float *)(param_1 + 0x5c) = fVar2, fVar2 <= 0.0
     )) {
    (**(code **)(*param_1 + 0x418))(param_1);
  }
  if ((0.0 < *(float *)((longlong)param_1 + 0x1c4)) || (0.0 < *(float *)(param_1 + 0x3a))) {
    FUN_1406f0b96(param_1,param_2);
  }
  cVar1 = (**(code **)(*param_1 + 0x480))(param_1);
  if ((cVar1 == '\0') && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    if (param_1[6] != 0) {
      FUN_140b8233c(param_1[6] + 0xd88,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1406f0b96 FUN_1406f0b96 body=1148 status=ok
// SIG undefined FUN_1406f0b96(void)

void FUN_1406f0b96(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar6 = *(longlong **)(param_1[6] + 0x1b0);
  iVar4 = FUN_14487fd02();
  if ((iVar4 != 3) ||
     ((plVar6 != (longlong *)0x0 && (cVar2 = (**(code **)(*plVar6 + 0x700))(plVar6), cVar2 != '\0'))
     )) {
    cVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (((*(byte *)((longlong)param_1 + 0x2d2) & 2) == 0) == (bool)cVar2) {
      *(byte *)((longlong)param_1 + 0x2d2) =
           *(byte *)((longlong)param_1 + 0x2d2) & 0xfd | cVar2 * '\x02';
      uVar1 = param_1[0x2e];
      if (uVar1 < 0xffffffff00000000) {
        plVar10 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar10 = (longlong *)0x0;
        }
        (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar1,0xb);
      }
      else {
        uVar11 = (uint)uVar1;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
          puVar8 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar8 = DAT_14c998080;
          }
          if ((*(uint *)(puVar8 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
            puVar9 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar9 = (uint *)(lVar5 + 8);
            }
            *puVar9 = *puVar9 | 0x800;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x2d2) & 2) == 0) {
    fVar13 = *(float *)(param_1 + 0x3a);
    fVar12 = 0.0;
    if (0.0 < fVar13) {
      fVar12 = -1.0;
      goto LAB_1406f0c1f;
    }
    *(undefined4 *)(param_1 + 0x5b) = 0;
  }
  else {
    fVar13 = *(float *)((longlong)param_1 + 0x1c4);
    fVar12 = 0.0;
    if (fVar13 <= 0.0) {
      *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
    }
    else {
      fVar12 = 1.0;
LAB_1406f0c1f:
      fVar12 = fVar12 / fVar13;
    }
  }
  fVar13 = fVar12 * param_2 + *(float *)(param_1 + 0x5b);
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(param_1 + 0x5b) = fVar13;
  if ((*(byte *)((longlong)param_1 + 0x2d2) & 2) == 0) {
    if (*(int *)((longlong)param_1 + 0x2d4) == 1) {
      *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
      (**(code **)(*param_1 + 0x468))();
      fVar13 = *(float *)(param_1 + 0x5b);
    }
    if (((fVar13 == 0.0) && (!NAN(fVar13))) && (*(int *)((longlong)param_1 + 0x2d4) == 2)) {
      lVar5 = 0x478;
      goto LAB_1406f0e09;
    }
    if ((0.0 < fVar13) && (*(int *)((longlong)param_1 + 0x2d4) != 2)) {
      lVar5 = 0x470;
      uVar7 = 2;
      goto LAB_1406f0e0b;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x2d4) == 2) {
      *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
      (**(code **)(*param_1 + 0x478))();
      fVar13 = *(float *)(param_1 + 0x5b);
    }
    if (((fVar13 != 1.0) || (NAN(fVar13))) || (*(int *)((longlong)param_1 + 0x2d4) != 1)) {
      if ((1.0 <= fVar13) || (*(int *)((longlong)param_1 + 0x2d4) == 1)) goto LAB_1406f0d0a;
      lVar5 = 0x460;
      uVar7 = 1;
    }
    else {
      lVar5 = 0x468;
LAB_1406f0e09:
      uVar7 = 0;
    }
LAB_1406f0e0b:
    *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar7;
    (**(code **)(*param_1 + lVar5))(param_1);
  }
LAB_1406f0d0a:
  lVar5 = param_1[0x2f];
  if ((((*(char *)(lVar5 + 0x2b6) == '\x01') && (*(longlong *)(lVar5 + 0x268) != 0)) &&
      (plVar6 != (longlong *)0x0)) &&
     ((1 < *(int *)(lVar5 + 0x270) + 1U &&
      (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x5d8))(plVar6), plVar6 != (longlong *)0x0)))) {
    lVar5 = FUN_1449f3324();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
        ((*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30 && (plVar6[0x7a] != 0)))) &&
       (cVar2 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar2 != '\0')) {
      if (*(float *)(param_1 + 0x5b) <= 0.0001) {
        if ((*(byte *)((longlong)param_1 + 0x2d1) & 0x20) == 0) goto LAB_1406f0d1e;
        local_60 = *(undefined8 *)(param_1[0x2f] + 0x268);
        local_58 = *(undefined4 *)(param_1[0x2f] + 0x270);
        local_50 = 0;
        FUN_145815ce0(plVar6,&local_60,plVar6 + 300,0);
        bVar3 = *(byte *)((longlong)param_1 + 0x2d1) & 0xdf;
      }
      else {
        if ((*(byte *)((longlong)param_1 + 0x2d1) & 0x20) != 0) goto LAB_1406f0d1e;
        local_70 = param_1[6];
        local_48 = *(undefined8 *)(param_1[0x2f] + 0x268);
        local_40 = *(undefined4 *)(param_1[0x2f] + 0x270);
        local_38 = 0;
        local_78 = 0x3f800000;
        local_80 = 1;
        local_88 = 0;
        FUN_140cab31c(plVar6,&local_48,0xff,plVar6 + 300);
        bVar3 = *(byte *)((longlong)param_1 + 0x2d1) | 0x20;
      }
      *(byte *)((longlong)param_1 + 0x2d1) = bVar3;
    }
  }
LAB_1406f0d1e:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f103a FUN_1406f103a body=326 status=ok
// SIG undefined FUN_1406f103a(void)

void FUN_1406f103a(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  
  if ((*(byte *)(param_1 + 0x5a) & 4) != 0) goto LAB_1406f107d;
  if (*(char *)(param_1[0x2f] + 0x2b9) == '\x01') {
    lVar2 = param_1[6];
    bVar1 = *(byte *)(param_1 + 7);
    if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
      plVar3 = *(longlong **)
                (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (*(char *)(lVar2 + 0x178) == '\x03') {
        if ((plVar3 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,0), cVar4 == '\0')) {
LAB_1406f1172:
          FUN_148a20230(param_1[6]);
        }
      }
      else if (plVar3 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar3 + 0x2d8))();
        iVar6 = (**(code **)(*param_1 + 0x310))(param_1);
        if (iVar5 <= iVar6) goto LAB_1406f1172;
      }
    }
  }
  cVar4 = FUN_1406f1180(param_1[6]);
  lVar2 = *param_1;
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(lVar2 + 0x400))(param_1);
    if (cVar4 != '\0') {
LAB_1406f107d:
      (**(code **)(*param_1 + 0x410))(param_1);
      cVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (cVar4 == '\0') {
        return;
      }
      FUN_1406f11e6(param_1);
      return;
    }
    cVar4 = (**(code **)(*param_1 + 0x408))(param_1);
    if (cVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001406f10dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x430))(param_1);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x420);
    uVar7 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x420);
    uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001406f10d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar7);
  return;
}



// FUNCTION 1406f1180 FUN_1406f1180 body=101 status=ok
// SIG undefined FUN_1406f1180(void)

byte FUN_1406f1180(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  
  if (*(char *)(param_1 + 0xb51) != '\0') {
    return 1;
  }
  bVar2 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0xbe8) + 5 +
                  (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) & 1) != 0) {
      return 1;
    }
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 0x10 +
              (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
    param_1 = 0;
    if (plVar1 != (longlong *)0x0) {
      bVar2 = (**(code **)(*plVar1 + 800))(plVar1,0);
      bVar3 = 1;
      goto LAB_1406f11da;
    }
  }
  bVar2 = (byte)param_1;
  bVar3 = 0;
LAB_1406f11da:
  return bVar3 & bVar2;
}



// FUNCTION 1406f11e6 FUN_1406f11e6 body=133 status=ok
// SIG undefined FUN_1406f11e6(void)

void FUN_1406f11e6(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_140284960();
  fVar1 = (float)(~-(uint)(0.0 < fVar1) & 0x3dcccccd | (uint)(1.0 / fVar1) & -(uint)(0.0 < fVar1));
  if (0.0 < fVar1) {
    if ((*(byte *)(param_1 + 0x5a) & 4) == 0) {
      fVar2 = *(float *)(param_1 + 0x5c);
    }
    else {
      *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfb;
      fVar2 = 0.0;
    }
    fVar1 = fVar1 + fVar2;
    *(float *)(param_1 + 0x5c) = fVar1;
    if (fVar1 <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001406f1264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x418))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1406f126c FUN_1406f126c body=198 status=ok
// SIG undefined FUN_1406f126c(void)

ulonglong FUN_1406f126c(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong unaff_RDI;
  undefined7 uVar5;
  
  iVar4 = (**(code **)(*param_1 + 0x310))();
  if (0 < iVar4) {
    bVar1 = *(byte *)(param_1 + 7);
    if (((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) &&
       (plVar2 = *(longlong **)
                  (*(longlong *)(param_1[6] + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) {
      unaff_RDI = 0;
      cVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,0);
      if (cVar3 == '\0') goto LAB_1406f130b;
    }
  }
  uVar5 = (undefined7)(unaff_RDI >> 8);
  if (*(ushort *)(param_1 + 0x65) < *(ushort *)((longlong)param_1 + 0x32a)) {
    unaff_RDI = CONCAT71(uVar5,1);
    goto LAB_1406f130b;
  }
  iVar4 = (**(code **)(*param_1 + 0x3c8))(param_1);
  if (0 < iVar4) {
    unaff_RDI = CONCAT71(uVar5,*(int *)((longlong)param_1 + 0x2dc) < iVar4);
    goto LAB_1406f130b;
  }
  if (0 < *(int *)((longlong)param_1 + 0x2dc)) {
    if ((*(byte *)(param_1[0x2f] + 0x31) & 2) != 0) {
LAB_1406f1329:
      unaff_RDI = 0;
      goto LAB_1406f130b;
    }
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x16] + 0x2c0))();
      if (cVar3 != '\0') goto LAB_1406f1329;
    }
  }
  unaff_RDI = CONCAT71(uVar5,(*(byte *)(param_1 + 0x5a) & 0x10) == 0);
LAB_1406f130b:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1406f1332 FUN_1406f1332 body=86 status=ok
// SIG undefined FUN_1406f1332(void)

ulonglong FUN_1406f1332(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x2d2) & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
    if ((((int)(uint)bVar1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0xbf0)) &&
        (plVar2 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xbe8) + 0x10 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) &&
       (uVar3 = (**(code **)(*plVar2 + 0x2c0))(), 0 < (int)uVar3)) {
      return uVar3;
    }
  }
  return (ulonglong)*(uint *)(param_1 + 0x1dc);
}



// FUNCTION 1406f1388 FUN_1406f1388 body=203 status=ok
// SIG undefined FUN_1406f1388(void)

ulonglong FUN_1406f1388(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong unaff_RDI;
  
  if ((*(byte *)(param_1 + 0x5a) & 0x50) == 0x40) {
    iVar4 = (**(code **)(*param_1 + 0x310))();
    if (0 < iVar4) {
      bVar1 = *(byte *)(param_1 + 7);
      if (((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) &&
         (plVar2 = *(longlong **)
                    (*(longlong *)(param_1[6] + 0xbe8) + 0x10 +
                    (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) {
        unaff_RDI = 0;
        cVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,0);
        if (cVar3 == '\0') goto LAB_1406f139c;
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x3c8))(param_1);
    if (iVar4 != 0) {
      if ((longlong *)param_1[0x16] == (longlong *)0x0) {
        if (0.0001 < *(float *)(param_1 + 0x36) || *(float *)(param_1 + 0x36) == 0.0001) {
LAB_1406f1421:
          unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
          goto LAB_1406f139c;
        }
      }
      else {
        cVar3 = (**(code **)(*(longlong *)param_1[0x16] + 0x2c0))();
        if ((cVar3 == '\0') &&
           (cVar3 = (**(code **)(*(longlong *)param_1[0x16] + 0x2b8))(), cVar3 != '\0'))
        goto LAB_1406f1421;
      }
    }
  }
  unaff_RDI = 0;
LAB_1406f139c:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1406f1454 FUN_1406f1454 body=537 status=ok
// SIG undefined FUN_1406f1454(void)

void FUN_1406f1454(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x20;
  plVar2 = (longlong *)param_1[0x16];
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0xc] == '\x01')) {
    (**(code **)(*plVar2 + 0x2f0))(plVar2,1);
  }
  lVar6 = param_1[6];
  if (*(char *)(lVar6 + 0x178) == '\x03') {
    bVar1 = *(byte *)(param_1 + 7);
    if ((int)(uint)bVar1 < *(int *)(lVar6 + 0xbf0)) {
      plVar2 = *(longlong **)
                (*(longlong *)(lVar6 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
      }
    }
  }
  if ((param_2 != 0) && (*(ushort *)(param_1 + 0x65) < *(ushort *)((longlong)param_1 + 0x32a))) {
    (**(code **)(*param_1 + 0x410))(param_1);
  }
  FUN_1406f166e(param_1);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfe;
  iVar5 = (**(code **)(*param_1 + 0x3c8))(param_1);
  if (0 < iVar5) {
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    param_1[0x5d] = *(longlong *)(lVar6 + 0x6d0);
  }
  if (param_2 == 0) {
    if ((iVar5 < 2) || (*(float *)(param_1 + 0x36) <= 0.0)) goto LAB_1406f1513;
    bVar1 = *(byte *)(param_1 + 0x5a);
    bVar3 = bVar1 & 0xf7 | ((bVar1 & 8) >> 3 | (bVar1 & 0x50) == 0x40) << 3;
    bVar4 = bVar3 | 0x10;
    if ((bVar1 & 0x50) == 0x40) {
      bVar4 = bVar3;
    }
    *(byte *)(param_1 + 0x5a) = bVar4;
  }
  else if (*(float *)(param_1 + 0x5c) <= 0.0) goto LAB_1406f1513;
  (**(code **)(*param_1 + 0x3a8))(param_1);
LAB_1406f1513:
  if ((*(byte *)((longlong)param_1 + 0x2d1) & 1) != 0) {
    FUN_148a19bd4(param_1);
  }
  lVar6 = param_1[6];
  if ((*(byte *)(param_1[0x2f] + 0x31) & 2) != 0) {
    FUN_148a20e4a(lVar6,*(undefined1 *)(param_1[0x2f] + 0x30));
  }
  FUN_1447f69b6(param_1 + 0xe);
  if ((0 < *(int *)(lVar6 + 0xac8)) && (*(char *)(lVar6 + 0x178) == '\x03')) {
    FUN_1418ba386(lVar6 + 0xac0);
  }
  if ((param_2 & (*(byte *)(param_1 + 0x5a) & 1) == 0) == 1) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xdf;
  return;
}



// FUNCTION 1406f166e FUN_1406f166e body=340 status=ok
// SIG undefined FUN_1406f166e(void)

void FUN_1406f166e(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  
  plVar2 = (longlong *)param_1[6];
  if ((*(byte *)((longlong)plVar2 + 0xbdc) & 0x3f) != 0) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(byte *)((longlong)plVar2 + 0xbdc)) &
            0xffffffffffffffc0;
    uVar7 = CONCAT71((int7)(uVar7 >> 8),(char)uVar7 + '@');
    FUN_14099400a(plVar2,uVar7 & 0xffffffff,1);
    (**(code **)(*param_1 + 0x318))(param_1,uVar7 & 0xffffffff,0);
    plVar3 = *(longlong **)(param_1[6] + 0x1b0);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    pcVar4 = *(code **)(*plVar3 + 0x5e8);
    if (pcVar4 == FUN_140972dde) {
      if (plVar3[0x76] != 0) goto LAB_1406f1797;
      pcVar4 = *(code **)(*plVar3 + 0x5f8);
      if (pcVar4 == FUN_144784df4) {
        if (*(code **)(plVar3[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)plVar3 + 0x75b4) == 0) {
            return;
          }
          uVar1 = *(uint *)(plVar3 + 0xeb6);
          if ((int)uVar1 < 0) {
            return;
          }
          if (DAT_14c9647dc <= (int)uVar1) {
            return;
          }
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (plVar6 == (longlong *)0x0) {
            return;
          }
          if ((int)plVar6[2] != *(int *)((longlong)plVar3 + 0x75b4)) {
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
          lVar5 = lVar5 + 0x110;
        }
        else {
          lVar5 = (**(code **)(plVar3[0x784] + 0x18))(plVar3 + 0x784);
        }
        if (lVar5 == 0) {
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x20);
      }
      else {
        lVar5 = (*pcVar4)();
      }
      if (lVar5 == 0) {
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x3b0);
    }
    else {
      lVar5 = (*pcVar4)();
    }
    if (lVar5 != 0) {
LAB_1406f1797:
                    /* WARNING: Could not recover jumptable at 0x0001406f17a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x578))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1406f17c2 FUN_1406f17c2 body=242 status=ok
// SIG undefined FUN_1406f17c2(void)

void FUN_1406f17c2(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  float fVar6;
  
  lVar4 = param_1[6];
  if (*(char *)(lVar4 + 0x178) == '\x03') {
    bVar1 = *(byte *)(param_1 + 7);
    if ((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) {
      plVar2 = *(longlong **)
                (*(longlong *)(lVar4 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
      }
    }
  }
  FUN_1406f166e(param_1);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfe;
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  bVar1 = *(byte *)(param_1 + 0x5a);
  bVar5 = bVar1 & 0xf7 | ((bVar1 & 8) >> 3 | (bVar1 & 0x50) == 0x40) << 3;
  param_1[0x5d] = *(longlong *)(lVar4 + 0x6d0);
  fVar6 = *(float *)(param_1 + 0x36);
  if (fVar6 <= 0.01) {
    fVar6 = 0.01;
  }
  bVar3 = bVar5 | 0x10;
  if ((bVar1 & 0x50) == 0x40) {
    bVar3 = bVar5;
  }
  *(byte *)(param_1 + 0x5a) = bVar3;
  (**(code **)(*param_1 + 0x3a8))(param_1,fVar6);
  if ((*(byte *)((longlong)param_1 + 0x2d1) & 1) == 0) {
    return;
  }
  FUN_148a19bd4(param_1);
  return;
}



// FUNCTION 1406f18b4 FUN_1406f18b4 body=787 status=ok
// SIG undefined FUN_1406f18b4(void)

void FUN_1406f18b4(longlong *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar12 = param_2;
  if (param_1[0x60] != 0) {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar6;
    local_b8 = param_1[0x60];
    uVar5 = FUN_144a61814(uVar3);
    fVar12 = (float)FUN_144a1f182(uVar3,uVar5);
    if (fVar12 <= param_2) {
      fVar12 = param_2;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar6 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  uVar3 = *puVar6;
  fVar1 = *(float *)(param_1[6] + 0x74);
  uVar11 = -(uint)(0.0001 < fVar1);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar6 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_d0[2] = lVar7;
  *local_d0 = &PTR_FUN_14b4aa4c0;
  local_d0[3] = 0;
  iVar9 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_d0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar9 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar9 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar8;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar9 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar9;
  puVar6[4] = &LAB_143ec3f70;
  local_b8 = 0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_d8 = local_c0;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  FUN_1406f4044(uVar3,param_1 + 0x60,&local_b8,
                fVar12 * (float)(~uVar11 & 0x3f800000 | (uint)(1.0 / fVar1) & uVar11));
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 != 0) {
    if (local_d0 == (undefined8 *)0x0) goto LAB_1406f1a8b;
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1406f1a8b:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f1bc8 FUN_1406f1bc8 body=454 status=ok
// SIG undefined FUN_1406f1bc8(void)

longlong FUN_1406f1bc8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [36];
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    uVar2 = *(uint *)(param_1 + 0xf);
    lVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1406f1c4f;
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((((int)plVar4[2] == *(int *)((longlong)param_1 + 0x7c) &&
         ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar4 != (longlong *)0x0))))
    {
      lVar3 = (**(code **)(*(longlong *)*plVar4 + 0x180))();
      goto LAB_1406f1c4f;
    }
  }
  lVar3 = 0;
LAB_1406f1c4f:
  FUN_144928b90(param_2,1);
  uStack_30 = DAT_14cb7bba0;
  uStack_34 = DAT_14cb7bb98._4_4_;
  local_38 = (int)DAT_14cb7bb98;
  lVar1 = param_2 + 0x10;
  FUN_144928d62(lVar1,1,&local_38);
  local_48 = *param_1;
  local_40 = *(undefined4 *)(param_1 + 1);
  FUN_14013eb2c(param_2);
  local_50 = *(undefined4 *)(param_1 + 4);
  local_58 = param_1[3];
  FUN_14013eb54(param_2);
  local_60 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_68 = *(undefined8 *)((longlong)param_1 + 0x24);
  FUN_144928d62(lVar1,4);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x152) & 0xfe) != 4)) {
    local_38 = (int)*(undefined8 *)(lVar3 + 0x18);
    uStack_34 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
    FUN_1401533ba(&local_74,&local_38,1);
    if (local_74 == 0) {
      uStack_30 = DAT_14cb7bba0;
      local_38 = (int)DAT_14cb7bb98;
      uStack_34 = DAT_14cb7bb98._4_4_;
    }
    else {
      uStack_30 = local_6c;
      local_38 = local_74;
      uStack_34 = uStack_70;
    }
    FUN_144928d62(lVar1,1,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f1d90 FUN_1406f1d90 body=80 status=ok
// SIG undefined FUN_1406f1d90(void)

undefined8 FUN_1406f1d90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = 0xffffffff;
  if (0 < (longlong)(int)param_1[9]) {
    plVar2 = (longlong *)(param_1[8] + 8);
    uVar3 = 0;
    do {
      if (*plVar2 == param_3) {
        uVar1 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 2;
    } while ((longlong)(int)param_1[9] != uVar3);
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 1406f1de0 FUN_1406f1de0 body=199 status=ok
// SIG undefined FUN_1406f1de0(void)

longlong * FUN_1406f1de0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401cfb1c(param_1,&local_38);
  if (local_30 < 2) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar2[1];
  }
  else if (*(code **)(param_1 + 0x60) == (code *)0x0) {
    FUN_1401cfb1c(param_1,local_48,param_3);
    FUN_140233b1a(param_2,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(param_1 + 0x60))(param_2,param_3);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406f1ea8 FUN_1406f1ea8 body=216 status=ok
// SIG undefined FUN_1406f1ea8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406f1ea8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 in_XMM4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 9) = 4;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined1 *)(param_1 + 10) = 3;
  *(char *)(param_1 + 0xb) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0xc) = 0xff000000;
  *(undefined1 (*) [16])((longlong)param_1 + 100) = ZEXT816(0);
  *(undefined1 *)(param_1 + 1) = 1;
  auVar1 = _DAT_149931e80;
  auVar3 = pmovsxbq(ZEXT816(0),0x100);
  lVar2 = 4;
  auVar5 = pmovsxbq(in_XMM4,0x202);
  do {
    if (SUB168(auVar3 ^ auVar1,0) < -0x7ffffffffffffffa) {
      uVar6 = 0;
      if (lVar2 != 4) {
        uVar6 = 0x3f800000;
      }
      *(undefined4 *)((longlong)param_1 + lVar2 * 4 + -4) = uVar6;
    }
    if (SUB168(auVar3 ^ auVar1,8) < -0x7ffffffffffffffa) {
      *(undefined4 *)((longlong)param_1 + lVar2 * 4) = 0x3f800000;
    }
    lVar4 = auVar3._8_8_;
    auVar3._0_8_ = auVar3._0_8_ + auVar5._0_8_;
    auVar3._8_8_ = lVar4 + auVar5._8_8_;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 10);
  return;
}



// FUNCTION 1406f1f80 FUN_1406f1f80 body=23 status=ok
// SIG undefined FUN_1406f1f80(void)

bool FUN_1406f1f80(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x328))();
  return iVar1 == 0;
}



// FUNCTION 1406f1fe0 FUN_1406f1fe0 body=2513 status=ok
// SIG undefined FUN_1406f1fe0(void)

void FUN_1406f1fe0(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined4 uVar21;
  char cVar22;
  DWORD DVar23;
  DWORD DVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  double dVar31;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f2b4a();
  FUN_1406f29dc(param_1);
  lVar3 = param_1[0x67];
  if (((lVar3 != 0) && (lVar4 = param_1[0x130], lVar4 != 0)) && (*(char *)(lVar3 + 9) != '\0')) {
    lVar27 = param_1[0x68];
    if ((*(char *)(lVar3 + 0x294) == '\x02') && ((char)param_1[0x338] == '\x01')) {
      *(undefined1 *)(param_1 + 0x338) = 2;
      dVar5 = DAT_14c8464e8;
      param_1[0x335] = (longlong)DAT_14c8464e0;
      param_1[0x336] = (longlong)dVar5;
      param_1[0x337] = (longlong)DAT_14c8464f0;
    }
    if (lVar27 == 0) {
      memcpy((void *)(lVar4 + 0x30),(void *)(lVar3 + 0x40),0x2c8);
      plVar25 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
      if ((((char)param_1[0x78] == '\x01') &&
          ((plVar25 == (longlong *)0x0 ||
           (cVar22 = (**(code **)(*plVar25 + 0x6c8))(plVar25), cVar22 == '\0')))) ||
         (param_1[0x130] == 0)) {
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar2 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar2 != 2)) {
          if (iVar2 != 1) goto LAB_1406f20ec;
          DVar23 = FUN_140ad26c0();
          DVar24 = GetCurrentThreadId();
          if (DVar23 != DVar24) goto LAB_1406f20ec;
        }
        local_64 = 0;
        FUN_1406f348c(param_1,lVar3 + 0x310,lVar3 + 0x310);
      }
    }
    else {
      pfVar1 = (float *)(param_1 + 0x69);
      *(float *)(lVar4 + 0x30) =
           (*(float *)(lVar27 + 0x40) - *(float *)(lVar3 + 0x40)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x40);
      dVar7 = (double)*(float *)(param_1 + 0x69);
      dVar5 = (*(double *)(lVar27 + 0x58) - *(double *)(lVar3 + 0x58)) * dVar7 +
              *(double *)(lVar3 + 0x58);
      dVar6 = (*(double *)(lVar27 + 0x50) - *(double *)(lVar3 + 0x50)) * dVar7 +
              *(double *)(lVar3 + 0x50);
      dVar7 = (*(double *)(lVar27 + 0x48) - *(double *)(lVar3 + 0x48)) * dVar7 +
              *(double *)(lVar3 + 0x48);
      dVar31 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
      if (((dVar31 != 1.0) || (dVar8 = dVar5, dVar9 = dVar6, dVar10 = dVar7, NAN(dVar31))) &&
         (dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar31)) {
        dVar31 = 1.0 / SQRT(dVar31);
        dVar8 = dVar5 * dVar31;
        dVar9 = dVar6 * dVar31;
        dVar10 = dVar7 * dVar31;
      }
      *(double *)(lVar4 + 0x38) = dVar10;
      *(double *)(lVar4 + 0x40) = dVar9;
      *(double *)(lVar4 + 0x48) = dVar8;
      lVar26 = lVar27;
      if (*pfVar1 <= 0.5 && *pfVar1 != 0.5) {
        lVar26 = lVar3;
      }
      memcpy((void *)(lVar4 + 0x68),(void *)(lVar26 + 0x78),0x100);
      dVar7 = (double)*pfVar1;
      dVar5 = (*(double *)(lVar27 + 0x188) - *(double *)(lVar3 + 0x188)) * dVar7 +
              *(double *)(lVar3 + 0x188);
      dVar6 = (*(double *)(lVar27 + 0x180) - *(double *)(lVar3 + 0x180)) * dVar7 +
              *(double *)(lVar3 + 0x180);
      dVar7 = (*(double *)(lVar27 + 0x178) - *(double *)(lVar3 + 0x178)) * dVar7 +
              *(double *)(lVar3 + 0x178);
      dVar31 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
      if (((dVar31 != 1.0) || (dVar8 = dVar5, dVar9 = dVar6, dVar10 = dVar7, NAN(dVar31))) &&
         (dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar31)) {
        dVar31 = 1.0 / SQRT(dVar31);
        dVar8 = dVar5 * dVar31;
        dVar9 = dVar6 * dVar31;
        dVar10 = dVar7 * dVar31;
      }
      *(double *)(lVar4 + 0x168) = dVar10;
      *(double *)(lVar4 + 0x170) = dVar9;
      *(double *)(lVar4 + 0x178) = dVar8;
      *(float *)(lVar4 + 0x180) =
           (*(float *)(lVar27 + 400) - *(float *)(lVar3 + 400)) * *pfVar1 + *(float *)(lVar3 + 400);
      *(float *)(lVar4 + 0x184) =
           (*(float *)(lVar27 + 0x194) - *(float *)(lVar3 + 0x194)) * *pfVar1 +
           *(float *)(lVar3 + 0x194);
      lVar26 = lVar27;
      if (*pfVar1 <= 0.5 && *pfVar1 != 0.5) {
        lVar26 = lVar3;
      }
      puVar29 = (undefined8 *)(lVar26 + 0x1a0);
      puVar30 = (undefined8 *)(lVar4 + 400);
      for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
        *puVar30 = *puVar29;
        puVar29 = puVar29 + 1;
        puVar30 = puVar30 + 1;
      }
      dVar7 = (double)*pfVar1;
      dVar5 = (*(double *)(lVar27 + 0x210) - *(double *)(lVar3 + 0x210)) * dVar7 +
              *(double *)(lVar3 + 0x210);
      dVar6 = (*(double *)(lVar27 + 0x208) - *(double *)(lVar3 + 0x208)) * dVar7 +
              *(double *)(lVar3 + 0x208);
      dVar7 = (*(double *)(lVar27 + 0x200) - *(double *)(lVar3 + 0x200)) * dVar7 +
              *(double *)(lVar3 + 0x200);
      dVar31 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
      if (((dVar31 != 1.0) || (dVar8 = dVar5, dVar9 = dVar6, dVar10 = dVar7, NAN(dVar31))) &&
         (dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar31)) {
        dVar31 = 1.0 / SQRT(dVar31);
        dVar8 = dVar5 * dVar31;
        dVar9 = dVar6 * dVar31;
        dVar10 = dVar7 * dVar31;
      }
      *(double *)(lVar4 + 0x1f0) = dVar10;
      *(double *)(lVar4 + 0x1f8) = dVar9;
      *(double *)(lVar4 + 0x200) = dVar8;
      dVar5 = *(double *)(lVar27 + 0x228);
      dVar7 = *(double *)(lVar3 + 0x228);
      dVar6 = *(double *)(lVar27 + 0x220);
      dVar31 = *(double *)(lVar3 + 0x220);
      dVar8 = (double)*(float *)(param_1 + 0x69);
      *(double *)(lVar4 + 0x208) =
           (*(double *)(lVar27 + 0x218) - *(double *)(lVar3 + 0x218)) * dVar8 +
           *(double *)(lVar3 + 0x218);
      *(double *)(lVar4 + 0x210) = (dVar6 - dVar31) * dVar8 + dVar31;
      *(double *)(lVar4 + 0x218) = (dVar5 - dVar7) * dVar8 + dVar7;
      dVar5 = *(double *)(lVar27 + 0x240);
      dVar7 = *(double *)(lVar3 + 0x240);
      dVar6 = *(double *)(lVar27 + 0x238);
      dVar31 = *(double *)(lVar3 + 0x238);
      dVar8 = (double)*(float *)(param_1 + 0x69);
      *(double *)(lVar4 + 0x220) =
           (*(double *)(lVar27 + 0x230) - *(double *)(lVar3 + 0x230)) * dVar8 +
           *(double *)(lVar3 + 0x230);
      *(double *)(lVar4 + 0x228) = (dVar6 - dVar31) * dVar8 + dVar31;
      *(double *)(lVar4 + 0x230) = (dVar5 - dVar7) * dVar8 + dVar7;
      dVar5 = *(double *)(lVar27 + 600);
      dVar7 = *(double *)(lVar3 + 600);
      dVar6 = *(double *)(lVar27 + 0x250);
      dVar31 = *(double *)(lVar3 + 0x250);
      dVar8 = (double)*(float *)(param_1 + 0x69);
      *(double *)(lVar4 + 0x238) =
           (*(double *)(lVar27 + 0x248) - *(double *)(lVar3 + 0x248)) * dVar8 +
           *(double *)(lVar3 + 0x248);
      *(double *)(lVar4 + 0x240) = (dVar6 - dVar31) * dVar8 + dVar31;
      *(double *)(lVar4 + 0x248) = (dVar5 - dVar7) * dVar8 + dVar7;
      *(float *)(lVar4 + 0x250) =
           (*(float *)(lVar27 + 0x260) - *(float *)(lVar3 + 0x260)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x260);
      *(float *)(lVar4 + 0x254) =
           (*(float *)(lVar27 + 0x264) - *(float *)(lVar3 + 0x264)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x264);
      lVar26 = lVar27;
      if (*(float *)(param_1 + 0x69) <= 0.5 && *(float *)(param_1 + 0x69) != 0.5) {
        lVar26 = lVar3;
      }
      *(undefined1 *)(lVar4 + 600) = *(undefined1 *)(lVar26 + 0x268);
      lVar26 = lVar27;
      if (*(float *)(param_1 + 0x69) <= 0.5 && *(float *)(param_1 + 0x69) != 0.5) {
        lVar26 = lVar3;
      }
      *(undefined1 *)(lVar4 + 0x259) = *(undefined1 *)(lVar26 + 0x269);
      lVar26 = lVar27;
      if (*(float *)(param_1 + 0x69) <= 0.5 && *(float *)(param_1 + 0x69) != 0.5) {
        lVar26 = lVar3;
      }
      *(undefined1 *)(lVar4 + 0x25a) = *(undefined1 *)(lVar26 + 0x26a);
      *(float *)(lVar4 + 0x25c) =
           (*(float *)(lVar27 + 0x26c) - *(float *)(lVar3 + 0x26c)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x26c);
      *(float *)(lVar4 + 0x260) =
           (*(float *)(lVar27 + 0x270) - *(float *)(lVar3 + 0x270)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x270);
      *(float *)(lVar4 + 0x264) =
           (*(float *)(lVar27 + 0x274) - *(float *)(lVar3 + 0x274)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x274);
      *(float *)(lVar4 + 0x268) =
           (*(float *)(lVar27 + 0x278) - *(float *)(lVar3 + 0x278)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x278);
      *(float *)(lVar4 + 0x26c) =
           (*(float *)(lVar27 + 0x27c) - *(float *)(lVar3 + 0x27c)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x27c);
      *(float *)(lVar4 + 0x270) =
           (*(float *)(lVar27 + 0x280) - *(float *)(lVar3 + 0x280)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x280);
      *(float *)(lVar4 + 0x274) =
           (*(float *)(lVar27 + 0x284) - *(float *)(lVar3 + 0x284)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x284);
      *(float *)(lVar4 + 0x278) =
           (*(float *)(lVar27 + 0x288) - *(float *)(lVar3 + 0x288)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x288);
      *(float *)(lVar4 + 0x27c) =
           (*(float *)(lVar27 + 0x28c) - *(float *)(lVar3 + 0x28c)) * *(float *)(param_1 + 0x69) +
           *(float *)(lVar3 + 0x28c);
      lVar26 = lVar27;
      if (*(float *)(param_1 + 0x69) <= 0.5 && *(float *)(param_1 + 0x69) != 0.5) {
        lVar26 = lVar3;
      }
      *(undefined4 *)(lVar4 + 0x280) = *(undefined4 *)(lVar26 + 0x290);
      if (*(float *)(param_1 + 0x69) <= 0.5 && *(float *)(param_1 + 0x69) != 0.5) {
        lVar27 = lVar3;
      }
      *(undefined4 *)(lVar4 + 0x2b8) = *(undefined4 *)(lVar27 + 0x2c8);
      uVar11 = *(undefined4 *)(lVar27 + 0x298);
      uVar12 = *(undefined4 *)(lVar27 + 0x29c);
      uVar13 = *(undefined4 *)(lVar27 + 0x2a0);
      uVar14 = *(undefined4 *)(lVar27 + 0x2a4);
      uVar15 = *(undefined4 *)(lVar27 + 0x2a8);
      uVar16 = *(undefined4 *)(lVar27 + 0x2ac);
      uVar17 = *(undefined4 *)(lVar27 + 0x2b0);
      uVar18 = *(undefined4 *)(lVar27 + 0x2b4);
      uVar19 = *(undefined4 *)(lVar27 + 700);
      uVar20 = *(undefined4 *)(lVar27 + 0x2c0);
      uVar21 = *(undefined4 *)(lVar27 + 0x2c4);
      *(undefined4 *)(lVar4 + 0x2a8) = *(undefined4 *)(lVar27 + 0x2b8);
      *(undefined4 *)(lVar4 + 0x2ac) = uVar19;
      *(undefined4 *)(lVar4 + 0x2b0) = uVar20;
      *(undefined4 *)(lVar4 + 0x2b4) = uVar21;
      *(undefined4 *)(lVar4 + 0x298) = uVar15;
      *(undefined4 *)(lVar4 + 0x29c) = uVar16;
      *(undefined4 *)(lVar4 + 0x2a0) = uVar17;
      *(undefined4 *)(lVar4 + 0x2a4) = uVar18;
      *(undefined4 *)(lVar4 + 0x288) = uVar11;
      *(undefined4 *)(lVar4 + 0x28c) = uVar12;
      *(undefined4 *)(lVar4 + 0x290) = uVar13;
      *(undefined4 *)(lVar4 + 0x294) = uVar14;
      plVar25 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
      if ((((char)param_1[0x78] == '\x01') &&
          ((plVar25 == (longlong *)0x0 ||
           (cVar22 = (**(code **)(*plVar25 + 0x6c8))(plVar25), cVar22 == '\0')))) ||
         (param_1[0x130] == 0)) {
        if ((DAT_14c86a9f8 != '\x01') ||
           (iVar2 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar2 == 2)) {
LAB_1406f28b1:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
        }
        if (iVar2 == 1) {
          DVar23 = FUN_140ad26c0();
          DVar24 = GetCurrentThreadId();
          if (DVar23 == DVar24) goto LAB_1406f28b1;
        }
      }
    }
  }
LAB_1406f20ec:
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f29dc FUN_1406f29dc body=365 status=ok
// SIG undefined FUN_1406f29dc(void)

void FUN_1406f29dc(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((((*(longlong *)(param_1 + 0x338) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x338) + 9) == '\x01')) &&
      (*(longlong *)(param_1 + 0x980) != 0)) && (0 < *(int *)(param_1 + 0xcb8))) {
    lVar8 = 0x81;
    lVar9 = 0x1c;
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
      lVar6 = *(longlong *)(param_1 + 0xcb0);
      *(undefined1 *)(lVar6 + lVar8) = 1;
      *(undefined1 *)(lVar6 + -0x81 + lVar8) = *(undefined1 *)(lVar5 + 0x41 + lVar9);
      *(undefined8 *)(lVar6 + -0x69 + lVar8) = *(undefined8 *)(lVar5 + 0x54 + lVar9);
      puVar1 = (undefined8 *)(lVar5 + 0x44 + lVar9);
      uVar7 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + -0x79 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar1 = (undefined8 *)(lVar5 + 0x5c + lVar9);
      uVar7 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + -0x61 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      *(undefined8 *)(lVar6 + -0x51 + lVar8) = *(undefined8 *)(lVar5 + 0x6c + lVar9);
      *(undefined8 *)(lVar6 + -0x49 + lVar8) = *(undefined8 *)(lVar5 + 0x74 + lVar9);
      *(undefined4 *)(lVar6 + -0x41 + lVar8) = *(undefined4 *)(lVar5 + 0x34 + lVar9);
      *(undefined4 *)(lVar6 + -0x3d + lVar8) = *(undefined4 *)(lVar5 + 0x30 + lVar9);
      *(undefined4 *)(lVar6 + -0x39 + lVar8) = *(undefined4 *)(lVar5 + lVar9);
      *(undefined1 *)(lVar6 + -0x35 + lVar8) = *(undefined1 *)(lVar5 + 4 + lVar9);
      *(undefined4 *)(lVar6 + -0x31 + lVar8) = *(undefined4 *)(lVar5 + 8 + lVar9);
      cVar4 = *(char *)(lVar5 + 0xc + lVar9);
      *(char *)(lVar6 + -0x2d + lVar8) = cVar4;
      *(undefined4 *)(lVar6 + -0x29 + lVar8) = *(undefined4 *)(lVar5 + 0x10 + lVar9);
      if (cVar4 == '\x01') {
        *(undefined8 *)(lVar6 + -0x11 + lVar8) = *(undefined8 *)(lVar5 + 0x24 + lVar9);
        puVar3 = (undefined4 *)(lVar5 + 0x14 + lVar9);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        uVar13 = puVar3[2];
        uVar14 = puVar3[3];
      }
      else {
        *(undefined8 *)(lVar6 + -0x11 + lVar8) = DAT_14c8464f0;
        uVar11 = (undefined4)DAT_14c8464e0;
        uVar12 = DAT_14c8464e0._4_4_;
        uVar13 = (undefined4)DAT_14c8464e8;
        uVar14 = DAT_14c8464e8._4_4_;
      }
      puVar3 = (undefined4 *)(lVar6 + -0x21 + lVar8);
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      *(undefined4 *)(lVar6 + -9 + lVar8) = *(undefined4 *)(lVar5 + 0x38 + lVar9);
      *(undefined4 *)(lVar6 + -5 + lVar8) = *(undefined4 *)(lVar5 + 0x3c + lVar9);
      *(undefined1 *)(lVar6 + -1 + lVar8) = *(undefined1 *)(lVar5 + 0x40 + lVar9);
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x88;
      lVar9 = lVar9 + 0x98;
    } while (lVar10 < *(int *)(param_1 + 0xcb8));
  }
  return;
}



// FUNCTION 1406f2b4a FUN_1406f2b4a body=2369 status=ok
// SIG undefined FUN_1406f2b4a(void)

void FUN_1406f2b4a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  
  lVar9 = *(longlong *)(param_1 + 0x338);
  if (((lVar9 != 0) && (*(char *)(lVar9 + 9) == '\x01')) && (*(longlong *)(param_1 + 0x980) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x18) = *(undefined4 *)(lVar9 + 0x28);
    *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x1c) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x2c);
    lVar15 = *(longlong *)(param_1 + 0x340);
    if (lVar15 == 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x20) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x30);
      *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x24) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x34);
      *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x28) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x38);
      *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x2c) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x3c);
      if (0 < *(int *)(lVar9 + 0x20)) {
        lVar15 = 0;
        lVar16 = 0;
        do {
          lVar17 = *(longlong *)(lVar9 + 0x18);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + lVar15) =
               *(undefined1 *)(lVar17 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 4 + lVar15) =
               *(undefined4 *)(lVar17 + 4 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x10 + lVar15) =
               *(undefined4 *)(lVar17 + 0x10 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 8 + lVar15) =
               *(undefined4 *)(lVar17 + 8 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0xc + lVar15) =
               *(undefined4 *)(lVar17 + 0xc + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x14 + lVar15) =
               *(undefined4 *)(lVar17 + 0x14 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x18 + lVar15) =
               *(undefined4 *)(lVar17 + 0x18 + lVar15);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x20 + lVar15) =
               *(undefined1 *)(lVar17 + 0x20 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x24 + lVar15) =
               *(undefined4 *)(lVar17 + 0x24 + lVar15);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x28 + lVar15) =
               *(undefined1 *)(lVar17 + 0x28 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x2c + lVar15) =
               *(undefined4 *)(lVar17 + 0x2c + lVar15);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
          *(undefined8 *)(lVar10 + 0x40 + lVar15) = *(undefined8 *)(lVar17 + 0x40 + lVar15);
          puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar15);
          uVar14 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar15);
          *puVar2 = *puVar1;
          puVar2[1] = uVar14;
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x1c + lVar15) =
               *(undefined4 *)(lVar17 + 0x1c + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x48 + lVar15) =
               *(undefined4 *)(lVar17 + 0x48 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x4c + lVar15) =
               *(undefined4 *)(lVar17 + 0x4c + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x50 + lVar15) =
               *(undefined4 *)(lVar17 + 0x50 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x54 + lVar15) =
               *(undefined4 *)(lVar17 + 0x54 + lVar15);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x58 + lVar15) =
               *(undefined4 *)(lVar17 + 0x58 + lVar15);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x5c + lVar15) =
               *(undefined1 *)(lVar17 + 0x5c + lVar15);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x5d + lVar15) =
               *(undefined1 *)(lVar17 + 0x5d + lVar15);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
          *(undefined8 *)(lVar10 + 0x70 + lVar15) = *(undefined8 *)(lVar17 + 0x70 + lVar15);
          puVar1 = (undefined8 *)(lVar17 + 0x60 + lVar15);
          uVar14 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x60 + lVar15);
          *puVar2 = *puVar1;
          puVar2[1] = uVar14;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
          *(undefined8 *)(lVar10 + 0x88 + lVar15) = *(undefined8 *)(lVar17 + 0x88 + lVar15);
          puVar1 = (undefined8 *)(lVar17 + 0x78 + lVar15);
          uVar14 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x78 + lVar15);
          *puVar2 = *puVar1;
          puVar2[1] = uVar14;
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x90 + lVar15) =
               *(undefined8 *)(lVar17 + 0x90 + lVar15);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x98;
        } while (lVar16 < *(int *)(lVar9 + 0x20));
      }
    }
    else {
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x338) + 0x30);
      *(float *)(*(longlong *)(param_1 + 0x980) + 0x20) =
           (*(float *)(lVar15 + 0x30) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x338) + 0x34);
      *(float *)(*(longlong *)(param_1 + 0x980) + 0x24) =
           (*(float *)(*(longlong *)(param_1 + 0x340) + 0x34) - fVar3) * *(float *)(param_1 + 0x348)
           + fVar3;
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x338) + 0x38);
      *(float *)(*(longlong *)(param_1 + 0x980) + 0x28) =
           (*(float *)(*(longlong *)(param_1 + 0x340) + 0x38) - fVar3) * *(float *)(param_1 + 0x348)
           + fVar3;
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x338) + 0x3c);
      *(float *)(*(longlong *)(param_1 + 0x980) + 0x2c) =
           (*(float *)(*(longlong *)(param_1 + 0x340) + 0x3c) - fVar3) * *(float *)(param_1 + 0x348)
           + fVar3;
      if (0 < *(int *)(lVar9 + 0x20)) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          lVar10 = *(longlong *)(lVar9 + 0x18);
          lVar11 = *(longlong *)(lVar15 + 0x18);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + lVar16) =
               *(undefined1 *)(lVar10 + lVar16);
          fVar3 = *(float *)(lVar10 + 4 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 4 + lVar16) =
               (*(float *)(lVar11 + 4 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x10 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x10 + lVar16) =
               (*(float *)(lVar11 + 0x10 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 8 + lVar16);
          fVar18 = *(float *)(lVar11 + 8 + lVar16) - fVar3;
          if (3.1415927 < fVar18) {
            fVar18 = fVar18 + -6.2831855;
          }
          else if (fVar18 < -3.1415927) {
            fVar18 = fVar18 + 6.2831855;
          }
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 8 + lVar16) =
               fVar18 * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0xc + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0xc + lVar16) =
               (*(float *)(lVar11 + 0xc + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x14 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x14 + lVar16) =
               (*(float *)(lVar11 + 0x14 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x18 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x18 + lVar16) =
               (*(float *)(lVar11 + 0x18 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x20 + lVar16) =
               *(undefined1 *)(lVar10 + 0x20 + lVar16);
          fVar3 = *(float *)(lVar10 + 0x24 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x24 + lVar16) =
               (*(float *)(lVar11 + 0x24 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x28 + lVar16) =
               *(undefined1 *)(lVar10 + 0x28 + lVar16);
          fVar3 = *(float *)(lVar10 + 0x2c + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x2c + lVar16) =
               (*(float *)(lVar11 + 0x2c + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          dVar4 = *(double *)(lVar11 + 0x40 + lVar16);
          dVar5 = *(double *)(lVar10 + 0x40 + lVar16);
          dVar6 = *(double *)(lVar11 + 0x38 + lVar16);
          dVar7 = *(double *)(lVar10 + 0x30 + lVar16);
          dVar8 = *(double *)(lVar10 + 0x38 + lVar16);
          dVar13 = (double)*(float *)(param_1 + 0x348);
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
          *(double *)(lVar12 + 0x30 + lVar16) =
               (*(double *)(lVar11 + 0x30 + lVar16) - dVar7) * dVar13 + dVar7;
          *(double *)(lVar12 + 0x38 + lVar16) = (dVar6 - dVar8) * dVar13 + dVar8;
          *(double *)(lVar12 + 0x40 + lVar16) = (dVar4 - dVar5) * dVar13 + dVar5;
          fVar3 = *(float *)(lVar10 + 0x1c + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x1c + lVar16) =
               (*(float *)(lVar11 + 0x1c + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x48 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x48 + lVar16) =
               (*(float *)(lVar11 + 0x48 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x4c + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x4c + lVar16) =
               (*(float *)(lVar11 + 0x4c + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x50 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x50 + lVar16) =
               (*(float *)(lVar11 + 0x50 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x54 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x54 + lVar16) =
               (*(float *)(lVar11 + 0x54 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          fVar3 = *(float *)(lVar10 + 0x58 + lVar16);
          *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x58 + lVar16) =
               (*(float *)(lVar11 + 0x58 + lVar16) - fVar3) * *(float *)(param_1 + 0x348) + fVar3;
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x5c + lVar16) =
               *(undefined1 *)(lVar10 + 0x5c + lVar16);
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x5d + lVar16) =
               *(undefined1 *)(lVar10 + 0x5d + lVar16);
          dVar4 = *(double *)(lVar11 + 0x70 + lVar16);
          dVar5 = *(double *)(lVar10 + 0x70 + lVar16);
          dVar6 = *(double *)(lVar11 + 0x68 + lVar16);
          dVar7 = *(double *)(lVar10 + 0x60 + lVar16);
          dVar8 = *(double *)(lVar10 + 0x68 + lVar16);
          dVar13 = (double)*(float *)(param_1 + 0x348);
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
          *(double *)(lVar12 + 0x60 + lVar16) =
               (*(double *)(lVar11 + 0x60 + lVar16) - dVar7) * dVar13 + dVar7;
          *(double *)(lVar12 + 0x68 + lVar16) = (dVar6 - dVar8) * dVar13 + dVar8;
          *(double *)(lVar12 + 0x70 + lVar16) = (dVar4 - dVar5) * dVar13 + dVar5;
          dVar4 = *(double *)(lVar11 + 0x88 + lVar16);
          dVar5 = *(double *)(lVar10 + 0x88 + lVar16);
          dVar6 = *(double *)(lVar11 + 0x80 + lVar16);
          dVar7 = *(double *)(lVar10 + 0x78 + lVar16);
          dVar8 = *(double *)(lVar10 + 0x80 + lVar16);
          dVar13 = (double)*(float *)(param_1 + 0x348);
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x980) + 8);
          *(double *)(lVar12 + 0x78 + lVar16) =
               (*(double *)(lVar11 + 0x78 + lVar16) - dVar7) * dVar13 + dVar7;
          *(double *)(lVar12 + 0x80 + lVar16) = (dVar6 - dVar8) * dVar13 + dVar8;
          *(double *)(lVar12 + 0x88 + lVar16) = (dVar4 - dVar5) * dVar13 + dVar5;
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x980) + 8) + 0x90 + lVar16) =
               *(undefined8 *)(lVar10 + 0x90 + lVar16);
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x98;
        } while (lVar17 < *(int *)(lVar9 + 0x20));
      }
    }
  }
  return;
}



// FUNCTION 1406f348c FUN_1406f348c body=804 status=ok
// SIG undefined FUN_1406f348c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406f348c(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  double dVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x5b8))();
  if ((char)param_1[0x78] == '\x01') {
    if (plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
      if (cVar3 != '\0') goto LAB_1406f3546;
    }
  }
  else {
LAB_1406f3546:
    if (param_1[0x130] != 0) goto LAB_1406f3514;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_1406f3514;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) goto LAB_1406f3514;
  }
  dVar8 = (double)*param_3 - (double)*param_2;
  dVar2 = (double)param_3[1] - (double)param_2[1];
  dVar9 = (double)DAT_1499387d0;
  dVar20 = DAT_1499387d0._8_8_;
  auVar15._8_8_ = dVar8;
  auVar15._0_8_ = dVar2;
  auVar10 = divpd(auVar15,_DAT_1499387d0);
  auVar14._0_8_ = (DAT_14c846508 - DAT_14c846508) / 360.0;
  auVar14._8_8_ = 0;
  auVar10 = roundpd(auVar10,auVar10,3);
  auVar15 = roundpd(auVar14,auVar14,3);
  auVar21._0_8_ = (DAT_14c846508 - DAT_14c846508) - auVar15._0_8_ * dVar9;
  auVar21._8_8_ = 0.0 - auVar15._8_8_ * dVar20;
  dVar2 = dVar2 - auVar10._0_8_ * dVar9;
  dVar8 = dVar8 - auVar10._8_8_ * dVar20;
  auVar18._0_8_ = dVar2 + dVar9;
  auVar18._8_8_ = dVar8 + dVar20;
  auVar17._0_8_ = dVar9 + auVar21._0_8_;
  auVar17._8_8_ = dVar20 + auVar21._8_8_;
  auVar11._8_8_ = -(ulonglong)(0.0 <= dVar8);
  auVar11._0_8_ = -(ulonglong)(0.0 <= dVar2);
  auVar10._8_4_ = SUB84(dVar8,0);
  auVar10._0_8_ = dVar2;
  auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar15 = blendvpd(auVar18,auVar10,auVar11);
  auVar12._8_8_ = -(ulonglong)(0.0 <= auVar21._8_8_);
  auVar12._0_8_ = -(ulonglong)(0.0 <= auVar21._0_8_);
  auVar10 = blendvpd(auVar17,auVar21,auVar12);
  auVar16._0_8_ = auVar15._0_8_ + -360.0;
  auVar16._8_8_ = auVar15._8_8_ + -360.0;
  auVar13._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
  auVar13._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
  auVar15 = blendvpd(auVar15,auVar16,auVar13);
  dVar20 = auVar10._0_8_;
  fVar19 = *param_4;
  dVar9 = (double)fVar19;
  local_68 = (double)(~-(ulonglong)(180.0 < dVar20) & (ulonglong)dVar20 |
                     (ulonglong)(dVar20 + -360.0) & -(ulonglong)(180.0 < dVar20)) * dVar9 +
             DAT_14c846508;
  dVar20 = auVar15._8_8_ * dVar9 + (double)*param_2;
  dVar9 = auVar15._0_8_ * dVar9 + (double)param_2[1];
  local_78 = dVar9;
  local_70 = dVar20;
  if ((char)param_1[0x334] == '\0') {
    cVar3 = FUN_140a6a92e(param_2,&DAT_14cbe6f70);
    if (cVar3 == '\0') {
LAB_1406f3785:
      *(undefined1 *)(param_1 + 0x334) = 1;
      goto LAB_1406f3694;
    }
    cVar3 = FUN_140a6a92e(param_3,&DAT_14cbe6f70);
    if (cVar3 == '\0') goto LAB_1406f3785;
  }
  else {
LAB_1406f3694:
    *(float *)(param_1 + 0x333) = (float)dVar20;
    *(float *)((longlong)param_1 + 0x199c) = (float)dVar9;
    fVar19 = *param_4;
  }
  pfVar7 = param_3;
  if (fVar19 < 0.5) {
    pfVar7 = param_2;
  }
  FUN_1406f39a0(param_1,*(undefined1 *)(pfVar7 + 2),0);
  pfVar7 = param_3;
  if (*param_4 <= 0.5 && *param_4 != 0.5) {
    pfVar7 = param_2;
  }
  FUN_1406f37b2(param_1,*(char *)((longlong)pfVar7 + 9) != '\0');
  if (*param_4 <= 0.5 && *param_4 != 0.5) {
    param_3 = param_2;
  }
  if ((*(char *)((longlong)param_1 + 0x19a4) != *(char *)((longlong)param_3 + 10)) &&
     (*(char *)((longlong)param_1 + 0x19a4) = *(char *)((longlong)param_3 + 10), param_1[0x332] != 0
     )) {
    FUN_1440bc0ea();
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
  if (((plVar6 != (longlong *)0x0) && ((char)plVar6[0x2f] == '\x03')) &&
     (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 == '\0')) {
    (**(code **)(*plVar6 + 0x688))(plVar6,&local_78,1);
  }
LAB_1406f3514:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f37b2 FUN_1406f37b2 body=493 status=ok
// SIG undefined FUN_1406f37b2(void)

void FUN_1406f37b2(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x19a3) == '\0') == (bool)param_2) {
    if ((param_2 == '\0') || (*(char *)(param_1 + 0x1d40) != '\0')) {
      *(undefined1 *)(param_1 + 0x19a3) = 0;
    }
    else {
      cVar2 = FUN_148f015ca(param_1);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x19a3) = 2;
      }
      else {
        *(undefined1 *)(param_1 + 0x19a3) = 1;
        lVar3 = *(longlong *)(param_1 + 0xb0);
        if ((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) {
          uVar6 = FUN_148f01692(param_1);
          if (*(longlong *)(lVar3 + 0x1f0) == 0) {
            puVar4 = (undefined8 *)(lVar3 + 0x458);
          }
          else {
            puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
          }
          uVar1 = *puVar4;
          local_a8 = (undefined8 *)0x0;
          local_a0 = 0;
          FUN_1446efa72(&local_a8,0,3,0x10);
          puVar4 = local_a8;
          local_a0 = 3;
          *local_a8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_a8[2] = lVar5;
          *local_a8 = &PTR_FUN_14b9dd720;
          local_a8[3] = 0;
          FUN_14485c47a(local_a8 + 3,param_1);
          *(undefined4 *)(puVar4 + 5) = 0;
          puVar4[4] = &LAB_148f018b8;
          local_98 = 0;
          local_90 = 0;
          FUN_14487d8d8(&local_98,&local_a8);
          local_58 = 1;
          local_b0 = 0xbf800000;
          local_b8 = 0;
          FUN_1406f3fee(uVar1,param_1 + 0x1d98,&local_98,uVar6);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
          FUN_1449db362(&local_a8);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f39a0 FUN_1406f39a0 body=1384 status=ok
// SIG undefined FUN_1406f39a0(void)

void FUN_1406f39a0(longlong *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  float local_c0;
  undefined1 local_bc [4];
  undefined8 ***local_b8;
  float *local_b0;
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((param_2 != 0) && (cVar3 = FUN_1406f3f0a(param_1), cVar3 == '\0')) &&
      ((char)param_1[0x3a1] == '\x01')) && (*(char *)((longlong)param_1 + 0x1d0a) == '\x01')) {
    uVar1 = *(uint *)(param_1 + 0x3b6);
    if (0 < (int)uVar1) {
      uVar11 = 0xffffffff;
      uVar12 = 0;
      do {
        if (*(float *)(param_1[0x3b5] + uVar12 * 8) <= *(float *)((longlong)param_1 + 0x1d24)) {
          uVar11 = uVar12 & 0xffffffff;
        }
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar12);
      if (((uint)uVar11 < uVar1) && (0.0 < *(float *)(param_1[0x3b5] + 4 + uVar11 * 8))) {
        FUN_148f01424(param_1);
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
  if ((((char)param_1[0x78] != '\x01') ||
      ((plVar6 != (longlong *)0x0 && (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 != '\0')
       ))) && ((param_1[0x130] != 0 && param_2 == 0 &&
               ((cVar3 = FUN_1406f3f0a(param_1), cVar3 != '\0' && ((char)param_1[0x3a8] == '\0')))))
     ) {
    FUN_148f013a8(param_1);
    if ((param_1[0x332] != 0) && (*(byte *)(param_1[0x332] + 0x178) < 3)) {
      FUN_148c974b0();
    }
  }
  if ((param_2 & param_3) == 1) {
    cVar3 = *(char *)((longlong)param_1 + 0x19a1);
  }
  else {
    cVar3 = '\0';
  }
  if ((char)param_1[0x3a8] != '\0') {
    if ((param_3 == 1 && param_2 == 0) &&
       (((plVar6 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1),
         (char)param_1[0x78] != '\x01' ||
         ((plVar6 != (longlong *)0x0 &&
          (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 != '\0')))) &&
        (param_1[0x130] != 0)))) {
      *(byte *)((longlong)param_1 + 0x19a2) = param_2;
      param_3 = 0;
    }
    cVar3 = '\x01';
    param_2 = 1;
  }
  if ((*(byte *)((longlong)param_1 + 0x19a1) != param_2) || (cVar3 != '\0')) {
    if (param_1[0x332] == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1[0x332] + 0x1a00);
    }
    lVar7 = (**(code **)(*param_1 + 0x6d8))(param_1);
    if ((lVar10 != 0) && (lVar7 != 0)) {
      if (((byte)(param_2 ^ 1 | *(byte *)((longlong)param_1 + 0x19a1)) == 1) && (cVar3 == '\0')) {
        if (*(byte *)((longlong)param_1 + 0x19a1) != 0) {
          if (param_2 != 0) {
            lVar10 = (**(code **)(*param_1 + 0x6d8))(param_1);
            if (lVar10 == 0) {
              uVar5 = 1;
            }
            else {
              fVar14 = (float)FUN_14020975c(lVar10);
              if (fVar14 <= 1e-08) {
                uVar5 = 2;
              }
              else {
                if (*(longlong *)(lVar10 + 0x40) == 0) goto LAB_1406f3a4d;
                uVar5 = 3;
              }
            }
            *(undefined1 *)((longlong)param_1 + 0x1a6c) = uVar5;
          }
          *(undefined1 *)((longlong)param_1 + 0x19a1) = 0;
          FUN_14064ce80(lVar7 + 0xa0,DAT_14cbe6f68);
          FUN_1412d6856(lVar7);
          FUN_14573b790(lVar7);
        }
      }
      else {
        lVar8 = (**(code **)(*param_1 + 0x6d8))(param_1);
        if (lVar8 == 0) {
          *(undefined1 *)((longlong)param_1 + 0x1a6c) = 1;
        }
        else {
          fVar14 = (float)FUN_14020975c(lVar8);
          if (fVar14 <= 1e-08) {
            *(undefined1 *)((longlong)param_1 + 0x1a6c) = 2;
          }
          else if (*(longlong *)(lVar8 + 0x40) == 0) {
            *(undefined1 *)((longlong)param_1 + 0x1a6c) = 0;
            *(undefined1 *)((longlong)param_1 + 0x19a1) = 1;
            local_c8 = lVar7;
            uVar9 = FUN_1406f3fb0(lVar10 + 0x1248);
            local_b8 = (undefined8 ***)((ulonglong)local_b8 & 0xffffffffffffff00);
            local_90 = 0;
            FUN_1456bb102(&local_b8,param_1[0x332]);
            FUN_1448729ea(uVar9,local_88,&local_b8);
            fVar14 = (float)FUN_144a7ecd0(local_88);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar13 = local_88;
              if (0x18 < local_70) {
                ppppuVar13 = (undefined8 ****)local_88[0];
              }
              (*pcVar2)(ppppuVar13);
            }
            lVar10 = local_c8;
            if (0x18 < local_70) {
              FUN_1400020a8(local_88[0]);
            }
            FUN_144a5ac3a(&local_b8);
            lVar7 = (**(code **)(*param_1 + 0x6d0))(param_1);
            if (lVar7 != 0) {
              fVar14 = fVar14 * *(float *)(lVar7 + 0xa0);
            }
            cVar4 = FUN_1406f3f0a(param_1);
            local_c0 = 0.0;
            if (cVar4 == '\0') {
              local_c0 = fVar14;
            }
            local_b8 = local_88;
            local_88[0] = DAT_14cbe6f68;
            local_b0 = &local_c0;
            FUN_144a405ac(lVar10 + 0xa0,local_bc,&local_b8,0);
            FUN_1412d6856(lVar10);
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x1a6c) = 3;
          }
        }
      }
    }
  }
LAB_1406f3a4d:
  if (((param_3 != 0) &&
      ((plVar6 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1), (char)param_1[0x78] != '\x01'
       || ((plVar6 != (longlong *)0x0 &&
           (cVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar4 != '\0')))))) &&
     (param_1[0x130] != 0)) {
    *(byte *)((longlong)param_1 + 0x19a2) = param_2;
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
  if (((((char)param_1[0x78] != '\x01') ||
       ((plVar6 != (longlong *)0x0 &&
        (cVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar4 != '\0')))) && (param_1[0x130] != 0))
     && (((param_1[0x332] != 0 && (*(byte *)(param_1[0x332] + 0x178) < 3)) && (cVar3 != '\0')))) {
    FUN_148c978bc();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406f3f0a FUN_1406f3f0a body=165 status=ok
// SIG undefined FUN_1406f3f0a(void)

bool FUN_1406f3f0a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x1d40) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
       (*(longlong *)(param_1 + 0x1da0) != 0)) {
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x458);
      }
      else {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      local_18 = *(longlong *)(param_1 + 0x1da0);
      lVar1 = FUN_144a61814(*puVar2);
      if (lVar1 != 0) {
        bVar3 = *(char *)(lVar1 + 1) != '\x02';
        goto LAB_1406f3f44;
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
LAB_1406f3f44:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}


